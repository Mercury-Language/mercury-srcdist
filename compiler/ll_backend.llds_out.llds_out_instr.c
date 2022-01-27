/*
** Automatically generated from `llds_out_instr.m'
** by the Mercury compiler,
** version 14.01-beta-2014-01-02, configured for x86_64-apple-darwin12.5.0.
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


/* :- module ll_backend.llds_out.llds_out_instr. */
/* :- implementation. */

/*
INIT mercury__ll_backend__llds_out__llds_out_instr__init
ENDINIT
*/

#include "ll_backend.llds_out.llds_out_instr.mih"


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
#include "backend_libs.c_util.mih"
#include "backend_libs.export.mih"
#include "backend_libs.name_mangle.mih"
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
#include "ll_backend.code_info.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.layout_out.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
#include "ll_backend.pragma_c_gen.mih"
#include "ll_backend.trace_gen.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
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
#include "ll_backend.llds_out.llds_out_code_addr.mih"
#include "ll_backend.llds_out.llds_out_data.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 156 "ll_backend.llds_out.llds_out_instr.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_instr__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0;

#line 159 "ll_backend.llds_out.llds_out_instr.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_instr__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

#line 162 "ll_backend.llds_out.llds_out_instr.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_0;

#line 165 "ll_backend.llds_out.llds_out_instr.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_1;

#line 168 "ll_backend.llds_out.llds_out_instr.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_value_ordered_after_layout_label_0[2];

#line 171 "ll_backend.llds_out.llds_out_instr.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_name_ordered_after_layout_label_0[2];

#line 174 "ll_backend.llds_out.llds_out_instr.c"
static const MR_Integer ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__functor_number_map_after_layout_label_0[2];

#line 177 "ll_backend.llds_out.llds_out_instr.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr____Unify____after_layout_label_0_0_10001(
#line 180 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 182 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2);

#line 185 "ll_backend.llds_out.llds_out_instr.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr____Compare____after_layout_label_0_0_10001(
#line 188 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 190 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
#line 192 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_3);

#line 1559 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_99_114_95_104_112_95_110_111_95_114_101_117_115_101_95_95_91_57_93_95_48_11_p_0(
#line 1559 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_12,
#line 1559 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Lval_13,
#line 1559 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeTag_14,
#line 1559 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeOffset_15,
#line 1559 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Rval_16,
#line 1559 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeAllocId_17,
#line 1559 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_18,
#line 1559 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeRegionRval_19);

#line 312 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_115_116_114_117_99_116_105_111_110_95_108_105_115_116_95_119_104_105_108_101_95_95_91_54_93_95_48_8_p_0(
#line 312 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 312 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Label_2,
#line 312 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__3_3,
#line 312 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__HeadVar__4_4,
#line 312 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__ProfInfo_5);

#line 419 "llds_out_instr.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_float_dword_assignment__419__1_2_p_0(
#line 419 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Type_10,
#line 419 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_21);

#line 370 "llds_out_instr.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_instruction_list_while_block__370__1_2_p_0(
#line 370 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Instrs_15,
#line 370 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_39);

#line 1978 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_output_4_p_0(
#line 1978 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 1978 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Output_6);

#line 1960 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_p_0(
#line 1960 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1960 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2);

#line 1944 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_6_p_0(
#line 1944 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1944 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
#line 1944 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3,
#line 1944 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_4);

#line 1851 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_p_0(
#line 1851 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1851 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2);

#line 1836 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_6_p_0(
#line 1836 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1836 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
#line 1836 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3,
#line 1836 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_4);

#line 1820 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_p_0(
#line 1820 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1);

#line 1770 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_p_0(
#line 1770 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 1770 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Component_6);

#line 1749 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_p_0(
#line 1749 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1);

#line 1738 "llds_out_instr.m"
static MR_Integer MR_CALL 
ll_backend__llds_out__llds_out_instr__max_leaf_stack_frame_size_0_f_0(void);

#line 1729 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_p_0(
#line 1729 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 1729 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__EmbeddedFrame_6);

#line 1704 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_alloc_site_id_4_p_0(
#line 1704 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 1704 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__AllocId_6);

#line 1692 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_maybe_alloc_site_id_4_p_0(
#line 1692 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 1692 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeAllocId_6);

#line 1532 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_p_0(
#line 1532 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1);

#line 1524 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_p_0(
#line 1524 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1);

#line 1376 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_goto_5_p_0(
#line 1376 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
#line 1376 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Target_7,
#line 1376 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_8);

#line 1352 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_p_0(
#line 1352 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
#line 1352 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Label_7,
#line 1352 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__3_3);

#line 1331 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_defn_3_p_0(
#line 1331 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1);

#line 1278 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_live_value_type_3_p_0(
#line 1278 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1);

#line 1249 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_layout_locns_4_p_0(
#line 1249 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1249 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2);

#line 1236 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_p_0(
#line 1236 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1236 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2);

#line 1220 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_p_0(
#line 1220 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1220 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2);

#line 1205 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_p_0(
#line 1205 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 1205 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__LiveVals_6);

#line 1068 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_call_6_p_0(
#line 1068 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
#line 1068 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Target_8,
#line 1068 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Continuation_9,
#line 1068 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_10);

#line 1037 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_p_0(
#line 1037 "llds_out_instr.m"
  MR_Integer ll_backend__llds_out__llds_out_instr__Next_6,
#line 1037 "llds_out_instr.m"
  MR_Integer ll_backend__llds_out__llds_out_instr__Max_7,
#line 1037 "llds_out_instr.m"
  MR_String ll_backend__llds_out__llds_out_instr__Type_8);

#line 1027 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_block_end_2_p_0(void);

#line 1008 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_block_start_4_p_0(
#line 1008 "llds_out_instr.m"
  MR_Integer ll_backend__llds_out__llds_out_instr__TempR_5,
#line 1008 "llds_out_instr.m"
  MR_Integer ll_backend__llds_out__llds_out_instr__TempF_6);

#line 993 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_livevals_4_p_0(
#line 993 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 993 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2);

#line 969 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_comment_chars_4_p_0(
#line 969 "llds_out_instr.m"
  MR_Char ll_backend__llds_out__llds_out_instr__HeadVar__1_1,
#line 969 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2);

#line 849 "llds_out_instr.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_3(
#line 849 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg);

#line 900 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_2(
#line 900 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg,
#line 900 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 900 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
#line 900 "llds_out_instr.m"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_3);

#line 890 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_1(
#line 890 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg,
#line 890 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 890 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
#line 890 "llds_out_instr.m"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_3);

#line 500 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(
#line 500 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
#line 500 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_7,
#line 500 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__ProfInfo_8);

#line 467 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(
#line 467 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
#line 467 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_8,
#line 467 "llds_out_instr.m"
  MR_String ll_backend__llds_out__llds_out_instr__Comment_9,
#line 467 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__ProfInfo_10);

#line 419 "llds_out_instr.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_5_p_0_1(
#line 419 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg);

#line 410 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_5_p_0(
#line 410 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
#line 410 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Lval_7,
#line 410 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Rval_8);

#line 396 "llds_out_instr.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__is_aligned_float_dword_assignment_4_p_0(
#line 396 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__InstrA_5,
#line 396 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__InstrB_6,
#line 396 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__LvalA_7,
#line 396 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__Rval_8);

#line 370 "llds_out_instr.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_p_0_1(
#line 370 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg);

#line 358 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_p_0(
#line 358 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 358 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
#line 358 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Label_3,
#line 358 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__ProfInfo_4);

#line 232 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_p_0(
#line 232 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
#line 232 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Component_8,
#line 232 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22,
#line 232 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23);

#line 201 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0_2(
#line 201 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg,
#line 201 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 201 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
#line 201 "llds_out_instr.m"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_3,
#line 201 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_4,
#line 201 "llds_out_instr.m"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_5);

#line 114 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0_1(
#line 114 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg,
#line 114 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 114 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
#line 114 "llds_out_instr.m"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_3,
#line 114 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_4,
#line 114 "llds_out_instr.m"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_5);

#line 95 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0(
#line 95 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
#line 95 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_8,
#line 95 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81,
#line 95 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);


static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_1[5][2];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_2[1][1];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_3[2][9];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_4[2][5];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_5[1][7];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_6[1][4];




static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "DEBUG"))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_3[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_instr__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_instr__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_instr__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_instr__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_instr__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_instr__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_6[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 758 "ll_backend.llds_out.llds_out_instr.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_instr__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0
  }
};

#line 766 "ll_backend.llds_out.llds_out_instr.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_instr__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 774 "ll_backend.llds_out.llds_out_instr.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_0 = {
  (MR_String) "not_after_layout_label",
  (MR_Integer) 0
};

#line 780 "ll_backend.llds_out.llds_out_instr.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_1 = {
  (MR_String) "after_layout_label",
  (MR_Integer) 1
};

#line 786 "ll_backend.llds_out.llds_out_instr.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_value_ordered_after_layout_label_0[2] = {
  &ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_0,
  &ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_1
};

#line 792 "ll_backend.llds_out.llds_out_instr.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_name_ordered_after_layout_label_0[2] = {
  &ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_1,
  &ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_0
};

#line 798 "ll_backend.llds_out.llds_out_instr.c"
static const MR_Integer ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__functor_number_map_after_layout_label_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 804 "ll_backend.llds_out.llds_out_instr.c"
const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__type_ctor_info_after_layout_label_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__llds_out__llds_out_instr____Unify____after_layout_label_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_instr____Compare____after_layout_label_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_instr",
  (MR_String) "after_layout_label",
  {
    ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_name_ordered_after_layout_label_0
  },
  {
    ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_value_ordered_after_layout_label_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__functor_number_map_after_layout_label_0
};

#line 825 "ll_backend.llds_out.llds_out_instr.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr____Unify____after_layout_label_0_0_10001(
#line 828 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 830 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2)
#line 832 "ll_backend.llds_out.llds_out_instr.c"
{
#line 834 "ll_backend.llds_out.llds_out_instr.c"
  {
#line 836 "ll_backend.llds_out.llds_out_instr.c"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 839 "ll_backend.llds_out.llds_out_instr.c"
    {
#line 841 "ll_backend.llds_out.llds_out_instr.c"
      ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds_out__llds_out_instr____Unify____after_layout_label_0_0(((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_2));
    }
#line 844 "ll_backend.llds_out.llds_out_instr.c"
    return ll_backend__llds_out__llds_out_instr__succeeded;
#line 846 "ll_backend.llds_out.llds_out_instr.c"
  }
#line 848 "ll_backend.llds_out.llds_out_instr.c"
}

#line 851 "ll_backend.llds_out.llds_out_instr.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr____Compare____after_layout_label_0_0_10001(
#line 854 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 856 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
#line 858 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_3)
#line 860 "ll_backend.llds_out.llds_out_instr.c"
{
#line 862 "ll_backend.llds_out.llds_out_instr.c"
  {
#line 864 "ll_backend.llds_out.llds_out_instr.c"
    MR_Word ll_backend__llds_out__llds_out_instr__conv0_HeadVar__1_1;

#line 867 "ll_backend.llds_out.llds_out_instr.c"
    {
#line 869 "ll_backend.llds_out.llds_out_instr.c"
      ll_backend__llds_out__llds_out_instr____Compare____after_layout_label_0_0(&ll_backend__llds_out__llds_out_instr__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_3));
    }
#line 872 "ll_backend.llds_out.llds_out_instr.c"
    *ll_backend__llds_out__llds_out_instr__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_instr__conv0_HeadVar__1_1));
#line 874 "ll_backend.llds_out.llds_out_instr.c"
  }
#line 876 "ll_backend.llds_out.llds_out_instr.c"
}

#line 1559 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_99_114_95_104_112_95_110_111_95_114_101_117_115_101_95_95_91_57_93_95_48_11_p_0(
#line 1559 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_12,
#line 1559 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Lval_13,
#line 1559 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeTag_14,
#line 1559 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeOffset_15,
#line 1559 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Rval_16,
#line 1559 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeAllocId_17,
#line 1559 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_18,
#line 1559 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeRegionRval_19)
#line 1559 "llds_out_instr.m"
{
#line 1567 "llds_out_instr.m"
  {
#line 1567 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1567 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__MaybeRegionRval_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1585 "llds_out_instr.m"
      {
#line 1585 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__ProfMem_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1586 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 0)));
#line 1586 "llds_out_instr.m"
        MR_String ll_backend__llds_out__llds_out_instr__V_121_121 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 1)));
#line 1586 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 2)));
#line 1586 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 3)));
#line 1586 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 4)));
#line 1586 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 5)));
#line 1586 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_126_126 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1586 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_127_127 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1586 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_128_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1586 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_129_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1586 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_130_130 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1586 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_131_131 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1586 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_132_132 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1586 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_133_133 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1586 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_134_134 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1586 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_135_135 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1586 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_136_136 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1586 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_137_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1586 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_138_138 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1586 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)));

#line 1626 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__MaybeTag_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1626 "llds_out_instr.m"
          if ((ll_backend__llds_out__llds_out_instr__ProfMem_24 == (MR_Integer) 0))
#line 1627 "llds_out_instr.m"
            {
#line 1639 "llds_out_instr.m"
              if ((ll_backend__llds_out__llds_out_instr__MaybeOffset_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1640 "llds_out_instr.m"
                if ((ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_18 == (MR_Integer) 1))
#line 1642 "llds_out_instr.m"
                  {
#line 1643 "llds_out_instr.m"
                    {
#line 1643 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) "MR_alloc_heap(");
                    }
#line 1642 "llds_out_instr.m"
                  }
#line 1640 "llds_out_instr.m"
                else
#line 1645 "llds_out_instr.m"
                  {
#line 1646 "llds_out_instr.m"
                    {
#line 1646 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) "MR_alloc_heap_atomic(");
                    }
#line 1645 "llds_out_instr.m"
                  }
#line 1639 "llds_out_instr.m"
              else
#line 1635 "llds_out_instr.m"
                if ((ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_18 == (MR_Integer) 1))
#line 1633 "llds_out_instr.m"
                  {
#line 1634 "llds_out_instr.m"
                    {
#line 1634 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) "MR_offset_incr_hp(");
                    }
#line 1633 "llds_out_instr.m"
                  }
#line 1635 "llds_out_instr.m"
                else
#line 1636 "llds_out_instr.m"
                  {
#line 1637 "llds_out_instr.m"
                    {
#line 1637 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) "MR_offset_incr_hp_atomic(");
                    }
#line 1636 "llds_out_instr.m"
                  }
#line 1649 "llds_out_instr.m"
              {
#line 1649 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Lval_13);
              }
#line 1679 "llds_out_instr.m"
              {
#line 1679 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
#line 1684 "llds_out_instr.m"
              if ((ll_backend__llds_out__llds_out_instr__MaybeOffset_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1685 "llds_out_instr.m"
                {
#line 1685 "llds_out_instr.m"
                }
#line 1684 "llds_out_instr.m"
              else
#line 1681 "llds_out_instr.m"
                {
#line 1681 "llds_out_instr.m"
                  MR_Integer ll_backend__llds_out__llds_out_instr__Offset_114 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeOffset_15, (MR_Integer) 0)));

#line 1682 "llds_out_instr.m"
                  {
#line 1682 "llds_out_instr.m"
                    mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Offset_114);
                  }
#line 1683 "llds_out_instr.m"
                  {
#line 1683 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                  }
#line 1681 "llds_out_instr.m"
                }
#line 1687 "llds_out_instr.m"
              {
#line 1687 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Rval_16, (MR_Integer) 13);
              }
#line 1688 "llds_out_instr.m"
              {
#line 1688 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
#line 1688 "llds_out_instr.m"
                return;
              }
#line 1627 "llds_out_instr.m"
            }
#line 1626 "llds_out_instr.m"
          else
#line 1588 "llds_out_instr.m"
            {
#line 1594 "llds_out_instr.m"
              if ((ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_18 == (MR_Integer) 1))
#line 1592 "llds_out_instr.m"
                {
#line 1593 "llds_out_instr.m"
                  {
#line 1593 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) "MR_offset_incr_hp_msg(");
                  }
#line 1592 "llds_out_instr.m"
                }
#line 1594 "llds_out_instr.m"
              else
#line 1595 "llds_out_instr.m"
                {
#line 1596 "llds_out_instr.m"
                  {
#line 1596 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) "MR_offset_incr_hp_atomic_msg(");
                  }
#line 1595 "llds_out_instr.m"
                }
#line 1598 "llds_out_instr.m"
              {
#line 1598 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Lval_13);
              }
#line 1613 "llds_out_instr.m"
              {
#line 1613 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
#line 1617 "llds_out_instr.m"
              if ((ll_backend__llds_out__llds_out_instr__MaybeOffset_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1615 "llds_out_instr.m"
                {
#line 1616 "llds_out_instr.m"
                  {
#line 1616 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) "0, ");
                  }
#line 1615 "llds_out_instr.m"
                }
#line 1617 "llds_out_instr.m"
              else
#line 1618 "llds_out_instr.m"
                {
#line 1618 "llds_out_instr.m"
                  MR_Integer ll_backend__llds_out__llds_out_instr__Offset_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeOffset_15, (MR_Integer) 0)));

#line 1619 "llds_out_instr.m"
                  {
#line 1619 "llds_out_instr.m"
                    mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Offset_25);
                  }
#line 1620 "llds_out_instr.m"
                  {
#line 1620 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                  }
#line 1618 "llds_out_instr.m"
                }
#line 1622 "llds_out_instr.m"
              {
#line 1622 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Rval_16, (MR_Integer) 13);
              }
#line 1623 "llds_out_instr.m"
              {
#line 1623 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
#line 1624 "llds_out_instr.m"
              {
#line 1624 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__output_maybe_alloc_site_id_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__MaybeAllocId_17);
              }
#line 1625 "llds_out_instr.m"
              {
#line 1625 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) ", NULL)");
#line 1625 "llds_out_instr.m"
                return;
              }
#line 1588 "llds_out_instr.m"
            }
#line 1626 "llds_out_instr.m"
        else
#line 1626 "llds_out_instr.m"
          {
#line 1626 "llds_out_instr.m"
            MR_Integer ll_backend__llds_out__llds_out_instr__V_202_202 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeTag_14, (MR_Integer) 0)));

#line 1626 "llds_out_instr.m"
            if ((ll_backend__llds_out__llds_out_instr__ProfMem_24 == (MR_Integer) 0))
#line 1627 "llds_out_instr.m"
              {
#line 1665 "llds_out_instr.m"
                if ((ll_backend__llds_out__llds_out_instr__MaybeOffset_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1666 "llds_out_instr.m"
                  {
#line 1670 "llds_out_instr.m"
                    if ((ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_18 == (MR_Integer) 1))
#line 1668 "llds_out_instr.m"
                      {
#line 1669 "llds_out_instr.m"
                        {
#line 1669 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "MR_tag_alloc_heap(");
                        }
#line 1668 "llds_out_instr.m"
                      }
#line 1670 "llds_out_instr.m"
                    else
#line 1671 "llds_out_instr.m"
                      {
#line 1672 "llds_out_instr.m"
                        {
#line 1672 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "MR_tag_alloc_heap_atomic(");
                        }
#line 1671 "llds_out_instr.m"
                      }
#line 1674 "llds_out_instr.m"
                    {
#line 1674 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Lval_13);
                    }
#line 1675 "llds_out_instr.m"
                    {
#line 1675 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
#line 1676 "llds_out_instr.m"
                    {
#line 1676 "llds_out_instr.m"
                      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__V_202_202);
                    }
#line 1666 "llds_out_instr.m"
                  }
#line 1665 "llds_out_instr.m"
                else
#line 1653 "llds_out_instr.m"
                  {
#line 1657 "llds_out_instr.m"
                    if ((ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_18 == (MR_Integer) 1))
#line 1655 "llds_out_instr.m"
                      {
#line 1656 "llds_out_instr.m"
                        {
#line 1656 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "MR_tag_offset_incr_hp(");
                        }
#line 1655 "llds_out_instr.m"
                      }
#line 1657 "llds_out_instr.m"
                    else
#line 1658 "llds_out_instr.m"
                      {
#line 1659 "llds_out_instr.m"
                        {
#line 1659 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "MR_tag_offset_incr_hp_atomic(");
                        }
#line 1658 "llds_out_instr.m"
                      }
#line 1662 "llds_out_instr.m"
                    {
#line 1662 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Lval_13);
                    }
#line 1663 "llds_out_instr.m"
                    {
#line 1663 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
#line 1664 "llds_out_instr.m"
                    {
#line 1664 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_data__output_tag_3_p_0(ll_backend__llds_out__llds_out_instr__V_202_202);
                    }
#line 1653 "llds_out_instr.m"
                  }
#line 1679 "llds_out_instr.m"
                {
#line 1679 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 1684 "llds_out_instr.m"
                if ((ll_backend__llds_out__llds_out_instr__MaybeOffset_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1685 "llds_out_instr.m"
                  {
#line 1685 "llds_out_instr.m"
                  }
#line 1684 "llds_out_instr.m"
                else
#line 1681 "llds_out_instr.m"
                  {
#line 1681 "llds_out_instr.m"
                    MR_Integer ll_backend__llds_out__llds_out_instr__Offset_142 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeOffset_15, (MR_Integer) 0)));

#line 1682 "llds_out_instr.m"
                    {
#line 1682 "llds_out_instr.m"
                      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Offset_142);
                    }
#line 1683 "llds_out_instr.m"
                    {
#line 1683 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
#line 1681 "llds_out_instr.m"
                  }
#line 1687 "llds_out_instr.m"
                {
#line 1687 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Rval_16, (MR_Integer) 13);
                }
#line 1688 "llds_out_instr.m"
                {
#line 1688 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) ")");
#line 1688 "llds_out_instr.m"
                  return;
                }
#line 1627 "llds_out_instr.m"
              }
#line 1626 "llds_out_instr.m"
            else
#line 1588 "llds_out_instr.m"
              {
#line 1604 "llds_out_instr.m"
                if ((ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_18 == (MR_Integer) 1))
#line 1602 "llds_out_instr.m"
                  {
#line 1603 "llds_out_instr.m"
                    {
#line 1603 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) "MR_tag_offset_incr_hp_msg(");
                    }
#line 1602 "llds_out_instr.m"
                  }
#line 1604 "llds_out_instr.m"
                else
#line 1605 "llds_out_instr.m"
                  {
#line 1606 "llds_out_instr.m"
                    {
#line 1606 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) "MR_tag_offset_incr_hp_atomic_msg(");
                    }
#line 1605 "llds_out_instr.m"
                  }
#line 1609 "llds_out_instr.m"
                {
#line 1609 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Lval_13);
                }
#line 1610 "llds_out_instr.m"
                {
#line 1610 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 1611 "llds_out_instr.m"
                {
#line 1611 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_data__output_tag_3_p_0(ll_backend__llds_out__llds_out_instr__V_202_202);
                }
#line 1613 "llds_out_instr.m"
                {
#line 1613 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 1617 "llds_out_instr.m"
                if ((ll_backend__llds_out__llds_out_instr__MaybeOffset_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1615 "llds_out_instr.m"
                  {
#line 1616 "llds_out_instr.m"
                    {
#line 1616 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) "0, ");
                    }
#line 1615 "llds_out_instr.m"
                  }
#line 1617 "llds_out_instr.m"
                else
#line 1618 "llds_out_instr.m"
                  {
#line 1618 "llds_out_instr.m"
                    MR_Integer ll_backend__llds_out__llds_out_instr__Offset_157 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeOffset_15, (MR_Integer) 0)));

#line 1619 "llds_out_instr.m"
                    {
#line 1619 "llds_out_instr.m"
                      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Offset_157);
                    }
#line 1620 "llds_out_instr.m"
                    {
#line 1620 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
#line 1618 "llds_out_instr.m"
                  }
#line 1622 "llds_out_instr.m"
                {
#line 1622 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Rval_16, (MR_Integer) 13);
                }
#line 1623 "llds_out_instr.m"
                {
#line 1623 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 1624 "llds_out_instr.m"
                {
#line 1624 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_instr__output_maybe_alloc_site_id_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__MaybeAllocId_17);
                }
#line 1625 "llds_out_instr.m"
                {
#line 1625 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) ", NULL)");
#line 1625 "llds_out_instr.m"
                  return;
                }
#line 1588 "llds_out_instr.m"
              }
#line 1626 "llds_out_instr.m"
          }
#line 1585 "llds_out_instr.m"
      }
#line 1567 "llds_out_instr.m"
    else
#line 1567 "llds_out_instr.m"
      {
#line 1567 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__RegionRval_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeRegionRval_19, (MR_Integer) 0)));

#line 1572 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__MaybeTag_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1569 "llds_out_instr.m"
          {
#line 1570 "llds_out_instr.m"
            {
#line 1570 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "MR_alloc_in_region(");
            }
#line 1571 "llds_out_instr.m"
            {
#line 1571 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Lval_13);
            }
#line 1569 "llds_out_instr.m"
          }
#line 1572 "llds_out_instr.m"
        else
#line 1573 "llds_out_instr.m"
          {
#line 1573 "llds_out_instr.m"
            MR_Integer ll_backend__llds_out__llds_out_instr__Tag_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeTag_14, (MR_Integer) 0)));

#line 1574 "llds_out_instr.m"
            {
#line 1574 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "MR_tag_alloc_in_region(");
            }
#line 1575 "llds_out_instr.m"
            {
#line 1575 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Lval_13);
            }
#line 1576 "llds_out_instr.m"
            {
#line 1576 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 1577 "llds_out_instr.m"
            {
#line 1577 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_data__output_tag_3_p_0(ll_backend__llds_out__llds_out_instr__Tag_23);
            }
#line 1573 "llds_out_instr.m"
          }
#line 1579 "llds_out_instr.m"
        {
#line 1579 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
#line 1580 "llds_out_instr.m"
        {
#line 1580 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__RegionRval_22);
        }
#line 1581 "llds_out_instr.m"
        {
#line 1581 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
#line 1582 "llds_out_instr.m"
        {
#line 1582 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Rval_16, (MR_Integer) 13);
        }
#line 1583 "llds_out_instr.m"
        {
#line 1583 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
#line 1583 "llds_out_instr.m"
          return;
        }
#line 1567 "llds_out_instr.m"
      }
#line 1567 "llds_out_instr.m"
  }
#line 1559 "llds_out_instr.m"
}

#line 312 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_115_116_114_117_99_116_105_111_110_95_108_105_115_116_95_119_104_105_108_101_95_95_91_54_93_95_48_8_p_0(
#line 312 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 312 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Label_2,
#line 312 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__3_3,
#line 312 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__HeadVar__4_4,
#line 312 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__ProfInfo_5)
#line 312 "llds_out_instr.m"
{
#line 317 "llds_out_instr.m"
  while (MR_TRUE)
#line 317 "llds_out_instr.m"
    {
#line 317 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 317 "llds_out_instr.m"
      {
#line 317 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 317 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 317 "llds_out_instr.m"
          {
#line 317 "llds_out_instr.m"
            *ll_backend__llds_out__llds_out_instr__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 318 "llds_out_instr.m"
            {
#line 318 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "\tbreak;\n");
#line 318 "llds_out_instr.m"
              return;
            }
#line 317 "llds_out_instr.m"
          }
#line 317 "llds_out_instr.m"
        else
#line 320 "llds_out_instr.m"
          {
#line 320 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Instr_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__3_3, (MR_Integer) 0)));
#line 320 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Instrs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__3_3, (MR_Integer) 1)));
#line 320 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Uinstr_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr_20, (MR_Integer) 0)));
#line 320 "llds_out_instr.m"
            MR_String ll_backend__llds_out__llds_out_instr__Comment_27 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr_20, (MR_Integer) 1)));
#line 322 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__V_28_28;

#line 322 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_26, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 322 "llds_out_instr.m"
            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 322 "llds_out_instr.m"
              {
#line 322 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_26, (MR_Integer) 1)));
#line 323 "llds_out_instr.m"
                {
#line 323 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "\tbreak;\n");
                }
#line 324 "llds_out_instr.m"
                *ll_backend__llds_out__llds_out_instr__HeadVar__4_4 = ll_backend__llds_out__llds_out_instr__HeadVar__3_3;
#line 322 "llds_out_instr.m"
              }
#line 322 "llds_out_instr.m"
            else
#line 328 "llds_out_instr.m"
              {
#line 325 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__V_38_38;
#line 325 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__V_79_79;

#line 325 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_26, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 325 "llds_out_instr.m"
                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 325 "llds_out_instr.m"
                  {
#line 325 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_26, (MR_Integer) 1)));
#line 325 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 325 "llds_out_instr.m"
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 325 "llds_out_instr.m"
                      {
#line 325 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_38_38, (MR_Integer) 0)));
#line 325 "llds_out_instr.m"
                        {
#line 325 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_instr__Label_2, ll_backend__llds_out__llds_out_instr__V_79_79);
                        }
#line 325 "llds_out_instr.m"
                      }
#line 325 "llds_out_instr.m"
                  }
#line 328 "llds_out_instr.m"
                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 326 "llds_out_instr.m"
                  {
#line 326 "llds_out_instr.m"
                    {
#line 326 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) "\t/* continue */\n");
                    }
#line 327 "llds_out_instr.m"
                    *ll_backend__llds_out__llds_out_instr__HeadVar__4_4 = ll_backend__llds_out__llds_out_instr__Instrs_21;
#line 326 "llds_out_instr.m"
                  }
#line 328 "llds_out_instr.m"
                else
#line 345 "llds_out_instr.m"
                  {
#line 345 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__Rval_29;
#line 328 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_41_41;
#line 328 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_80_80;

#line 328 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_26, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 328 "llds_out_instr.m"
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 328 "llds_out_instr.m"
                      {
#line 328 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__Rval_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_26, (MR_Integer) 1)));
#line 328 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_26, (MR_Integer) 2)));
#line 328 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 328 "llds_out_instr.m"
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 328 "llds_out_instr.m"
                          {
#line 328 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_41_41, (MR_Integer) 0)));
#line 328 "llds_out_instr.m"
                            {
#line 328 "llds_out_instr.m"
                              ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_instr__Label_2, ll_backend__llds_out__llds_out_instr__V_80_80);
                            }
#line 328 "llds_out_instr.m"
                          }
#line 328 "llds_out_instr.m"
                      }
#line 345 "llds_out_instr.m"
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 329 "llds_out_instr.m"
                      {
#line 329 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__AutoComments_30;
#line 332 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_59_59;
#line 332 "llds_out_instr.m"
                        MR_String ll_backend__llds_out__llds_out_instr__V_60_60;
#line 332 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_61_61;
#line 332 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_62_62;
#line 332 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_63_63;
#line 332 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_64_64;
#line 332 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_65_65;
#line 332 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_66_66;
#line 332 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_67_67;
#line 332 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_68_68;
#line 332 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_69_69;
#line 332 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_70_70;
#line 332 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_71_71;
#line 332 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_72_72;
#line 332 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_73_73;
#line 332 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_74_74;
#line 332 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_75_75;
#line 332 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_76_76;
#line 332 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_77_77;
#line 332 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_78_78;

#line 329 "llds_out_instr.m"
                        {
#line 329 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "\tif (");
                        }
#line 330 "llds_out_instr.m"
                        {
#line 330 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_data__output_test_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Rval_29);
                        }
#line 331 "llds_out_instr.m"
                        {
#line 331 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) ")\n\t\tcontinue;\n");
                        }
#line 332 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 0)));
#line 332 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 1)));
#line 332 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 2)));
#line 332 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 3)));
#line 332 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 4)));
#line 332 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 5)));
#line 332 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__AutoComments_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 332 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 332 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 332 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 332 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 332 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 332 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 332 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 332 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 332 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 332 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 332 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 332 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 332 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 332 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)));
#line 334 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__AutoComments_30 == (MR_Integer) 1);
#line 334 "llds_out_instr.m"
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 334 "llds_out_instr.m"
                          {
#line 335 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__succeeded = (strcmp(ll_backend__llds_out__llds_out_instr__Comment_27, (MR_String) "") == 0);
#line 335 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__succeeded = !(ll_backend__llds_out__llds_out_instr__succeeded);
#line 334 "llds_out_instr.m"
                          }
#line 340 "llds_out_instr.m"
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 337 "llds_out_instr.m"
                          {
#line 337 "llds_out_instr.m"
                            {
#line 337 "llds_out_instr.m"
                              mercury__io__write_string_3_p_0((MR_String) "\t\t/* ");
                            }
#line 338 "llds_out_instr.m"
                            {
#line 338 "llds_out_instr.m"
                              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__Comment_27);
                            }
#line 339 "llds_out_instr.m"
                            {
#line 339 "llds_out_instr.m"
                              mercury__io__write_string_3_p_0((MR_String) " */\n");
                            }
#line 337 "llds_out_instr.m"
                          }
#line 340 "llds_out_instr.m"
                        else
#line 339 "llds_out_instr.m"
                          {
#line 339 "llds_out_instr.m"
                          }
#line 343 "llds_out_instr.m"
                        /* direct tailcall eliminated */
#line 343 "llds_out_instr.m"
                        {
#line 343 "llds_out_instr.m"
                          MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__3__tmp_copy_3 = ll_backend__llds_out__llds_out_instr__Instrs_21;

#line 343 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_instr__HeadVar__3_3 = ll_backend__llds_out__llds_out_instr__HeadVar__3__tmp_copy_3;
#line 343 "llds_out_instr.m"
                        }
#line 343 "llds_out_instr.m"
                        continue;
#line 329 "llds_out_instr.m"
                      }
#line 345 "llds_out_instr.m"
                    else
#line 352 "llds_out_instr.m"
                      {
#line 352 "llds_out_instr.m"
                        MR_Integer ll_backend__llds_out__llds_out_instr__TempR_31;
#line 352 "llds_out_instr.m"
                        MR_Integer ll_backend__llds_out__llds_out_instr__TempF_32;
#line 352 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__BlockInstrs_33;

#line 345 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_26, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 345 "llds_out_instr.m"
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 345 "llds_out_instr.m"
                          {
#line 345 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__TempR_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_26, (MR_Integer) 1)));
#line 345 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__TempF_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_26, (MR_Integer) 2)));
#line 345 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__BlockInstrs_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_26, (MR_Integer) 3)));
#line 346 "llds_out_instr.m"
                            {
#line 346 "llds_out_instr.m"
                              ll_backend__llds_out__llds_out_instr__output_block_start_4_p_0(ll_backend__llds_out__llds_out_instr__TempR_31, ll_backend__llds_out__llds_out_instr__TempF_32);
                            }
#line 347 "llds_out_instr.m"
                            {
#line 347 "llds_out_instr.m"
                              ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__BlockInstrs_33, ll_backend__llds_out__llds_out_instr__Label_2, ll_backend__llds_out__llds_out_instr__ProfInfo_5);
                            }
#line 1030 "llds_out_instr.m"
                            {
#line 1030 "llds_out_instr.m"
                              mercury__io__write_string_3_p_0((MR_String) "\t}\n");
                            }
#line 350 "llds_out_instr.m"
                            {
#line 350 "llds_out_instr.m"
                              /* direct tailcall eliminated */
#line 350 "llds_out_instr.m"
                              {
#line 350 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__3__tmp_copy_3 = ll_backend__llds_out__llds_out_instr__Instrs_21;

#line 350 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__HeadVar__3_3 = ll_backend__llds_out__llds_out_instr__HeadVar__3__tmp_copy_3;
#line 350 "llds_out_instr.m"
                              }
#line 350 "llds_out_instr.m"
                              continue;
#line 350 "llds_out_instr.m"
                            }
#line 345 "llds_out_instr.m"
                          }
#line 345 "llds_out_instr.m"
                        else
#line 353 "llds_out_instr.m"
                          {
#line 353 "llds_out_instr.m"
                            {
#line 353 "llds_out_instr.m"
                              ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Uinstr_26, ll_backend__llds_out__llds_out_instr__Comment_27, ll_backend__llds_out__llds_out_instr__ProfInfo_5);
                            }
#line 354 "llds_out_instr.m"
                            /* direct tailcall eliminated */
#line 354 "llds_out_instr.m"
                            {
#line 354 "llds_out_instr.m"
                              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__3__tmp_copy_3 = ll_backend__llds_out__llds_out_instr__Instrs_21;

#line 354 "llds_out_instr.m"
                              ll_backend__llds_out__llds_out_instr__HeadVar__3_3 = ll_backend__llds_out__llds_out_instr__HeadVar__3__tmp_copy_3;
#line 354 "llds_out_instr.m"
                            }
#line 354 "llds_out_instr.m"
                            continue;
#line 353 "llds_out_instr.m"
                          }
#line 352 "llds_out_instr.m"
                      }
#line 345 "llds_out_instr.m"
                  }
#line 328 "llds_out_instr.m"
              }
#line 320 "llds_out_instr.m"
          }
#line 317 "llds_out_instr.m"
      }
#line 317 "llds_out_instr.m"
      break;
#line 317 "llds_out_instr.m"
    }
#line 312 "llds_out_instr.m"
}

#line 419 "llds_out_instr.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_float_dword_assignment__419__1_2_p_0(
#line 419 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Type_10,
#line 419 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_21)
#line 419 "llds_out_instr.m"
{
#line 419 "llds_out_instr.m"
  {
#line 419 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__Type_10 == ll_backend__llds_out__llds_out_instr__HeadVar__2_21);

#line 419 "llds_out_instr.m"
    return ll_backend__llds_out__llds_out_instr__succeeded;
#line 419 "llds_out_instr.m"
  }
#line 419 "llds_out_instr.m"
}

#line 370 "llds_out_instr.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_instruction_list_while_block__370__1_2_p_0(
#line 370 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Instrs_15,
#line 370 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_39)
#line 370 "llds_out_instr.m"
{
#line 370 "llds_out_instr.m"
  {
#line 370 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 370 "llds_out_instr.m"
    {
#line 370 "llds_out_instr.m"
      return ll_backend__llds_out__llds_out_instr__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[0], ((MR_Box) (ll_backend__llds_out__llds_out_instr__Instrs_15)), ((MR_Box) (ll_backend__llds_out__llds_out_instr__HeadVar__2_39)));
    }
#line 370 "llds_out_instr.m"
    return ll_backend__llds_out__llds_out_instr__succeeded;
#line 370 "llds_out_instr.m"
  }
#line 370 "llds_out_instr.m"
}

#line 32 "llds_out_instr.m"
void MR_CALL 
ll_backend__llds_out__llds_out_instr____Compare____after_layout_label_0_0(
#line 32 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__HeadVar__1_1,
#line 32 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
#line 32 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__3_3)
#line 32 "llds_out_instr.m"
{
#line 32 "llds_out_instr.m"
  {
#line 32 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 32 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__Cast_HeadVar1_4 = (MR_Integer) ll_backend__llds_out__llds_out_instr__HeadVar__2_2;
#line 32 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__Cast_HeadVar2_5 = (MR_Integer) ll_backend__llds_out__llds_out_instr__HeadVar__3_3;

#line 32 "llds_out_instr.m"
    {
#line 32 "llds_out_instr.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__llds_out__llds_out_instr__HeadVar__1_1, ll_backend__llds_out__llds_out_instr__Cast_HeadVar1_4, ll_backend__llds_out__llds_out_instr__Cast_HeadVar2_5);
#line 32 "llds_out_instr.m"
      return;
    }
#line 32 "llds_out_instr.m"
  }
#line 32 "llds_out_instr.m"
}

#line 32 "llds_out_instr.m"
MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr____Unify____after_layout_label_0_0(
#line 32 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_1,
#line 32 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
#line 32 "llds_out_instr.m"
{
#line 1978 "ll_backend.llds_out.llds_out_instr.c"
  {
#line 1980 "ll_backend.llds_out.llds_out_instr.c"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__HeadVar__2_1 == ll_backend__llds_out__llds_out_instr__HeadVar__2_2);

#line 1983 "ll_backend.llds_out.llds_out_instr.c"
    return ll_backend__llds_out__llds_out_instr__succeeded;
#line 1985 "ll_backend.llds_out.llds_out_instr.c"
  }
#line 32 "llds_out_instr.m"
}

#line 1978 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_output_4_p_0(
#line 1978 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 1978 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Output_6)
#line 1978 "llds_out_instr.m"
{
#line 1981 "llds_out_instr.m"
  {
#line 1981 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 1981 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_6, (MR_Integer) 0)));
#line 1981 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__OrigType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_6, (MR_Integer) 3)));
#line 1981 "llds_out_instr.m"
    MR_String ll_backend__llds_out__llds_out_instr__VarName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_6, (MR_Integer) 4)));
#line 1981 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__MaybeForeignType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_6, (MR_Integer) 5)));
#line 1981 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__BoxPolicy_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_6, (MR_Integer) 6)));
#line 1982 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr___VarType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_6, (MR_Integer) 1)));
#line 1982 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr___IsDummy_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_6, (MR_Integer) 2)));

#line 1984 "llds_out_instr.m"
    {
#line 1984 "llds_out_instr.m"
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
#line 1990 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__BoxPolicy_14 == (MR_Integer) 1))
#line 1986 "llds_out_instr.m"
      {
#line 1987 "llds_out_instr.m"
        {
#line 1987 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
        }
#line 1988 "llds_out_instr.m"
        {
#line 1988 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) " = ");
        }
#line 1989 "llds_out_instr.m"
        {
#line 1989 "llds_out_instr.m"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
        }
#line 1986 "llds_out_instr.m"
      }
#line 1990 "llds_out_instr.m"
    else
#line 2011 "llds_out_instr.m"
      if ((ll_backend__llds_out__llds_out_instr__MaybeForeignType_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2048 "llds_out_instr.m"
        {
#line 2048 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__BuiltinType_18;

#line 2013 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__OrigType_11)) == (MR_mktag((MR_Integer) 2)));
#line 2013 "llds_out_instr.m"
          if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 2013 "llds_out_instr.m"
            {
#line 2013 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__BuiltinType_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_instr__OrigType_11, (MR_Integer) 0)));
#line 2020 "llds_out_instr.m"
              if ((ll_backend__llds_out__llds_out_instr__BuiltinType_18 == (MR_Integer) 3))
#line 2035 "llds_out_instr.m"
                {
#line 2036 "llds_out_instr.m"
                  {
#line 2036 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
                  }
#line 2037 "llds_out_instr.m"
                  {
#line 2037 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) " = ");
                  }
#line 2040 "llds_out_instr.m"
                  {
#line 2040 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) "(MR_UnsignedChar) ");
                  }
#line 2041 "llds_out_instr.m"
                  {
#line 2041 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
                  }
#line 2035 "llds_out_instr.m"
                }
#line 2020 "llds_out_instr.m"
              else
#line 2020 "llds_out_instr.m"
                if ((ll_backend__llds_out__llds_out_instr__BuiltinType_18 == (MR_Integer) 1))
#line 2021 "llds_out_instr.m"
                  {
#line 2021 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__ActualType_19;

#line 2022 "llds_out_instr.m"
                    {
#line 2022 "llds_out_instr.m"
                      ll_backend__llds__lval_type_2_p_0(ll_backend__llds_out__llds_out_instr__Lval_8, &ll_backend__llds_out__llds_out_instr__ActualType_19);
                    }
#line 2023 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__ActualType_19 == (MR_Integer) 9);
#line 2027 "llds_out_instr.m"
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 2024 "llds_out_instr.m"
                      {
#line 2024 "llds_out_instr.m"
                        {
#line 2024 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
                        }
#line 2025 "llds_out_instr.m"
                        {
#line 2025 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) " = ");
                        }
#line 2026 "llds_out_instr.m"
                        {
#line 2026 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
                        }
#line 2024 "llds_out_instr.m"
                      }
#line 2027 "llds_out_instr.m"
                    else
#line 2028 "llds_out_instr.m"
                      {
#line 2028 "llds_out_instr.m"
                        {
#line 2028 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
                        }
#line 2029 "llds_out_instr.m"
                        {
#line 2029 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) " = ");
                        }
#line 2030 "llds_out_instr.m"
                        {
#line 2030 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "MR_float_to_word(");
                        }
#line 2031 "llds_out_instr.m"
                        {
#line 2031 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
                        }
#line 2032 "llds_out_instr.m"
                        {
#line 2032 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
#line 2028 "llds_out_instr.m"
                      }
#line 2021 "llds_out_instr.m"
                  }
#line 2020 "llds_out_instr.m"
                else
#line 2020 "llds_out_instr.m"
                  if ((ll_backend__llds_out__llds_out_instr__BuiltinType_18 == (MR_Integer) 0))
#line 2043 "llds_out_instr.m"
                    {
#line 2044 "llds_out_instr.m"
                      {
#line 2044 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
                      }
#line 2045 "llds_out_instr.m"
                      {
#line 2045 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0((MR_String) " = ");
                      }
#line 2046 "llds_out_instr.m"
                      {
#line 2046 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
                      }
#line 2043 "llds_out_instr.m"
                    }
#line 2020 "llds_out_instr.m"
                  else
#line 2015 "llds_out_instr.m"
                    {
#line 2016 "llds_out_instr.m"
                      {
#line 2016 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
                      }
#line 2017 "llds_out_instr.m"
                      {
#line 2017 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0((MR_String) " = ");
                      }
#line 2018 "llds_out_instr.m"
                      {
#line 2018 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Integer) 13);
                      }
#line 2019 "llds_out_instr.m"
                      {
#line 2019 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
                      }
#line 2015 "llds_out_instr.m"
                    }
#line 2013 "llds_out_instr.m"
            }
#line 2013 "llds_out_instr.m"
          else
#line 2049 "llds_out_instr.m"
            {
#line 2049 "llds_out_instr.m"
              {
#line 2049 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
              }
#line 2050 "llds_out_instr.m"
              {
#line 2050 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) " = ");
              }
#line 2051 "llds_out_instr.m"
              {
#line 2051 "llds_out_instr.m"
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
              }
#line 2049 "llds_out_instr.m"
            }
#line 2048 "llds_out_instr.m"
        }
#line 2011 "llds_out_instr.m"
      else
#line 1993 "llds_out_instr.m"
        {
#line 1993 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__ForeignTypeInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeForeignType_13, (MR_Integer) 0)));
#line 1993 "llds_out_instr.m"
          MR_String ll_backend__llds_out__llds_out_instr__ForeignType_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ForeignTypeInfo_15, (MR_Integer) 0)));
#line 1993 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__Assertions_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ForeignTypeInfo_15, (MR_Integer) 1)));

#line 1996 "llds_out_instr.m"
          {
#line 1996 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0, ((MR_Box) ((MR_Integer) 0)), ll_backend__llds_out__llds_out_instr__Assertions_17);
          }
#line 2002 "llds_out_instr.m"
          if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1998 "llds_out_instr.m"
            {
#line 1998 "llds_out_instr.m"
              {
#line 1998 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
              }
#line 1999 "llds_out_instr.m"
              {
#line 1999 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) " = ");
              }
#line 2000 "llds_out_instr.m"
              {
#line 2000 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Integer) 13);
              }
#line 2001 "llds_out_instr.m"
              {
#line 2001 "llds_out_instr.m"
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
              }
#line 1998 "llds_out_instr.m"
            }
#line 2002 "llds_out_instr.m"
          else
#line 2003 "llds_out_instr.m"
            {
#line 2003 "llds_out_instr.m"
              {
#line 2003 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_MAYBE_BOX_FOREIGN_TYPE(");
              }
#line 2004 "llds_out_instr.m"
              {
#line 2004 "llds_out_instr.m"
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__ForeignType_16);
              }
#line 2005 "llds_out_instr.m"
              {
#line 2005 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
#line 2006 "llds_out_instr.m"
              {
#line 2006 "llds_out_instr.m"
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
              }
#line 2007 "llds_out_instr.m"
              {
#line 2007 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
#line 2008 "llds_out_instr.m"
              {
#line 2008 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
              }
#line 2009 "llds_out_instr.m"
              {
#line 2009 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 2003 "llds_out_instr.m"
            }
#line 1993 "llds_out_instr.m"
        }
#line 2055 "llds_out_instr.m"
    {
#line 2055 "llds_out_instr.m"
      mercury__io__write_string_3_p_0((MR_String) ";\n");
#line 2055 "llds_out_instr.m"
      return;
    }
#line 1981 "llds_out_instr.m"
  }
#line 1978 "llds_out_instr.m"
}

#line 1960 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_p_0(
#line 1960 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1960 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
#line 1960 "llds_out_instr.m"
{
#line 1963 "llds_out_instr.m"
  while (MR_TRUE)
#line 1963 "llds_out_instr.m"
    {
#line 1963 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 1963 "llds_out_instr.m"
      {
#line 1963 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1963 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1963 "llds_out_instr.m"
          {
#line 1963 "llds_out_instr.m"
          }
#line 1963 "llds_out_instr.m"
        else
#line 1964 "llds_out_instr.m"
          {
#line 1964 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Output_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
#line 1964 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Outputs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
#line 1964 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__IsDummy_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_10, (MR_Integer) 2)));
#line 1965 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___Lval_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_10, (MR_Integer) 0)));
#line 1965 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___VarType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_10, (MR_Integer) 1)));
#line 1965 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___OrigType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_10, (MR_Integer) 3)));
#line 1965 "llds_out_instr.m"
            MR_String ll_backend__llds_out__llds_out_instr___VarName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_10, (MR_Integer) 4)));
#line 1965 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___MaybeForeignType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_10, (MR_Integer) 5)));
#line 1965 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___BoxPolicy_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_10, (MR_Integer) 6)));

#line 1969 "llds_out_instr.m"
            if ((ll_backend__llds_out__llds_out_instr__IsDummy_15 == (MR_Integer) 0))
#line 1968 "llds_out_instr.m"
              {
#line 1968 "llds_out_instr.m"
              }
#line 1969 "llds_out_instr.m"
            else
#line 1971 "llds_out_instr.m"
              {
#line 1971 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__output_foreign_proc_output_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Output_10);
              }
#line 1973 "llds_out_instr.m"
            /* direct tailcall eliminated */
#line 1973 "llds_out_instr.m"
            {
#line 1973 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Outputs_11;

#line 1973 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 1973 "llds_out_instr.m"
            }
#line 1973 "llds_out_instr.m"
            continue;
#line 1964 "llds_out_instr.m"
          }
#line 1963 "llds_out_instr.m"
      }
#line 1963 "llds_out_instr.m"
      break;
#line 1963 "llds_out_instr.m"
    }
#line 1960 "llds_out_instr.m"
}

#line 1944 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_6_p_0(
#line 1944 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1944 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
#line 1944 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3,
#line 1944 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_4)
#line 1944 "llds_out_instr.m"
{
#line 1948 "llds_out_instr.m"
  while (MR_TRUE)
#line 1948 "llds_out_instr.m"
    {
#line 1948 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 1948 "llds_out_instr.m"
      {
#line 1948 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1948 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1948 "llds_out_instr.m"
          *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_4 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3;
#line 1948 "llds_out_instr.m"
        else
#line 1950 "llds_out_instr.m"
          {
#line 1950 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Output_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
#line 1950 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Outputs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
#line 1950 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Lval_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_15, (MR_Integer) 0)));
#line 1950 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_30_30;
#line 1951 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___VarType_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_15, (MR_Integer) 1)));
#line 1951 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___IsDummy_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_15, (MR_Integer) 2)));
#line 1951 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___OrigType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_15, (MR_Integer) 3)));
#line 1951 "llds_out_instr.m"
            MR_String ll_backend__llds_out__llds_out_instr___VarName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_15, (MR_Integer) 4)));
#line 1951 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_15, (MR_Integer) 5)));
#line 1951 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_15, (MR_Integer) 6)));

#line 1953 "llds_out_instr.m"
            {
#line 1953 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_data__output_record_lval_decls_tab_6_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Lval_19, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_30_30);
            }
#line 1954 "llds_out_instr.m"
            /* direct tailcall eliminated */
#line 1954 "llds_out_instr.m"
            {
#line 1954 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Outputs_16;
#line 1954 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0__tmp_copy_3 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_30_30;

#line 1954 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0__tmp_copy_3;
#line 1954 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 1954 "llds_out_instr.m"
            }
#line 1954 "llds_out_instr.m"
            continue;
#line 1950 "llds_out_instr.m"
          }
#line 1948 "llds_out_instr.m"
      }
#line 1948 "llds_out_instr.m"
      break;
#line 1948 "llds_out_instr.m"
    }
#line 1944 "llds_out_instr.m"
}

#line 1851 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_p_0(
#line 1851 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1851 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
#line 1851 "llds_out_instr.m"
{
#line 1854 "llds_out_instr.m"
  while (MR_TRUE)
#line 1854 "llds_out_instr.m"
    {
#line 1854 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 1854 "llds_out_instr.m"
      {
#line 1854 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1854 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1854 "llds_out_instr.m"
          {
#line 1854 "llds_out_instr.m"
          }
#line 1854 "llds_out_instr.m"
        else
#line 1855 "llds_out_instr.m"
          {
#line 1855 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Input_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
#line 1855 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Inputs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
#line 1855 "llds_out_instr.m"
            MR_String ll_backend__llds_out__llds_out_instr__VarName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_10, (MR_Integer) 0)));
#line 1855 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__VarType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_10, (MR_Integer) 1)));
#line 1855 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__IsDummy_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_10, (MR_Integer) 2)));
#line 1855 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___OrigType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_10, (MR_Integer) 3)));
#line 1855 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___Rval_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_10, (MR_Integer) 4)));
#line 1855 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___MaybeForeignTypeInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_10, (MR_Integer) 5)));
#line 1855 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___BoxPolicy_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_10, (MR_Integer) 6)));

#line 1872 "llds_out_instr.m"
            if ((ll_backend__llds_out__llds_out_instr__IsDummy_15 == (MR_Integer) 0))
#line 1869 "llds_out_instr.m"
              {
#line 1864 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__TypeInfo_33_33;
#line 1864 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__VarTypeCtor_20;
#line 1864 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__V_25_25;
#line 1864 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__V_32_32;

#line 1864 "llds_out_instr.m"
                {
#line 1864 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_instr__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ll_backend__llds_out__llds_out_instr__VarType_14, &ll_backend__llds_out__llds_out_instr__VarTypeCtor_20, &ll_backend__llds_out__llds_out_instr__V_32_32);
                }
#line 1864 "llds_out_instr.m"
                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1864 "llds_out_instr.m"
                  {
#line 2571 "ll_backend.llds_out.llds_out_instr.c"
                    ll_backend__llds_out__llds_out_instr__TypeInfo_33_33 = (MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[4];
#line 1864 "llds_out_instr.m"
                    {
#line 1864 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_instr__TypeInfo_33_33, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_32_32)));
                    }
#line 1864 "llds_out_instr.m"
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1864 "llds_out_instr.m"
                      {
#line 1865 "llds_out_instr.m"
                        {
#line 1865 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_instr__V_25_25 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(ll_backend__llds_out__llds_out_instr__VarTypeCtor_20);
                        }
#line 1865 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_25_25 == (MR_Integer) 0);
#line 1864 "llds_out_instr.m"
                      }
#line 1864 "llds_out_instr.m"
                  }
#line 1869 "llds_out_instr.m"
                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1865 "llds_out_instr.m"
                  {
#line 1865 "llds_out_instr.m"
                  }
#line 1869 "llds_out_instr.m"
                else
#line 1870 "llds_out_instr.m"
                  {
#line 1870 "llds_out_instr.m"
                    MR_String ll_backend__llds_out__llds_out_instr__V_26_26;
#line 1870 "llds_out_instr.m"
                    MR_String ll_backend__llds_out__llds_out_instr__V_29_29;

#line 1870 "llds_out_instr.m"
                    {
#line 1870 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__V_29_29 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_instr__VarName_13, (MR_String) " = 0;\n");
                    }
#line 1870 "llds_out_instr.m"
                    {
#line 1870 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ll_backend__llds_out__llds_out_instr__V_29_29);
                    }
#line 1870 "llds_out_instr.m"
                    {
#line 1870 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__V_26_26);
                    }
#line 1870 "llds_out_instr.m"
                  }
#line 1869 "llds_out_instr.m"
              }
#line 1872 "llds_out_instr.m"
            else
#line 1884 "llds_out_instr.m"
              {
#line 1887 "llds_out_instr.m"
                {
#line 1887 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "\t");
                }
#line 1893 "llds_out_instr.m"
                if ((ll_backend__llds_out__llds_out_instr___BoxPolicy_19 == (MR_Integer) 1))
#line 1889 "llds_out_instr.m"
                  {
#line 1890 "llds_out_instr.m"
                    {
#line 1890 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_13);
                    }
#line 1891 "llds_out_instr.m"
                    {
#line 1891 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) " = ");
                    }
#line 1892 "llds_out_instr.m"
                    {
#line 1892 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr___Rval_17, (MR_Integer) 13);
                    }
#line 1889 "llds_out_instr.m"
                  }
#line 1893 "llds_out_instr.m"
                else
#line 1926 "llds_out_instr.m"
                  if ((ll_backend__llds_out__llds_out_instr___MaybeForeignTypeInfo_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1927 "llds_out_instr.m"
                    {
#line 1930 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_54_54;

#line 1928 "llds_out_instr.m"
                      {
#line 1928 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_13);
                      }
#line 1929 "llds_out_instr.m"
                      {
#line 1929 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0((MR_String) " = ");
                      }
#line 1930 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr___OrigType_16)) == (MR_mktag((MR_Integer) 2)));
#line 1930 "llds_out_instr.m"
                      if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1930 "llds_out_instr.m"
                        {
#line 1930 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_instr__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_instr___OrigType_16, (MR_Integer) 0)));
#line 1930 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_54_54 == (MR_Integer) 2);
#line 1930 "llds_out_instr.m"
                        }
#line 1933 "llds_out_instr.m"
                      if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1931 "llds_out_instr.m"
                        {
#line 1931 "llds_out_instr.m"
                          {
#line 1931 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Integer) 10);
                          }
#line 1932 "llds_out_instr.m"
                          {
#line 1932 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr___Rval_17, (MR_Integer) 13);
                          }
#line 1931 "llds_out_instr.m"
                        }
#line 1933 "llds_out_instr.m"
                      else
#line 1935 "llds_out_instr.m"
                        {
#line 1933 "llds_out_instr.m"
                          MR_Word ll_backend__llds_out__llds_out_instr__V_59_59;

#line 1933 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr___OrigType_16)) == (MR_mktag((MR_Integer) 2)));
#line 1933 "llds_out_instr.m"
                          if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1933 "llds_out_instr.m"
                            {
#line 1933 "llds_out_instr.m"
                              ll_backend__llds_out__llds_out_instr__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_instr___OrigType_16, (MR_Integer) 0)));
#line 1933 "llds_out_instr.m"
                              ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_59_59 == (MR_Integer) 1);
#line 1933 "llds_out_instr.m"
                            }
#line 1935 "llds_out_instr.m"
                          if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1934 "llds_out_instr.m"
                            {
#line 1934 "llds_out_instr.m"
                              {
#line 1934 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr___Rval_17, (MR_Integer) 9);
                              }
#line 1934 "llds_out_instr.m"
                            }
#line 1935 "llds_out_instr.m"
                          else
#line 1936 "llds_out_instr.m"
                            {
#line 1936 "llds_out_instr.m"
                              {
#line 1936 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr___Rval_17, (MR_Integer) 13);
                              }
#line 1936 "llds_out_instr.m"
                            }
#line 1935 "llds_out_instr.m"
                        }
#line 1927 "llds_out_instr.m"
                    }
#line 1926 "llds_out_instr.m"
                  else
#line 1896 "llds_out_instr.m"
                    {
#line 1896 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__ForeignTypeInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr___MaybeForeignTypeInfo_18, (MR_Integer) 0)));
#line 1896 "llds_out_instr.m"
                      MR_String ll_backend__llds_out__llds_out_instr__ForeignType_47 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ForeignTypeInfo_46, (MR_Integer) 0)));
#line 1896 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__Assertions_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ForeignTypeInfo_46, (MR_Integer) 1)));

#line 1905 "llds_out_instr.m"
                      {
#line 1905 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__succeeded = backend_libs__export__c_type_is_word_sized_int_or_ptr_1_p_0(ll_backend__llds_out__llds_out_instr__ForeignType_47);
                      }
#line 1906 "llds_out_instr.m"
                      if (!(ll_backend__llds_out__llds_out_instr__succeeded))
#line 1907 "llds_out_instr.m"
                        {
#line 1907 "llds_out_instr.m"
                          {
#line 1907 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0, ((MR_Box) ((MR_Integer) 0)), ll_backend__llds_out__llds_out_instr__Assertions_48);
                          }
#line 1907 "llds_out_instr.m"
                        }
#line 1917 "llds_out_instr.m"
                      if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1913 "llds_out_instr.m"
                        {
#line 1913 "llds_out_instr.m"
                          MR_String ll_backend__llds_out__llds_out_instr__V_68_68;
#line 1913 "llds_out_instr.m"
                          MR_String ll_backend__llds_out__llds_out_instr__V_71_71;

#line 1913 "llds_out_instr.m"
                          {
#line 1913 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_13);
                          }
#line 1914 "llds_out_instr.m"
                          {
#line 1914 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) " = ");
                          }
#line 1915 "llds_out_instr.m"
                          {
#line 1915 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__V_71_71 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_instr__ForeignType_47, (MR_String) ") ");
                          }
#line 1915 "llds_out_instr.m"
                          {
#line 1915 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__V_68_68 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__llds_out__llds_out_instr__V_71_71);
                          }
#line 1915 "llds_out_instr.m"
                          {
#line 1915 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__V_68_68);
                          }
#line 1916 "llds_out_instr.m"
                          {
#line 1916 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr___Rval_17, (MR_Integer) 13);
                          }
#line 1913 "llds_out_instr.m"
                        }
#line 1917 "llds_out_instr.m"
                      else
#line 1918 "llds_out_instr.m"
                        {
#line 1918 "llds_out_instr.m"
                          {
#line 1918 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) "MR_MAYBE_UNBOX_FOREIGN_TYPE(");
                          }
#line 1919 "llds_out_instr.m"
                          {
#line 1919 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__ForeignType_47);
                          }
#line 1920 "llds_out_instr.m"
                          {
#line 1920 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) ", ");
                          }
#line 1921 "llds_out_instr.m"
                          {
#line 1921 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr___Rval_17, (MR_Integer) 13);
                          }
#line 1922 "llds_out_instr.m"
                          {
#line 1922 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) ", ");
                          }
#line 1923 "llds_out_instr.m"
                          {
#line 1923 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_13);
                          }
#line 1924 "llds_out_instr.m"
                          {
#line 1924 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) ")");
                          }
#line 1918 "llds_out_instr.m"
                        }
#line 1896 "llds_out_instr.m"
                    }
#line 1940 "llds_out_instr.m"
                {
#line 1940 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) ";\n");
                }
#line 1884 "llds_out_instr.m"
              }
#line 1876 "llds_out_instr.m"
            /* direct tailcall eliminated */
#line 1876 "llds_out_instr.m"
            {
#line 1876 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Inputs_11;

#line 1876 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 1876 "llds_out_instr.m"
            }
#line 1876 "llds_out_instr.m"
            continue;
#line 1855 "llds_out_instr.m"
          }
#line 1854 "llds_out_instr.m"
      }
#line 1854 "llds_out_instr.m"
      break;
#line 1854 "llds_out_instr.m"
    }
#line 1851 "llds_out_instr.m"
}

#line 1836 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_6_p_0(
#line 1836 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1836 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
#line 1836 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3,
#line 1836 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_4)
#line 1836 "llds_out_instr.m"
{
#line 1840 "llds_out_instr.m"
  while (MR_TRUE)
#line 1840 "llds_out_instr.m"
    {
#line 1840 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 1840 "llds_out_instr.m"
      {
#line 1840 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1840 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1840 "llds_out_instr.m"
          *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_4 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3;
#line 1840 "llds_out_instr.m"
        else
#line 1842 "llds_out_instr.m"
          {
#line 1842 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Input_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
#line 1842 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Inputs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
#line 1842 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Rval_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_15, (MR_Integer) 4)));
#line 1842 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_30_30;
#line 1843 "llds_out_instr.m"
            MR_String ll_backend__llds_out__llds_out_instr___VarName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_15, (MR_Integer) 0)));
#line 1843 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___VarType_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_15, (MR_Integer) 1)));
#line 1843 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___IsDummy_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_15, (MR_Integer) 2)));
#line 1843 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___OrigType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_15, (MR_Integer) 3)));
#line 1843 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_15, (MR_Integer) 5)));
#line 1843 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_15, (MR_Integer) 6)));

#line 1845 "llds_out_instr.m"
            {
#line 1845 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_data__output_record_rval_decls_tab_6_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Rval_23, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_30_30);
            }
#line 1846 "llds_out_instr.m"
            /* direct tailcall eliminated */
#line 1846 "llds_out_instr.m"
            {
#line 1846 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Inputs_16;
#line 1846 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0__tmp_copy_3 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_30_30;

#line 1846 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0__tmp_copy_3;
#line 1846 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 1846 "llds_out_instr.m"
            }
#line 1846 "llds_out_instr.m"
            continue;
#line 1842 "llds_out_instr.m"
          }
#line 1840 "llds_out_instr.m"
      }
#line 1840 "llds_out_instr.m"
      break;
#line 1840 "llds_out_instr.m"
    }
#line 1836 "llds_out_instr.m"
}

#line 1820 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_p_0(
#line 1820 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1)
#line 1820 "llds_out_instr.m"
{
#line 1823 "llds_out_instr.m"
  while (MR_TRUE)
#line 1823 "llds_out_instr.m"
    {
#line 1823 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 1823 "llds_out_instr.m"
      {
#line 1823 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1823 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1823 "llds_out_instr.m"
          {
#line 1823 "llds_out_instr.m"
          }
#line 1823 "llds_out_instr.m"
        else
#line 1824 "llds_out_instr.m"
          {
#line 1824 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Decl_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 0)));
#line 1824 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Decls_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 1)));
#line 1824 "llds_out_instr.m"
            MR_String ll_backend__llds_out__llds_out_instr__TypeString_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Decl_7, (MR_Integer) 1)));
#line 1824 "llds_out_instr.m"
            MR_String ll_backend__llds_out__llds_out_instr__VarName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Decl_7, (MR_Integer) 2)));
#line 1826 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Decl_7, (MR_Integer) 0)));

#line 1827 "llds_out_instr.m"
            {
#line 1827 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 1828 "llds_out_instr.m"
            {
#line 1828 "llds_out_instr.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__TypeString_11);
            }
#line 1829 "llds_out_instr.m"
            {
#line 1829 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 1830 "llds_out_instr.m"
            {
#line 1830 "llds_out_instr.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
            }
#line 1831 "llds_out_instr.m"
            {
#line 1831 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) ";\n");
            }
#line 1832 "llds_out_instr.m"
            /* direct tailcall eliminated */
#line 1832 "llds_out_instr.m"
            {
#line 1832 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_instr__Decls_8;

#line 1832 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__HeadVar__1_1 = ll_backend__llds_out__llds_out_instr__HeadVar__1__tmp_copy_1;
#line 1832 "llds_out_instr.m"
            }
#line 1832 "llds_out_instr.m"
            continue;
#line 1824 "llds_out_instr.m"
          }
#line 1823 "llds_out_instr.m"
      }
#line 1823 "llds_out_instr.m"
      break;
#line 1823 "llds_out_instr.m"
    }
#line 1820 "llds_out_instr.m"
}

#line 1770 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_p_0(
#line 1770 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 1770 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Component_6)
#line 1770 "llds_out_instr.m"
{
#line 1775 "llds_out_instr.m"
  {
#line 1775 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1775 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__Component_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1814 "llds_out_instr.m"
      {
#line 1814 "llds_out_instr.m"
      }
#line 1775 "llds_out_instr.m"
    else
#line 1775 "llds_out_instr.m"
      if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Component_6)) == (MR_mktag((MR_Integer) 1))))
#line 1775 "llds_out_instr.m"
        {
#line 1775 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__Inputs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 0)));

#line 1776 "llds_out_instr.m"
          {
#line 1776 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Inputs_8);
#line 1776 "llds_out_instr.m"
            return;
          }
#line 1775 "llds_out_instr.m"
        }
#line 1775 "llds_out_instr.m"
      else
#line 1775 "llds_out_instr.m"
        if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Component_6)) == (MR_mktag((MR_Integer) 2))))
#line 1778 "llds_out_instr.m"
          {
#line 1778 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Outputs_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 0)));

#line 1779 "llds_out_instr.m"
            {
#line 1779 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Outputs_9);
#line 1779 "llds_out_instr.m"
              return;
            }
#line 1778 "llds_out_instr.m"
          }
#line 1775 "llds_out_instr.m"
        else
#line 1775 "llds_out_instr.m"
          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1811 "llds_out_instr.m"
            {
#line 1811 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__AllocId_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 1)));

#line 1812 "llds_out_instr.m"
              {
#line 1812 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__output_alloc_site_id_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__AllocId_18);
#line 1812 "llds_out_instr.m"
                return;
              }
#line 1811 "llds_out_instr.m"
            }
#line 1775 "llds_out_instr.m"
          else
#line 1775 "llds_out_instr.m"
            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1805 "llds_out_instr.m"
              {
#line 1805 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__Label_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 1)));
#line 1805 "llds_out_instr.m"
                MR_String ll_backend__llds_out__llds_out_instr__V_22_22;
#line 1805 "llds_out_instr.m"
                MR_String ll_backend__llds_out__llds_out_instr__V_25_25;
#line 1805 "llds_out_instr.m"
                MR_String ll_backend__llds_out__llds_out_instr__V_26_26;

#line 1807 "llds_out_instr.m"
                {
#line 1807 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_instr__V_26_26 = ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_f_0();
                }
#line 1807 "llds_out_instr.m"
                {
#line 1807 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_instr__V_25_25 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_instr__V_26_26, (MR_String) ") MR_GOTO_LAB(");
                }
#line 1806 "llds_out_instr.m"
                {
#line 1806 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_instr__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "if (!", ll_backend__llds_out__llds_out_instr__V_25_25);
                }
#line 1806 "llds_out_instr.m"
                {
#line 1806 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__V_22_22);
                }
#line 1808 "llds_out_instr.m"
                {
#line 1808 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_17);
                }
#line 1809 "llds_out_instr.m"
                {
#line 1809 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1809 "llds_out_instr.m"
                  return;
                }
#line 1805 "llds_out_instr.m"
              }
#line 1775 "llds_out_instr.m"
            else
#line 1775 "llds_out_instr.m"
              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1802 "llds_out_instr.m"
                {
#line 1802 "llds_out_instr.m"
                  MR_String ll_backend__llds_out__llds_out_instr__C_Code_46 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 4)));
#line 1802 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 1)));
#line 1802 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 2)));
#line 1802 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 3)));

#line 1803 "llds_out_instr.m"
                  {
#line 1803 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__C_Code_46);
#line 1803 "llds_out_instr.m"
                    return;
                  }
#line 1802 "llds_out_instr.m"
                }
#line 1775 "llds_out_instr.m"
              else
#line 1781 "llds_out_instr.m"
                {
#line 1781 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__MaybeContext_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 1)));
#line 1781 "llds_out_instr.m"
                  MR_String ll_backend__llds_out__llds_out_instr__C_Code_12 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 3)));
#line 1781 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 2)));

#line 1782 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_instr__succeeded = (strcmp(ll_backend__llds_out__llds_out_instr__C_Code_12, (MR_String) "") == 0);
#line 1784 "llds_out_instr.m"
                  if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1782 "llds_out_instr.m"
                    {
#line 1782 "llds_out_instr.m"
                    }
#line 1784 "llds_out_instr.m"
                  else
#line 1794 "llds_out_instr.m"
                    if ((ll_backend__llds_out__llds_out_instr__MaybeContext_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1795 "llds_out_instr.m"
                      {
#line 1796 "llds_out_instr.m"
                        {
#line 1796 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "{\n");
                        }
#line 1797 "llds_out_instr.m"
                        {
#line 1797 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__C_Code_12);
                        }
#line 1798 "llds_out_instr.m"
                        {
#line 1798 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) ";}\n");
#line 1798 "llds_out_instr.m"
                          return;
                        }
#line 1795 "llds_out_instr.m"
                      }
#line 1794 "llds_out_instr.m"
                    else
#line 1788 "llds_out_instr.m"
                      {
#line 1788 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeContext_10, (MR_Integer) 0)));

#line 1789 "llds_out_instr.m"
                        {
#line 1789 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "{\n");
                        }
#line 1790 "llds_out_instr.m"
                        {
#line 1790 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_util__output_set_line_num_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Context_13);
                        }
#line 1791 "llds_out_instr.m"
                        {
#line 1791 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__C_Code_12);
                        }
#line 1792 "llds_out_instr.m"
                        {
#line 1792 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) ";}\n");
                        }
#line 1793 "llds_out_instr.m"
                        {
#line 1793 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_util__output_reset_line_num_3_p_0(ll_backend__llds_out__llds_out_instr__Info_5);
#line 1793 "llds_out_instr.m"
                          return;
                        }
#line 1788 "llds_out_instr.m"
                      }
#line 1781 "llds_out_instr.m"
                }
#line 1775 "llds_out_instr.m"
  }
#line 1770 "llds_out_instr.m"
}

#line 1749 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_p_0(
#line 1749 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1)
#line 1749 "llds_out_instr.m"
{
#line 1752 "llds_out_instr.m"
  {
#line 1752 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1752 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == (MR_Integer) 1))
#line 1754 "llds_out_instr.m"
      {
#line 1755 "llds_out_instr.m"
        {
#line 1755 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "MR_commit");
#line 1755 "llds_out_instr.m"
          return;
        }
#line 1754 "llds_out_instr.m"
      }
#line 1752 "llds_out_instr.m"
    else
#line 1752 "llds_out_instr.m"
      if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == (MR_Integer) 3))
#line 1758 "llds_out_instr.m"
        {
#line 1759 "llds_out_instr.m"
          {
#line 1759 "llds_out_instr.m"
            mercury__io__write_string_3_p_0((MR_String) "MR_exception");
#line 1759 "llds_out_instr.m"
            return;
          }
#line 1758 "llds_out_instr.m"
        }
#line 1752 "llds_out_instr.m"
      else
#line 1752 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == (MR_Integer) 5))
#line 1762 "llds_out_instr.m"
          {
#line 1763 "llds_out_instr.m"
            {
#line 1763 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "MR_gc");
#line 1763 "llds_out_instr.m"
              return;
            }
#line 1762 "llds_out_instr.m"
          }
#line 1752 "llds_out_instr.m"
        else
#line 1752 "llds_out_instr.m"
          if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == (MR_Integer) 4))
#line 1760 "llds_out_instr.m"
            {
#line 1761 "llds_out_instr.m"
              {
#line 1761 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_retry");
#line 1761 "llds_out_instr.m"
                return;
              }
#line 1760 "llds_out_instr.m"
            }
#line 1752 "llds_out_instr.m"
          else
#line 1752 "llds_out_instr.m"
            if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == (MR_Integer) 2))
#line 1756 "llds_out_instr.m"
              {
#line 1757 "llds_out_instr.m"
                {
#line 1757 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "MR_solve");
#line 1757 "llds_out_instr.m"
                  return;
                }
#line 1756 "llds_out_instr.m"
              }
#line 1752 "llds_out_instr.m"
            else
#line 1752 "llds_out_instr.m"
              {
#line 1753 "llds_out_instr.m"
                {
#line 1753 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "MR_undo");
#line 1753 "llds_out_instr.m"
                  return;
                }
#line 1752 "llds_out_instr.m"
              }
#line 1752 "llds_out_instr.m"
  }
#line 1749 "llds_out_instr.m"
}

#line 1738 "llds_out_instr.m"
static MR_Integer MR_CALL 
ll_backend__llds_out__llds_out_instr__max_leaf_stack_frame_size_0_f_0(void)
#line 1738 "llds_out_instr.m"
{
#line 1742 "llds_out_instr.m"
  {
#line 1742 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1742 "llds_out_instr.m"
    return (MR_Integer) 128;
#line 1742 "llds_out_instr.m"
  }
#line 1738 "llds_out_instr.m"
}

#line 1729 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_p_0(
#line 1729 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 1729 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__EmbeddedFrame_6)
#line 1729 "llds_out_instr.m"
{
#line 1732 "llds_out_instr.m"
  {
#line 1732 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 1732 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__MainStackId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__EmbeddedFrame_6, (MR_Integer) 0)));
#line 1732 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__LastSlot_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__EmbeddedFrame_6, (MR_Integer) 2)));
#line 1732 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__FrameStartRval_11;
#line 1733 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr___FirstSlot_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__EmbeddedFrame_6, (MR_Integer) 1)));

#line 1735 "llds_out_instr.m"
    {
#line 1735 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__FrameStartRval_11 = ll_backend__llds__stack_slot_num_to_lval_ref_2_f_0(ll_backend__llds_out__llds_out_instr__MainStackId_8, ll_backend__llds_out__llds_out_instr__LastSlot_10);
    }
#line 1736 "llds_out_instr.m"
    {
#line 1736 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__FrameStartRval_11, (MR_Integer) 11);
#line 1736 "llds_out_instr.m"
      return;
    }
#line 1732 "llds_out_instr.m"
  }
#line 1729 "llds_out_instr.m"
}

#line 1704 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_alloc_site_id_4_p_0(
#line 1704 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 1704 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__AllocId_6)
#line 1704 "llds_out_instr.m"
{
#line 1707 "llds_out_instr.m"
  {
#line 1707 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 1707 "llds_out_instr.m"
    MR_String ll_backend__llds_out__llds_out_instr__MangledModuleName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 1)));
#line 1707 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__AllocSiteMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 5)));
#line 1707 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__AllocSiteSlotName_10;
#line 1708 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 0)));
#line 1708 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 2)));
#line 1708 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 3)));
#line 1708 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 4)));
#line 1708 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1708 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)));
#line 1710 "llds_out_instr.m"
    MR_Box ll_backend__llds_out__llds_out_instr__conv0_AllocSiteSlotName_10;

#line 1710 "llds_out_instr.m"
    {
#line 1710 "llds_out_instr.m"
      mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__llds_out__llds_out_instr__AllocSiteMap_9, ((MR_Box) (ll_backend__llds_out__llds_out_instr__AllocId_6)), &ll_backend__llds_out__llds_out_instr__conv0_AllocSiteSlotName_10);
    }
#line 1710 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__AllocSiteSlotName_10 = ((MR_Word) ll_backend__llds_out__llds_out_instr__conv0_AllocSiteSlotName_10);
#line 1711 "llds_out_instr.m"
    {
#line 1711 "llds_out_instr.m"
      ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__llds_out__llds_out_instr__MangledModuleName_8, ll_backend__llds_out__llds_out_instr__AllocSiteSlotName_10);
#line 1711 "llds_out_instr.m"
      return;
    }
#line 1707 "llds_out_instr.m"
  }
#line 1704 "llds_out_instr.m"
}

#line 1692 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_maybe_alloc_site_id_4_p_0(
#line 1692 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 1692 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeAllocId_6)
#line 1692 "llds_out_instr.m"
{
#line 1697 "llds_out_instr.m"
  {
#line 1697 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1697 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__MaybeAllocId_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1700 "llds_out_instr.m"
      {
#line 1701 "llds_out_instr.m"
        {
#line 1701 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "NULL");
#line 1701 "llds_out_instr.m"
          return;
        }
#line 1700 "llds_out_instr.m"
      }
#line 1697 "llds_out_instr.m"
    else
#line 1697 "llds_out_instr.m"
      {
#line 1697 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__AllocId_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeAllocId_6, (MR_Integer) 0)));
#line 1697 "llds_out_instr.m"
        MR_String ll_backend__llds_out__llds_out_instr__MangledModuleName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 1)));
#line 1697 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__AllocSiteMap_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 5)));
#line 1697 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__AllocSiteSlotName_21;
#line 1708 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 0)));
#line 1708 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 2)));
#line 1708 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 3)));
#line 1708 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 4)));
#line 1708 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1708 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1708 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)));
#line 1710 "llds_out_instr.m"
        MR_Box ll_backend__llds_out__llds_out_instr__conv0_AllocSiteSlotName_21;

#line 1710 "llds_out_instr.m"
        {
#line 1710 "llds_out_instr.m"
          mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__llds_out__llds_out_instr__AllocSiteMap_20, ((MR_Box) (ll_backend__llds_out__llds_out_instr__AllocId_8)), &ll_backend__llds_out__llds_out_instr__conv0_AllocSiteSlotName_21);
        }
#line 1710 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__AllocSiteSlotName_21 = ((MR_Word) ll_backend__llds_out__llds_out_instr__conv0_AllocSiteSlotName_21);
#line 1711 "llds_out_instr.m"
        {
#line 1711 "llds_out_instr.m"
          ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__llds_out__llds_out_instr__MangledModuleName_19, ll_backend__llds_out__llds_out_instr__AllocSiteSlotName_21);
#line 1711 "llds_out_instr.m"
          return;
        }
#line 1697 "llds_out_instr.m"
      }
#line 1697 "llds_out_instr.m"
  }
#line 1692 "llds_out_instr.m"
}

#line 1532 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_p_0(
#line 1532 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1)
#line 1532 "llds_out_instr.m"
{
#line 1535 "llds_out_instr.m"
  while (MR_TRUE)
#line 1535 "llds_out_instr.m"
    {
#line 1535 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 1535 "llds_out_instr.m"
      {
#line 1535 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1535 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1535 "llds_out_instr.m"
          {
#line 1535 "llds_out_instr.m"
          }
#line 1535 "llds_out_instr.m"
        else
#line 1536 "llds_out_instr.m"
          {
#line 1536 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__MaybeLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 0)));
#line 1536 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__MaybeLabels_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 1)));

#line 1537 "llds_out_instr.m"
            {
#line 1537 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) " MR_AND\n\t\t");
            }
#line 1545 "llds_out_instr.m"
            if ((ll_backend__llds_out__llds_out_instr__MaybeLabel_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1550 "llds_out_instr.m"
              {
#line 1551 "llds_out_instr.m"
                {
#line 1551 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "MR_ENTRY(MR_do_not_reached)");
                }
#line 1550 "llds_out_instr.m"
              }
#line 1545 "llds_out_instr.m"
            else
#line 1545 "llds_out_instr.m"
              {
#line 1545 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__Label_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeLabel_7, (MR_Integer) 0)));

#line 1546 "llds_out_instr.m"
                {
#line 1546 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "MR_LABEL_AP(");
                }
#line 1547 "llds_out_instr.m"
                {
#line 1547 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_20);
                }
#line 1548 "llds_out_instr.m"
                {
#line 1548 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
#line 1545 "llds_out_instr.m"
              }
#line 1539 "llds_out_instr.m"
            /* direct tailcall eliminated */
#line 1539 "llds_out_instr.m"
            {
#line 1539 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_instr__MaybeLabels_8;

#line 1539 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__HeadVar__1_1 = ll_backend__llds_out__llds_out_instr__HeadVar__1__tmp_copy_1;
#line 1539 "llds_out_instr.m"
            }
#line 1539 "llds_out_instr.m"
            continue;
#line 1536 "llds_out_instr.m"
          }
#line 1535 "llds_out_instr.m"
      }
#line 1535 "llds_out_instr.m"
      break;
#line 1535 "llds_out_instr.m"
    }
#line 1532 "llds_out_instr.m"
}

#line 1524 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_p_0(
#line 1524 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1)
#line 1524 "llds_out_instr.m"
{
#line 1527 "llds_out_instr.m"
  {
#line 1527 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1527 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1527 "llds_out_instr.m"
      {
#line 1527 "llds_out_instr.m"
      }
#line 1527 "llds_out_instr.m"
    else
#line 1528 "llds_out_instr.m"
      {
#line 1528 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__MaybeLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 0)));
#line 1528 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__MaybeLabels_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 1)));

#line 1545 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__MaybeLabel_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1550 "llds_out_instr.m"
          {
#line 1551 "llds_out_instr.m"
            {
#line 1551 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "MR_ENTRY(MR_do_not_reached)");
            }
#line 1550 "llds_out_instr.m"
          }
#line 1545 "llds_out_instr.m"
        else
#line 1545 "llds_out_instr.m"
          {
#line 1545 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Label_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeLabel_7, (MR_Integer) 0)));

#line 1546 "llds_out_instr.m"
            {
#line 1546 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "MR_LABEL_AP(");
            }
#line 1547 "llds_out_instr.m"
            {
#line 1547 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_18);
            }
#line 1548 "llds_out_instr.m"
            {
#line 1548 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
#line 1545 "llds_out_instr.m"
          }
#line 1530 "llds_out_instr.m"
        {
#line 1530 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_p_0(ll_backend__llds_out__llds_out_instr__MaybeLabels_8);
#line 1530 "llds_out_instr.m"
          return;
        }
#line 1528 "llds_out_instr.m"
      }
#line 1527 "llds_out_instr.m"
  }
#line 1524 "llds_out_instr.m"
}

#line 1376 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_goto_5_p_0(
#line 1376 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
#line 1376 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Target_7,
#line 1376 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_8)
#line 1376 "llds_out_instr.m"
{
#line 1381 "llds_out_instr.m"
  {
#line 1381 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1381 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__Target_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1454 "llds_out_instr.m"
      {
#line 1455 "llds_out_instr.m"
        {
#line 1455 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "MR_proceed();\n");
#line 1455 "llds_out_instr.m"
          return;
        }
#line 1454 "llds_out_instr.m"
      }
#line 1381 "llds_out_instr.m"
    else
#line 1381 "llds_out_instr.m"
      if ((ll_backend__llds_out__llds_out_instr__Target_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1476 "llds_out_instr.m"
        {
#line 1476 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__UseMacro_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1477 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
#line 1477 "llds_out_instr.m"
          MR_String ll_backend__llds_out__llds_out_instr__V_192_192 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
#line 1477 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
#line 1477 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
#line 1477 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
#line 1477 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
#line 1477 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_197_197 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1477 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_198_198 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1477 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_199_199 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1477 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_200_200 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1477 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_201_201 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1477 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_202_202 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1477 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_203_203 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1477 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_204_204 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1477 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_205_205 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1477 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_206_206 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1477 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_207_207 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1477 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_208_208 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1477 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_209_209 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1477 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)));

#line 1481 "llds_out_instr.m"
          if ((ll_backend__llds_out__llds_out_instr__UseMacro_129 == (MR_Integer) 0))
#line 1482 "llds_out_instr.m"
            {
#line 1483 "llds_out_instr.m"
              {
#line 1483 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_GOTO(MR_ENTRY(MR_do_fail));\n");
#line 1483 "llds_out_instr.m"
                return;
              }
#line 1482 "llds_out_instr.m"
            }
#line 1481 "llds_out_instr.m"
          else
#line 1479 "llds_out_instr.m"
            {
#line 1480 "llds_out_instr.m"
              {
#line 1480 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_fail();\n");
#line 1480 "llds_out_instr.m"
                return;
              }
#line 1479 "llds_out_instr.m"
            }
#line 1476 "llds_out_instr.m"
        }
#line 1381 "llds_out_instr.m"
      else
#line 1381 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__Target_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 1512 "llds_out_instr.m"
          {
#line 1513 "llds_out_instr.m"
            {
#line 1513 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "MR_tailcall(MR_ENTRY(MR_do_not_reached),\n\t\t");
            }
#line 1515 "llds_out_instr.m"
            {
#line 1515 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_8);
            }
#line 1516 "llds_out_instr.m"
            {
#line 1516 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1516 "llds_out_instr.m"
              return;
            }
#line 1512 "llds_out_instr.m"
          }
#line 1381 "llds_out_instr.m"
        else
#line 1381 "llds_out_instr.m"
          if ((ll_backend__llds_out__llds_out_instr__Target_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1466 "llds_out_instr.m"
            {
#line 1466 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__UseMacro_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1467 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
#line 1467 "llds_out_instr.m"
              MR_String ll_backend__llds_out__llds_out_instr__V_172_172 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
#line 1467 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
#line 1467 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
#line 1467 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
#line 1467 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
#line 1467 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_177_177 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1467 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_178_178 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1467 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_179_179 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1467 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_180_180 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1467 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_181_181 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1467 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_182_182 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1467 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_183_183 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1467 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_184_184 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1467 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_185_185 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1467 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_186_186 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1467 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_187_187 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1467 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_188_188 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1467 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_189_189 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1467 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)));

#line 1471 "llds_out_instr.m"
              if ((ll_backend__llds_out__llds_out_instr__UseMacro_19 == (MR_Integer) 0))
#line 1472 "llds_out_instr.m"
                {
#line 1473 "llds_out_instr.m"
                  {
#line 1473 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) "MR_GOTO(MR_ENTRY(MR_do_redo));\n");
#line 1473 "llds_out_instr.m"
                    return;
                  }
#line 1472 "llds_out_instr.m"
                }
#line 1471 "llds_out_instr.m"
              else
#line 1469 "llds_out_instr.m"
                {
#line 1470 "llds_out_instr.m"
                  {
#line 1470 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) "MR_redo();\n");
#line 1470 "llds_out_instr.m"
                    return;
                  }
#line 1469 "llds_out_instr.m"
                }
#line 1466 "llds_out_instr.m"
            }
#line 1381 "llds_out_instr.m"
          else
#line 1381 "llds_out_instr.m"
            if ((ll_backend__llds_out__llds_out_instr__Target_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1490 "llds_out_instr.m"
              {
#line 1491 "llds_out_instr.m"
                {
#line 1491 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "MR_GOTO(MR_ENTRY(MR_do_trace_redo_fail_deep));\n");
#line 1491 "llds_out_instr.m"
                  return;
                }
#line 1490 "llds_out_instr.m"
              }
#line 1381 "llds_out_instr.m"
            else
#line 1381 "llds_out_instr.m"
              if ((ll_backend__llds_out__llds_out_instr__Target_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1486 "llds_out_instr.m"
                {
#line 1487 "llds_out_instr.m"
                  {
#line 1487 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) "MR_GOTO(MR_ENTRY(MR_do_trace_redo_fail_shallow));\n");
#line 1487 "llds_out_instr.m"
                    return;
                  }
#line 1486 "llds_out_instr.m"
                }
#line 1381 "llds_out_instr.m"
              else
#line 1381 "llds_out_instr.m"
                if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Target_7)) == (MR_mktag((MR_Integer) 2))))
#line 1438 "llds_out_instr.m"
                  {
#line 1438 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__ProcLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_instr__Target_7, (MR_Integer) 0)));
#line 1438 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__ProfileCalls_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1439 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
#line 1439 "llds_out_instr.m"
                    MR_String ll_backend__llds_out__llds_out_instr__V_152_152 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
#line 1439 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
#line 1439 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
#line 1439 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
#line 1439 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
#line 1439 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_157_157 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1439 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_158_158 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1439 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_159_159 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1439 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_160_160 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1439 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_161_161 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1439 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_162_162 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1439 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_163_163 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1439 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_164_164 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1439 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_165_165 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1439 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_166_166 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1439 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_167_167 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1439 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_168_168 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1439 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_169_169 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1439 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)));

#line 1447 "llds_out_instr.m"
                    if ((ll_backend__llds_out__llds_out_instr__ProfileCalls_128 == (MR_Integer) 0))
#line 1448 "llds_out_instr.m"
                      {
#line 1449 "llds_out_instr.m"
                        {
#line 1449 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "MR_np_tailcall_ent(");
                        }
#line 1450 "llds_out_instr.m"
                        {
#line 1450 "llds_out_instr.m"
                          backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__ProcLabel_17);
                        }
#line 1451 "llds_out_instr.m"
                        {
#line 1451 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1451 "llds_out_instr.m"
                          return;
                        }
#line 1448 "llds_out_instr.m"
                      }
#line 1447 "llds_out_instr.m"
                    else
#line 1441 "llds_out_instr.m"
                      {
#line 1442 "llds_out_instr.m"
                        {
#line 1442 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "MR_tailcall(MR_ENTRY(");
                        }
#line 1443 "llds_out_instr.m"
                        {
#line 1443 "llds_out_instr.m"
                          backend_libs__name_mangle__output_proc_label_3_p_0(ll_backend__llds_out__llds_out_instr__ProcLabel_17);
                        }
#line 1444 "llds_out_instr.m"
                        {
#line 1444 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "),\n\t\t");
                        }
#line 1445 "llds_out_instr.m"
                        {
#line 1445 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_8);
                        }
#line 1446 "llds_out_instr.m"
                        {
#line 1446 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1446 "llds_out_instr.m"
                          return;
                        }
#line 1441 "llds_out_instr.m"
                      }
#line 1438 "llds_out_instr.m"
                  }
#line 1381 "llds_out_instr.m"
                else
#line 1381 "llds_out_instr.m"
                  if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Target_7)) == (MR_mktag((MR_Integer) 1))))
#line 1381 "llds_out_instr.m"
                    {
#line 1381 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__Label_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Target_7, (MR_Integer) 0)));
#line 1381 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__ProfileCalls_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1385 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
#line 1385 "llds_out_instr.m"
                      MR_String ll_backend__llds_out__llds_out_instr__V_132_132 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
#line 1385 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
#line 1385 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
#line 1385 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
#line 1385 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
#line 1385 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_137_137 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1385 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_138_138 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1385 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_139_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1385 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_140_140 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1385 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_141_141 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1385 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_142_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1385 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_143_143 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1385 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_144_144 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1385 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_145_145 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1385 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_146_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1385 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_147_147 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1385 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_148_148 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1385 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_149_149 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1385 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)));

#line 1401 "llds_out_instr.m"
                      if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Label_10)) == (MR_mktag((MR_Integer) 1))))
#line 1401 "llds_out_instr.m"
                        {
#line 1401 "llds_out_instr.m"
                          MR_Word ll_backend__llds_out__llds_out_instr__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Label_10, (MR_Integer) 0)));
#line 1387 "llds_out_instr.m"
                          MR_Word ll_backend__llds_out__llds_out_instr__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Label_10, (MR_Integer) 1)));

#line 1401 "llds_out_instr.m"
                          if ((ll_backend__llds_out__llds_out_instr__V_212_212 == (MR_Integer) 0))
#line 1425 "llds_out_instr.m"
                            if ((ll_backend__llds_out__llds_out_instr__ProfileCalls_11 == (MR_Integer) 0))
#line 1426 "llds_out_instr.m"
                              {
#line 1427 "llds_out_instr.m"
                                {
#line 1427 "llds_out_instr.m"
                                  mercury__io__write_string_3_p_0((MR_String) "MR_np_localtailcall(");
                                }
#line 1428 "llds_out_instr.m"
                                {
#line 1428 "llds_out_instr.m"
                                  ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_10);
                                }
#line 1429 "llds_out_instr.m"
                                {
#line 1429 "llds_out_instr.m"
                                  mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1429 "llds_out_instr.m"
                                  return;
                                }
#line 1426 "llds_out_instr.m"
                              }
#line 1425 "llds_out_instr.m"
                            else
#line 1419 "llds_out_instr.m"
                              {
#line 1420 "llds_out_instr.m"
                                {
#line 1420 "llds_out_instr.m"
                                  mercury__io__write_string_3_p_0((MR_String) "MR_localtailcall(");
                                }
#line 1421 "llds_out_instr.m"
                                {
#line 1421 "llds_out_instr.m"
                                  ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(ll_backend__llds_out__llds_out_instr__Label_10);
                                }
#line 1422 "llds_out_instr.m"
                                {
#line 1422 "llds_out_instr.m"
                                  mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                                }
#line 1423 "llds_out_instr.m"
                                {
#line 1423 "llds_out_instr.m"
                                  ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_8);
                                }
#line 1424 "llds_out_instr.m"
                                {
#line 1424 "llds_out_instr.m"
                                  mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1424 "llds_out_instr.m"
                                  return;
                                }
#line 1419 "llds_out_instr.m"
                              }
#line 1401 "llds_out_instr.m"
                          else
#line 1401 "llds_out_instr.m"
                            if ((ll_backend__llds_out__llds_out_instr__V_212_212 == (MR_Integer) 2))
#line 1395 "llds_out_instr.m"
                              if ((ll_backend__llds_out__llds_out_instr__ProfileCalls_11 == (MR_Integer) 0))
#line 1396 "llds_out_instr.m"
                                {
#line 1397 "llds_out_instr.m"
                                  {
#line 1397 "llds_out_instr.m"
                                    mercury__io__write_string_3_p_0((MR_String) "MR_np_tailcall_ent(");
                                  }
#line 1398 "llds_out_instr.m"
                                  {
#line 1398 "llds_out_instr.m"
                                    ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_10);
                                  }
#line 1399 "llds_out_instr.m"
                                  {
#line 1399 "llds_out_instr.m"
                                    mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1399 "llds_out_instr.m"
                                    return;
                                  }
#line 1396 "llds_out_instr.m"
                                }
#line 1395 "llds_out_instr.m"
                              else
#line 1389 "llds_out_instr.m"
                                {
#line 1390 "llds_out_instr.m"
                                  {
#line 1390 "llds_out_instr.m"
                                    mercury__io__write_string_3_p_0((MR_String) "MR_tailcall(");
                                  }
#line 1391 "llds_out_instr.m"
                                  {
#line 1391 "llds_out_instr.m"
                                    ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__Label_10);
                                  }
#line 1392 "llds_out_instr.m"
                                  {
#line 1392 "llds_out_instr.m"
                                    mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                                  }
#line 1393 "llds_out_instr.m"
                                  {
#line 1393 "llds_out_instr.m"
                                    ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_8);
                                  }
#line 1394 "llds_out_instr.m"
                                  {
#line 1394 "llds_out_instr.m"
                                    mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1394 "llds_out_instr.m"
                                    return;
                                  }
#line 1389 "llds_out_instr.m"
                                }
#line 1401 "llds_out_instr.m"
                            else
#line 1410 "llds_out_instr.m"
                              if ((ll_backend__llds_out__llds_out_instr__ProfileCalls_11 == (MR_Integer) 0))
#line 1411 "llds_out_instr.m"
                                {
#line 1412 "llds_out_instr.m"
                                  {
#line 1412 "llds_out_instr.m"
                                    mercury__io__write_string_3_p_0((MR_String) "MR_np_tailcall_ent(");
                                  }
#line 1413 "llds_out_instr.m"
                                  {
#line 1413 "llds_out_instr.m"
                                    ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_10);
                                  }
#line 1414 "llds_out_instr.m"
                                  {
#line 1414 "llds_out_instr.m"
                                    mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1414 "llds_out_instr.m"
                                    return;
                                  }
#line 1411 "llds_out_instr.m"
                                }
#line 1410 "llds_out_instr.m"
                              else
#line 1404 "llds_out_instr.m"
                                {
#line 1405 "llds_out_instr.m"
                                  {
#line 1405 "llds_out_instr.m"
                                    mercury__io__write_string_3_p_0((MR_String) "MR_tailcall(");
                                  }
#line 1406 "llds_out_instr.m"
                                  {
#line 1406 "llds_out_instr.m"
                                    ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__Label_10);
                                  }
#line 1407 "llds_out_instr.m"
                                  {
#line 1407 "llds_out_instr.m"
                                    mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                                  }
#line 1408 "llds_out_instr.m"
                                  {
#line 1408 "llds_out_instr.m"
                                    ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_8);
                                  }
#line 1409 "llds_out_instr.m"
                                  {
#line 1409 "llds_out_instr.m"
                                    mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1409 "llds_out_instr.m"
                                    return;
                                  }
#line 1404 "llds_out_instr.m"
                                }
#line 1401 "llds_out_instr.m"
                        }
#line 1401 "llds_out_instr.m"
                      else
#line 1432 "llds_out_instr.m"
                        {
#line 1433 "llds_out_instr.m"
                          {
#line 1433 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) "MR_GOTO_LAB(");
                          }
#line 1434 "llds_out_instr.m"
                          {
#line 1434 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_10);
                          }
#line 1435 "llds_out_instr.m"
                          {
#line 1435 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1435 "llds_out_instr.m"
                            return;
                          }
#line 1432 "llds_out_instr.m"
                        }
#line 1381 "llds_out_instr.m"
                    }
#line 1381 "llds_out_instr.m"
                  else
#line 1381 "llds_out_instr.m"
                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Target_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Target_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1503 "llds_out_instr.m"
                      {
#line 1503 "llds_out_instr.m"
                        MR_String ll_backend__llds_out__llds_out_instr__V_35_35;
#line 1503 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__Variant_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Target_7, (MR_Integer) 1)));

#line 1505 "llds_out_instr.m"
                        {
#line 1505 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "MR_set_prof_ho_caller_proc(");
                        }
#line 1506 "llds_out_instr.m"
                        {
#line 1506 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_8);
                        }
#line 1507 "llds_out_instr.m"
                        {
#line 1507 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) ");\n\t");
                        }
#line 1508 "llds_out_instr.m"
                        {
#line 1508 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "MR_np_tailcall_ent(do_call_class_method_");
                        }
#line 1509 "llds_out_instr.m"
                        {
#line 1509 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_instr__V_35_35 = ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_f_0(ll_backend__llds_out__llds_out_instr__Variant_130);
                        }
#line 1509 "llds_out_instr.m"
                        {
#line 1509 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__V_35_35);
                        }
#line 1510 "llds_out_instr.m"
                        {
#line 1510 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1510 "llds_out_instr.m"
                          return;
                        }
#line 1503 "llds_out_instr.m"
                      }
#line 1381 "llds_out_instr.m"
                    else
#line 1381 "llds_out_instr.m"
                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Target_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Target_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1494 "llds_out_instr.m"
                        {
#line 1494 "llds_out_instr.m"
                          MR_Word ll_backend__llds_out__llds_out_instr__Variant_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Target_7, (MR_Integer) 1)));
#line 1494 "llds_out_instr.m"
                          MR_String ll_backend__llds_out__llds_out_instr__V_46_46;

#line 1496 "llds_out_instr.m"
                          {
#line 1496 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) "MR_set_prof_ho_caller_proc(");
                          }
#line 1497 "llds_out_instr.m"
                          {
#line 1497 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_8);
                          }
#line 1498 "llds_out_instr.m"
                          {
#line 1498 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) ");\n\t");
                          }
#line 1499 "llds_out_instr.m"
                          {
#line 1499 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) "MR_np_tailcall_ent(do_call_closure_");
                          }
#line 1500 "llds_out_instr.m"
                          {
#line 1500 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__V_46_46 = ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_f_0(ll_backend__llds_out__llds_out_instr__Variant_20);
                          }
#line 1500 "llds_out_instr.m"
                          {
#line 1500 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__V_46_46);
                          }
#line 1501 "llds_out_instr.m"
                          {
#line 1501 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1501 "llds_out_instr.m"
                            return;
                          }
#line 1494 "llds_out_instr.m"
                        }
#line 1381 "llds_out_instr.m"
                      else
#line 1457 "llds_out_instr.m"
                        {
#line 1457 "llds_out_instr.m"
                          MR_Word ll_backend__llds_out__llds_out_instr__Last_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Target_7, (MR_Integer) 1)));

#line 1461 "llds_out_instr.m"
                          if ((ll_backend__llds_out__llds_out_instr__Last_18 == (MR_Integer) 0))
#line 1459 "llds_out_instr.m"
                            {
#line 1460 "llds_out_instr.m"
                              {
#line 1460 "llds_out_instr.m"
                                mercury__io__write_string_3_p_0((MR_String) "MR_succeed();\n");
#line 1460 "llds_out_instr.m"
                                return;
                              }
#line 1459 "llds_out_instr.m"
                            }
#line 1461 "llds_out_instr.m"
                          else
#line 1462 "llds_out_instr.m"
                            {
#line 1463 "llds_out_instr.m"
                              {
#line 1463 "llds_out_instr.m"
                                mercury__io__write_string_3_p_0((MR_String) "MR_succeed_discard();\n");
#line 1463 "llds_out_instr.m"
                                return;
                              }
#line 1462 "llds_out_instr.m"
                            }
#line 1457 "llds_out_instr.m"
                        }
#line 1381 "llds_out_instr.m"
  }
#line 1376 "llds_out_instr.m"
}

#line 1352 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_p_0(
#line 1352 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
#line 1352 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Label_7,
#line 1352 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__3_3)
#line 1352 "llds_out_instr.m"
{
#line 1356 "llds_out_instr.m"
  {
#line 1356 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 1356 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__3_3, (MR_Integer) 0)));
#line 1356 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__ContLabelSet_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__3_3, (MR_Integer) 1)));
#line 1356 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__ProfileTime_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1359 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
#line 1359 "llds_out_instr.m"
    MR_String ll_backend__llds_out__llds_out_instr__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
#line 1359 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
#line 1359 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
#line 1359 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
#line 1359 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
#line 1359 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1359 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1359 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1359 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1359 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1359 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1359 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1359 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1359 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1359 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1359 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1359 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1359 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1359 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)));

#line 1361 "llds_out_instr.m"
    {
#line 1361 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__llds_out__llds_out_instr__ContLabelSet_9, ((MR_Box) (ll_backend__llds_out__llds_out_instr__Label_7)));
    }
#line 1361 "llds_out_instr.m"
    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1362 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__ProfileTime_11 == (MR_Integer) 1);
#line 1367 "llds_out_instr.m"
    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1364 "llds_out_instr.m"
      {
#line 1364 "llds_out_instr.m"
        {
#line 1364 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "\tMR_update_prof_current_proc(MR_LABEL_AP(");
        }
#line 1365 "llds_out_instr.m"
        {
#line 1365 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_8);
        }
#line 1366 "llds_out_instr.m"
        {
#line 1366 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "));\n");
#line 1366 "llds_out_instr.m"
          return;
        }
#line 1364 "llds_out_instr.m"
      }
#line 1367 "llds_out_instr.m"
    else
#line 1366 "llds_out_instr.m"
      {
#line 1366 "llds_out_instr.m"
      }
#line 1356 "llds_out_instr.m"
  }
#line 1352 "llds_out_instr.m"
}

#line 1331 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_defn_3_p_0(
#line 1331 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1)
#line 1331 "llds_out_instr.m"
{
#line 1333 "llds_out_instr.m"
  {
#line 1333 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1333 "llds_out_instr.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1333 "llds_out_instr.m"
      {
#line 1333 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 1)));
#line 1333 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 0)));

#line 1333 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__V_50_50 == (MR_Integer) 0))
#line 1341 "llds_out_instr.m"
          {
#line 1342 "llds_out_instr.m"
            {
#line 1342 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "MR_def_local(");
            }
#line 1343 "llds_out_instr.m"
            {
#line 1343 "llds_out_instr.m"
              backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__V_49_49);
            }
#line 1344 "llds_out_instr.m"
            {
#line 1344 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) ")\n");
#line 1344 "llds_out_instr.m"
              return;
            }
#line 1341 "llds_out_instr.m"
          }
#line 1333 "llds_out_instr.m"
        else
#line 1333 "llds_out_instr.m"
          if ((ll_backend__llds_out__llds_out_instr__V_50_50 == (MR_Integer) 2))
#line 1333 "llds_out_instr.m"
            {
#line 1333 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_11_11;

#line 1334 "llds_out_instr.m"
              {
#line 1334 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_define_entry(");
              }
#line 1335 "llds_out_instr.m"
              {
#line 1335 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1335 "llds_out_instr.m"
                MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_11_11, 0) = ((MR_Box) ((MR_Integer) 2));
#line 1335 "llds_out_instr.m"
                MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_11_11, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_49_49));
#line 1335 "llds_out_instr.m"
              }
#line 1335 "llds_out_instr.m"
              {
#line 1335 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(ll_backend__llds_out__llds_out_instr__V_11_11);
              }
#line 1336 "llds_out_instr.m"
              {
#line 1336 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1336 "llds_out_instr.m"
                return;
              }
#line 1333 "llds_out_instr.m"
            }
#line 1333 "llds_out_instr.m"
          else
#line 1337 "llds_out_instr.m"
            {
#line 1338 "llds_out_instr.m"
              {
#line 1338 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_def_static(");
              }
#line 1339 "llds_out_instr.m"
              {
#line 1339 "llds_out_instr.m"
                backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__V_49_49);
              }
#line 1340 "llds_out_instr.m"
              {
#line 1340 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) ")\n");
#line 1340 "llds_out_instr.m"
                return;
              }
#line 1337 "llds_out_instr.m"
            }
#line 1333 "llds_out_instr.m"
      }
#line 1333 "llds_out_instr.m"
    else
#line 1345 "llds_out_instr.m"
      {
#line 1345 "llds_out_instr.m"
        MR_Integer ll_backend__llds_out__llds_out_instr__Num_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 0)));
#line 1345 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__ProcLabel_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 1)));

#line 1346 "llds_out_instr.m"
        {
#line 1346 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "MR_def_label(");
        }
#line 1347 "llds_out_instr.m"
        {
#line 1347 "llds_out_instr.m"
          backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__ProcLabel_37);
        }
#line 1348 "llds_out_instr.m"
        {
#line 1348 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) ",");
        }
#line 1349 "llds_out_instr.m"
        {
#line 1349 "llds_out_instr.m"
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Num_36);
        }
#line 1350 "llds_out_instr.m"
        {
#line 1350 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) ")\n");
#line 1350 "llds_out_instr.m"
          return;
        }
#line 1345 "llds_out_instr.m"
      }
#line 1333 "llds_out_instr.m"
  }
#line 1331 "llds_out_instr.m"
}

#line 1278 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_live_value_type_3_p_0(
#line 1278 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1)
#line 1278 "llds_out_instr.m"
{
#line 1280 "llds_out_instr.m"
  {
#line 1280 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1280 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1282 "llds_out_instr.m"
      {
#line 1283 "llds_out_instr.m"
        {
#line 1283 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "type curfr");
#line 1283 "llds_out_instr.m"
          return;
        }
#line 1282 "llds_out_instr.m"
      }
#line 1280 "llds_out_instr.m"
    else
#line 1280 "llds_out_instr.m"
      if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 1290 "llds_out_instr.m"
        {
#line 1291 "llds_out_instr.m"
          {
#line 1291 "llds_out_instr.m"
            mercury__io__write_string_3_p_0((MR_String) "type hp");
#line 1291 "llds_out_instr.m"
            return;
          }
#line 1290 "llds_out_instr.m"
        }
#line 1280 "llds_out_instr.m"
      else
#line 1280 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1284 "llds_out_instr.m"
          {
#line 1285 "llds_out_instr.m"
            {
#line 1285 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "type maxfr");
#line 1285 "llds_out_instr.m"
              return;
            }
#line 1284 "llds_out_instr.m"
          }
#line 1280 "llds_out_instr.m"
        else
#line 1280 "llds_out_instr.m"
          if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1286 "llds_out_instr.m"
            {
#line 1287 "llds_out_instr.m"
              {
#line 1287 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) "type redofr");
#line 1287 "llds_out_instr.m"
                return;
              }
#line 1286 "llds_out_instr.m"
            }
#line 1280 "llds_out_instr.m"
          else
#line 1280 "llds_out_instr.m"
            if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1288 "llds_out_instr.m"
              {
#line 1289 "llds_out_instr.m"
                {
#line 1289 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "type redoip");
#line 1289 "llds_out_instr.m"
                  return;
                }
#line 1288 "llds_out_instr.m"
              }
#line 1280 "llds_out_instr.m"
            else
#line 1280 "llds_out_instr.m"
              if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 1298 "llds_out_instr.m"
                {
#line 1299 "llds_out_instr.m"
                  {
#line 1299 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) "type region commit");
#line 1299 "llds_out_instr.m"
                    return;
                  }
#line 1298 "llds_out_instr.m"
                }
#line 1280 "llds_out_instr.m"
              else
#line 1280 "llds_out_instr.m"
                if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 1296 "llds_out_instr.m"
                  {
#line 1297 "llds_out_instr.m"
                    {
#line 1297 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) "type region disj");
#line 1297 "llds_out_instr.m"
                      return;
                    }
#line 1296 "llds_out_instr.m"
                  }
#line 1280 "llds_out_instr.m"
                else
#line 1280 "llds_out_instr.m"
                  if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 1300 "llds_out_instr.m"
                    {
#line 1301 "llds_out_instr.m"
                      {
#line 1301 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0((MR_String) "type region ite");
#line 1301 "llds_out_instr.m"
                        return;
                      }
#line 1300 "llds_out_instr.m"
                    }
#line 1280 "llds_out_instr.m"
                  else
#line 1280 "llds_out_instr.m"
                    if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1280 "llds_out_instr.m"
                      {
#line 1281 "llds_out_instr.m"
                        {
#line 1281 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "type succip");
#line 1281 "llds_out_instr.m"
                          return;
                        }
#line 1280 "llds_out_instr.m"
                      }
#line 1280 "llds_out_instr.m"
                    else
#line 1280 "llds_out_instr.m"
                      if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 1294 "llds_out_instr.m"
                        {
#line 1295 "llds_out_instr.m"
                          {
#line 1295 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) "type ticket");
#line 1295 "llds_out_instr.m"
                            return;
                          }
#line 1294 "llds_out_instr.m"
                        }
#line 1280 "llds_out_instr.m"
                      else
#line 1280 "llds_out_instr.m"
                        if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 1292 "llds_out_instr.m"
                          {
#line 1293 "llds_out_instr.m"
                            {
#line 1293 "llds_out_instr.m"
                              mercury__io__write_string_3_p_0((MR_String) "type trail_ptr");
#line 1293 "llds_out_instr.m"
                              return;
                            }
#line 1292 "llds_out_instr.m"
                          }
#line 1280 "llds_out_instr.m"
                        else
#line 1280 "llds_out_instr.m"
                          if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 1302 "llds_out_instr.m"
                            {
#line 1303 "llds_out_instr.m"
                              {
#line 1303 "llds_out_instr.m"
                                mercury__io__write_string_3_p_0((MR_String) "unwanted");
#line 1303 "llds_out_instr.m"
                                return;
                              }
#line 1302 "llds_out_instr.m"
                            }
#line 1280 "llds_out_instr.m"
                          else
#line 1304 "llds_out_instr.m"
                            {
#line 1304 "llds_out_instr.m"
                              MR_Word ll_backend__llds_out__llds_out_instr__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 0)));
#line 1304 "llds_out_instr.m"
                              MR_String ll_backend__llds_out__llds_out_instr__Name_65 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 1)));
#line 1304 "llds_out_instr.m"
                              MR_Word ll_backend__llds_out__llds_out_instr__Type_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 2)));
#line 1304 "llds_out_instr.m"
                              MR_Integer ll_backend__llds_out__llds_out_instr__VarInt_69;
#line 1304 "llds_out_instr.m"
                              MR_Word ll_backend__llds_out__llds_out_instr__NewTVarset_70;

#line 1305 "llds_out_instr.m"
                              {
#line 1305 "llds_out_instr.m"
                                mercury__io__write_string_3_p_0((MR_String) "var(");
                              }
#line 1306 "llds_out_instr.m"
                              {
#line 1306 "llds_out_instr.m"
                                mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__llds_out__llds_out_instr__Var_64, &ll_backend__llds_out__llds_out_instr__VarInt_69);
                              }
#line 1307 "llds_out_instr.m"
                              {
#line 1307 "llds_out_instr.m"
                                mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__VarInt_69);
                              }
#line 1308 "llds_out_instr.m"
                              {
#line 1308 "llds_out_instr.m"
                                mercury__io__write_string_3_p_0((MR_String) ", ");
                              }
#line 1309 "llds_out_instr.m"
                              {
#line 1309 "llds_out_instr.m"
                                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__Name_65);
                              }
#line 1310 "llds_out_instr.m"
                              {
#line 1310 "llds_out_instr.m"
                                mercury__io__write_string_3_p_0((MR_String) ", ");
                              }
#line 1312 "llds_out_instr.m"
                              {
#line 1312 "llds_out_instr.m"
                                mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &ll_backend__llds_out__llds_out_instr__NewTVarset_70);
                              }
#line 1313 "llds_out_instr.m"
                              {
#line 1313 "llds_out_instr.m"
                                parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(ll_backend__llds_out__llds_out_instr__NewTVarset_70, (MR_Integer) 0, ll_backend__llds_out__llds_out_instr__Type_66);
                              }
#line 1324 "llds_out_instr.m"
                              {
#line 1324 "llds_out_instr.m"
                                mercury__io__write_string_3_p_0((MR_String) ")");
#line 1324 "llds_out_instr.m"
                                return;
                              }
#line 1304 "llds_out_instr.m"
                            }
#line 1280 "llds_out_instr.m"
  }
#line 1278 "llds_out_instr.m"
}

#line 1249 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_layout_locns_4_p_0(
#line 1249 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1249 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
#line 1249 "llds_out_instr.m"
{
#line 1252 "llds_out_instr.m"
  while (MR_TRUE)
#line 1252 "llds_out_instr.m"
    {
#line 1252 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 1252 "llds_out_instr.m"
      {
#line 1252 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1252 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1252 "llds_out_instr.m"
          {
#line 1252 "llds_out_instr.m"
          }
#line 1252 "llds_out_instr.m"
        else
#line 1253 "llds_out_instr.m"
          {
#line 1253 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Locn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
#line 1253 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Locns_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));

#line 1268 "llds_out_instr.m"
            if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Locn_10)) == (MR_mktag((MR_Integer) 0))))
#line 1268 "llds_out_instr.m"
              {
#line 1268 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__Lval_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Locn_10, (MR_Integer) 0)));

#line 1269 "llds_out_instr.m"
                {
#line 1269 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Lval_26);
                }
#line 1268 "llds_out_instr.m"
              }
#line 1268 "llds_out_instr.m"
            else
#line 1271 "llds_out_instr.m"
              {
#line 1271 "llds_out_instr.m"
                MR_Integer ll_backend__llds_out__llds_out_instr__Offset_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Locn_10, (MR_Integer) 1)));
#line 1271 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__Lval_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Locn_10, (MR_Integer) 0)));

#line 1272 "llds_out_instr.m"
                {
#line 1272 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "offset ");
                }
#line 1273 "llds_out_instr.m"
                {
#line 1273 "llds_out_instr.m"
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Offset_27);
                }
#line 1274 "llds_out_instr.m"
                {
#line 1274 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) " from ");
                }
#line 1275 "llds_out_instr.m"
                {
#line 1275 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Lval_35);
                }
#line 1271 "llds_out_instr.m"
              }
#line 1257 "llds_out_instr.m"
            if ((ll_backend__llds_out__llds_out_instr__Locns_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1256 "llds_out_instr.m"
              {
#line 1256 "llds_out_instr.m"
              }
#line 1257 "llds_out_instr.m"
            else
#line 1258 "llds_out_instr.m"
              {
#line 1259 "llds_out_instr.m"
                {
#line 1259 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) " and ");
                }
#line 1260 "llds_out_instr.m"
                /* direct tailcall eliminated */
#line 1260 "llds_out_instr.m"
                {
#line 1260 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Locns_11;

#line 1260 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 1260 "llds_out_instr.m"
                }
#line 1260 "llds_out_instr.m"
                continue;
#line 1258 "llds_out_instr.m"
              }
#line 1253 "llds_out_instr.m"
          }
#line 1252 "llds_out_instr.m"
      }
#line 1252 "llds_out_instr.m"
      break;
#line 1252 "llds_out_instr.m"
    }
#line 1249 "llds_out_instr.m"
}

#line 1236 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_p_0(
#line 1236 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1236 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
#line 1236 "llds_out_instr.m"
{
#line 1239 "llds_out_instr.m"
  while (MR_TRUE)
#line 1239 "llds_out_instr.m"
    {
#line 1239 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 1239 "llds_out_instr.m"
      {
#line 1239 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1239 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1239 "llds_out_instr.m"
          {
#line 1239 "llds_out_instr.m"
          }
#line 1239 "llds_out_instr.m"
        else
#line 1240 "llds_out_instr.m"
          {
#line 1240 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Var_10;
#line 1240 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__LocnSet_11;
#line 1240 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__VarLocnSets_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
#line 1240 "llds_out_instr.m"
            MR_Integer ll_backend__llds_out__llds_out_instr__VarInt_14;
#line 1240 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Locns_15;
#line 1240 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));

#line 1240 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_18_18, (MR_Integer) 0)));
#line 1240 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__LocnSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_18_18, (MR_Integer) 1)));
#line 1241 "llds_out_instr.m"
            {
#line 1241 "llds_out_instr.m"
              mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, ll_backend__llds_out__llds_out_instr__Var_10, &ll_backend__llds_out__llds_out_instr__VarInt_14);
            }
#line 1242 "llds_out_instr.m"
            {
#line 1242 "llds_out_instr.m"
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__VarInt_14);
            }
#line 1243 "llds_out_instr.m"
            {
#line 1243 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) " - ");
            }
#line 1244 "llds_out_instr.m"
            {
#line 1244 "llds_out_instr.m"
              mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0, ll_backend__llds_out__llds_out_instr__LocnSet_11, &ll_backend__llds_out__llds_out_instr__Locns_15);
            }
#line 1245 "llds_out_instr.m"
            {
#line 1245 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__output_layout_locns_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Locns_15);
            }
#line 1246 "llds_out_instr.m"
            {
#line 1246 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "  ");
            }
#line 1247 "llds_out_instr.m"
            /* direct tailcall eliminated */
#line 1247 "llds_out_instr.m"
            {
#line 1247 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__VarLocnSets_12;

#line 1247 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 1247 "llds_out_instr.m"
            }
#line 1247 "llds_out_instr.m"
            continue;
#line 1240 "llds_out_instr.m"
          }
#line 1239 "llds_out_instr.m"
      }
#line 1239 "llds_out_instr.m"
      break;
#line 1239 "llds_out_instr.m"
    }
#line 1236 "llds_out_instr.m"
}

#line 1220 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_p_0(
#line 1220 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1220 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
#line 1220 "llds_out_instr.m"
{
#line 1223 "llds_out_instr.m"
  while (MR_TRUE)
#line 1223 "llds_out_instr.m"
    {
#line 1223 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 1223 "llds_out_instr.m"
      {
#line 1223 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1223 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1223 "llds_out_instr.m"
          {
#line 1223 "llds_out_instr.m"
          }
#line 1223 "llds_out_instr.m"
        else
#line 1224 "llds_out_instr.m"
          {
#line 1224 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__LiveInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
#line 1224 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__LiveInfos_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
#line 1224 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Locn_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LiveInfo_10, (MR_Integer) 0)));
#line 1224 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__LiveValueType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LiveInfo_10, (MR_Integer) 1)));
#line 1224 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__TypeParams_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LiveInfo_10, (MR_Integer) 2)));
#line 1224 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__TypeParamList_16;

#line 1226 "llds_out_instr.m"
            {
#line 1226 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "*\t");
            }
#line 1268 "llds_out_instr.m"
            if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Locn_13)) == (MR_mktag((MR_Integer) 0))))
#line 1268 "llds_out_instr.m"
              {
#line 1268 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__Lval_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Locn_13, (MR_Integer) 0)));

#line 1269 "llds_out_instr.m"
                {
#line 1269 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Lval_38);
                }
#line 1268 "llds_out_instr.m"
              }
#line 1268 "llds_out_instr.m"
            else
#line 1271 "llds_out_instr.m"
              {
#line 1271 "llds_out_instr.m"
                MR_Integer ll_backend__llds_out__llds_out_instr__Offset_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Locn_13, (MR_Integer) 1)));
#line 1271 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__Lval_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Locn_13, (MR_Integer) 0)));

#line 1272 "llds_out_instr.m"
                {
#line 1272 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "offset ");
                }
#line 1273 "llds_out_instr.m"
                {
#line 1273 "llds_out_instr.m"
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Offset_39);
                }
#line 1274 "llds_out_instr.m"
                {
#line 1274 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) " from ");
                }
#line 1275 "llds_out_instr.m"
                {
#line 1275 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Lval_47);
                }
#line 1271 "llds_out_instr.m"
              }
#line 1228 "llds_out_instr.m"
            {
#line 1228 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 1229 "llds_out_instr.m"
            {
#line 1229 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__output_live_value_type_3_p_0(ll_backend__llds_out__llds_out_instr__LiveValueType_14);
            }
#line 1230 "llds_out_instr.m"
            {
#line 1230 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 1231 "llds_out_instr.m"
            {
#line 1231 "llds_out_instr.m"
              mercury__map__to_assoc_list_2_p_0((MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[1], (MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[2], ll_backend__llds_out__llds_out_instr__TypeParams_15, &ll_backend__llds_out__llds_out_instr__TypeParamList_16);
            }
#line 1232 "llds_out_instr.m"
            {
#line 1232 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__TypeParamList_16);
            }
#line 1233 "llds_out_instr.m"
            {
#line 1233 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 1234 "llds_out_instr.m"
            /* direct tailcall eliminated */
#line 1234 "llds_out_instr.m"
            {
#line 1234 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__LiveInfos_11;

#line 1234 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 1234 "llds_out_instr.m"
            }
#line 1234 "llds_out_instr.m"
            continue;
#line 1224 "llds_out_instr.m"
          }
#line 1223 "llds_out_instr.m"
      }
#line 1223 "llds_out_instr.m"
      break;
#line 1223 "llds_out_instr.m"
    }
#line 1220 "llds_out_instr.m"
}

#line 1205 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_p_0(
#line 1205 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 1205 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__LiveVals_6)
#line 1205 "llds_out_instr.m"
{
#line 1208 "llds_out_instr.m"
  {
#line 1208 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 1208 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__AutoComments_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1209 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 0)));
#line 1209 "llds_out_instr.m"
    MR_String ll_backend__llds_out__llds_out_instr__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 1)));
#line 1209 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 2)));
#line 1209 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 3)));
#line 1209 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 4)));
#line 1209 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 5)));
#line 1209 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1209 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1209 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1209 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1209 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1209 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1209 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1209 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1209 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1209 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1209 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1209 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1209 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1209 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)));

#line 1216 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__AutoComments_8 == (MR_Integer) 0))
#line 1217 "llds_out_instr.m"
      {
#line 1217 "llds_out_instr.m"
      }
#line 1216 "llds_out_instr.m"
    else
#line 1211 "llds_out_instr.m"
      {
#line 1212 "llds_out_instr.m"
        {
#line 1212 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "/*\n");
        }
#line 1213 "llds_out_instr.m"
        {
#line 1213 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "* Garbage collection livevals info\n");
        }
#line 1214 "llds_out_instr.m"
        {
#line 1214 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__LiveVals_6);
        }
#line 1215 "llds_out_instr.m"
        {
#line 1215 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "*/\n");
#line 1215 "llds_out_instr.m"
          return;
        }
#line 1211 "llds_out_instr.m"
      }
#line 1208 "llds_out_instr.m"
  }
#line 1205 "llds_out_instr.m"
}

#line 1068 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_call_6_p_0(
#line 1068 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
#line 1068 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Target_8,
#line 1068 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Continuation_9,
#line 1068 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_10)
#line 1068 "llds_out_instr.m"
{
#line 1071 "llds_out_instr.m"
  {
#line 1071 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 1071 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__ProfileCall_14;
#line 1140 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__Label_15;
#line 1094 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_29_29;

#line 1072 "llds_out_instr.m"
    {
#line 1072 "llds_out_instr.m"
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
#line 1083 "llds_out_instr.m"
    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Target_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Target_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1083 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__succeeded = MR_TRUE;
#line 1083 "llds_out_instr.m"
    else
#line 1083 "llds_out_instr.m"
      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Target_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Target_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1082 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__succeeded = MR_TRUE;
#line 1083 "llds_out_instr.m"
      else
#line 1083 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__succeeded = MR_FALSE;
#line 1090 "llds_out_instr.m"
    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1086 "llds_out_instr.m"
      {
#line 1086 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__ProfileCall_14 = (MR_Integer) 0;
#line 1087 "llds_out_instr.m"
        {
#line 1087 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "MR_set_prof_ho_caller_proc(");
        }
#line 1088 "llds_out_instr.m"
        {
#line 1088 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_10);
        }
#line 1089 "llds_out_instr.m"
        {
#line 1089 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) ");\n\t");
        }
#line 1086 "llds_out_instr.m"
      }
#line 1090 "llds_out_instr.m"
    else
#line 1091 "llds_out_instr.m"
      {
#line 1091 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 0)));
#line 1091 "llds_out_instr.m"
        MR_String ll_backend__llds_out__llds_out_instr__V_112_112 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 1)));
#line 1091 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 2)));
#line 1091 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 3)));
#line 1091 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 4)));
#line 1091 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 5)));
#line 1091 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_117_117 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1091 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_118_118 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1091 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_119_119 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1091 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_120_120 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1091 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_121_121 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1091 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_122_122;
#line 1091 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_123_123;
#line 1091 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_124_124;
#line 1091 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_125_125;
#line 1091 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_126_126;
#line 1091 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_127_127;
#line 1091 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_128_128;
#line 1091 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_129_129;
#line 1091 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_130_130;

#line 1091 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__ProfileCall_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1091 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__V_122_122 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1091 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__V_123_123 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1091 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__V_124_124 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1091 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__V_125_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1091 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__V_126_126 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1091 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__V_127_127 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1091 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__V_128_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1091 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__V_129_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1091 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)));
#line 1091 "llds_out_instr.m"
      }
#line 1094 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Target_8)) == (MR_mktag((MR_Integer) 1)));
#line 1094 "llds_out_instr.m"
    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1094 "llds_out_instr.m"
      {
#line 1094 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__Label_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Target_8, (MR_Integer) 0)));
#line 1096 "llds_out_instr.m"
        {
#line 1096 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_instr__V_29_29 = ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_f_0(ll_backend__llds_out__llds_out_instr__Label_15);
        }
#line 1096 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_29_29 == (MR_Integer) 0);
#line 1094 "llds_out_instr.m"
      }
#line 1140 "llds_out_instr.m"
    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1104 "llds_out_instr.m"
      if ((ll_backend__llds_out__llds_out_instr__ProfileCall_14 == (MR_Integer) 0))
#line 1105 "llds_out_instr.m"
        {
#line 1105 "llds_out_instr.m"
          MR_String ll_backend__llds_out__llds_out_instr__BaseStr_16;
#line 1105 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__NeedsPrefix_17;
#line 1105 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__Wrapper_18;

#line 1106 "llds_out_instr.m"
          {
#line 1106 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_p_0(ll_backend__llds_out__llds_out_instr__Continuation_9, &ll_backend__llds_out__llds_out_instr__BaseStr_16, &ll_backend__llds_out__llds_out_instr__NeedsPrefix_17, &ll_backend__llds_out__llds_out_instr__Wrapper_18);
          }
#line 1116 "llds_out_instr.m"
          if ((ll_backend__llds_out__llds_out_instr__NeedsPrefix_17 == (MR_Integer) 0))
#line 1109 "llds_out_instr.m"
            {
#line 1110 "llds_out_instr.m"
              {
#line 1110 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_noprof_localcall(");
              }
#line 1111 "llds_out_instr.m"
              {
#line 1111 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_15);
              }
#line 1112 "llds_out_instr.m"
              {
#line 1112 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
              }
#line 1113 "llds_out_instr.m"
              {
#line 1113 "llds_out_instr.m"
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__BaseStr_16);
              }
#line 1114 "llds_out_instr.m"
              {
#line 1114 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_p_0(ll_backend__llds_out__llds_out_instr__BaseStr_16, ll_backend__llds_out__llds_out_instr__NeedsPrefix_17, ll_backend__llds_out__llds_out_instr__Wrapper_18);
              }
#line 1109 "llds_out_instr.m"
            }
#line 1116 "llds_out_instr.m"
          else
#line 1116 "llds_out_instr.m"
            if ((ll_backend__llds_out__llds_out_instr__Wrapper_18 == (MR_Integer) 0))
#line 1117 "llds_out_instr.m"
              {
#line 1119 "llds_out_instr.m"
                {
#line 1119 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "MR_np_localcall_ent(");
                }
#line 1120 "llds_out_instr.m"
                {
#line 1120 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_15);
                }
#line 1121 "llds_out_instr.m"
                {
#line 1121 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                }
#line 1122 "llds_out_instr.m"
                {
#line 1122 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__BaseStr_16);
                }
#line 1117 "llds_out_instr.m"
              }
#line 1116 "llds_out_instr.m"
            else
#line 1116 "llds_out_instr.m"
              if ((ll_backend__llds_out__llds_out_instr__Wrapper_18 == (MR_Integer) 1))
#line 1124 "llds_out_instr.m"
                {
#line 1126 "llds_out_instr.m"
                  {
#line 1126 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) "MR_np_localcall_lab(");
                  }
#line 1127 "llds_out_instr.m"
                  {
#line 1127 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_15);
                  }
#line 1128 "llds_out_instr.m"
                  {
#line 1128 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                  }
#line 1129 "llds_out_instr.m"
                  {
#line 1129 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__BaseStr_16);
                  }
#line 1124 "llds_out_instr.m"
                }
#line 1116 "llds_out_instr.m"
              else
#line 1131 "llds_out_instr.m"
                {
#line 1133 "llds_out_instr.m"
                  {
#line 1133 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) "MR_np_localcall(");
                  }
#line 1134 "llds_out_instr.m"
                  {
#line 1134 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_15);
                  }
#line 1135 "llds_out_instr.m"
                  {
#line 1135 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                  }
#line 1136 "llds_out_instr.m"
                  {
#line 1136 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_p_0(ll_backend__llds_out__llds_out_instr__BaseStr_16, ll_backend__llds_out__llds_out_instr__NeedsPrefix_17, ll_backend__llds_out__llds_out_instr__Wrapper_18);
                  }
#line 1131 "llds_out_instr.m"
                }
#line 1105 "llds_out_instr.m"
        }
#line 1104 "llds_out_instr.m"
      else
#line 1099 "llds_out_instr.m"
        {
#line 1100 "llds_out_instr.m"
          {
#line 1100 "llds_out_instr.m"
            mercury__io__write_string_3_p_0((MR_String) "MR_localcall(");
          }
#line 1101 "llds_out_instr.m"
          {
#line 1101 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(ll_backend__llds_out__llds_out_instr__Label_15);
          }
#line 1102 "llds_out_instr.m"
          {
#line 1102 "llds_out_instr.m"
            mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
          }
#line 1103 "llds_out_instr.m"
          {
#line 1103 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__Continuation_9);
          }
#line 1099 "llds_out_instr.m"
        }
#line 1140 "llds_out_instr.m"
    else
#line 1184 "llds_out_instr.m"
      {
#line 1184 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__ContLabel_19;
#line 1141 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_61_61;

#line 1141 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Continuation_9)) == (MR_mktag((MR_Integer) 1)));
#line 1141 "llds_out_instr.m"
        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1141 "llds_out_instr.m"
          {
#line 1141 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__ContLabel_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Continuation_9, (MR_Integer) 0)));
#line 1142 "llds_out_instr.m"
            {
#line 1142 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__V_61_61 = ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_f_0(ll_backend__llds_out__llds_out_instr__ContLabel_19);
            }
#line 1142 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_61_61 == (MR_Integer) 0);
#line 1141 "llds_out_instr.m"
          }
#line 1184 "llds_out_instr.m"
        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1150 "llds_out_instr.m"
          if ((ll_backend__llds_out__llds_out_instr__ProfileCall_14 == (MR_Integer) 0))
#line 1151 "llds_out_instr.m"
            {
#line 1151 "llds_out_instr.m"
              MR_String ll_backend__llds_out__llds_out_instr__BaseStr_102;
#line 1151 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__NeedsPrefix_103;
#line 1151 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__Wrapper_104;

#line 1152 "llds_out_instr.m"
              {
#line 1152 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_p_0(ll_backend__llds_out__llds_out_instr__Target_8, &ll_backend__llds_out__llds_out_instr__BaseStr_102, &ll_backend__llds_out__llds_out_instr__NeedsPrefix_103, &ll_backend__llds_out__llds_out_instr__Wrapper_104);
              }
#line 1160 "llds_out_instr.m"
              if ((ll_backend__llds_out__llds_out_instr__NeedsPrefix_103 == (MR_Integer) 0))
#line 1154 "llds_out_instr.m"
                {
#line 1155 "llds_out_instr.m"
                  {
#line 1155 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) "MR_noprof_call_localret(");
                  }
#line 1156 "llds_out_instr.m"
                  {
#line 1156 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_p_0(ll_backend__llds_out__llds_out_instr__BaseStr_102, ll_backend__llds_out__llds_out_instr__NeedsPrefix_103, ll_backend__llds_out__llds_out_instr__Wrapper_104);
                  }
#line 1158 "llds_out_instr.m"
                  {
#line 1158 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                  }
#line 1159 "llds_out_instr.m"
                  {
#line 1159 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(ll_backend__llds_out__llds_out_instr__ContLabel_19);
                  }
#line 1154 "llds_out_instr.m"
                }
#line 1160 "llds_out_instr.m"
              else
#line 1160 "llds_out_instr.m"
                if ((ll_backend__llds_out__llds_out_instr__Wrapper_104 == (MR_Integer) 0))
#line 1161 "llds_out_instr.m"
                  {
#line 1163 "llds_out_instr.m"
                    {
#line 1163 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) "MR_np_call_localret_ent(");
                    }
#line 1164 "llds_out_instr.m"
                    {
#line 1164 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__BaseStr_102);
                    }
#line 1165 "llds_out_instr.m"
                    {
#line 1165 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                    }
#line 1166 "llds_out_instr.m"
                    {
#line 1166 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__ContLabel_19);
                    }
#line 1161 "llds_out_instr.m"
                  }
#line 1160 "llds_out_instr.m"
                else
#line 1160 "llds_out_instr.m"
                  if ((ll_backend__llds_out__llds_out_instr__Wrapper_104 == (MR_Integer) 1))
#line 1168 "llds_out_instr.m"
                    {
#line 1173 "llds_out_instr.m"
                      {
#line 1173 "llds_out_instr.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_instr", (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_call\'/6", (MR_String) "calling label");
#line 1173 "llds_out_instr.m"
                        return;
                      }
#line 1168 "llds_out_instr.m"
                    }
#line 1160 "llds_out_instr.m"
                  else
#line 1175 "llds_out_instr.m"
                    {
#line 1177 "llds_out_instr.m"
                      {
#line 1177 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0((MR_String) "MR_np_call_localret(");
                      }
#line 1178 "llds_out_instr.m"
                      {
#line 1178 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_p_0(ll_backend__llds_out__llds_out_instr__BaseStr_102, ll_backend__llds_out__llds_out_instr__NeedsPrefix_103, ll_backend__llds_out__llds_out_instr__Wrapper_104);
                      }
#line 1180 "llds_out_instr.m"
                      {
#line 1180 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                      }
#line 1181 "llds_out_instr.m"
                      {
#line 1181 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__ContLabel_19);
                      }
#line 1175 "llds_out_instr.m"
                    }
#line 1151 "llds_out_instr.m"
            }
#line 1150 "llds_out_instr.m"
          else
#line 1145 "llds_out_instr.m"
            {
#line 1146 "llds_out_instr.m"
              {
#line 1146 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_call_localret(");
              }
#line 1147 "llds_out_instr.m"
              {
#line 1147 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__Target_8);
              }
#line 1148 "llds_out_instr.m"
              {
#line 1148 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
              }
#line 1149 "llds_out_instr.m"
              {
#line 1149 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(ll_backend__llds_out__llds_out_instr__ContLabel_19);
              }
#line 1145 "llds_out_instr.m"
            }
#line 1184 "llds_out_instr.m"
        else
#line 1191 "llds_out_instr.m"
          {
#line 1188 "llds_out_instr.m"
            if ((ll_backend__llds_out__llds_out_instr__ProfileCall_14 == (MR_Integer) 0))
#line 1189 "llds_out_instr.m"
              {
#line 1190 "llds_out_instr.m"
                {
#line 1190 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "MR_noprof_call(");
                }
#line 1189 "llds_out_instr.m"
              }
#line 1188 "llds_out_instr.m"
            else
#line 1186 "llds_out_instr.m"
              {
#line 1187 "llds_out_instr.m"
                {
#line 1187 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "MR_call(");
                }
#line 1186 "llds_out_instr.m"
              }
#line 1192 "llds_out_instr.m"
            {
#line 1192 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__Target_8);
            }
#line 1193 "llds_out_instr.m"
            {
#line 1193 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
            }
#line 1194 "llds_out_instr.m"
            {
#line 1194 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__Continuation_9);
            }
#line 1191 "llds_out_instr.m"
          }
#line 1184 "llds_out_instr.m"
      }
#line 1200 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__ProfileCall_14 == (MR_Integer) 0))
#line 1201 "llds_out_instr.m"
      {
#line 1201 "llds_out_instr.m"
      }
#line 1200 "llds_out_instr.m"
    else
#line 1197 "llds_out_instr.m"
      {
#line 1198 "llds_out_instr.m"
        {
#line 1198 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
        }
#line 1199 "llds_out_instr.m"
        {
#line 1199 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_10);
        }
#line 1197 "llds_out_instr.m"
      }
#line 1203 "llds_out_instr.m"
    {
#line 1203 "llds_out_instr.m"
      mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1203 "llds_out_instr.m"
      return;
    }
#line 1071 "llds_out_instr.m"
  }
#line 1068 "llds_out_instr.m"
}

#line 1037 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_p_0(
#line 1037 "llds_out_instr.m"
  MR_Integer ll_backend__llds_out__llds_out_instr__Next_6,
#line 1037 "llds_out_instr.m"
  MR_Integer ll_backend__llds_out__llds_out_instr__Max_7,
#line 1037 "llds_out_instr.m"
  MR_String ll_backend__llds_out__llds_out_instr__Type_8)
#line 1037 "llds_out_instr.m"
{
#line 1051 "llds_out_instr.m"
  while (MR_TRUE)
#line 1051 "llds_out_instr.m"
    {
#line 1051 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 1051 "llds_out_instr.m"
      {
#line 1051 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__Next_6 <= ll_backend__llds_out__llds_out_instr__Max_7);

#line 1051 "llds_out_instr.m"
        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1046 "llds_out_instr.m"
          {
#line 1046 "llds_out_instr.m"
            MR_Integer ll_backend__llds_out__llds_out_instr__V_19_19;

#line 1042 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__Next_6 > (MR_Integer) 1);
#line 1044 "llds_out_instr.m"
            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1043 "llds_out_instr.m"
              {
#line 1043 "llds_out_instr.m"
                {
#line 1043 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 1043 "llds_out_instr.m"
              }
#line 1044 "llds_out_instr.m"
            else
#line 1043 "llds_out_instr.m"
              {
#line 1043 "llds_out_instr.m"
              }
#line 1047 "llds_out_instr.m"
            {
#line 1047 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "MR_temp");
            }
#line 1048 "llds_out_instr.m"
            {
#line 1048 "llds_out_instr.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__Type_8);
            }
#line 1049 "llds_out_instr.m"
            {
#line 1049 "llds_out_instr.m"
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Next_6);
            }
#line 1050 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__V_19_19 = (ll_backend__llds_out__llds_out_instr__Next_6 + (MR_Integer) 1);
#line 1050 "llds_out_instr.m"
            /* direct tailcall eliminated */
#line 1050 "llds_out_instr.m"
            {
#line 1050 "llds_out_instr.m"
              MR_Integer ll_backend__llds_out__llds_out_instr__Next__tmp_copy_6 = ll_backend__llds_out__llds_out_instr__V_19_19;

#line 1050 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__Next_6 = ll_backend__llds_out__llds_out_instr__Next__tmp_copy_6;
#line 1050 "llds_out_instr.m"
            }
#line 1050 "llds_out_instr.m"
            continue;
#line 1046 "llds_out_instr.m"
          }
#line 1051 "llds_out_instr.m"
        else
#line 1050 "llds_out_instr.m"
          {
#line 1050 "llds_out_instr.m"
          }
#line 1051 "llds_out_instr.m"
      }
#line 1051 "llds_out_instr.m"
      break;
#line 1051 "llds_out_instr.m"
    }
#line 1037 "llds_out_instr.m"
}

#line 1027 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_block_end_2_p_0(void)
#line 1027 "llds_out_instr.m"
{
#line 1029 "llds_out_instr.m"
  {
#line 1029 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1030 "llds_out_instr.m"
    {
#line 1030 "llds_out_instr.m"
      mercury__io__write_string_3_p_0((MR_String) "\t}\n");
#line 1030 "llds_out_instr.m"
      return;
    }
#line 1029 "llds_out_instr.m"
  }
#line 1027 "llds_out_instr.m"
}

#line 1008 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_block_start_4_p_0(
#line 1008 "llds_out_instr.m"
  MR_Integer ll_backend__llds_out__llds_out_instr__TempR_5,
#line 1008 "llds_out_instr.m"
  MR_Integer ll_backend__llds_out__llds_out_instr__TempF_6)
#line 1008 "llds_out_instr.m"
{
#line 1010 "llds_out_instr.m"
  {
#line 1010 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1011 "llds_out_instr.m"
    {
#line 1011 "llds_out_instr.m"
      mercury__io__write_string_3_p_0((MR_String) "\t{\n");
    }
#line 1012 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__TempR_5 > (MR_Integer) 0);
#line 1016 "llds_out_instr.m"
    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1013 "llds_out_instr.m"
      {
#line 1013 "llds_out_instr.m"
        {
#line 1013 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "\tMR_Word ");
        }
#line 1035 "llds_out_instr.m"
        {
#line 1035 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_p_0((MR_Integer) 1, ll_backend__llds_out__llds_out_instr__TempR_5, (MR_String) "r");
        }
#line 1015 "llds_out_instr.m"
        {
#line 1015 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) ";\n");
        }
#line 1013 "llds_out_instr.m"
      }
#line 1016 "llds_out_instr.m"
    else
#line 1015 "llds_out_instr.m"
      {
#line 1015 "llds_out_instr.m"
      }
#line 1019 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__TempF_6 > (MR_Integer) 0);
#line 1023 "llds_out_instr.m"
    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1020 "llds_out_instr.m"
      {
#line 1020 "llds_out_instr.m"
        {
#line 1020 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "\tMR_Float ");
        }
#line 1035 "llds_out_instr.m"
        {
#line 1035 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_p_0((MR_Integer) 1, ll_backend__llds_out__llds_out_instr__TempF_6, (MR_String) "f");
        }
#line 1022 "llds_out_instr.m"
        {
#line 1022 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) ";\n");
#line 1022 "llds_out_instr.m"
          return;
        }
#line 1020 "llds_out_instr.m"
      }
#line 1023 "llds_out_instr.m"
    else
#line 1022 "llds_out_instr.m"
      {
#line 1022 "llds_out_instr.m"
      }
#line 1010 "llds_out_instr.m"
  }
#line 1008 "llds_out_instr.m"
}

#line 993 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_livevals_4_p_0(
#line 993 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 993 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
#line 993 "llds_out_instr.m"
{
#line 996 "llds_out_instr.m"
  while (MR_TRUE)
#line 996 "llds_out_instr.m"
    {
#line 996 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 996 "llds_out_instr.m"
      {
#line 996 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 996 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 996 "llds_out_instr.m"
          {
#line 996 "llds_out_instr.m"
          }
#line 996 "llds_out_instr.m"
        else
#line 997 "llds_out_instr.m"
          {
#line 997 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Lval_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
#line 997 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Lvals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));

#line 998 "llds_out_instr.m"
            {
#line 998 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "*\t");
            }
#line 999 "llds_out_instr.m"
            {
#line 999 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Lval_10);
            }
#line 1000 "llds_out_instr.m"
            {
#line 1000 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 1001 "llds_out_instr.m"
            /* direct tailcall eliminated */
#line 1001 "llds_out_instr.m"
            {
#line 1001 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Lvals_11;

#line 1001 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 1001 "llds_out_instr.m"
            }
#line 1001 "llds_out_instr.m"
            continue;
#line 997 "llds_out_instr.m"
          }
#line 996 "llds_out_instr.m"
      }
#line 996 "llds_out_instr.m"
      break;
#line 996 "llds_out_instr.m"
    }
#line 993 "llds_out_instr.m"
}

#line 969 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_comment_chars_4_p_0(
#line 969 "llds_out_instr.m"
  MR_Char ll_backend__llds_out__llds_out_instr__HeadVar__1_1,
#line 969 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
#line 969 "llds_out_instr.m"
{
#line 971 "llds_out_instr.m"
  while (MR_TRUE)
#line 971 "llds_out_instr.m"
    {
#line 971 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 971 "llds_out_instr.m"
      {
#line 971 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 971 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 971 "llds_out_instr.m"
          {
#line 971 "llds_out_instr.m"
          }
#line 971 "llds_out_instr.m"
        else
#line 972 "llds_out_instr.m"
          {
#line 972 "llds_out_instr.m"
            MR_Char ll_backend__llds_out__llds_out_instr__Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
#line 972 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Chars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));

#line 974 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == (MR_Char) 47);
#line 974 "llds_out_instr.m"
            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 975 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__Char_10 == (MR_Char) 42);
#line 978 "llds_out_instr.m"
            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 977 "llds_out_instr.m"
              {
#line 977 "llds_out_instr.m"
                {
#line 977 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) " *");
                }
#line 977 "llds_out_instr.m"
              }
#line 978 "llds_out_instr.m"
            else
#line 983 "llds_out_instr.m"
              {
#line 979 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == (MR_Char) 42);
#line 979 "llds_out_instr.m"
                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 980 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__Char_10 == (MR_Char) 47);
#line 983 "llds_out_instr.m"
                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 982 "llds_out_instr.m"
                  {
#line 982 "llds_out_instr.m"
                    {
#line 982 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) " /");
                    }
#line 982 "llds_out_instr.m"
                  }
#line 983 "llds_out_instr.m"
                else
#line 984 "llds_out_instr.m"
                  {
#line 984 "llds_out_instr.m"
                    mercury__io__write_char_3_p_0(ll_backend__llds_out__llds_out_instr__Char_10);
                  }
#line 983 "llds_out_instr.m"
              }
#line 986 "llds_out_instr.m"
            /* direct tailcall eliminated */
#line 986 "llds_out_instr.m"
            {
#line 986 "llds_out_instr.m"
              MR_Char ll_backend__llds_out__llds_out_instr__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_instr__Char_10;
#line 986 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Chars_11;

#line 986 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 986 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__HeadVar__1_1 = ll_backend__llds_out__llds_out_instr__HeadVar__1__tmp_copy_1;
#line 986 "llds_out_instr.m"
            }
#line 986 "llds_out_instr.m"
            continue;
#line 972 "llds_out_instr.m"
          }
#line 971 "llds_out_instr.m"
      }
#line 971 "llds_out_instr.m"
      break;
#line 971 "llds_out_instr.m"
    }
#line 969 "llds_out_instr.m"
}

#line 849 "llds_out_instr.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_3(
#line 849 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg)
#line 849 "llds_out_instr.m"
{
#line 849 "llds_out_instr.m"
  {
#line 849 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 849 "llds_out_instr.m"
    MR_Box ll_backend__llds_out__llds_out_instr__closure = ll_backend__llds_out__llds_out_instr__closure_arg;

#line 849 "llds_out_instr.m"
    {
#line 849 "llds_out_instr.m"
      return ll_backend__llds_out__llds_out_instr__succeeded = mercury__int__even_1_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 3))));
    }
#line 849 "llds_out_instr.m"
    return ll_backend__llds_out__llds_out_instr__succeeded;
#line 849 "llds_out_instr.m"
  }
#line 849 "llds_out_instr.m"
}

#line 900 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_2(
#line 900 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg,
#line 900 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 900 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
#line 900 "llds_out_instr.m"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_3)
#line 900 "llds_out_instr.m"
{
#line 900 "llds_out_instr.m"
  {
#line 900 "llds_out_instr.m"
    MR_Box ll_backend__llds_out__llds_out_instr__closure = ll_backend__llds_out__llds_out_instr__closure_arg;

#line 900 "llds_out_instr.m"
    {
#line 900 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_1));
#line 900 "llds_out_instr.m"
      return;
    }
#line 900 "llds_out_instr.m"
  }
#line 900 "llds_out_instr.m"
}

#line 890 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_1(
#line 890 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg,
#line 890 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 890 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
#line 890 "llds_out_instr.m"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_3)
#line 890 "llds_out_instr.m"
{
#line 890 "llds_out_instr.m"
  {
#line 890 "llds_out_instr.m"
    MR_Box ll_backend__llds_out__llds_out_instr__closure = ll_backend__llds_out__llds_out_instr__closure_arg;

#line 890 "llds_out_instr.m"
    {
#line 890 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_1));
#line 890 "llds_out_instr.m"
      return;
    }
#line 890 "llds_out_instr.m"
  }
#line 890 "llds_out_instr.m"
}

#line 500 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(
#line 500 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
#line 500 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_7,
#line 500 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__ProfInfo_8)
#line 500 "llds_out_instr.m"
{
#line 505 "llds_out_instr.m"
  {
#line 505 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 505 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__Instr_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 829 "llds_out_instr.m"
      {
#line 830 "llds_out_instr.m"
        {
#line 830 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "\tMR_discard_ticket();\n");
#line 830 "llds_out_instr.m"
          return;
        }
#line 829 "llds_out_instr.m"
      }
#line 505 "llds_out_instr.m"
    else
#line 505 "llds_out_instr.m"
      if ((ll_backend__llds_out__llds_out_instr__Instr_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 832 "llds_out_instr.m"
        {
#line 833 "llds_out_instr.m"
          {
#line 833 "llds_out_instr.m"
            mercury__io__write_string_3_p_0((MR_String) "\tMR_prune_ticket();\n");
#line 833 "llds_out_instr.m"
            return;
          }
#line 832 "llds_out_instr.m"
        }
#line 505 "llds_out_instr.m"
      else
#line 505 "llds_out_instr.m"
        if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 1))))
#line 505 "llds_out_instr.m"
          {
#line 505 "llds_out_instr.m"
            MR_String ll_backend__llds_out__llds_out_instr__Comment_10 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)));
#line 505 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__CommentChars_11;

#line 511 "llds_out_instr.m"
            {
#line 511 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "/*");
            }
#line 512 "llds_out_instr.m"
            {
#line 512 "llds_out_instr.m"
              mercury__string__to_char_list_2_p_0(ll_backend__llds_out__llds_out_instr__Comment_10, &ll_backend__llds_out__llds_out_instr__CommentChars_11);
            }
#line 513 "llds_out_instr.m"
            {
#line 513 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__output_comment_chars_4_p_0((MR_Char) 42, ll_backend__llds_out__llds_out_instr__CommentChars_11);
            }
#line 514 "llds_out_instr.m"
            {
#line 514 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "*/\n");
#line 514 "llds_out_instr.m"
              return;
            }
#line 505 "llds_out_instr.m"
          }
#line 505 "llds_out_instr.m"
        else
#line 505 "llds_out_instr.m"
          if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 2))))
#line 516 "llds_out_instr.m"
            {
#line 516 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__LiveVals_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)));
#line 516 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__LiveValsList_13;

#line 517 "llds_out_instr.m"
              {
#line 517 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) "/*\n* Live lvalues:\n");
              }
#line 518 "llds_out_instr.m"
              {
#line 518 "llds_out_instr.m"
                mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__llds_out__llds_out_instr__LiveVals_12, &ll_backend__llds_out__llds_out_instr__LiveValsList_13);
              }
#line 519 "llds_out_instr.m"
              {
#line 519 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__output_livevals_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__LiveValsList_13);
              }
#line 520 "llds_out_instr.m"
              {
#line 520 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) "*/\n");
#line 520 "llds_out_instr.m"
                return;
              }
#line 516 "llds_out_instr.m"
            }
#line 505 "llds_out_instr.m"
          else
#line 505 "llds_out_instr.m"
            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 544 "llds_out_instr.m"
              {
#line 544 "llds_out_instr.m"
                MR_String ll_backend__llds_out__llds_out_instr__C_Code_29 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
#line 544 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 544 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));

#line 545 "llds_out_instr.m"
                {
#line 545 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "\t");
                }
#line 546 "llds_out_instr.m"
                {
#line 546 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__C_Code_29);
#line 546 "llds_out_instr.m"
                  return;
                }
#line 544 "llds_out_instr.m"
              }
#line 505 "llds_out_instr.m"
            else
#line 505 "llds_out_instr.m"
              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 532 "llds_out_instr.m"
                {
#line 532 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__Lval_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 532 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__Rval_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 532 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__Type_19;

#line 533 "llds_out_instr.m"
                  {
#line 533 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) "\t");
                  }
#line 534 "llds_out_instr.m"
                  {
#line 534 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_data__output_lval_for_assign_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_17, &ll_backend__llds_out__llds_out_instr__Type_19);
                  }
#line 535 "llds_out_instr.m"
                  {
#line 535 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) " = ");
                  }
#line 536 "llds_out_instr.m"
                  {
#line 536 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_18, ll_backend__llds_out__llds_out_instr__Type_19);
                  }
#line 537 "llds_out_instr.m"
                  {
#line 537 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) ";\n");
#line 537 "llds_out_instr.m"
                    return;
                  }
#line 532 "llds_out_instr.m"
                }
#line 505 "llds_out_instr.m"
              else
#line 505 "llds_out_instr.m"
                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 522 "llds_out_instr.m"
                  {
#line 522 "llds_out_instr.m"
                    MR_Integer ll_backend__llds_out__llds_out_instr__TempR_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 522 "llds_out_instr.m"
                    MR_Integer ll_backend__llds_out__llds_out_instr__TempF_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 522 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__Instrs_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
#line 522 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_462_462;

#line 523 "llds_out_instr.m"
                    {
#line 523 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__output_block_start_4_p_0(ll_backend__llds_out__llds_out_instr__TempR_14, ll_backend__llds_out__llds_out_instr__TempF_15);
                    }
#line 524 "llds_out_instr.m"
                    {
#line 524 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__V_462_462 = mercury__set_tree234__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0);
                    }
#line 524 "llds_out_instr.m"
                    {
#line 524 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__output_instruction_list_7_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Instrs_16, ll_backend__llds_out__llds_out_instr__ProfInfo_8, ll_backend__llds_out__llds_out_instr__V_462_462, (MR_Integer) 0);
                    }
#line 526 "llds_out_instr.m"
                    {
#line 526 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__output_block_end_2_p_0();
#line 526 "llds_out_instr.m"
                      return;
                    }
#line 522 "llds_out_instr.m"
                  }
#line 505 "llds_out_instr.m"
                else
#line 505 "llds_out_instr.m"
                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 611 "llds_out_instr.m"
                    {
#line 611 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__MaybeLabels_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 611 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__Rval_487 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 612 "llds_out_instr.m"
                      {
#line 612 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0((MR_String) "\tMR_COMPUTED_GOTO(");
                      }
#line 613 "llds_out_instr.m"
                      {
#line 613 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_487, (MR_Integer) 8);
                      }
#line 614 "llds_out_instr.m"
                      {
#line 614 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                      }
#line 615 "llds_out_instr.m"
                      {
#line 615 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_p_0(ll_backend__llds_out__llds_out_instr__MaybeLabels_40);
                      }
#line 616 "llds_out_instr.m"
                      {
#line 616 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 616 "llds_out_instr.m"
                        return;
                      }
#line 611 "llds_out_instr.m"
                    }
#line 505 "llds_out_instr.m"
                  else
#line 505 "llds_out_instr.m"
                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 25))))
#line 874 "llds_out_instr.m"
                      {
#line 874 "llds_out_instr.m"
                        MR_Integer ll_backend__llds_out__llds_out_instr__N_509 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 875 "llds_out_instr.m"
                        {
#line 875 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "\tMR_decr_sp(");
                        }
#line 876 "llds_out_instr.m"
                        {
#line 876 "llds_out_instr.m"
                          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__N_509);
                        }
#line 877 "llds_out_instr.m"
                        {
#line 877 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 877 "llds_out_instr.m"
                          return;
                        }
#line 874 "llds_out_instr.m"
                      }
#line 505 "llds_out_instr.m"
                    else
#line 505 "llds_out_instr.m"
                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 879 "llds_out_instr.m"
                        {
#line 879 "llds_out_instr.m"
                          MR_Integer ll_backend__llds_out__llds_out_instr__N_510 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 880 "llds_out_instr.m"
                          {
#line 880 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) "\tMR_decr_sp_and_return(");
                          }
#line 881 "llds_out_instr.m"
                          {
#line 881 "llds_out_instr.m"
                            mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__N_510);
                          }
#line 882 "llds_out_instr.m"
                          {
#line 882 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 882 "llds_out_instr.m"
                            return;
                          }
#line 879 "llds_out_instr.m"
                        }
#line 505 "llds_out_instr.m"
                      else
#line 505 "llds_out_instr.m"
                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 885 "llds_out_instr.m"
                          {
#line 885 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__Decls_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 885 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__Components_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 885 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__MaybeDefLabel_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 8)));
#line 884 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
#line 884 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 4)));
#line 884 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 5)));
#line 884 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 6)));
#line 884 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 7)));
#line 884 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 9)));
#line 884 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 10)));

#line 886 "llds_out_instr.m"
                            {
#line 886 "llds_out_instr.m"
                              mercury__io__write_string_3_p_0((MR_String) "\t{\n");
                            }
#line 887 "llds_out_instr.m"
                            {
#line 887 "llds_out_instr.m"
                              ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_p_0(ll_backend__llds_out__llds_out_instr__Decls_69);
                            }
#line 891 "llds_out_instr.m"
                            if ((ll_backend__llds_out__llds_out_instr__MaybeDefLabel_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 889 "llds_out_instr.m"
                              {
#line 889 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_171_171;
#line 890 "llds_out_instr.m"
                                MR_Box ll_backend__llds_out__llds_out_instr__conv0_STATE_VARIABLE_IO_172_172;

#line 890 "llds_out_instr.m"
                                {
#line 890 "llds_out_instr.m"
                                  ll_backend__llds_out__llds_out_instr__V_171_171 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 890 "llds_out_instr.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_171_171, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_5[0]));
#line 890 "llds_out_instr.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_171_171, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_1));
#line 890 "llds_out_instr.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_171_171, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 890 "llds_out_instr.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_171_171, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__Info_6));
#line 890 "llds_out_instr.m"
                                }
#line 890 "llds_out_instr.m"
                                {
#line 890 "llds_out_instr.m"
                                  mercury__list__foldl_4_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_instr__V_171_171, ll_backend__llds_out__llds_out_instr__Components_70, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_instr__conv0_STATE_VARIABLE_IO_172_172);
                                }
#line 889 "llds_out_instr.m"
                              }
#line 891 "llds_out_instr.m"
                            else
#line 892 "llds_out_instr.m"
                              {
#line 892 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__DefLabel_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeDefLabel_76, (MR_Integer) 0)));
#line 892 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__InternalLabelToLayoutMap_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
#line 892 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__DefLabelLayout_81;
#line 892 "llds_out_instr.m"
                                MR_String ll_backend__llds_out__llds_out_instr__MangledModuleName_82;
#line 892 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_167_167;
#line 893 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_559_559 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
#line 893 "llds_out_instr.m"
                                MR_String ll_backend__llds_out__llds_out_instr__V_560_560 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
#line 893 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_561_561 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
#line 893 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_562_562 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
#line 893 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_563_563 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
#line 893 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_564_564 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 893 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_565_565 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 893 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_566_566 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 893 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_567_567 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 893 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_568_568 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 893 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_569_569 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 893 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_570_570 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 893 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_571_571 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 893 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_572_572 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 893 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_573_573 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 893 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_574_574 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 893 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_575_575 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 893 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_576_576 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 893 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_577_577 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 893 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_578_578 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)));
#line 894 "llds_out_instr.m"
                                MR_Box ll_backend__llds_out__llds_out_instr__conv1_DefLabelLayout_81;
#line 896 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_579_579;
#line 896 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_580_580;
#line 896 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_581_581;
#line 896 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_582_582;
#line 896 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_583_583;
#line 896 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_584_584;
#line 896 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_585_585;
#line 896 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_586_586;
#line 896 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_587_587;
#line 896 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_588_588;
#line 896 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_589_589;
#line 896 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_590_590;
#line 896 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_591_591;
#line 896 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_592_592;
#line 896 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_593_593;
#line 896 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_594_594;
#line 896 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_595_595;
#line 896 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_596_596;
#line 896 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_597_597;
#line 896 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_598_598;
#line 900 "llds_out_instr.m"
                                MR_Box ll_backend__llds_out__llds_out_instr__conv2_STATE_VARIABLE_IO_168_168;

#line 894 "llds_out_instr.m"
                                {
#line 894 "llds_out_instr.m"
                                  mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__llds_out__llds_out_instr__InternalLabelToLayoutMap_80, ((MR_Box) (ll_backend__llds_out__llds_out_instr__DefLabel_79)), &ll_backend__llds_out__llds_out_instr__conv1_DefLabelLayout_81);
                                }
#line 894 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__DefLabelLayout_81 = ((MR_Word) ll_backend__llds_out__llds_out_instr__conv1_DefLabelLayout_81);
#line 895 "llds_out_instr.m"
                                {
#line 895 "llds_out_instr.m"
                                  mercury__io__write_string_3_p_0((MR_String) "#define MR_HASH_DEF_LABEL_LAYOUT ");
                                }
#line 896 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_579_579 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
#line 896 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__MangledModuleName_82 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
#line 896 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_580_580 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
#line 896 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_581_581 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
#line 896 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_582_582 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
#line 896 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_583_583 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
#line 896 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_584_584 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 896 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_585_585 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 896 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_586_586 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 896 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_587_587 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 896 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_588_588 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 896 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_589_589 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 896 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_590_590 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 896 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_591_591 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 896 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_592_592 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 896 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_593_593 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 896 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_594_594 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 896 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_595_595 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 896 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_596_596 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 896 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_597_597 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 896 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_598_598 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)));
#line 897 "llds_out_instr.m"
                                {
#line 897 "llds_out_instr.m"
                                  ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__llds_out__llds_out_instr__MangledModuleName_82, ll_backend__llds_out__llds_out_instr__DefLabelLayout_81);
                                }
#line 899 "llds_out_instr.m"
                                {
#line 899 "llds_out_instr.m"
                                  mercury__io__nl_2_p_0();
                                }
#line 900 "llds_out_instr.m"
                                {
#line 900 "llds_out_instr.m"
                                  ll_backend__llds_out__llds_out_instr__V_167_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 900 "llds_out_instr.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_167_167, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_5[0]));
#line 900 "llds_out_instr.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_167_167, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_2));
#line 900 "llds_out_instr.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_167_167, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 900 "llds_out_instr.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_167_167, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__Info_6));
#line 900 "llds_out_instr.m"
                                }
#line 900 "llds_out_instr.m"
                                {
#line 900 "llds_out_instr.m"
                                  mercury__list__foldl_4_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_instr__V_167_167, ll_backend__llds_out__llds_out_instr__Components_70, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_instr__conv2_STATE_VARIABLE_IO_168_168);
                                }
#line 901 "llds_out_instr.m"
                                {
#line 901 "llds_out_instr.m"
                                  mercury__io__write_string_3_p_0((MR_String) "#undef MR_HASH_DEF_LABEL_LAYOUT\n");
                                }
#line 892 "llds_out_instr.m"
                              }
#line 903 "llds_out_instr.m"
                            {
#line 903 "llds_out_instr.m"
                              mercury__io__write_string_3_p_0((MR_String) "\t}\n");
#line 903 "llds_out_instr.m"
                              return;
                            }
#line 885 "llds_out_instr.m"
                          }
#line 505 "llds_out_instr.m"
                        else
#line 505 "llds_out_instr.m"
                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 914 "llds_out_instr.m"
                            {
#line 914 "llds_out_instr.m"
                              MR_Word ll_backend__llds_out__llds_out_instr__Child_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 914 "llds_out_instr.m"
                              MR_Word ll_backend__llds_out__llds_out_instr__Lval_512 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 915 "llds_out_instr.m"
                              {
#line 915 "llds_out_instr.m"
                                mercury__io__write_string_3_p_0((MR_String) "\tMR_fork_new_child(");
                              }
#line 916 "llds_out_instr.m"
                              {
#line 916 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_512);
                              }
#line 917 "llds_out_instr.m"
                              {
#line 917 "llds_out_instr.m"
                                mercury__io__write_string_3_p_0((MR_String) ", ");
                              }
#line 918 "llds_out_instr.m"
                              {
#line 918 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__Child_85);
                              }
#line 919 "llds_out_instr.m"
                              {
#line 919 "llds_out_instr.m"
                                mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 919 "llds_out_instr.m"
                                return;
                              }
#line 914 "llds_out_instr.m"
                            }
#line 505 "llds_out_instr.m"
                          else
#line 505 "llds_out_instr.m"
                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 697 "llds_out_instr.m"
                              {
#line 697 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__Rval_499 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 698 "llds_out_instr.m"
                                {
#line 698 "llds_out_instr.m"
                                  mercury__io__write_string_3_p_0((MR_String) "\tMR_free_heap(");
                                }
#line 699 "llds_out_instr.m"
                                {
#line 699 "llds_out_instr.m"
                                  ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_499, (MR_Integer) 11);
                                }
#line 700 "llds_out_instr.m"
                                {
#line 700 "llds_out_instr.m"
                                  mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 700 "llds_out_instr.m"
                                  return;
                                }
#line 697 "llds_out_instr.m"
                              }
#line 505 "llds_out_instr.m"
                            else
#line 505 "llds_out_instr.m"
                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 606 "llds_out_instr.m"
                                {
#line 606 "llds_out_instr.m"
                                  MR_Word ll_backend__llds_out__llds_out_instr__CodeAddr_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 606 "llds_out_instr.m"
                                  MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_486 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProfInfo_8, (MR_Integer) 0)));
#line 607 "llds_out_instr.m"
                                  MR_Word ll_backend__llds_out__llds_out_instr__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProfInfo_8, (MR_Integer) 1)));

#line 608 "llds_out_instr.m"
                                  {
#line 608 "llds_out_instr.m"
                                    mercury__io__write_string_3_p_0((MR_String) "\t");
                                  }
#line 609 "llds_out_instr.m"
                                  {
#line 609 "llds_out_instr.m"
                                    ll_backend__llds_out__llds_out_instr__output_goto_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__CodeAddr_38, ll_backend__llds_out__llds_out_instr__CallerLabel_486);
#line 609 "llds_out_instr.m"
                                    return;
                                  }
#line 606 "llds_out_instr.m"
                                }
#line 505 "llds_out_instr.m"
                              else
#line 505 "llds_out_instr.m"
                                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 618 "llds_out_instr.m"
                                  {
#line 618 "llds_out_instr.m"
                                    MR_Word ll_backend__llds_out__llds_out_instr__Rval_488 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 618 "llds_out_instr.m"
                                    MR_Word ll_backend__llds_out__llds_out_instr__Target_489 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 618 "llds_out_instr.m"
                                    MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_490 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProfInfo_8, (MR_Integer) 0)));
#line 619 "llds_out_instr.m"
                                    MR_Word ll_backend__llds_out__llds_out_instr__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProfInfo_8, (MR_Integer) 1)));

#line 620 "llds_out_instr.m"
                                    {
#line 620 "llds_out_instr.m"
                                      mercury__io__write_string_3_p_0((MR_String) "\tif (");
                                    }
#line 621 "llds_out_instr.m"
                                    {
#line 621 "llds_out_instr.m"
                                      ll_backend__llds_out__llds_out_data__output_test_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_488);
                                    }
#line 622 "llds_out_instr.m"
                                    {
#line 622 "llds_out_instr.m"
                                      mercury__io__write_string_3_p_0((MR_String) ") {\n\t\t");
                                    }
#line 623 "llds_out_instr.m"
                                    {
#line 623 "llds_out_instr.m"
                                      ll_backend__llds_out__llds_out_instr__output_goto_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Target_489, ll_backend__llds_out__llds_out_instr__CallerLabel_490);
                                    }
#line 624 "llds_out_instr.m"
                                    {
#line 624 "llds_out_instr.m"
                                      mercury__io__write_string_3_p_0((MR_String) "\t}\n");
#line 624 "llds_out_instr.m"
                                      return;
                                    }
#line 618 "llds_out_instr.m"
                                  }
#line 505 "llds_out_instr.m"
                                else
#line 505 "llds_out_instr.m"
                                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 637 "llds_out_instr.m"
                                    {
#line 637 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__MaybeTag_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 637 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__MaybeOffset_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
#line 637 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__SizeRval_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 4)));
#line 637 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__MaybeAllocId_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 5)));
#line 637 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 6)));
#line 637 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__MaybeRegionRval_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 7)));
#line 637 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__MaybeReuse_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 8)));
#line 637 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__Lval_496 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 638 "llds_out_instr.m"
                                      {
#line 638 "llds_out_instr.m"
                                        mercury__io__write_string_3_p_0((MR_String) "\t");
                                      }
#line 644 "llds_out_instr.m"
                                      if ((ll_backend__llds_out__llds_out_instr__MaybeReuse_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 640 "llds_out_instr.m"
                                        {
#line 640 "llds_out_instr.m"
                                          ll_backend__llds_out__llds_out_instr__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_99_114_95_104_112_95_110_111_95_114_101_117_115_101_95_95_91_57_93_95_48_11_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_496, ll_backend__llds_out__llds_out_instr__MaybeTag_42, ll_backend__llds_out__llds_out_instr__MaybeOffset_43, ll_backend__llds_out__llds_out_instr__SizeRval_44, ll_backend__llds_out__llds_out_instr__MaybeAllocId_45, ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_46, ll_backend__llds_out__llds_out_instr__MaybeRegionRval_47);
                                        }
#line 644 "llds_out_instr.m"
                                      else
#line 645 "llds_out_instr.m"
                                        {
#line 645 "llds_out_instr.m"
                                          MR_Word ll_backend__llds_out__llds_out_instr__ReuseRval_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeReuse_48, (MR_Integer) 0)));
#line 645 "llds_out_instr.m"
                                          MR_Word ll_backend__llds_out__llds_out_instr__MaybeFlagLval_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeReuse_48, (MR_Integer) 1)));

#line 659 "llds_out_instr.m"
                                          if ((ll_backend__llds_out__llds_out_instr__MaybeTag_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 647 "llds_out_instr.m"
                                            if ((ll_backend__llds_out__llds_out_instr__MaybeFlagLval_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 655 "llds_out_instr.m"
                                              {
#line 656 "llds_out_instr.m"
                                                {
#line 656 "llds_out_instr.m"
                                                  mercury__io__write_string_3_p_0((MR_String) "MR_reuse_or_alloc_heap(");
                                                }
#line 657 "llds_out_instr.m"
                                                {
#line 657 "llds_out_instr.m"
                                                  ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_496);
                                                }
#line 655 "llds_out_instr.m"
                                              }
#line 647 "llds_out_instr.m"
                                            else
#line 649 "llds_out_instr.m"
                                              {
#line 649 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__FlagLval_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeFlagLval_50, (MR_Integer) 0)));

#line 650 "llds_out_instr.m"
                                                {
#line 650 "llds_out_instr.m"
                                                  mercury__io__write_string_3_p_0((MR_String) "MR_reuse_or_alloc_heap_flag(");
                                                }
#line 651 "llds_out_instr.m"
                                                {
#line 651 "llds_out_instr.m"
                                                  ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_496);
                                                }
#line 652 "llds_out_instr.m"
                                                {
#line 652 "llds_out_instr.m"
                                                  mercury__io__write_string_3_p_0((MR_String) ", ");
                                                }
#line 653 "llds_out_instr.m"
                                                {
#line 653 "llds_out_instr.m"
                                                  ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__FlagLval_51);
                                                }
#line 649 "llds_out_instr.m"
                                              }
#line 659 "llds_out_instr.m"
                                          else
#line 660 "llds_out_instr.m"
                                            {
#line 660 "llds_out_instr.m"
                                              MR_Integer ll_backend__llds_out__llds_out_instr__Tag_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeTag_42, (MR_Integer) 0)));

#line 669 "llds_out_instr.m"
                                              if ((ll_backend__llds_out__llds_out_instr__MaybeFlagLval_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 670 "llds_out_instr.m"
                                                {
#line 671 "llds_out_instr.m"
                                                  {
#line 671 "llds_out_instr.m"
                                                    mercury__io__write_string_3_p_0((MR_String) "MR_tag_reuse_or_alloc_heap(");
                                                  }
#line 672 "llds_out_instr.m"
                                                  {
#line 672 "llds_out_instr.m"
                                                    ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_496);
                                                  }
#line 673 "llds_out_instr.m"
                                                  {
#line 673 "llds_out_instr.m"
                                                    mercury__io__write_string_3_p_0((MR_String) ", ");
                                                  }
#line 674 "llds_out_instr.m"
                                                  {
#line 674 "llds_out_instr.m"
                                                    ll_backend__llds_out__llds_out_data__output_tag_3_p_0(ll_backend__llds_out__llds_out_instr__Tag_52);
                                                  }
#line 670 "llds_out_instr.m"
                                                }
#line 669 "llds_out_instr.m"
                                              else
#line 662 "llds_out_instr.m"
                                                {
#line 662 "llds_out_instr.m"
                                                  MR_Word ll_backend__llds_out__llds_out_instr__FlagLval_493 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeFlagLval_50, (MR_Integer) 0)));

#line 663 "llds_out_instr.m"
                                                  {
#line 663 "llds_out_instr.m"
                                                    mercury__io__write_string_3_p_0((MR_String) "MR_tag_reuse_or_alloc_heap_flag(");
                                                  }
#line 664 "llds_out_instr.m"
                                                  {
#line 664 "llds_out_instr.m"
                                                    ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_496);
                                                  }
#line 665 "llds_out_instr.m"
                                                  {
#line 665 "llds_out_instr.m"
                                                    mercury__io__write_string_3_p_0((MR_String) ", ");
                                                  }
#line 666 "llds_out_instr.m"
                                                  {
#line 666 "llds_out_instr.m"
                                                    ll_backend__llds_out__llds_out_data__output_tag_3_p_0(ll_backend__llds_out__llds_out_instr__Tag_52);
                                                  }
#line 667 "llds_out_instr.m"
                                                  {
#line 667 "llds_out_instr.m"
                                                    mercury__io__write_string_3_p_0((MR_String) ", ");
                                                  }
#line 668 "llds_out_instr.m"
                                                  {
#line 668 "llds_out_instr.m"
                                                    ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__FlagLval_493);
                                                  }
#line 662 "llds_out_instr.m"
                                                }
#line 660 "llds_out_instr.m"
                                            }
#line 677 "llds_out_instr.m"
                                          {
#line 677 "llds_out_instr.m"
                                            mercury__io__write_string_3_p_0((MR_String) ", ");
                                          }
#line 678 "llds_out_instr.m"
                                          {
#line 678 "llds_out_instr.m"
                                            ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__ReuseRval_49);
                                          }
#line 679 "llds_out_instr.m"
                                          {
#line 679 "llds_out_instr.m"
                                            mercury__io__write_string_3_p_0((MR_String) ", ");
                                          }
#line 680 "llds_out_instr.m"
                                          {
#line 680 "llds_out_instr.m"
                                            ll_backend__llds_out__llds_out_instr__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_99_114_95_104_112_95_110_111_95_114_101_117_115_101_95_95_91_57_93_95_48_11_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_496, ll_backend__llds_out__llds_out_instr__MaybeTag_42, ll_backend__llds_out__llds_out_instr__MaybeOffset_43, ll_backend__llds_out__llds_out_instr__SizeRval_44, ll_backend__llds_out__llds_out_instr__MaybeAllocId_45, ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_46, ll_backend__llds_out__llds_out_instr__MaybeRegionRval_47);
                                          }
#line 683 "llds_out_instr.m"
                                          {
#line 683 "llds_out_instr.m"
                                            mercury__io__write_string_3_p_0((MR_String) ")");
                                          }
#line 645 "llds_out_instr.m"
                                        }
#line 685 "llds_out_instr.m"
                                      {
#line 685 "llds_out_instr.m"
                                        mercury__io__write_string_3_p_0((MR_String) ";\n");
#line 685 "llds_out_instr.m"
                                        return;
                                      }
#line 637 "llds_out_instr.m"
                                    }
#line 505 "llds_out_instr.m"
                                  else
#line 505 "llds_out_instr.m"
                                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 24))))
#line 845 "llds_out_instr.m"
                                      {
#line 845 "llds_out_instr.m"
                                        MR_Integer ll_backend__llds_out__llds_out_instr__N_66 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 845 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__DwordAlignment_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 845 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__Kind_508 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
#line 845 "llds_out_instr.m"
                                        MR_String ll_backend__llds_out__llds_out_instr___Msg_67 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 846 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_539_539 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
#line 846 "llds_out_instr.m"
                                        MR_String ll_backend__llds_out__llds_out_instr__V_540_540 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
#line 846 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_541_541 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
#line 846 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_542_542 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
#line 846 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_543_543 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
#line 846 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_544_544 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
#line 846 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_545_545 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 846 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_546_546 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 846 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_547_547 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 846 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_548_548 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 846 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_549_549 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 846 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_550_550 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 846 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_551_551 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 846 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_552_552 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 846 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_553_553 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 846 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_554_554 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 846 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_555_555 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 846 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_556_556 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 846 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_557_557 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 846 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_558_558 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)));

#line 850 "llds_out_instr.m"
                                        if ((ll_backend__llds_out__llds_out_instr__DwordAlignment_68 == (MR_Integer) 0))
#line 851 "llds_out_instr.m"
                                          {
#line 851 "llds_out_instr.m"
                                          }
#line 850 "llds_out_instr.m"
                                        else
#line 848 "llds_out_instr.m"
                                          {
#line 848 "llds_out_instr.m"
                                            MR_Word ll_backend__llds_out__llds_out_instr__V_185_185;

#line 849 "llds_out_instr.m"
                                            {
#line 849 "llds_out_instr.m"
                                              ll_backend__llds_out__llds_out_instr__V_185_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 849 "llds_out_instr.m"
                                              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_185_185, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_6[0]));
#line 849 "llds_out_instr.m"
                                              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_185_185, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_3));
#line 849 "llds_out_instr.m"
                                              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_185_185, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 849 "llds_out_instr.m"
                                              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_185_185, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__N_66));
#line 849 "llds_out_instr.m"
                                            }
#line 849 "llds_out_instr.m"
                                            {
#line 849 "llds_out_instr.m"
                                              mercury__require__expect_4_p_0(ll_backend__llds_out__llds_out_instr__V_185_185, (MR_String) "ll_backend.llds_out.llds_out_instr", (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction\'/5", (MR_String) "odd sp increment");
                                            }
#line 848 "llds_out_instr.m"
                                          }
#line 860 "llds_out_instr.m"
                                        if ((ll_backend__llds_out__llds_out_instr__Kind_508 == (MR_Integer) 0))
#line 854 "llds_out_instr.m"
                                          {
#line 855 "llds_out_instr.m"
                                            MR_Integer ll_backend__llds_out__llds_out_instr__V_191_191;

#line 855 "llds_out_instr.m"
                                            {
#line 855 "llds_out_instr.m"
                                              ll_backend__llds_out__llds_out_instr__V_191_191 = ll_backend__llds_out__llds_out_instr__max_leaf_stack_frame_size_0_f_0();
                                            }
#line 855 "llds_out_instr.m"
                                            ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__N_66 < ll_backend__llds_out__llds_out_instr__V_191_191);
#line 854 "llds_out_instr.m"
                                            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 856 "llds_out_instr.m"
                                              {
#line 856 "llds_out_instr.m"
                                                {
#line 856 "llds_out_instr.m"
                                                  mercury__io__write_string_3_p_0((MR_String) "\tMR_incr_sp_leaf(");
                                                }
#line 856 "llds_out_instr.m"
                                              }
#line 854 "llds_out_instr.m"
                                            else
#line 858 "llds_out_instr.m"
                                              {
#line 858 "llds_out_instr.m"
                                                {
#line 858 "llds_out_instr.m"
                                                  mercury__io__write_string_3_p_0((MR_String) "\tMR_incr_sp(");
                                                }
#line 858 "llds_out_instr.m"
                                              }
#line 854 "llds_out_instr.m"
                                          }
#line 860 "llds_out_instr.m"
                                        else
#line 861 "llds_out_instr.m"
                                          {
#line 862 "llds_out_instr.m"
                                            {
#line 862 "llds_out_instr.m"
                                              mercury__io__write_string_3_p_0((MR_String) "\tMR_incr_sp(");
                                            }
#line 861 "llds_out_instr.m"
                                          }
#line 864 "llds_out_instr.m"
                                        {
#line 864 "llds_out_instr.m"
                                          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__N_66);
                                        }
#line 865 "llds_out_instr.m"
                                        {
#line 865 "llds_out_instr.m"
                                          mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 865 "llds_out_instr.m"
                                          return;
                                        }
#line 845 "llds_out_instr.m"
                                      }
#line 505 "llds_out_instr.m"
                                    else
#line 505 "llds_out_instr.m"
                                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 905 "llds_out_instr.m"
                                        {
#line 905 "llds_out_instr.m"
                                          MR_Integer ll_backend__llds_out__llds_out_instr__NumConjuncts_83 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 905 "llds_out_instr.m"
                                          MR_Integer ll_backend__llds_out__llds_out_instr__TSStringIndex_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
#line 905 "llds_out_instr.m"
                                          MR_Word ll_backend__llds_out__llds_out_instr__Lval_511 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 906 "llds_out_instr.m"
                                          {
#line 906 "llds_out_instr.m"
                                            mercury__io__write_string_3_p_0((MR_String) "\tMR_init_sync_term(");
                                          }
#line 907 "llds_out_instr.m"
                                          {
#line 907 "llds_out_instr.m"
                                            ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_511);
                                          }
#line 908 "llds_out_instr.m"
                                          {
#line 908 "llds_out_instr.m"
                                            mercury__io__write_string_3_p_0((MR_String) ", ");
                                          }
#line 909 "llds_out_instr.m"
                                          {
#line 909 "llds_out_instr.m"
                                            mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__NumConjuncts_83);
                                          }
#line 910 "llds_out_instr.m"
                                          {
#line 910 "llds_out_instr.m"
                                            mercury__io__write_string_3_p_0((MR_String) ", ");
                                          }
#line 911 "llds_out_instr.m"
                                          {
#line 911 "llds_out_instr.m"
                                            mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__TSStringIndex_84);
                                          }
#line 912 "llds_out_instr.m"
                                          {
#line 912 "llds_out_instr.m"
                                            mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 912 "llds_out_instr.m"
                                            return;
                                          }
#line 905 "llds_out_instr.m"
                                        }
#line 505 "llds_out_instr.m"
                                      else
#line 505 "llds_out_instr.m"
                                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 921 "llds_out_instr.m"
                                          {
#line 921 "llds_out_instr.m"
                                            MR_Word ll_backend__llds_out__llds_out_instr__Lval_513 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 921 "llds_out_instr.m"
                                            MR_Word ll_backend__llds_out__llds_out_instr__Label_514 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));

#line 922 "llds_out_instr.m"
                                            {
#line 922 "llds_out_instr.m"
                                              mercury__io__write_string_3_p_0((MR_String) "\tMR_join_and_continue(");
                                            }
#line 923 "llds_out_instr.m"
                                            {
#line 923 "llds_out_instr.m"
                                              ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_513);
                                            }
#line 924 "llds_out_instr.m"
                                            {
#line 924 "llds_out_instr.m"
                                              mercury__io__write_string_3_p_0((MR_String) ", ");
                                            }
#line 925 "llds_out_instr.m"
                                            {
#line 925 "llds_out_instr.m"
                                              ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__Label_514);
                                            }
#line 926 "llds_out_instr.m"
                                            {
#line 926 "llds_out_instr.m"
                                              mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 926 "llds_out_instr.m"
                                              return;
                                            }
#line 921 "llds_out_instr.m"
                                          }
#line 505 "llds_out_instr.m"
                                        else
#line 505 "llds_out_instr.m"
                                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 532 "llds_out_instr.m"
                                            {
#line 532 "llds_out_instr.m"
                                              MR_Word ll_backend__llds_out__llds_out_instr__Lval_613 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 532 "llds_out_instr.m"
                                              MR_Word ll_backend__llds_out__llds_out_instr__Rval_614 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 532 "llds_out_instr.m"
                                              MR_Word ll_backend__llds_out__llds_out_instr__Type_615;

#line 533 "llds_out_instr.m"
                                              {
#line 533 "llds_out_instr.m"
                                                mercury__io__write_string_3_p_0((MR_String) "\t");
                                              }
#line 534 "llds_out_instr.m"
                                              {
#line 534 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_data__output_lval_for_assign_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_613, &ll_backend__llds_out__llds_out_instr__Type_615);
                                              }
#line 535 "llds_out_instr.m"
                                              {
#line 535 "llds_out_instr.m"
                                                mercury__io__write_string_3_p_0((MR_String) " = ");
                                              }
#line 536 "llds_out_instr.m"
                                              {
#line 536 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_614, ll_backend__llds_out__llds_out_instr__Type_615);
                                              }
#line 537 "llds_out_instr.m"
                                              {
#line 537 "llds_out_instr.m"
                                                mercury__io__write_string_3_p_0((MR_String) ";\n");
#line 537 "llds_out_instr.m"
                                                return;
                                              }
#line 532 "llds_out_instr.m"
                                            }
#line 505 "llds_out_instr.m"
                                          else
#line 505 "llds_out_instr.m"
                                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 595 "llds_out_instr.m"
                                              {
#line 595 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__Label_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 595 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__LocalThreadEngineBase_37;
#line 597 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_519_519;
#line 597 "llds_out_instr.m"
                                                MR_String ll_backend__llds_out__llds_out_instr__V_520_520;
#line 597 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_521_521;
#line 597 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_522_522;
#line 597 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_523_523;
#line 597 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_524_524;
#line 597 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_525_525;
#line 597 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_526_526;
#line 597 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_527_527;
#line 597 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_528_528;
#line 597 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_529_529;
#line 597 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_530_530;
#line 597 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_531_531;
#line 597 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_532_532;
#line 597 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_533_533;
#line 597 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_534_534;
#line 597 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_535_535;
#line 597 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_536_536;
#line 597 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_537_537;
#line 597 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_538_538;

#line 596 "llds_out_instr.m"
                                                {
#line 596 "llds_out_instr.m"
                                                  ll_backend__llds_out__llds_out_instr__output_label_defn_3_p_0(ll_backend__llds_out__llds_out_instr__Label_36);
                                                }
#line 597 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_519_519 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
#line 597 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_520_520 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
#line 597 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_521_521 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
#line 597 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_522_522 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
#line 597 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_523_523 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
#line 597 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_524_524 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
#line 597 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_525_525 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 597 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_526_526 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 597 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_527_527 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 597 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_528_528 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 597 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__LocalThreadEngineBase_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 597 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_529_529 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 597 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_530_530 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 597 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_531_531 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 597 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_532_532 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 597 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_533_533 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 597 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_534_534 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 597 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_535_535 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 597 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_536_536 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 597 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_537_537 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 597 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_538_538 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)));
#line 601 "llds_out_instr.m"
                                                if ((ll_backend__llds_out__llds_out_instr__LocalThreadEngineBase_37 == (MR_Integer) 0))
#line 602 "llds_out_instr.m"
                                                  {
#line 602 "llds_out_instr.m"
                                                  }
#line 601 "llds_out_instr.m"
                                                else
#line 599 "llds_out_instr.m"
                                                  {
#line 600 "llds_out_instr.m"
                                                    {
#line 600 "llds_out_instr.m"
                                                      mercury__io__write_string_3_p_0((MR_String) "\tMR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE\n");
                                                    }
#line 599 "llds_out_instr.m"
                                                  }
#line 604 "llds_out_instr.m"
                                                {
#line 604 "llds_out_instr.m"
                                                  ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Label_36, ll_backend__llds_out__llds_out_instr__ProfInfo_8);
#line 604 "llds_out_instr.m"
                                                  return;
                                                }
#line 595 "llds_out_instr.m"
                                              }
#line 505 "llds_out_instr.m"
                                            else
#line 505 "llds_out_instr.m"
                                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 928 "llds_out_instr.m"
                                                {
#line 928 "llds_out_instr.m"
                                                  MR_Integer ll_backend__llds_out__llds_out_instr__NumSlots_86 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 928 "llds_out_instr.m"
                                                  MR_Word ll_backend__llds_out__llds_out_instr__Lval_515 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));

#line 930 "llds_out_instr.m"
                                                  {
#line 930 "llds_out_instr.m"
                                                    mercury__io__write_string_3_p_0((MR_String) "\tMR_lc_create_loop_control(");
                                                  }
#line 931 "llds_out_instr.m"
                                                  {
#line 931 "llds_out_instr.m"
                                                    mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__NumSlots_86);
                                                  }
#line 932 "llds_out_instr.m"
                                                  {
#line 932 "llds_out_instr.m"
                                                    mercury__io__write_string_3_p_0((MR_String) ", ");
                                                  }
#line 933 "llds_out_instr.m"
                                                  {
#line 933 "llds_out_instr.m"
                                                    ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_515);
                                                  }
#line 934 "llds_out_instr.m"
                                                  {
#line 934 "llds_out_instr.m"
                                                    mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 934 "llds_out_instr.m"
                                                    return;
                                                  }
#line 928 "llds_out_instr.m"
                                                }
#line 505 "llds_out_instr.m"
                                              else
#line 505 "llds_out_instr.m"
                                                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 955 "llds_out_instr.m"
                                                  {
#line 955 "llds_out_instr.m"
                                                    MR_Word ll_backend__llds_out__llds_out_instr__LCRval_517 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 955 "llds_out_instr.m"
                                                    MR_Word ll_backend__llds_out__llds_out_instr__LCSRval_518 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));

#line 957 "llds_out_instr.m"
                                                    {
#line 957 "llds_out_instr.m"
                                                      mercury__io__write_string_3_p_0((MR_String) "\tMR_lc_join_and_terminate(");
                                                    }
#line 958 "llds_out_instr.m"
                                                    {
#line 958 "llds_out_instr.m"
                                                      ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__LCRval_517);
                                                    }
#line 959 "llds_out_instr.m"
                                                    {
#line 959 "llds_out_instr.m"
                                                      mercury__io__write_string_3_p_0((MR_String) ", ");
                                                    }
#line 960 "llds_out_instr.m"
                                                    {
#line 960 "llds_out_instr.m"
                                                      ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__LCSRval_518);
                                                    }
#line 961 "llds_out_instr.m"
                                                    {
#line 961 "llds_out_instr.m"
                                                      mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 961 "llds_out_instr.m"
                                                      return;
                                                    }
#line 955 "llds_out_instr.m"
                                                  }
#line 505 "llds_out_instr.m"
                                                else
#line 505 "llds_out_instr.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 946 "llds_out_instr.m"
                                                    {
#line 946 "llds_out_instr.m"
                                                      MR_Word ll_backend__llds_out__llds_out_instr__LCSRval_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 946 "llds_out_instr.m"
                                                      MR_Word ll_backend__llds_out__llds_out_instr__ChildLabel_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
#line 946 "llds_out_instr.m"
                                                      MR_Word ll_backend__llds_out__llds_out_instr__LCRval_516 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 947 "llds_out_instr.m"
                                                      {
#line 947 "llds_out_instr.m"
                                                        mercury__io__write_string_3_p_0((MR_String) "\tMR_lc_spawn_off((MR_LoopControl*)");
                                                      }
#line 948 "llds_out_instr.m"
                                                      {
#line 948 "llds_out_instr.m"
                                                        ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__LCRval_516);
                                                      }
#line 949 "llds_out_instr.m"
                                                      {
#line 949 "llds_out_instr.m"
                                                        mercury__io__write_string_3_p_0((MR_String) ", ");
                                                      }
#line 950 "llds_out_instr.m"
                                                      {
#line 950 "llds_out_instr.m"
                                                        ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__LCSRval_90);
                                                      }
#line 951 "llds_out_instr.m"
                                                      {
#line 951 "llds_out_instr.m"
                                                        mercury__io__write_string_3_p_0((MR_String) ", ");
                                                      }
#line 952 "llds_out_instr.m"
                                                      {
#line 952 "llds_out_instr.m"
                                                        ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__ChildLabel_91);
                                                      }
#line 953 "llds_out_instr.m"
                                                      {
#line 953 "llds_out_instr.m"
                                                        mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 953 "llds_out_instr.m"
                                                        return;
                                                      }
#line 946 "llds_out_instr.m"
                                                    }
#line 505 "llds_out_instr.m"
                                                  else
#line 505 "llds_out_instr.m"
                                                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 936 "llds_out_instr.m"
                                                      {
#line 936 "llds_out_instr.m"
                                                        MR_Word ll_backend__llds_out__llds_out_instr__LCRval_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 936 "llds_out_instr.m"
                                                        MR_Word ll_backend__llds_out__llds_out_instr__LCSLval_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 936 "llds_out_instr.m"
                                                        MR_Word ll_backend__llds_out__llds_out_instr__InternalLabel_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));

#line 938 "llds_out_instr.m"
                                                        {
#line 938 "llds_out_instr.m"
                                                          mercury__io__write_string_3_p_0((MR_String) "\tMR_lc_wait_free_slot(");
                                                        }
#line 939 "llds_out_instr.m"
                                                        {
#line 939 "llds_out_instr.m"
                                                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__LCRval_87);
                                                        }
#line 940 "llds_out_instr.m"
                                                        {
#line 940 "llds_out_instr.m"
                                                          mercury__io__write_string_3_p_0((MR_String) ", ");
                                                        }
#line 941 "llds_out_instr.m"
                                                        {
#line 941 "llds_out_instr.m"
                                                          ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__LCSLval_88);
                                                        }
#line 942 "llds_out_instr.m"
                                                        {
#line 942 "llds_out_instr.m"
                                                          mercury__io__write_string_3_p_0((MR_String) ", ");
                                                        }
#line 943 "llds_out_instr.m"
                                                        {
#line 943 "llds_out_instr.m"
                                                          ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(ll_backend__llds_out__llds_out_instr__InternalLabel_89);
                                                        }
#line 944 "llds_out_instr.m"
                                                        {
#line 944 "llds_out_instr.m"
                                                          mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 944 "llds_out_instr.m"
                                                          return;
                                                        }
#line 936 "llds_out_instr.m"
                                                      }
#line 505 "llds_out_instr.m"
                                                    else
#line 505 "llds_out_instr.m"
                                                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 539 "llds_out_instr.m"
                                                        {
#line 539 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__Target_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 539 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__ContLabel_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 539 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProfInfo_8, (MR_Integer) 0)));
#line 539 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__LiveVals_477 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
#line 539 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 4)));
#line 539 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 5)));
#line 539 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 6)));
#line 540 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProfInfo_8, (MR_Integer) 1)));

#line 541 "llds_out_instr.m"
                                                          {
#line 541 "llds_out_instr.m"
                                                            ll_backend__llds_out__llds_out_instr__output_call_6_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Target_20, ll_backend__llds_out__llds_out_instr__ContLabel_21, ll_backend__llds_out__llds_out_instr__CallerLabel_25);
                                                          }
#line 542 "llds_out_instr.m"
                                                          {
#line 542 "llds_out_instr.m"
                                                            ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__LiveVals_477);
#line 542 "llds_out_instr.m"
                                                            return;
                                                          }
#line 539 "llds_out_instr.m"
                                                        }
#line 505 "llds_out_instr.m"
                                                      else
#line 505 "llds_out_instr.m"
                                                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 687 "llds_out_instr.m"
                                                          {
#line 687 "llds_out_instr.m"
                                                            MR_Word ll_backend__llds_out__llds_out_instr__Lval_497 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 688 "llds_out_instr.m"
                                                            {
#line 688 "llds_out_instr.m"
                                                              mercury__io__write_string_3_p_0((MR_String) "\tMR_mark_hp(");
                                                            }
#line 689 "llds_out_instr.m"
                                                            {
#line 689 "llds_out_instr.m"
                                                              ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_497);
                                                            }
#line 690 "llds_out_instr.m"
                                                            {
#line 690 "llds_out_instr.m"
                                                              mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 690 "llds_out_instr.m"
                                                              return;
                                                            }
#line 687 "llds_out_instr.m"
                                                          }
#line 505 "llds_out_instr.m"
                                                        else
#line 505 "llds_out_instr.m"
                                                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 835 "llds_out_instr.m"
                                                            {
#line 835 "llds_out_instr.m"
                                                              MR_Word ll_backend__llds_out__llds_out_instr__Lval_506 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 836 "llds_out_instr.m"
                                                              {
#line 836 "llds_out_instr.m"
                                                                mercury__io__write_string_3_p_0((MR_String) "\tMR_mark_ticket_stack(");
                                                              }
#line 837 "llds_out_instr.m"
                                                              {
#line 837 "llds_out_instr.m"
                                                                ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_506);
                                                              }
#line 838 "llds_out_instr.m"
                                                              {
#line 838 "llds_out_instr.m"
                                                                mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 838 "llds_out_instr.m"
                                                                return;
                                                              }
#line 835 "llds_out_instr.m"
                                                            }
#line 505 "llds_out_instr.m"
                                                          else
#line 505 "llds_out_instr.m"
                                                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 548 "llds_out_instr.m"
                                                              {
#line 548 "llds_out_instr.m"
                                                                MR_Word ll_backend__llds_out__llds_out_instr__FrameInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 548 "llds_out_instr.m"
                                                                MR_Word ll_backend__llds_out__llds_out_instr__MaybeFailCont_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));

#line 568 "llds_out_instr.m"
                                                                if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__FrameInfo_30)) == (MR_mktag((MR_Integer) 1))))
#line 550 "llds_out_instr.m"
                                                                  {
#line 550 "llds_out_instr.m"
                                                                    MR_String ll_backend__llds_out__llds_out_instr__Msg_32 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__FrameInfo_30, (MR_Integer) 0)));
#line 550 "llds_out_instr.m"
                                                                    MR_Integer ll_backend__llds_out__llds_out_instr__Num_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__FrameInfo_30, (MR_Integer) 1)));

#line 560 "llds_out_instr.m"
                                                                    if ((ll_backend__llds_out__llds_out_instr__MaybeFailCont_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 561 "llds_out_instr.m"
                                                                      {
#line 562 "llds_out_instr.m"
                                                                        {
#line 562 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) "\tMR_mkframe_no_redoip(\"");
                                                                        }
#line 563 "llds_out_instr.m"
                                                                        {
#line 563 "llds_out_instr.m"
                                                                          backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__llds_out__llds_out_instr__Msg_32);
                                                                        }
#line 564 "llds_out_instr.m"
                                                                        {
#line 564 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) "\", ");
                                                                        }
#line 565 "llds_out_instr.m"
                                                                        {
#line 565 "llds_out_instr.m"
                                                                          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Num_33);
                                                                        }
#line 566 "llds_out_instr.m"
                                                                        {
#line 566 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 566 "llds_out_instr.m"
                                                                          return;
                                                                        }
#line 561 "llds_out_instr.m"
                                                                      }
#line 560 "llds_out_instr.m"
                                                                    else
#line 552 "llds_out_instr.m"
                                                                      {
#line 552 "llds_out_instr.m"
                                                                        MR_Word ll_backend__llds_out__llds_out_instr__FailCont_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeFailCont_31, (MR_Integer) 0)));

#line 553 "llds_out_instr.m"
                                                                        {
#line 553 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) "\tMR_mkframe(\"");
                                                                        }
#line 554 "llds_out_instr.m"
                                                                        {
#line 554 "llds_out_instr.m"
                                                                          backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__llds_out__llds_out_instr__Msg_32);
                                                                        }
#line 555 "llds_out_instr.m"
                                                                        {
#line 555 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) "\", ");
                                                                        }
#line 556 "llds_out_instr.m"
                                                                        {
#line 556 "llds_out_instr.m"
                                                                          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Num_33);
                                                                        }
#line 557 "llds_out_instr.m"
                                                                        {
#line 557 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                                                                        }
#line 558 "llds_out_instr.m"
                                                                        {
#line 558 "llds_out_instr.m"
                                                                          ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__FailCont_34);
                                                                        }
#line 559 "llds_out_instr.m"
                                                                        {
#line 559 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 559 "llds_out_instr.m"
                                                                          return;
                                                                        }
#line 552 "llds_out_instr.m"
                                                                      }
#line 550 "llds_out_instr.m"
                                                                  }
#line 568 "llds_out_instr.m"
                                                                else
#line 569 "llds_out_instr.m"
                                                                  {
#line 569 "llds_out_instr.m"
                                                                    MR_Word ll_backend__llds_out__llds_out_instr__Kind_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__FrameInfo_30, (MR_Integer) 0)));

#line 581 "llds_out_instr.m"
                                                                    if ((ll_backend__llds_out__llds_out_instr__Kind_35 == (MR_Integer) 0))
#line 571 "llds_out_instr.m"
                                                                      {
#line 572 "llds_out_instr.m"
                                                                        {
#line 572 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) "\tMR_mkdettempframe(");
                                                                        }
#line 576 "llds_out_instr.m"
                                                                        if ((ll_backend__llds_out__llds_out_instr__MaybeFailCont_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 577 "llds_out_instr.m"
                                                                          {
#line 578 "llds_out_instr.m"
                                                                            {
#line 578 "llds_out_instr.m"
                                                                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_instr", (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction\'/5", (MR_String) "no failcont");
#line 578 "llds_out_instr.m"
                                                                              return;
                                                                            }
#line 577 "llds_out_instr.m"
                                                                          }
#line 576 "llds_out_instr.m"
                                                                        else
#line 574 "llds_out_instr.m"
                                                                          {
#line 574 "llds_out_instr.m"
                                                                            MR_Word ll_backend__llds_out__llds_out_instr__FailCont_478 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeFailCont_31, (MR_Integer) 0)));

#line 575 "llds_out_instr.m"
                                                                            {
#line 575 "llds_out_instr.m"
                                                                              ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__FailCont_478);
                                                                            }
#line 574 "llds_out_instr.m"
                                                                          }
#line 580 "llds_out_instr.m"
                                                                        {
#line 580 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 580 "llds_out_instr.m"
                                                                          return;
                                                                        }
#line 571 "llds_out_instr.m"
                                                                      }
#line 581 "llds_out_instr.m"
                                                                    else
#line 582 "llds_out_instr.m"
                                                                      {
#line 583 "llds_out_instr.m"
                                                                        {
#line 583 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) "\tMR_mktempframe(");
                                                                        }
#line 587 "llds_out_instr.m"
                                                                        if ((ll_backend__llds_out__llds_out_instr__MaybeFailCont_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 588 "llds_out_instr.m"
                                                                          {
#line 589 "llds_out_instr.m"
                                                                            {
#line 589 "llds_out_instr.m"
                                                                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_instr", (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction\'/5", (MR_String) "no failcont");
#line 589 "llds_out_instr.m"
                                                                              return;
                                                                            }
#line 588 "llds_out_instr.m"
                                                                          }
#line 587 "llds_out_instr.m"
                                                                        else
#line 585 "llds_out_instr.m"
                                                                          {
#line 585 "llds_out_instr.m"
                                                                            MR_Word ll_backend__llds_out__llds_out_instr__FailCont_481 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeFailCont_31, (MR_Integer) 0)));

#line 586 "llds_out_instr.m"
                                                                            {
#line 586 "llds_out_instr.m"
                                                                              ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__FailCont_481);
                                                                            }
#line 585 "llds_out_instr.m"
                                                                          }
#line 591 "llds_out_instr.m"
                                                                        {
#line 591 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 591 "llds_out_instr.m"
                                                                          return;
                                                                        }
#line 582 "llds_out_instr.m"
                                                                      }
#line 569 "llds_out_instr.m"
                                                                  }
#line 548 "llds_out_instr.m"
                                                              }
#line 505 "llds_out_instr.m"
                                                            else
#line 505 "llds_out_instr.m"
                                                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 840 "llds_out_instr.m"
                                                                {
#line 840 "llds_out_instr.m"
                                                                  MR_Word ll_backend__llds_out__llds_out_instr__Rval_507 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 841 "llds_out_instr.m"
                                                                  {
#line 841 "llds_out_instr.m"
                                                                    mercury__io__write_string_3_p_0((MR_String) "\tMR_prune_tickets_to(");
                                                                  }
#line 842 "llds_out_instr.m"
                                                                  {
#line 842 "llds_out_instr.m"
                                                                    ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_507, (MR_Integer) 13);
                                                                  }
#line 843 "llds_out_instr.m"
                                                                  {
#line 843 "llds_out_instr.m"
                                                                    mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 843 "llds_out_instr.m"
                                                                    return;
                                                                  }
#line 840 "llds_out_instr.m"
                                                                }
#line 505 "llds_out_instr.m"
                                                              else
#line 505 "llds_out_instr.m"
                                                                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 702 "llds_out_instr.m"
                                                                  {
#line 702 "llds_out_instr.m"
                                                                    MR_Word ll_backend__llds_out__llds_out_instr__StackId_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 702 "llds_out_instr.m"
                                                                    MR_Word ll_backend__llds_out__llds_out_instr__EmbeddedFrame_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 702 "llds_out_instr.m"
                                                                    MR_Integer ll_backend__llds_out__llds_out_instr__FirstSlot_56;
#line 702 "llds_out_instr.m"
                                                                    MR_Integer ll_backend__llds_out__llds_out_instr__LastSlot_57;
#line 702 "llds_out_instr.m"
                                                                    MR_String ll_backend__llds_out__llds_out_instr__V_315_315;
#line 702 "llds_out_instr.m"
                                                                    MR_String ll_backend__llds_out__llds_out_instr__V_316_316;
#line 702 "llds_out_instr.m"
                                                                    MR_String ll_backend__llds_out__llds_out_instr__V_317_317;
#line 702 "llds_out_instr.m"
                                                                    MR_String ll_backend__llds_out__llds_out_instr__V_319_319;
#line 702 "llds_out_instr.m"
                                                                    MR_String ll_backend__llds_out__llds_out_instr__V_320_320;
#line 702 "llds_out_instr.m"
                                                                    MR_String ll_backend__llds_out__llds_out_instr__Comment_500;
#line 719 "llds_out_instr.m"
                                                                    MR_Word ll_backend__llds_out__llds_out_instr___StackId_55;

#line 706 "llds_out_instr.m"
                                                                    if ((ll_backend__llds_out__llds_out_instr__StackId_53 == (MR_Integer) 2))
#line 710 "llds_out_instr.m"
                                                                      {
#line 711 "llds_out_instr.m"
                                                                        {
#line 711 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) "\tMR_push_region_commit_frame");
                                                                        }
#line 710 "llds_out_instr.m"
                                                                      }
#line 706 "llds_out_instr.m"
                                                                    else
#line 706 "llds_out_instr.m"
                                                                      if ((ll_backend__llds_out__llds_out_instr__StackId_53 == (MR_Integer) 1))
#line 707 "llds_out_instr.m"
                                                                        {
#line 708 "llds_out_instr.m"
                                                                          {
#line 708 "llds_out_instr.m"
                                                                            mercury__io__write_string_3_p_0((MR_String) "\tMR_push_region_disj_frame");
                                                                          }
#line 707 "llds_out_instr.m"
                                                                        }
#line 706 "llds_out_instr.m"
                                                                      else
#line 704 "llds_out_instr.m"
                                                                        {
#line 705 "llds_out_instr.m"
                                                                          {
#line 705 "llds_out_instr.m"
                                                                            mercury__io__write_string_3_p_0((MR_String) "\tMR_push_region_ite_frame");
                                                                          }
#line 704 "llds_out_instr.m"
                                                                        }
#line 713 "llds_out_instr.m"
                                                                    {
#line 713 "llds_out_instr.m"
                                                                      mercury__io__write_string_3_p_0((MR_String) "(");
                                                                    }
#line 714 "llds_out_instr.m"
                                                                    {
#line 714 "llds_out_instr.m"
                                                                      ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__EmbeddedFrame_54);
                                                                    }
#line 715 "llds_out_instr.m"
                                                                    {
#line 715 "llds_out_instr.m"
                                                                      mercury__io__write_string_3_p_0((MR_String) ");");
                                                                    }
#line 719 "llds_out_instr.m"
                                                                    ll_backend__llds_out__llds_out_instr___StackId_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__EmbeddedFrame_54, (MR_Integer) 0)));
#line 719 "llds_out_instr.m"
                                                                    ll_backend__llds_out__llds_out_instr__FirstSlot_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__EmbeddedFrame_54, (MR_Integer) 1)));
#line 719 "llds_out_instr.m"
                                                                    ll_backend__llds_out__llds_out_instr__LastSlot_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__EmbeddedFrame_54, (MR_Integer) 2)));
#line 721 "llds_out_instr.m"
                                                                    {
#line 721 "llds_out_instr.m"
                                                                      ll_backend__llds_out__llds_out_instr__V_316_316 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_instr__FirstSlot_56);
                                                                    }
#line 722 "llds_out_instr.m"
                                                                    {
#line 722 "llds_out_instr.m"
                                                                      ll_backend__llds_out__llds_out_instr__V_320_320 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_instr__LastSlot_57);
                                                                    }
#line 721 "llds_out_instr.m"
                                                                    {
#line 721 "llds_out_instr.m"
                                                                      ll_backend__llds_out__llds_out_instr__V_319_319 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_instr__V_320_320, (MR_String) " */");
                                                                    }
#line 721 "llds_out_instr.m"
                                                                    {
#line 721 "llds_out_instr.m"
                                                                      ll_backend__llds_out__llds_out_instr__V_317_317 = mercury__string__f_43_43_2_f_0((MR_String) "..", ll_backend__llds_out__llds_out_instr__V_319_319);
                                                                    }
#line 721 "llds_out_instr.m"
                                                                    {
#line 721 "llds_out_instr.m"
                                                                      ll_backend__llds_out__llds_out_instr__V_315_315 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_instr__V_316_316, ll_backend__llds_out__llds_out_instr__V_317_317);
                                                                    }
#line 721 "llds_out_instr.m"
                                                                    {
#line 721 "llds_out_instr.m"
                                                                      ll_backend__llds_out__llds_out_instr__Comment_500 = mercury__string__f_43_43_2_f_0((MR_String) " /* ", ll_backend__llds_out__llds_out_instr__V_315_315);
                                                                    }
#line 723 "llds_out_instr.m"
                                                                    {
#line 723 "llds_out_instr.m"
                                                                      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__Comment_500);
                                                                    }
#line 725 "llds_out_instr.m"
                                                                    {
#line 725 "llds_out_instr.m"
                                                                      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 725 "llds_out_instr.m"
                                                                      return;
                                                                    }
#line 702 "llds_out_instr.m"
                                                                  }
#line 505 "llds_out_instr.m"
                                                                else
#line 505 "llds_out_instr.m"
                                                                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 728 "llds_out_instr.m"
                                                                    {
#line 728 "llds_out_instr.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_instr__FillOp_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 728 "llds_out_instr.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_instr__IdRval_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
#line 728 "llds_out_instr.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_instr__NumLval_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 4)));
#line 728 "llds_out_instr.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_instr__AddrLval_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 5)));
#line 728 "llds_out_instr.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_instr__EmbeddedFrame_501 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));

#line 732 "llds_out_instr.m"
                                                                      if ((ll_backend__llds_out__llds_out_instr__FillOp_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 745 "llds_out_instr.m"
                                                                        {
#line 746 "llds_out_instr.m"
                                                                          {
#line 746 "llds_out_instr.m"
                                                                            mercury__io__write_string_3_p_0((MR_String) "\tMR_region_fill_commit");
                                                                          }
#line 745 "llds_out_instr.m"
                                                                        }
#line 732 "llds_out_instr.m"
                                                                      else
#line 732 "llds_out_instr.m"
                                                                        if ((ll_backend__llds_out__llds_out_instr__FillOp_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 742 "llds_out_instr.m"
                                                                          {
#line 743 "llds_out_instr.m"
                                                                            {
#line 743 "llds_out_instr.m"
                                                                              mercury__io__write_string_3_p_0((MR_String) "\tMR_region_fill_disj_snapshot");
                                                                            }
#line 742 "llds_out_instr.m"
                                                                          }
#line 732 "llds_out_instr.m"
                                                                        else
#line 732 "llds_out_instr.m"
                                                                          if ((ll_backend__llds_out__llds_out_instr__FillOp_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 730 "llds_out_instr.m"
                                                                            {
#line 731 "llds_out_instr.m"
                                                                              {
#line 731 "llds_out_instr.m"
                                                                                mercury__io__write_string_3_p_0((MR_String) "\tMR_region_fill_ite_protect");
                                                                              }
#line 730 "llds_out_instr.m"
                                                                            }
#line 732 "llds_out_instr.m"
                                                                          else
#line 732 "llds_out_instr.m"
                                                                            if ((ll_backend__llds_out__llds_out_instr__FillOp_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 739 "llds_out_instr.m"
                                                                              {
#line 740 "llds_out_instr.m"
                                                                                {
#line 740 "llds_out_instr.m"
                                                                                  mercury__io__write_string_3_p_0((MR_String) "\tMR_region_fill_semi_disj_protect");
                                                                                }
#line 739 "llds_out_instr.m"
                                                                              }
#line 732 "llds_out_instr.m"
                                                                            else
#line 732 "llds_out_instr.m"
                                                                              {
#line 732 "llds_out_instr.m"
                                                                                MR_Word ll_backend__llds_out__llds_out_instr__V_623_623 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__FillOp_58, (MR_Integer) 0)));

#line 732 "llds_out_instr.m"
                                                                                if ((ll_backend__llds_out__llds_out_instr__V_623_623 == (MR_Integer) 1))
#line 736 "llds_out_instr.m"
                                                                                  {
#line 737 "llds_out_instr.m"
                                                                                    {
#line 737 "llds_out_instr.m"
                                                                                      mercury__io__write_string_3_p_0((MR_String) "\tMR_region_fill_ite_snapshot_not_removed");
                                                                                    }
#line 736 "llds_out_instr.m"
                                                                                  }
#line 732 "llds_out_instr.m"
                                                                                else
#line 733 "llds_out_instr.m"
                                                                                  {
#line 734 "llds_out_instr.m"
                                                                                    {
#line 734 "llds_out_instr.m"
                                                                                      mercury__io__write_string_3_p_0((MR_String) "\tMR_region_fill_ite_snapshot_removed");
                                                                                    }
#line 733 "llds_out_instr.m"
                                                                                  }
#line 732 "llds_out_instr.m"
                                                                              }
#line 748 "llds_out_instr.m"
                                                                      {
#line 748 "llds_out_instr.m"
                                                                        mercury__io__write_string_3_p_0((MR_String) "(");
                                                                      }
#line 749 "llds_out_instr.m"
                                                                      {
#line 749 "llds_out_instr.m"
                                                                        ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__EmbeddedFrame_501);
                                                                      }
#line 750 "llds_out_instr.m"
                                                                      {
#line 750 "llds_out_instr.m"
                                                                        mercury__io__write_string_3_p_0((MR_String) ", ");
                                                                      }
#line 751 "llds_out_instr.m"
                                                                      {
#line 751 "llds_out_instr.m"
                                                                        ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__IdRval_59);
                                                                      }
#line 752 "llds_out_instr.m"
                                                                      {
#line 752 "llds_out_instr.m"
                                                                        mercury__io__write_string_3_p_0((MR_String) ", ");
                                                                      }
#line 753 "llds_out_instr.m"
                                                                      {
#line 753 "llds_out_instr.m"
                                                                        ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__NumLval_60);
                                                                      }
#line 754 "llds_out_instr.m"
                                                                      {
#line 754 "llds_out_instr.m"
                                                                        mercury__io__write_string_3_p_0((MR_String) ", ");
                                                                      }
#line 755 "llds_out_instr.m"
                                                                      {
#line 755 "llds_out_instr.m"
                                                                        ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__AddrLval_61);
                                                                      }
#line 756 "llds_out_instr.m"
                                                                      {
#line 756 "llds_out_instr.m"
                                                                        mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 756 "llds_out_instr.m"
                                                                        return;
                                                                      }
#line 728 "llds_out_instr.m"
                                                                    }
#line 505 "llds_out_instr.m"
                                                                  else
#line 505 "llds_out_instr.m"
                                                                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 758 "llds_out_instr.m"
                                                                      {
#line 758 "llds_out_instr.m"
                                                                        MR_Word ll_backend__llds_out__llds_out_instr__SetOp_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 758 "llds_out_instr.m"
                                                                        MR_Word ll_backend__llds_out__llds_out_instr__ValueRval_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
#line 758 "llds_out_instr.m"
                                                                        MR_Word ll_backend__llds_out__llds_out_instr__EmbeddedFrame_502 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));

#line 762 "llds_out_instr.m"
                                                                        if ((ll_backend__llds_out__llds_out_instr__SetOp_62 == (MR_Integer) 4))
#line 772 "llds_out_instr.m"
                                                                          {
#line 773 "llds_out_instr.m"
                                                                            {
#line 773 "llds_out_instr.m"
                                                                              mercury__io__write_string_3_p_0((MR_String) "\tMR_region_set_commit_num_entries");
                                                                            }
#line 772 "llds_out_instr.m"
                                                                          }
#line 762 "llds_out_instr.m"
                                                                        else
#line 762 "llds_out_instr.m"
                                                                          if ((ll_backend__llds_out__llds_out_instr__SetOp_62 == (MR_Integer) 2))
#line 766 "llds_out_instr.m"
                                                                            {
#line 767 "llds_out_instr.m"
                                                                              {
#line 767 "llds_out_instr.m"
                                                                                mercury__io__write_string_3_p_0((MR_String) "\tMR_region_set_disj_num_protects");
                                                                              }
#line 766 "llds_out_instr.m"
                                                                            }
#line 762 "llds_out_instr.m"
                                                                          else
#line 762 "llds_out_instr.m"
                                                                            if ((ll_backend__llds_out__llds_out_instr__SetOp_62 == (MR_Integer) 3))
#line 769 "llds_out_instr.m"
                                                                              {
#line 770 "llds_out_instr.m"
                                                                                {
#line 770 "llds_out_instr.m"
                                                                                  mercury__io__write_string_3_p_0((MR_String) "\tMR_region_set_disj_num_snapshots");
                                                                                }
#line 769 "llds_out_instr.m"
                                                                              }
#line 762 "llds_out_instr.m"
                                                                            else
#line 762 "llds_out_instr.m"
                                                                              if ((ll_backend__llds_out__llds_out_instr__SetOp_62 == (MR_Integer) 0))
#line 760 "llds_out_instr.m"
                                                                                {
#line 761 "llds_out_instr.m"
                                                                                  {
#line 761 "llds_out_instr.m"
                                                                                    mercury__io__write_string_3_p_0((MR_String) "\tMR_region_set_ite_num_protects");
                                                                                  }
#line 760 "llds_out_instr.m"
                                                                                }
#line 762 "llds_out_instr.m"
                                                                              else
#line 763 "llds_out_instr.m"
                                                                                {
#line 764 "llds_out_instr.m"
                                                                                  {
#line 764 "llds_out_instr.m"
                                                                                    mercury__io__write_string_3_p_0((MR_String) "\tMR_region_set_ite_num_snapshots");
                                                                                  }
#line 763 "llds_out_instr.m"
                                                                                }
#line 775 "llds_out_instr.m"
                                                                        {
#line 775 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) "(");
                                                                        }
#line 776 "llds_out_instr.m"
                                                                        {
#line 776 "llds_out_instr.m"
                                                                          ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__EmbeddedFrame_502);
                                                                        }
#line 777 "llds_out_instr.m"
                                                                        {
#line 777 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) ", ");
                                                                        }
#line 778 "llds_out_instr.m"
                                                                        {
#line 778 "llds_out_instr.m"
                                                                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__ValueRval_63);
                                                                        }
#line 779 "llds_out_instr.m"
                                                                        {
#line 779 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 779 "llds_out_instr.m"
                                                                          return;
                                                                        }
#line 758 "llds_out_instr.m"
                                                                      }
#line 505 "llds_out_instr.m"
                                                                    else
#line 505 "llds_out_instr.m"
                                                                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 822 "llds_out_instr.m"
                                                                        {
#line 822 "llds_out_instr.m"
                                                                          MR_Word ll_backend__llds_out__llds_out_instr__Reason_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 822 "llds_out_instr.m"
                                                                          MR_Word ll_backend__llds_out__llds_out_instr__Rval_505 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 823 "llds_out_instr.m"
                                                                          {
#line 823 "llds_out_instr.m"
                                                                            mercury__io__write_string_3_p_0((MR_String) "\tMR_reset_ticket(");
                                                                          }
#line 824 "llds_out_instr.m"
                                                                          {
#line 824 "llds_out_instr.m"
                                                                            ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_505, (MR_Integer) 13);
                                                                          }
#line 825 "llds_out_instr.m"
                                                                          {
#line 825 "llds_out_instr.m"
                                                                            mercury__io__write_string_3_p_0((MR_String) ", ");
                                                                          }
#line 826 "llds_out_instr.m"
                                                                          {
#line 826 "llds_out_instr.m"
                                                                            ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_p_0(ll_backend__llds_out__llds_out_instr__Reason_65);
                                                                          }
#line 827 "llds_out_instr.m"
                                                                          {
#line 827 "llds_out_instr.m"
                                                                            mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 827 "llds_out_instr.m"
                                                                            return;
                                                                          }
#line 822 "llds_out_instr.m"
                                                                        }
#line 505 "llds_out_instr.m"
                                                                      else
#line 505 "llds_out_instr.m"
                                                                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 692 "llds_out_instr.m"
                                                                          {
#line 692 "llds_out_instr.m"
                                                                            MR_Word ll_backend__llds_out__llds_out_instr__Rval_498 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 693 "llds_out_instr.m"
                                                                            {
#line 693 "llds_out_instr.m"
                                                                              mercury__io__write_string_3_p_0((MR_String) "\tMR_restore_hp(");
                                                                            }
#line 694 "llds_out_instr.m"
                                                                            {
#line 694 "llds_out_instr.m"
                                                                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_498, (MR_Integer) 13);
                                                                            }
#line 695 "llds_out_instr.m"
                                                                            {
#line 695 "llds_out_instr.m"
                                                                              mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 695 "llds_out_instr.m"
                                                                              return;
                                                                            }
#line 692 "llds_out_instr.m"
                                                                          }
#line 505 "llds_out_instr.m"
                                                                        else
#line 505 "llds_out_instr.m"
                                                                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 631 "llds_out_instr.m"
                                                                            {
#line 631 "llds_out_instr.m"
                                                                              MR_Word ll_backend__llds_out__llds_out_instr__Lval_492 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 632 "llds_out_instr.m"
                                                                              {
#line 632 "llds_out_instr.m"
                                                                                mercury__io__write_string_3_p_0((MR_String) "\tMR_restore_maxfr(");
                                                                              }
#line 633 "llds_out_instr.m"
                                                                              {
#line 633 "llds_out_instr.m"
                                                                                ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_492);
                                                                              }
#line 634 "llds_out_instr.m"
                                                                              {
#line 634 "llds_out_instr.m"
                                                                                mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 634 "llds_out_instr.m"
                                                                                return;
                                                                              }
#line 631 "llds_out_instr.m"
                                                                            }
#line 505 "llds_out_instr.m"
                                                                          else
#line 505 "llds_out_instr.m"
                                                                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 626 "llds_out_instr.m"
                                                                              {
#line 626 "llds_out_instr.m"
                                                                                MR_Word ll_backend__llds_out__llds_out_instr__Lval_491 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 627 "llds_out_instr.m"
                                                                                {
#line 627 "llds_out_instr.m"
                                                                                  mercury__io__write_string_3_p_0((MR_String) "\tMR_save_maxfr(");
                                                                                }
#line 628 "llds_out_instr.m"
                                                                                {
#line 628 "llds_out_instr.m"
                                                                                  ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_491);
                                                                                }
#line 629 "llds_out_instr.m"
                                                                                {
#line 629 "llds_out_instr.m"
                                                                                  mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 629 "llds_out_instr.m"
                                                                                  return;
                                                                                }
#line 626 "llds_out_instr.m"
                                                                              }
#line 505 "llds_out_instr.m"
                                                                            else
#line 505 "llds_out_instr.m"
                                                                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 817 "llds_out_instr.m"
                                                                                {
#line 817 "llds_out_instr.m"
                                                                                  MR_Word ll_backend__llds_out__llds_out_instr__Lval_504 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 818 "llds_out_instr.m"
                                                                                  {
#line 818 "llds_out_instr.m"
                                                                                    mercury__io__write_string_3_p_0((MR_String) "\tMR_store_ticket(");
                                                                                  }
#line 819 "llds_out_instr.m"
                                                                                  {
#line 819 "llds_out_instr.m"
                                                                                    ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_504);
                                                                                  }
#line 820 "llds_out_instr.m"
                                                                                  {
#line 820 "llds_out_instr.m"
                                                                                    mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 820 "llds_out_instr.m"
                                                                                    return;
                                                                                  }
#line 817 "llds_out_instr.m"
                                                                                }
#line 505 "llds_out_instr.m"
                                                                              else
#line 781 "llds_out_instr.m"
                                                                                {
#line 781 "llds_out_instr.m"
                                                                                  MR_Word ll_backend__llds_out__llds_out_instr__UseOp_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 781 "llds_out_instr.m"
                                                                                  MR_Word ll_backend__llds_out__llds_out_instr__EmbeddedFrame_503 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));

#line 785 "llds_out_instr.m"
                                                                                  if ((ll_backend__llds_out__llds_out_instr__UseOp_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 810 "llds_out_instr.m"
                                                                                    {
#line 811 "llds_out_instr.m"
                                                                                      {
#line 811 "llds_out_instr.m"
                                                                                        mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_commit_failure");
                                                                                      }
#line 810 "llds_out_instr.m"
                                                                                    }
#line 785 "llds_out_instr.m"
                                                                                  else
#line 785 "llds_out_instr.m"
                                                                                    if ((ll_backend__llds_out__llds_out_instr__UseOp_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 807 "llds_out_instr.m"
                                                                                      {
#line 808 "llds_out_instr.m"
                                                                                        {
#line 808 "llds_out_instr.m"
                                                                                          mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_commit_success");
                                                                                        }
#line 807 "llds_out_instr.m"
                                                                                      }
#line 785 "llds_out_instr.m"
                                                                                    else
#line 785 "llds_out_instr.m"
                                                                                      if ((ll_backend__llds_out__llds_out_instr__UseOp_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 801 "llds_out_instr.m"
                                                                                        {
#line 802 "llds_out_instr.m"
                                                                                          {
#line 802 "llds_out_instr.m"
                                                                                            mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_disj_last");
                                                                                          }
#line 801 "llds_out_instr.m"
                                                                                        }
#line 785 "llds_out_instr.m"
                                                                                      else
#line 785 "llds_out_instr.m"
                                                                                        if ((ll_backend__llds_out__llds_out_instr__UseOp_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 798 "llds_out_instr.m"
                                                                                          {
#line 799 "llds_out_instr.m"
                                                                                            {
#line 799 "llds_out_instr.m"
                                                                                              mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_disj_later");
                                                                                            }
#line 798 "llds_out_instr.m"
                                                                                          }
#line 785 "llds_out_instr.m"
                                                                                        else
#line 785 "llds_out_instr.m"
                                                                                          if ((ll_backend__llds_out__llds_out_instr__UseOp_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 804 "llds_out_instr.m"
                                                                                            {
#line 805 "llds_out_instr.m"
                                                                                              {
#line 805 "llds_out_instr.m"
                                                                                                mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_disj_nonlast_semi_commit");
                                                                                              }
#line 804 "llds_out_instr.m"
                                                                                            }
#line 785 "llds_out_instr.m"
                                                                                          else
#line 785 "llds_out_instr.m"
                                                                                            if ((ll_backend__llds_out__llds_out_instr__UseOp_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 795 "llds_out_instr.m"
                                                                                              {
#line 796 "llds_out_instr.m"
                                                                                                {
#line 796 "llds_out_instr.m"
                                                                                                  mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_ite_nondet_cond_fail");
                                                                                                }
#line 795 "llds_out_instr.m"
                                                                                              }
#line 785 "llds_out_instr.m"
                                                                                            else
#line 785 "llds_out_instr.m"
                                                                                              if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__UseOp_64)) == (MR_mktag((MR_Integer) 2))))
#line 785 "llds_out_instr.m"
                                                                                                {
#line 785 "llds_out_instr.m"
                                                                                                  MR_Word ll_backend__llds_out__llds_out_instr__V_624_624 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_instr__UseOp_64, (MR_Integer) 0)));

#line 785 "llds_out_instr.m"
                                                                                                  if ((ll_backend__llds_out__llds_out_instr__V_624_624 == (MR_Integer) 1))
#line 792 "llds_out_instr.m"
                                                                                                    {
#line 793 "llds_out_instr.m"
                                                                                                      {
#line 793 "llds_out_instr.m"
                                                                                                        mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_ite_else_nondet");
                                                                                                      }
#line 792 "llds_out_instr.m"
                                                                                                    }
#line 785 "llds_out_instr.m"
                                                                                                  else
#line 789 "llds_out_instr.m"
                                                                                                    {
#line 790 "llds_out_instr.m"
                                                                                                      {
#line 790 "llds_out_instr.m"
                                                                                                        mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_ite_else_semidet");
                                                                                                      }
#line 789 "llds_out_instr.m"
                                                                                                    }
#line 785 "llds_out_instr.m"
                                                                                                }
#line 785 "llds_out_instr.m"
                                                                                              else
#line 785 "llds_out_instr.m"
                                                                                                {
#line 785 "llds_out_instr.m"
                                                                                                  MR_Word ll_backend__llds_out__llds_out_instr__V_625_625 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__UseOp_64, (MR_Integer) 0)));

#line 785 "llds_out_instr.m"
                                                                                                  if ((ll_backend__llds_out__llds_out_instr__V_625_625 == (MR_Integer) 1))
#line 786 "llds_out_instr.m"
                                                                                                    {
#line 787 "llds_out_instr.m"
                                                                                                      {
#line 787 "llds_out_instr.m"
                                                                                                        mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_ite_then_nondet");
                                                                                                      }
#line 786 "llds_out_instr.m"
                                                                                                    }
#line 785 "llds_out_instr.m"
                                                                                                  else
#line 783 "llds_out_instr.m"
                                                                                                    {
#line 784 "llds_out_instr.m"
                                                                                                      {
#line 784 "llds_out_instr.m"
                                                                                                        mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_ite_then_semidet");
                                                                                                      }
#line 783 "llds_out_instr.m"
                                                                                                    }
#line 785 "llds_out_instr.m"
                                                                                                }
#line 813 "llds_out_instr.m"
                                                                                  {
#line 813 "llds_out_instr.m"
                                                                                    mercury__io__write_string_3_p_0((MR_String) "(");
                                                                                  }
#line 814 "llds_out_instr.m"
                                                                                  {
#line 814 "llds_out_instr.m"
                                                                                    ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__EmbeddedFrame_503);
                                                                                  }
#line 815 "llds_out_instr.m"
                                                                                  {
#line 815 "llds_out_instr.m"
                                                                                    mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 815 "llds_out_instr.m"
                                                                                    return;
                                                                                  }
#line 781 "llds_out_instr.m"
                                                                                }
#line 505 "llds_out_instr.m"
  }
#line 500 "llds_out_instr.m"
}

#line 467 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(
#line 467 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
#line 467 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_8,
#line 467 "llds_out_instr.m"
  MR_String ll_backend__llds_out__llds_out_instr__Comment_9,
#line 467 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__ProfInfo_10)
#line 467 "llds_out_instr.m"
{
#line 470 "llds_out_instr.m"
  {
#line 470 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 470 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__AutoComments_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 0)));
#line 471 "llds_out_instr.m"
    MR_String ll_backend__llds_out__llds_out_instr__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 1)));
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 2)));
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 3)));
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 4)));
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 5)));
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)));

#line 483 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__AutoComments_12 == (MR_Integer) 0))
#line 480 "llds_out_instr.m"
      {
#line 476 "llds_out_instr.m"
        if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 1))))
#line 475 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_instr__succeeded = MR_TRUE;
#line 476 "llds_out_instr.m"
        else
#line 476 "llds_out_instr.m"
          if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 2))))
#line 476 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__succeeded = MR_TRUE;
#line 476 "llds_out_instr.m"
          else
#line 476 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__succeeded = MR_FALSE;
#line 480 "llds_out_instr.m"
        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 476 "llds_out_instr.m"
          {
#line 476 "llds_out_instr.m"
          }
#line 480 "llds_out_instr.m"
        else
#line 481 "llds_out_instr.m"
          {
#line 481 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Instr_8, ll_backend__llds_out__llds_out_instr__ProfInfo_10);
#line 481 "llds_out_instr.m"
            return;
          }
#line 480 "llds_out_instr.m"
      }
#line 483 "llds_out_instr.m"
    else
#line 484 "llds_out_instr.m"
      {
#line 485 "llds_out_instr.m"
        {
#line 485 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Instr_8, ll_backend__llds_out__llds_out_instr__ProfInfo_10);
        }
#line 486 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__succeeded = (strcmp(ll_backend__llds_out__llds_out_instr__Comment_9, (MR_String) "") == 0);
#line 488 "llds_out_instr.m"
        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 486 "llds_out_instr.m"
          {
#line 486 "llds_out_instr.m"
          }
#line 488 "llds_out_instr.m"
        else
#line 489 "llds_out_instr.m"
          {
#line 489 "llds_out_instr.m"
            {
#line 489 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "\t\t/* ");
            }
#line 490 "llds_out_instr.m"
            {
#line 490 "llds_out_instr.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__Comment_9);
            }
#line 491 "llds_out_instr.m"
            {
#line 491 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) " */\n");
#line 491 "llds_out_instr.m"
              return;
            }
#line 489 "llds_out_instr.m"
          }
#line 484 "llds_out_instr.m"
      }
#line 470 "llds_out_instr.m"
  }
#line 467 "llds_out_instr.m"
}

#line 419 "llds_out_instr.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_5_p_0_1(
#line 419 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg)
#line 419 "llds_out_instr.m"
{
#line 419 "llds_out_instr.m"
  {
#line 419 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 419 "llds_out_instr.m"
    MR_Box ll_backend__llds_out__llds_out_instr__closure = ll_backend__llds_out__llds_out_instr__closure_arg;

#line 419 "llds_out_instr.m"
    {
#line 419 "llds_out_instr.m"
      return ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_float_dword_assignment__419__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 4))));
    }
#line 419 "llds_out_instr.m"
    return ll_backend__llds_out__llds_out_instr__succeeded;
#line 419 "llds_out_instr.m"
  }
#line 419 "llds_out_instr.m"
}

#line 410 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_5_p_0(
#line 410 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
#line 410 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Lval_7,
#line 410 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Rval_8)
#line 410 "llds_out_instr.m"
{
#line 413 "llds_out_instr.m"
  {
#line 413 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 413 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__Type_10;
#line 413 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__AutoComments_11;
#line 413 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_17_17;
#line 423 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_30_30;
#line 423 "llds_out_instr.m"
    MR_String ll_backend__llds_out__llds_out_instr__V_31_31;
#line 423 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_32_32;
#line 423 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_33_33;
#line 423 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_34_34;
#line 423 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_35_35;
#line 423 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_36_36;
#line 423 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_37_37;
#line 423 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_38_38;
#line 423 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_39_39;
#line 423 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_40_40;
#line 423 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_41_41;
#line 423 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_42_42;
#line 423 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_43_43;
#line 423 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_44_44;
#line 423 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_45_45;
#line 423 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_46_46;
#line 423 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_47_47;
#line 423 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_48_48;
#line 423 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_49_49;

#line 417 "llds_out_instr.m"
    {
#line 417 "llds_out_instr.m"
      mercury__io__write_string_3_p_0((MR_String) "\t* (MR_Float *) &(");
    }
#line 418 "llds_out_instr.m"
    {
#line 418 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_data__output_lval_for_assign_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_7, &ll_backend__llds_out__llds_out_instr__Type_10);
    }
#line 419 "llds_out_instr.m"
    {
#line 419 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 419 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_17_17, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_4[1]));
#line 419 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_17_17, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_5_p_0_1));
#line 419 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 419 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_17_17, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__Type_10));
#line 419 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_17_17, 4) = ((MR_Box) ((MR_Integer) 13));
#line 419 "llds_out_instr.m"
    }
#line 419 "llds_out_instr.m"
    {
#line 419 "llds_out_instr.m"
      mercury__require__expect_4_p_0(ll_backend__llds_out__llds_out_instr__V_17_17, (MR_String) "ll_backend.llds_out.llds_out_instr", (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_float_dword_assignment\'/5", (MR_String) "expected word");
    }
#line 420 "llds_out_instr.m"
    {
#line 420 "llds_out_instr.m"
      mercury__io__write_string_3_p_0((MR_String) ") = ");
    }
#line 421 "llds_out_instr.m"
    {
#line 421 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_8, (MR_Integer) 9);
    }
#line 422 "llds_out_instr.m"
    {
#line 422 "llds_out_instr.m"
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
#line 423 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
#line 423 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
#line 423 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
#line 423 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
#line 423 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
#line 423 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
#line 423 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__AutoComments_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 423 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 423 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 423 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 423 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 423 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 423 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 423 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 423 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 423 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 423 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 423 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 423 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 423 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 423 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)));
#line 427 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__AutoComments_11 == (MR_Integer) 0))
#line 428 "llds_out_instr.m"
      {
#line 428 "llds_out_instr.m"
      }
#line 427 "llds_out_instr.m"
    else
#line 425 "llds_out_instr.m"
      {
#line 426 "llds_out_instr.m"
        {
#line 426 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "\t\t/* assigning float dword */\n");
#line 426 "llds_out_instr.m"
          return;
        }
#line 425 "llds_out_instr.m"
      }
#line 413 "llds_out_instr.m"
  }
#line 410 "llds_out_instr.m"
}

#line 396 "llds_out_instr.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__is_aligned_float_dword_assignment_4_p_0(
#line 396 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__InstrA_5,
#line 396 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__InstrB_6,
#line 396 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__LvalA_7,
#line 396 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__Rval_8)
#line 396 "llds_out_instr.m"
{
#line 399 "llds_out_instr.m"
  {
#line 399 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__InstrA_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__InstrA_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 399 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__TypeInfo_33_33;
#line 399 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__RvalA_9;
#line 399 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__LvalB_10;
#line 399 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__RvalB_11;
#line 399 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__MaybeTag_12;
#line 399 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__Address_13;
#line 399 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__Offset_14;
#line 399 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_15_15;
#line 399 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_16_16;
#line 399 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_17_17;
#line 399 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__V_18_18;
#line 399 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_19_19;
#line 399 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_20_20;
#line 399 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_21_21;
#line 399 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__V_22_22;
#line 399 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_23_23;
#line 399 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_24_24;
#line 399 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_25_25;
#line 399 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_26_26;
#line 399 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__V_27_27;
#line 399 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__V_28_28;
#line 399 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_29_29;
#line 399 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_30_30;
#line 399 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_31_31;

#line 400 "llds_out_instr.m"
    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 400 "llds_out_instr.m"
      {
#line 400 "llds_out_instr.m"
        *ll_backend__llds_out__llds_out_instr__LvalA_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__InstrA_5, (MR_Integer) 1)));
#line 400 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__RvalA_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__InstrA_5, (MR_Integer) 2)));
#line 401 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__InstrB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__InstrB_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 401 "llds_out_instr.m"
        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 401 "llds_out_instr.m"
          {
#line 401 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__LvalB_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__InstrB_6, (MR_Integer) 1)));
#line 401 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__RvalB_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__InstrB_6, (MR_Integer) 2)));
#line 402 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__RvalA_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__RvalA_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 402 "llds_out_instr.m"
            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 402 "llds_out_instr.m"
              {
#line 402 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__RvalA_9, (MR_Integer) 1)));
#line 402 "llds_out_instr.m"
                *ll_backend__llds_out__llds_out_instr__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__RvalA_9, (MR_Integer) 2)));
#line 402 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__RvalA_9, (MR_Integer) 3)));
#line 402 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 37))));
#line 399 "llds_out_instr.m"
                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 399 "llds_out_instr.m"
                  {
#line 402 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_16_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__V_16_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 402 "llds_out_instr.m"
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 402 "llds_out_instr.m"
                      {
#line 402 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__V_16_16, (MR_Integer) 1)));
#line 402 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 402 "llds_out_instr.m"
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 402 "llds_out_instr.m"
                          {
#line 402 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_17_17, (MR_Integer) 0)));
#line 402 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_18_18 == (MR_Integer) 0);
#line 399 "llds_out_instr.m"
                            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 399 "llds_out_instr.m"
                              {
#line 403 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__RvalB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__RvalB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 403 "llds_out_instr.m"
                                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 403 "llds_out_instr.m"
                                  {
#line 403 "llds_out_instr.m"
                                    ll_backend__llds_out__llds_out_instr__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__RvalB_11, (MR_Integer) 1)));
#line 403 "llds_out_instr.m"
                                    ll_backend__llds_out__llds_out_instr__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__RvalB_11, (MR_Integer) 2)));
#line 403 "llds_out_instr.m"
                                    ll_backend__llds_out__llds_out_instr__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__RvalB_11, (MR_Integer) 3)));
#line 403 "llds_out_instr.m"
                                    {
#line 403 "llds_out_instr.m"
                                      ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds____Unify____rval_0_0(*ll_backend__llds_out__llds_out_instr__Rval_8, ll_backend__llds_out__llds_out_instr__V_29_29);
                                    }
#line 399 "llds_out_instr.m"
                                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 399 "llds_out_instr.m"
                                      {
#line 403 "llds_out_instr.m"
                                        ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 37))));
#line 399 "llds_out_instr.m"
                                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 399 "llds_out_instr.m"
                                          {
#line 403 "llds_out_instr.m"
                                            ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 403 "llds_out_instr.m"
                                            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 403 "llds_out_instr.m"
                                              {
#line 403 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__V_20_20, (MR_Integer) 1)));
#line 403 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 403 "llds_out_instr.m"
                                                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 403 "llds_out_instr.m"
                                                  {
#line 403 "llds_out_instr.m"
                                                    ll_backend__llds_out__llds_out_instr__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_21_21, (MR_Integer) 0)));
#line 403 "llds_out_instr.m"
                                                    ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_22_22 == (MR_Integer) 1);
#line 399 "llds_out_instr.m"
                                                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 399 "llds_out_instr.m"
                                                      {
#line 404 "llds_out_instr.m"
                                                        ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) *ll_backend__llds_out__llds_out_instr__LvalA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), *ll_backend__llds_out__llds_out_instr__LvalA_7, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 404 "llds_out_instr.m"
                                                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 404 "llds_out_instr.m"
                                                          {
#line 404 "llds_out_instr.m"
                                                            ll_backend__llds_out__llds_out_instr__MaybeTag_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), *ll_backend__llds_out__llds_out_instr__LvalA_7, (MR_Integer) 1)));
#line 404 "llds_out_instr.m"
                                                            ll_backend__llds_out__llds_out_instr__Address_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), *ll_backend__llds_out__llds_out_instr__LvalA_7, (MR_Integer) 2)));
#line 404 "llds_out_instr.m"
                                                            ll_backend__llds_out__llds_out_instr__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), *ll_backend__llds_out__llds_out_instr__LvalA_7, (MR_Integer) 3)));
#line 404 "llds_out_instr.m"
                                                            ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_23_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__V_23_23, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 404 "llds_out_instr.m"
                                                            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 404 "llds_out_instr.m"
                                                              {
#line 404 "llds_out_instr.m"
                                                                ll_backend__llds_out__llds_out_instr__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__V_23_23, (MR_Integer) 1)));
#line 404 "llds_out_instr.m"
                                                                ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 404 "llds_out_instr.m"
                                                                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 404 "llds_out_instr.m"
                                                                  {
#line 404 "llds_out_instr.m"
                                                                    ll_backend__llds_out__llds_out_instr__Offset_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_24_24, (MR_Integer) 0)));
#line 405 "llds_out_instr.m"
                                                                    ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__LvalB_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__LvalB_10, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 405 "llds_out_instr.m"
                                                                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 405 "llds_out_instr.m"
                                                                      {
#line 405 "llds_out_instr.m"
                                                                        ll_backend__llds_out__llds_out_instr__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__LvalB_10, (MR_Integer) 1)));
#line 405 "llds_out_instr.m"
                                                                        ll_backend__llds_out__llds_out_instr__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__LvalB_10, (MR_Integer) 2)));
#line 405 "llds_out_instr.m"
                                                                        ll_backend__llds_out__llds_out_instr__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__LvalB_10, (MR_Integer) 3)));
#line 9664 "ll_backend.llds_out.llds_out_instr.c"
                                                                        ll_backend__llds_out__llds_out_instr__TypeInfo_33_33 = (MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[3];
#line 405 "llds_out_instr.m"
                                                                        {
#line 405 "llds_out_instr.m"
                                                                          ll_backend__llds_out__llds_out_instr__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_instr__TypeInfo_33_33, ((MR_Box) (ll_backend__llds_out__llds_out_instr__MaybeTag_12)), ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_30_30)));
                                                                        }
#line 399 "llds_out_instr.m"
                                                                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 399 "llds_out_instr.m"
                                                                          {
#line 405 "llds_out_instr.m"
                                                                            {
#line 405 "llds_out_instr.m"
                                                                              ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__llds_out__llds_out_instr__Address_13, ll_backend__llds_out__llds_out_instr__V_31_31);
                                                                            }
#line 399 "llds_out_instr.m"
                                                                            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 399 "llds_out_instr.m"
                                                                              {
#line 405 "llds_out_instr.m"
                                                                                ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_25_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__V_25_25, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 405 "llds_out_instr.m"
                                                                                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 405 "llds_out_instr.m"
                                                                                  {
#line 405 "llds_out_instr.m"
                                                                                    ll_backend__llds_out__llds_out_instr__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__V_25_25, (MR_Integer) 1)));
#line 405 "llds_out_instr.m"
                                                                                    ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 405 "llds_out_instr.m"
                                                                                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 405 "llds_out_instr.m"
                                                                                      {
#line 405 "llds_out_instr.m"
                                                                                        ll_backend__llds_out__llds_out_instr__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_26_26, (MR_Integer) 0)));
#line 405 "llds_out_instr.m"
                                                                                        ll_backend__llds_out__llds_out_instr__V_28_28 = (ll_backend__llds_out__llds_out_instr__V_27_27 - ll_backend__llds_out__llds_out_instr__Offset_14);
#line 405 "llds_out_instr.m"
                                                                                        ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_28_28 == (MR_Integer) 1);
#line 399 "llds_out_instr.m"
                                                                                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 408 "llds_out_instr.m"
                                                                                          {
#line 408 "llds_out_instr.m"
                                                                                            return ll_backend__llds_out__llds_out_instr__succeeded = mercury__int__even_1_p_0(ll_backend__llds_out__llds_out_instr__Offset_14);
                                                                                          }
#line 405 "llds_out_instr.m"
                                                                                      }
#line 405 "llds_out_instr.m"
                                                                                  }
#line 399 "llds_out_instr.m"
                                                                              }
#line 399 "llds_out_instr.m"
                                                                          }
#line 405 "llds_out_instr.m"
                                                                      }
#line 404 "llds_out_instr.m"
                                                                  }
#line 404 "llds_out_instr.m"
                                                              }
#line 404 "llds_out_instr.m"
                                                          }
#line 399 "llds_out_instr.m"
                                                      }
#line 403 "llds_out_instr.m"
                                                  }
#line 403 "llds_out_instr.m"
                                              }
#line 399 "llds_out_instr.m"
                                          }
#line 399 "llds_out_instr.m"
                                      }
#line 403 "llds_out_instr.m"
                                  }
#line 399 "llds_out_instr.m"
                              }
#line 402 "llds_out_instr.m"
                          }
#line 402 "llds_out_instr.m"
                      }
#line 399 "llds_out_instr.m"
                  }
#line 402 "llds_out_instr.m"
              }
#line 401 "llds_out_instr.m"
          }
#line 400 "llds_out_instr.m"
      }
#line 399 "llds_out_instr.m"
    return ll_backend__llds_out__llds_out_instr__succeeded;
#line 399 "llds_out_instr.m"
  }
#line 396 "llds_out_instr.m"
}

#line 370 "llds_out_instr.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_p_0_1(
#line 370 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg)
#line 370 "llds_out_instr.m"
{
#line 370 "llds_out_instr.m"
  {
#line 370 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 370 "llds_out_instr.m"
    MR_Box ll_backend__llds_out__llds_out_instr__closure = ll_backend__llds_out__llds_out_instr__closure_arg;

#line 370 "llds_out_instr.m"
    {
#line 370 "llds_out_instr.m"
      return ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_instruction_list_while_block__370__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 4))));
    }
#line 370 "llds_out_instr.m"
    return ll_backend__llds_out__llds_out_instr__succeeded;
#line 370 "llds_out_instr.m"
  }
#line 370 "llds_out_instr.m"
}

#line 358 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_p_0(
#line 358 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 358 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
#line 358 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Label_3,
#line 358 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__ProfInfo_4)
#line 358 "llds_out_instr.m"
{
#line 362 "llds_out_instr.m"
  while (MR_TRUE)
#line 362 "llds_out_instr.m"
    {
#line 362 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 362 "llds_out_instr.m"
      {
#line 362 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 362 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 362 "llds_out_instr.m"
          {
#line 362 "llds_out_instr.m"
          }
#line 362 "llds_out_instr.m"
        else
#line 364 "llds_out_instr.m"
          {
#line 364 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Instr_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
#line 364 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Instrs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
#line 364 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Uinstr_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr_14, (MR_Integer) 0)));
#line 364 "llds_out_instr.m"
            MR_String ll_backend__llds_out__llds_out_instr__Comment_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr_14, (MR_Integer) 1)));
#line 366 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__V_21_21;

#line 366 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 366 "llds_out_instr.m"
            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 366 "llds_out_instr.m"
              {
#line 366 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 1)));
#line 367 "llds_out_instr.m"
                {
#line 367 "llds_out_instr.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_instr", (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction_list_while_block\'/6", (MR_String) "label in block");
#line 367 "llds_out_instr.m"
                  return;
                }
#line 366 "llds_out_instr.m"
              }
#line 366 "llds_out_instr.m"
            else
#line 371 "llds_out_instr.m"
              {
#line 368 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__V_32_32;
#line 368 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__V_78_78;

#line 368 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 368 "llds_out_instr.m"
                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 368 "llds_out_instr.m"
                  {
#line 368 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 1)));
#line 368 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 368 "llds_out_instr.m"
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 368 "llds_out_instr.m"
                      {
#line 368 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_32_32, (MR_Integer) 0)));
#line 368 "llds_out_instr.m"
                        {
#line 368 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_instr__Label_3, ll_backend__llds_out__llds_out_instr__V_78_78);
                        }
#line 368 "llds_out_instr.m"
                      }
#line 368 "llds_out_instr.m"
                  }
#line 371 "llds_out_instr.m"
                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 369 "llds_out_instr.m"
                  {
#line 369 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_35_35;

#line 369 "llds_out_instr.m"
                    {
#line 369 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) "\tcontinue;\n");
                    }
#line 370 "llds_out_instr.m"
                    {
#line 370 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 370 "llds_out_instr.m"
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_35_35, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_4[0]));
#line 370 "llds_out_instr.m"
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_35_35, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_p_0_1));
#line 370 "llds_out_instr.m"
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 370 "llds_out_instr.m"
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_35_35, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__Instrs_15));
#line 370 "llds_out_instr.m"
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_35_35, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 370 "llds_out_instr.m"
                    }
#line 370 "llds_out_instr.m"
                    {
#line 370 "llds_out_instr.m"
                      mercury__require__expect_4_p_0(ll_backend__llds_out__llds_out_instr__V_35_35, (MR_String) "ll_backend.llds_out.llds_out_instr", (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction_list_while_block\'/6", (MR_String) "code after goto");
#line 370 "llds_out_instr.m"
                      return;
                    }
#line 369 "llds_out_instr.m"
                  }
#line 371 "llds_out_instr.m"
                else
#line 388 "llds_out_instr.m"
                  {
#line 388 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__Rval_22;
#line 371 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_40_40;
#line 371 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_79_79;

#line 371 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 371 "llds_out_instr.m"
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 371 "llds_out_instr.m"
                      {
#line 371 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__Rval_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 1)));
#line 371 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 2)));
#line 371 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 371 "llds_out_instr.m"
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 371 "llds_out_instr.m"
                          {
#line 371 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_40_40, (MR_Integer) 0)));
#line 371 "llds_out_instr.m"
                            {
#line 371 "llds_out_instr.m"
                              ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_instr__Label_3, ll_backend__llds_out__llds_out_instr__V_79_79);
                            }
#line 371 "llds_out_instr.m"
                          }
#line 371 "llds_out_instr.m"
                      }
#line 388 "llds_out_instr.m"
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 372 "llds_out_instr.m"
                      {
#line 372 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__AutoComments_23;
#line 375 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_57_57;
#line 375 "llds_out_instr.m"
                        MR_String ll_backend__llds_out__llds_out_instr__V_58_58;
#line 375 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_59_59;
#line 375 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_60_60;
#line 375 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_61_61;
#line 375 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_62_62;
#line 375 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_63_63;
#line 375 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_64_64;
#line 375 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_65_65;
#line 375 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_66_66;
#line 375 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_67_67;
#line 375 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_68_68;
#line 375 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_69_69;
#line 375 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_70_70;
#line 375 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_71_71;
#line 375 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_72_72;
#line 375 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_73_73;
#line 375 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_74_74;
#line 375 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_75_75;
#line 375 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_76_76;

#line 372 "llds_out_instr.m"
                        {
#line 372 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "\tif (");
                        }
#line 373 "llds_out_instr.m"
                        {
#line 373 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_data__output_test_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Rval_22);
                        }
#line 374 "llds_out_instr.m"
                        {
#line 374 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) ")\n\t\tcontinue;\n");
                        }
#line 375 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 0)));
#line 375 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 1)));
#line 375 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 2)));
#line 375 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 3)));
#line 375 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 4)));
#line 375 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 5)));
#line 375 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__AutoComments_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 375 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 375 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 375 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 375 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 375 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 375 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 375 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 375 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 375 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 375 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 375 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 375 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 375 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 375 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)));
#line 377 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__AutoComments_23 == (MR_Integer) 1);
#line 377 "llds_out_instr.m"
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 377 "llds_out_instr.m"
                          {
#line 378 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__succeeded = (strcmp(ll_backend__llds_out__llds_out_instr__Comment_20, (MR_String) "") == 0);
#line 378 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__succeeded = !(ll_backend__llds_out__llds_out_instr__succeeded);
#line 377 "llds_out_instr.m"
                          }
#line 383 "llds_out_instr.m"
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 380 "llds_out_instr.m"
                          {
#line 380 "llds_out_instr.m"
                            {
#line 380 "llds_out_instr.m"
                              mercury__io__write_string_3_p_0((MR_String) "\t\t/* ");
                            }
#line 381 "llds_out_instr.m"
                            {
#line 381 "llds_out_instr.m"
                              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__Comment_20);
                            }
#line 382 "llds_out_instr.m"
                            {
#line 382 "llds_out_instr.m"
                              mercury__io__write_string_3_p_0((MR_String) " */\n");
                            }
#line 380 "llds_out_instr.m"
                          }
#line 383 "llds_out_instr.m"
                        else
#line 382 "llds_out_instr.m"
                          {
#line 382 "llds_out_instr.m"
                          }
#line 386 "llds_out_instr.m"
                        /* direct tailcall eliminated */
#line 386 "llds_out_instr.m"
                        {
#line 386 "llds_out_instr.m"
                          MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Instrs_15;

#line 386 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 386 "llds_out_instr.m"
                        }
#line 386 "llds_out_instr.m"
                        continue;
#line 372 "llds_out_instr.m"
                      }
#line 388 "llds_out_instr.m"
                    else
#line 390 "llds_out_instr.m"
                      {
#line 388 "llds_out_instr.m"
                        MR_Integer ll_backend__llds_out__llds_out_instr__V_24_24;
#line 388 "llds_out_instr.m"
                        MR_Integer ll_backend__llds_out__llds_out_instr__V_25_25;
#line 388 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_26_26;

#line 388 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 388 "llds_out_instr.m"
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 388 "llds_out_instr.m"
                          {
#line 388 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 1)));
#line 388 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 2)));
#line 388 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 3)));
#line 389 "llds_out_instr.m"
                            {
#line 389 "llds_out_instr.m"
                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_instr", (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction_list_while_block\'/6", (MR_String) "block in block");
#line 389 "llds_out_instr.m"
                              return;
                            }
#line 388 "llds_out_instr.m"
                          }
#line 388 "llds_out_instr.m"
                        else
#line 391 "llds_out_instr.m"
                          {
#line 391 "llds_out_instr.m"
                            {
#line 391 "llds_out_instr.m"
                              ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Uinstr_19, ll_backend__llds_out__llds_out_instr__Comment_20, ll_backend__llds_out__llds_out_instr__ProfInfo_4);
                            }
#line 392 "llds_out_instr.m"
                            /* direct tailcall eliminated */
#line 392 "llds_out_instr.m"
                            {
#line 392 "llds_out_instr.m"
                              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Instrs_15;

#line 392 "llds_out_instr.m"
                              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 392 "llds_out_instr.m"
                            }
#line 392 "llds_out_instr.m"
                            continue;
#line 391 "llds_out_instr.m"
                          }
#line 390 "llds_out_instr.m"
                      }
#line 388 "llds_out_instr.m"
                  }
#line 371 "llds_out_instr.m"
              }
#line 364 "llds_out_instr.m"
          }
#line 362 "llds_out_instr.m"
      }
#line 362 "llds_out_instr.m"
      break;
#line 362 "llds_out_instr.m"
    }
#line 358 "llds_out_instr.m"
}

#line 232 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_p_0(
#line 232 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
#line 232 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Component_8,
#line 232 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22,
#line 232 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23)
#line 232 "llds_out_instr.m"
{
#line 238 "llds_out_instr.m"
  {
#line 238 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 238 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__Component_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "llds_out_instr.m"
      *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22;
#line 238 "llds_out_instr.m"
    else
#line 238 "llds_out_instr.m"
      if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Component_8)) == (MR_mktag((MR_Integer) 1))))
#line 238 "llds_out_instr.m"
        {
#line 238 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__Inputs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Component_8, (MR_Integer) 0)));

#line 239 "llds_out_instr.m"
          {
#line 239 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Inputs_11, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23);
#line 239 "llds_out_instr.m"
            return;
          }
#line 238 "llds_out_instr.m"
        }
#line 238 "llds_out_instr.m"
      else
#line 238 "llds_out_instr.m"
        if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Component_8)) == (MR_mktag((MR_Integer) 2))))
#line 242 "llds_out_instr.m"
          {
#line 242 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Outputs_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_instr__Component_8, (MR_Integer) 0)));

#line 243 "llds_out_instr.m"
            {
#line 243 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Outputs_12, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23);
#line 243 "llds_out_instr.m"
              return;
            }
#line 242 "llds_out_instr.m"
          }
#line 238 "llds_out_instr.m"
        else
#line 238 "llds_out_instr.m"
          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Component_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 249 "llds_out_instr.m"
            *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22;
#line 238 "llds_out_instr.m"
          else
#line 238 "llds_out_instr.m"
            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Component_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 248 "llds_out_instr.m"
              *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22;
#line 238 "llds_out_instr.m"
            else
#line 238 "llds_out_instr.m"
              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Component_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 246 "llds_out_instr.m"
                *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22;
#line 238 "llds_out_instr.m"
              else
#line 247 "llds_out_instr.m"
                *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22;
#line 238 "llds_out_instr.m"
  }
#line 232 "llds_out_instr.m"
}

#line 201 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0_2(
#line 201 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg,
#line 201 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 201 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
#line 201 "llds_out_instr.m"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_3,
#line 201 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_4,
#line 201 "llds_out_instr.m"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_5)
#line 201 "llds_out_instr.m"
{
#line 201 "llds_out_instr.m"
  {
#line 201 "llds_out_instr.m"
    MR_Box ll_backend__llds_out__llds_out_instr__closure = ll_backend__llds_out__llds_out_instr__closure_arg;
#line 201 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__conv3_STATE_VARIABLE_DeclSet_23;

#line 201 "llds_out_instr.m"
    {
#line 201 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_2), &ll_backend__llds_out__llds_out_instr__conv3_STATE_VARIABLE_DeclSet_23);
    }
#line 201 "llds_out_instr.m"
    *ll_backend__llds_out__llds_out_instr__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_instr__conv3_STATE_VARIABLE_DeclSet_23));
#line 201 "llds_out_instr.m"
  }
#line 201 "llds_out_instr.m"
}

#line 114 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0_1(
#line 114 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg,
#line 114 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 114 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
#line 114 "llds_out_instr.m"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_3,
#line 114 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_4,
#line 114 "llds_out_instr.m"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_5)
#line 114 "llds_out_instr.m"
{
#line 114 "llds_out_instr.m"
  {
#line 114 "llds_out_instr.m"
    MR_Box ll_backend__llds_out__llds_out_instr__closure = ll_backend__llds_out__llds_out_instr__closure_arg;
#line 114 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__conv0_STATE_VARIABLE_DeclSet_14;

#line 114 "llds_out_instr.m"
    {
#line 114 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__output_record_instruction_decls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_2), &ll_backend__llds_out__llds_out_instr__conv0_STATE_VARIABLE_DeclSet_14);
    }
#line 114 "llds_out_instr.m"
    *ll_backend__llds_out__llds_out_instr__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_instr__conv0_STATE_VARIABLE_DeclSet_14));
#line 114 "llds_out_instr.m"
  }
#line 114 "llds_out_instr.m"
}

#line 95 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0(
#line 95 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
#line 95 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_8,
#line 95 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81,
#line 95 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82)
#line 95 "llds_out_instr.m"
{
#line 100 "llds_out_instr.m"
  {
#line 100 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 100 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__Instr_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 106 "llds_out_instr.m"
      *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
#line 100 "llds_out_instr.m"
    else
#line 100 "llds_out_instr.m"
      if ((ll_backend__llds_out__llds_out_instr__Instr_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 107 "llds_out_instr.m"
        *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
#line 100 "llds_out_instr.m"
      else
#line 100 "llds_out_instr.m"
        if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 1))))
#line 100 "llds_out_instr.m"
          *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
#line 100 "llds_out_instr.m"
        else
#line 100 "llds_out_instr.m"
          if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 2))))
#line 101 "llds_out_instr.m"
            *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
#line 100 "llds_out_instr.m"
          else
#line 100 "llds_out_instr.m"
            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 102 "llds_out_instr.m"
              *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
#line 100 "llds_out_instr.m"
            else
#line 100 "llds_out_instr.m"
              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 117 "llds_out_instr.m"
                {
#line 117 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__Lval_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 117 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__Rval_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
#line 117 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_162_162;

#line 118 "llds_out_instr.m"
                  {
#line 118 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_29, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_162_162);
                  }
#line 119 "llds_out_instr.m"
                  {
#line 119 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_30, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_162_162, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 119 "llds_out_instr.m"
                    return;
                  }
#line 117 "llds_out_instr.m"
                }
#line 100 "llds_out_instr.m"
              else
#line 100 "llds_out_instr.m"
                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 113 "llds_out_instr.m"
                  {
#line 113 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__Instrs_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));
#line 113 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_166_166;
#line 113 "llds_out_instr.m"
                    MR_Integer ll_backend__llds_out__llds_out_instr___TempR_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 113 "llds_out_instr.m"
                    MR_Integer ll_backend__llds_out__llds_out_instr___TempF_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
#line 114 "llds_out_instr.m"
                    MR_Box ll_backend__llds_out__llds_out_instr__conv2_STATE_VARIABLE_DeclSet_82;
#line 114 "llds_out_instr.m"
                    MR_Box ll_backend__llds_out__llds_out_instr__conv1_STATE_VARIABLE_IO_84;

#line 114 "llds_out_instr.m"
                    {
#line 114 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__V_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 114 "llds_out_instr.m"
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_166_166, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_3[0]));
#line 114 "llds_out_instr.m"
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_166_166, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0_1));
#line 114 "llds_out_instr.m"
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_166_166, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 114 "llds_out_instr.m"
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_166_166, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__Info_7));
#line 114 "llds_out_instr.m"
                    }
#line 114 "llds_out_instr.m"
                    {
#line 114 "llds_out_instr.m"
                      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_instr__V_166_166, ll_backend__llds_out__llds_out_instr__Instrs_28, ((MR_Box) (ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81)), &ll_backend__llds_out__llds_out_instr__conv2_STATE_VARIABLE_DeclSet_82, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_instr__conv1_STATE_VARIABLE_IO_84);
                    }
#line 114 "llds_out_instr.m"
                    *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ((MR_Word) ll_backend__llds_out__llds_out_instr__conv2_STATE_VARIABLE_DeclSet_82);
#line 113 "llds_out_instr.m"
                  }
#line 100 "llds_out_instr.m"
                else
#line 100 "llds_out_instr.m"
                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 141 "llds_out_instr.m"
                    {
#line 141 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__Rval_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 141 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr___MaybeLabels_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));

#line 142 "llds_out_instr.m"
                      {
#line 142 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_171, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 142 "llds_out_instr.m"
                        return;
                      }
#line 141 "llds_out_instr.m"
                    }
#line 100 "llds_out_instr.m"
                  else
#line 100 "llds_out_instr.m"
                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 25))))
#line 109 "llds_out_instr.m"
                      *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
#line 100 "llds_out_instr.m"
                    else
#line 100 "llds_out_instr.m"
                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 110 "llds_out_instr.m"
                        *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
#line 100 "llds_out_instr.m"
                      else
#line 100 "llds_out_instr.m"
                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 200 "llds_out_instr.m"
                          {
#line 200 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__Comps_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
#line 200 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_115_115;
#line 200 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 200 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));
#line 200 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 4)));
#line 200 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 5)));
#line 200 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 6)));
#line 200 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 7)));
#line 200 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 8)));
#line 200 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 9)));
#line 200 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 10)));
#line 201 "llds_out_instr.m"
                            MR_Box ll_backend__llds_out__llds_out_instr__conv5_STATE_VARIABLE_DeclSet_82;
#line 201 "llds_out_instr.m"
                            MR_Box ll_backend__llds_out__llds_out_instr__conv4_STATE_VARIABLE_IO_84;

#line 201 "llds_out_instr.m"
                            {
#line 201 "llds_out_instr.m"
                              ll_backend__llds_out__llds_out_instr__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 201 "llds_out_instr.m"
                              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_115_115, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_3[1]));
#line 201 "llds_out_instr.m"
                              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_115_115, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0_2));
#line 201 "llds_out_instr.m"
                              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_115_115, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 201 "llds_out_instr.m"
                              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_115_115, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__Info_7));
#line 201 "llds_out_instr.m"
                            }
#line 201 "llds_out_instr.m"
                            {
#line 201 "llds_out_instr.m"
                              mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0, (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_instr__V_115_115, ll_backend__llds_out__llds_out_instr__Comps_63, ((MR_Box) (ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81)), &ll_backend__llds_out__llds_out_instr__conv5_STATE_VARIABLE_DeclSet_82, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_instr__conv4_STATE_VARIABLE_IO_84);
                            }
#line 201 "llds_out_instr.m"
                            *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ((MR_Word) ll_backend__llds_out__llds_out_instr__conv5_STATE_VARIABLE_DeclSet_82);
#line 200 "llds_out_instr.m"
                          }
#line 100 "llds_out_instr.m"
                        else
#line 100 "llds_out_instr.m"
                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 204 "llds_out_instr.m"
                            {
#line 204 "llds_out_instr.m"
                              MR_Word ll_backend__llds_out__llds_out_instr__Child_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
#line 204 "llds_out_instr.m"
                              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_110_110;
#line 204 "llds_out_instr.m"
                              MR_Word ll_backend__llds_out__llds_out_instr__V_112_112;
#line 204 "llds_out_instr.m"
                              MR_Word ll_backend__llds_out__llds_out_instr__Lval_182 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 205 "llds_out_instr.m"
                              {
#line 205 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_182, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_110_110);
                              }
#line 206 "llds_out_instr.m"
                              {
#line 206 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 206 "llds_out_instr.m"
                                MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_112_112, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__Child_72));
#line 206 "llds_out_instr.m"
                              }
#line 206 "llds_out_instr.m"
                              {
#line 206 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__V_112_112, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_110_110, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 206 "llds_out_instr.m"
                                return;
                              }
#line 204 "llds_out_instr.m"
                            }
#line 100 "llds_out_instr.m"
                          else
#line 100 "llds_out_instr.m"
                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 188 "llds_out_instr.m"
                              {
#line 188 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__Rval_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 189 "llds_out_instr.m"
                                {
#line 189 "llds_out_instr.m"
                                  ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_179, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 189 "llds_out_instr.m"
                                  return;
                                }
#line 188 "llds_out_instr.m"
                              }
#line 100 "llds_out_instr.m"
                            else
#line 100 "llds_out_instr.m"
                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 138 "llds_out_instr.m"
                                {
#line 138 "llds_out_instr.m"
                                  MR_Word ll_backend__llds_out__llds_out_instr__CodeAddr_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 139 "llds_out_instr.m"
                                  {
#line 139 "llds_out_instr.m"
                                    ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__CodeAddr_40, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 139 "llds_out_instr.m"
                                    return;
                                  }
#line 138 "llds_out_instr.m"
                                }
#line 100 "llds_out_instr.m"
                              else
#line 100 "llds_out_instr.m"
                                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 144 "llds_out_instr.m"
                                  {
#line 144 "llds_out_instr.m"
                                    MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_144_144;
#line 144 "llds_out_instr.m"
                                    MR_Word ll_backend__llds_out__llds_out_instr__Rval_172 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 144 "llds_out_instr.m"
                                    MR_Word ll_backend__llds_out__llds_out_instr__Target_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));

#line 145 "llds_out_instr.m"
                                    {
#line 145 "llds_out_instr.m"
                                      ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_172, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_144_144);
                                    }
#line 146 "llds_out_instr.m"
                                    {
#line 146 "llds_out_instr.m"
                                      ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Target_173, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_144_144, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 146 "llds_out_instr.m"
                                      return;
                                    }
#line 144 "llds_out_instr.m"
                                  }
#line 100 "llds_out_instr.m"
                                else
#line 100 "llds_out_instr.m"
                                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 155 "llds_out_instr.m"
                                    {
#line 155 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__MaybeRegionRval_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 7)));
#line 155 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__MaybeReuse_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 8)));
#line 155 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_130_130;
#line 155 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_132_132;
#line 155 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_134_134;
#line 155 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__Lval_176 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 155 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__Rval_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 4)));
#line 154 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr___Tag_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
#line 154 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));
#line 154 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 5)));
#line 154 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 6)));

#line 156 "llds_out_instr.m"
                                      {
#line 156 "llds_out_instr.m"
                                        ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_176, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_130_130);
                                      }
#line 157 "llds_out_instr.m"
                                      {
#line 157 "llds_out_instr.m"
                                        ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_177, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_130_130, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_132_132);
                                      }
#line 161 "llds_out_instr.m"
                                      if ((ll_backend__llds_out__llds_out_instr__MaybeRegionRval_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 162 "llds_out_instr.m"
                                        ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_134_134 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_132_132;
#line 161 "llds_out_instr.m"
                                      else
#line 159 "llds_out_instr.m"
                                        {
#line 159 "llds_out_instr.m"
                                          MR_Word ll_backend__llds_out__llds_out_instr__RegionRval_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeRegionRval_46, (MR_Integer) 0)));

#line 160 "llds_out_instr.m"
                                          {
#line 160 "llds_out_instr.m"
                                            ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__RegionRval_48, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_132_132, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_134_134);
                                          }
#line 159 "llds_out_instr.m"
                                        }
#line 173 "llds_out_instr.m"
                                      if ((ll_backend__llds_out__llds_out_instr__MaybeReuse_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 174 "llds_out_instr.m"
                                        *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_134_134;
#line 173 "llds_out_instr.m"
                                      else
#line 165 "llds_out_instr.m"
                                        {
#line 165 "llds_out_instr.m"
                                          MR_Word ll_backend__llds_out__llds_out_instr__ReuseRval_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeReuse_47, (MR_Integer) 0)));
#line 165 "llds_out_instr.m"
                                          MR_Word ll_backend__llds_out__llds_out_instr__MaybeFlagLval_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeReuse_47, (MR_Integer) 1)));
#line 165 "llds_out_instr.m"
                                          MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_136_136;

#line 166 "llds_out_instr.m"
                                          {
#line 166 "llds_out_instr.m"
                                            ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__ReuseRval_49, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_134_134, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_136_136);
                                          }
#line 170 "llds_out_instr.m"
                                          if ((ll_backend__llds_out__llds_out_instr__MaybeFlagLval_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 171 "llds_out_instr.m"
                                            *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_136_136;
#line 170 "llds_out_instr.m"
                                          else
#line 168 "llds_out_instr.m"
                                            {
#line 168 "llds_out_instr.m"
                                              MR_Word ll_backend__llds_out__llds_out_instr__FlagLval_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeFlagLval_50, (MR_Integer) 0)));

#line 169 "llds_out_instr.m"
                                              {
#line 169 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__FlagLval_51, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_136_136, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 169 "llds_out_instr.m"
                                                return;
                                              }
#line 168 "llds_out_instr.m"
                                            }
#line 165 "llds_out_instr.m"
                                        }
#line 155 "llds_out_instr.m"
                                    }
#line 100 "llds_out_instr.m"
                                  else
#line 100 "llds_out_instr.m"
                                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 24))))
#line 108 "llds_out_instr.m"
                                      *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
#line 100 "llds_out_instr.m"
                                    else
#line 100 "llds_out_instr.m"
                                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 181 "llds_out_instr.m"
                                        {
#line 181 "llds_out_instr.m"
                                          MR_Word ll_backend__llds_out__llds_out_instr__Lval_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 180 "llds_out_instr.m"
                                          MR_Integer ll_backend__llds_out__llds_out_instr___NumBranches_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
#line 180 "llds_out_instr.m"
                                          MR_Integer ll_backend__llds_out__llds_out_instr___ConjIdSlotNum_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));

#line 182 "llds_out_instr.m"
                                          {
#line 182 "llds_out_instr.m"
                                            ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_178, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 182 "llds_out_instr.m"
                                            return;
                                          }
#line 181 "llds_out_instr.m"
                                        }
#line 100 "llds_out_instr.m"
                                      else
#line 100 "llds_out_instr.m"
                                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 208 "llds_out_instr.m"
                                          {
#line 208 "llds_out_instr.m"
                                            MR_Word ll_backend__llds_out__llds_out_instr__Label_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
#line 208 "llds_out_instr.m"
                                            MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_105_105;
#line 208 "llds_out_instr.m"
                                            MR_Word ll_backend__llds_out__llds_out_instr__V_107_107;
#line 208 "llds_out_instr.m"
                                            MR_Word ll_backend__llds_out__llds_out_instr__Lval_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 209 "llds_out_instr.m"
                                            {
#line 209 "llds_out_instr.m"
                                              ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_183, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_105_105);
                                            }
#line 210 "llds_out_instr.m"
                                            {
#line 210 "llds_out_instr.m"
                                              ll_backend__llds_out__llds_out_instr__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 210 "llds_out_instr.m"
                                              MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_107_107, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__Label_73));
#line 210 "llds_out_instr.m"
                                            }
#line 210 "llds_out_instr.m"
                                            {
#line 210 "llds_out_instr.m"
                                              ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__V_107_107, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_105_105, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 210 "llds_out_instr.m"
                                              return;
                                            }
#line 208 "llds_out_instr.m"
                                          }
#line 100 "llds_out_instr.m"
                                        else
#line 100 "llds_out_instr.m"
                                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 121 "llds_out_instr.m"
                                            {
#line 121 "llds_out_instr.m"
                                              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_158_158;
#line 121 "llds_out_instr.m"
                                              MR_Word ll_backend__llds_out__llds_out_instr__Lval_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 121 "llds_out_instr.m"
                                              MR_Word ll_backend__llds_out__llds_out_instr__Rval_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));

#line 122 "llds_out_instr.m"
                                              {
#line 122 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_169, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_158_158);
                                              }
#line 123 "llds_out_instr.m"
                                              {
#line 123 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_170, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_158_158, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 123 "llds_out_instr.m"
                                                return;
                                              }
#line 121 "llds_out_instr.m"
                                            }
#line 100 "llds_out_instr.m"
                                          else
#line 100 "llds_out_instr.m"
                                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 103 "llds_out_instr.m"
                                              *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
#line 100 "llds_out_instr.m"
                                            else
#line 100 "llds_out_instr.m"
                                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 212 "llds_out_instr.m"
                                                {
#line 212 "llds_out_instr.m"
                                                  MR_Word ll_backend__llds_out__llds_out_instr__LCLval_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
#line 212 "llds_out_instr.m"
                                                  MR_Integer ll_backend__llds_out__llds_out_instr__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 213 "llds_out_instr.m"
                                                  {
#line 213 "llds_out_instr.m"
                                                    ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__LCLval_75, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 213 "llds_out_instr.m"
                                                    return;
                                                  }
#line 212 "llds_out_instr.m"
                                                }
#line 100 "llds_out_instr.m"
                                              else
#line 100 "llds_out_instr.m"
                                                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 227 "llds_out_instr.m"
                                                  {
#line 227 "llds_out_instr.m"
                                                    MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_85_85;
#line 227 "llds_out_instr.m"
                                                    MR_Word ll_backend__llds_out__llds_out_instr__LCRval_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 227 "llds_out_instr.m"
                                                    MR_Word ll_backend__llds_out__llds_out_instr__LCSRval_186 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));

#line 228 "llds_out_instr.m"
                                                    {
#line 228 "llds_out_instr.m"
                                                      ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__LCRval_185, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_85_85);
                                                    }
#line 229 "llds_out_instr.m"
                                                    {
#line 229 "llds_out_instr.m"
                                                      ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__LCSRval_186, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_85_85, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 229 "llds_out_instr.m"
                                                      return;
                                                    }
#line 227 "llds_out_instr.m"
                                                  }
#line 100 "llds_out_instr.m"
                                                else
#line 100 "llds_out_instr.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 221 "llds_out_instr.m"
                                                    {
#line 221 "llds_out_instr.m"
                                                      MR_Word ll_backend__llds_out__llds_out_instr__LCSRval_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
#line 221 "llds_out_instr.m"
                                                      MR_Word ll_backend__llds_out__llds_out_instr__ChildLabel_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));
#line 221 "llds_out_instr.m"
                                                      MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_89_89;
#line 221 "llds_out_instr.m"
                                                      MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_91_91;
#line 221 "llds_out_instr.m"
                                                      MR_Word ll_backend__llds_out__llds_out_instr__V_93_93;
#line 221 "llds_out_instr.m"
                                                      MR_Word ll_backend__llds_out__llds_out_instr__LCRval_184 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 222 "llds_out_instr.m"
                                                      {
#line 222 "llds_out_instr.m"
                                                        ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__LCRval_184, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_89_89);
                                                      }
#line 223 "llds_out_instr.m"
                                                      {
#line 223 "llds_out_instr.m"
                                                        ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__LCSRval_79, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_89_89, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_91_91);
                                                      }
#line 224 "llds_out_instr.m"
                                                      {
#line 224 "llds_out_instr.m"
                                                        ll_backend__llds_out__llds_out_instr__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 224 "llds_out_instr.m"
                                                        MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_93_93, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__ChildLabel_80));
#line 224 "llds_out_instr.m"
                                                      }
#line 224 "llds_out_instr.m"
                                                      {
#line 224 "llds_out_instr.m"
                                                        ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__V_93_93, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_91_91, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 224 "llds_out_instr.m"
                                                        return;
                                                      }
#line 221 "llds_out_instr.m"
                                                    }
#line 100 "llds_out_instr.m"
                                                  else
#line 100 "llds_out_instr.m"
                                                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 215 "llds_out_instr.m"
                                                      {
#line 215 "llds_out_instr.m"
                                                        MR_Word ll_backend__llds_out__llds_out_instr__LCRval_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 215 "llds_out_instr.m"
                                                        MR_Word ll_backend__llds_out__llds_out_instr__LCSLval_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
#line 215 "llds_out_instr.m"
                                                        MR_Word ll_backend__llds_out__llds_out_instr__InternalLabel_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));
#line 215 "llds_out_instr.m"
                                                        MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_96_96;
#line 215 "llds_out_instr.m"
                                                        MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_98_98;
#line 215 "llds_out_instr.m"
                                                        MR_Word ll_backend__llds_out__llds_out_instr__V_100_100;

#line 216 "llds_out_instr.m"
                                                        {
#line 216 "llds_out_instr.m"
                                                          ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__LCRval_76, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_96_96);
                                                        }
#line 217 "llds_out_instr.m"
                                                        {
#line 217 "llds_out_instr.m"
                                                          ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__LCSLval_77, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_96_96, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_98_98);
                                                        }
#line 218 "llds_out_instr.m"
                                                        {
#line 218 "llds_out_instr.m"
                                                          ll_backend__llds_out__llds_out_instr__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 218 "llds_out_instr.m"
                                                          MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_100_100, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__InternalLabel_78));
#line 218 "llds_out_instr.m"
                                                        }
#line 218 "llds_out_instr.m"
                                                        {
#line 218 "llds_out_instr.m"
                                                          ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__V_100_100, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_98_98, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 218 "llds_out_instr.m"
                                                          return;
                                                        }
#line 215 "llds_out_instr.m"
                                                      }
#line 100 "llds_out_instr.m"
                                                    else
#line 100 "llds_out_instr.m"
                                                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 125 "llds_out_instr.m"
                                                        {
#line 125 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__Target_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 125 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__ContLabel_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
#line 125 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_154_154;
#line 125 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));
#line 125 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 4)));
#line 125 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 5)));
#line 125 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 6)));

#line 126 "llds_out_instr.m"
                                                          {
#line 126 "llds_out_instr.m"
                                                            ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Target_31, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_154_154);
                                                          }
#line 127 "llds_out_instr.m"
                                                          {
#line 127 "llds_out_instr.m"
                                                            ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__ContLabel_32, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_154_154, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 127 "llds_out_instr.m"
                                                            return;
                                                          }
#line 125 "llds_out_instr.m"
                                                        }
#line 100 "llds_out_instr.m"
                                                      else
#line 100 "llds_out_instr.m"
                                                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 181 "llds_out_instr.m"
                                                          {
#line 181 "llds_out_instr.m"
                                                            MR_Word ll_backend__llds_out__llds_out_instr__Lval_203 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 182 "llds_out_instr.m"
                                                            {
#line 182 "llds_out_instr.m"
                                                              ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_203, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 182 "llds_out_instr.m"
                                                              return;
                                                            }
#line 181 "llds_out_instr.m"
                                                          }
#line 100 "llds_out_instr.m"
                                                        else
#line 100 "llds_out_instr.m"
                                                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 181 "llds_out_instr.m"
                                                            {
#line 181 "llds_out_instr.m"
                                                              MR_Word ll_backend__llds_out__llds_out_instr__Lval_204 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 182 "llds_out_instr.m"
                                                              {
#line 182 "llds_out_instr.m"
                                                                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_204, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 182 "llds_out_instr.m"
                                                                return;
                                                              }
#line 181 "llds_out_instr.m"
                                                            }
#line 100 "llds_out_instr.m"
                                                          else
#line 100 "llds_out_instr.m"
                                                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 129 "llds_out_instr.m"
                                                              {
#line 129 "llds_out_instr.m"
                                                                MR_Word ll_backend__llds_out__llds_out_instr__MaybeFailureContinuation_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
#line 129 "llds_out_instr.m"
                                                                MR_Word ll_backend__llds_out__llds_out_instr___FrameInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 134 "llds_out_instr.m"
                                                                if ((ll_backend__llds_out__llds_out_instr__MaybeFailureContinuation_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 135 "llds_out_instr.m"
                                                                  *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
#line 134 "llds_out_instr.m"
                                                                else
#line 131 "llds_out_instr.m"
                                                                  {
#line 131 "llds_out_instr.m"
                                                                    MR_Word ll_backend__llds_out__llds_out_instr__FailureContinuation_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeFailureContinuation_38, (MR_Integer) 0)));

#line 132 "llds_out_instr.m"
                                                                    {
#line 132 "llds_out_instr.m"
                                                                      ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__FailureContinuation_39, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 132 "llds_out_instr.m"
                                                                      return;
                                                                    }
#line 131 "llds_out_instr.m"
                                                                  }
#line 129 "llds_out_instr.m"
                                                              }
#line 100 "llds_out_instr.m"
                                                            else
#line 100 "llds_out_instr.m"
                                                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 188 "llds_out_instr.m"
                                                                {
#line 188 "llds_out_instr.m"
                                                                  MR_Word ll_backend__llds_out__llds_out_instr__Rval_205 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 189 "llds_out_instr.m"
                                                                  {
#line 189 "llds_out_instr.m"
                                                                    ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_205, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 189 "llds_out_instr.m"
                                                                    return;
                                                                  }
#line 188 "llds_out_instr.m"
                                                                }
#line 100 "llds_out_instr.m"
                                                              else
#line 100 "llds_out_instr.m"
                                                                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 104 "llds_out_instr.m"
                                                                  *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
#line 100 "llds_out_instr.m"
                                                                else
#line 100 "llds_out_instr.m"
                                                                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 192 "llds_out_instr.m"
                                                                    {
#line 192 "llds_out_instr.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_instr__IdRval_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));
#line 192 "llds_out_instr.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_instr__NumLval_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 4)));
#line 192 "llds_out_instr.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_instr__AddrLval_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 5)));
#line 192 "llds_out_instr.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_120_120;
#line 192 "llds_out_instr.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_122_122;
#line 191 "llds_out_instr.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_instr___FillOp_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 191 "llds_out_instr.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_instr___EmbeddedFrame_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));

#line 193 "llds_out_instr.m"
                                                                      {
#line 193 "llds_out_instr.m"
                                                                        ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__IdRval_57, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_120_120);
                                                                      }
#line 194 "llds_out_instr.m"
                                                                      {
#line 194 "llds_out_instr.m"
                                                                        ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__NumLval_58, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_120_120, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_122_122);
                                                                      }
#line 195 "llds_out_instr.m"
                                                                      {
#line 195 "llds_out_instr.m"
                                                                        ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__AddrLval_59, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_122_122, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 195 "llds_out_instr.m"
                                                                        return;
                                                                      }
#line 192 "llds_out_instr.m"
                                                                    }
#line 100 "llds_out_instr.m"
                                                                  else
#line 100 "llds_out_instr.m"
                                                                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 197 "llds_out_instr.m"
                                                                      {
#line 197 "llds_out_instr.m"
                                                                        MR_Word ll_backend__llds_out__llds_out_instr__ValueRval_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));
#line 197 "llds_out_instr.m"
                                                                        MR_Word ll_backend__llds_out__llds_out_instr___SetOp_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 197 "llds_out_instr.m"
                                                                        MR_Word ll_backend__llds_out__llds_out_instr___EmbeddedFrame_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));

#line 198 "llds_out_instr.m"
                                                                        {
#line 198 "llds_out_instr.m"
                                                                          ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__ValueRval_61, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 198 "llds_out_instr.m"
                                                                          return;
                                                                        }
#line 197 "llds_out_instr.m"
                                                                      }
#line 100 "llds_out_instr.m"
                                                                    else
#line 100 "llds_out_instr.m"
                                                                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 188 "llds_out_instr.m"
                                                                        {
#line 188 "llds_out_instr.m"
                                                                          MR_Word ll_backend__llds_out__llds_out_instr__Rval_206 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 187 "llds_out_instr.m"
                                                                          MR_Word ll_backend__llds_out__llds_out_instr___Reason_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));

#line 189 "llds_out_instr.m"
                                                                          {
#line 189 "llds_out_instr.m"
                                                                            ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_206, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 189 "llds_out_instr.m"
                                                                            return;
                                                                          }
#line 188 "llds_out_instr.m"
                                                                        }
#line 100 "llds_out_instr.m"
                                                                      else
#line 100 "llds_out_instr.m"
                                                                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 188 "llds_out_instr.m"
                                                                          {
#line 188 "llds_out_instr.m"
                                                                            MR_Word ll_backend__llds_out__llds_out_instr__Rval_207 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 189 "llds_out_instr.m"
                                                                            {
#line 189 "llds_out_instr.m"
                                                                              ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_207, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 189 "llds_out_instr.m"
                                                                              return;
                                                                            }
#line 188 "llds_out_instr.m"
                                                                          }
#line 100 "llds_out_instr.m"
                                                                        else
#line 100 "llds_out_instr.m"
                                                                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 151 "llds_out_instr.m"
                                                                            {
#line 151 "llds_out_instr.m"
                                                                              MR_Word ll_backend__llds_out__llds_out_instr__Lval_175 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 152 "llds_out_instr.m"
                                                                              {
#line 152 "llds_out_instr.m"
                                                                                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_175, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 152 "llds_out_instr.m"
                                                                                return;
                                                                              }
#line 151 "llds_out_instr.m"
                                                                            }
#line 100 "llds_out_instr.m"
                                                                          else
#line 100 "llds_out_instr.m"
                                                                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 148 "llds_out_instr.m"
                                                                              {
#line 148 "llds_out_instr.m"
                                                                                MR_Word ll_backend__llds_out__llds_out_instr__Lval_174 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 149 "llds_out_instr.m"
                                                                                {
#line 149 "llds_out_instr.m"
                                                                                  ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_174, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 149 "llds_out_instr.m"
                                                                                  return;
                                                                                }
#line 148 "llds_out_instr.m"
                                                                              }
#line 100 "llds_out_instr.m"
                                                                            else
#line 100 "llds_out_instr.m"
                                                                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 181 "llds_out_instr.m"
                                                                                {
#line 181 "llds_out_instr.m"
                                                                                  MR_Word ll_backend__llds_out__llds_out_instr__Lval_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 182 "llds_out_instr.m"
                                                                                  {
#line 182 "llds_out_instr.m"
                                                                                    ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_208, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 182 "llds_out_instr.m"
                                                                                    return;
                                                                                  }
#line 181 "llds_out_instr.m"
                                                                                }
#line 100 "llds_out_instr.m"
                                                                              else
#line 105 "llds_out_instr.m"
                                                                                *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
#line 100 "llds_out_instr.m"
  }
#line 95 "llds_out_instr.m"
}

#line 49 "llds_out_instr.m"
void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_debug_instruction_4_p_0(
#line 49 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 49 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_6)
#line 49 "llds_out_instr.m"
{
#line 452 "llds_out_instr.m"
  {
#line 452 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 452 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__ContLabelSet_8;
#line 452 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__DummyModule_9;
#line 452 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__InitialProcIdInt_11;
#line 452 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__ProcLabel_12;
#line 452 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__ProfInfo_13;
#line 452 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__V_17_17;
#line 452 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_21_21;

#line 453 "llds_out_instr.m"
    {
#line 453 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__ContLabelSet_8 = mercury__set_tree234__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0);
    }
#line 454 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__DummyModule_9 = (MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_2[0];
#line 456 "llds_out_instr.m"
    {
#line 456 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__V_17_17 = hlds__hlds_pred__initial_proc_id_0_f_0();
    }
#line 456 "llds_out_instr.m"
    {
#line 456 "llds_out_instr.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__llds_out__llds_out_instr__V_17_17, &ll_backend__llds_out__llds_out_instr__InitialProcIdInt_11);
    }
#line 457 "llds_out_instr.m"
    {
#line 457 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__ProcLabel_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 457 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_12, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__DummyModule_9));
#line 457 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_12, 1) = ((MR_Box) ((MR_Integer) 0));
#line 457 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_12, 2) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__DummyModule_9));
#line 457 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_12, 3) = ((MR_Box) ((MR_String) "DEBUG"));
#line 457 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_12, 4) = ((MR_Box) ((MR_Integer) 0));
#line 457 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_12, 5) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__InitialProcIdInt_11));
#line 457 "llds_out_instr.m"
    }
#line 459 "llds_out_instr.m"
    {
#line 459 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "llds_out_instr.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_21_21, 0) = ((MR_Box) ((MR_Integer) 1));
#line 459 "llds_out_instr.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_21_21, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__ProcLabel_12));
#line 459 "llds_out_instr.m"
    }
#line 459 "llds_out_instr.m"
    {
#line 459 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__ProfInfo_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 459 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProfInfo_13, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_21_21));
#line 459 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProfInfo_13, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__ContLabelSet_8));
#line 459 "llds_out_instr.m"
    }
#line 460 "llds_out_instr.m"
    {
#line 460 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Instr_6, ll_backend__llds_out__llds_out_instr__ProfInfo_13);
#line 460 "llds_out_instr.m"
      return;
    }
#line 452 "llds_out_instr.m"
  }
#line 49 "llds_out_instr.m"
}

#line 43 "llds_out_instr.m"
void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_p_0(
#line 43 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
#line 43 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_7,
#line 43 "llds_out_instr.m"
  MR_String ll_backend__llds_out__llds_out_instr__Comment_8)
#line 43 "llds_out_instr.m"
{
#line 439 "llds_out_instr.m"
  {
#line 439 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 439 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__ContLabelSet_10;
#line 439 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__DummyModule_11;
#line 439 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__InitialProcIdInt_13;
#line 439 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__ProcLabel_14;
#line 439 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__ProfInfo_15;
#line 439 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__V_19_19;
#line 439 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_23_23;
#line 439 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__AutoComments_34;
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_44_44;
#line 471 "llds_out_instr.m"
    MR_String ll_backend__llds_out__llds_out_instr__V_45_45;
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_46_46;
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_47_47;
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_48_48;
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_49_49;
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_50_50;
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_51_51;
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_52_52;
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_53_53;
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_54_54;
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_55_55;
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_56_56;
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_57_57;
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_58_58;
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_59_59;
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_60_60;
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_61_61;
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_62_62;
#line 471 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_63_63;

#line 440 "llds_out_instr.m"
    {
#line 440 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__ContLabelSet_10 = mercury__set_tree234__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0);
    }
#line 441 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__DummyModule_11 = (MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_2[0];
#line 443 "llds_out_instr.m"
    {
#line 443 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__V_19_19 = hlds__hlds_pred__initial_proc_id_0_f_0();
    }
#line 443 "llds_out_instr.m"
    {
#line 443 "llds_out_instr.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__llds_out__llds_out_instr__V_19_19, &ll_backend__llds_out__llds_out_instr__InitialProcIdInt_13);
    }
#line 444 "llds_out_instr.m"
    {
#line 444 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__ProcLabel_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 444 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_14, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__DummyModule_11));
#line 444 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_14, 1) = ((MR_Box) ((MR_Integer) 0));
#line 444 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_14, 2) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__DummyModule_11));
#line 444 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_14, 3) = ((MR_Box) ((MR_String) "DEBUG"));
#line 444 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_14, 4) = ((MR_Box) ((MR_Integer) 0));
#line 444 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_14, 5) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__InitialProcIdInt_13));
#line 444 "llds_out_instr.m"
    }
#line 446 "llds_out_instr.m"
    {
#line 446 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "llds_out_instr.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_23_23, 0) = ((MR_Box) ((MR_Integer) 1));
#line 446 "llds_out_instr.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_23_23, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__ProcLabel_14));
#line 446 "llds_out_instr.m"
    }
#line 446 "llds_out_instr.m"
    {
#line 446 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__ProfInfo_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 446 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProfInfo_15, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_23_23));
#line 446 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProfInfo_15, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__ContLabelSet_10));
#line 446 "llds_out_instr.m"
    }
#line 471 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
#line 471 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
#line 471 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
#line 471 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
#line 471 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
#line 471 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
#line 471 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__AutoComments_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 471 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 471 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)));
#line 483 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__AutoComments_34 == (MR_Integer) 0))
#line 480 "llds_out_instr.m"
      {
#line 476 "llds_out_instr.m"
        if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 1))))
#line 475 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_instr__succeeded = MR_TRUE;
#line 476 "llds_out_instr.m"
        else
#line 476 "llds_out_instr.m"
          if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 2))))
#line 476 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__succeeded = MR_TRUE;
#line 476 "llds_out_instr.m"
          else
#line 476 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__succeeded = MR_FALSE;
#line 480 "llds_out_instr.m"
        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 476 "llds_out_instr.m"
          {
#line 476 "llds_out_instr.m"
          }
#line 480 "llds_out_instr.m"
        else
#line 481 "llds_out_instr.m"
          {
#line 481 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Instr_7, ll_backend__llds_out__llds_out_instr__ProfInfo_15);
#line 481 "llds_out_instr.m"
            return;
          }
#line 480 "llds_out_instr.m"
      }
#line 483 "llds_out_instr.m"
    else
#line 484 "llds_out_instr.m"
      {
#line 485 "llds_out_instr.m"
        {
#line 485 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Instr_7, ll_backend__llds_out__llds_out_instr__ProfInfo_15);
        }
#line 486 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__succeeded = (strcmp(ll_backend__llds_out__llds_out_instr__Comment_8, (MR_String) "") == 0);
#line 488 "llds_out_instr.m"
        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 486 "llds_out_instr.m"
          {
#line 486 "llds_out_instr.m"
          }
#line 488 "llds_out_instr.m"
        else
#line 489 "llds_out_instr.m"
          {
#line 489 "llds_out_instr.m"
            {
#line 489 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "\t\t/* ");
            }
#line 490 "llds_out_instr.m"
            {
#line 490 "llds_out_instr.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__Comment_8);
            }
#line 491 "llds_out_instr.m"
            {
#line 491 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) " */\n");
#line 491 "llds_out_instr.m"
              return;
            }
#line 489 "llds_out_instr.m"
          }
#line 484 "llds_out_instr.m"
      }
#line 439 "llds_out_instr.m"
  }
#line 43 "llds_out_instr.m"
}

#line 36 "llds_out_instr.m"
void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_7_p_0(
#line 36 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 36 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
#line 36 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__ProfInfo_3,
#line 36 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__WhileSet_4,
#line 36 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0_5)
#line 36 "llds_out_instr.m"
{
#line 259 "llds_out_instr.m"
  while (MR_TRUE)
#line 259 "llds_out_instr.m"
    {
#line 259 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 259 "llds_out_instr.m"
      {
#line 259 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 259 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 259 "llds_out_instr.m"
          {
#line 259 "llds_out_instr.m"
          }
#line 259 "llds_out_instr.m"
        else
#line 261 "llds_out_instr.m"
          {
#line 261 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Instr_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
#line 261 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Instrs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
#line 261 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Uinstr_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr_16, (MR_Integer) 0)));
#line 261 "llds_out_instr.m"
            MR_String ll_backend__llds_out__llds_out_instr__Comment_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr_16, (MR_Integer) 1)));
#line 291 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Label_24;

#line 263 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 263 "llds_out_instr.m"
            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 263 "llds_out_instr.m"
              {
#line 263 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__Label_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_22, (MR_Integer) 1)));
#line 264 "llds_out_instr.m"
                {
#line 264 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__InternalLabelToLayoutMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 2)));
#line 264 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_27;
#line 264 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 0)));
#line 264 "llds_out_instr.m"
                  MR_String ll_backend__llds_out__llds_out_instr__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 1)));
#line 264 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 3)));
#line 264 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 4)));
#line 264 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 5)));
#line 264 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_61_61 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 264 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 264 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 264 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 264 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 264 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 264 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 264 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 264 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 264 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 264 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 264 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 264 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 264 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 264 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)));
#line 265 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_26_26;
#line 265 "llds_out_instr.m"
                  MR_Box ll_backend__llds_out__llds_out_instr__conv0_V_26_26;

#line 265 "llds_out_instr.m"
                  {
#line 265 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__llds_out__llds_out_instr__InternalLabelToLayoutMap_25, ((MR_Box) (ll_backend__llds_out__llds_out_instr__Label_24)), &ll_backend__llds_out__llds_out_instr__conv0_V_26_26);
                  }
#line 265 "llds_out_instr.m"
                  if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 265 "llds_out_instr.m"
                    {
#line 265 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__V_26_26 = ((MR_Word) ll_backend__llds_out__llds_out_instr__conv0_V_26_26);
#line 265 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__succeeded = MR_TRUE;
#line 265 "llds_out_instr.m"
                    }
#line 267 "llds_out_instr.m"
                  if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 266 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_27 = (MR_Integer) 1;
#line 267 "llds_out_instr.m"
                  else
#line 268 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_27 = (MR_Integer) 0;
#line 271 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0_5 == (MR_Integer) 1);
#line 271 "llds_out_instr.m"
                  if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 272 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_27 == (MR_Integer) 1);
#line 276 "llds_out_instr.m"
                  if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 275 "llds_out_instr.m"
                    {
#line 275 "llds_out_instr.m"
                      {
#line 275 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0((MR_String) "\tMR_dummy_function_call();\n");
                      }
#line 275 "llds_out_instr.m"
                    }
#line 276 "llds_out_instr.m"
                  else
#line 275 "llds_out_instr.m"
                    {
#line 275 "llds_out_instr.m"
                    }
#line 279 "llds_out_instr.m"
                  {
#line 279 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Uinstr_22, ll_backend__llds_out__llds_out_instr__Comment_23, ll_backend__llds_out__llds_out_instr__ProfInfo_3);
                  }
#line 280 "llds_out_instr.m"
                  {
#line 280 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__llds_out__llds_out_instr__WhileSet_4, ((MR_Box) (ll_backend__llds_out__llds_out_instr__Label_24)));
                  }
#line 287 "llds_out_instr.m"
                  if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 281 "llds_out_instr.m"
                    {
#line 281 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__AfterWhileInstrs_28;

#line 281 "llds_out_instr.m"
                      {
#line 281 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0((MR_String) "\twhile (1) {\n");
                      }
#line 282 "llds_out_instr.m"
                      {
#line 282 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_115_116_114_117_99_116_105_111_110_95_108_105_115_116_95_119_104_105_108_101_95_95_91_54_93_95_48_8_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Label_24, ll_backend__llds_out__llds_out_instr__Instrs_17, &ll_backend__llds_out__llds_out_instr__AfterWhileInstrs_28, ll_backend__llds_out__llds_out_instr__ProfInfo_3);
                      }
#line 284 "llds_out_instr.m"
                      {
#line 284 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0((MR_String) "\t} /* end while */\n");
                      }
#line 285 "llds_out_instr.m"
                      /* direct tailcall eliminated */
#line 285 "llds_out_instr.m"
                      {
#line 285 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__AfterWhileInstrs_28;

#line 285 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0_5 = (MR_Integer) 0;
#line 285 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 285 "llds_out_instr.m"
                      }
#line 285 "llds_out_instr.m"
                      continue;
#line 281 "llds_out_instr.m"
                    }
#line 287 "llds_out_instr.m"
                  else
#line 288 "llds_out_instr.m"
                    {
#line 288 "llds_out_instr.m"
                      /* direct tailcall eliminated */
#line 288 "llds_out_instr.m"
                      {
#line 288 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Instrs_17;
#line 288 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0__tmp_copy_5 = ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_27;

#line 288 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0_5 = ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0__tmp_copy_5;
#line 288 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 288 "llds_out_instr.m"
                      }
#line 288 "llds_out_instr.m"
                      continue;
#line 288 "llds_out_instr.m"
                    }
#line 264 "llds_out_instr.m"
                }
#line 263 "llds_out_instr.m"
              }
#line 263 "llds_out_instr.m"
            else
#line 300 "llds_out_instr.m"
              {
#line 300 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__Instrs1_30;
#line 300 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__Lval_33;
#line 300 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__Rval_34;
#line 292 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__Instr1_29;
#line 292 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__Uinstr1_31;
#line 293 "llds_out_instr.m"
                MR_String ll_backend__llds_out__llds_out_instr__V_32_32;

#line 292 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instrs_17)) == (MR_mktag((MR_Integer) 1)));
#line 292 "llds_out_instr.m"
                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 292 "llds_out_instr.m"
                  {
#line 292 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__Instr1_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Instrs_17, (MR_Integer) 0)));
#line 292 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__Instrs1_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Instrs_17, (MR_Integer) 1)));
#line 293 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__Uinstr1_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr1_29, (MR_Integer) 0)));
#line 293 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr1_29, (MR_Integer) 1)));
#line 294 "llds_out_instr.m"
                    {
#line 294 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds_out__llds_out_instr__is_aligned_float_dword_assignment_4_p_0(ll_backend__llds_out__llds_out_instr__Uinstr_22, ll_backend__llds_out__llds_out_instr__Uinstr1_31, &ll_backend__llds_out__llds_out_instr__Lval_33, &ll_backend__llds_out__llds_out_instr__Rval_34);
                    }
#line 292 "llds_out_instr.m"
                  }
#line 300 "llds_out_instr.m"
                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 296 "llds_out_instr.m"
                  {
#line 296 "llds_out_instr.m"
                    {
#line 296 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_5_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Lval_33, ll_backend__llds_out__llds_out_instr__Rval_34);
                    }
#line 298 "llds_out_instr.m"
                    /* direct tailcall eliminated */
#line 298 "llds_out_instr.m"
                    {
#line 298 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Instrs1_30;

#line 298 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0_5 = (MR_Integer) 0;
#line 298 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 298 "llds_out_instr.m"
                    }
#line 298 "llds_out_instr.m"
                    continue;
#line 296 "llds_out_instr.m"
                  }
#line 300 "llds_out_instr.m"
                else
#line 302 "llds_out_instr.m"
                  {
#line 302 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_54;
#line 303 "llds_out_instr.m"
                    MR_String ll_backend__llds_out__llds_out_instr__V_35_35;

#line 301 "llds_out_instr.m"
                    {
#line 301 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Uinstr_22, ll_backend__llds_out__llds_out_instr__Comment_23, ll_backend__llds_out__llds_out_instr__ProfInfo_3);
                    }
#line 303 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_22)) == (MR_mktag((MR_Integer) 1)));
#line 303 "llds_out_instr.m"
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 303 "llds_out_instr.m"
                      {
#line 303 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Uinstr_22, (MR_Integer) 0)));
#line 304 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_54 = ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0_5;
#line 303 "llds_out_instr.m"
                      }
#line 303 "llds_out_instr.m"
                    else
#line 306 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_54 = (MR_Integer) 0;
#line 308 "llds_out_instr.m"
                    /* direct tailcall eliminated */
#line 308 "llds_out_instr.m"
                    {
#line 308 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Instrs_17;
#line 308 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0__tmp_copy_5 = ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_54;

#line 308 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0_5 = ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0__tmp_copy_5;
#line 308 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 308 "llds_out_instr.m"
                    }
#line 308 "llds_out_instr.m"
                    continue;
#line 302 "llds_out_instr.m"
                  }
#line 300 "llds_out_instr.m"
              }
#line 261 "llds_out_instr.m"
          }
#line 259 "llds_out_instr.m"
      }
#line 259 "llds_out_instr.m"
      break;
#line 259 "llds_out_instr.m"
    }
#line 36 "llds_out_instr.m"
}

#line 29 "llds_out_instr.m"
void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instruction_decls_6_p_0(
#line 29 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
#line 29 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_8,
#line 29 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_13,
#line 29 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_14)
#line 29 "llds_out_instr.m"
{
#line 91 "llds_out_instr.m"
  {
#line 91 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 91 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__Uinstr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)));
#line 92 "llds_out_instr.m"
    MR_String ll_backend__llds_out__llds_out_instr__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 93 "llds_out_instr.m"
    {
#line 93 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Uinstr_11, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_13, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_14);
#line 93 "llds_out_instr.m"
      return;
    }
#line 91 "llds_out_instr.m"
  }
#line 29 "llds_out_instr.m"
}

void mercury__ll_backend__llds_out__llds_out_instr__init(void)
{
}

void mercury__ll_backend__llds_out__llds_out_instr__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__type_ctor_info_after_layout_label_0);
}

void mercury__ll_backend__llds_out__llds_out_instr__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.llds_out.llds_out_instr. */
