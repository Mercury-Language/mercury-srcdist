/*
** Automatically generated from `llds_out_instr.m'
** by the Mercury compiler,
** version rotd-2014-11-20
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
#include "hlds.goal_form.mih"
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
#include "mdbcomp.sym_name.mih"
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




#line 159 "ll_backend.llds_out.llds_out_instr.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_instr__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0;

#line 162 "ll_backend.llds_out.llds_out_instr.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_instr__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

#line 165 "ll_backend.llds_out.llds_out_instr.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_0;

#line 168 "ll_backend.llds_out.llds_out_instr.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_1;

#line 171 "ll_backend.llds_out.llds_out_instr.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_value_ordered_after_layout_label_0[2];

#line 174 "ll_backend.llds_out.llds_out_instr.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_name_ordered_after_layout_label_0[2];

#line 177 "ll_backend.llds_out.llds_out_instr.c"
static const MR_Integer ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__functor_number_map_after_layout_label_0[2];

#line 180 "ll_backend.llds_out.llds_out_instr.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_instr__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0;

#line 183 "ll_backend.llds_out.llds_out_instr.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__field_types_label_output_info_0_0[4];

#line 186 "ll_backend.llds_out.llds_out_instr.c"
static const MR_ConstString ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__field_names_label_output_info_0_0[4];

#line 189 "ll_backend.llds_out.llds_out_instr.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_functor_desc_label_output_info_0_0;

#line 192 "ll_backend.llds_out.llds_out_instr.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_stag_ordered_label_output_info_0_0[1];

#line 195 "ll_backend.llds_out.llds_out_instr.c"
static const MR_DuPtagLayout ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_ptag_ordered_label_output_info_0[1];

#line 198 "ll_backend.llds_out.llds_out_instr.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_name_ordered_label_output_info_0[1];

#line 201 "ll_backend.llds_out.llds_out_instr.c"
static const MR_Integer ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__functor_number_map_label_output_info_0[1];

#line 204 "ll_backend.llds_out.llds_out_instr.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr____Unify____after_layout_label_0_0_10001(
#line 207 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 209 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2);

#line 212 "ll_backend.llds_out.llds_out_instr.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr____Compare____after_layout_label_0_0_10001(
#line 215 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 217 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
#line 219 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_3);

#line 222 "ll_backend.llds_out.llds_out_instr.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr____Unify____label_output_info_0_0_10001(
#line 225 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 227 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2);

#line 230 "ll_backend.llds_out.llds_out_instr.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr____Compare____label_output_info_0_0_10001(
#line 233 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 235 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
#line 237 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_3);

#line 1605 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_99_114_95_104_112_95_110_111_95_114_101_117_115_101_95_95_91_57_93_95_48_11_p_0(
#line 1605 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_12,
#line 1605 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Lval_13,
#line 1605 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeTag_14,
#line 1605 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeOffset_15,
#line 1605 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Rval_16,
#line 1605 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeAllocId_17,
#line 1605 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_18,
#line 1605 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeRegionRval_19);

#line 452 "llds_out_instr.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_float_dword_assignment__452__1_2_p_0(
#line 452 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Type_10,
#line 452 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_21);

#line 402 "llds_out_instr.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_instruction_list_while_block__402__1_2_p_0(
#line 402 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Instrs_15,
#line 402 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_39);

#line 2024 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_output_4_p_0(
#line 2024 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 2024 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Output_6);

#line 2006 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_p_0(
#line 2006 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 2006 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2);

#line 1990 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_6_p_0(
#line 1990 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1990 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
#line 1990 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3,
#line 1990 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_4);

#line 1897 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_p_0(
#line 1897 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1897 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2);

#line 1882 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_6_p_0(
#line 1882 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1882 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
#line 1882 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3,
#line 1882 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_4);

#line 1866 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_p_0(
#line 1866 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1);

#line 1816 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_p_0(
#line 1816 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 1816 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Component_6);

#line 1795 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_p_0(
#line 1795 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1);

#line 1784 "llds_out_instr.m"
static MR_Integer MR_CALL 
ll_backend__llds_out__llds_out_instr__max_leaf_stack_frame_size_0_f_0(void);

#line 1775 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_p_0(
#line 1775 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 1775 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__EmbeddedFrame_6);

#line 1750 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_alloc_site_id_4_p_0(
#line 1750 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 1750 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__AllocId_6);

#line 1738 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_maybe_alloc_site_id_4_p_0(
#line 1738 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 1738 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeAllocId_6);

#line 1578 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_p_0(
#line 1578 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1);

#line 1570 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_p_0(
#line 1570 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1);

#line 1422 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_goto_5_p_0(
#line 1422 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
#line 1422 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Target_7,
#line 1422 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_8);

#line 1396 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_p_0(
#line 1396 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
#line 1396 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Label_7,
#line 1396 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8);

#line 1375 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_defn_3_p_0(
#line 1375 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1);

#line 1322 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_live_value_type_3_p_0(
#line 1322 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1);

#line 1293 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_layout_locns_4_p_0(
#line 1293 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1293 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2);

#line 1280 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_p_0(
#line 1280 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1280 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2);

#line 1264 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_p_0(
#line 1264 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1264 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2);

#line 1249 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_p_0(
#line 1249 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 1249 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__LiveVals_6);

#line 1112 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_call_6_p_0(
#line 1112 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
#line 1112 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Target_8,
#line 1112 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Continuation_9,
#line 1112 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_10);

#line 1081 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_p_0(
#line 1081 "llds_out_instr.m"
  MR_Integer ll_backend__llds_out__llds_out_instr__Next_6,
#line 1081 "llds_out_instr.m"
  MR_Integer ll_backend__llds_out__llds_out_instr__Max_7,
#line 1081 "llds_out_instr.m"
  MR_String ll_backend__llds_out__llds_out_instr__Type_8);

#line 1071 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_block_end_2_p_0(void);

#line 1052 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_block_start_4_p_0(
#line 1052 "llds_out_instr.m"
  MR_Integer ll_backend__llds_out__llds_out_instr__TempR_5,
#line 1052 "llds_out_instr.m"
  MR_Integer ll_backend__llds_out__llds_out_instr__TempF_6);

#line 1037 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_livevals_4_p_0(
#line 1037 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1037 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2);

#line 1013 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_comment_chars_4_p_0(
#line 1013 "llds_out_instr.m"
  MR_Char ll_backend__llds_out__llds_out_instr__HeadVar__1_1,
#line 1013 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2);

#line 893 "llds_out_instr.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_3(
#line 893 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg);

#line 944 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_2(
#line 944 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg,
#line 944 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 944 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
#line 944 "llds_out_instr.m"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_3);

#line 934 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_1(
#line 934 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg,
#line 934 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 934 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
#line 934 "llds_out_instr.m"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_3);

#line 541 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(
#line 541 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
#line 541 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_7,
#line 541 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8);

#line 508 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(
#line 508 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
#line 508 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_8,
#line 508 "llds_out_instr.m"
  MR_String ll_backend__llds_out__llds_out_instr__Comment_9,
#line 508 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_10);

#line 452 "llds_out_instr.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_5_p_0_1(
#line 452 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg);

#line 443 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_5_p_0(
#line 443 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
#line 443 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Lval_7,
#line 443 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Rval_8);

#line 429 "llds_out_instr.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__is_aligned_float_dword_assignment_4_p_0(
#line 429 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__InstrA_5,
#line 429 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__InstrB_6,
#line 429 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__LvalA_7,
#line 429 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__Rval_8);

#line 402 "llds_out_instr.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_p_0_1(
#line 402 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg);

#line 390 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_p_0(
#line 390 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 390 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
#line 390 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Label_3,
#line 390 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_4);

#line 344 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_p_0(
#line 344 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 344 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Label_2,
#line 344 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__3_3,
#line 344 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__HeadVar__4_4,
#line 344 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_5);

#line 255 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_p_0(
#line 255 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
#line 255 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Component_8,
#line 255 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22,
#line 255 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23);

#line 224 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0_2(
#line 224 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg,
#line 224 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 224 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
#line 224 "llds_out_instr.m"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_3,
#line 224 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_4,
#line 224 "llds_out_instr.m"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_5);

#line 137 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0_1(
#line 137 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg,
#line 137 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 137 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
#line 137 "llds_out_instr.m"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_3,
#line 137 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_4,
#line 137 "llds_out_instr.m"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_5);

#line 118 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0(
#line 118 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
#line 118 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_8,
#line 118 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81,
#line 118 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);


static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_1[6][2];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_2[1][1];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_3[2][9];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_4[2][5];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_5[1][7];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_6[1][4];




static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_1[6][2] = {
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
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
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



#line 808 "ll_backend.llds_out.llds_out_instr.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_instr__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0
  }
};

#line 816 "ll_backend.llds_out.llds_out_instr.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_instr__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 824 "ll_backend.llds_out.llds_out_instr.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_0 = {
  (MR_String) "not_after_layout_label",
  (MR_Integer) 0
};

#line 830 "ll_backend.llds_out.llds_out_instr.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_1 = {
  (MR_String) "after_layout_label",
  (MR_Integer) 1
};

#line 836 "ll_backend.llds_out.llds_out_instr.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_value_ordered_after_layout_label_0[2] = {
  &ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_0,
  &ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_1
};

#line 842 "ll_backend.llds_out.llds_out_instr.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_name_ordered_after_layout_label_0[2] = {
  &ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_1,
  &ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_0
};

#line 848 "ll_backend.llds_out.llds_out_instr.c"
static const MR_Integer ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__functor_number_map_after_layout_label_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 854 "ll_backend.llds_out.llds_out_instr.c"
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

#line 875 "ll_backend.llds_out.llds_out_instr.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_instr__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 883 "ll_backend.llds_out.llds_out_instr.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__field_types_label_output_info_0_0[4] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_instr__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_instr__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_instr__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0
};

#line 891 "ll_backend.llds_out.llds_out_instr.c"
static const MR_ConstString ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__field_names_label_output_info_0_0[4] = {
  (MR_String) "loi_caller_label",
  (MR_String) "loi_cont_labels",
  (MR_String) "loi_while_labels",
  (MR_String) "loi_undef_while_labels"
};

#line 899 "ll_backend.llds_out.llds_out_instr.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_functor_desc_label_output_info_0_0 = {
  (MR_String) "label_output_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__field_types_label_output_info_0_0,
  ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__field_names_label_output_info_0_0,
  NULL,
  NULL
};

#line 914 "ll_backend.llds_out.llds_out_instr.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_stag_ordered_label_output_info_0_0[1] = {
  &ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_functor_desc_label_output_info_0_0
};

#line 919 "ll_backend.llds_out.llds_out_instr.c"
static const MR_DuPtagLayout ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_ptag_ordered_label_output_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_stag_ordered_label_output_info_0_0
  }
};

#line 928 "ll_backend.llds_out.llds_out_instr.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_name_ordered_label_output_info_0[1] = {
  &ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_functor_desc_label_output_info_0_0
};

#line 933 "ll_backend.llds_out.llds_out_instr.c"
static const MR_Integer ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__functor_number_map_label_output_info_0[1] = {
  (MR_Integer) 0
};

#line 938 "ll_backend.llds_out.llds_out_instr.c"
const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__type_ctor_info_label_output_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__llds_out__llds_out_instr____Unify____label_output_info_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_instr____Compare____label_output_info_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_instr",
  (MR_String) "label_output_info",
  {
    ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_name_ordered_label_output_info_0
  },
  {
    ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_ptag_ordered_label_output_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__functor_number_map_label_output_info_0
};

#line 959 "ll_backend.llds_out.llds_out_instr.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr____Unify____after_layout_label_0_0_10001(
#line 962 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 964 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2)
#line 966 "ll_backend.llds_out.llds_out_instr.c"
{
#line 968 "ll_backend.llds_out.llds_out_instr.c"
  {
#line 970 "ll_backend.llds_out.llds_out_instr.c"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 973 "ll_backend.llds_out.llds_out_instr.c"
    {
#line 975 "ll_backend.llds_out.llds_out_instr.c"
      ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds_out__llds_out_instr____Unify____after_layout_label_0_0(((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_2));
    }
#line 978 "ll_backend.llds_out.llds_out_instr.c"
    return ll_backend__llds_out__llds_out_instr__succeeded;
#line 980 "ll_backend.llds_out.llds_out_instr.c"
  }
#line 982 "ll_backend.llds_out.llds_out_instr.c"
}

#line 985 "ll_backend.llds_out.llds_out_instr.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr____Compare____after_layout_label_0_0_10001(
#line 988 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 990 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
#line 992 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_3)
#line 994 "ll_backend.llds_out.llds_out_instr.c"
{
#line 996 "ll_backend.llds_out.llds_out_instr.c"
  {
#line 998 "ll_backend.llds_out.llds_out_instr.c"
    MR_Word ll_backend__llds_out__llds_out_instr__conv0_HeadVar__1_1;

#line 1001 "ll_backend.llds_out.llds_out_instr.c"
    {
#line 1003 "ll_backend.llds_out.llds_out_instr.c"
      ll_backend__llds_out__llds_out_instr____Compare____after_layout_label_0_0(&ll_backend__llds_out__llds_out_instr__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_3));
    }
#line 1006 "ll_backend.llds_out.llds_out_instr.c"
    *ll_backend__llds_out__llds_out_instr__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_instr__conv0_HeadVar__1_1));
#line 1008 "ll_backend.llds_out.llds_out_instr.c"
  }
#line 1010 "ll_backend.llds_out.llds_out_instr.c"
}

#line 1013 "ll_backend.llds_out.llds_out_instr.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr____Unify____label_output_info_0_0_10001(
#line 1016 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 1018 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2)
#line 1020 "ll_backend.llds_out.llds_out_instr.c"
{
#line 1022 "ll_backend.llds_out.llds_out_instr.c"
  {
#line 1024 "ll_backend.llds_out.llds_out_instr.c"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1027 "ll_backend.llds_out.llds_out_instr.c"
    {
#line 1029 "ll_backend.llds_out.llds_out_instr.c"
      ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds_out__llds_out_instr____Unify____label_output_info_0_0(((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_2));
    }
#line 1032 "ll_backend.llds_out.llds_out_instr.c"
    return ll_backend__llds_out__llds_out_instr__succeeded;
#line 1034 "ll_backend.llds_out.llds_out_instr.c"
  }
#line 1036 "ll_backend.llds_out.llds_out_instr.c"
}

#line 1039 "ll_backend.llds_out.llds_out_instr.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr____Compare____label_output_info_0_0_10001(
#line 1042 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 1044 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
#line 1046 "ll_backend.llds_out.llds_out_instr.c"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_3)
#line 1048 "ll_backend.llds_out.llds_out_instr.c"
{
#line 1050 "ll_backend.llds_out.llds_out_instr.c"
  {
#line 1052 "ll_backend.llds_out.llds_out_instr.c"
    MR_Word ll_backend__llds_out__llds_out_instr__conv0_HeadVar__1_1;

#line 1055 "ll_backend.llds_out.llds_out_instr.c"
    {
#line 1057 "ll_backend.llds_out.llds_out_instr.c"
      ll_backend__llds_out__llds_out_instr____Compare____label_output_info_0_0(&ll_backend__llds_out__llds_out_instr__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_3));
    }
#line 1060 "ll_backend.llds_out.llds_out_instr.c"
    *ll_backend__llds_out__llds_out_instr__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_instr__conv0_HeadVar__1_1));
#line 1062 "ll_backend.llds_out.llds_out_instr.c"
  }
#line 1064 "ll_backend.llds_out.llds_out_instr.c"
}

#line 1605 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_99_114_95_104_112_95_110_111_95_114_101_117_115_101_95_95_91_57_93_95_48_11_p_0(
#line 1605 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_12,
#line 1605 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Lval_13,
#line 1605 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeTag_14,
#line 1605 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeOffset_15,
#line 1605 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Rval_16,
#line 1605 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeAllocId_17,
#line 1605 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_18,
#line 1605 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeRegionRval_19)
#line 1605 "llds_out_instr.m"
{
#line 1613 "llds_out_instr.m"
  {
#line 1613 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1613 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__MaybeRegionRval_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1631 "llds_out_instr.m"
      {
#line 1631 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__ProfMem_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1632 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 0)));
#line 1632 "llds_out_instr.m"
        MR_String ll_backend__llds_out__llds_out_instr__V_121_121 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 1)));
#line 1632 "llds_out_instr.m"
        MR_String ll_backend__llds_out__llds_out_instr__V_122_122 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 2)));
#line 1632 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 3)));
#line 1632 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 4)));
#line 1632 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 5)));
#line 1632 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 6)));
#line 1632 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_127_127 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 1632 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_128_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1632 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_129_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1632 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_130_130 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1632 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_131_131 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1632 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_132_132 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1632 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_133_133 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1632 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_134_134 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1632 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_135_135 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1632 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_136_136 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1632 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_137_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1632 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_138_138 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1632 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_139_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1632 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 8)));

#line 1672 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__MaybeTag_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1672 "llds_out_instr.m"
          if ((ll_backend__llds_out__llds_out_instr__ProfMem_24 == (MR_Integer) 0))
#line 1673 "llds_out_instr.m"
            {
#line 1685 "llds_out_instr.m"
              if ((ll_backend__llds_out__llds_out_instr__MaybeOffset_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1686 "llds_out_instr.m"
                if ((ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_18 == (MR_Integer) 1))
#line 1688 "llds_out_instr.m"
                  {
#line 1689 "llds_out_instr.m"
                    {
#line 1689 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) "MR_alloc_heap(");
                    }
#line 1688 "llds_out_instr.m"
                  }
#line 1686 "llds_out_instr.m"
                else
#line 1691 "llds_out_instr.m"
                  {
#line 1692 "llds_out_instr.m"
                    {
#line 1692 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) "MR_alloc_heap_atomic(");
                    }
#line 1691 "llds_out_instr.m"
                  }
#line 1685 "llds_out_instr.m"
              else
#line 1681 "llds_out_instr.m"
                if ((ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_18 == (MR_Integer) 1))
#line 1679 "llds_out_instr.m"
                  {
#line 1680 "llds_out_instr.m"
                    {
#line 1680 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) "MR_offset_incr_hp(");
                    }
#line 1679 "llds_out_instr.m"
                  }
#line 1681 "llds_out_instr.m"
                else
#line 1682 "llds_out_instr.m"
                  {
#line 1683 "llds_out_instr.m"
                    {
#line 1683 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) "MR_offset_incr_hp_atomic(");
                    }
#line 1682 "llds_out_instr.m"
                  }
#line 1695 "llds_out_instr.m"
              {
#line 1695 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Lval_13);
              }
#line 1725 "llds_out_instr.m"
              {
#line 1725 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
#line 1730 "llds_out_instr.m"
              if ((ll_backend__llds_out__llds_out_instr__MaybeOffset_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1731 "llds_out_instr.m"
                {
#line 1731 "llds_out_instr.m"
                }
#line 1730 "llds_out_instr.m"
              else
#line 1727 "llds_out_instr.m"
                {
#line 1727 "llds_out_instr.m"
                  MR_Integer ll_backend__llds_out__llds_out_instr__Offset_114 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeOffset_15, (MR_Integer) 0)));

#line 1728 "llds_out_instr.m"
                  {
#line 1728 "llds_out_instr.m"
                    mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Offset_114);
                  }
#line 1729 "llds_out_instr.m"
                  {
#line 1729 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                  }
#line 1727 "llds_out_instr.m"
                }
#line 1733 "llds_out_instr.m"
              {
#line 1733 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Rval_16, (MR_Integer) 13);
              }
#line 1734 "llds_out_instr.m"
              {
#line 1734 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
#line 1734 "llds_out_instr.m"
                return;
              }
#line 1673 "llds_out_instr.m"
            }
#line 1672 "llds_out_instr.m"
          else
#line 1634 "llds_out_instr.m"
            {
#line 1640 "llds_out_instr.m"
              if ((ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_18 == (MR_Integer) 1))
#line 1638 "llds_out_instr.m"
                {
#line 1639 "llds_out_instr.m"
                  {
#line 1639 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) "MR_offset_incr_hp_msg(");
                  }
#line 1638 "llds_out_instr.m"
                }
#line 1640 "llds_out_instr.m"
              else
#line 1641 "llds_out_instr.m"
                {
#line 1642 "llds_out_instr.m"
                  {
#line 1642 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) "MR_offset_incr_hp_atomic_msg(");
                  }
#line 1641 "llds_out_instr.m"
                }
#line 1644 "llds_out_instr.m"
              {
#line 1644 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Lval_13);
              }
#line 1659 "llds_out_instr.m"
              {
#line 1659 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
#line 1663 "llds_out_instr.m"
              if ((ll_backend__llds_out__llds_out_instr__MaybeOffset_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1661 "llds_out_instr.m"
                {
#line 1662 "llds_out_instr.m"
                  {
#line 1662 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) "0, ");
                  }
#line 1661 "llds_out_instr.m"
                }
#line 1663 "llds_out_instr.m"
              else
#line 1664 "llds_out_instr.m"
                {
#line 1664 "llds_out_instr.m"
                  MR_Integer ll_backend__llds_out__llds_out_instr__Offset_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeOffset_15, (MR_Integer) 0)));

#line 1665 "llds_out_instr.m"
                  {
#line 1665 "llds_out_instr.m"
                    mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Offset_25);
                  }
#line 1666 "llds_out_instr.m"
                  {
#line 1666 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                  }
#line 1664 "llds_out_instr.m"
                }
#line 1668 "llds_out_instr.m"
              {
#line 1668 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Rval_16, (MR_Integer) 13);
              }
#line 1669 "llds_out_instr.m"
              {
#line 1669 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
#line 1670 "llds_out_instr.m"
              {
#line 1670 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__output_maybe_alloc_site_id_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__MaybeAllocId_17);
              }
#line 1671 "llds_out_instr.m"
              {
#line 1671 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) ", NULL)");
#line 1671 "llds_out_instr.m"
                return;
              }
#line 1634 "llds_out_instr.m"
            }
#line 1672 "llds_out_instr.m"
        else
#line 1672 "llds_out_instr.m"
          {
#line 1672 "llds_out_instr.m"
            MR_Integer ll_backend__llds_out__llds_out_instr__V_203_203 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeTag_14, (MR_Integer) 0)));

#line 1672 "llds_out_instr.m"
            if ((ll_backend__llds_out__llds_out_instr__ProfMem_24 == (MR_Integer) 0))
#line 1673 "llds_out_instr.m"
              {
#line 1711 "llds_out_instr.m"
                if ((ll_backend__llds_out__llds_out_instr__MaybeOffset_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1712 "llds_out_instr.m"
                  {
#line 1716 "llds_out_instr.m"
                    if ((ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_18 == (MR_Integer) 1))
#line 1714 "llds_out_instr.m"
                      {
#line 1715 "llds_out_instr.m"
                        {
#line 1715 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "MR_tag_alloc_heap(");
                        }
#line 1714 "llds_out_instr.m"
                      }
#line 1716 "llds_out_instr.m"
                    else
#line 1717 "llds_out_instr.m"
                      {
#line 1718 "llds_out_instr.m"
                        {
#line 1718 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "MR_tag_alloc_heap_atomic(");
                        }
#line 1717 "llds_out_instr.m"
                      }
#line 1720 "llds_out_instr.m"
                    {
#line 1720 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Lval_13);
                    }
#line 1721 "llds_out_instr.m"
                    {
#line 1721 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
#line 1722 "llds_out_instr.m"
                    {
#line 1722 "llds_out_instr.m"
                      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__V_203_203);
                    }
#line 1712 "llds_out_instr.m"
                  }
#line 1711 "llds_out_instr.m"
                else
#line 1699 "llds_out_instr.m"
                  {
#line 1703 "llds_out_instr.m"
                    if ((ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_18 == (MR_Integer) 1))
#line 1701 "llds_out_instr.m"
                      {
#line 1702 "llds_out_instr.m"
                        {
#line 1702 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "MR_tag_offset_incr_hp(");
                        }
#line 1701 "llds_out_instr.m"
                      }
#line 1703 "llds_out_instr.m"
                    else
#line 1704 "llds_out_instr.m"
                      {
#line 1705 "llds_out_instr.m"
                        {
#line 1705 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "MR_tag_offset_incr_hp_atomic(");
                        }
#line 1704 "llds_out_instr.m"
                      }
#line 1708 "llds_out_instr.m"
                    {
#line 1708 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Lval_13);
                    }
#line 1709 "llds_out_instr.m"
                    {
#line 1709 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
#line 1710 "llds_out_instr.m"
                    {
#line 1710 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_data__output_tag_3_p_0(ll_backend__llds_out__llds_out_instr__V_203_203);
                    }
#line 1699 "llds_out_instr.m"
                  }
#line 1725 "llds_out_instr.m"
                {
#line 1725 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 1730 "llds_out_instr.m"
                if ((ll_backend__llds_out__llds_out_instr__MaybeOffset_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1731 "llds_out_instr.m"
                  {
#line 1731 "llds_out_instr.m"
                  }
#line 1730 "llds_out_instr.m"
                else
#line 1727 "llds_out_instr.m"
                  {
#line 1727 "llds_out_instr.m"
                    MR_Integer ll_backend__llds_out__llds_out_instr__Offset_143 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeOffset_15, (MR_Integer) 0)));

#line 1728 "llds_out_instr.m"
                    {
#line 1728 "llds_out_instr.m"
                      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Offset_143);
                    }
#line 1729 "llds_out_instr.m"
                    {
#line 1729 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
#line 1727 "llds_out_instr.m"
                  }
#line 1733 "llds_out_instr.m"
                {
#line 1733 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Rval_16, (MR_Integer) 13);
                }
#line 1734 "llds_out_instr.m"
                {
#line 1734 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) ")");
#line 1734 "llds_out_instr.m"
                  return;
                }
#line 1673 "llds_out_instr.m"
              }
#line 1672 "llds_out_instr.m"
            else
#line 1634 "llds_out_instr.m"
              {
#line 1650 "llds_out_instr.m"
                if ((ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_18 == (MR_Integer) 1))
#line 1648 "llds_out_instr.m"
                  {
#line 1649 "llds_out_instr.m"
                    {
#line 1649 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) "MR_tag_offset_incr_hp_msg(");
                    }
#line 1648 "llds_out_instr.m"
                  }
#line 1650 "llds_out_instr.m"
                else
#line 1651 "llds_out_instr.m"
                  {
#line 1652 "llds_out_instr.m"
                    {
#line 1652 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) "MR_tag_offset_incr_hp_atomic_msg(");
                    }
#line 1651 "llds_out_instr.m"
                  }
#line 1655 "llds_out_instr.m"
                {
#line 1655 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Lval_13);
                }
#line 1656 "llds_out_instr.m"
                {
#line 1656 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 1657 "llds_out_instr.m"
                {
#line 1657 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_data__output_tag_3_p_0(ll_backend__llds_out__llds_out_instr__V_203_203);
                }
#line 1659 "llds_out_instr.m"
                {
#line 1659 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 1663 "llds_out_instr.m"
                if ((ll_backend__llds_out__llds_out_instr__MaybeOffset_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1661 "llds_out_instr.m"
                  {
#line 1662 "llds_out_instr.m"
                    {
#line 1662 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) "0, ");
                    }
#line 1661 "llds_out_instr.m"
                  }
#line 1663 "llds_out_instr.m"
                else
#line 1664 "llds_out_instr.m"
                  {
#line 1664 "llds_out_instr.m"
                    MR_Integer ll_backend__llds_out__llds_out_instr__Offset_158 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeOffset_15, (MR_Integer) 0)));

#line 1665 "llds_out_instr.m"
                    {
#line 1665 "llds_out_instr.m"
                      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Offset_158);
                    }
#line 1666 "llds_out_instr.m"
                    {
#line 1666 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
#line 1664 "llds_out_instr.m"
                  }
#line 1668 "llds_out_instr.m"
                {
#line 1668 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Rval_16, (MR_Integer) 13);
                }
#line 1669 "llds_out_instr.m"
                {
#line 1669 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 1670 "llds_out_instr.m"
                {
#line 1670 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_instr__output_maybe_alloc_site_id_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__MaybeAllocId_17);
                }
#line 1671 "llds_out_instr.m"
                {
#line 1671 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) ", NULL)");
#line 1671 "llds_out_instr.m"
                  return;
                }
#line 1634 "llds_out_instr.m"
              }
#line 1672 "llds_out_instr.m"
          }
#line 1631 "llds_out_instr.m"
      }
#line 1613 "llds_out_instr.m"
    else
#line 1613 "llds_out_instr.m"
      {
#line 1613 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__RegionRval_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeRegionRval_19, (MR_Integer) 0)));

#line 1618 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__MaybeTag_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1615 "llds_out_instr.m"
          {
#line 1616 "llds_out_instr.m"
            {
#line 1616 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "MR_alloc_in_region(");
            }
#line 1617 "llds_out_instr.m"
            {
#line 1617 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Lval_13);
            }
#line 1615 "llds_out_instr.m"
          }
#line 1618 "llds_out_instr.m"
        else
#line 1619 "llds_out_instr.m"
          {
#line 1619 "llds_out_instr.m"
            MR_Integer ll_backend__llds_out__llds_out_instr__Tag_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeTag_14, (MR_Integer) 0)));

#line 1620 "llds_out_instr.m"
            {
#line 1620 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "MR_tag_alloc_in_region(");
            }
#line 1621 "llds_out_instr.m"
            {
#line 1621 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Lval_13);
            }
#line 1622 "llds_out_instr.m"
            {
#line 1622 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 1623 "llds_out_instr.m"
            {
#line 1623 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_data__output_tag_3_p_0(ll_backend__llds_out__llds_out_instr__Tag_23);
            }
#line 1619 "llds_out_instr.m"
          }
#line 1625 "llds_out_instr.m"
        {
#line 1625 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
#line 1626 "llds_out_instr.m"
        {
#line 1626 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__RegionRval_22);
        }
#line 1627 "llds_out_instr.m"
        {
#line 1627 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
#line 1628 "llds_out_instr.m"
        {
#line 1628 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Rval_16, (MR_Integer) 13);
        }
#line 1629 "llds_out_instr.m"
        {
#line 1629 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
#line 1629 "llds_out_instr.m"
          return;
        }
#line 1613 "llds_out_instr.m"
      }
#line 1613 "llds_out_instr.m"
  }
#line 1605 "llds_out_instr.m"
}

#line 452 "llds_out_instr.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_float_dword_assignment__452__1_2_p_0(
#line 452 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Type_10,
#line 452 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_21)
#line 452 "llds_out_instr.m"
{
#line 452 "llds_out_instr.m"
  {
#line 452 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__Type_10 == ll_backend__llds_out__llds_out_instr__HeadVar__2_21);

#line 452 "llds_out_instr.m"
    return ll_backend__llds_out__llds_out_instr__succeeded;
#line 452 "llds_out_instr.m"
  }
#line 452 "llds_out_instr.m"
}

#line 402 "llds_out_instr.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_instruction_list_while_block__402__1_2_p_0(
#line 402 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Instrs_15,
#line 402 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_39)
#line 402 "llds_out_instr.m"
{
#line 402 "llds_out_instr.m"
  {
#line 402 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 402 "llds_out_instr.m"
    {
#line 402 "llds_out_instr.m"
      return ll_backend__llds_out__llds_out_instr__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[0], ((MR_Box) (ll_backend__llds_out__llds_out_instr__Instrs_15)), ((MR_Box) (ll_backend__llds_out__llds_out_instr__HeadVar__2_39)));
    }
#line 402 "llds_out_instr.m"
    return ll_backend__llds_out__llds_out_instr__succeeded;
#line 402 "llds_out_instr.m"
  }
#line 402 "llds_out_instr.m"
}

#line 31 "llds_out_instr.m"
void MR_CALL 
ll_backend__llds_out__llds_out_instr____Compare____label_output_info_0_0(
#line 31 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__HeadVar__1_1,
#line 31 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
#line 31 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__3_3)
#line 31 "llds_out_instr.m"
{
#line 31 "llds_out_instr.m"
  {
#line 31 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 31 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__CastX_15 = (MR_Integer) ll_backend__llds_out__llds_out_instr__HeadVar__2_2;
#line 31 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__CastY_16 = (MR_Integer) ll_backend__llds_out__llds_out_instr__HeadVar__3_3;

#line 31 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__CastX_15 == ll_backend__llds_out__llds_out_instr__CastY_16);
#line 31 "llds_out_instr.m"
    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1737 "ll_backend.llds_out.llds_out_instr.c"
      *ll_backend__llds_out__llds_out_instr__HeadVar__1_1 = (MR_Integer) 0;
#line 31 "llds_out_instr.m"
    else
#line 31 "llds_out_instr.m"
      {
#line 31 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
#line 31 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
#line 31 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 2)));
#line 31 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 3)));
#line 31 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__3_3, (MR_Integer) 0)));
#line 31 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__3_3, (MR_Integer) 1)));
#line 31 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__3_3, (MR_Integer) 2)));
#line 31 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__3_3, (MR_Integer) 3)));
#line 31 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_12_12;

#line 31 "llds_out_instr.m"
        {
#line 31 "llds_out_instr.m"
          ll_backend__llds____Compare____label_0_0(&ll_backend__llds_out__llds_out_instr__V_12_12, ll_backend__llds_out__llds_out_instr__V_4_4, ll_backend__llds_out__llds_out_instr__V_8_8);
        }
#line 1767 "ll_backend.llds_out.llds_out_instr.c"
        ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_12_12 == (MR_Integer) 0);
#line 31 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__succeeded = !(ll_backend__llds_out__llds_out_instr__succeeded);
#line 31 "llds_out_instr.m"
        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 31 "llds_out_instr.m"
          *ll_backend__llds_out__llds_out_instr__HeadVar__1_1 = ll_backend__llds_out__llds_out_instr__V_12_12;
#line 31 "llds_out_instr.m"
        else
#line 31 "llds_out_instr.m"
          {
#line 31 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__V_13_13;

#line 31 "llds_out_instr.m"
            {
#line 31 "llds_out_instr.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[3], &ll_backend__llds_out__llds_out_instr__V_13_13, ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_5_5)), ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_9_9)));
            }
#line 1787 "ll_backend.llds_out.llds_out_instr.c"
            ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_13_13 == (MR_Integer) 0);
#line 31 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__succeeded = !(ll_backend__llds_out__llds_out_instr__succeeded);
#line 31 "llds_out_instr.m"
            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 31 "llds_out_instr.m"
              *ll_backend__llds_out__llds_out_instr__HeadVar__1_1 = ll_backend__llds_out__llds_out_instr__V_13_13;
#line 31 "llds_out_instr.m"
            else
#line 31 "llds_out_instr.m"
              {
#line 31 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__V_14_14;

#line 31 "llds_out_instr.m"
                {
#line 31 "llds_out_instr.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[3], &ll_backend__llds_out__llds_out_instr__V_14_14, ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_6_6)), ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_10_10)));
                }
#line 1807 "ll_backend.llds_out.llds_out_instr.c"
                ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_14_14 == (MR_Integer) 0);
#line 31 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__succeeded = !(ll_backend__llds_out__llds_out_instr__succeeded);
#line 31 "llds_out_instr.m"
                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 31 "llds_out_instr.m"
                  *ll_backend__llds_out__llds_out_instr__HeadVar__1_1 = ll_backend__llds_out__llds_out_instr__V_14_14;
#line 31 "llds_out_instr.m"
                else
#line 31 "llds_out_instr.m"
                  {
#line 31 "llds_out_instr.m"
                    {
#line 31 "llds_out_instr.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[3], ll_backend__llds_out__llds_out_instr__HeadVar__1_1, ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_7_7)), ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_11_11)));
#line 31 "llds_out_instr.m"
                      return;
                    }
#line 31 "llds_out_instr.m"
                  }
#line 31 "llds_out_instr.m"
              }
#line 31 "llds_out_instr.m"
          }
#line 31 "llds_out_instr.m"
      }
#line 31 "llds_out_instr.m"
  }
#line 31 "llds_out_instr.m"
}

#line 31 "llds_out_instr.m"
MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr____Unify____label_output_info_0_0(
#line 31 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1,
#line 31 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
#line 31 "llds_out_instr.m"
{
#line 31 "llds_out_instr.m"
  {
#line 31 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 31 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__CastX_11 = (MR_Integer) ll_backend__llds_out__llds_out_instr__HeadVar__1_1;
#line 31 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__CastY_12 = (MR_Integer) ll_backend__llds_out__llds_out_instr__HeadVar__2_2;

#line 31 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__CastX_11 == ll_backend__llds_out__llds_out_instr__CastY_12);
#line 31 "llds_out_instr.m"
    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 31 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__succeeded = MR_TRUE;
#line 31 "llds_out_instr.m"
    else
#line 31 "llds_out_instr.m"
      {
#line 31 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__TypeInfo_14_14;
#line 31 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__TypeInfo_15_15;
#line 31 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__TypeInfo_16_16;
#line 31 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 0)));
#line 31 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 1)));
#line 31 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 2)));
#line 31 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 3)));
#line 31 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
#line 31 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
#line 31 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 2)));
#line 31 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 3)));

#line 1890 "ll_backend.llds_out.llds_out_instr.c"
        {
#line 1892 "ll_backend.llds_out.llds_out_instr.c"
          ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_instr__V_3_3, ll_backend__llds_out__llds_out_instr__V_7_7);
        }
#line 31 "llds_out_instr.m"
        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 31 "llds_out_instr.m"
          {
#line 1899 "ll_backend.llds_out.llds_out_instr.c"
            ll_backend__llds_out__llds_out_instr__TypeInfo_14_14 = (MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[3];
#line 1901 "ll_backend.llds_out.llds_out_instr.c"
            {
#line 1903 "ll_backend.llds_out.llds_out_instr.c"
              ll_backend__llds_out__llds_out_instr__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_instr__TypeInfo_14_14, ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_4_4)), ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_8_8)));
            }
#line 31 "llds_out_instr.m"
            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 31 "llds_out_instr.m"
              {
#line 1910 "ll_backend.llds_out.llds_out_instr.c"
                ll_backend__llds_out__llds_out_instr__TypeInfo_15_15 = (MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[3];
#line 1912 "ll_backend.llds_out.llds_out_instr.c"
                {
#line 1914 "ll_backend.llds_out.llds_out_instr.c"
                  ll_backend__llds_out__llds_out_instr__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_instr__TypeInfo_15_15, ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_5_5)), ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_9_9)));
                }
#line 31 "llds_out_instr.m"
                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 31 "llds_out_instr.m"
                  {
#line 1921 "ll_backend.llds_out.llds_out_instr.c"
                    ll_backend__llds_out__llds_out_instr__TypeInfo_16_16 = (MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[3];
#line 1923 "ll_backend.llds_out.llds_out_instr.c"
                    {
#line 1925 "ll_backend.llds_out.llds_out_instr.c"
                      return ll_backend__llds_out__llds_out_instr__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_instr__TypeInfo_16_16, ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_6_6)), ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_10_10)));
                    }
#line 31 "llds_out_instr.m"
                  }
#line 31 "llds_out_instr.m"
              }
#line 31 "llds_out_instr.m"
          }
#line 31 "llds_out_instr.m"
      }
#line 31 "llds_out_instr.m"
    return ll_backend__llds_out__llds_out_instr__succeeded;
#line 31 "llds_out_instr.m"
  }
#line 31 "llds_out_instr.m"
}

#line 53 "llds_out_instr.m"
void MR_CALL 
ll_backend__llds_out__llds_out_instr____Compare____after_layout_label_0_0(
#line 53 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__HeadVar__1_1,
#line 53 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
#line 53 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__3_3)
#line 53 "llds_out_instr.m"
{
#line 53 "llds_out_instr.m"
  {
#line 53 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 53 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__Cast_HeadVar1_4 = (MR_Integer) ll_backend__llds_out__llds_out_instr__HeadVar__2_2;
#line 53 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__Cast_HeadVar2_5 = (MR_Integer) ll_backend__llds_out__llds_out_instr__HeadVar__3_3;

#line 53 "llds_out_instr.m"
    {
#line 53 "llds_out_instr.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__llds_out__llds_out_instr__HeadVar__1_1, ll_backend__llds_out__llds_out_instr__Cast_HeadVar1_4, ll_backend__llds_out__llds_out_instr__Cast_HeadVar2_5);
#line 53 "llds_out_instr.m"
      return;
    }
#line 53 "llds_out_instr.m"
  }
#line 53 "llds_out_instr.m"
}

#line 53 "llds_out_instr.m"
MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr____Unify____after_layout_label_0_0(
#line 53 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_1,
#line 53 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
#line 53 "llds_out_instr.m"
{
#line 1984 "ll_backend.llds_out.llds_out_instr.c"
  {
#line 1986 "ll_backend.llds_out.llds_out_instr.c"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__HeadVar__2_1 == ll_backend__llds_out__llds_out_instr__HeadVar__2_2);

#line 1989 "ll_backend.llds_out.llds_out_instr.c"
    return ll_backend__llds_out__llds_out_instr__succeeded;
#line 1991 "ll_backend.llds_out.llds_out_instr.c"
  }
#line 53 "llds_out_instr.m"
}

#line 2024 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_output_4_p_0(
#line 2024 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 2024 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Output_6)
#line 2024 "llds_out_instr.m"
{
#line 2027 "llds_out_instr.m"
  {
#line 2027 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 2027 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_6, (MR_Integer) 0)));
#line 2027 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__OrigType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_6, (MR_Integer) 3)));
#line 2027 "llds_out_instr.m"
    MR_String ll_backend__llds_out__llds_out_instr__VarName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_6, (MR_Integer) 4)));
#line 2027 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__MaybeForeignType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_6, (MR_Integer) 5)));
#line 2027 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__BoxPolicy_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_6, (MR_Integer) 6)));
#line 2028 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr___VarType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_6, (MR_Integer) 1)));
#line 2028 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr___IsDummy_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_6, (MR_Integer) 2)));

#line 2030 "llds_out_instr.m"
    {
#line 2030 "llds_out_instr.m"
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
#line 2036 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__BoxPolicy_14 == (MR_Integer) 1))
#line 2032 "llds_out_instr.m"
      {
#line 2033 "llds_out_instr.m"
        {
#line 2033 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
        }
#line 2034 "llds_out_instr.m"
        {
#line 2034 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) " = ");
        }
#line 2035 "llds_out_instr.m"
        {
#line 2035 "llds_out_instr.m"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
        }
#line 2032 "llds_out_instr.m"
      }
#line 2036 "llds_out_instr.m"
    else
#line 2057 "llds_out_instr.m"
      if ((ll_backend__llds_out__llds_out_instr__MaybeForeignType_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2094 "llds_out_instr.m"
        {
#line 2094 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__BuiltinType_18;

#line 2059 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__OrigType_11)) == (MR_mktag((MR_Integer) 2)));
#line 2059 "llds_out_instr.m"
          if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 2059 "llds_out_instr.m"
            {
#line 2059 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__BuiltinType_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_instr__OrigType_11, (MR_Integer) 0)));
#line 2066 "llds_out_instr.m"
              if ((ll_backend__llds_out__llds_out_instr__BuiltinType_18 == (MR_Integer) 3))
#line 2081 "llds_out_instr.m"
                {
#line 2082 "llds_out_instr.m"
                  {
#line 2082 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
                  }
#line 2083 "llds_out_instr.m"
                  {
#line 2083 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) " = ");
                  }
#line 2086 "llds_out_instr.m"
                  {
#line 2086 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) "(MR_UnsignedChar) ");
                  }
#line 2087 "llds_out_instr.m"
                  {
#line 2087 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
                  }
#line 2081 "llds_out_instr.m"
                }
#line 2066 "llds_out_instr.m"
              else
#line 2066 "llds_out_instr.m"
                if ((ll_backend__llds_out__llds_out_instr__BuiltinType_18 == (MR_Integer) 1))
#line 2067 "llds_out_instr.m"
                  {
#line 2067 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__ActualType_19;

#line 2068 "llds_out_instr.m"
                    {
#line 2068 "llds_out_instr.m"
                      ll_backend__llds__lval_type_2_p_0(ll_backend__llds_out__llds_out_instr__Lval_8, &ll_backend__llds_out__llds_out_instr__ActualType_19);
                    }
#line 2069 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__ActualType_19 == (MR_Integer) 9);
#line 2073 "llds_out_instr.m"
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 2070 "llds_out_instr.m"
                      {
#line 2070 "llds_out_instr.m"
                        {
#line 2070 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
                        }
#line 2071 "llds_out_instr.m"
                        {
#line 2071 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) " = ");
                        }
#line 2072 "llds_out_instr.m"
                        {
#line 2072 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
                        }
#line 2070 "llds_out_instr.m"
                      }
#line 2073 "llds_out_instr.m"
                    else
#line 2074 "llds_out_instr.m"
                      {
#line 2074 "llds_out_instr.m"
                        {
#line 2074 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
                        }
#line 2075 "llds_out_instr.m"
                        {
#line 2075 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) " = ");
                        }
#line 2076 "llds_out_instr.m"
                        {
#line 2076 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "MR_float_to_word(");
                        }
#line 2077 "llds_out_instr.m"
                        {
#line 2077 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
                        }
#line 2078 "llds_out_instr.m"
                        {
#line 2078 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
#line 2074 "llds_out_instr.m"
                      }
#line 2067 "llds_out_instr.m"
                  }
#line 2066 "llds_out_instr.m"
                else
#line 2066 "llds_out_instr.m"
                  if ((ll_backend__llds_out__llds_out_instr__BuiltinType_18 == (MR_Integer) 0))
#line 2089 "llds_out_instr.m"
                    {
#line 2090 "llds_out_instr.m"
                      {
#line 2090 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
                      }
#line 2091 "llds_out_instr.m"
                      {
#line 2091 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0((MR_String) " = ");
                      }
#line 2092 "llds_out_instr.m"
                      {
#line 2092 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
                      }
#line 2089 "llds_out_instr.m"
                    }
#line 2066 "llds_out_instr.m"
                  else
#line 2061 "llds_out_instr.m"
                    {
#line 2062 "llds_out_instr.m"
                      {
#line 2062 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
                      }
#line 2063 "llds_out_instr.m"
                      {
#line 2063 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0((MR_String) " = ");
                      }
#line 2064 "llds_out_instr.m"
                      {
#line 2064 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Integer) 13);
                      }
#line 2065 "llds_out_instr.m"
                      {
#line 2065 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
                      }
#line 2061 "llds_out_instr.m"
                    }
#line 2059 "llds_out_instr.m"
            }
#line 2059 "llds_out_instr.m"
          else
#line 2095 "llds_out_instr.m"
            {
#line 2095 "llds_out_instr.m"
              {
#line 2095 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
              }
#line 2096 "llds_out_instr.m"
              {
#line 2096 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) " = ");
              }
#line 2097 "llds_out_instr.m"
              {
#line 2097 "llds_out_instr.m"
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
              }
#line 2095 "llds_out_instr.m"
            }
#line 2094 "llds_out_instr.m"
        }
#line 2057 "llds_out_instr.m"
      else
#line 2039 "llds_out_instr.m"
        {
#line 2039 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__ForeignTypeInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeForeignType_13, (MR_Integer) 0)));
#line 2039 "llds_out_instr.m"
          MR_String ll_backend__llds_out__llds_out_instr__ForeignType_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ForeignTypeInfo_15, (MR_Integer) 0)));
#line 2039 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__Assertions_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ForeignTypeInfo_15, (MR_Integer) 1)));

#line 2042 "llds_out_instr.m"
          {
#line 2042 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0, ((MR_Box) ((MR_Integer) 0)), ll_backend__llds_out__llds_out_instr__Assertions_17);
          }
#line 2048 "llds_out_instr.m"
          if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 2044 "llds_out_instr.m"
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
                ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Integer) 13);
              }
#line 2047 "llds_out_instr.m"
              {
#line 2047 "llds_out_instr.m"
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
              }
#line 2044 "llds_out_instr.m"
            }
#line 2048 "llds_out_instr.m"
          else
#line 2049 "llds_out_instr.m"
            {
#line 2049 "llds_out_instr.m"
              {
#line 2049 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_MAYBE_BOX_FOREIGN_TYPE(");
              }
#line 2050 "llds_out_instr.m"
              {
#line 2050 "llds_out_instr.m"
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__ForeignType_16);
              }
#line 2051 "llds_out_instr.m"
              {
#line 2051 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
#line 2052 "llds_out_instr.m"
              {
#line 2052 "llds_out_instr.m"
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
              }
#line 2053 "llds_out_instr.m"
              {
#line 2053 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
#line 2054 "llds_out_instr.m"
              {
#line 2054 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
              }
#line 2055 "llds_out_instr.m"
              {
#line 2055 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 2049 "llds_out_instr.m"
            }
#line 2039 "llds_out_instr.m"
        }
#line 2101 "llds_out_instr.m"
    {
#line 2101 "llds_out_instr.m"
      mercury__io__write_string_3_p_0((MR_String) ";\n");
#line 2101 "llds_out_instr.m"
      return;
    }
#line 2027 "llds_out_instr.m"
  }
#line 2024 "llds_out_instr.m"
}

#line 2006 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_p_0(
#line 2006 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 2006 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
#line 2006 "llds_out_instr.m"
{
#line 2009 "llds_out_instr.m"
  while (MR_TRUE)
#line 2009 "llds_out_instr.m"
    {
#line 2009 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 2009 "llds_out_instr.m"
      {
#line 2009 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 2009 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2009 "llds_out_instr.m"
          {
#line 2009 "llds_out_instr.m"
          }
#line 2009 "llds_out_instr.m"
        else
#line 2010 "llds_out_instr.m"
          {
#line 2010 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Output_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
#line 2010 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Outputs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
#line 2010 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__IsDummy_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_10, (MR_Integer) 2)));
#line 2011 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___Lval_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_10, (MR_Integer) 0)));
#line 2011 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___VarType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_10, (MR_Integer) 1)));
#line 2011 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___OrigType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_10, (MR_Integer) 3)));
#line 2011 "llds_out_instr.m"
            MR_String ll_backend__llds_out__llds_out_instr___VarName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_10, (MR_Integer) 4)));
#line 2011 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___MaybeForeignType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_10, (MR_Integer) 5)));
#line 2011 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___BoxPolicy_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_10, (MR_Integer) 6)));

#line 2015 "llds_out_instr.m"
            if ((ll_backend__llds_out__llds_out_instr__IsDummy_15 == (MR_Integer) 0))
#line 2014 "llds_out_instr.m"
              {
#line 2014 "llds_out_instr.m"
              }
#line 2015 "llds_out_instr.m"
            else
#line 2017 "llds_out_instr.m"
              {
#line 2017 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__output_foreign_proc_output_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Output_10);
              }
#line 2019 "llds_out_instr.m"
            /* direct tailcall eliminated */
#line 2019 "llds_out_instr.m"
            {
#line 2019 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Outputs_11;

#line 2019 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 2019 "llds_out_instr.m"
            }
#line 2019 "llds_out_instr.m"
            continue;
#line 2010 "llds_out_instr.m"
          }
#line 2009 "llds_out_instr.m"
      }
#line 2009 "llds_out_instr.m"
      break;
#line 2009 "llds_out_instr.m"
    }
#line 2006 "llds_out_instr.m"
}

#line 1990 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_6_p_0(
#line 1990 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1990 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
#line 1990 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3,
#line 1990 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_4)
#line 1990 "llds_out_instr.m"
{
#line 1994 "llds_out_instr.m"
  while (MR_TRUE)
#line 1994 "llds_out_instr.m"
    {
#line 1994 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 1994 "llds_out_instr.m"
      {
#line 1994 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1994 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1994 "llds_out_instr.m"
          *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_4 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3;
#line 1994 "llds_out_instr.m"
        else
#line 1996 "llds_out_instr.m"
          {
#line 1996 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Output_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
#line 1996 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Outputs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
#line 1996 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Lval_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_15, (MR_Integer) 0)));
#line 1996 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_30_30;
#line 1997 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___VarType_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_15, (MR_Integer) 1)));
#line 1997 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___IsDummy_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_15, (MR_Integer) 2)));
#line 1997 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___OrigType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_15, (MR_Integer) 3)));
#line 1997 "llds_out_instr.m"
            MR_String ll_backend__llds_out__llds_out_instr___VarName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_15, (MR_Integer) 4)));
#line 1997 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_15, (MR_Integer) 5)));
#line 1997 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_15, (MR_Integer) 6)));

#line 1999 "llds_out_instr.m"
            {
#line 1999 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_data__output_record_lval_decls_tab_6_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Lval_19, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_30_30);
            }
#line 2000 "llds_out_instr.m"
            /* direct tailcall eliminated */
#line 2000 "llds_out_instr.m"
            {
#line 2000 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Outputs_16;
#line 2000 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0__tmp_copy_3 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_30_30;

#line 2000 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0__tmp_copy_3;
#line 2000 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 2000 "llds_out_instr.m"
            }
#line 2000 "llds_out_instr.m"
            continue;
#line 1996 "llds_out_instr.m"
          }
#line 1994 "llds_out_instr.m"
      }
#line 1994 "llds_out_instr.m"
      break;
#line 1994 "llds_out_instr.m"
    }
#line 1990 "llds_out_instr.m"
}

#line 1897 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_p_0(
#line 1897 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1897 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
#line 1897 "llds_out_instr.m"
{
#line 1900 "llds_out_instr.m"
  while (MR_TRUE)
#line 1900 "llds_out_instr.m"
    {
#line 1900 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 1900 "llds_out_instr.m"
      {
#line 1900 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1900 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1900 "llds_out_instr.m"
          {
#line 1900 "llds_out_instr.m"
          }
#line 1900 "llds_out_instr.m"
        else
#line 1901 "llds_out_instr.m"
          {
#line 1901 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Input_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
#line 1901 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Inputs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
#line 1901 "llds_out_instr.m"
            MR_String ll_backend__llds_out__llds_out_instr__VarName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_10, (MR_Integer) 0)));
#line 1901 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__VarType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_10, (MR_Integer) 1)));
#line 1901 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__IsDummy_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_10, (MR_Integer) 2)));
#line 1901 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___OrigType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_10, (MR_Integer) 3)));
#line 1901 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___Rval_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_10, (MR_Integer) 4)));
#line 1901 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___MaybeForeignTypeInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_10, (MR_Integer) 5)));
#line 1901 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___BoxPolicy_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_10, (MR_Integer) 6)));

#line 1918 "llds_out_instr.m"
            if ((ll_backend__llds_out__llds_out_instr__IsDummy_15 == (MR_Integer) 0))
#line 1915 "llds_out_instr.m"
              {
#line 1910 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__TypeInfo_33_33;
#line 1910 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__VarTypeCtor_20;
#line 1910 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__V_25_25;
#line 1910 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__V_32_32;

#line 1910 "llds_out_instr.m"
                {
#line 1910 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_instr__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ll_backend__llds_out__llds_out_instr__VarType_14, &ll_backend__llds_out__llds_out_instr__VarTypeCtor_20, &ll_backend__llds_out__llds_out_instr__V_32_32);
                }
#line 1910 "llds_out_instr.m"
                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1910 "llds_out_instr.m"
                  {
#line 2577 "ll_backend.llds_out.llds_out_instr.c"
                    ll_backend__llds_out__llds_out_instr__TypeInfo_33_33 = (MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[5];
#line 1910 "llds_out_instr.m"
                    {
#line 1910 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_instr__TypeInfo_33_33, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_32_32)));
                    }
#line 1910 "llds_out_instr.m"
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1910 "llds_out_instr.m"
                      {
#line 1911 "llds_out_instr.m"
                        {
#line 1911 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_instr__V_25_25 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(ll_backend__llds_out__llds_out_instr__VarTypeCtor_20);
                        }
#line 1912 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_25_25 == (MR_Integer) 0);
#line 1910 "llds_out_instr.m"
                      }
#line 1910 "llds_out_instr.m"
                  }
#line 1915 "llds_out_instr.m"
                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1912 "llds_out_instr.m"
                  {
#line 1912 "llds_out_instr.m"
                  }
#line 1915 "llds_out_instr.m"
                else
#line 1916 "llds_out_instr.m"
                  {
#line 1916 "llds_out_instr.m"
                    MR_String ll_backend__llds_out__llds_out_instr__V_26_26;
#line 1916 "llds_out_instr.m"
                    MR_String ll_backend__llds_out__llds_out_instr__V_29_29;

#line 1916 "llds_out_instr.m"
                    {
#line 1916 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__V_29_29 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_instr__VarName_13, (MR_String) " = 0;\n");
                    }
#line 1916 "llds_out_instr.m"
                    {
#line 1916 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ll_backend__llds_out__llds_out_instr__V_29_29);
                    }
#line 1916 "llds_out_instr.m"
                    {
#line 1916 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__V_26_26);
                    }
#line 1916 "llds_out_instr.m"
                  }
#line 1915 "llds_out_instr.m"
              }
#line 1918 "llds_out_instr.m"
            else
#line 1930 "llds_out_instr.m"
              {
#line 1933 "llds_out_instr.m"
                {
#line 1933 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "\t");
                }
#line 1939 "llds_out_instr.m"
                if ((ll_backend__llds_out__llds_out_instr___BoxPolicy_19 == (MR_Integer) 1))
#line 1935 "llds_out_instr.m"
                  {
#line 1936 "llds_out_instr.m"
                    {
#line 1936 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_13);
                    }
#line 1937 "llds_out_instr.m"
                    {
#line 1937 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) " = ");
                    }
#line 1938 "llds_out_instr.m"
                    {
#line 1938 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr___Rval_17, (MR_Integer) 13);
                    }
#line 1935 "llds_out_instr.m"
                  }
#line 1939 "llds_out_instr.m"
                else
#line 1972 "llds_out_instr.m"
                  if ((ll_backend__llds_out__llds_out_instr___MaybeForeignTypeInfo_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1973 "llds_out_instr.m"
                    {
#line 1976 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_54_54;

#line 1974 "llds_out_instr.m"
                      {
#line 1974 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_13);
                      }
#line 1975 "llds_out_instr.m"
                      {
#line 1975 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0((MR_String) " = ");
                      }
#line 1976 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr___OrigType_16)) == (MR_mktag((MR_Integer) 2)));
#line 1976 "llds_out_instr.m"
                      if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1976 "llds_out_instr.m"
                        {
#line 1976 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_instr__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_instr___OrigType_16, (MR_Integer) 0)));
#line 1976 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_54_54 == (MR_Integer) 2);
#line 1976 "llds_out_instr.m"
                        }
#line 1979 "llds_out_instr.m"
                      if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1977 "llds_out_instr.m"
                        {
#line 1977 "llds_out_instr.m"
                          {
#line 1977 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Integer) 10);
                          }
#line 1978 "llds_out_instr.m"
                          {
#line 1978 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr___Rval_17, (MR_Integer) 13);
                          }
#line 1977 "llds_out_instr.m"
                        }
#line 1979 "llds_out_instr.m"
                      else
#line 1981 "llds_out_instr.m"
                        {
#line 1979 "llds_out_instr.m"
                          MR_Word ll_backend__llds_out__llds_out_instr__V_59_59;

#line 1979 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr___OrigType_16)) == (MR_mktag((MR_Integer) 2)));
#line 1979 "llds_out_instr.m"
                          if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1979 "llds_out_instr.m"
                            {
#line 1979 "llds_out_instr.m"
                              ll_backend__llds_out__llds_out_instr__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_instr___OrigType_16, (MR_Integer) 0)));
#line 1979 "llds_out_instr.m"
                              ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_59_59 == (MR_Integer) 1);
#line 1979 "llds_out_instr.m"
                            }
#line 1981 "llds_out_instr.m"
                          if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1980 "llds_out_instr.m"
                            {
#line 1980 "llds_out_instr.m"
                              {
#line 1980 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr___Rval_17, (MR_Integer) 9);
                              }
#line 1980 "llds_out_instr.m"
                            }
#line 1981 "llds_out_instr.m"
                          else
#line 1982 "llds_out_instr.m"
                            {
#line 1982 "llds_out_instr.m"
                              {
#line 1982 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr___Rval_17, (MR_Integer) 13);
                              }
#line 1982 "llds_out_instr.m"
                            }
#line 1981 "llds_out_instr.m"
                        }
#line 1973 "llds_out_instr.m"
                    }
#line 1972 "llds_out_instr.m"
                  else
#line 1942 "llds_out_instr.m"
                    {
#line 1942 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__ForeignTypeInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr___MaybeForeignTypeInfo_18, (MR_Integer) 0)));
#line 1942 "llds_out_instr.m"
                      MR_String ll_backend__llds_out__llds_out_instr__ForeignType_47 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ForeignTypeInfo_46, (MR_Integer) 0)));
#line 1942 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__Assertions_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ForeignTypeInfo_46, (MR_Integer) 1)));

#line 1951 "llds_out_instr.m"
                      {
#line 1951 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__succeeded = backend_libs__export__c_type_is_word_sized_int_or_ptr_1_p_0(ll_backend__llds_out__llds_out_instr__ForeignType_47);
                      }
#line 1952 "llds_out_instr.m"
                      if (!(ll_backend__llds_out__llds_out_instr__succeeded))
#line 1953 "llds_out_instr.m"
                        {
#line 1953 "llds_out_instr.m"
                          {
#line 1953 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0, ((MR_Box) ((MR_Integer) 0)), ll_backend__llds_out__llds_out_instr__Assertions_48);
                          }
#line 1953 "llds_out_instr.m"
                        }
#line 1963 "llds_out_instr.m"
                      if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1959 "llds_out_instr.m"
                        {
#line 1959 "llds_out_instr.m"
                          MR_String ll_backend__llds_out__llds_out_instr__V_68_68;
#line 1959 "llds_out_instr.m"
                          MR_String ll_backend__llds_out__llds_out_instr__V_71_71;

#line 1959 "llds_out_instr.m"
                          {
#line 1959 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_13);
                          }
#line 1960 "llds_out_instr.m"
                          {
#line 1960 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) " = ");
                          }
#line 1961 "llds_out_instr.m"
                          {
#line 1961 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__V_71_71 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_instr__ForeignType_47, (MR_String) ") ");
                          }
#line 1961 "llds_out_instr.m"
                          {
#line 1961 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__V_68_68 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__llds_out__llds_out_instr__V_71_71);
                          }
#line 1961 "llds_out_instr.m"
                          {
#line 1961 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__V_68_68);
                          }
#line 1962 "llds_out_instr.m"
                          {
#line 1962 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr___Rval_17, (MR_Integer) 13);
                          }
#line 1959 "llds_out_instr.m"
                        }
#line 1963 "llds_out_instr.m"
                      else
#line 1964 "llds_out_instr.m"
                        {
#line 1964 "llds_out_instr.m"
                          {
#line 1964 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) "MR_MAYBE_UNBOX_FOREIGN_TYPE(");
                          }
#line 1965 "llds_out_instr.m"
                          {
#line 1965 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__ForeignType_47);
                          }
#line 1966 "llds_out_instr.m"
                          {
#line 1966 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) ", ");
                          }
#line 1967 "llds_out_instr.m"
                          {
#line 1967 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr___Rval_17, (MR_Integer) 13);
                          }
#line 1968 "llds_out_instr.m"
                          {
#line 1968 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) ", ");
                          }
#line 1969 "llds_out_instr.m"
                          {
#line 1969 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_13);
                          }
#line 1970 "llds_out_instr.m"
                          {
#line 1970 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) ")");
                          }
#line 1964 "llds_out_instr.m"
                        }
#line 1942 "llds_out_instr.m"
                    }
#line 1986 "llds_out_instr.m"
                {
#line 1986 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) ";\n");
                }
#line 1930 "llds_out_instr.m"
              }
#line 1922 "llds_out_instr.m"
            /* direct tailcall eliminated */
#line 1922 "llds_out_instr.m"
            {
#line 1922 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Inputs_11;

#line 1922 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 1922 "llds_out_instr.m"
            }
#line 1922 "llds_out_instr.m"
            continue;
#line 1901 "llds_out_instr.m"
          }
#line 1900 "llds_out_instr.m"
      }
#line 1900 "llds_out_instr.m"
      break;
#line 1900 "llds_out_instr.m"
    }
#line 1897 "llds_out_instr.m"
}

#line 1882 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_6_p_0(
#line 1882 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1882 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
#line 1882 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3,
#line 1882 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_4)
#line 1882 "llds_out_instr.m"
{
#line 1886 "llds_out_instr.m"
  while (MR_TRUE)
#line 1886 "llds_out_instr.m"
    {
#line 1886 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 1886 "llds_out_instr.m"
      {
#line 1886 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1886 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1886 "llds_out_instr.m"
          *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_4 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3;
#line 1886 "llds_out_instr.m"
        else
#line 1888 "llds_out_instr.m"
          {
#line 1888 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Input_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
#line 1888 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Inputs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
#line 1888 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Rval_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_15, (MR_Integer) 4)));
#line 1888 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_30_30;
#line 1889 "llds_out_instr.m"
            MR_String ll_backend__llds_out__llds_out_instr___VarName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_15, (MR_Integer) 0)));
#line 1889 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___VarType_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_15, (MR_Integer) 1)));
#line 1889 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___IsDummy_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_15, (MR_Integer) 2)));
#line 1889 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___OrigType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_15, (MR_Integer) 3)));
#line 1889 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_15, (MR_Integer) 5)));
#line 1889 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_15, (MR_Integer) 6)));

#line 1891 "llds_out_instr.m"
            {
#line 1891 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_data__output_record_rval_decls_tab_6_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Rval_23, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_30_30);
            }
#line 1892 "llds_out_instr.m"
            /* direct tailcall eliminated */
#line 1892 "llds_out_instr.m"
            {
#line 1892 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Inputs_16;
#line 1892 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0__tmp_copy_3 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_30_30;

#line 1892 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0__tmp_copy_3;
#line 1892 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 1892 "llds_out_instr.m"
            }
#line 1892 "llds_out_instr.m"
            continue;
#line 1888 "llds_out_instr.m"
          }
#line 1886 "llds_out_instr.m"
      }
#line 1886 "llds_out_instr.m"
      break;
#line 1886 "llds_out_instr.m"
    }
#line 1882 "llds_out_instr.m"
}

#line 1866 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_p_0(
#line 1866 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1)
#line 1866 "llds_out_instr.m"
{
#line 1869 "llds_out_instr.m"
  while (MR_TRUE)
#line 1869 "llds_out_instr.m"
    {
#line 1869 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 1869 "llds_out_instr.m"
      {
#line 1869 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1869 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1869 "llds_out_instr.m"
          {
#line 1869 "llds_out_instr.m"
          }
#line 1869 "llds_out_instr.m"
        else
#line 1870 "llds_out_instr.m"
          {
#line 1870 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Decl_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 0)));
#line 1870 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Decls_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 1)));
#line 1870 "llds_out_instr.m"
            MR_String ll_backend__llds_out__llds_out_instr__TypeString_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Decl_7, (MR_Integer) 1)));
#line 1870 "llds_out_instr.m"
            MR_String ll_backend__llds_out__llds_out_instr__VarName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Decl_7, (MR_Integer) 2)));
#line 1872 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr___Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Decl_7, (MR_Integer) 0)));

#line 1873 "llds_out_instr.m"
            {
#line 1873 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 1874 "llds_out_instr.m"
            {
#line 1874 "llds_out_instr.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__TypeString_11);
            }
#line 1875 "llds_out_instr.m"
            {
#line 1875 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 1876 "llds_out_instr.m"
            {
#line 1876 "llds_out_instr.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
            }
#line 1877 "llds_out_instr.m"
            {
#line 1877 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) ";\n");
            }
#line 1878 "llds_out_instr.m"
            /* direct tailcall eliminated */
#line 1878 "llds_out_instr.m"
            {
#line 1878 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_instr__Decls_8;

#line 1878 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__HeadVar__1_1 = ll_backend__llds_out__llds_out_instr__HeadVar__1__tmp_copy_1;
#line 1878 "llds_out_instr.m"
            }
#line 1878 "llds_out_instr.m"
            continue;
#line 1870 "llds_out_instr.m"
          }
#line 1869 "llds_out_instr.m"
      }
#line 1869 "llds_out_instr.m"
      break;
#line 1869 "llds_out_instr.m"
    }
#line 1866 "llds_out_instr.m"
}

#line 1816 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_p_0(
#line 1816 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 1816 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Component_6)
#line 1816 "llds_out_instr.m"
{
#line 1821 "llds_out_instr.m"
  {
#line 1821 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1821 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__Component_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1860 "llds_out_instr.m"
      {
#line 1860 "llds_out_instr.m"
      }
#line 1821 "llds_out_instr.m"
    else
#line 1821 "llds_out_instr.m"
      if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Component_6)) == (MR_mktag((MR_Integer) 1))))
#line 1821 "llds_out_instr.m"
        {
#line 1821 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__Inputs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 0)));

#line 1822 "llds_out_instr.m"
          {
#line 1822 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Inputs_8);
#line 1822 "llds_out_instr.m"
            return;
          }
#line 1821 "llds_out_instr.m"
        }
#line 1821 "llds_out_instr.m"
      else
#line 1821 "llds_out_instr.m"
        if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Component_6)) == (MR_mktag((MR_Integer) 2))))
#line 1824 "llds_out_instr.m"
          {
#line 1824 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Outputs_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 0)));

#line 1825 "llds_out_instr.m"
            {
#line 1825 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Outputs_9);
#line 1825 "llds_out_instr.m"
              return;
            }
#line 1824 "llds_out_instr.m"
          }
#line 1821 "llds_out_instr.m"
        else
#line 1821 "llds_out_instr.m"
          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1857 "llds_out_instr.m"
            {
#line 1857 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__AllocId_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 1)));

#line 1858 "llds_out_instr.m"
              {
#line 1858 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__output_alloc_site_id_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__AllocId_18);
#line 1858 "llds_out_instr.m"
                return;
              }
#line 1857 "llds_out_instr.m"
            }
#line 1821 "llds_out_instr.m"
          else
#line 1821 "llds_out_instr.m"
            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1851 "llds_out_instr.m"
              {
#line 1851 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__Label_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 1)));
#line 1851 "llds_out_instr.m"
                MR_String ll_backend__llds_out__llds_out_instr__V_22_22;
#line 1851 "llds_out_instr.m"
                MR_String ll_backend__llds_out__llds_out_instr__V_25_25;
#line 1851 "llds_out_instr.m"
                MR_String ll_backend__llds_out__llds_out_instr__V_26_26;

#line 1853 "llds_out_instr.m"
                {
#line 1853 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_instr__V_26_26 = ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_f_0();
                }
#line 1853 "llds_out_instr.m"
                {
#line 1853 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_instr__V_25_25 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_instr__V_26_26, (MR_String) ") MR_GOTO_LAB(");
                }
#line 1853 "llds_out_instr.m"
                {
#line 1853 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_instr__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "if (!", ll_backend__llds_out__llds_out_instr__V_25_25);
                }
#line 1852 "llds_out_instr.m"
                {
#line 1852 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__V_22_22);
                }
#line 1854 "llds_out_instr.m"
                {
#line 1854 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_17);
                }
#line 1855 "llds_out_instr.m"
                {
#line 1855 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1855 "llds_out_instr.m"
                  return;
                }
#line 1851 "llds_out_instr.m"
              }
#line 1821 "llds_out_instr.m"
            else
#line 1821 "llds_out_instr.m"
              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1848 "llds_out_instr.m"
                {
#line 1848 "llds_out_instr.m"
                  MR_String ll_backend__llds_out__llds_out_instr__C_Code_46 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 4)));
#line 1848 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 1)));
#line 1848 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 2)));
#line 1848 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 3)));

#line 1849 "llds_out_instr.m"
                  {
#line 1849 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__C_Code_46);
#line 1849 "llds_out_instr.m"
                    return;
                  }
#line 1848 "llds_out_instr.m"
                }
#line 1821 "llds_out_instr.m"
              else
#line 1827 "llds_out_instr.m"
                {
#line 1827 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__MaybeContext_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 1)));
#line 1827 "llds_out_instr.m"
                  MR_String ll_backend__llds_out__llds_out_instr__C_Code_12 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 3)));
#line 1827 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 2)));

#line 1828 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_instr__succeeded = (strcmp(ll_backend__llds_out__llds_out_instr__C_Code_12, (MR_String) "") == 0);
#line 1830 "llds_out_instr.m"
                  if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1828 "llds_out_instr.m"
                    {
#line 1828 "llds_out_instr.m"
                    }
#line 1830 "llds_out_instr.m"
                  else
#line 1840 "llds_out_instr.m"
                    if ((ll_backend__llds_out__llds_out_instr__MaybeContext_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1841 "llds_out_instr.m"
                      {
#line 1842 "llds_out_instr.m"
                        {
#line 1842 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "{\n");
                        }
#line 1843 "llds_out_instr.m"
                        {
#line 1843 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__C_Code_12);
                        }
#line 1844 "llds_out_instr.m"
                        {
#line 1844 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) ";}\n");
#line 1844 "llds_out_instr.m"
                          return;
                        }
#line 1841 "llds_out_instr.m"
                      }
#line 1840 "llds_out_instr.m"
                    else
#line 1834 "llds_out_instr.m"
                      {
#line 1834 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeContext_10, (MR_Integer) 0)));

#line 1835 "llds_out_instr.m"
                        {
#line 1835 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "{\n");
                        }
#line 1836 "llds_out_instr.m"
                        {
#line 1836 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_util__output_set_line_num_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Context_13);
                        }
#line 1837 "llds_out_instr.m"
                        {
#line 1837 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__C_Code_12);
                        }
#line 1838 "llds_out_instr.m"
                        {
#line 1838 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) ";}\n");
                        }
#line 1839 "llds_out_instr.m"
                        {
#line 1839 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_util__output_reset_line_num_3_p_0(ll_backend__llds_out__llds_out_instr__Info_5);
#line 1839 "llds_out_instr.m"
                          return;
                        }
#line 1834 "llds_out_instr.m"
                      }
#line 1827 "llds_out_instr.m"
                }
#line 1821 "llds_out_instr.m"
  }
#line 1816 "llds_out_instr.m"
}

#line 1795 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_p_0(
#line 1795 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1)
#line 1795 "llds_out_instr.m"
{
#line 1798 "llds_out_instr.m"
  {
#line 1798 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1798 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == (MR_Integer) 1))
#line 1800 "llds_out_instr.m"
      {
#line 1801 "llds_out_instr.m"
        {
#line 1801 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "MR_commit");
#line 1801 "llds_out_instr.m"
          return;
        }
#line 1800 "llds_out_instr.m"
      }
#line 1798 "llds_out_instr.m"
    else
#line 1798 "llds_out_instr.m"
      if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == (MR_Integer) 3))
#line 1804 "llds_out_instr.m"
        {
#line 1805 "llds_out_instr.m"
          {
#line 1805 "llds_out_instr.m"
            mercury__io__write_string_3_p_0((MR_String) "MR_exception");
#line 1805 "llds_out_instr.m"
            return;
          }
#line 1804 "llds_out_instr.m"
        }
#line 1798 "llds_out_instr.m"
      else
#line 1798 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == (MR_Integer) 5))
#line 1808 "llds_out_instr.m"
          {
#line 1809 "llds_out_instr.m"
            {
#line 1809 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "MR_gc");
#line 1809 "llds_out_instr.m"
              return;
            }
#line 1808 "llds_out_instr.m"
          }
#line 1798 "llds_out_instr.m"
        else
#line 1798 "llds_out_instr.m"
          if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == (MR_Integer) 4))
#line 1806 "llds_out_instr.m"
            {
#line 1807 "llds_out_instr.m"
              {
#line 1807 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_retry");
#line 1807 "llds_out_instr.m"
                return;
              }
#line 1806 "llds_out_instr.m"
            }
#line 1798 "llds_out_instr.m"
          else
#line 1798 "llds_out_instr.m"
            if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == (MR_Integer) 2))
#line 1802 "llds_out_instr.m"
              {
#line 1803 "llds_out_instr.m"
                {
#line 1803 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "MR_solve");
#line 1803 "llds_out_instr.m"
                  return;
                }
#line 1802 "llds_out_instr.m"
              }
#line 1798 "llds_out_instr.m"
            else
#line 1798 "llds_out_instr.m"
              {
#line 1799 "llds_out_instr.m"
                {
#line 1799 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "MR_undo");
#line 1799 "llds_out_instr.m"
                  return;
                }
#line 1798 "llds_out_instr.m"
              }
#line 1798 "llds_out_instr.m"
  }
#line 1795 "llds_out_instr.m"
}

#line 1784 "llds_out_instr.m"
static MR_Integer MR_CALL 
ll_backend__llds_out__llds_out_instr__max_leaf_stack_frame_size_0_f_0(void)
#line 1784 "llds_out_instr.m"
{
#line 1788 "llds_out_instr.m"
  {
#line 1788 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1788 "llds_out_instr.m"
    return (MR_Integer) 32;
#line 1788 "llds_out_instr.m"
  }
#line 1784 "llds_out_instr.m"
}

#line 1775 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_p_0(
#line 1775 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 1775 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__EmbeddedFrame_6)
#line 1775 "llds_out_instr.m"
{
#line 1778 "llds_out_instr.m"
  {
#line 1778 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 1778 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__MainStackId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__EmbeddedFrame_6, (MR_Integer) 0)));
#line 1778 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__LastSlot_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__EmbeddedFrame_6, (MR_Integer) 2)));
#line 1778 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__FrameStartRval_11;
#line 1779 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr___FirstSlot_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__EmbeddedFrame_6, (MR_Integer) 1)));

#line 1781 "llds_out_instr.m"
    {
#line 1781 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__FrameStartRval_11 = ll_backend__llds__stack_slot_num_to_lval_ref_2_f_0(ll_backend__llds_out__llds_out_instr__MainStackId_8, ll_backend__llds_out__llds_out_instr__LastSlot_10);
    }
#line 1782 "llds_out_instr.m"
    {
#line 1782 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__FrameStartRval_11, (MR_Integer) 11);
#line 1782 "llds_out_instr.m"
      return;
    }
#line 1778 "llds_out_instr.m"
  }
#line 1775 "llds_out_instr.m"
}

#line 1750 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_alloc_site_id_4_p_0(
#line 1750 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 1750 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__AllocId_6)
#line 1750 "llds_out_instr.m"
{
#line 1753 "llds_out_instr.m"
  {
#line 1753 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 1753 "llds_out_instr.m"
    MR_String ll_backend__llds_out__llds_out_instr__MangledModuleName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 1)));
#line 1753 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__AllocSiteMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)));
#line 1753 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__AllocSiteSlotName_10;
#line 1754 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 0)));
#line 1754 "llds_out_instr.m"
    MR_String ll_backend__llds_out__llds_out_instr__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 2)));
#line 1754 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 3)));
#line 1754 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 4)));
#line 1754 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 5)));
#line 1754 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1754 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 8)));
#line 1756 "llds_out_instr.m"
    MR_Box ll_backend__llds_out__llds_out_instr__conv0_AllocSiteSlotName_10;

#line 1756 "llds_out_instr.m"
    {
#line 1756 "llds_out_instr.m"
      mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__llds_out__llds_out_instr__AllocSiteMap_9, ((MR_Box) (ll_backend__llds_out__llds_out_instr__AllocId_6)), &ll_backend__llds_out__llds_out_instr__conv0_AllocSiteSlotName_10);
    }
#line 1756 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__AllocSiteSlotName_10 = ((MR_Word) ll_backend__llds_out__llds_out_instr__conv0_AllocSiteSlotName_10);
#line 1757 "llds_out_instr.m"
    {
#line 1757 "llds_out_instr.m"
      ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__llds_out__llds_out_instr__MangledModuleName_8, ll_backend__llds_out__llds_out_instr__AllocSiteSlotName_10);
#line 1757 "llds_out_instr.m"
      return;
    }
#line 1753 "llds_out_instr.m"
  }
#line 1750 "llds_out_instr.m"
}

#line 1738 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_maybe_alloc_site_id_4_p_0(
#line 1738 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 1738 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeAllocId_6)
#line 1738 "llds_out_instr.m"
{
#line 1743 "llds_out_instr.m"
  {
#line 1743 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1743 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__MaybeAllocId_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1746 "llds_out_instr.m"
      {
#line 1747 "llds_out_instr.m"
        {
#line 1747 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "NULL");
#line 1747 "llds_out_instr.m"
          return;
        }
#line 1746 "llds_out_instr.m"
      }
#line 1743 "llds_out_instr.m"
    else
#line 1743 "llds_out_instr.m"
      {
#line 1743 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__AllocId_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeAllocId_6, (MR_Integer) 0)));
#line 1743 "llds_out_instr.m"
        MR_String ll_backend__llds_out__llds_out_instr__MangledModuleName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 1)));
#line 1743 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__AllocSiteMap_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)));
#line 1743 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__AllocSiteSlotName_21;
#line 1754 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 0)));
#line 1754 "llds_out_instr.m"
        MR_String ll_backend__llds_out__llds_out_instr__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 2)));
#line 1754 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 3)));
#line 1754 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 4)));
#line 1754 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 5)));
#line 1754 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1754 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1754 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 8)));
#line 1756 "llds_out_instr.m"
        MR_Box ll_backend__llds_out__llds_out_instr__conv0_AllocSiteSlotName_21;

#line 1756 "llds_out_instr.m"
        {
#line 1756 "llds_out_instr.m"
          mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__llds_out__llds_out_instr__AllocSiteMap_20, ((MR_Box) (ll_backend__llds_out__llds_out_instr__AllocId_8)), &ll_backend__llds_out__llds_out_instr__conv0_AllocSiteSlotName_21);
        }
#line 1756 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__AllocSiteSlotName_21 = ((MR_Word) ll_backend__llds_out__llds_out_instr__conv0_AllocSiteSlotName_21);
#line 1757 "llds_out_instr.m"
        {
#line 1757 "llds_out_instr.m"
          ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__llds_out__llds_out_instr__MangledModuleName_19, ll_backend__llds_out__llds_out_instr__AllocSiteSlotName_21);
#line 1757 "llds_out_instr.m"
          return;
        }
#line 1743 "llds_out_instr.m"
      }
#line 1743 "llds_out_instr.m"
  }
#line 1738 "llds_out_instr.m"
}

#line 1578 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_p_0(
#line 1578 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1)
#line 1578 "llds_out_instr.m"
{
#line 1581 "llds_out_instr.m"
  while (MR_TRUE)
#line 1581 "llds_out_instr.m"
    {
#line 1581 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 1581 "llds_out_instr.m"
      {
#line 1581 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1581 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1581 "llds_out_instr.m"
          {
#line 1581 "llds_out_instr.m"
          }
#line 1581 "llds_out_instr.m"
        else
#line 1582 "llds_out_instr.m"
          {
#line 1582 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__MaybeLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 0)));
#line 1582 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__MaybeLabels_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 1)));

#line 1583 "llds_out_instr.m"
            {
#line 1583 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) " MR_AND\n\t\t");
            }
#line 1591 "llds_out_instr.m"
            if ((ll_backend__llds_out__llds_out_instr__MaybeLabel_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1596 "llds_out_instr.m"
              {
#line 1597 "llds_out_instr.m"
                {
#line 1597 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "MR_ENTRY(MR_do_not_reached)");
                }
#line 1596 "llds_out_instr.m"
              }
#line 1591 "llds_out_instr.m"
            else
#line 1591 "llds_out_instr.m"
              {
#line 1591 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__Label_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeLabel_7, (MR_Integer) 0)));

#line 1592 "llds_out_instr.m"
                {
#line 1592 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "MR_LABEL_AP(");
                }
#line 1593 "llds_out_instr.m"
                {
#line 1593 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_20);
                }
#line 1594 "llds_out_instr.m"
                {
#line 1594 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
#line 1591 "llds_out_instr.m"
              }
#line 1585 "llds_out_instr.m"
            /* direct tailcall eliminated */
#line 1585 "llds_out_instr.m"
            {
#line 1585 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_instr__MaybeLabels_8;

#line 1585 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__HeadVar__1_1 = ll_backend__llds_out__llds_out_instr__HeadVar__1__tmp_copy_1;
#line 1585 "llds_out_instr.m"
            }
#line 1585 "llds_out_instr.m"
            continue;
#line 1582 "llds_out_instr.m"
          }
#line 1581 "llds_out_instr.m"
      }
#line 1581 "llds_out_instr.m"
      break;
#line 1581 "llds_out_instr.m"
    }
#line 1578 "llds_out_instr.m"
}

#line 1570 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_p_0(
#line 1570 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1)
#line 1570 "llds_out_instr.m"
{
#line 1573 "llds_out_instr.m"
  {
#line 1573 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1573 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1573 "llds_out_instr.m"
      {
#line 1573 "llds_out_instr.m"
      }
#line 1573 "llds_out_instr.m"
    else
#line 1574 "llds_out_instr.m"
      {
#line 1574 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__MaybeLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 0)));
#line 1574 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__MaybeLabels_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 1)));

#line 1591 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__MaybeLabel_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1596 "llds_out_instr.m"
          {
#line 1597 "llds_out_instr.m"
            {
#line 1597 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "MR_ENTRY(MR_do_not_reached)");
            }
#line 1596 "llds_out_instr.m"
          }
#line 1591 "llds_out_instr.m"
        else
#line 1591 "llds_out_instr.m"
          {
#line 1591 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Label_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeLabel_7, (MR_Integer) 0)));

#line 1592 "llds_out_instr.m"
            {
#line 1592 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "MR_LABEL_AP(");
            }
#line 1593 "llds_out_instr.m"
            {
#line 1593 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_18);
            }
#line 1594 "llds_out_instr.m"
            {
#line 1594 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
#line 1591 "llds_out_instr.m"
          }
#line 1576 "llds_out_instr.m"
        {
#line 1576 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_p_0(ll_backend__llds_out__llds_out_instr__MaybeLabels_8);
#line 1576 "llds_out_instr.m"
          return;
        }
#line 1574 "llds_out_instr.m"
      }
#line 1573 "llds_out_instr.m"
  }
#line 1570 "llds_out_instr.m"
}

#line 1422 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_goto_5_p_0(
#line 1422 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
#line 1422 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Target_7,
#line 1422 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_8)
#line 1422 "llds_out_instr.m"
{
#line 1427 "llds_out_instr.m"
  {
#line 1427 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1427 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__Target_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1500 "llds_out_instr.m"
      {
#line 1501 "llds_out_instr.m"
        {
#line 1501 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "MR_proceed();\n");
#line 1501 "llds_out_instr.m"
          return;
        }
#line 1500 "llds_out_instr.m"
      }
#line 1427 "llds_out_instr.m"
    else
#line 1427 "llds_out_instr.m"
      if ((ll_backend__llds_out__llds_out_instr__Target_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1522 "llds_out_instr.m"
        {
#line 1522 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__UseMacro_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1523 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
#line 1523 "llds_out_instr.m"
          MR_String ll_backend__llds_out__llds_out_instr__V_195_195 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
#line 1523 "llds_out_instr.m"
          MR_String ll_backend__llds_out__llds_out_instr__V_196_196 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
#line 1523 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
#line 1523 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
#line 1523 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
#line 1523 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)));
#line 1523 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_201_201 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 1523 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_202_202 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1523 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_203_203 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1523 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_204_204 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1523 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_205_205 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1523 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_206_206 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1523 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_207_207 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1523 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_208_208 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1523 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_209_209 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1523 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_210_210 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1523 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_211_211 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1523 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_212_212 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1523 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_213_213 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1523 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 8)));

#line 1527 "llds_out_instr.m"
          if ((ll_backend__llds_out__llds_out_instr__UseMacro_129 == (MR_Integer) 0))
#line 1528 "llds_out_instr.m"
            {
#line 1529 "llds_out_instr.m"
              {
#line 1529 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_GOTO(MR_ENTRY(MR_do_fail));\n");
#line 1529 "llds_out_instr.m"
                return;
              }
#line 1528 "llds_out_instr.m"
            }
#line 1527 "llds_out_instr.m"
          else
#line 1525 "llds_out_instr.m"
            {
#line 1526 "llds_out_instr.m"
              {
#line 1526 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_fail();\n");
#line 1526 "llds_out_instr.m"
                return;
              }
#line 1525 "llds_out_instr.m"
            }
#line 1522 "llds_out_instr.m"
        }
#line 1427 "llds_out_instr.m"
      else
#line 1427 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__Target_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 1558 "llds_out_instr.m"
          {
#line 1559 "llds_out_instr.m"
            {
#line 1559 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "MR_tailcall(MR_ENTRY(MR_do_not_reached),\n\t\t");
            }
#line 1561 "llds_out_instr.m"
            {
#line 1561 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_8);
            }
#line 1562 "llds_out_instr.m"
            {
#line 1562 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1562 "llds_out_instr.m"
              return;
            }
#line 1558 "llds_out_instr.m"
          }
#line 1427 "llds_out_instr.m"
        else
#line 1427 "llds_out_instr.m"
          if ((ll_backend__llds_out__llds_out_instr__Target_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1512 "llds_out_instr.m"
            {
#line 1512 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__UseMacro_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1513 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
#line 1513 "llds_out_instr.m"
              MR_String ll_backend__llds_out__llds_out_instr__V_174_174 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
#line 1513 "llds_out_instr.m"
              MR_String ll_backend__llds_out__llds_out_instr__V_175_175 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
#line 1513 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
#line 1513 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
#line 1513 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
#line 1513 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)));
#line 1513 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_180_180 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 1513 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_181_181 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1513 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_182_182 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1513 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_183_183 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1513 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_184_184 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1513 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_185_185 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1513 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_186_186 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1513 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_187_187 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1513 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_188_188 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1513 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_189_189 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1513 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_190_190 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1513 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_191_191 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1513 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_192_192 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1513 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 8)));

#line 1517 "llds_out_instr.m"
              if ((ll_backend__llds_out__llds_out_instr__UseMacro_19 == (MR_Integer) 0))
#line 1518 "llds_out_instr.m"
                {
#line 1519 "llds_out_instr.m"
                  {
#line 1519 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) "MR_GOTO(MR_ENTRY(MR_do_redo));\n");
#line 1519 "llds_out_instr.m"
                    return;
                  }
#line 1518 "llds_out_instr.m"
                }
#line 1517 "llds_out_instr.m"
              else
#line 1515 "llds_out_instr.m"
                {
#line 1516 "llds_out_instr.m"
                  {
#line 1516 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) "MR_redo();\n");
#line 1516 "llds_out_instr.m"
                    return;
                  }
#line 1515 "llds_out_instr.m"
                }
#line 1512 "llds_out_instr.m"
            }
#line 1427 "llds_out_instr.m"
          else
#line 1427 "llds_out_instr.m"
            if ((ll_backend__llds_out__llds_out_instr__Target_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1536 "llds_out_instr.m"
              {
#line 1537 "llds_out_instr.m"
                {
#line 1537 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "MR_GOTO(MR_ENTRY(MR_do_trace_redo_fail_deep));\n");
#line 1537 "llds_out_instr.m"
                  return;
                }
#line 1536 "llds_out_instr.m"
              }
#line 1427 "llds_out_instr.m"
            else
#line 1427 "llds_out_instr.m"
              if ((ll_backend__llds_out__llds_out_instr__Target_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1532 "llds_out_instr.m"
                {
#line 1533 "llds_out_instr.m"
                  {
#line 1533 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) "MR_GOTO(MR_ENTRY(MR_do_trace_redo_fail_shallow));\n");
#line 1533 "llds_out_instr.m"
                    return;
                  }
#line 1532 "llds_out_instr.m"
                }
#line 1427 "llds_out_instr.m"
              else
#line 1427 "llds_out_instr.m"
                if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Target_7)) == (MR_mktag((MR_Integer) 2))))
#line 1484 "llds_out_instr.m"
                  {
#line 1484 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__ProcLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_instr__Target_7, (MR_Integer) 0)));
#line 1484 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__ProfileCalls_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1485 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
#line 1485 "llds_out_instr.m"
                    MR_String ll_backend__llds_out__llds_out_instr__V_153_153 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
#line 1485 "llds_out_instr.m"
                    MR_String ll_backend__llds_out__llds_out_instr__V_154_154 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
#line 1485 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
#line 1485 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
#line 1485 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
#line 1485 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)));
#line 1485 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_159_159 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 1485 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_160_160 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1485 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_161_161 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1485 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_162_162 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1485 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_163_163 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1485 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_164_164 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1485 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_165_165 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1485 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_166_166 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1485 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_167_167 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1485 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_168_168 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1485 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_169_169 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1485 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_170_170 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1485 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_171_171 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1485 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 8)));

#line 1493 "llds_out_instr.m"
                    if ((ll_backend__llds_out__llds_out_instr__ProfileCalls_128 == (MR_Integer) 0))
#line 1494 "llds_out_instr.m"
                      {
#line 1495 "llds_out_instr.m"
                        {
#line 1495 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "MR_np_tailcall_ent(");
                        }
#line 1496 "llds_out_instr.m"
                        {
#line 1496 "llds_out_instr.m"
                          backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__ProcLabel_17);
                        }
#line 1497 "llds_out_instr.m"
                        {
#line 1497 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1497 "llds_out_instr.m"
                          return;
                        }
#line 1494 "llds_out_instr.m"
                      }
#line 1493 "llds_out_instr.m"
                    else
#line 1487 "llds_out_instr.m"
                      {
#line 1488 "llds_out_instr.m"
                        {
#line 1488 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "MR_tailcall(MR_ENTRY(");
                        }
#line 1489 "llds_out_instr.m"
                        {
#line 1489 "llds_out_instr.m"
                          backend_libs__name_mangle__output_proc_label_3_p_0(ll_backend__llds_out__llds_out_instr__ProcLabel_17);
                        }
#line 1490 "llds_out_instr.m"
                        {
#line 1490 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "),\n\t\t");
                        }
#line 1491 "llds_out_instr.m"
                        {
#line 1491 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_8);
                        }
#line 1492 "llds_out_instr.m"
                        {
#line 1492 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1492 "llds_out_instr.m"
                          return;
                        }
#line 1487 "llds_out_instr.m"
                      }
#line 1484 "llds_out_instr.m"
                  }
#line 1427 "llds_out_instr.m"
                else
#line 1427 "llds_out_instr.m"
                  if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Target_7)) == (MR_mktag((MR_Integer) 1))))
#line 1427 "llds_out_instr.m"
                    {
#line 1427 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__Label_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Target_7, (MR_Integer) 0)));
#line 1427 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__ProfileCalls_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1431 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
#line 1431 "llds_out_instr.m"
                      MR_String ll_backend__llds_out__llds_out_instr__V_132_132 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
#line 1431 "llds_out_instr.m"
                      MR_String ll_backend__llds_out__llds_out_instr__V_133_133 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
#line 1431 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
#line 1431 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
#line 1431 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
#line 1431 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)));
#line 1431 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_138_138 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 1431 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_139_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1431 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_140_140 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1431 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_141_141 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1431 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_142_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1431 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_143_143 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1431 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_144_144 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1431 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_145_145 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1431 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_146_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1431 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_147_147 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1431 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_148_148 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1431 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_149_149 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1431 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_150_150 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1431 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 8)));

#line 1447 "llds_out_instr.m"
                      if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Label_10)) == (MR_mktag((MR_Integer) 1))))
#line 1447 "llds_out_instr.m"
                        {
#line 1447 "llds_out_instr.m"
                          MR_Word ll_backend__llds_out__llds_out_instr__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Label_10, (MR_Integer) 0)));
#line 1433 "llds_out_instr.m"
                          MR_Word ll_backend__llds_out__llds_out_instr__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Label_10, (MR_Integer) 1)));

#line 1447 "llds_out_instr.m"
                          if ((ll_backend__llds_out__llds_out_instr__V_216_216 == (MR_Integer) 0))
#line 1471 "llds_out_instr.m"
                            if ((ll_backend__llds_out__llds_out_instr__ProfileCalls_11 == (MR_Integer) 0))
#line 1472 "llds_out_instr.m"
                              {
#line 1473 "llds_out_instr.m"
                                {
#line 1473 "llds_out_instr.m"
                                  mercury__io__write_string_3_p_0((MR_String) "MR_np_localtailcall(");
                                }
#line 1474 "llds_out_instr.m"
                                {
#line 1474 "llds_out_instr.m"
                                  ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_10);
                                }
#line 1475 "llds_out_instr.m"
                                {
#line 1475 "llds_out_instr.m"
                                  mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1475 "llds_out_instr.m"
                                  return;
                                }
#line 1472 "llds_out_instr.m"
                              }
#line 1471 "llds_out_instr.m"
                            else
#line 1465 "llds_out_instr.m"
                              {
#line 1466 "llds_out_instr.m"
                                {
#line 1466 "llds_out_instr.m"
                                  mercury__io__write_string_3_p_0((MR_String) "MR_localtailcall(");
                                }
#line 1467 "llds_out_instr.m"
                                {
#line 1467 "llds_out_instr.m"
                                  ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(ll_backend__llds_out__llds_out_instr__Label_10);
                                }
#line 1468 "llds_out_instr.m"
                                {
#line 1468 "llds_out_instr.m"
                                  mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                                }
#line 1469 "llds_out_instr.m"
                                {
#line 1469 "llds_out_instr.m"
                                  ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_8);
                                }
#line 1470 "llds_out_instr.m"
                                {
#line 1470 "llds_out_instr.m"
                                  mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1470 "llds_out_instr.m"
                                  return;
                                }
#line 1465 "llds_out_instr.m"
                              }
#line 1447 "llds_out_instr.m"
                          else
#line 1447 "llds_out_instr.m"
                            if ((ll_backend__llds_out__llds_out_instr__V_216_216 == (MR_Integer) 2))
#line 1441 "llds_out_instr.m"
                              if ((ll_backend__llds_out__llds_out_instr__ProfileCalls_11 == (MR_Integer) 0))
#line 1442 "llds_out_instr.m"
                                {
#line 1443 "llds_out_instr.m"
                                  {
#line 1443 "llds_out_instr.m"
                                    mercury__io__write_string_3_p_0((MR_String) "MR_np_tailcall_ent(");
                                  }
#line 1444 "llds_out_instr.m"
                                  {
#line 1444 "llds_out_instr.m"
                                    ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_10);
                                  }
#line 1445 "llds_out_instr.m"
                                  {
#line 1445 "llds_out_instr.m"
                                    mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1445 "llds_out_instr.m"
                                    return;
                                  }
#line 1442 "llds_out_instr.m"
                                }
#line 1441 "llds_out_instr.m"
                              else
#line 1435 "llds_out_instr.m"
                                {
#line 1436 "llds_out_instr.m"
                                  {
#line 1436 "llds_out_instr.m"
                                    mercury__io__write_string_3_p_0((MR_String) "MR_tailcall(");
                                  }
#line 1437 "llds_out_instr.m"
                                  {
#line 1437 "llds_out_instr.m"
                                    ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__Label_10);
                                  }
#line 1438 "llds_out_instr.m"
                                  {
#line 1438 "llds_out_instr.m"
                                    mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                                  }
#line 1439 "llds_out_instr.m"
                                  {
#line 1439 "llds_out_instr.m"
                                    ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_8);
                                  }
#line 1440 "llds_out_instr.m"
                                  {
#line 1440 "llds_out_instr.m"
                                    mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1440 "llds_out_instr.m"
                                    return;
                                  }
#line 1435 "llds_out_instr.m"
                                }
#line 1447 "llds_out_instr.m"
                            else
#line 1456 "llds_out_instr.m"
                              if ((ll_backend__llds_out__llds_out_instr__ProfileCalls_11 == (MR_Integer) 0))
#line 1457 "llds_out_instr.m"
                                {
#line 1458 "llds_out_instr.m"
                                  {
#line 1458 "llds_out_instr.m"
                                    mercury__io__write_string_3_p_0((MR_String) "MR_np_tailcall_ent(");
                                  }
#line 1459 "llds_out_instr.m"
                                  {
#line 1459 "llds_out_instr.m"
                                    ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_10);
                                  }
#line 1460 "llds_out_instr.m"
                                  {
#line 1460 "llds_out_instr.m"
                                    mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1460 "llds_out_instr.m"
                                    return;
                                  }
#line 1457 "llds_out_instr.m"
                                }
#line 1456 "llds_out_instr.m"
                              else
#line 1450 "llds_out_instr.m"
                                {
#line 1451 "llds_out_instr.m"
                                  {
#line 1451 "llds_out_instr.m"
                                    mercury__io__write_string_3_p_0((MR_String) "MR_tailcall(");
                                  }
#line 1452 "llds_out_instr.m"
                                  {
#line 1452 "llds_out_instr.m"
                                    ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__Label_10);
                                  }
#line 1453 "llds_out_instr.m"
                                  {
#line 1453 "llds_out_instr.m"
                                    mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                                  }
#line 1454 "llds_out_instr.m"
                                  {
#line 1454 "llds_out_instr.m"
                                    ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_8);
                                  }
#line 1455 "llds_out_instr.m"
                                  {
#line 1455 "llds_out_instr.m"
                                    mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1455 "llds_out_instr.m"
                                    return;
                                  }
#line 1450 "llds_out_instr.m"
                                }
#line 1447 "llds_out_instr.m"
                        }
#line 1447 "llds_out_instr.m"
                      else
#line 1478 "llds_out_instr.m"
                        {
#line 1479 "llds_out_instr.m"
                          {
#line 1479 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) "MR_GOTO_LAB(");
                          }
#line 1480 "llds_out_instr.m"
                          {
#line 1480 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_10);
                          }
#line 1481 "llds_out_instr.m"
                          {
#line 1481 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1481 "llds_out_instr.m"
                            return;
                          }
#line 1478 "llds_out_instr.m"
                        }
#line 1427 "llds_out_instr.m"
                    }
#line 1427 "llds_out_instr.m"
                  else
#line 1427 "llds_out_instr.m"
                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Target_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Target_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1549 "llds_out_instr.m"
                      {
#line 1549 "llds_out_instr.m"
                        MR_String ll_backend__llds_out__llds_out_instr__V_35_35;
#line 1549 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__Variant_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Target_7, (MR_Integer) 1)));

#line 1551 "llds_out_instr.m"
                        {
#line 1551 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "MR_set_prof_ho_caller_proc(");
                        }
#line 1552 "llds_out_instr.m"
                        {
#line 1552 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_8);
                        }
#line 1553 "llds_out_instr.m"
                        {
#line 1553 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) ");\n\t");
                        }
#line 1554 "llds_out_instr.m"
                        {
#line 1554 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "MR_np_tailcall_ent(do_call_class_method_");
                        }
#line 1555 "llds_out_instr.m"
                        {
#line 1555 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_instr__V_35_35 = ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_f_0(ll_backend__llds_out__llds_out_instr__Variant_130);
                        }
#line 1555 "llds_out_instr.m"
                        {
#line 1555 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__V_35_35);
                        }
#line 1556 "llds_out_instr.m"
                        {
#line 1556 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1556 "llds_out_instr.m"
                          return;
                        }
#line 1549 "llds_out_instr.m"
                      }
#line 1427 "llds_out_instr.m"
                    else
#line 1427 "llds_out_instr.m"
                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Target_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Target_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1540 "llds_out_instr.m"
                        {
#line 1540 "llds_out_instr.m"
                          MR_Word ll_backend__llds_out__llds_out_instr__Variant_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Target_7, (MR_Integer) 1)));
#line 1540 "llds_out_instr.m"
                          MR_String ll_backend__llds_out__llds_out_instr__V_46_46;

#line 1542 "llds_out_instr.m"
                          {
#line 1542 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) "MR_set_prof_ho_caller_proc(");
                          }
#line 1543 "llds_out_instr.m"
                          {
#line 1543 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_8);
                          }
#line 1544 "llds_out_instr.m"
                          {
#line 1544 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) ");\n\t");
                          }
#line 1545 "llds_out_instr.m"
                          {
#line 1545 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) "MR_np_tailcall_ent(do_call_closure_");
                          }
#line 1546 "llds_out_instr.m"
                          {
#line 1546 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__V_46_46 = ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_f_0(ll_backend__llds_out__llds_out_instr__Variant_20);
                          }
#line 1546 "llds_out_instr.m"
                          {
#line 1546 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__V_46_46);
                          }
#line 1547 "llds_out_instr.m"
                          {
#line 1547 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1547 "llds_out_instr.m"
                            return;
                          }
#line 1540 "llds_out_instr.m"
                        }
#line 1427 "llds_out_instr.m"
                      else
#line 1503 "llds_out_instr.m"
                        {
#line 1503 "llds_out_instr.m"
                          MR_Word ll_backend__llds_out__llds_out_instr__Last_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Target_7, (MR_Integer) 1)));

#line 1507 "llds_out_instr.m"
                          if ((ll_backend__llds_out__llds_out_instr__Last_18 == (MR_Integer) 0))
#line 1505 "llds_out_instr.m"
                            {
#line 1506 "llds_out_instr.m"
                              {
#line 1506 "llds_out_instr.m"
                                mercury__io__write_string_3_p_0((MR_String) "MR_succeed();\n");
#line 1506 "llds_out_instr.m"
                                return;
                              }
#line 1505 "llds_out_instr.m"
                            }
#line 1507 "llds_out_instr.m"
                          else
#line 1508 "llds_out_instr.m"
                            {
#line 1509 "llds_out_instr.m"
                              {
#line 1509 "llds_out_instr.m"
                                mercury__io__write_string_3_p_0((MR_String) "MR_succeed_discard();\n");
#line 1509 "llds_out_instr.m"
                                return;
                              }
#line 1508 "llds_out_instr.m"
                            }
#line 1503 "llds_out_instr.m"
                        }
#line 1427 "llds_out_instr.m"
  }
#line 1422 "llds_out_instr.m"
}

#line 1396 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_p_0(
#line 1396 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
#line 1396 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Label_7,
#line 1396 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8)
#line 1396 "llds_out_instr.m"
{
#line 1400 "llds_out_instr.m"
  {
#line 1400 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 1400 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__ProfileTime_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1403 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
#line 1403 "llds_out_instr.m"
    MR_String ll_backend__llds_out__llds_out_instr__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
#line 1403 "llds_out_instr.m"
    MR_String ll_backend__llds_out__llds_out_instr__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
#line 1403 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
#line 1403 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
#line 1403 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
#line 1403 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)));
#line 1403 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 1403 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1403 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1403 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1403 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1403 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1403 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1403 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1403 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1403 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1403 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1403 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1403 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1403 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 8)));
#line 1405 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__TypeCtorInfo_47_47;
#line 1405 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__ContLabelSet_11;
#line 1406 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_41_41;
#line 1406 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_42_42;
#line 1406 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_43_43;

#line 1405 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__ProfileTime_10 == (MR_Integer) 1);
#line 1405 "llds_out_instr.m"
    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1405 "llds_out_instr.m"
      {
#line 1406 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 0)));
#line 1406 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__ContLabelSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 1)));
#line 1406 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 2)));
#line 1406 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 3)));
#line 4663 "ll_backend.llds_out.llds_out_instr.c"
        ll_backend__llds_out__llds_out_instr__TypeCtorInfo_47_47 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 1407 "llds_out_instr.m"
        {
#line 1407 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_instr__succeeded = mercury__set_tree234__contains_2_p_0(ll_backend__llds_out__llds_out_instr__TypeCtorInfo_47_47, ll_backend__llds_out__llds_out_instr__ContLabelSet_11, ((MR_Box) (ll_backend__llds_out__llds_out_instr__Label_7)));
        }
#line 1405 "llds_out_instr.m"
      }
#line 1413 "llds_out_instr.m"
    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1409 "llds_out_instr.m"
      {
#line 1409 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 0)));
#line 1409 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 1)));
#line 1409 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 2)));
#line 1409 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 3)));

#line 1410 "llds_out_instr.m"
        {
#line 1410 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "\tMR_update_prof_current_proc(MR_LABEL_AP(");
        }
#line 1411 "llds_out_instr.m"
        {
#line 1411 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_12);
        }
#line 1412 "llds_out_instr.m"
        {
#line 1412 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "));\n");
#line 1412 "llds_out_instr.m"
          return;
        }
#line 1409 "llds_out_instr.m"
      }
#line 1413 "llds_out_instr.m"
    else
#line 1412 "llds_out_instr.m"
      {
#line 1412 "llds_out_instr.m"
      }
#line 1400 "llds_out_instr.m"
  }
#line 1396 "llds_out_instr.m"
}

#line 1375 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_defn_3_p_0(
#line 1375 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1)
#line 1375 "llds_out_instr.m"
{
#line 1377 "llds_out_instr.m"
  {
#line 1377 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1377 "llds_out_instr.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1377 "llds_out_instr.m"
      {
#line 1377 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 1)));
#line 1377 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 0)));

#line 1377 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__V_50_50 == (MR_Integer) 0))
#line 1385 "llds_out_instr.m"
          {
#line 1386 "llds_out_instr.m"
            {
#line 1386 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "MR_def_local(");
            }
#line 1387 "llds_out_instr.m"
            {
#line 1387 "llds_out_instr.m"
              backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__V_49_49);
            }
#line 1388 "llds_out_instr.m"
            {
#line 1388 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) ")\n");
#line 1388 "llds_out_instr.m"
              return;
            }
#line 1385 "llds_out_instr.m"
          }
#line 1377 "llds_out_instr.m"
        else
#line 1377 "llds_out_instr.m"
          if ((ll_backend__llds_out__llds_out_instr__V_50_50 == (MR_Integer) 2))
#line 1377 "llds_out_instr.m"
            {
#line 1377 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__V_11_11;

#line 1378 "llds_out_instr.m"
              {
#line 1378 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_define_entry(");
              }
#line 1379 "llds_out_instr.m"
              {
#line 1379 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1379 "llds_out_instr.m"
                MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_11_11, 0) = ((MR_Box) ((MR_Integer) 2));
#line 1379 "llds_out_instr.m"
                MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_11_11, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_49_49));
#line 1379 "llds_out_instr.m"
              }
#line 1379 "llds_out_instr.m"
              {
#line 1379 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(ll_backend__llds_out__llds_out_instr__V_11_11);
              }
#line 1380 "llds_out_instr.m"
              {
#line 1380 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1380 "llds_out_instr.m"
                return;
              }
#line 1377 "llds_out_instr.m"
            }
#line 1377 "llds_out_instr.m"
          else
#line 1381 "llds_out_instr.m"
            {
#line 1382 "llds_out_instr.m"
              {
#line 1382 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_def_static(");
              }
#line 1383 "llds_out_instr.m"
              {
#line 1383 "llds_out_instr.m"
                backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__V_49_49);
              }
#line 1384 "llds_out_instr.m"
              {
#line 1384 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) ")\n");
#line 1384 "llds_out_instr.m"
                return;
              }
#line 1381 "llds_out_instr.m"
            }
#line 1377 "llds_out_instr.m"
      }
#line 1377 "llds_out_instr.m"
    else
#line 1389 "llds_out_instr.m"
      {
#line 1389 "llds_out_instr.m"
        MR_Integer ll_backend__llds_out__llds_out_instr__Num_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 0)));
#line 1389 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__ProcLabel_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 1)));

#line 1390 "llds_out_instr.m"
        {
#line 1390 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "MR_def_label(");
        }
#line 1391 "llds_out_instr.m"
        {
#line 1391 "llds_out_instr.m"
          backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__ProcLabel_37);
        }
#line 1392 "llds_out_instr.m"
        {
#line 1392 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) ",");
        }
#line 1393 "llds_out_instr.m"
        {
#line 1393 "llds_out_instr.m"
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Num_36);
        }
#line 1394 "llds_out_instr.m"
        {
#line 1394 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) ")\n");
#line 1394 "llds_out_instr.m"
          return;
        }
#line 1389 "llds_out_instr.m"
      }
#line 1377 "llds_out_instr.m"
  }
#line 1375 "llds_out_instr.m"
}

#line 1322 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_live_value_type_3_p_0(
#line 1322 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1)
#line 1322 "llds_out_instr.m"
{
#line 1324 "llds_out_instr.m"
  {
#line 1324 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1324 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1326 "llds_out_instr.m"
      {
#line 1327 "llds_out_instr.m"
        {
#line 1327 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "type curfr");
#line 1327 "llds_out_instr.m"
          return;
        }
#line 1326 "llds_out_instr.m"
      }
#line 1324 "llds_out_instr.m"
    else
#line 1324 "llds_out_instr.m"
      if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 1334 "llds_out_instr.m"
        {
#line 1335 "llds_out_instr.m"
          {
#line 1335 "llds_out_instr.m"
            mercury__io__write_string_3_p_0((MR_String) "type hp");
#line 1335 "llds_out_instr.m"
            return;
          }
#line 1334 "llds_out_instr.m"
        }
#line 1324 "llds_out_instr.m"
      else
#line 1324 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1328 "llds_out_instr.m"
          {
#line 1329 "llds_out_instr.m"
            {
#line 1329 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "type maxfr");
#line 1329 "llds_out_instr.m"
              return;
            }
#line 1328 "llds_out_instr.m"
          }
#line 1324 "llds_out_instr.m"
        else
#line 1324 "llds_out_instr.m"
          if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1330 "llds_out_instr.m"
            {
#line 1331 "llds_out_instr.m"
              {
#line 1331 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) "type redofr");
#line 1331 "llds_out_instr.m"
                return;
              }
#line 1330 "llds_out_instr.m"
            }
#line 1324 "llds_out_instr.m"
          else
#line 1324 "llds_out_instr.m"
            if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1332 "llds_out_instr.m"
              {
#line 1333 "llds_out_instr.m"
                {
#line 1333 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "type redoip");
#line 1333 "llds_out_instr.m"
                  return;
                }
#line 1332 "llds_out_instr.m"
              }
#line 1324 "llds_out_instr.m"
            else
#line 1324 "llds_out_instr.m"
              if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 1342 "llds_out_instr.m"
                {
#line 1343 "llds_out_instr.m"
                  {
#line 1343 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) "type region commit");
#line 1343 "llds_out_instr.m"
                    return;
                  }
#line 1342 "llds_out_instr.m"
                }
#line 1324 "llds_out_instr.m"
              else
#line 1324 "llds_out_instr.m"
                if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 1340 "llds_out_instr.m"
                  {
#line 1341 "llds_out_instr.m"
                    {
#line 1341 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) "type region disj");
#line 1341 "llds_out_instr.m"
                      return;
                    }
#line 1340 "llds_out_instr.m"
                  }
#line 1324 "llds_out_instr.m"
                else
#line 1324 "llds_out_instr.m"
                  if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 1344 "llds_out_instr.m"
                    {
#line 1345 "llds_out_instr.m"
                      {
#line 1345 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0((MR_String) "type region ite");
#line 1345 "llds_out_instr.m"
                        return;
                      }
#line 1344 "llds_out_instr.m"
                    }
#line 1324 "llds_out_instr.m"
                  else
#line 1324 "llds_out_instr.m"
                    if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1324 "llds_out_instr.m"
                      {
#line 1325 "llds_out_instr.m"
                        {
#line 1325 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "type succip");
#line 1325 "llds_out_instr.m"
                          return;
                        }
#line 1324 "llds_out_instr.m"
                      }
#line 1324 "llds_out_instr.m"
                    else
#line 1324 "llds_out_instr.m"
                      if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 1338 "llds_out_instr.m"
                        {
#line 1339 "llds_out_instr.m"
                          {
#line 1339 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) "type ticket");
#line 1339 "llds_out_instr.m"
                            return;
                          }
#line 1338 "llds_out_instr.m"
                        }
#line 1324 "llds_out_instr.m"
                      else
#line 1324 "llds_out_instr.m"
                        if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 1336 "llds_out_instr.m"
                          {
#line 1337 "llds_out_instr.m"
                            {
#line 1337 "llds_out_instr.m"
                              mercury__io__write_string_3_p_0((MR_String) "type trail_ptr");
#line 1337 "llds_out_instr.m"
                              return;
                            }
#line 1336 "llds_out_instr.m"
                          }
#line 1324 "llds_out_instr.m"
                        else
#line 1324 "llds_out_instr.m"
                          if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 1346 "llds_out_instr.m"
                            {
#line 1347 "llds_out_instr.m"
                              {
#line 1347 "llds_out_instr.m"
                                mercury__io__write_string_3_p_0((MR_String) "unwanted");
#line 1347 "llds_out_instr.m"
                                return;
                              }
#line 1346 "llds_out_instr.m"
                            }
#line 1324 "llds_out_instr.m"
                          else
#line 1348 "llds_out_instr.m"
                            {
#line 1348 "llds_out_instr.m"
                              MR_Word ll_backend__llds_out__llds_out_instr__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 0)));
#line 1348 "llds_out_instr.m"
                              MR_String ll_backend__llds_out__llds_out_instr__Name_65 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 1)));
#line 1348 "llds_out_instr.m"
                              MR_Word ll_backend__llds_out__llds_out_instr__Type_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 2)));
#line 1348 "llds_out_instr.m"
                              MR_Integer ll_backend__llds_out__llds_out_instr__VarInt_69;
#line 1348 "llds_out_instr.m"
                              MR_Word ll_backend__llds_out__llds_out_instr__NewTVarset_70;

#line 1349 "llds_out_instr.m"
                              {
#line 1349 "llds_out_instr.m"
                                mercury__io__write_string_3_p_0((MR_String) "var(");
                              }
#line 1350 "llds_out_instr.m"
                              {
#line 1350 "llds_out_instr.m"
                                mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__llds_out__llds_out_instr__Var_64, &ll_backend__llds_out__llds_out_instr__VarInt_69);
                              }
#line 1351 "llds_out_instr.m"
                              {
#line 1351 "llds_out_instr.m"
                                mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__VarInt_69);
                              }
#line 1352 "llds_out_instr.m"
                              {
#line 1352 "llds_out_instr.m"
                                mercury__io__write_string_3_p_0((MR_String) ", ");
                              }
#line 1353 "llds_out_instr.m"
                              {
#line 1353 "llds_out_instr.m"
                                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__Name_65);
                              }
#line 1354 "llds_out_instr.m"
                              {
#line 1354 "llds_out_instr.m"
                                mercury__io__write_string_3_p_0((MR_String) ", ");
                              }
#line 1356 "llds_out_instr.m"
                              {
#line 1356 "llds_out_instr.m"
                                mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &ll_backend__llds_out__llds_out_instr__NewTVarset_70);
                              }
#line 1357 "llds_out_instr.m"
                              {
#line 1357 "llds_out_instr.m"
                                parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(ll_backend__llds_out__llds_out_instr__NewTVarset_70, (MR_Integer) 0, ll_backend__llds_out__llds_out_instr__Type_66);
                              }
#line 1368 "llds_out_instr.m"
                              {
#line 1368 "llds_out_instr.m"
                                mercury__io__write_string_3_p_0((MR_String) ")");
#line 1368 "llds_out_instr.m"
                                return;
                              }
#line 1348 "llds_out_instr.m"
                            }
#line 1324 "llds_out_instr.m"
  }
#line 1322 "llds_out_instr.m"
}

#line 1293 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_layout_locns_4_p_0(
#line 1293 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1293 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
#line 1293 "llds_out_instr.m"
{
#line 1296 "llds_out_instr.m"
  while (MR_TRUE)
#line 1296 "llds_out_instr.m"
    {
#line 1296 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 1296 "llds_out_instr.m"
      {
#line 1296 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1296 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1296 "llds_out_instr.m"
          {
#line 1296 "llds_out_instr.m"
          }
#line 1296 "llds_out_instr.m"
        else
#line 1297 "llds_out_instr.m"
          {
#line 1297 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Locn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
#line 1297 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Locns_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));

#line 1312 "llds_out_instr.m"
            if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Locn_10)) == (MR_mktag((MR_Integer) 0))))
#line 1312 "llds_out_instr.m"
              {
#line 1312 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__Lval_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Locn_10, (MR_Integer) 0)));

#line 1313 "llds_out_instr.m"
                {
#line 1313 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Lval_26);
                }
#line 1312 "llds_out_instr.m"
              }
#line 1312 "llds_out_instr.m"
            else
#line 1315 "llds_out_instr.m"
              {
#line 1315 "llds_out_instr.m"
                MR_Integer ll_backend__llds_out__llds_out_instr__Offset_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Locn_10, (MR_Integer) 1)));
#line 1315 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__Lval_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Locn_10, (MR_Integer) 0)));

#line 1316 "llds_out_instr.m"
                {
#line 1316 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "offset ");
                }
#line 1317 "llds_out_instr.m"
                {
#line 1317 "llds_out_instr.m"
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Offset_27);
                }
#line 1318 "llds_out_instr.m"
                {
#line 1318 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) " from ");
                }
#line 1319 "llds_out_instr.m"
                {
#line 1319 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Lval_35);
                }
#line 1315 "llds_out_instr.m"
              }
#line 1301 "llds_out_instr.m"
            if ((ll_backend__llds_out__llds_out_instr__Locns_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1300 "llds_out_instr.m"
              {
#line 1300 "llds_out_instr.m"
              }
#line 1301 "llds_out_instr.m"
            else
#line 1302 "llds_out_instr.m"
              {
#line 1303 "llds_out_instr.m"
                {
#line 1303 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) " and ");
                }
#line 1304 "llds_out_instr.m"
                /* direct tailcall eliminated */
#line 1304 "llds_out_instr.m"
                {
#line 1304 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Locns_11;

#line 1304 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 1304 "llds_out_instr.m"
                }
#line 1304 "llds_out_instr.m"
                continue;
#line 1302 "llds_out_instr.m"
              }
#line 1297 "llds_out_instr.m"
          }
#line 1296 "llds_out_instr.m"
      }
#line 1296 "llds_out_instr.m"
      break;
#line 1296 "llds_out_instr.m"
    }
#line 1293 "llds_out_instr.m"
}

#line 1280 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_p_0(
#line 1280 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1280 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
#line 1280 "llds_out_instr.m"
{
#line 1283 "llds_out_instr.m"
  while (MR_TRUE)
#line 1283 "llds_out_instr.m"
    {
#line 1283 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 1283 "llds_out_instr.m"
      {
#line 1283 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1283 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1283 "llds_out_instr.m"
          {
#line 1283 "llds_out_instr.m"
          }
#line 1283 "llds_out_instr.m"
        else
#line 1284 "llds_out_instr.m"
          {
#line 1284 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Var_10;
#line 1284 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__LocnSet_11;
#line 1284 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__VarLocnSets_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
#line 1284 "llds_out_instr.m"
            MR_Integer ll_backend__llds_out__llds_out_instr__VarInt_14;
#line 1284 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Locns_15;
#line 1284 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));

#line 1284 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_18_18, (MR_Integer) 0)));
#line 1284 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__LocnSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_18_18, (MR_Integer) 1)));
#line 1285 "llds_out_instr.m"
            {
#line 1285 "llds_out_instr.m"
              mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, ll_backend__llds_out__llds_out_instr__Var_10, &ll_backend__llds_out__llds_out_instr__VarInt_14);
            }
#line 1286 "llds_out_instr.m"
            {
#line 1286 "llds_out_instr.m"
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__VarInt_14);
            }
#line 1287 "llds_out_instr.m"
            {
#line 1287 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) " - ");
            }
#line 1288 "llds_out_instr.m"
            {
#line 1288 "llds_out_instr.m"
              mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0, ll_backend__llds_out__llds_out_instr__LocnSet_11, &ll_backend__llds_out__llds_out_instr__Locns_15);
            }
#line 1289 "llds_out_instr.m"
            {
#line 1289 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__output_layout_locns_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Locns_15);
            }
#line 1290 "llds_out_instr.m"
            {
#line 1290 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "  ");
            }
#line 1291 "llds_out_instr.m"
            /* direct tailcall eliminated */
#line 1291 "llds_out_instr.m"
            {
#line 1291 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__VarLocnSets_12;

#line 1291 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 1291 "llds_out_instr.m"
            }
#line 1291 "llds_out_instr.m"
            continue;
#line 1284 "llds_out_instr.m"
          }
#line 1283 "llds_out_instr.m"
      }
#line 1283 "llds_out_instr.m"
      break;
#line 1283 "llds_out_instr.m"
    }
#line 1280 "llds_out_instr.m"
}

#line 1264 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_p_0(
#line 1264 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1264 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
#line 1264 "llds_out_instr.m"
{
#line 1267 "llds_out_instr.m"
  while (MR_TRUE)
#line 1267 "llds_out_instr.m"
    {
#line 1267 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 1267 "llds_out_instr.m"
      {
#line 1267 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1267 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1267 "llds_out_instr.m"
          {
#line 1267 "llds_out_instr.m"
          }
#line 1267 "llds_out_instr.m"
        else
#line 1268 "llds_out_instr.m"
          {
#line 1268 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__LiveInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
#line 1268 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__LiveInfos_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
#line 1268 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Locn_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LiveInfo_10, (MR_Integer) 0)));
#line 1268 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__LiveValueType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LiveInfo_10, (MR_Integer) 1)));
#line 1268 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__TypeParams_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LiveInfo_10, (MR_Integer) 2)));
#line 1268 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__TypeParamList_16;

#line 1270 "llds_out_instr.m"
            {
#line 1270 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "*\t");
            }
#line 1312 "llds_out_instr.m"
            if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Locn_13)) == (MR_mktag((MR_Integer) 0))))
#line 1312 "llds_out_instr.m"
              {
#line 1312 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__Lval_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Locn_13, (MR_Integer) 0)));

#line 1313 "llds_out_instr.m"
                {
#line 1313 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Lval_38);
                }
#line 1312 "llds_out_instr.m"
              }
#line 1312 "llds_out_instr.m"
            else
#line 1315 "llds_out_instr.m"
              {
#line 1315 "llds_out_instr.m"
                MR_Integer ll_backend__llds_out__llds_out_instr__Offset_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Locn_13, (MR_Integer) 1)));
#line 1315 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__Lval_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Locn_13, (MR_Integer) 0)));

#line 1316 "llds_out_instr.m"
                {
#line 1316 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "offset ");
                }
#line 1317 "llds_out_instr.m"
                {
#line 1317 "llds_out_instr.m"
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Offset_39);
                }
#line 1318 "llds_out_instr.m"
                {
#line 1318 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) " from ");
                }
#line 1319 "llds_out_instr.m"
                {
#line 1319 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Lval_47);
                }
#line 1315 "llds_out_instr.m"
              }
#line 1272 "llds_out_instr.m"
            {
#line 1272 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 1273 "llds_out_instr.m"
            {
#line 1273 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__output_live_value_type_3_p_0(ll_backend__llds_out__llds_out_instr__LiveValueType_14);
            }
#line 1274 "llds_out_instr.m"
            {
#line 1274 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 1275 "llds_out_instr.m"
            {
#line 1275 "llds_out_instr.m"
              mercury__map__to_assoc_list_2_p_0((MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[1], (MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[2], ll_backend__llds_out__llds_out_instr__TypeParams_15, &ll_backend__llds_out__llds_out_instr__TypeParamList_16);
            }
#line 1276 "llds_out_instr.m"
            {
#line 1276 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__TypeParamList_16);
            }
#line 1277 "llds_out_instr.m"
            {
#line 1277 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 1278 "llds_out_instr.m"
            /* direct tailcall eliminated */
#line 1278 "llds_out_instr.m"
            {
#line 1278 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__LiveInfos_11;

#line 1278 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 1278 "llds_out_instr.m"
            }
#line 1278 "llds_out_instr.m"
            continue;
#line 1268 "llds_out_instr.m"
          }
#line 1267 "llds_out_instr.m"
      }
#line 1267 "llds_out_instr.m"
      break;
#line 1267 "llds_out_instr.m"
    }
#line 1264 "llds_out_instr.m"
}

#line 1249 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_p_0(
#line 1249 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 1249 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__LiveVals_6)
#line 1249 "llds_out_instr.m"
{
#line 1252 "llds_out_instr.m"
  {
#line 1252 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 1252 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__AutoComments_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 1253 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 0)));
#line 1253 "llds_out_instr.m"
    MR_String ll_backend__llds_out__llds_out_instr__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 1)));
#line 1253 "llds_out_instr.m"
    MR_String ll_backend__llds_out__llds_out_instr__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 2)));
#line 1253 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 3)));
#line 1253 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 4)));
#line 1253 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 5)));
#line 1253 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)));
#line 1253 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1253 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1253 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1253 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1253 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1253 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1253 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1253 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1253 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1253 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1253 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1253 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1253 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1253 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 8)));

#line 1260 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__AutoComments_8 == (MR_Integer) 0))
#line 1261 "llds_out_instr.m"
      {
#line 1261 "llds_out_instr.m"
      }
#line 1260 "llds_out_instr.m"
    else
#line 1255 "llds_out_instr.m"
      {
#line 1256 "llds_out_instr.m"
        {
#line 1256 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "/*\n");
        }
#line 1257 "llds_out_instr.m"
        {
#line 1257 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "* Garbage collection livevals info\n");
        }
#line 1258 "llds_out_instr.m"
        {
#line 1258 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__LiveVals_6);
        }
#line 1259 "llds_out_instr.m"
        {
#line 1259 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "*/\n");
#line 1259 "llds_out_instr.m"
          return;
        }
#line 1255 "llds_out_instr.m"
      }
#line 1252 "llds_out_instr.m"
  }
#line 1249 "llds_out_instr.m"
}

#line 1112 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_call_6_p_0(
#line 1112 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
#line 1112 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Target_8,
#line 1112 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Continuation_9,
#line 1112 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_10)
#line 1112 "llds_out_instr.m"
{
#line 1115 "llds_out_instr.m"
  {
#line 1115 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 1115 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__ProfileCall_14;
#line 1184 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__Label_15;
#line 1138 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_29_29;

#line 1116 "llds_out_instr.m"
    {
#line 1116 "llds_out_instr.m"
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
#line 1127 "llds_out_instr.m"
    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Target_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Target_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1127 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__succeeded = MR_TRUE;
#line 1127 "llds_out_instr.m"
    else
#line 1127 "llds_out_instr.m"
      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Target_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Target_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1126 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__succeeded = MR_TRUE;
#line 1127 "llds_out_instr.m"
      else
#line 1127 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__succeeded = MR_FALSE;
#line 1134 "llds_out_instr.m"
    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1130 "llds_out_instr.m"
      {
#line 1130 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__ProfileCall_14 = (MR_Integer) 0;
#line 1131 "llds_out_instr.m"
        {
#line 1131 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "MR_set_prof_ho_caller_proc(");
        }
#line 1132 "llds_out_instr.m"
        {
#line 1132 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_10);
        }
#line 1133 "llds_out_instr.m"
        {
#line 1133 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) ");\n\t");
        }
#line 1130 "llds_out_instr.m"
      }
#line 1134 "llds_out_instr.m"
    else
#line 1135 "llds_out_instr.m"
      {
#line 1135 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 0)));
#line 1135 "llds_out_instr.m"
        MR_String ll_backend__llds_out__llds_out_instr__V_112_112 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 1)));
#line 1135 "llds_out_instr.m"
        MR_String ll_backend__llds_out__llds_out_instr__V_113_113 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 2)));
#line 1135 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 3)));
#line 1135 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 4)));
#line 1135 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 5)));
#line 1135 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)));
#line 1135 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_118_118 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 1135 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_119_119 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1135 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_120_120 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1135 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_121_121 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1135 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_122_122 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1135 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_123_123;
#line 1135 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_124_124;
#line 1135 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_125_125;
#line 1135 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_126_126;
#line 1135 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_127_127;
#line 1135 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_128_128;
#line 1135 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_129_129;
#line 1135 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_130_130;
#line 1135 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_131_131;

#line 1135 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__ProfileCall_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1135 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__V_123_123 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1135 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__V_124_124 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1135 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__V_125_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1135 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__V_126_126 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1135 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__V_127_127 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1135 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__V_128_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1135 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__V_129_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1135 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__V_130_130 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1135 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 8)));
#line 1135 "llds_out_instr.m"
      }
#line 1138 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Target_8)) == (MR_mktag((MR_Integer) 1)));
#line 1138 "llds_out_instr.m"
    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1138 "llds_out_instr.m"
      {
#line 1138 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__Label_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Target_8, (MR_Integer) 0)));
#line 1140 "llds_out_instr.m"
        {
#line 1140 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_instr__V_29_29 = ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_f_0(ll_backend__llds_out__llds_out_instr__Label_15);
        }
#line 1140 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_29_29 == (MR_Integer) 0);
#line 1138 "llds_out_instr.m"
      }
#line 1184 "llds_out_instr.m"
    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1148 "llds_out_instr.m"
      if ((ll_backend__llds_out__llds_out_instr__ProfileCall_14 == (MR_Integer) 0))
#line 1149 "llds_out_instr.m"
        {
#line 1149 "llds_out_instr.m"
          MR_String ll_backend__llds_out__llds_out_instr__BaseStr_16;
#line 1149 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__NeedsPrefix_17;
#line 1149 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__Wrapper_18;

#line 1150 "llds_out_instr.m"
          {
#line 1150 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_p_0(ll_backend__llds_out__llds_out_instr__Continuation_9, &ll_backend__llds_out__llds_out_instr__BaseStr_16, &ll_backend__llds_out__llds_out_instr__NeedsPrefix_17, &ll_backend__llds_out__llds_out_instr__Wrapper_18);
          }
#line 1160 "llds_out_instr.m"
          if ((ll_backend__llds_out__llds_out_instr__NeedsPrefix_17 == (MR_Integer) 0))
#line 1153 "llds_out_instr.m"
            {
#line 1154 "llds_out_instr.m"
              {
#line 1154 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_noprof_localcall(");
              }
#line 1155 "llds_out_instr.m"
              {
#line 1155 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_15);
              }
#line 1156 "llds_out_instr.m"
              {
#line 1156 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
              }
#line 1157 "llds_out_instr.m"
              {
#line 1157 "llds_out_instr.m"
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__BaseStr_16);
              }
#line 1158 "llds_out_instr.m"
              {
#line 1158 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_p_0(ll_backend__llds_out__llds_out_instr__BaseStr_16, ll_backend__llds_out__llds_out_instr__NeedsPrefix_17, ll_backend__llds_out__llds_out_instr__Wrapper_18);
              }
#line 1153 "llds_out_instr.m"
            }
#line 1160 "llds_out_instr.m"
          else
#line 1160 "llds_out_instr.m"
            if ((ll_backend__llds_out__llds_out_instr__Wrapper_18 == (MR_Integer) 0))
#line 1161 "llds_out_instr.m"
              {
#line 1163 "llds_out_instr.m"
                {
#line 1163 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "MR_np_localcall_ent(");
                }
#line 1164 "llds_out_instr.m"
                {
#line 1164 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_15);
                }
#line 1165 "llds_out_instr.m"
                {
#line 1165 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                }
#line 1166 "llds_out_instr.m"
                {
#line 1166 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__BaseStr_16);
                }
#line 1161 "llds_out_instr.m"
              }
#line 1160 "llds_out_instr.m"
            else
#line 1160 "llds_out_instr.m"
              if ((ll_backend__llds_out__llds_out_instr__Wrapper_18 == (MR_Integer) 1))
#line 1168 "llds_out_instr.m"
                {
#line 1170 "llds_out_instr.m"
                  {
#line 1170 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) "MR_np_localcall_lab(");
                  }
#line 1171 "llds_out_instr.m"
                  {
#line 1171 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_15);
                  }
#line 1172 "llds_out_instr.m"
                  {
#line 1172 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                  }
#line 1173 "llds_out_instr.m"
                  {
#line 1173 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__BaseStr_16);
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
                    mercury__io__write_string_3_p_0((MR_String) "MR_np_localcall(");
                  }
#line 1178 "llds_out_instr.m"
                  {
#line 1178 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_15);
                  }
#line 1179 "llds_out_instr.m"
                  {
#line 1179 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                  }
#line 1180 "llds_out_instr.m"
                  {
#line 1180 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_p_0(ll_backend__llds_out__llds_out_instr__BaseStr_16, ll_backend__llds_out__llds_out_instr__NeedsPrefix_17, ll_backend__llds_out__llds_out_instr__Wrapper_18);
                  }
#line 1175 "llds_out_instr.m"
                }
#line 1149 "llds_out_instr.m"
        }
#line 1148 "llds_out_instr.m"
      else
#line 1143 "llds_out_instr.m"
        {
#line 1144 "llds_out_instr.m"
          {
#line 1144 "llds_out_instr.m"
            mercury__io__write_string_3_p_0((MR_String) "MR_localcall(");
          }
#line 1145 "llds_out_instr.m"
          {
#line 1145 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(ll_backend__llds_out__llds_out_instr__Label_15);
          }
#line 1146 "llds_out_instr.m"
          {
#line 1146 "llds_out_instr.m"
            mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
          }
#line 1147 "llds_out_instr.m"
          {
#line 1147 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__Continuation_9);
          }
#line 1143 "llds_out_instr.m"
        }
#line 1184 "llds_out_instr.m"
    else
#line 1228 "llds_out_instr.m"
      {
#line 1228 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__ContLabel_19;
#line 1185 "llds_out_instr.m"
        MR_Word ll_backend__llds_out__llds_out_instr__V_61_61;

#line 1185 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Continuation_9)) == (MR_mktag((MR_Integer) 1)));
#line 1185 "llds_out_instr.m"
        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1185 "llds_out_instr.m"
          {
#line 1185 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__ContLabel_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Continuation_9, (MR_Integer) 0)));
#line 1186 "llds_out_instr.m"
            {
#line 1186 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__V_61_61 = ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_f_0(ll_backend__llds_out__llds_out_instr__ContLabel_19);
            }
#line 1186 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_61_61 == (MR_Integer) 0);
#line 1185 "llds_out_instr.m"
          }
#line 1228 "llds_out_instr.m"
        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1194 "llds_out_instr.m"
          if ((ll_backend__llds_out__llds_out_instr__ProfileCall_14 == (MR_Integer) 0))
#line 1195 "llds_out_instr.m"
            {
#line 1195 "llds_out_instr.m"
              MR_String ll_backend__llds_out__llds_out_instr__BaseStr_102;
#line 1195 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__NeedsPrefix_103;
#line 1195 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__Wrapper_104;

#line 1196 "llds_out_instr.m"
              {
#line 1196 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_p_0(ll_backend__llds_out__llds_out_instr__Target_8, &ll_backend__llds_out__llds_out_instr__BaseStr_102, &ll_backend__llds_out__llds_out_instr__NeedsPrefix_103, &ll_backend__llds_out__llds_out_instr__Wrapper_104);
              }
#line 1204 "llds_out_instr.m"
              if ((ll_backend__llds_out__llds_out_instr__NeedsPrefix_103 == (MR_Integer) 0))
#line 1198 "llds_out_instr.m"
                {
#line 1199 "llds_out_instr.m"
                  {
#line 1199 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) "MR_noprof_call_localret(");
                  }
#line 1200 "llds_out_instr.m"
                  {
#line 1200 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_p_0(ll_backend__llds_out__llds_out_instr__BaseStr_102, ll_backend__llds_out__llds_out_instr__NeedsPrefix_103, ll_backend__llds_out__llds_out_instr__Wrapper_104);
                  }
#line 1202 "llds_out_instr.m"
                  {
#line 1202 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                  }
#line 1203 "llds_out_instr.m"
                  {
#line 1203 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(ll_backend__llds_out__llds_out_instr__ContLabel_19);
                  }
#line 1198 "llds_out_instr.m"
                }
#line 1204 "llds_out_instr.m"
              else
#line 1204 "llds_out_instr.m"
                if ((ll_backend__llds_out__llds_out_instr__Wrapper_104 == (MR_Integer) 0))
#line 1205 "llds_out_instr.m"
                  {
#line 1207 "llds_out_instr.m"
                    {
#line 1207 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) "MR_np_call_localret_ent(");
                    }
#line 1208 "llds_out_instr.m"
                    {
#line 1208 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__BaseStr_102);
                    }
#line 1209 "llds_out_instr.m"
                    {
#line 1209 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                    }
#line 1210 "llds_out_instr.m"
                    {
#line 1210 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__ContLabel_19);
                    }
#line 1205 "llds_out_instr.m"
                  }
#line 1204 "llds_out_instr.m"
                else
#line 1204 "llds_out_instr.m"
                  if ((ll_backend__llds_out__llds_out_instr__Wrapper_104 == (MR_Integer) 1))
#line 1212 "llds_out_instr.m"
                    {
#line 1217 "llds_out_instr.m"
                      {
#line 1217 "llds_out_instr.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_instr", (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_call\'/6", (MR_String) "calling label");
#line 1217 "llds_out_instr.m"
                        return;
                      }
#line 1212 "llds_out_instr.m"
                    }
#line 1204 "llds_out_instr.m"
                  else
#line 1219 "llds_out_instr.m"
                    {
#line 1221 "llds_out_instr.m"
                      {
#line 1221 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0((MR_String) "MR_np_call_localret(");
                      }
#line 1222 "llds_out_instr.m"
                      {
#line 1222 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_p_0(ll_backend__llds_out__llds_out_instr__BaseStr_102, ll_backend__llds_out__llds_out_instr__NeedsPrefix_103, ll_backend__llds_out__llds_out_instr__Wrapper_104);
                      }
#line 1224 "llds_out_instr.m"
                      {
#line 1224 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                      }
#line 1225 "llds_out_instr.m"
                      {
#line 1225 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__ContLabel_19);
                      }
#line 1219 "llds_out_instr.m"
                    }
#line 1195 "llds_out_instr.m"
            }
#line 1194 "llds_out_instr.m"
          else
#line 1189 "llds_out_instr.m"
            {
#line 1190 "llds_out_instr.m"
              {
#line 1190 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_call_localret(");
              }
#line 1191 "llds_out_instr.m"
              {
#line 1191 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__Target_8);
              }
#line 1192 "llds_out_instr.m"
              {
#line 1192 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
              }
#line 1193 "llds_out_instr.m"
              {
#line 1193 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(ll_backend__llds_out__llds_out_instr__ContLabel_19);
              }
#line 1189 "llds_out_instr.m"
            }
#line 1228 "llds_out_instr.m"
        else
#line 1235 "llds_out_instr.m"
          {
#line 1232 "llds_out_instr.m"
            if ((ll_backend__llds_out__llds_out_instr__ProfileCall_14 == (MR_Integer) 0))
#line 1233 "llds_out_instr.m"
              {
#line 1234 "llds_out_instr.m"
                {
#line 1234 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "MR_noprof_call(");
                }
#line 1233 "llds_out_instr.m"
              }
#line 1232 "llds_out_instr.m"
            else
#line 1230 "llds_out_instr.m"
              {
#line 1231 "llds_out_instr.m"
                {
#line 1231 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "MR_call(");
                }
#line 1230 "llds_out_instr.m"
              }
#line 1236 "llds_out_instr.m"
            {
#line 1236 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__Target_8);
            }
#line 1237 "llds_out_instr.m"
            {
#line 1237 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
            }
#line 1238 "llds_out_instr.m"
            {
#line 1238 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__Continuation_9);
            }
#line 1235 "llds_out_instr.m"
          }
#line 1228 "llds_out_instr.m"
      }
#line 1244 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__ProfileCall_14 == (MR_Integer) 0))
#line 1245 "llds_out_instr.m"
      {
#line 1245 "llds_out_instr.m"
      }
#line 1244 "llds_out_instr.m"
    else
#line 1241 "llds_out_instr.m"
      {
#line 1242 "llds_out_instr.m"
        {
#line 1242 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
        }
#line 1243 "llds_out_instr.m"
        {
#line 1243 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_10);
        }
#line 1241 "llds_out_instr.m"
      }
#line 1247 "llds_out_instr.m"
    {
#line 1247 "llds_out_instr.m"
      mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1247 "llds_out_instr.m"
      return;
    }
#line 1115 "llds_out_instr.m"
  }
#line 1112 "llds_out_instr.m"
}

#line 1081 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_p_0(
#line 1081 "llds_out_instr.m"
  MR_Integer ll_backend__llds_out__llds_out_instr__Next_6,
#line 1081 "llds_out_instr.m"
  MR_Integer ll_backend__llds_out__llds_out_instr__Max_7,
#line 1081 "llds_out_instr.m"
  MR_String ll_backend__llds_out__llds_out_instr__Type_8)
#line 1081 "llds_out_instr.m"
{
#line 1095 "llds_out_instr.m"
  while (MR_TRUE)
#line 1095 "llds_out_instr.m"
    {
#line 1095 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 1095 "llds_out_instr.m"
      {
#line 1095 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__Next_6 <= ll_backend__llds_out__llds_out_instr__Max_7);

#line 1095 "llds_out_instr.m"
        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1090 "llds_out_instr.m"
          {
#line 1090 "llds_out_instr.m"
            MR_Integer ll_backend__llds_out__llds_out_instr__V_19_19;

#line 1086 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__Next_6 > (MR_Integer) 1);
#line 1088 "llds_out_instr.m"
            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1087 "llds_out_instr.m"
              {
#line 1087 "llds_out_instr.m"
                {
#line 1087 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 1087 "llds_out_instr.m"
              }
#line 1088 "llds_out_instr.m"
            else
#line 1087 "llds_out_instr.m"
              {
#line 1087 "llds_out_instr.m"
              }
#line 1091 "llds_out_instr.m"
            {
#line 1091 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "MR_temp");
            }
#line 1092 "llds_out_instr.m"
            {
#line 1092 "llds_out_instr.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__Type_8);
            }
#line 1093 "llds_out_instr.m"
            {
#line 1093 "llds_out_instr.m"
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Next_6);
            }
#line 1094 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__V_19_19 = (ll_backend__llds_out__llds_out_instr__Next_6 + (MR_Integer) 1);
#line 1094 "llds_out_instr.m"
            /* direct tailcall eliminated */
#line 1094 "llds_out_instr.m"
            {
#line 1094 "llds_out_instr.m"
              MR_Integer ll_backend__llds_out__llds_out_instr__Next__tmp_copy_6 = ll_backend__llds_out__llds_out_instr__V_19_19;

#line 1094 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__Next_6 = ll_backend__llds_out__llds_out_instr__Next__tmp_copy_6;
#line 1094 "llds_out_instr.m"
            }
#line 1094 "llds_out_instr.m"
            continue;
#line 1090 "llds_out_instr.m"
          }
#line 1095 "llds_out_instr.m"
        else
#line 1094 "llds_out_instr.m"
          {
#line 1094 "llds_out_instr.m"
          }
#line 1095 "llds_out_instr.m"
      }
#line 1095 "llds_out_instr.m"
      break;
#line 1095 "llds_out_instr.m"
    }
#line 1081 "llds_out_instr.m"
}

#line 1071 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_block_end_2_p_0(void)
#line 1071 "llds_out_instr.m"
{
#line 1073 "llds_out_instr.m"
  {
#line 1073 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1074 "llds_out_instr.m"
    {
#line 1074 "llds_out_instr.m"
      mercury__io__write_string_3_p_0((MR_String) "\t}\n");
#line 1074 "llds_out_instr.m"
      return;
    }
#line 1073 "llds_out_instr.m"
  }
#line 1071 "llds_out_instr.m"
}

#line 1052 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_block_start_4_p_0(
#line 1052 "llds_out_instr.m"
  MR_Integer ll_backend__llds_out__llds_out_instr__TempR_5,
#line 1052 "llds_out_instr.m"
  MR_Integer ll_backend__llds_out__llds_out_instr__TempF_6)
#line 1052 "llds_out_instr.m"
{
#line 1054 "llds_out_instr.m"
  {
#line 1054 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1055 "llds_out_instr.m"
    {
#line 1055 "llds_out_instr.m"
      mercury__io__write_string_3_p_0((MR_String) "\t{\n");
    }
#line 1056 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__TempR_5 > (MR_Integer) 0);
#line 1060 "llds_out_instr.m"
    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1057 "llds_out_instr.m"
      {
#line 1057 "llds_out_instr.m"
        {
#line 1057 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "\tMR_Word ");
        }
#line 1079 "llds_out_instr.m"
        {
#line 1079 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_p_0((MR_Integer) 1, ll_backend__llds_out__llds_out_instr__TempR_5, (MR_String) "r");
        }
#line 1059 "llds_out_instr.m"
        {
#line 1059 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) ";\n");
        }
#line 1057 "llds_out_instr.m"
      }
#line 1060 "llds_out_instr.m"
    else
#line 1059 "llds_out_instr.m"
      {
#line 1059 "llds_out_instr.m"
      }
#line 1063 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__TempF_6 > (MR_Integer) 0);
#line 1067 "llds_out_instr.m"
    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1064 "llds_out_instr.m"
      {
#line 1064 "llds_out_instr.m"
        {
#line 1064 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "\tMR_Float ");
        }
#line 1079 "llds_out_instr.m"
        {
#line 1079 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_p_0((MR_Integer) 1, ll_backend__llds_out__llds_out_instr__TempF_6, (MR_String) "f");
        }
#line 1066 "llds_out_instr.m"
        {
#line 1066 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) ";\n");
#line 1066 "llds_out_instr.m"
          return;
        }
#line 1064 "llds_out_instr.m"
      }
#line 1067 "llds_out_instr.m"
    else
#line 1066 "llds_out_instr.m"
      {
#line 1066 "llds_out_instr.m"
      }
#line 1054 "llds_out_instr.m"
  }
#line 1052 "llds_out_instr.m"
}

#line 1037 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_livevals_4_p_0(
#line 1037 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 1037 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
#line 1037 "llds_out_instr.m"
{
#line 1040 "llds_out_instr.m"
  while (MR_TRUE)
#line 1040 "llds_out_instr.m"
    {
#line 1040 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 1040 "llds_out_instr.m"
      {
#line 1040 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1040 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1040 "llds_out_instr.m"
          {
#line 1040 "llds_out_instr.m"
          }
#line 1040 "llds_out_instr.m"
        else
#line 1041 "llds_out_instr.m"
          {
#line 1041 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Lval_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
#line 1041 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Lvals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));

#line 1042 "llds_out_instr.m"
            {
#line 1042 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "*\t");
            }
#line 1043 "llds_out_instr.m"
            {
#line 1043 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Lval_10);
            }
#line 1044 "llds_out_instr.m"
            {
#line 1044 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 1045 "llds_out_instr.m"
            /* direct tailcall eliminated */
#line 1045 "llds_out_instr.m"
            {
#line 1045 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Lvals_11;

#line 1045 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 1045 "llds_out_instr.m"
            }
#line 1045 "llds_out_instr.m"
            continue;
#line 1041 "llds_out_instr.m"
          }
#line 1040 "llds_out_instr.m"
      }
#line 1040 "llds_out_instr.m"
      break;
#line 1040 "llds_out_instr.m"
    }
#line 1037 "llds_out_instr.m"
}

#line 1013 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_comment_chars_4_p_0(
#line 1013 "llds_out_instr.m"
  MR_Char ll_backend__llds_out__llds_out_instr__HeadVar__1_1,
#line 1013 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
#line 1013 "llds_out_instr.m"
{
#line 1015 "llds_out_instr.m"
  while (MR_TRUE)
#line 1015 "llds_out_instr.m"
    {
#line 1015 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 1015 "llds_out_instr.m"
      {
#line 1015 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 1015 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1015 "llds_out_instr.m"
          {
#line 1015 "llds_out_instr.m"
          }
#line 1015 "llds_out_instr.m"
        else
#line 1016 "llds_out_instr.m"
          {
#line 1016 "llds_out_instr.m"
            MR_Char ll_backend__llds_out__llds_out_instr__Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
#line 1016 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Chars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));

#line 1018 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == (MR_Char) 47);
#line 1018 "llds_out_instr.m"
            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1019 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__Char_10 == (MR_Char) 42);
#line 1022 "llds_out_instr.m"
            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1021 "llds_out_instr.m"
              {
#line 1021 "llds_out_instr.m"
                {
#line 1021 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) " *");
                }
#line 1021 "llds_out_instr.m"
              }
#line 1022 "llds_out_instr.m"
            else
#line 1027 "llds_out_instr.m"
              {
#line 1023 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == (MR_Char) 42);
#line 1023 "llds_out_instr.m"
                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1024 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__Char_10 == (MR_Char) 47);
#line 1027 "llds_out_instr.m"
                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 1026 "llds_out_instr.m"
                  {
#line 1026 "llds_out_instr.m"
                    {
#line 1026 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) " /");
                    }
#line 1026 "llds_out_instr.m"
                  }
#line 1027 "llds_out_instr.m"
                else
#line 1028 "llds_out_instr.m"
                  {
#line 1028 "llds_out_instr.m"
                    mercury__io__write_char_3_p_0(ll_backend__llds_out__llds_out_instr__Char_10);
                  }
#line 1027 "llds_out_instr.m"
              }
#line 1030 "llds_out_instr.m"
            /* direct tailcall eliminated */
#line 1030 "llds_out_instr.m"
            {
#line 1030 "llds_out_instr.m"
              MR_Char ll_backend__llds_out__llds_out_instr__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_instr__Char_10;
#line 1030 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Chars_11;

#line 1030 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 1030 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__HeadVar__1_1 = ll_backend__llds_out__llds_out_instr__HeadVar__1__tmp_copy_1;
#line 1030 "llds_out_instr.m"
            }
#line 1030 "llds_out_instr.m"
            continue;
#line 1016 "llds_out_instr.m"
          }
#line 1015 "llds_out_instr.m"
      }
#line 1015 "llds_out_instr.m"
      break;
#line 1015 "llds_out_instr.m"
    }
#line 1013 "llds_out_instr.m"
}

#line 893 "llds_out_instr.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_3(
#line 893 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg)
#line 893 "llds_out_instr.m"
{
#line 893 "llds_out_instr.m"
  {
#line 893 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 893 "llds_out_instr.m"
    MR_Box ll_backend__llds_out__llds_out_instr__closure = ll_backend__llds_out__llds_out_instr__closure_arg;

#line 893 "llds_out_instr.m"
    {
#line 893 "llds_out_instr.m"
      return ll_backend__llds_out__llds_out_instr__succeeded = mercury__int__even_1_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 3))));
    }
#line 893 "llds_out_instr.m"
    return ll_backend__llds_out__llds_out_instr__succeeded;
#line 893 "llds_out_instr.m"
  }
#line 893 "llds_out_instr.m"
}

#line 944 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_2(
#line 944 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg,
#line 944 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 944 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
#line 944 "llds_out_instr.m"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_3)
#line 944 "llds_out_instr.m"
{
#line 944 "llds_out_instr.m"
  {
#line 944 "llds_out_instr.m"
    MR_Box ll_backend__llds_out__llds_out_instr__closure = ll_backend__llds_out__llds_out_instr__closure_arg;

#line 944 "llds_out_instr.m"
    {
#line 944 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_1));
#line 944 "llds_out_instr.m"
      return;
    }
#line 944 "llds_out_instr.m"
  }
#line 944 "llds_out_instr.m"
}

#line 934 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_1(
#line 934 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg,
#line 934 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 934 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
#line 934 "llds_out_instr.m"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_3)
#line 934 "llds_out_instr.m"
{
#line 934 "llds_out_instr.m"
  {
#line 934 "llds_out_instr.m"
    MR_Box ll_backend__llds_out__llds_out_instr__closure = ll_backend__llds_out__llds_out_instr__closure_arg;

#line 934 "llds_out_instr.m"
    {
#line 934 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_1));
#line 934 "llds_out_instr.m"
      return;
    }
#line 934 "llds_out_instr.m"
  }
#line 934 "llds_out_instr.m"
}

#line 541 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(
#line 541 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
#line 541 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_7,
#line 541 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8)
#line 541 "llds_out_instr.m"
{
#line 546 "llds_out_instr.m"
  {
#line 546 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 546 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__Instr_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 873 "llds_out_instr.m"
      {
#line 874 "llds_out_instr.m"
        {
#line 874 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "\tMR_discard_ticket();\n");
#line 874 "llds_out_instr.m"
          return;
        }
#line 873 "llds_out_instr.m"
      }
#line 546 "llds_out_instr.m"
    else
#line 546 "llds_out_instr.m"
      if ((ll_backend__llds_out__llds_out_instr__Instr_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 876 "llds_out_instr.m"
        {
#line 877 "llds_out_instr.m"
          {
#line 877 "llds_out_instr.m"
            mercury__io__write_string_3_p_0((MR_String) "\tMR_prune_ticket();\n");
#line 877 "llds_out_instr.m"
            return;
          }
#line 876 "llds_out_instr.m"
        }
#line 546 "llds_out_instr.m"
      else
#line 546 "llds_out_instr.m"
        if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 1))))
#line 546 "llds_out_instr.m"
          {
#line 546 "llds_out_instr.m"
            MR_String ll_backend__llds_out__llds_out_instr__Comment_10 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)));
#line 546 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__CommentChars_11;

#line 552 "llds_out_instr.m"
            {
#line 552 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "/*");
            }
#line 553 "llds_out_instr.m"
            {
#line 553 "llds_out_instr.m"
              mercury__string__to_char_list_2_p_0(ll_backend__llds_out__llds_out_instr__Comment_10, &ll_backend__llds_out__llds_out_instr__CommentChars_11);
            }
#line 554 "llds_out_instr.m"
            {
#line 554 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__output_comment_chars_4_p_0((MR_Char) 42, ll_backend__llds_out__llds_out_instr__CommentChars_11);
            }
#line 555 "llds_out_instr.m"
            {
#line 555 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "*/\n");
#line 555 "llds_out_instr.m"
              return;
            }
#line 546 "llds_out_instr.m"
          }
#line 546 "llds_out_instr.m"
        else
#line 546 "llds_out_instr.m"
          if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 2))))
#line 557 "llds_out_instr.m"
            {
#line 557 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__LiveVals_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)));
#line 557 "llds_out_instr.m"
              MR_Word ll_backend__llds_out__llds_out_instr__LiveValsList_13;

#line 558 "llds_out_instr.m"
              {
#line 558 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) "/*\n* Live lvalues:\n");
              }
#line 559 "llds_out_instr.m"
              {
#line 559 "llds_out_instr.m"
                mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__llds_out__llds_out_instr__LiveVals_12, &ll_backend__llds_out__llds_out_instr__LiveValsList_13);
              }
#line 560 "llds_out_instr.m"
              {
#line 560 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__output_livevals_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__LiveValsList_13);
              }
#line 561 "llds_out_instr.m"
              {
#line 561 "llds_out_instr.m"
                mercury__io__write_string_3_p_0((MR_String) "*/\n");
#line 561 "llds_out_instr.m"
                return;
              }
#line 557 "llds_out_instr.m"
            }
#line 546 "llds_out_instr.m"
          else
#line 546 "llds_out_instr.m"
            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 588 "llds_out_instr.m"
              {
#line 588 "llds_out_instr.m"
                MR_String ll_backend__llds_out__llds_out_instr__C_Code_32 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
#line 588 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 588 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));

#line 589 "llds_out_instr.m"
                {
#line 589 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "\t");
                }
#line 590 "llds_out_instr.m"
                {
#line 590 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__C_Code_32);
#line 590 "llds_out_instr.m"
                  return;
                }
#line 588 "llds_out_instr.m"
              }
#line 546 "llds_out_instr.m"
            else
#line 546 "llds_out_instr.m"
              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 576 "llds_out_instr.m"
                {
#line 576 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__Lval_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 576 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__Rval_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 576 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__Type_24;

#line 577 "llds_out_instr.m"
                  {
#line 577 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) "\t");
                  }
#line 578 "llds_out_instr.m"
                  {
#line 578 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_data__output_lval_for_assign_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_22, &ll_backend__llds_out__llds_out_instr__Type_24);
                  }
#line 579 "llds_out_instr.m"
                  {
#line 579 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) " = ");
                  }
#line 580 "llds_out_instr.m"
                  {
#line 580 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_23, ll_backend__llds_out__llds_out_instr__Type_24);
                  }
#line 581 "llds_out_instr.m"
                  {
#line 581 "llds_out_instr.m"
                    mercury__io__write_string_3_p_0((MR_String) ";\n");
#line 581 "llds_out_instr.m"
                    return;
                  }
#line 576 "llds_out_instr.m"
                }
#line 546 "llds_out_instr.m"
              else
#line 546 "llds_out_instr.m"
                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 563 "llds_out_instr.m"
                  {
#line 563 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__TypeCtorInfo_616_616;
#line 563 "llds_out_instr.m"
                    MR_Integer ll_backend__llds_out__llds_out_instr__TempR_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 563 "llds_out_instr.m"
                    MR_Integer ll_backend__llds_out__llds_out_instr__TempF_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 563 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__Instrs_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
#line 563 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_17;
#line 563 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__ContLabels_18;
#line 563 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__BlockLabelOutputInfo_21;
#line 563 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_463_463;
#line 563 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_464_464;
#line 565 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_19_19;
#line 565 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_20_20;

#line 564 "llds_out_instr.m"
                    {
#line 564 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__output_block_start_4_p_0(ll_backend__llds_out__llds_out_instr__TempR_14, ll_backend__llds_out__llds_out_instr__TempF_15);
                    }
#line 565 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__CallerLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 0)));
#line 565 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__ContLabels_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 1)));
#line 565 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 2)));
#line 565 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 3)));
#line 6843 "ll_backend.llds_out.llds_out_instr.c"
                    ll_backend__llds_out__llds_out_instr__TypeCtorInfo_616_616 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 567 "llds_out_instr.m"
                    {
#line 567 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__V_463_463 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_instr__TypeCtorInfo_616_616);
                    }
#line 567 "llds_out_instr.m"
                    {
#line 567 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__V_464_464 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_instr__TypeCtorInfo_616_616);
                    }
#line 566 "llds_out_instr.m"
                    {
#line 566 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__BlockLabelOutputInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 566 "llds_out_instr.m"
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__BlockLabelOutputInfo_21, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__CallerLabel_17));
#line 566 "llds_out_instr.m"
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__BlockLabelOutputInfo_21, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__ContLabels_18));
#line 566 "llds_out_instr.m"
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__BlockLabelOutputInfo_21, 2) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_463_463));
#line 566 "llds_out_instr.m"
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__BlockLabelOutputInfo_21, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_464_464));
#line 566 "llds_out_instr.m"
                    }
#line 568 "llds_out_instr.m"
                    {
#line 568 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__output_instruction_list_6_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Instrs_16, ll_backend__llds_out__llds_out_instr__BlockLabelOutputInfo_21, (MR_Integer) 0);
                    }
#line 570 "llds_out_instr.m"
                    {
#line 570 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__output_block_end_2_p_0();
#line 570 "llds_out_instr.m"
                      return;
                    }
#line 563 "llds_out_instr.m"
                  }
#line 546 "llds_out_instr.m"
                else
#line 546 "llds_out_instr.m"
                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 655 "llds_out_instr.m"
                    {
#line 655 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__MaybeLabels_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 655 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__Rval_490 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 656 "llds_out_instr.m"
                      {
#line 656 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0((MR_String) "\tMR_COMPUTED_GOTO(");
                      }
#line 657 "llds_out_instr.m"
                      {
#line 657 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_490, (MR_Integer) 8);
                      }
#line 658 "llds_out_instr.m"
                      {
#line 658 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                      }
#line 659 "llds_out_instr.m"
                      {
#line 659 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_p_0(ll_backend__llds_out__llds_out_instr__MaybeLabels_42);
                      }
#line 660 "llds_out_instr.m"
                      {
#line 660 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 660 "llds_out_instr.m"
                        return;
                      }
#line 655 "llds_out_instr.m"
                    }
#line 546 "llds_out_instr.m"
                  else
#line 546 "llds_out_instr.m"
                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 25))))
#line 918 "llds_out_instr.m"
                      {
#line 918 "llds_out_instr.m"
                        MR_Integer ll_backend__llds_out__llds_out_instr__N_512 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 919 "llds_out_instr.m"
                        {
#line 919 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "\tMR_decr_sp(");
                        }
#line 920 "llds_out_instr.m"
                        {
#line 920 "llds_out_instr.m"
                          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__N_512);
                        }
#line 921 "llds_out_instr.m"
                        {
#line 921 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 921 "llds_out_instr.m"
                          return;
                        }
#line 918 "llds_out_instr.m"
                      }
#line 546 "llds_out_instr.m"
                    else
#line 546 "llds_out_instr.m"
                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 923 "llds_out_instr.m"
                        {
#line 923 "llds_out_instr.m"
                          MR_Integer ll_backend__llds_out__llds_out_instr__N_513 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 924 "llds_out_instr.m"
                          {
#line 924 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) "\tMR_decr_sp_and_return(");
                          }
#line 925 "llds_out_instr.m"
                          {
#line 925 "llds_out_instr.m"
                            mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__N_513);
                          }
#line 926 "llds_out_instr.m"
                          {
#line 926 "llds_out_instr.m"
                            mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 926 "llds_out_instr.m"
                            return;
                          }
#line 923 "llds_out_instr.m"
                        }
#line 546 "llds_out_instr.m"
                      else
#line 546 "llds_out_instr.m"
                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 929 "llds_out_instr.m"
                          {
#line 929 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__Decls_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 929 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__Components_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 929 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__MaybeDefLabel_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 8)));
#line 928 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
#line 928 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 4)));
#line 928 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 5)));
#line 928 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 6)));
#line 928 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 7)));
#line 928 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 9)));
#line 928 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 10)));

#line 930 "llds_out_instr.m"
                            {
#line 930 "llds_out_instr.m"
                              mercury__io__write_string_3_p_0((MR_String) "\t{\n");
                            }
#line 931 "llds_out_instr.m"
                            {
#line 931 "llds_out_instr.m"
                              ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_p_0(ll_backend__llds_out__llds_out_instr__Decls_70);
                            }
#line 935 "llds_out_instr.m"
                            if ((ll_backend__llds_out__llds_out_instr__MaybeDefLabel_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 933 "llds_out_instr.m"
                              {
#line 933 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_172_172;
#line 934 "llds_out_instr.m"
                                MR_Box ll_backend__llds_out__llds_out_instr__conv0_STATE_VARIABLE_IO_173_173;

#line 934 "llds_out_instr.m"
                                {
#line 934 "llds_out_instr.m"
                                  ll_backend__llds_out__llds_out_instr__V_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 934 "llds_out_instr.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_172_172, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_5[0]));
#line 934 "llds_out_instr.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_172_172, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_1));
#line 934 "llds_out_instr.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_172_172, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 934 "llds_out_instr.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_172_172, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__Info_6));
#line 934 "llds_out_instr.m"
                                }
#line 934 "llds_out_instr.m"
                                {
#line 934 "llds_out_instr.m"
                                  mercury__list__foldl_4_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_instr__V_172_172, ll_backend__llds_out__llds_out_instr__Components_71, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_instr__conv0_STATE_VARIABLE_IO_173_173);
                                }
#line 933 "llds_out_instr.m"
                              }
#line 935 "llds_out_instr.m"
                            else
#line 936 "llds_out_instr.m"
                              {
#line 936 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__DefLabel_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeDefLabel_77, (MR_Integer) 0)));
#line 936 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__InternalLabelToLayoutMap_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
#line 936 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__DefLabelLayout_82;
#line 936 "llds_out_instr.m"
                                MR_String ll_backend__llds_out__llds_out_instr__MangledModuleName_83;
#line 936 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_168_168;
#line 937 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_573_573 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
#line 937 "llds_out_instr.m"
                                MR_String ll_backend__llds_out__llds_out_instr__V_574_574 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
#line 937 "llds_out_instr.m"
                                MR_String ll_backend__llds_out__llds_out_instr__V_575_575 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
#line 937 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_576_576 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
#line 937 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_577_577 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
#line 937 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_578_578 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)));
#line 937 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_579_579 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 937 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_580_580 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 937 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_581_581 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 937 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_582_582 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 937 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_583_583 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 937 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_584_584 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 937 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_585_585 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 937 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_586_586 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 937 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_587_587 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 937 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_588_588 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 937 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_589_589 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 937 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_590_590 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 937 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_591_591 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 937 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_592_592 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 937 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_593_593 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 8)));
#line 938 "llds_out_instr.m"
                                MR_Box ll_backend__llds_out__llds_out_instr__conv1_DefLabelLayout_82;
#line 940 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_594_594;
#line 940 "llds_out_instr.m"
                                MR_String ll_backend__llds_out__llds_out_instr__V_595_595;
#line 940 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_596_596;
#line 940 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_597_597;
#line 940 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_598_598;
#line 940 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_599_599;
#line 940 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_600_600;
#line 940 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_601_601;
#line 940 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_602_602;
#line 940 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_603_603;
#line 940 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_604_604;
#line 940 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_605_605;
#line 940 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_606_606;
#line 940 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_607_607;
#line 940 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_608_608;
#line 940 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_609_609;
#line 940 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_610_610;
#line 940 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_611_611;
#line 940 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_612_612;
#line 940 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_613_613;
#line 940 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__V_614_614;
#line 944 "llds_out_instr.m"
                                MR_Box ll_backend__llds_out__llds_out_instr__conv2_STATE_VARIABLE_IO_169_169;

#line 938 "llds_out_instr.m"
                                {
#line 938 "llds_out_instr.m"
                                  mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__llds_out__llds_out_instr__InternalLabelToLayoutMap_81, ((MR_Box) (ll_backend__llds_out__llds_out_instr__DefLabel_80)), &ll_backend__llds_out__llds_out_instr__conv1_DefLabelLayout_82);
                                }
#line 938 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__DefLabelLayout_82 = ((MR_Word) ll_backend__llds_out__llds_out_instr__conv1_DefLabelLayout_82);
#line 939 "llds_out_instr.m"
                                {
#line 939 "llds_out_instr.m"
                                  mercury__io__write_string_3_p_0((MR_String) "#define MR_HASH_DEF_LABEL_LAYOUT ");
                                }
#line 940 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_594_594 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
#line 940 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__MangledModuleName_83 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
#line 940 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_595_595 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
#line 940 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_596_596 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
#line 940 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_597_597 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
#line 940 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_598_598 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
#line 940 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_599_599 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)));
#line 940 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_600_600 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 940 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_601_601 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 940 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_602_602 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 940 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_603_603 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 940 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_604_604 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 940 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_605_605 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 940 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_606_606 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 940 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_607_607 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 940 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_608_608 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 940 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_609_609 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 940 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_610_610 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 940 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_611_611 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 940 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_612_612 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 940 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_613_613 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 940 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_614_614 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 8)));
#line 941 "llds_out_instr.m"
                                {
#line 941 "llds_out_instr.m"
                                  ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__llds_out__llds_out_instr__MangledModuleName_83, ll_backend__llds_out__llds_out_instr__DefLabelLayout_82);
                                }
#line 943 "llds_out_instr.m"
                                {
#line 943 "llds_out_instr.m"
                                  mercury__io__nl_2_p_0();
                                }
#line 944 "llds_out_instr.m"
                                {
#line 944 "llds_out_instr.m"
                                  ll_backend__llds_out__llds_out_instr__V_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 944 "llds_out_instr.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_168_168, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_5[0]));
#line 944 "llds_out_instr.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_168_168, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_2));
#line 944 "llds_out_instr.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_168_168, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 944 "llds_out_instr.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_168_168, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__Info_6));
#line 944 "llds_out_instr.m"
                                }
#line 944 "llds_out_instr.m"
                                {
#line 944 "llds_out_instr.m"
                                  mercury__list__foldl_4_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_instr__V_168_168, ll_backend__llds_out__llds_out_instr__Components_71, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_instr__conv2_STATE_VARIABLE_IO_169_169);
                                }
#line 945 "llds_out_instr.m"
                                {
#line 945 "llds_out_instr.m"
                                  mercury__io__write_string_3_p_0((MR_String) "#undef MR_HASH_DEF_LABEL_LAYOUT\n");
                                }
#line 936 "llds_out_instr.m"
                              }
#line 947 "llds_out_instr.m"
                            {
#line 947 "llds_out_instr.m"
                              mercury__io__write_string_3_p_0((MR_String) "\t}\n");
#line 947 "llds_out_instr.m"
                              return;
                            }
#line 929 "llds_out_instr.m"
                          }
#line 546 "llds_out_instr.m"
                        else
#line 546 "llds_out_instr.m"
                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 958 "llds_out_instr.m"
                            {
#line 958 "llds_out_instr.m"
                              MR_Word ll_backend__llds_out__llds_out_instr__Child_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 958 "llds_out_instr.m"
                              MR_Word ll_backend__llds_out__llds_out_instr__Lval_515 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 959 "llds_out_instr.m"
                              {
#line 959 "llds_out_instr.m"
                                mercury__io__write_string_3_p_0((MR_String) "\tMR_fork_new_child(");
                              }
#line 960 "llds_out_instr.m"
                              {
#line 960 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_515);
                              }
#line 961 "llds_out_instr.m"
                              {
#line 961 "llds_out_instr.m"
                                mercury__io__write_string_3_p_0((MR_String) ", ");
                              }
#line 962 "llds_out_instr.m"
                              {
#line 962 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__Child_86);
                              }
#line 963 "llds_out_instr.m"
                              {
#line 963 "llds_out_instr.m"
                                mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 963 "llds_out_instr.m"
                                return;
                              }
#line 958 "llds_out_instr.m"
                            }
#line 546 "llds_out_instr.m"
                          else
#line 546 "llds_out_instr.m"
                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 741 "llds_out_instr.m"
                              {
#line 741 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__Rval_502 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 742 "llds_out_instr.m"
                                {
#line 742 "llds_out_instr.m"
                                  mercury__io__write_string_3_p_0((MR_String) "\tMR_free_heap(");
                                }
#line 743 "llds_out_instr.m"
                                {
#line 743 "llds_out_instr.m"
                                  ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_502, (MR_Integer) 11);
                                }
#line 744 "llds_out_instr.m"
                                {
#line 744 "llds_out_instr.m"
                                  mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 744 "llds_out_instr.m"
                                  return;
                                }
#line 741 "llds_out_instr.m"
                              }
#line 546 "llds_out_instr.m"
                            else
#line 546 "llds_out_instr.m"
                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 650 "llds_out_instr.m"
                                {
#line 650 "llds_out_instr.m"
                                  MR_Word ll_backend__llds_out__llds_out_instr__CodeAddr_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 650 "llds_out_instr.m"
                                  MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_489 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 0)));
#line 651 "llds_out_instr.m"
                                  MR_Word ll_backend__llds_out__llds_out_instr__V_546_546 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 1)));
#line 651 "llds_out_instr.m"
                                  MR_Word ll_backend__llds_out__llds_out_instr__V_547_547 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 2)));
#line 651 "llds_out_instr.m"
                                  MR_Word ll_backend__llds_out__llds_out_instr__V_548_548 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 3)));

#line 652 "llds_out_instr.m"
                                  {
#line 652 "llds_out_instr.m"
                                    mercury__io__write_string_3_p_0((MR_String) "\t");
                                  }
#line 653 "llds_out_instr.m"
                                  {
#line 653 "llds_out_instr.m"
                                    ll_backend__llds_out__llds_out_instr__output_goto_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__CodeAddr_41, ll_backend__llds_out__llds_out_instr__CallerLabel_489);
#line 653 "llds_out_instr.m"
                                    return;
                                  }
#line 650 "llds_out_instr.m"
                                }
#line 546 "llds_out_instr.m"
                              else
#line 546 "llds_out_instr.m"
                                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 662 "llds_out_instr.m"
                                  {
#line 662 "llds_out_instr.m"
                                    MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_491 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 0)));
#line 662 "llds_out_instr.m"
                                    MR_Word ll_backend__llds_out__llds_out_instr__Rval_492 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 662 "llds_out_instr.m"
                                    MR_Word ll_backend__llds_out__llds_out_instr__Target_493 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 663 "llds_out_instr.m"
                                    MR_Word ll_backend__llds_out__llds_out_instr__V_549_549 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 1)));
#line 663 "llds_out_instr.m"
                                    MR_Word ll_backend__llds_out__llds_out_instr__V_550_550 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 2)));
#line 663 "llds_out_instr.m"
                                    MR_Word ll_backend__llds_out__llds_out_instr__V_551_551 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 3)));

#line 664 "llds_out_instr.m"
                                    {
#line 664 "llds_out_instr.m"
                                      mercury__io__write_string_3_p_0((MR_String) "\tif (");
                                    }
#line 665 "llds_out_instr.m"
                                    {
#line 665 "llds_out_instr.m"
                                      ll_backend__llds_out__llds_out_data__output_test_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_492);
                                    }
#line 666 "llds_out_instr.m"
                                    {
#line 666 "llds_out_instr.m"
                                      mercury__io__write_string_3_p_0((MR_String) ") {\n\t\t");
                                    }
#line 667 "llds_out_instr.m"
                                    {
#line 667 "llds_out_instr.m"
                                      ll_backend__llds_out__llds_out_instr__output_goto_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Target_493, ll_backend__llds_out__llds_out_instr__CallerLabel_491);
                                    }
#line 668 "llds_out_instr.m"
                                    {
#line 668 "llds_out_instr.m"
                                      mercury__io__write_string_3_p_0((MR_String) "\t}\n");
#line 668 "llds_out_instr.m"
                                      return;
                                    }
#line 662 "llds_out_instr.m"
                                  }
#line 546 "llds_out_instr.m"
                                else
#line 546 "llds_out_instr.m"
                                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 681 "llds_out_instr.m"
                                    {
#line 681 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__MaybeTag_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 681 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__MaybeOffset_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
#line 681 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__SizeRval_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 4)));
#line 681 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__MaybeAllocId_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 5)));
#line 681 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 6)));
#line 681 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__MaybeRegionRval_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 7)));
#line 681 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__MaybeReuse_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 8)));
#line 681 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__Lval_499 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 682 "llds_out_instr.m"
                                      {
#line 682 "llds_out_instr.m"
                                        mercury__io__write_string_3_p_0((MR_String) "\t");
                                      }
#line 688 "llds_out_instr.m"
                                      if ((ll_backend__llds_out__llds_out_instr__MaybeReuse_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 684 "llds_out_instr.m"
                                        {
#line 684 "llds_out_instr.m"
                                          ll_backend__llds_out__llds_out_instr__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_99_114_95_104_112_95_110_111_95_114_101_117_115_101_95_95_91_57_93_95_48_11_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_499, ll_backend__llds_out__llds_out_instr__MaybeTag_43, ll_backend__llds_out__llds_out_instr__MaybeOffset_44, ll_backend__llds_out__llds_out_instr__SizeRval_45, ll_backend__llds_out__llds_out_instr__MaybeAllocId_46, ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_47, ll_backend__llds_out__llds_out_instr__MaybeRegionRval_48);
                                        }
#line 688 "llds_out_instr.m"
                                      else
#line 689 "llds_out_instr.m"
                                        {
#line 689 "llds_out_instr.m"
                                          MR_Word ll_backend__llds_out__llds_out_instr__ReuseRval_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeReuse_49, (MR_Integer) 0)));
#line 689 "llds_out_instr.m"
                                          MR_Word ll_backend__llds_out__llds_out_instr__MaybeFlagLval_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeReuse_49, (MR_Integer) 1)));

#line 703 "llds_out_instr.m"
                                          if ((ll_backend__llds_out__llds_out_instr__MaybeTag_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 691 "llds_out_instr.m"
                                            if ((ll_backend__llds_out__llds_out_instr__MaybeFlagLval_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 699 "llds_out_instr.m"
                                              {
#line 700 "llds_out_instr.m"
                                                {
#line 700 "llds_out_instr.m"
                                                  mercury__io__write_string_3_p_0((MR_String) "MR_reuse_or_alloc_heap(");
                                                }
#line 701 "llds_out_instr.m"
                                                {
#line 701 "llds_out_instr.m"
                                                  ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_499);
                                                }
#line 699 "llds_out_instr.m"
                                              }
#line 691 "llds_out_instr.m"
                                            else
#line 693 "llds_out_instr.m"
                                              {
#line 693 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__FlagLval_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeFlagLval_51, (MR_Integer) 0)));

#line 694 "llds_out_instr.m"
                                                {
#line 694 "llds_out_instr.m"
                                                  mercury__io__write_string_3_p_0((MR_String) "MR_reuse_or_alloc_heap_flag(");
                                                }
#line 695 "llds_out_instr.m"
                                                {
#line 695 "llds_out_instr.m"
                                                  ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_499);
                                                }
#line 696 "llds_out_instr.m"
                                                {
#line 696 "llds_out_instr.m"
                                                  mercury__io__write_string_3_p_0((MR_String) ", ");
                                                }
#line 697 "llds_out_instr.m"
                                                {
#line 697 "llds_out_instr.m"
                                                  ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__FlagLval_52);
                                                }
#line 693 "llds_out_instr.m"
                                              }
#line 703 "llds_out_instr.m"
                                          else
#line 704 "llds_out_instr.m"
                                            {
#line 704 "llds_out_instr.m"
                                              MR_Integer ll_backend__llds_out__llds_out_instr__Tag_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeTag_43, (MR_Integer) 0)));

#line 713 "llds_out_instr.m"
                                              if ((ll_backend__llds_out__llds_out_instr__MaybeFlagLval_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 714 "llds_out_instr.m"
                                                {
#line 715 "llds_out_instr.m"
                                                  {
#line 715 "llds_out_instr.m"
                                                    mercury__io__write_string_3_p_0((MR_String) "MR_tag_reuse_or_alloc_heap(");
                                                  }
#line 716 "llds_out_instr.m"
                                                  {
#line 716 "llds_out_instr.m"
                                                    ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_499);
                                                  }
#line 717 "llds_out_instr.m"
                                                  {
#line 717 "llds_out_instr.m"
                                                    mercury__io__write_string_3_p_0((MR_String) ", ");
                                                  }
#line 718 "llds_out_instr.m"
                                                  {
#line 718 "llds_out_instr.m"
                                                    ll_backend__llds_out__llds_out_data__output_tag_3_p_0(ll_backend__llds_out__llds_out_instr__Tag_53);
                                                  }
#line 714 "llds_out_instr.m"
                                                }
#line 713 "llds_out_instr.m"
                                              else
#line 706 "llds_out_instr.m"
                                                {
#line 706 "llds_out_instr.m"
                                                  MR_Word ll_backend__llds_out__llds_out_instr__FlagLval_496 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeFlagLval_51, (MR_Integer) 0)));

#line 707 "llds_out_instr.m"
                                                  {
#line 707 "llds_out_instr.m"
                                                    mercury__io__write_string_3_p_0((MR_String) "MR_tag_reuse_or_alloc_heap_flag(");
                                                  }
#line 708 "llds_out_instr.m"
                                                  {
#line 708 "llds_out_instr.m"
                                                    ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_499);
                                                  }
#line 709 "llds_out_instr.m"
                                                  {
#line 709 "llds_out_instr.m"
                                                    mercury__io__write_string_3_p_0((MR_String) ", ");
                                                  }
#line 710 "llds_out_instr.m"
                                                  {
#line 710 "llds_out_instr.m"
                                                    ll_backend__llds_out__llds_out_data__output_tag_3_p_0(ll_backend__llds_out__llds_out_instr__Tag_53);
                                                  }
#line 711 "llds_out_instr.m"
                                                  {
#line 711 "llds_out_instr.m"
                                                    mercury__io__write_string_3_p_0((MR_String) ", ");
                                                  }
#line 712 "llds_out_instr.m"
                                                  {
#line 712 "llds_out_instr.m"
                                                    ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__FlagLval_496);
                                                  }
#line 706 "llds_out_instr.m"
                                                }
#line 704 "llds_out_instr.m"
                                            }
#line 721 "llds_out_instr.m"
                                          {
#line 721 "llds_out_instr.m"
                                            mercury__io__write_string_3_p_0((MR_String) ", ");
                                          }
#line 722 "llds_out_instr.m"
                                          {
#line 722 "llds_out_instr.m"
                                            ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__ReuseRval_50);
                                          }
#line 723 "llds_out_instr.m"
                                          {
#line 723 "llds_out_instr.m"
                                            mercury__io__write_string_3_p_0((MR_String) ", ");
                                          }
#line 724 "llds_out_instr.m"
                                          {
#line 724 "llds_out_instr.m"
                                            ll_backend__llds_out__llds_out_instr__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_99_114_95_104_112_95_110_111_95_114_101_117_115_101_95_95_91_57_93_95_48_11_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_499, ll_backend__llds_out__llds_out_instr__MaybeTag_43, ll_backend__llds_out__llds_out_instr__MaybeOffset_44, ll_backend__llds_out__llds_out_instr__SizeRval_45, ll_backend__llds_out__llds_out_instr__MaybeAllocId_46, ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_47, ll_backend__llds_out__llds_out_instr__MaybeRegionRval_48);
                                          }
#line 727 "llds_out_instr.m"
                                          {
#line 727 "llds_out_instr.m"
                                            mercury__io__write_string_3_p_0((MR_String) ")");
                                          }
#line 689 "llds_out_instr.m"
                                        }
#line 729 "llds_out_instr.m"
                                      {
#line 729 "llds_out_instr.m"
                                        mercury__io__write_string_3_p_0((MR_String) ";\n");
#line 729 "llds_out_instr.m"
                                        return;
                                      }
#line 681 "llds_out_instr.m"
                                    }
#line 546 "llds_out_instr.m"
                                  else
#line 546 "llds_out_instr.m"
                                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 24))))
#line 889 "llds_out_instr.m"
                                      {
#line 889 "llds_out_instr.m"
                                        MR_Integer ll_backend__llds_out__llds_out_instr__N_67 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 889 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__DwordAlignment_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 889 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__Kind_511 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
#line 889 "llds_out_instr.m"
                                        MR_String ll_backend__llds_out__llds_out_instr___Msg_68 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 890 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_552_552 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
#line 890 "llds_out_instr.m"
                                        MR_String ll_backend__llds_out__llds_out_instr__V_553_553 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
#line 890 "llds_out_instr.m"
                                        MR_String ll_backend__llds_out__llds_out_instr__V_554_554 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
#line 890 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_555_555 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
#line 890 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_556_556 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
#line 890 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_557_557 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
#line 890 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_558_558 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)));
#line 890 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_559_559 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 890 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_560_560 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 890 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_561_561 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 890 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_562_562 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 890 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_563_563 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 890 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_564_564 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 890 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_565_565 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 890 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_566_566 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 890 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_567_567 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 890 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_568_568 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 890 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_569_569 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 890 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_570_570 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 890 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_571_571 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 890 "llds_out_instr.m"
                                        MR_Word ll_backend__llds_out__llds_out_instr__V_572_572 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 8)));

#line 894 "llds_out_instr.m"
                                        if ((ll_backend__llds_out__llds_out_instr__DwordAlignment_69 == (MR_Integer) 0))
#line 895 "llds_out_instr.m"
                                          {
#line 895 "llds_out_instr.m"
                                          }
#line 894 "llds_out_instr.m"
                                        else
#line 892 "llds_out_instr.m"
                                          {
#line 892 "llds_out_instr.m"
                                            MR_Word ll_backend__llds_out__llds_out_instr__V_186_186;

#line 893 "llds_out_instr.m"
                                            {
#line 893 "llds_out_instr.m"
                                              ll_backend__llds_out__llds_out_instr__V_186_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 893 "llds_out_instr.m"
                                              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_186_186, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_6[0]));
#line 893 "llds_out_instr.m"
                                              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_186_186, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_3));
#line 893 "llds_out_instr.m"
                                              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_186_186, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 893 "llds_out_instr.m"
                                              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_186_186, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__N_67));
#line 893 "llds_out_instr.m"
                                            }
#line 893 "llds_out_instr.m"
                                            {
#line 893 "llds_out_instr.m"
                                              mercury__require__expect_4_p_0(ll_backend__llds_out__llds_out_instr__V_186_186, (MR_String) "ll_backend.llds_out.llds_out_instr", (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction\'/5", (MR_String) "odd sp increment");
                                            }
#line 892 "llds_out_instr.m"
                                          }
#line 904 "llds_out_instr.m"
                                        if ((ll_backend__llds_out__llds_out_instr__Kind_511 == (MR_Integer) 0))
#line 898 "llds_out_instr.m"
                                          {
#line 899 "llds_out_instr.m"
                                            MR_Integer ll_backend__llds_out__llds_out_instr__V_192_192;

#line 899 "llds_out_instr.m"
                                            {
#line 899 "llds_out_instr.m"
                                              ll_backend__llds_out__llds_out_instr__V_192_192 = ll_backend__llds_out__llds_out_instr__max_leaf_stack_frame_size_0_f_0();
                                            }
#line 899 "llds_out_instr.m"
                                            ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__N_67 < ll_backend__llds_out__llds_out_instr__V_192_192);
#line 898 "llds_out_instr.m"
                                            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 900 "llds_out_instr.m"
                                              {
#line 900 "llds_out_instr.m"
                                                {
#line 900 "llds_out_instr.m"
                                                  mercury__io__write_string_3_p_0((MR_String) "\tMR_incr_sp_leaf(");
                                                }
#line 900 "llds_out_instr.m"
                                              }
#line 898 "llds_out_instr.m"
                                            else
#line 902 "llds_out_instr.m"
                                              {
#line 902 "llds_out_instr.m"
                                                {
#line 902 "llds_out_instr.m"
                                                  mercury__io__write_string_3_p_0((MR_String) "\tMR_incr_sp(");
                                                }
#line 902 "llds_out_instr.m"
                                              }
#line 898 "llds_out_instr.m"
                                          }
#line 904 "llds_out_instr.m"
                                        else
#line 905 "llds_out_instr.m"
                                          {
#line 906 "llds_out_instr.m"
                                            {
#line 906 "llds_out_instr.m"
                                              mercury__io__write_string_3_p_0((MR_String) "\tMR_incr_sp(");
                                            }
#line 905 "llds_out_instr.m"
                                          }
#line 908 "llds_out_instr.m"
                                        {
#line 908 "llds_out_instr.m"
                                          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__N_67);
                                        }
#line 909 "llds_out_instr.m"
                                        {
#line 909 "llds_out_instr.m"
                                          mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 909 "llds_out_instr.m"
                                          return;
                                        }
#line 889 "llds_out_instr.m"
                                      }
#line 546 "llds_out_instr.m"
                                    else
#line 546 "llds_out_instr.m"
                                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 949 "llds_out_instr.m"
                                        {
#line 949 "llds_out_instr.m"
                                          MR_Integer ll_backend__llds_out__llds_out_instr__NumConjuncts_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 949 "llds_out_instr.m"
                                          MR_Integer ll_backend__llds_out__llds_out_instr__TSStringIndex_85 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
#line 949 "llds_out_instr.m"
                                          MR_Word ll_backend__llds_out__llds_out_instr__Lval_514 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 950 "llds_out_instr.m"
                                          {
#line 950 "llds_out_instr.m"
                                            mercury__io__write_string_3_p_0((MR_String) "\tMR_init_sync_term(");
                                          }
#line 951 "llds_out_instr.m"
                                          {
#line 951 "llds_out_instr.m"
                                            ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_514);
                                          }
#line 952 "llds_out_instr.m"
                                          {
#line 952 "llds_out_instr.m"
                                            mercury__io__write_string_3_p_0((MR_String) ", ");
                                          }
#line 953 "llds_out_instr.m"
                                          {
#line 953 "llds_out_instr.m"
                                            mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__NumConjuncts_84);
                                          }
#line 954 "llds_out_instr.m"
                                          {
#line 954 "llds_out_instr.m"
                                            mercury__io__write_string_3_p_0((MR_String) ", ");
                                          }
#line 955 "llds_out_instr.m"
                                          {
#line 955 "llds_out_instr.m"
                                            mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__TSStringIndex_85);
                                          }
#line 956 "llds_out_instr.m"
                                          {
#line 956 "llds_out_instr.m"
                                            mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 956 "llds_out_instr.m"
                                            return;
                                          }
#line 949 "llds_out_instr.m"
                                        }
#line 546 "llds_out_instr.m"
                                      else
#line 546 "llds_out_instr.m"
                                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 965 "llds_out_instr.m"
                                          {
#line 965 "llds_out_instr.m"
                                            MR_Word ll_backend__llds_out__llds_out_instr__Lval_516 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 965 "llds_out_instr.m"
                                            MR_Word ll_backend__llds_out__llds_out_instr__Label_517 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));

#line 966 "llds_out_instr.m"
                                            {
#line 966 "llds_out_instr.m"
                                              mercury__io__write_string_3_p_0((MR_String) "\tMR_join_and_continue(");
                                            }
#line 967 "llds_out_instr.m"
                                            {
#line 967 "llds_out_instr.m"
                                              ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_516);
                                            }
#line 968 "llds_out_instr.m"
                                            {
#line 968 "llds_out_instr.m"
                                              mercury__io__write_string_3_p_0((MR_String) ", ");
                                            }
#line 969 "llds_out_instr.m"
                                            {
#line 969 "llds_out_instr.m"
                                              ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__Label_517);
                                            }
#line 970 "llds_out_instr.m"
                                            {
#line 970 "llds_out_instr.m"
                                              mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 970 "llds_out_instr.m"
                                              return;
                                            }
#line 965 "llds_out_instr.m"
                                          }
#line 546 "llds_out_instr.m"
                                        else
#line 546 "llds_out_instr.m"
                                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 576 "llds_out_instr.m"
                                            {
#line 576 "llds_out_instr.m"
                                              MR_Word ll_backend__llds_out__llds_out_instr__Lval_629 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 576 "llds_out_instr.m"
                                              MR_Word ll_backend__llds_out__llds_out_instr__Rval_630 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 576 "llds_out_instr.m"
                                              MR_Word ll_backend__llds_out__llds_out_instr__Type_631;

#line 577 "llds_out_instr.m"
                                              {
#line 577 "llds_out_instr.m"
                                                mercury__io__write_string_3_p_0((MR_String) "\t");
                                              }
#line 578 "llds_out_instr.m"
                                              {
#line 578 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_data__output_lval_for_assign_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_629, &ll_backend__llds_out__llds_out_instr__Type_631);
                                              }
#line 579 "llds_out_instr.m"
                                              {
#line 579 "llds_out_instr.m"
                                                mercury__io__write_string_3_p_0((MR_String) " = ");
                                              }
#line 580 "llds_out_instr.m"
                                              {
#line 580 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_630, ll_backend__llds_out__llds_out_instr__Type_631);
                                              }
#line 581 "llds_out_instr.m"
                                              {
#line 581 "llds_out_instr.m"
                                                mercury__io__write_string_3_p_0((MR_String) ";\n");
#line 581 "llds_out_instr.m"
                                                return;
                                              }
#line 576 "llds_out_instr.m"
                                            }
#line 546 "llds_out_instr.m"
                                          else
#line 546 "llds_out_instr.m"
                                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 639 "llds_out_instr.m"
                                              {
#line 639 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__Label_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 639 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__LocalThreadEngineBase_40;
#line 641 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_525_525;
#line 641 "llds_out_instr.m"
                                                MR_String ll_backend__llds_out__llds_out_instr__V_526_526;
#line 641 "llds_out_instr.m"
                                                MR_String ll_backend__llds_out__llds_out_instr__V_527_527;
#line 641 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_528_528;
#line 641 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_529_529;
#line 641 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_530_530;
#line 641 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_531_531;
#line 641 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_532_532;
#line 641 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_533_533;
#line 641 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_534_534;
#line 641 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_535_535;
#line 641 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_536_536;
#line 641 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_537_537;
#line 641 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_538_538;
#line 641 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_539_539;
#line 641 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_540_540;
#line 641 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_541_541;
#line 641 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_542_542;
#line 641 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_543_543;
#line 641 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_544_544;
#line 641 "llds_out_instr.m"
                                                MR_Word ll_backend__llds_out__llds_out_instr__V_545_545;

#line 640 "llds_out_instr.m"
                                                {
#line 640 "llds_out_instr.m"
                                                  ll_backend__llds_out__llds_out_instr__output_label_defn_3_p_0(ll_backend__llds_out__llds_out_instr__Label_39);
                                                }
#line 641 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_525_525 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
#line 641 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_526_526 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
#line 641 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_527_527 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
#line 641 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_528_528 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
#line 641 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_529_529 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
#line 641 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_530_530 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
#line 641 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_531_531 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)));
#line 641 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_532_532 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 641 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_533_533 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 641 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_534_534 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 641 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_535_535 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 641 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__LocalThreadEngineBase_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 641 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_536_536 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 641 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_537_537 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 641 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_538_538 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 641 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_539_539 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 641 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_540_540 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 641 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_541_541 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 641 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_542_542 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 641 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_543_543 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 641 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_544_544 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 641 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_545_545 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 8)));
#line 645 "llds_out_instr.m"
                                                if ((ll_backend__llds_out__llds_out_instr__LocalThreadEngineBase_40 == (MR_Integer) 0))
#line 646 "llds_out_instr.m"
                                                  {
#line 646 "llds_out_instr.m"
                                                  }
#line 645 "llds_out_instr.m"
                                                else
#line 643 "llds_out_instr.m"
                                                  {
#line 644 "llds_out_instr.m"
                                                    {
#line 644 "llds_out_instr.m"
                                                      mercury__io__write_string_3_p_0((MR_String) "\tMR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE\n");
                                                    }
#line 643 "llds_out_instr.m"
                                                  }
#line 648 "llds_out_instr.m"
                                                {
#line 648 "llds_out_instr.m"
                                                  ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Label_39, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8);
#line 648 "llds_out_instr.m"
                                                  return;
                                                }
#line 639 "llds_out_instr.m"
                                              }
#line 546 "llds_out_instr.m"
                                            else
#line 546 "llds_out_instr.m"
                                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 972 "llds_out_instr.m"
                                                {
#line 972 "llds_out_instr.m"
                                                  MR_Integer ll_backend__llds_out__llds_out_instr__NumSlots_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 972 "llds_out_instr.m"
                                                  MR_Word ll_backend__llds_out__llds_out_instr__Lval_518 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));

#line 974 "llds_out_instr.m"
                                                  {
#line 974 "llds_out_instr.m"
                                                    mercury__io__write_string_3_p_0((MR_String) "\tMR_lc_create_loop_control(");
                                                  }
#line 975 "llds_out_instr.m"
                                                  {
#line 975 "llds_out_instr.m"
                                                    mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__NumSlots_87);
                                                  }
#line 976 "llds_out_instr.m"
                                                  {
#line 976 "llds_out_instr.m"
                                                    mercury__io__write_string_3_p_0((MR_String) ", ");
                                                  }
#line 977 "llds_out_instr.m"
                                                  {
#line 977 "llds_out_instr.m"
                                                    ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_518);
                                                  }
#line 978 "llds_out_instr.m"
                                                  {
#line 978 "llds_out_instr.m"
                                                    mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 978 "llds_out_instr.m"
                                                    return;
                                                  }
#line 972 "llds_out_instr.m"
                                                }
#line 546 "llds_out_instr.m"
                                              else
#line 546 "llds_out_instr.m"
                                                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 999 "llds_out_instr.m"
                                                  {
#line 999 "llds_out_instr.m"
                                                    MR_Word ll_backend__llds_out__llds_out_instr__LCRval_520 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 999 "llds_out_instr.m"
                                                    MR_Word ll_backend__llds_out__llds_out_instr__LCSRval_521 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));

#line 1001 "llds_out_instr.m"
                                                    {
#line 1001 "llds_out_instr.m"
                                                      mercury__io__write_string_3_p_0((MR_String) "\tMR_lc_join_and_terminate(");
                                                    }
#line 1002 "llds_out_instr.m"
                                                    {
#line 1002 "llds_out_instr.m"
                                                      ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__LCRval_520);
                                                    }
#line 1003 "llds_out_instr.m"
                                                    {
#line 1003 "llds_out_instr.m"
                                                      mercury__io__write_string_3_p_0((MR_String) ", ");
                                                    }
#line 1004 "llds_out_instr.m"
                                                    {
#line 1004 "llds_out_instr.m"
                                                      ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__LCSRval_521);
                                                    }
#line 1005 "llds_out_instr.m"
                                                    {
#line 1005 "llds_out_instr.m"
                                                      mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1005 "llds_out_instr.m"
                                                      return;
                                                    }
#line 999 "llds_out_instr.m"
                                                  }
#line 546 "llds_out_instr.m"
                                                else
#line 546 "llds_out_instr.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 990 "llds_out_instr.m"
                                                    {
#line 990 "llds_out_instr.m"
                                                      MR_Word ll_backend__llds_out__llds_out_instr__LCSRval_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 990 "llds_out_instr.m"
                                                      MR_Word ll_backend__llds_out__llds_out_instr__ChildLabel_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
#line 990 "llds_out_instr.m"
                                                      MR_Word ll_backend__llds_out__llds_out_instr__LCRval_519 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 991 "llds_out_instr.m"
                                                      {
#line 991 "llds_out_instr.m"
                                                        mercury__io__write_string_3_p_0((MR_String) "\tMR_lc_spawn_off((MR_LoopControl*)");
                                                      }
#line 992 "llds_out_instr.m"
                                                      {
#line 992 "llds_out_instr.m"
                                                        ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__LCRval_519);
                                                      }
#line 993 "llds_out_instr.m"
                                                      {
#line 993 "llds_out_instr.m"
                                                        mercury__io__write_string_3_p_0((MR_String) ", ");
                                                      }
#line 994 "llds_out_instr.m"
                                                      {
#line 994 "llds_out_instr.m"
                                                        ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__LCSRval_91);
                                                      }
#line 995 "llds_out_instr.m"
                                                      {
#line 995 "llds_out_instr.m"
                                                        mercury__io__write_string_3_p_0((MR_String) ", ");
                                                      }
#line 996 "llds_out_instr.m"
                                                      {
#line 996 "llds_out_instr.m"
                                                        ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__ChildLabel_92);
                                                      }
#line 997 "llds_out_instr.m"
                                                      {
#line 997 "llds_out_instr.m"
                                                        mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 997 "llds_out_instr.m"
                                                        return;
                                                      }
#line 990 "llds_out_instr.m"
                                                    }
#line 546 "llds_out_instr.m"
                                                  else
#line 546 "llds_out_instr.m"
                                                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 980 "llds_out_instr.m"
                                                      {
#line 980 "llds_out_instr.m"
                                                        MR_Word ll_backend__llds_out__llds_out_instr__LCRval_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 980 "llds_out_instr.m"
                                                        MR_Word ll_backend__llds_out__llds_out_instr__LCSLval_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 980 "llds_out_instr.m"
                                                        MR_Word ll_backend__llds_out__llds_out_instr__InternalLabel_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));

#line 982 "llds_out_instr.m"
                                                        {
#line 982 "llds_out_instr.m"
                                                          mercury__io__write_string_3_p_0((MR_String) "\tMR_lc_wait_free_slot(");
                                                        }
#line 983 "llds_out_instr.m"
                                                        {
#line 983 "llds_out_instr.m"
                                                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__LCRval_88);
                                                        }
#line 984 "llds_out_instr.m"
                                                        {
#line 984 "llds_out_instr.m"
                                                          mercury__io__write_string_3_p_0((MR_String) ", ");
                                                        }
#line 985 "llds_out_instr.m"
                                                        {
#line 985 "llds_out_instr.m"
                                                          ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__LCSLval_89);
                                                        }
#line 986 "llds_out_instr.m"
                                                        {
#line 986 "llds_out_instr.m"
                                                          mercury__io__write_string_3_p_0((MR_String) ", ");
                                                        }
#line 987 "llds_out_instr.m"
                                                        {
#line 987 "llds_out_instr.m"
                                                          ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(ll_backend__llds_out__llds_out_instr__InternalLabel_90);
                                                        }
#line 988 "llds_out_instr.m"
                                                        {
#line 988 "llds_out_instr.m"
                                                          mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 988 "llds_out_instr.m"
                                                          return;
                                                        }
#line 980 "llds_out_instr.m"
                                                      }
#line 546 "llds_out_instr.m"
                                                    else
#line 546 "llds_out_instr.m"
                                                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 583 "llds_out_instr.m"
                                                        {
#line 583 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__Target_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 583 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__ContLabel_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 583 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__LiveVals_479 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
#line 583 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_480 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 0)));
#line 583 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 4)));
#line 583 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 5)));
#line 583 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 6)));
#line 584 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__V_522_522 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 1)));
#line 584 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__V_523_523 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 2)));
#line 584 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__V_524_524 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 3)));

#line 585 "llds_out_instr.m"
                                                          {
#line 585 "llds_out_instr.m"
                                                            ll_backend__llds_out__llds_out_instr__output_call_6_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Target_25, ll_backend__llds_out__llds_out_instr__ContLabel_26, ll_backend__llds_out__llds_out_instr__CallerLabel_480);
                                                          }
#line 586 "llds_out_instr.m"
                                                          {
#line 586 "llds_out_instr.m"
                                                            ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__LiveVals_479);
#line 586 "llds_out_instr.m"
                                                            return;
                                                          }
#line 583 "llds_out_instr.m"
                                                        }
#line 546 "llds_out_instr.m"
                                                      else
#line 546 "llds_out_instr.m"
                                                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 731 "llds_out_instr.m"
                                                          {
#line 731 "llds_out_instr.m"
                                                            MR_Word ll_backend__llds_out__llds_out_instr__Lval_500 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 732 "llds_out_instr.m"
                                                            {
#line 732 "llds_out_instr.m"
                                                              mercury__io__write_string_3_p_0((MR_String) "\tMR_mark_hp(");
                                                            }
#line 733 "llds_out_instr.m"
                                                            {
#line 733 "llds_out_instr.m"
                                                              ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_500);
                                                            }
#line 734 "llds_out_instr.m"
                                                            {
#line 734 "llds_out_instr.m"
                                                              mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 734 "llds_out_instr.m"
                                                              return;
                                                            }
#line 731 "llds_out_instr.m"
                                                          }
#line 546 "llds_out_instr.m"
                                                        else
#line 546 "llds_out_instr.m"
                                                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 879 "llds_out_instr.m"
                                                            {
#line 879 "llds_out_instr.m"
                                                              MR_Word ll_backend__llds_out__llds_out_instr__Lval_509 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 880 "llds_out_instr.m"
                                                              {
#line 880 "llds_out_instr.m"
                                                                mercury__io__write_string_3_p_0((MR_String) "\tMR_mark_ticket_stack(");
                                                              }
#line 881 "llds_out_instr.m"
                                                              {
#line 881 "llds_out_instr.m"
                                                                ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_509);
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
#line 546 "llds_out_instr.m"
                                                          else
#line 546 "llds_out_instr.m"
                                                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 592 "llds_out_instr.m"
                                                              {
#line 592 "llds_out_instr.m"
                                                                MR_Word ll_backend__llds_out__llds_out_instr__FrameInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 592 "llds_out_instr.m"
                                                                MR_Word ll_backend__llds_out__llds_out_instr__MaybeFailCont_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));

#line 612 "llds_out_instr.m"
                                                                if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__FrameInfo_33)) == (MR_mktag((MR_Integer) 1))))
#line 594 "llds_out_instr.m"
                                                                  {
#line 594 "llds_out_instr.m"
                                                                    MR_String ll_backend__llds_out__llds_out_instr__Msg_35 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__FrameInfo_33, (MR_Integer) 0)));
#line 594 "llds_out_instr.m"
                                                                    MR_Integer ll_backend__llds_out__llds_out_instr__Num_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__FrameInfo_33, (MR_Integer) 1)));

#line 604 "llds_out_instr.m"
                                                                    if ((ll_backend__llds_out__llds_out_instr__MaybeFailCont_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 605 "llds_out_instr.m"
                                                                      {
#line 606 "llds_out_instr.m"
                                                                        {
#line 606 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) "\tMR_mkframe_no_redoip(\"");
                                                                        }
#line 607 "llds_out_instr.m"
                                                                        {
#line 607 "llds_out_instr.m"
                                                                          backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__llds_out__llds_out_instr__Msg_35);
                                                                        }
#line 608 "llds_out_instr.m"
                                                                        {
#line 608 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) "\", ");
                                                                        }
#line 609 "llds_out_instr.m"
                                                                        {
#line 609 "llds_out_instr.m"
                                                                          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Num_36);
                                                                        }
#line 610 "llds_out_instr.m"
                                                                        {
#line 610 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 610 "llds_out_instr.m"
                                                                          return;
                                                                        }
#line 605 "llds_out_instr.m"
                                                                      }
#line 604 "llds_out_instr.m"
                                                                    else
#line 596 "llds_out_instr.m"
                                                                      {
#line 596 "llds_out_instr.m"
                                                                        MR_Word ll_backend__llds_out__llds_out_instr__FailCont_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeFailCont_34, (MR_Integer) 0)));

#line 597 "llds_out_instr.m"
                                                                        {
#line 597 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) "\tMR_mkframe(\"");
                                                                        }
#line 598 "llds_out_instr.m"
                                                                        {
#line 598 "llds_out_instr.m"
                                                                          backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__llds_out__llds_out_instr__Msg_35);
                                                                        }
#line 599 "llds_out_instr.m"
                                                                        {
#line 599 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) "\", ");
                                                                        }
#line 600 "llds_out_instr.m"
                                                                        {
#line 600 "llds_out_instr.m"
                                                                          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Num_36);
                                                                        }
#line 601 "llds_out_instr.m"
                                                                        {
#line 601 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                                                                        }
#line 602 "llds_out_instr.m"
                                                                        {
#line 602 "llds_out_instr.m"
                                                                          ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__FailCont_37);
                                                                        }
#line 603 "llds_out_instr.m"
                                                                        {
#line 603 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 603 "llds_out_instr.m"
                                                                          return;
                                                                        }
#line 596 "llds_out_instr.m"
                                                                      }
#line 594 "llds_out_instr.m"
                                                                  }
#line 612 "llds_out_instr.m"
                                                                else
#line 613 "llds_out_instr.m"
                                                                  {
#line 613 "llds_out_instr.m"
                                                                    MR_Word ll_backend__llds_out__llds_out_instr__Kind_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__FrameInfo_33, (MR_Integer) 0)));

#line 625 "llds_out_instr.m"
                                                                    if ((ll_backend__llds_out__llds_out_instr__Kind_38 == (MR_Integer) 0))
#line 615 "llds_out_instr.m"
                                                                      {
#line 616 "llds_out_instr.m"
                                                                        {
#line 616 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) "\tMR_mkdettempframe(");
                                                                        }
#line 620 "llds_out_instr.m"
                                                                        if ((ll_backend__llds_out__llds_out_instr__MaybeFailCont_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 621 "llds_out_instr.m"
                                                                          {
#line 622 "llds_out_instr.m"
                                                                            {
#line 622 "llds_out_instr.m"
                                                                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_instr", (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction\'/5", (MR_String) "no failcont");
#line 622 "llds_out_instr.m"
                                                                              return;
                                                                            }
#line 621 "llds_out_instr.m"
                                                                          }
#line 620 "llds_out_instr.m"
                                                                        else
#line 618 "llds_out_instr.m"
                                                                          {
#line 618 "llds_out_instr.m"
                                                                            MR_Word ll_backend__llds_out__llds_out_instr__FailCont_481 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeFailCont_34, (MR_Integer) 0)));

#line 619 "llds_out_instr.m"
                                                                            {
#line 619 "llds_out_instr.m"
                                                                              ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__FailCont_481);
                                                                            }
#line 618 "llds_out_instr.m"
                                                                          }
#line 624 "llds_out_instr.m"
                                                                        {
#line 624 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 624 "llds_out_instr.m"
                                                                          return;
                                                                        }
#line 615 "llds_out_instr.m"
                                                                      }
#line 625 "llds_out_instr.m"
                                                                    else
#line 626 "llds_out_instr.m"
                                                                      {
#line 627 "llds_out_instr.m"
                                                                        {
#line 627 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) "\tMR_mktempframe(");
                                                                        }
#line 631 "llds_out_instr.m"
                                                                        if ((ll_backend__llds_out__llds_out_instr__MaybeFailCont_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 632 "llds_out_instr.m"
                                                                          {
#line 633 "llds_out_instr.m"
                                                                            {
#line 633 "llds_out_instr.m"
                                                                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_instr", (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction\'/5", (MR_String) "no failcont");
#line 633 "llds_out_instr.m"
                                                                              return;
                                                                            }
#line 632 "llds_out_instr.m"
                                                                          }
#line 631 "llds_out_instr.m"
                                                                        else
#line 629 "llds_out_instr.m"
                                                                          {
#line 629 "llds_out_instr.m"
                                                                            MR_Word ll_backend__llds_out__llds_out_instr__FailCont_484 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeFailCont_34, (MR_Integer) 0)));

#line 630 "llds_out_instr.m"
                                                                            {
#line 630 "llds_out_instr.m"
                                                                              ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__FailCont_484);
                                                                            }
#line 629 "llds_out_instr.m"
                                                                          }
#line 635 "llds_out_instr.m"
                                                                        {
#line 635 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 635 "llds_out_instr.m"
                                                                          return;
                                                                        }
#line 626 "llds_out_instr.m"
                                                                      }
#line 613 "llds_out_instr.m"
                                                                  }
#line 592 "llds_out_instr.m"
                                                              }
#line 546 "llds_out_instr.m"
                                                            else
#line 546 "llds_out_instr.m"
                                                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 884 "llds_out_instr.m"
                                                                {
#line 884 "llds_out_instr.m"
                                                                  MR_Word ll_backend__llds_out__llds_out_instr__Rval_510 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 885 "llds_out_instr.m"
                                                                  {
#line 885 "llds_out_instr.m"
                                                                    mercury__io__write_string_3_p_0((MR_String) "\tMR_prune_tickets_to(");
                                                                  }
#line 886 "llds_out_instr.m"
                                                                  {
#line 886 "llds_out_instr.m"
                                                                    ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_510, (MR_Integer) 13);
                                                                  }
#line 887 "llds_out_instr.m"
                                                                  {
#line 887 "llds_out_instr.m"
                                                                    mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 887 "llds_out_instr.m"
                                                                    return;
                                                                  }
#line 884 "llds_out_instr.m"
                                                                }
#line 546 "llds_out_instr.m"
                                                              else
#line 546 "llds_out_instr.m"
                                                                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 746 "llds_out_instr.m"
                                                                  {
#line 746 "llds_out_instr.m"
                                                                    MR_Word ll_backend__llds_out__llds_out_instr__StackId_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 746 "llds_out_instr.m"
                                                                    MR_Word ll_backend__llds_out__llds_out_instr__EmbeddedFrame_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 746 "llds_out_instr.m"
                                                                    MR_Integer ll_backend__llds_out__llds_out_instr__FirstSlot_57;
#line 746 "llds_out_instr.m"
                                                                    MR_Integer ll_backend__llds_out__llds_out_instr__LastSlot_58;
#line 746 "llds_out_instr.m"
                                                                    MR_String ll_backend__llds_out__llds_out_instr__V_316_316;
#line 746 "llds_out_instr.m"
                                                                    MR_String ll_backend__llds_out__llds_out_instr__V_317_317;
#line 746 "llds_out_instr.m"
                                                                    MR_String ll_backend__llds_out__llds_out_instr__V_318_318;
#line 746 "llds_out_instr.m"
                                                                    MR_String ll_backend__llds_out__llds_out_instr__V_320_320;
#line 746 "llds_out_instr.m"
                                                                    MR_String ll_backend__llds_out__llds_out_instr__V_321_321;
#line 746 "llds_out_instr.m"
                                                                    MR_String ll_backend__llds_out__llds_out_instr__Comment_503;
#line 763 "llds_out_instr.m"
                                                                    MR_Word ll_backend__llds_out__llds_out_instr___StackId_56;

#line 750 "llds_out_instr.m"
                                                                    if ((ll_backend__llds_out__llds_out_instr__StackId_54 == (MR_Integer) 2))
#line 754 "llds_out_instr.m"
                                                                      {
#line 755 "llds_out_instr.m"
                                                                        {
#line 755 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) "\tMR_push_region_commit_frame");
                                                                        }
#line 754 "llds_out_instr.m"
                                                                      }
#line 750 "llds_out_instr.m"
                                                                    else
#line 750 "llds_out_instr.m"
                                                                      if ((ll_backend__llds_out__llds_out_instr__StackId_54 == (MR_Integer) 1))
#line 751 "llds_out_instr.m"
                                                                        {
#line 752 "llds_out_instr.m"
                                                                          {
#line 752 "llds_out_instr.m"
                                                                            mercury__io__write_string_3_p_0((MR_String) "\tMR_push_region_disj_frame");
                                                                          }
#line 751 "llds_out_instr.m"
                                                                        }
#line 750 "llds_out_instr.m"
                                                                      else
#line 748 "llds_out_instr.m"
                                                                        {
#line 749 "llds_out_instr.m"
                                                                          {
#line 749 "llds_out_instr.m"
                                                                            mercury__io__write_string_3_p_0((MR_String) "\tMR_push_region_ite_frame");
                                                                          }
#line 748 "llds_out_instr.m"
                                                                        }
#line 757 "llds_out_instr.m"
                                                                    {
#line 757 "llds_out_instr.m"
                                                                      mercury__io__write_string_3_p_0((MR_String) "(");
                                                                    }
#line 758 "llds_out_instr.m"
                                                                    {
#line 758 "llds_out_instr.m"
                                                                      ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__EmbeddedFrame_55);
                                                                    }
#line 759 "llds_out_instr.m"
                                                                    {
#line 759 "llds_out_instr.m"
                                                                      mercury__io__write_string_3_p_0((MR_String) ");");
                                                                    }
#line 763 "llds_out_instr.m"
                                                                    ll_backend__llds_out__llds_out_instr___StackId_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__EmbeddedFrame_55, (MR_Integer) 0)));
#line 763 "llds_out_instr.m"
                                                                    ll_backend__llds_out__llds_out_instr__FirstSlot_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__EmbeddedFrame_55, (MR_Integer) 1)));
#line 763 "llds_out_instr.m"
                                                                    ll_backend__llds_out__llds_out_instr__LastSlot_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__EmbeddedFrame_55, (MR_Integer) 2)));
#line 765 "llds_out_instr.m"
                                                                    {
#line 765 "llds_out_instr.m"
                                                                      ll_backend__llds_out__llds_out_instr__V_317_317 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_instr__FirstSlot_57);
                                                                    }
#line 766 "llds_out_instr.m"
                                                                    {
#line 766 "llds_out_instr.m"
                                                                      ll_backend__llds_out__llds_out_instr__V_321_321 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_instr__LastSlot_58);
                                                                    }
#line 766 "llds_out_instr.m"
                                                                    {
#line 766 "llds_out_instr.m"
                                                                      ll_backend__llds_out__llds_out_instr__V_320_320 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_instr__V_321_321, (MR_String) " */");
                                                                    }
#line 765 "llds_out_instr.m"
                                                                    {
#line 765 "llds_out_instr.m"
                                                                      ll_backend__llds_out__llds_out_instr__V_318_318 = mercury__string__f_43_43_2_f_0((MR_String) "..", ll_backend__llds_out__llds_out_instr__V_320_320);
                                                                    }
#line 765 "llds_out_instr.m"
                                                                    {
#line 765 "llds_out_instr.m"
                                                                      ll_backend__llds_out__llds_out_instr__V_316_316 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_instr__V_317_317, ll_backend__llds_out__llds_out_instr__V_318_318);
                                                                    }
#line 765 "llds_out_instr.m"
                                                                    {
#line 765 "llds_out_instr.m"
                                                                      ll_backend__llds_out__llds_out_instr__Comment_503 = mercury__string__f_43_43_2_f_0((MR_String) " /* ", ll_backend__llds_out__llds_out_instr__V_316_316);
                                                                    }
#line 767 "llds_out_instr.m"
                                                                    {
#line 767 "llds_out_instr.m"
                                                                      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__Comment_503);
                                                                    }
#line 769 "llds_out_instr.m"
                                                                    {
#line 769 "llds_out_instr.m"
                                                                      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 769 "llds_out_instr.m"
                                                                      return;
                                                                    }
#line 746 "llds_out_instr.m"
                                                                  }
#line 546 "llds_out_instr.m"
                                                                else
#line 546 "llds_out_instr.m"
                                                                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 772 "llds_out_instr.m"
                                                                    {
#line 772 "llds_out_instr.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_instr__FillOp_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 772 "llds_out_instr.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_instr__IdRval_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
#line 772 "llds_out_instr.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_instr__NumLval_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 4)));
#line 772 "llds_out_instr.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_instr__AddrLval_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 5)));
#line 772 "llds_out_instr.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_instr__EmbeddedFrame_504 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));

#line 776 "llds_out_instr.m"
                                                                      if ((ll_backend__llds_out__llds_out_instr__FillOp_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 789 "llds_out_instr.m"
                                                                        {
#line 790 "llds_out_instr.m"
                                                                          {
#line 790 "llds_out_instr.m"
                                                                            mercury__io__write_string_3_p_0((MR_String) "\tMR_region_fill_commit");
                                                                          }
#line 789 "llds_out_instr.m"
                                                                        }
#line 776 "llds_out_instr.m"
                                                                      else
#line 776 "llds_out_instr.m"
                                                                        if ((ll_backend__llds_out__llds_out_instr__FillOp_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 786 "llds_out_instr.m"
                                                                          {
#line 787 "llds_out_instr.m"
                                                                            {
#line 787 "llds_out_instr.m"
                                                                              mercury__io__write_string_3_p_0((MR_String) "\tMR_region_fill_disj_snapshot");
                                                                            }
#line 786 "llds_out_instr.m"
                                                                          }
#line 776 "llds_out_instr.m"
                                                                        else
#line 776 "llds_out_instr.m"
                                                                          if ((ll_backend__llds_out__llds_out_instr__FillOp_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 774 "llds_out_instr.m"
                                                                            {
#line 775 "llds_out_instr.m"
                                                                              {
#line 775 "llds_out_instr.m"
                                                                                mercury__io__write_string_3_p_0((MR_String) "\tMR_region_fill_ite_protect");
                                                                              }
#line 774 "llds_out_instr.m"
                                                                            }
#line 776 "llds_out_instr.m"
                                                                          else
#line 776 "llds_out_instr.m"
                                                                            if ((ll_backend__llds_out__llds_out_instr__FillOp_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 783 "llds_out_instr.m"
                                                                              {
#line 784 "llds_out_instr.m"
                                                                                {
#line 784 "llds_out_instr.m"
                                                                                  mercury__io__write_string_3_p_0((MR_String) "\tMR_region_fill_semi_disj_protect");
                                                                                }
#line 783 "llds_out_instr.m"
                                                                              }
#line 776 "llds_out_instr.m"
                                                                            else
#line 776 "llds_out_instr.m"
                                                                              {
#line 776 "llds_out_instr.m"
                                                                                MR_Word ll_backend__llds_out__llds_out_instr__V_639_639 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__FillOp_59, (MR_Integer) 0)));

#line 776 "llds_out_instr.m"
                                                                                if ((ll_backend__llds_out__llds_out_instr__V_639_639 == (MR_Integer) 1))
#line 780 "llds_out_instr.m"
                                                                                  {
#line 781 "llds_out_instr.m"
                                                                                    {
#line 781 "llds_out_instr.m"
                                                                                      mercury__io__write_string_3_p_0((MR_String) "\tMR_region_fill_ite_snapshot_not_removed");
                                                                                    }
#line 780 "llds_out_instr.m"
                                                                                  }
#line 776 "llds_out_instr.m"
                                                                                else
#line 777 "llds_out_instr.m"
                                                                                  {
#line 778 "llds_out_instr.m"
                                                                                    {
#line 778 "llds_out_instr.m"
                                                                                      mercury__io__write_string_3_p_0((MR_String) "\tMR_region_fill_ite_snapshot_removed");
                                                                                    }
#line 777 "llds_out_instr.m"
                                                                                  }
#line 776 "llds_out_instr.m"
                                                                              }
#line 792 "llds_out_instr.m"
                                                                      {
#line 792 "llds_out_instr.m"
                                                                        mercury__io__write_string_3_p_0((MR_String) "(");
                                                                      }
#line 793 "llds_out_instr.m"
                                                                      {
#line 793 "llds_out_instr.m"
                                                                        ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__EmbeddedFrame_504);
                                                                      }
#line 794 "llds_out_instr.m"
                                                                      {
#line 794 "llds_out_instr.m"
                                                                        mercury__io__write_string_3_p_0((MR_String) ", ");
                                                                      }
#line 795 "llds_out_instr.m"
                                                                      {
#line 795 "llds_out_instr.m"
                                                                        ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__IdRval_60);
                                                                      }
#line 796 "llds_out_instr.m"
                                                                      {
#line 796 "llds_out_instr.m"
                                                                        mercury__io__write_string_3_p_0((MR_String) ", ");
                                                                      }
#line 797 "llds_out_instr.m"
                                                                      {
#line 797 "llds_out_instr.m"
                                                                        ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__NumLval_61);
                                                                      }
#line 798 "llds_out_instr.m"
                                                                      {
#line 798 "llds_out_instr.m"
                                                                        mercury__io__write_string_3_p_0((MR_String) ", ");
                                                                      }
#line 799 "llds_out_instr.m"
                                                                      {
#line 799 "llds_out_instr.m"
                                                                        ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__AddrLval_62);
                                                                      }
#line 800 "llds_out_instr.m"
                                                                      {
#line 800 "llds_out_instr.m"
                                                                        mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 800 "llds_out_instr.m"
                                                                        return;
                                                                      }
#line 772 "llds_out_instr.m"
                                                                    }
#line 546 "llds_out_instr.m"
                                                                  else
#line 546 "llds_out_instr.m"
                                                                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 802 "llds_out_instr.m"
                                                                      {
#line 802 "llds_out_instr.m"
                                                                        MR_Word ll_backend__llds_out__llds_out_instr__SetOp_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 802 "llds_out_instr.m"
                                                                        MR_Word ll_backend__llds_out__llds_out_instr__ValueRval_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
#line 802 "llds_out_instr.m"
                                                                        MR_Word ll_backend__llds_out__llds_out_instr__EmbeddedFrame_505 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));

#line 806 "llds_out_instr.m"
                                                                        if ((ll_backend__llds_out__llds_out_instr__SetOp_63 == (MR_Integer) 4))
#line 816 "llds_out_instr.m"
                                                                          {
#line 817 "llds_out_instr.m"
                                                                            {
#line 817 "llds_out_instr.m"
                                                                              mercury__io__write_string_3_p_0((MR_String) "\tMR_region_set_commit_num_entries");
                                                                            }
#line 816 "llds_out_instr.m"
                                                                          }
#line 806 "llds_out_instr.m"
                                                                        else
#line 806 "llds_out_instr.m"
                                                                          if ((ll_backend__llds_out__llds_out_instr__SetOp_63 == (MR_Integer) 2))
#line 810 "llds_out_instr.m"
                                                                            {
#line 811 "llds_out_instr.m"
                                                                              {
#line 811 "llds_out_instr.m"
                                                                                mercury__io__write_string_3_p_0((MR_String) "\tMR_region_set_disj_num_protects");
                                                                              }
#line 810 "llds_out_instr.m"
                                                                            }
#line 806 "llds_out_instr.m"
                                                                          else
#line 806 "llds_out_instr.m"
                                                                            if ((ll_backend__llds_out__llds_out_instr__SetOp_63 == (MR_Integer) 3))
#line 813 "llds_out_instr.m"
                                                                              {
#line 814 "llds_out_instr.m"
                                                                                {
#line 814 "llds_out_instr.m"
                                                                                  mercury__io__write_string_3_p_0((MR_String) "\tMR_region_set_disj_num_snapshots");
                                                                                }
#line 813 "llds_out_instr.m"
                                                                              }
#line 806 "llds_out_instr.m"
                                                                            else
#line 806 "llds_out_instr.m"
                                                                              if ((ll_backend__llds_out__llds_out_instr__SetOp_63 == (MR_Integer) 0))
#line 804 "llds_out_instr.m"
                                                                                {
#line 805 "llds_out_instr.m"
                                                                                  {
#line 805 "llds_out_instr.m"
                                                                                    mercury__io__write_string_3_p_0((MR_String) "\tMR_region_set_ite_num_protects");
                                                                                  }
#line 804 "llds_out_instr.m"
                                                                                }
#line 806 "llds_out_instr.m"
                                                                              else
#line 807 "llds_out_instr.m"
                                                                                {
#line 808 "llds_out_instr.m"
                                                                                  {
#line 808 "llds_out_instr.m"
                                                                                    mercury__io__write_string_3_p_0((MR_String) "\tMR_region_set_ite_num_snapshots");
                                                                                  }
#line 807 "llds_out_instr.m"
                                                                                }
#line 819 "llds_out_instr.m"
                                                                        {
#line 819 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) "(");
                                                                        }
#line 820 "llds_out_instr.m"
                                                                        {
#line 820 "llds_out_instr.m"
                                                                          ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__EmbeddedFrame_505);
                                                                        }
#line 821 "llds_out_instr.m"
                                                                        {
#line 821 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) ", ");
                                                                        }
#line 822 "llds_out_instr.m"
                                                                        {
#line 822 "llds_out_instr.m"
                                                                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__ValueRval_64);
                                                                        }
#line 823 "llds_out_instr.m"
                                                                        {
#line 823 "llds_out_instr.m"
                                                                          mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 823 "llds_out_instr.m"
                                                                          return;
                                                                        }
#line 802 "llds_out_instr.m"
                                                                      }
#line 546 "llds_out_instr.m"
                                                                    else
#line 546 "llds_out_instr.m"
                                                                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 866 "llds_out_instr.m"
                                                                        {
#line 866 "llds_out_instr.m"
                                                                          MR_Word ll_backend__llds_out__llds_out_instr__Reason_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
#line 866 "llds_out_instr.m"
                                                                          MR_Word ll_backend__llds_out__llds_out_instr__Rval_508 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 867 "llds_out_instr.m"
                                                                          {
#line 867 "llds_out_instr.m"
                                                                            mercury__io__write_string_3_p_0((MR_String) "\tMR_reset_ticket(");
                                                                          }
#line 868 "llds_out_instr.m"
                                                                          {
#line 868 "llds_out_instr.m"
                                                                            ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_508, (MR_Integer) 13);
                                                                          }
#line 869 "llds_out_instr.m"
                                                                          {
#line 869 "llds_out_instr.m"
                                                                            mercury__io__write_string_3_p_0((MR_String) ", ");
                                                                          }
#line 870 "llds_out_instr.m"
                                                                          {
#line 870 "llds_out_instr.m"
                                                                            ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_p_0(ll_backend__llds_out__llds_out_instr__Reason_66);
                                                                          }
#line 871 "llds_out_instr.m"
                                                                          {
#line 871 "llds_out_instr.m"
                                                                            mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 871 "llds_out_instr.m"
                                                                            return;
                                                                          }
#line 866 "llds_out_instr.m"
                                                                        }
#line 546 "llds_out_instr.m"
                                                                      else
#line 546 "llds_out_instr.m"
                                                                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 736 "llds_out_instr.m"
                                                                          {
#line 736 "llds_out_instr.m"
                                                                            MR_Word ll_backend__llds_out__llds_out_instr__Rval_501 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 737 "llds_out_instr.m"
                                                                            {
#line 737 "llds_out_instr.m"
                                                                              mercury__io__write_string_3_p_0((MR_String) "\tMR_restore_hp(");
                                                                            }
#line 738 "llds_out_instr.m"
                                                                            {
#line 738 "llds_out_instr.m"
                                                                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_501, (MR_Integer) 13);
                                                                            }
#line 739 "llds_out_instr.m"
                                                                            {
#line 739 "llds_out_instr.m"
                                                                              mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 739 "llds_out_instr.m"
                                                                              return;
                                                                            }
#line 736 "llds_out_instr.m"
                                                                          }
#line 546 "llds_out_instr.m"
                                                                        else
#line 546 "llds_out_instr.m"
                                                                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 675 "llds_out_instr.m"
                                                                            {
#line 675 "llds_out_instr.m"
                                                                              MR_Word ll_backend__llds_out__llds_out_instr__Lval_495 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 676 "llds_out_instr.m"
                                                                              {
#line 676 "llds_out_instr.m"
                                                                                mercury__io__write_string_3_p_0((MR_String) "\tMR_restore_maxfr(");
                                                                              }
#line 677 "llds_out_instr.m"
                                                                              {
#line 677 "llds_out_instr.m"
                                                                                ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_495);
                                                                              }
#line 678 "llds_out_instr.m"
                                                                              {
#line 678 "llds_out_instr.m"
                                                                                mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 678 "llds_out_instr.m"
                                                                                return;
                                                                              }
#line 675 "llds_out_instr.m"
                                                                            }
#line 546 "llds_out_instr.m"
                                                                          else
#line 546 "llds_out_instr.m"
                                                                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 670 "llds_out_instr.m"
                                                                              {
#line 670 "llds_out_instr.m"
                                                                                MR_Word ll_backend__llds_out__llds_out_instr__Lval_494 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 671 "llds_out_instr.m"
                                                                                {
#line 671 "llds_out_instr.m"
                                                                                  mercury__io__write_string_3_p_0((MR_String) "\tMR_save_maxfr(");
                                                                                }
#line 672 "llds_out_instr.m"
                                                                                {
#line 672 "llds_out_instr.m"
                                                                                  ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_494);
                                                                                }
#line 673 "llds_out_instr.m"
                                                                                {
#line 673 "llds_out_instr.m"
                                                                                  mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 673 "llds_out_instr.m"
                                                                                  return;
                                                                                }
#line 670 "llds_out_instr.m"
                                                                              }
#line 546 "llds_out_instr.m"
                                                                            else
#line 546 "llds_out_instr.m"
                                                                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 861 "llds_out_instr.m"
                                                                                {
#line 861 "llds_out_instr.m"
                                                                                  MR_Word ll_backend__llds_out__llds_out_instr__Lval_507 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

#line 862 "llds_out_instr.m"
                                                                                  {
#line 862 "llds_out_instr.m"
                                                                                    mercury__io__write_string_3_p_0((MR_String) "\tMR_store_ticket(");
                                                                                  }
#line 863 "llds_out_instr.m"
                                                                                  {
#line 863 "llds_out_instr.m"
                                                                                    ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_507);
                                                                                  }
#line 864 "llds_out_instr.m"
                                                                                  {
#line 864 "llds_out_instr.m"
                                                                                    mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 864 "llds_out_instr.m"
                                                                                    return;
                                                                                  }
#line 861 "llds_out_instr.m"
                                                                                }
#line 546 "llds_out_instr.m"
                                                                              else
#line 825 "llds_out_instr.m"
                                                                                {
#line 825 "llds_out_instr.m"
                                                                                  MR_Word ll_backend__llds_out__llds_out_instr__UseOp_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
#line 825 "llds_out_instr.m"
                                                                                  MR_Word ll_backend__llds_out__llds_out_instr__EmbeddedFrame_506 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));

#line 829 "llds_out_instr.m"
                                                                                  if ((ll_backend__llds_out__llds_out_instr__UseOp_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 854 "llds_out_instr.m"
                                                                                    {
#line 855 "llds_out_instr.m"
                                                                                      {
#line 855 "llds_out_instr.m"
                                                                                        mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_commit_failure");
                                                                                      }
#line 854 "llds_out_instr.m"
                                                                                    }
#line 829 "llds_out_instr.m"
                                                                                  else
#line 829 "llds_out_instr.m"
                                                                                    if ((ll_backend__llds_out__llds_out_instr__UseOp_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 851 "llds_out_instr.m"
                                                                                      {
#line 852 "llds_out_instr.m"
                                                                                        {
#line 852 "llds_out_instr.m"
                                                                                          mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_commit_success");
                                                                                        }
#line 851 "llds_out_instr.m"
                                                                                      }
#line 829 "llds_out_instr.m"
                                                                                    else
#line 829 "llds_out_instr.m"
                                                                                      if ((ll_backend__llds_out__llds_out_instr__UseOp_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 845 "llds_out_instr.m"
                                                                                        {
#line 846 "llds_out_instr.m"
                                                                                          {
#line 846 "llds_out_instr.m"
                                                                                            mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_disj_last");
                                                                                          }
#line 845 "llds_out_instr.m"
                                                                                        }
#line 829 "llds_out_instr.m"
                                                                                      else
#line 829 "llds_out_instr.m"
                                                                                        if ((ll_backend__llds_out__llds_out_instr__UseOp_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 842 "llds_out_instr.m"
                                                                                          {
#line 843 "llds_out_instr.m"
                                                                                            {
#line 843 "llds_out_instr.m"
                                                                                              mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_disj_later");
                                                                                            }
#line 842 "llds_out_instr.m"
                                                                                          }
#line 829 "llds_out_instr.m"
                                                                                        else
#line 829 "llds_out_instr.m"
                                                                                          if ((ll_backend__llds_out__llds_out_instr__UseOp_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 848 "llds_out_instr.m"
                                                                                            {
#line 849 "llds_out_instr.m"
                                                                                              {
#line 849 "llds_out_instr.m"
                                                                                                mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_disj_nonlast_semi_commit");
                                                                                              }
#line 848 "llds_out_instr.m"
                                                                                            }
#line 829 "llds_out_instr.m"
                                                                                          else
#line 829 "llds_out_instr.m"
                                                                                            if ((ll_backend__llds_out__llds_out_instr__UseOp_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 839 "llds_out_instr.m"
                                                                                              {
#line 840 "llds_out_instr.m"
                                                                                                {
#line 840 "llds_out_instr.m"
                                                                                                  mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_ite_nondet_cond_fail");
                                                                                                }
#line 839 "llds_out_instr.m"
                                                                                              }
#line 829 "llds_out_instr.m"
                                                                                            else
#line 829 "llds_out_instr.m"
                                                                                              if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__UseOp_65)) == (MR_mktag((MR_Integer) 2))))
#line 829 "llds_out_instr.m"
                                                                                                {
#line 829 "llds_out_instr.m"
                                                                                                  MR_Word ll_backend__llds_out__llds_out_instr__V_640_640 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_instr__UseOp_65, (MR_Integer) 0)));

#line 829 "llds_out_instr.m"
                                                                                                  if ((ll_backend__llds_out__llds_out_instr__V_640_640 == (MR_Integer) 1))
#line 836 "llds_out_instr.m"
                                                                                                    {
#line 837 "llds_out_instr.m"
                                                                                                      {
#line 837 "llds_out_instr.m"
                                                                                                        mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_ite_else_nondet");
                                                                                                      }
#line 836 "llds_out_instr.m"
                                                                                                    }
#line 829 "llds_out_instr.m"
                                                                                                  else
#line 833 "llds_out_instr.m"
                                                                                                    {
#line 834 "llds_out_instr.m"
                                                                                                      {
#line 834 "llds_out_instr.m"
                                                                                                        mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_ite_else_semidet");
                                                                                                      }
#line 833 "llds_out_instr.m"
                                                                                                    }
#line 829 "llds_out_instr.m"
                                                                                                }
#line 829 "llds_out_instr.m"
                                                                                              else
#line 829 "llds_out_instr.m"
                                                                                                {
#line 829 "llds_out_instr.m"
                                                                                                  MR_Word ll_backend__llds_out__llds_out_instr__V_641_641 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__UseOp_65, (MR_Integer) 0)));

#line 829 "llds_out_instr.m"
                                                                                                  if ((ll_backend__llds_out__llds_out_instr__V_641_641 == (MR_Integer) 1))
#line 830 "llds_out_instr.m"
                                                                                                    {
#line 831 "llds_out_instr.m"
                                                                                                      {
#line 831 "llds_out_instr.m"
                                                                                                        mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_ite_then_nondet");
                                                                                                      }
#line 830 "llds_out_instr.m"
                                                                                                    }
#line 829 "llds_out_instr.m"
                                                                                                  else
#line 827 "llds_out_instr.m"
                                                                                                    {
#line 828 "llds_out_instr.m"
                                                                                                      {
#line 828 "llds_out_instr.m"
                                                                                                        mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_ite_then_semidet");
                                                                                                      }
#line 827 "llds_out_instr.m"
                                                                                                    }
#line 829 "llds_out_instr.m"
                                                                                                }
#line 857 "llds_out_instr.m"
                                                                                  {
#line 857 "llds_out_instr.m"
                                                                                    mercury__io__write_string_3_p_0((MR_String) "(");
                                                                                  }
#line 858 "llds_out_instr.m"
                                                                                  {
#line 858 "llds_out_instr.m"
                                                                                    ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__EmbeddedFrame_506);
                                                                                  }
#line 859 "llds_out_instr.m"
                                                                                  {
#line 859 "llds_out_instr.m"
                                                                                    mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 859 "llds_out_instr.m"
                                                                                    return;
                                                                                  }
#line 825 "llds_out_instr.m"
                                                                                }
#line 546 "llds_out_instr.m"
  }
#line 541 "llds_out_instr.m"
}

#line 508 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(
#line 508 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
#line 508 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_8,
#line 508 "llds_out_instr.m"
  MR_String ll_backend__llds_out__llds_out_instr__Comment_9,
#line 508 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_10)
#line 508 "llds_out_instr.m"
{
#line 511 "llds_out_instr.m"
  {
#line 511 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 511 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__AutoComments_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 0)));
#line 512 "llds_out_instr.m"
    MR_String ll_backend__llds_out__llds_out_instr__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 1)));
#line 512 "llds_out_instr.m"
    MR_String ll_backend__llds_out__llds_out_instr__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 2)));
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 3)));
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 4)));
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 5)));
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)));
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 8)));

#line 524 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__AutoComments_12 == (MR_Integer) 0))
#line 521 "llds_out_instr.m"
      {
#line 517 "llds_out_instr.m"
        if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 1))))
#line 516 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_instr__succeeded = MR_TRUE;
#line 517 "llds_out_instr.m"
        else
#line 517 "llds_out_instr.m"
          if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 2))))
#line 517 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__succeeded = MR_TRUE;
#line 517 "llds_out_instr.m"
          else
#line 517 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__succeeded = MR_FALSE;
#line 521 "llds_out_instr.m"
        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 517 "llds_out_instr.m"
          {
#line 517 "llds_out_instr.m"
          }
#line 521 "llds_out_instr.m"
        else
#line 522 "llds_out_instr.m"
          {
#line 522 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Instr_8, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_10);
#line 522 "llds_out_instr.m"
            return;
          }
#line 521 "llds_out_instr.m"
      }
#line 524 "llds_out_instr.m"
    else
#line 525 "llds_out_instr.m"
      {
#line 526 "llds_out_instr.m"
        {
#line 526 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Instr_8, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_10);
        }
#line 527 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__succeeded = (strcmp(ll_backend__llds_out__llds_out_instr__Comment_9, (MR_String) "") == 0);
#line 529 "llds_out_instr.m"
        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 527 "llds_out_instr.m"
          {
#line 527 "llds_out_instr.m"
          }
#line 529 "llds_out_instr.m"
        else
#line 530 "llds_out_instr.m"
          {
#line 530 "llds_out_instr.m"
            {
#line 530 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "\t\t/* ");
            }
#line 531 "llds_out_instr.m"
            {
#line 531 "llds_out_instr.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__Comment_9);
            }
#line 532 "llds_out_instr.m"
            {
#line 532 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) " */\n");
#line 532 "llds_out_instr.m"
              return;
            }
#line 530 "llds_out_instr.m"
          }
#line 525 "llds_out_instr.m"
      }
#line 511 "llds_out_instr.m"
  }
#line 508 "llds_out_instr.m"
}

#line 452 "llds_out_instr.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_5_p_0_1(
#line 452 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg)
#line 452 "llds_out_instr.m"
{
#line 452 "llds_out_instr.m"
  {
#line 452 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 452 "llds_out_instr.m"
    MR_Box ll_backend__llds_out__llds_out_instr__closure = ll_backend__llds_out__llds_out_instr__closure_arg;

#line 452 "llds_out_instr.m"
    {
#line 452 "llds_out_instr.m"
      return ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_float_dword_assignment__452__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 4))));
    }
#line 452 "llds_out_instr.m"
    return ll_backend__llds_out__llds_out_instr__succeeded;
#line 452 "llds_out_instr.m"
  }
#line 452 "llds_out_instr.m"
}

#line 443 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_5_p_0(
#line 443 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
#line 443 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Lval_7,
#line 443 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Rval_8)
#line 443 "llds_out_instr.m"
{
#line 446 "llds_out_instr.m"
  {
#line 446 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 446 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__Type_10;
#line 446 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__AutoComments_11;
#line 446 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_17_17;
#line 456 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_30_30;
#line 456 "llds_out_instr.m"
    MR_String ll_backend__llds_out__llds_out_instr__V_31_31;
#line 456 "llds_out_instr.m"
    MR_String ll_backend__llds_out__llds_out_instr__V_32_32;
#line 456 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_33_33;
#line 456 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_34_34;
#line 456 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_35_35;
#line 456 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_36_36;
#line 456 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_37_37;
#line 456 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_38_38;
#line 456 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_39_39;
#line 456 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_40_40;
#line 456 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_41_41;
#line 456 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_42_42;
#line 456 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_43_43;
#line 456 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_44_44;
#line 456 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_45_45;
#line 456 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_46_46;
#line 456 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_47_47;
#line 456 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_48_48;
#line 456 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_49_49;
#line 456 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_50_50;

#line 450 "llds_out_instr.m"
    {
#line 450 "llds_out_instr.m"
      mercury__io__write_string_3_p_0((MR_String) "\t* (MR_Float *) &(");
    }
#line 451 "llds_out_instr.m"
    {
#line 451 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_data__output_lval_for_assign_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_7, &ll_backend__llds_out__llds_out_instr__Type_10);
    }
#line 452 "llds_out_instr.m"
    {
#line 452 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 452 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_17_17, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_4[1]));
#line 452 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_17_17, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_5_p_0_1));
#line 452 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 452 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_17_17, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__Type_10));
#line 452 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_17_17, 4) = ((MR_Box) ((MR_Integer) 13));
#line 452 "llds_out_instr.m"
    }
#line 452 "llds_out_instr.m"
    {
#line 452 "llds_out_instr.m"
      mercury__require__expect_4_p_0(ll_backend__llds_out__llds_out_instr__V_17_17, (MR_String) "ll_backend.llds_out.llds_out_instr", (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_float_dword_assignment\'/5", (MR_String) "expected word");
    }
#line 453 "llds_out_instr.m"
    {
#line 453 "llds_out_instr.m"
      mercury__io__write_string_3_p_0((MR_String) ") = ");
    }
#line 454 "llds_out_instr.m"
    {
#line 454 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_8, (MR_Integer) 9);
    }
#line 455 "llds_out_instr.m"
    {
#line 455 "llds_out_instr.m"
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
#line 456 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
#line 456 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
#line 456 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
#line 456 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
#line 456 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
#line 456 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
#line 456 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)));
#line 456 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__AutoComments_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 456 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 456 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 456 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 456 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 456 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 456 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 456 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 456 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 456 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 456 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 456 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 456 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 456 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 456 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 8)));
#line 460 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__AutoComments_11 == (MR_Integer) 0))
#line 461 "llds_out_instr.m"
      {
#line 461 "llds_out_instr.m"
      }
#line 460 "llds_out_instr.m"
    else
#line 458 "llds_out_instr.m"
      {
#line 459 "llds_out_instr.m"
        {
#line 459 "llds_out_instr.m"
          mercury__io__write_string_3_p_0((MR_String) "\t\t/* assigning float dword */\n");
#line 459 "llds_out_instr.m"
          return;
        }
#line 458 "llds_out_instr.m"
      }
#line 446 "llds_out_instr.m"
  }
#line 443 "llds_out_instr.m"
}

#line 429 "llds_out_instr.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__is_aligned_float_dword_assignment_4_p_0(
#line 429 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__InstrA_5,
#line 429 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__InstrB_6,
#line 429 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__LvalA_7,
#line 429 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__Rval_8)
#line 429 "llds_out_instr.m"
{
#line 432 "llds_out_instr.m"
  {
#line 432 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__InstrA_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__InstrA_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 432 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__TypeInfo_33_33;
#line 432 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__RvalA_9;
#line 432 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__LvalB_10;
#line 432 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__RvalB_11;
#line 432 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__MaybeTag_12;
#line 432 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__Address_13;
#line 432 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__Offset_14;
#line 432 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_15_15;
#line 432 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_16_16;
#line 432 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_17_17;
#line 432 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__V_18_18;
#line 432 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_19_19;
#line 432 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_20_20;
#line 432 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_21_21;
#line 432 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__V_22_22;
#line 432 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_23_23;
#line 432 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_24_24;
#line 432 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_25_25;
#line 432 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_26_26;
#line 432 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__V_27_27;
#line 432 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__V_28_28;
#line 432 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_29_29;
#line 432 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_30_30;
#line 432 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_31_31;

#line 433 "llds_out_instr.m"
    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 433 "llds_out_instr.m"
      {
#line 433 "llds_out_instr.m"
        *ll_backend__llds_out__llds_out_instr__LvalA_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__InstrA_5, (MR_Integer) 1)));
#line 433 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__RvalA_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__InstrA_5, (MR_Integer) 2)));
#line 434 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__InstrB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__InstrB_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 434 "llds_out_instr.m"
        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 434 "llds_out_instr.m"
          {
#line 434 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__LvalB_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__InstrB_6, (MR_Integer) 1)));
#line 434 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__RvalB_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__InstrB_6, (MR_Integer) 2)));
#line 435 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__RvalA_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__RvalA_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 435 "llds_out_instr.m"
            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 435 "llds_out_instr.m"
              {
#line 435 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__RvalA_9, (MR_Integer) 1)));
#line 435 "llds_out_instr.m"
                *ll_backend__llds_out__llds_out_instr__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__RvalA_9, (MR_Integer) 2)));
#line 435 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__RvalA_9, (MR_Integer) 3)));
#line 435 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 37))));
#line 432 "llds_out_instr.m"
                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 432 "llds_out_instr.m"
                  {
#line 435 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_16_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__V_16_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 435 "llds_out_instr.m"
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 435 "llds_out_instr.m"
                      {
#line 435 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__V_16_16, (MR_Integer) 1)));
#line 435 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 435 "llds_out_instr.m"
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 435 "llds_out_instr.m"
                          {
#line 435 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_17_17, (MR_Integer) 0)));
#line 435 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_18_18 == (MR_Integer) 0);
#line 432 "llds_out_instr.m"
                            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 432 "llds_out_instr.m"
                              {
#line 436 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__RvalB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__RvalB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 436 "llds_out_instr.m"
                                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 436 "llds_out_instr.m"
                                  {
#line 436 "llds_out_instr.m"
                                    ll_backend__llds_out__llds_out_instr__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__RvalB_11, (MR_Integer) 1)));
#line 436 "llds_out_instr.m"
                                    ll_backend__llds_out__llds_out_instr__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__RvalB_11, (MR_Integer) 2)));
#line 436 "llds_out_instr.m"
                                    ll_backend__llds_out__llds_out_instr__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__RvalB_11, (MR_Integer) 3)));
#line 436 "llds_out_instr.m"
                                    {
#line 436 "llds_out_instr.m"
                                      ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds____Unify____rval_0_0(*ll_backend__llds_out__llds_out_instr__Rval_8, ll_backend__llds_out__llds_out_instr__V_29_29);
                                    }
#line 432 "llds_out_instr.m"
                                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 432 "llds_out_instr.m"
                                      {
#line 436 "llds_out_instr.m"
                                        ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 37))));
#line 432 "llds_out_instr.m"
                                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 432 "llds_out_instr.m"
                                          {
#line 436 "llds_out_instr.m"
                                            ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 436 "llds_out_instr.m"
                                            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 436 "llds_out_instr.m"
                                              {
#line 436 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__V_20_20, (MR_Integer) 1)));
#line 436 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 436 "llds_out_instr.m"
                                                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 436 "llds_out_instr.m"
                                                  {
#line 436 "llds_out_instr.m"
                                                    ll_backend__llds_out__llds_out_instr__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_21_21, (MR_Integer) 0)));
#line 436 "llds_out_instr.m"
                                                    ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_22_22 == (MR_Integer) 1);
#line 432 "llds_out_instr.m"
                                                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 432 "llds_out_instr.m"
                                                      {
#line 437 "llds_out_instr.m"
                                                        ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) *ll_backend__llds_out__llds_out_instr__LvalA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), *ll_backend__llds_out__llds_out_instr__LvalA_7, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 437 "llds_out_instr.m"
                                                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 437 "llds_out_instr.m"
                                                          {
#line 437 "llds_out_instr.m"
                                                            ll_backend__llds_out__llds_out_instr__MaybeTag_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), *ll_backend__llds_out__llds_out_instr__LvalA_7, (MR_Integer) 1)));
#line 437 "llds_out_instr.m"
                                                            ll_backend__llds_out__llds_out_instr__Address_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), *ll_backend__llds_out__llds_out_instr__LvalA_7, (MR_Integer) 2)));
#line 437 "llds_out_instr.m"
                                                            ll_backend__llds_out__llds_out_instr__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), *ll_backend__llds_out__llds_out_instr__LvalA_7, (MR_Integer) 3)));
#line 437 "llds_out_instr.m"
                                                            ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_23_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__V_23_23, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 437 "llds_out_instr.m"
                                                            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 437 "llds_out_instr.m"
                                                              {
#line 437 "llds_out_instr.m"
                                                                ll_backend__llds_out__llds_out_instr__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__V_23_23, (MR_Integer) 1)));
#line 437 "llds_out_instr.m"
                                                                ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 437 "llds_out_instr.m"
                                                                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 437 "llds_out_instr.m"
                                                                  {
#line 437 "llds_out_instr.m"
                                                                    ll_backend__llds_out__llds_out_instr__Offset_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_24_24, (MR_Integer) 0)));
#line 438 "llds_out_instr.m"
                                                                    ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__LvalB_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__LvalB_10, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 438 "llds_out_instr.m"
                                                                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 438 "llds_out_instr.m"
                                                                      {
#line 438 "llds_out_instr.m"
                                                                        ll_backend__llds_out__llds_out_instr__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__LvalB_10, (MR_Integer) 1)));
#line 438 "llds_out_instr.m"
                                                                        ll_backend__llds_out__llds_out_instr__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__LvalB_10, (MR_Integer) 2)));
#line 438 "llds_out_instr.m"
                                                                        ll_backend__llds_out__llds_out_instr__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__LvalB_10, (MR_Integer) 3)));
#line 9790 "ll_backend.llds_out.llds_out_instr.c"
                                                                        ll_backend__llds_out__llds_out_instr__TypeInfo_33_33 = (MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[4];
#line 438 "llds_out_instr.m"
                                                                        {
#line 438 "llds_out_instr.m"
                                                                          ll_backend__llds_out__llds_out_instr__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_instr__TypeInfo_33_33, ((MR_Box) (ll_backend__llds_out__llds_out_instr__MaybeTag_12)), ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_30_30)));
                                                                        }
#line 432 "llds_out_instr.m"
                                                                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 432 "llds_out_instr.m"
                                                                          {
#line 438 "llds_out_instr.m"
                                                                            {
#line 438 "llds_out_instr.m"
                                                                              ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__llds_out__llds_out_instr__Address_13, ll_backend__llds_out__llds_out_instr__V_31_31);
                                                                            }
#line 432 "llds_out_instr.m"
                                                                            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 432 "llds_out_instr.m"
                                                                              {
#line 438 "llds_out_instr.m"
                                                                                ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_25_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__V_25_25, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 438 "llds_out_instr.m"
                                                                                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 438 "llds_out_instr.m"
                                                                                  {
#line 438 "llds_out_instr.m"
                                                                                    ll_backend__llds_out__llds_out_instr__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__V_25_25, (MR_Integer) 1)));
#line 438 "llds_out_instr.m"
                                                                                    ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 438 "llds_out_instr.m"
                                                                                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 438 "llds_out_instr.m"
                                                                                      {
#line 438 "llds_out_instr.m"
                                                                                        ll_backend__llds_out__llds_out_instr__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_26_26, (MR_Integer) 0)));
#line 438 "llds_out_instr.m"
                                                                                        ll_backend__llds_out__llds_out_instr__V_28_28 = (ll_backend__llds_out__llds_out_instr__V_27_27 - ll_backend__llds_out__llds_out_instr__Offset_14);
#line 438 "llds_out_instr.m"
                                                                                        ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_28_28 == (MR_Integer) 1);
#line 432 "llds_out_instr.m"
                                                                                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 441 "llds_out_instr.m"
                                                                                          {
#line 441 "llds_out_instr.m"
                                                                                            return ll_backend__llds_out__llds_out_instr__succeeded = mercury__int__even_1_p_0(ll_backend__llds_out__llds_out_instr__Offset_14);
                                                                                          }
#line 438 "llds_out_instr.m"
                                                                                      }
#line 438 "llds_out_instr.m"
                                                                                  }
#line 432 "llds_out_instr.m"
                                                                              }
#line 432 "llds_out_instr.m"
                                                                          }
#line 438 "llds_out_instr.m"
                                                                      }
#line 437 "llds_out_instr.m"
                                                                  }
#line 437 "llds_out_instr.m"
                                                              }
#line 437 "llds_out_instr.m"
                                                          }
#line 432 "llds_out_instr.m"
                                                      }
#line 436 "llds_out_instr.m"
                                                  }
#line 436 "llds_out_instr.m"
                                              }
#line 432 "llds_out_instr.m"
                                          }
#line 432 "llds_out_instr.m"
                                      }
#line 436 "llds_out_instr.m"
                                  }
#line 432 "llds_out_instr.m"
                              }
#line 435 "llds_out_instr.m"
                          }
#line 435 "llds_out_instr.m"
                      }
#line 432 "llds_out_instr.m"
                  }
#line 435 "llds_out_instr.m"
              }
#line 434 "llds_out_instr.m"
          }
#line 433 "llds_out_instr.m"
      }
#line 432 "llds_out_instr.m"
    return ll_backend__llds_out__llds_out_instr__succeeded;
#line 432 "llds_out_instr.m"
  }
#line 429 "llds_out_instr.m"
}

#line 402 "llds_out_instr.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_p_0_1(
#line 402 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg)
#line 402 "llds_out_instr.m"
{
#line 402 "llds_out_instr.m"
  {
#line 402 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 402 "llds_out_instr.m"
    MR_Box ll_backend__llds_out__llds_out_instr__closure = ll_backend__llds_out__llds_out_instr__closure_arg;

#line 402 "llds_out_instr.m"
    {
#line 402 "llds_out_instr.m"
      return ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_instruction_list_while_block__402__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 4))));
    }
#line 402 "llds_out_instr.m"
    return ll_backend__llds_out__llds_out_instr__succeeded;
#line 402 "llds_out_instr.m"
  }
#line 402 "llds_out_instr.m"
}

#line 390 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_p_0(
#line 390 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 390 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
#line 390 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Label_3,
#line 390 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_4)
#line 390 "llds_out_instr.m"
{
#line 394 "llds_out_instr.m"
  while (MR_TRUE)
#line 394 "llds_out_instr.m"
    {
#line 394 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 394 "llds_out_instr.m"
      {
#line 394 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 394 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 394 "llds_out_instr.m"
          {
#line 394 "llds_out_instr.m"
          }
#line 394 "llds_out_instr.m"
        else
#line 396 "llds_out_instr.m"
          {
#line 396 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Instr_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
#line 396 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Instrs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
#line 396 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Uinstr_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr_14, (MR_Integer) 0)));
#line 396 "llds_out_instr.m"
            MR_String ll_backend__llds_out__llds_out_instr__Comment_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr_14, (MR_Integer) 1)));
#line 398 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__V_21_21;

#line 398 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 398 "llds_out_instr.m"
            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 398 "llds_out_instr.m"
              {
#line 398 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 1)));
#line 399 "llds_out_instr.m"
                {
#line 399 "llds_out_instr.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_instr", (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction_list_while_block\'/6", (MR_String) "label in block");
#line 399 "llds_out_instr.m"
                  return;
                }
#line 398 "llds_out_instr.m"
              }
#line 398 "llds_out_instr.m"
            else
#line 403 "llds_out_instr.m"
              {
#line 400 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__V_32_32;
#line 400 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__V_79_79;

#line 400 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 400 "llds_out_instr.m"
                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 400 "llds_out_instr.m"
                  {
#line 400 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 1)));
#line 400 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 400 "llds_out_instr.m"
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 400 "llds_out_instr.m"
                      {
#line 400 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_32_32, (MR_Integer) 0)));
#line 400 "llds_out_instr.m"
                        {
#line 400 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_instr__Label_3, ll_backend__llds_out__llds_out_instr__V_79_79);
                        }
#line 400 "llds_out_instr.m"
                      }
#line 400 "llds_out_instr.m"
                  }
#line 403 "llds_out_instr.m"
                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 401 "llds_out_instr.m"
                  {
#line 401 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_35_35;

#line 401 "llds_out_instr.m"
                    {
#line 401 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) "\tcontinue;\n");
                    }
#line 402 "llds_out_instr.m"
                    {
#line 402 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 402 "llds_out_instr.m"
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_35_35, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_4[0]));
#line 402 "llds_out_instr.m"
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_35_35, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_p_0_1));
#line 402 "llds_out_instr.m"
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 402 "llds_out_instr.m"
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_35_35, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__Instrs_15));
#line 402 "llds_out_instr.m"
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_35_35, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 402 "llds_out_instr.m"
                    }
#line 402 "llds_out_instr.m"
                    {
#line 402 "llds_out_instr.m"
                      mercury__require__expect_4_p_0(ll_backend__llds_out__llds_out_instr__V_35_35, (MR_String) "ll_backend.llds_out.llds_out_instr", (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction_list_while_block\'/6", (MR_String) "code after goto");
#line 402 "llds_out_instr.m"
                      return;
                    }
#line 401 "llds_out_instr.m"
                  }
#line 403 "llds_out_instr.m"
                else
#line 420 "llds_out_instr.m"
                  {
#line 420 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__Rval_22;
#line 403 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_40_40;
#line 403 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_80_80;

#line 403 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 403 "llds_out_instr.m"
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 403 "llds_out_instr.m"
                      {
#line 403 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__Rval_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 1)));
#line 403 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 2)));
#line 403 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 403 "llds_out_instr.m"
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 403 "llds_out_instr.m"
                          {
#line 403 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_40_40, (MR_Integer) 0)));
#line 403 "llds_out_instr.m"
                            {
#line 403 "llds_out_instr.m"
                              ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_instr__Label_3, ll_backend__llds_out__llds_out_instr__V_80_80);
                            }
#line 403 "llds_out_instr.m"
                          }
#line 403 "llds_out_instr.m"
                      }
#line 420 "llds_out_instr.m"
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 404 "llds_out_instr.m"
                      {
#line 404 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__AutoComments_23;
#line 407 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_57_57;
#line 407 "llds_out_instr.m"
                        MR_String ll_backend__llds_out__llds_out_instr__V_58_58;
#line 407 "llds_out_instr.m"
                        MR_String ll_backend__llds_out__llds_out_instr__V_59_59;
#line 407 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_60_60;
#line 407 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_61_61;
#line 407 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_62_62;
#line 407 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_63_63;
#line 407 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_64_64;
#line 407 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_65_65;
#line 407 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_66_66;
#line 407 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_67_67;
#line 407 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_68_68;
#line 407 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_69_69;
#line 407 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_70_70;
#line 407 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_71_71;
#line 407 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_72_72;
#line 407 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_73_73;
#line 407 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_74_74;
#line 407 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_75_75;
#line 407 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_76_76;
#line 407 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_77_77;

#line 404 "llds_out_instr.m"
                        {
#line 404 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "\tif (");
                        }
#line 405 "llds_out_instr.m"
                        {
#line 405 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_data__output_test_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Rval_22);
                        }
#line 406 "llds_out_instr.m"
                        {
#line 406 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) ")\n\t\tcontinue;\n");
                        }
#line 407 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 0)));
#line 407 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 1)));
#line 407 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_59_59 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 2)));
#line 407 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 3)));
#line 407 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 4)));
#line 407 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 5)));
#line 407 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)));
#line 407 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__AutoComments_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 407 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 407 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 407 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 407 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 407 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 407 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 407 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 407 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 407 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 407 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 407 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 407 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 407 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 407 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 8)));
#line 409 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__AutoComments_23 == (MR_Integer) 1);
#line 409 "llds_out_instr.m"
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 409 "llds_out_instr.m"
                          {
#line 410 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__succeeded = (strcmp(ll_backend__llds_out__llds_out_instr__Comment_20, (MR_String) "") == 0);
#line 410 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__succeeded = !(ll_backend__llds_out__llds_out_instr__succeeded);
#line 409 "llds_out_instr.m"
                          }
#line 415 "llds_out_instr.m"
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 412 "llds_out_instr.m"
                          {
#line 412 "llds_out_instr.m"
                            {
#line 412 "llds_out_instr.m"
                              mercury__io__write_string_3_p_0((MR_String) "\t\t/* ");
                            }
#line 413 "llds_out_instr.m"
                            {
#line 413 "llds_out_instr.m"
                              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__Comment_20);
                            }
#line 414 "llds_out_instr.m"
                            {
#line 414 "llds_out_instr.m"
                              mercury__io__write_string_3_p_0((MR_String) " */\n");
                            }
#line 412 "llds_out_instr.m"
                          }
#line 415 "llds_out_instr.m"
                        else
#line 414 "llds_out_instr.m"
                          {
#line 414 "llds_out_instr.m"
                          }
#line 418 "llds_out_instr.m"
                        /* direct tailcall eliminated */
#line 418 "llds_out_instr.m"
                        {
#line 418 "llds_out_instr.m"
                          MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Instrs_15;

#line 418 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 418 "llds_out_instr.m"
                        }
#line 418 "llds_out_instr.m"
                        continue;
#line 404 "llds_out_instr.m"
                      }
#line 420 "llds_out_instr.m"
                    else
#line 422 "llds_out_instr.m"
                      {
#line 420 "llds_out_instr.m"
                        MR_Integer ll_backend__llds_out__llds_out_instr__V_24_24;
#line 420 "llds_out_instr.m"
                        MR_Integer ll_backend__llds_out__llds_out_instr__V_25_25;
#line 420 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_26_26;

#line 420 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 420 "llds_out_instr.m"
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 420 "llds_out_instr.m"
                          {
#line 420 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 1)));
#line 420 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 2)));
#line 420 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 3)));
#line 421 "llds_out_instr.m"
                            {
#line 421 "llds_out_instr.m"
                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_instr", (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction_list_while_block\'/6", (MR_String) "block in block");
#line 421 "llds_out_instr.m"
                              return;
                            }
#line 420 "llds_out_instr.m"
                          }
#line 420 "llds_out_instr.m"
                        else
#line 424 "llds_out_instr.m"
                          {
#line 423 "llds_out_instr.m"
                            {
#line 423 "llds_out_instr.m"
                              ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Uinstr_19, ll_backend__llds_out__llds_out_instr__Comment_20, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_4);
                            }
#line 425 "llds_out_instr.m"
                            /* direct tailcall eliminated */
#line 425 "llds_out_instr.m"
                            {
#line 425 "llds_out_instr.m"
                              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Instrs_15;

#line 425 "llds_out_instr.m"
                              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 425 "llds_out_instr.m"
                            }
#line 425 "llds_out_instr.m"
                            continue;
#line 424 "llds_out_instr.m"
                          }
#line 422 "llds_out_instr.m"
                      }
#line 420 "llds_out_instr.m"
                  }
#line 403 "llds_out_instr.m"
              }
#line 396 "llds_out_instr.m"
          }
#line 394 "llds_out_instr.m"
      }
#line 394 "llds_out_instr.m"
      break;
#line 394 "llds_out_instr.m"
    }
#line 390 "llds_out_instr.m"
}

#line 344 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_p_0(
#line 344 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 344 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Label_2,
#line 344 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__3_3,
#line 344 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__HeadVar__4_4,
#line 344 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_5)
#line 344 "llds_out_instr.m"
{
#line 348 "llds_out_instr.m"
  while (MR_TRUE)
#line 348 "llds_out_instr.m"
    {
#line 348 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 348 "llds_out_instr.m"
      {
#line 348 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 348 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 348 "llds_out_instr.m"
          {
#line 348 "llds_out_instr.m"
            *ll_backend__llds_out__llds_out_instr__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 349 "llds_out_instr.m"
            {
#line 349 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "\tbreak;\n");
#line 349 "llds_out_instr.m"
              return;
            }
#line 348 "llds_out_instr.m"
          }
#line 348 "llds_out_instr.m"
        else
#line 351 "llds_out_instr.m"
          {
#line 351 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Instr_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__3_3, (MR_Integer) 0)));
#line 351 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Instrs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__3_3, (MR_Integer) 1)));
#line 351 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Uinstr_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr_18, (MR_Integer) 0)));
#line 351 "llds_out_instr.m"
            MR_String ll_backend__llds_out__llds_out_instr__Comment_24 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr_18, (MR_Integer) 1)));
#line 353 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__V_25_25;

#line 353 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_23, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 353 "llds_out_instr.m"
            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 353 "llds_out_instr.m"
              {
#line 353 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_23, (MR_Integer) 1)));
#line 354 "llds_out_instr.m"
                {
#line 354 "llds_out_instr.m"
                  mercury__io__write_string_3_p_0((MR_String) "\tbreak;\n");
                }
#line 355 "llds_out_instr.m"
                *ll_backend__llds_out__llds_out_instr__HeadVar__4_4 = ll_backend__llds_out__llds_out_instr__HeadVar__3_3;
#line 353 "llds_out_instr.m"
              }
#line 353 "llds_out_instr.m"
            else
#line 359 "llds_out_instr.m"
              {
#line 356 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__V_35_35;
#line 356 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__V_77_77;

#line 356 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_23, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 356 "llds_out_instr.m"
                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 356 "llds_out_instr.m"
                  {
#line 356 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_23, (MR_Integer) 1)));
#line 356 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 356 "llds_out_instr.m"
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 356 "llds_out_instr.m"
                      {
#line 356 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_35_35, (MR_Integer) 0)));
#line 356 "llds_out_instr.m"
                        {
#line 356 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_instr__Label_2, ll_backend__llds_out__llds_out_instr__V_77_77);
                        }
#line 356 "llds_out_instr.m"
                      }
#line 356 "llds_out_instr.m"
                  }
#line 359 "llds_out_instr.m"
                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 357 "llds_out_instr.m"
                  {
#line 357 "llds_out_instr.m"
                    {
#line 357 "llds_out_instr.m"
                      mercury__io__write_string_3_p_0((MR_String) "\t/* continue */\n");
                    }
#line 358 "llds_out_instr.m"
                    *ll_backend__llds_out__llds_out_instr__HeadVar__4_4 = ll_backend__llds_out__llds_out_instr__Instrs_19;
#line 357 "llds_out_instr.m"
                  }
#line 359 "llds_out_instr.m"
                else
#line 376 "llds_out_instr.m"
                  {
#line 376 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__Rval_26;
#line 359 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_38_38;
#line 359 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_78_78;

#line 359 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_23, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 359 "llds_out_instr.m"
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 359 "llds_out_instr.m"
                      {
#line 359 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__Rval_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_23, (MR_Integer) 1)));
#line 359 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_23, (MR_Integer) 2)));
#line 359 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 359 "llds_out_instr.m"
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 359 "llds_out_instr.m"
                          {
#line 359 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_38_38, (MR_Integer) 0)));
#line 359 "llds_out_instr.m"
                            {
#line 359 "llds_out_instr.m"
                              ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_instr__Label_2, ll_backend__llds_out__llds_out_instr__V_78_78);
                            }
#line 359 "llds_out_instr.m"
                          }
#line 359 "llds_out_instr.m"
                      }
#line 376 "llds_out_instr.m"
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 360 "llds_out_instr.m"
                      {
#line 360 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__AutoComments_27;
#line 363 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_56_56;
#line 363 "llds_out_instr.m"
                        MR_String ll_backend__llds_out__llds_out_instr__V_57_57;
#line 363 "llds_out_instr.m"
                        MR_String ll_backend__llds_out__llds_out_instr__V_58_58;
#line 363 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_59_59;
#line 363 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_60_60;
#line 363 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_61_61;
#line 363 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_62_62;
#line 363 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_63_63;
#line 363 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_64_64;
#line 363 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_65_65;
#line 363 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_66_66;
#line 363 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_67_67;
#line 363 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_68_68;
#line 363 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_69_69;
#line 363 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_70_70;
#line 363 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_71_71;
#line 363 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_72_72;
#line 363 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_73_73;
#line 363 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_74_74;
#line 363 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_75_75;
#line 363 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__V_76_76;

#line 360 "llds_out_instr.m"
                        {
#line 360 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) "\tif (");
                        }
#line 361 "llds_out_instr.m"
                        {
#line 361 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_data__output_test_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Rval_26);
                        }
#line 362 "llds_out_instr.m"
                        {
#line 362 "llds_out_instr.m"
                          mercury__io__write_string_3_p_0((MR_String) ")\n\t\tcontinue;\n");
                        }
#line 363 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 0)));
#line 363 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 1)));
#line 363 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 2)));
#line 363 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 3)));
#line 363 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 4)));
#line 363 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 5)));
#line 363 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)));
#line 363 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__AutoComments_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 363 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 363 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 363 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 363 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 363 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 363 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 363 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 363 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 363 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 363 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 363 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 363 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 363 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 363 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 8)));
#line 365 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__AutoComments_27 == (MR_Integer) 1);
#line 365 "llds_out_instr.m"
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 365 "llds_out_instr.m"
                          {
#line 366 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__succeeded = (strcmp(ll_backend__llds_out__llds_out_instr__Comment_24, (MR_String) "") == 0);
#line 366 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__succeeded = !(ll_backend__llds_out__llds_out_instr__succeeded);
#line 365 "llds_out_instr.m"
                          }
#line 371 "llds_out_instr.m"
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 368 "llds_out_instr.m"
                          {
#line 368 "llds_out_instr.m"
                            {
#line 368 "llds_out_instr.m"
                              mercury__io__write_string_3_p_0((MR_String) "\t\t/* ");
                            }
#line 369 "llds_out_instr.m"
                            {
#line 369 "llds_out_instr.m"
                              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__Comment_24);
                            }
#line 370 "llds_out_instr.m"
                            {
#line 370 "llds_out_instr.m"
                              mercury__io__write_string_3_p_0((MR_String) " */\n");
                            }
#line 368 "llds_out_instr.m"
                          }
#line 371 "llds_out_instr.m"
                        else
#line 370 "llds_out_instr.m"
                          {
#line 370 "llds_out_instr.m"
                          }
#line 374 "llds_out_instr.m"
                        /* direct tailcall eliminated */
#line 374 "llds_out_instr.m"
                        {
#line 374 "llds_out_instr.m"
                          MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__3__tmp_copy_3 = ll_backend__llds_out__llds_out_instr__Instrs_19;

#line 374 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_instr__HeadVar__3_3 = ll_backend__llds_out__llds_out_instr__HeadVar__3__tmp_copy_3;
#line 374 "llds_out_instr.m"
                        }
#line 374 "llds_out_instr.m"
                        continue;
#line 360 "llds_out_instr.m"
                      }
#line 376 "llds_out_instr.m"
                    else
#line 383 "llds_out_instr.m"
                      {
#line 383 "llds_out_instr.m"
                        MR_Integer ll_backend__llds_out__llds_out_instr__TempR_28;
#line 383 "llds_out_instr.m"
                        MR_Integer ll_backend__llds_out__llds_out_instr__TempF_29;
#line 383 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__BlockInstrs_30;

#line 376 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_23, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 376 "llds_out_instr.m"
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 376 "llds_out_instr.m"
                          {
#line 376 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__TempR_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_23, (MR_Integer) 1)));
#line 376 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__TempF_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_23, (MR_Integer) 2)));
#line 376 "llds_out_instr.m"
                            ll_backend__llds_out__llds_out_instr__BlockInstrs_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_23, (MR_Integer) 3)));
#line 377 "llds_out_instr.m"
                            {
#line 377 "llds_out_instr.m"
                              ll_backend__llds_out__llds_out_instr__output_block_start_4_p_0(ll_backend__llds_out__llds_out_instr__TempR_28, ll_backend__llds_out__llds_out_instr__TempF_29);
                            }
#line 378 "llds_out_instr.m"
                            {
#line 378 "llds_out_instr.m"
                              ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__BlockInstrs_30, ll_backend__llds_out__llds_out_instr__Label_2, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_5);
                            }
#line 1074 "llds_out_instr.m"
                            {
#line 1074 "llds_out_instr.m"
                              mercury__io__write_string_3_p_0((MR_String) "\t}\n");
                            }
#line 381 "llds_out_instr.m"
                            {
#line 381 "llds_out_instr.m"
                              /* direct tailcall eliminated */
#line 381 "llds_out_instr.m"
                              {
#line 381 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__3__tmp_copy_3 = ll_backend__llds_out__llds_out_instr__Instrs_19;

#line 381 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__HeadVar__3_3 = ll_backend__llds_out__llds_out_instr__HeadVar__3__tmp_copy_3;
#line 381 "llds_out_instr.m"
                              }
#line 381 "llds_out_instr.m"
                              continue;
#line 381 "llds_out_instr.m"
                            }
#line 376 "llds_out_instr.m"
                          }
#line 376 "llds_out_instr.m"
                        else
#line 385 "llds_out_instr.m"
                          {
#line 384 "llds_out_instr.m"
                            {
#line 384 "llds_out_instr.m"
                              ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Uinstr_23, ll_backend__llds_out__llds_out_instr__Comment_24, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_5);
                            }
#line 386 "llds_out_instr.m"
                            /* direct tailcall eliminated */
#line 386 "llds_out_instr.m"
                            {
#line 386 "llds_out_instr.m"
                              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__3__tmp_copy_3 = ll_backend__llds_out__llds_out_instr__Instrs_19;

#line 386 "llds_out_instr.m"
                              ll_backend__llds_out__llds_out_instr__HeadVar__3_3 = ll_backend__llds_out__llds_out_instr__HeadVar__3__tmp_copy_3;
#line 386 "llds_out_instr.m"
                            }
#line 386 "llds_out_instr.m"
                            continue;
#line 385 "llds_out_instr.m"
                          }
#line 383 "llds_out_instr.m"
                      }
#line 376 "llds_out_instr.m"
                  }
#line 359 "llds_out_instr.m"
              }
#line 351 "llds_out_instr.m"
          }
#line 348 "llds_out_instr.m"
      }
#line 348 "llds_out_instr.m"
      break;
#line 348 "llds_out_instr.m"
    }
#line 344 "llds_out_instr.m"
}

#line 255 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_p_0(
#line 255 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
#line 255 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Component_8,
#line 255 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22,
#line 255 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23)
#line 255 "llds_out_instr.m"
{
#line 261 "llds_out_instr.m"
  {
#line 261 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 261 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__Component_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 273 "llds_out_instr.m"
      *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22;
#line 261 "llds_out_instr.m"
    else
#line 261 "llds_out_instr.m"
      if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Component_8)) == (MR_mktag((MR_Integer) 1))))
#line 261 "llds_out_instr.m"
        {
#line 261 "llds_out_instr.m"
          MR_Word ll_backend__llds_out__llds_out_instr__Inputs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Component_8, (MR_Integer) 0)));

#line 262 "llds_out_instr.m"
          {
#line 262 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Inputs_11, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23);
#line 262 "llds_out_instr.m"
            return;
          }
#line 261 "llds_out_instr.m"
        }
#line 261 "llds_out_instr.m"
      else
#line 261 "llds_out_instr.m"
        if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Component_8)) == (MR_mktag((MR_Integer) 2))))
#line 265 "llds_out_instr.m"
          {
#line 265 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Outputs_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_instr__Component_8, (MR_Integer) 0)));

#line 266 "llds_out_instr.m"
            {
#line 266 "llds_out_instr.m"
              ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Outputs_12, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23);
#line 266 "llds_out_instr.m"
              return;
            }
#line 265 "llds_out_instr.m"
          }
#line 261 "llds_out_instr.m"
        else
#line 261 "llds_out_instr.m"
          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Component_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 272 "llds_out_instr.m"
            *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22;
#line 261 "llds_out_instr.m"
          else
#line 261 "llds_out_instr.m"
            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Component_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 271 "llds_out_instr.m"
              *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22;
#line 261 "llds_out_instr.m"
            else
#line 261 "llds_out_instr.m"
              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Component_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 269 "llds_out_instr.m"
                *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22;
#line 261 "llds_out_instr.m"
              else
#line 270 "llds_out_instr.m"
                *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22;
#line 261 "llds_out_instr.m"
  }
#line 255 "llds_out_instr.m"
}

#line 224 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0_2(
#line 224 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg,
#line 224 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 224 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
#line 224 "llds_out_instr.m"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_3,
#line 224 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_4,
#line 224 "llds_out_instr.m"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_5)
#line 224 "llds_out_instr.m"
{
#line 224 "llds_out_instr.m"
  {
#line 224 "llds_out_instr.m"
    MR_Box ll_backend__llds_out__llds_out_instr__closure = ll_backend__llds_out__llds_out_instr__closure_arg;
#line 224 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__conv3_STATE_VARIABLE_DeclSet_23;

#line 224 "llds_out_instr.m"
    {
#line 224 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_2), &ll_backend__llds_out__llds_out_instr__conv3_STATE_VARIABLE_DeclSet_23);
    }
#line 224 "llds_out_instr.m"
    *ll_backend__llds_out__llds_out_instr__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_instr__conv3_STATE_VARIABLE_DeclSet_23));
#line 224 "llds_out_instr.m"
  }
#line 224 "llds_out_instr.m"
}

#line 137 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0_1(
#line 137 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg,
#line 137 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
#line 137 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
#line 137 "llds_out_instr.m"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_3,
#line 137 "llds_out_instr.m"
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_4,
#line 137 "llds_out_instr.m"
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_5)
#line 137 "llds_out_instr.m"
{
#line 137 "llds_out_instr.m"
  {
#line 137 "llds_out_instr.m"
    MR_Box ll_backend__llds_out__llds_out_instr__closure = ll_backend__llds_out__llds_out_instr__closure_arg;
#line 137 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__conv0_STATE_VARIABLE_DeclSet_14;

#line 137 "llds_out_instr.m"
    {
#line 137 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__output_record_instruction_decls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_2), &ll_backend__llds_out__llds_out_instr__conv0_STATE_VARIABLE_DeclSet_14);
    }
#line 137 "llds_out_instr.m"
    *ll_backend__llds_out__llds_out_instr__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_instr__conv0_STATE_VARIABLE_DeclSet_14));
#line 137 "llds_out_instr.m"
  }
#line 137 "llds_out_instr.m"
}

#line 118 "llds_out_instr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0(
#line 118 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
#line 118 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_8,
#line 118 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81,
#line 118 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82)
#line 118 "llds_out_instr.m"
{
#line 123 "llds_out_instr.m"
  {
#line 123 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 123 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__Instr_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 129 "llds_out_instr.m"
      *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
#line 123 "llds_out_instr.m"
    else
#line 123 "llds_out_instr.m"
      if ((ll_backend__llds_out__llds_out_instr__Instr_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 130 "llds_out_instr.m"
        *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
#line 123 "llds_out_instr.m"
      else
#line 123 "llds_out_instr.m"
        if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 1))))
#line 123 "llds_out_instr.m"
          *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
#line 123 "llds_out_instr.m"
        else
#line 123 "llds_out_instr.m"
          if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 2))))
#line 124 "llds_out_instr.m"
            *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
#line 123 "llds_out_instr.m"
          else
#line 123 "llds_out_instr.m"
            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 125 "llds_out_instr.m"
              *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
#line 123 "llds_out_instr.m"
            else
#line 123 "llds_out_instr.m"
              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 140 "llds_out_instr.m"
                {
#line 140 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__Lval_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 140 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__Rval_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
#line 140 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_162_162;

#line 141 "llds_out_instr.m"
                  {
#line 141 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_29, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_162_162);
                  }
#line 142 "llds_out_instr.m"
                  {
#line 142 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_30, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_162_162, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 142 "llds_out_instr.m"
                    return;
                  }
#line 140 "llds_out_instr.m"
                }
#line 123 "llds_out_instr.m"
              else
#line 123 "llds_out_instr.m"
                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 136 "llds_out_instr.m"
                  {
#line 136 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__Instrs_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));
#line 136 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__V_166_166;
#line 136 "llds_out_instr.m"
                    MR_Integer ll_backend__llds_out__llds_out_instr___TempR_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 136 "llds_out_instr.m"
                    MR_Integer ll_backend__llds_out__llds_out_instr___TempF_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
#line 137 "llds_out_instr.m"
                    MR_Box ll_backend__llds_out__llds_out_instr__conv2_STATE_VARIABLE_DeclSet_82;
#line 137 "llds_out_instr.m"
                    MR_Box ll_backend__llds_out__llds_out_instr__conv1_STATE_VARIABLE_IO_84;

#line 137 "llds_out_instr.m"
                    {
#line 137 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__V_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 137 "llds_out_instr.m"
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_166_166, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_3[0]));
#line 137 "llds_out_instr.m"
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_166_166, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0_1));
#line 137 "llds_out_instr.m"
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_166_166, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 137 "llds_out_instr.m"
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_166_166, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__Info_7));
#line 137 "llds_out_instr.m"
                    }
#line 137 "llds_out_instr.m"
                    {
#line 137 "llds_out_instr.m"
                      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_instr__V_166_166, ll_backend__llds_out__llds_out_instr__Instrs_28, ((MR_Box) (ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81)), &ll_backend__llds_out__llds_out_instr__conv2_STATE_VARIABLE_DeclSet_82, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_instr__conv1_STATE_VARIABLE_IO_84);
                    }
#line 137 "llds_out_instr.m"
                    *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ((MR_Word) ll_backend__llds_out__llds_out_instr__conv2_STATE_VARIABLE_DeclSet_82);
#line 136 "llds_out_instr.m"
                  }
#line 123 "llds_out_instr.m"
                else
#line 123 "llds_out_instr.m"
                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 164 "llds_out_instr.m"
                    {
#line 164 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__Rval_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 164 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr___MaybeLabels_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));

#line 165 "llds_out_instr.m"
                      {
#line 165 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_171, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 165 "llds_out_instr.m"
                        return;
                      }
#line 164 "llds_out_instr.m"
                    }
#line 123 "llds_out_instr.m"
                  else
#line 123 "llds_out_instr.m"
                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 25))))
#line 132 "llds_out_instr.m"
                      *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
#line 123 "llds_out_instr.m"
                    else
#line 123 "llds_out_instr.m"
                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 133 "llds_out_instr.m"
                        *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
#line 123 "llds_out_instr.m"
                      else
#line 123 "llds_out_instr.m"
                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 223 "llds_out_instr.m"
                          {
#line 223 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__Comps_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
#line 223 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_115_115;
#line 223 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 223 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));
#line 223 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 4)));
#line 223 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 5)));
#line 223 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 6)));
#line 223 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 7)));
#line 223 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 8)));
#line 223 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 9)));
#line 223 "llds_out_instr.m"
                            MR_Word ll_backend__llds_out__llds_out_instr__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 10)));
#line 224 "llds_out_instr.m"
                            MR_Box ll_backend__llds_out__llds_out_instr__conv5_STATE_VARIABLE_DeclSet_82;
#line 224 "llds_out_instr.m"
                            MR_Box ll_backend__llds_out__llds_out_instr__conv4_STATE_VARIABLE_IO_84;

#line 224 "llds_out_instr.m"
                            {
#line 224 "llds_out_instr.m"
                              ll_backend__llds_out__llds_out_instr__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 224 "llds_out_instr.m"
                              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_115_115, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_3[1]));
#line 224 "llds_out_instr.m"
                              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_115_115, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0_2));
#line 224 "llds_out_instr.m"
                              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_115_115, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 224 "llds_out_instr.m"
                              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_115_115, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__Info_7));
#line 224 "llds_out_instr.m"
                            }
#line 224 "llds_out_instr.m"
                            {
#line 224 "llds_out_instr.m"
                              mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0, (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_instr__V_115_115, ll_backend__llds_out__llds_out_instr__Comps_63, ((MR_Box) (ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81)), &ll_backend__llds_out__llds_out_instr__conv5_STATE_VARIABLE_DeclSet_82, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_instr__conv4_STATE_VARIABLE_IO_84);
                            }
#line 224 "llds_out_instr.m"
                            *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ((MR_Word) ll_backend__llds_out__llds_out_instr__conv5_STATE_VARIABLE_DeclSet_82);
#line 223 "llds_out_instr.m"
                          }
#line 123 "llds_out_instr.m"
                        else
#line 123 "llds_out_instr.m"
                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 227 "llds_out_instr.m"
                            {
#line 227 "llds_out_instr.m"
                              MR_Word ll_backend__llds_out__llds_out_instr__Child_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
#line 227 "llds_out_instr.m"
                              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_110_110;
#line 227 "llds_out_instr.m"
                              MR_Word ll_backend__llds_out__llds_out_instr__V_112_112;
#line 227 "llds_out_instr.m"
                              MR_Word ll_backend__llds_out__llds_out_instr__Lval_182 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 228 "llds_out_instr.m"
                              {
#line 228 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_182, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_110_110);
                              }
#line 229 "llds_out_instr.m"
                              {
#line 229 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_instr__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 229 "llds_out_instr.m"
                                MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_112_112, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__Child_72));
#line 229 "llds_out_instr.m"
                              }
#line 229 "llds_out_instr.m"
                              {
#line 229 "llds_out_instr.m"
                                ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__V_112_112, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_110_110, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 229 "llds_out_instr.m"
                                return;
                              }
#line 227 "llds_out_instr.m"
                            }
#line 123 "llds_out_instr.m"
                          else
#line 123 "llds_out_instr.m"
                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 211 "llds_out_instr.m"
                              {
#line 211 "llds_out_instr.m"
                                MR_Word ll_backend__llds_out__llds_out_instr__Rval_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 212 "llds_out_instr.m"
                                {
#line 212 "llds_out_instr.m"
                                  ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_179, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 212 "llds_out_instr.m"
                                  return;
                                }
#line 211 "llds_out_instr.m"
                              }
#line 123 "llds_out_instr.m"
                            else
#line 123 "llds_out_instr.m"
                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 161 "llds_out_instr.m"
                                {
#line 161 "llds_out_instr.m"
                                  MR_Word ll_backend__llds_out__llds_out_instr__CodeAddr_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 162 "llds_out_instr.m"
                                  {
#line 162 "llds_out_instr.m"
                                    ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__CodeAddr_40, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 162 "llds_out_instr.m"
                                    return;
                                  }
#line 161 "llds_out_instr.m"
                                }
#line 123 "llds_out_instr.m"
                              else
#line 123 "llds_out_instr.m"
                                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 167 "llds_out_instr.m"
                                  {
#line 167 "llds_out_instr.m"
                                    MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_144_144;
#line 167 "llds_out_instr.m"
                                    MR_Word ll_backend__llds_out__llds_out_instr__Rval_172 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 167 "llds_out_instr.m"
                                    MR_Word ll_backend__llds_out__llds_out_instr__Target_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));

#line 168 "llds_out_instr.m"
                                    {
#line 168 "llds_out_instr.m"
                                      ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_172, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_144_144);
                                    }
#line 169 "llds_out_instr.m"
                                    {
#line 169 "llds_out_instr.m"
                                      ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Target_173, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_144_144, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 169 "llds_out_instr.m"
                                      return;
                                    }
#line 167 "llds_out_instr.m"
                                  }
#line 123 "llds_out_instr.m"
                                else
#line 123 "llds_out_instr.m"
                                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 178 "llds_out_instr.m"
                                    {
#line 178 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__MaybeRegionRval_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 7)));
#line 178 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__MaybeReuse_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 8)));
#line 178 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_130_130;
#line 178 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_132_132;
#line 178 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_134_134;
#line 178 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__Lval_176 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 178 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__Rval_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 4)));
#line 177 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr___Tag_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
#line 177 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));
#line 177 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 5)));
#line 177 "llds_out_instr.m"
                                      MR_Word ll_backend__llds_out__llds_out_instr__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 6)));

#line 179 "llds_out_instr.m"
                                      {
#line 179 "llds_out_instr.m"
                                        ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_176, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_130_130);
                                      }
#line 180 "llds_out_instr.m"
                                      {
#line 180 "llds_out_instr.m"
                                        ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_177, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_130_130, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_132_132);
                                      }
#line 184 "llds_out_instr.m"
                                      if ((ll_backend__llds_out__llds_out_instr__MaybeRegionRval_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 185 "llds_out_instr.m"
                                        ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_134_134 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_132_132;
#line 184 "llds_out_instr.m"
                                      else
#line 182 "llds_out_instr.m"
                                        {
#line 182 "llds_out_instr.m"
                                          MR_Word ll_backend__llds_out__llds_out_instr__RegionRval_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeRegionRval_46, (MR_Integer) 0)));

#line 183 "llds_out_instr.m"
                                          {
#line 183 "llds_out_instr.m"
                                            ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__RegionRval_48, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_132_132, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_134_134);
                                          }
#line 182 "llds_out_instr.m"
                                        }
#line 196 "llds_out_instr.m"
                                      if ((ll_backend__llds_out__llds_out_instr__MaybeReuse_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 197 "llds_out_instr.m"
                                        *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_134_134;
#line 196 "llds_out_instr.m"
                                      else
#line 188 "llds_out_instr.m"
                                        {
#line 188 "llds_out_instr.m"
                                          MR_Word ll_backend__llds_out__llds_out_instr__ReuseRval_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeReuse_47, (MR_Integer) 0)));
#line 188 "llds_out_instr.m"
                                          MR_Word ll_backend__llds_out__llds_out_instr__MaybeFlagLval_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeReuse_47, (MR_Integer) 1)));
#line 188 "llds_out_instr.m"
                                          MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_136_136;

#line 189 "llds_out_instr.m"
                                          {
#line 189 "llds_out_instr.m"
                                            ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__ReuseRval_49, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_134_134, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_136_136);
                                          }
#line 193 "llds_out_instr.m"
                                          if ((ll_backend__llds_out__llds_out_instr__MaybeFlagLval_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 194 "llds_out_instr.m"
                                            *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_136_136;
#line 193 "llds_out_instr.m"
                                          else
#line 191 "llds_out_instr.m"
                                            {
#line 191 "llds_out_instr.m"
                                              MR_Word ll_backend__llds_out__llds_out_instr__FlagLval_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeFlagLval_50, (MR_Integer) 0)));

#line 192 "llds_out_instr.m"
                                              {
#line 192 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__FlagLval_51, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_136_136, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 192 "llds_out_instr.m"
                                                return;
                                              }
#line 191 "llds_out_instr.m"
                                            }
#line 188 "llds_out_instr.m"
                                        }
#line 178 "llds_out_instr.m"
                                    }
#line 123 "llds_out_instr.m"
                                  else
#line 123 "llds_out_instr.m"
                                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 24))))
#line 131 "llds_out_instr.m"
                                      *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
#line 123 "llds_out_instr.m"
                                    else
#line 123 "llds_out_instr.m"
                                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 204 "llds_out_instr.m"
                                        {
#line 204 "llds_out_instr.m"
                                          MR_Word ll_backend__llds_out__llds_out_instr__Lval_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 203 "llds_out_instr.m"
                                          MR_Integer ll_backend__llds_out__llds_out_instr___NumBranches_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
#line 203 "llds_out_instr.m"
                                          MR_Integer ll_backend__llds_out__llds_out_instr___ConjIdSlotNum_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));

#line 205 "llds_out_instr.m"
                                          {
#line 205 "llds_out_instr.m"
                                            ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_178, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 205 "llds_out_instr.m"
                                            return;
                                          }
#line 204 "llds_out_instr.m"
                                        }
#line 123 "llds_out_instr.m"
                                      else
#line 123 "llds_out_instr.m"
                                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 231 "llds_out_instr.m"
                                          {
#line 231 "llds_out_instr.m"
                                            MR_Word ll_backend__llds_out__llds_out_instr__Label_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
#line 231 "llds_out_instr.m"
                                            MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_105_105;
#line 231 "llds_out_instr.m"
                                            MR_Word ll_backend__llds_out__llds_out_instr__V_107_107;
#line 231 "llds_out_instr.m"
                                            MR_Word ll_backend__llds_out__llds_out_instr__Lval_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 232 "llds_out_instr.m"
                                            {
#line 232 "llds_out_instr.m"
                                              ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_183, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_105_105);
                                            }
#line 233 "llds_out_instr.m"
                                            {
#line 233 "llds_out_instr.m"
                                              ll_backend__llds_out__llds_out_instr__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 233 "llds_out_instr.m"
                                              MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_107_107, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__Label_73));
#line 233 "llds_out_instr.m"
                                            }
#line 233 "llds_out_instr.m"
                                            {
#line 233 "llds_out_instr.m"
                                              ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__V_107_107, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_105_105, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 233 "llds_out_instr.m"
                                              return;
                                            }
#line 231 "llds_out_instr.m"
                                          }
#line 123 "llds_out_instr.m"
                                        else
#line 123 "llds_out_instr.m"
                                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 144 "llds_out_instr.m"
                                            {
#line 144 "llds_out_instr.m"
                                              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_158_158;
#line 144 "llds_out_instr.m"
                                              MR_Word ll_backend__llds_out__llds_out_instr__Lval_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 144 "llds_out_instr.m"
                                              MR_Word ll_backend__llds_out__llds_out_instr__Rval_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));

#line 145 "llds_out_instr.m"
                                              {
#line 145 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_169, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_158_158);
                                              }
#line 146 "llds_out_instr.m"
                                              {
#line 146 "llds_out_instr.m"
                                                ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_170, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_158_158, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 146 "llds_out_instr.m"
                                                return;
                                              }
#line 144 "llds_out_instr.m"
                                            }
#line 123 "llds_out_instr.m"
                                          else
#line 123 "llds_out_instr.m"
                                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 126 "llds_out_instr.m"
                                              *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
#line 123 "llds_out_instr.m"
                                            else
#line 123 "llds_out_instr.m"
                                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 235 "llds_out_instr.m"
                                                {
#line 235 "llds_out_instr.m"
                                                  MR_Word ll_backend__llds_out__llds_out_instr__LCLval_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
#line 235 "llds_out_instr.m"
                                                  MR_Integer ll_backend__llds_out__llds_out_instr__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 236 "llds_out_instr.m"
                                                  {
#line 236 "llds_out_instr.m"
                                                    ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__LCLval_75, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 236 "llds_out_instr.m"
                                                    return;
                                                  }
#line 235 "llds_out_instr.m"
                                                }
#line 123 "llds_out_instr.m"
                                              else
#line 123 "llds_out_instr.m"
                                                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 250 "llds_out_instr.m"
                                                  {
#line 250 "llds_out_instr.m"
                                                    MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_85_85;
#line 250 "llds_out_instr.m"
                                                    MR_Word ll_backend__llds_out__llds_out_instr__LCRval_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 250 "llds_out_instr.m"
                                                    MR_Word ll_backend__llds_out__llds_out_instr__LCSRval_186 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));

#line 251 "llds_out_instr.m"
                                                    {
#line 251 "llds_out_instr.m"
                                                      ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__LCRval_185, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_85_85);
                                                    }
#line 252 "llds_out_instr.m"
                                                    {
#line 252 "llds_out_instr.m"
                                                      ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__LCSRval_186, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_85_85, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 252 "llds_out_instr.m"
                                                      return;
                                                    }
#line 250 "llds_out_instr.m"
                                                  }
#line 123 "llds_out_instr.m"
                                                else
#line 123 "llds_out_instr.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 244 "llds_out_instr.m"
                                                    {
#line 244 "llds_out_instr.m"
                                                      MR_Word ll_backend__llds_out__llds_out_instr__LCSRval_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
#line 244 "llds_out_instr.m"
                                                      MR_Word ll_backend__llds_out__llds_out_instr__ChildLabel_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));
#line 244 "llds_out_instr.m"
                                                      MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_89_89;
#line 244 "llds_out_instr.m"
                                                      MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_91_91;
#line 244 "llds_out_instr.m"
                                                      MR_Word ll_backend__llds_out__llds_out_instr__V_93_93;
#line 244 "llds_out_instr.m"
                                                      MR_Word ll_backend__llds_out__llds_out_instr__LCRval_184 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 245 "llds_out_instr.m"
                                                      {
#line 245 "llds_out_instr.m"
                                                        ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__LCRval_184, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_89_89);
                                                      }
#line 246 "llds_out_instr.m"
                                                      {
#line 246 "llds_out_instr.m"
                                                        ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__LCSRval_79, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_89_89, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_91_91);
                                                      }
#line 247 "llds_out_instr.m"
                                                      {
#line 247 "llds_out_instr.m"
                                                        ll_backend__llds_out__llds_out_instr__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 247 "llds_out_instr.m"
                                                        MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_93_93, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__ChildLabel_80));
#line 247 "llds_out_instr.m"
                                                      }
#line 247 "llds_out_instr.m"
                                                      {
#line 247 "llds_out_instr.m"
                                                        ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__V_93_93, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_91_91, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 247 "llds_out_instr.m"
                                                        return;
                                                      }
#line 244 "llds_out_instr.m"
                                                    }
#line 123 "llds_out_instr.m"
                                                  else
#line 123 "llds_out_instr.m"
                                                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 238 "llds_out_instr.m"
                                                      {
#line 238 "llds_out_instr.m"
                                                        MR_Word ll_backend__llds_out__llds_out_instr__LCRval_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 238 "llds_out_instr.m"
                                                        MR_Word ll_backend__llds_out__llds_out_instr__LCSLval_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
#line 238 "llds_out_instr.m"
                                                        MR_Word ll_backend__llds_out__llds_out_instr__InternalLabel_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));
#line 238 "llds_out_instr.m"
                                                        MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_96_96;
#line 238 "llds_out_instr.m"
                                                        MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_98_98;
#line 238 "llds_out_instr.m"
                                                        MR_Word ll_backend__llds_out__llds_out_instr__V_100_100;

#line 239 "llds_out_instr.m"
                                                        {
#line 239 "llds_out_instr.m"
                                                          ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__LCRval_76, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_96_96);
                                                        }
#line 240 "llds_out_instr.m"
                                                        {
#line 240 "llds_out_instr.m"
                                                          ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__LCSLval_77, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_96_96, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_98_98);
                                                        }
#line 241 "llds_out_instr.m"
                                                        {
#line 241 "llds_out_instr.m"
                                                          ll_backend__llds_out__llds_out_instr__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 241 "llds_out_instr.m"
                                                          MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_100_100, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__InternalLabel_78));
#line 241 "llds_out_instr.m"
                                                        }
#line 241 "llds_out_instr.m"
                                                        {
#line 241 "llds_out_instr.m"
                                                          ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__V_100_100, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_98_98, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 241 "llds_out_instr.m"
                                                          return;
                                                        }
#line 238 "llds_out_instr.m"
                                                      }
#line 123 "llds_out_instr.m"
                                                    else
#line 123 "llds_out_instr.m"
                                                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 148 "llds_out_instr.m"
                                                        {
#line 148 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__Target_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 148 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__ContLabel_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
#line 148 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_154_154;
#line 148 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));
#line 148 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 4)));
#line 148 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 5)));
#line 148 "llds_out_instr.m"
                                                          MR_Word ll_backend__llds_out__llds_out_instr__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 6)));

#line 149 "llds_out_instr.m"
                                                          {
#line 149 "llds_out_instr.m"
                                                            ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Target_31, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_154_154);
                                                          }
#line 150 "llds_out_instr.m"
                                                          {
#line 150 "llds_out_instr.m"
                                                            ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__ContLabel_32, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_154_154, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 150 "llds_out_instr.m"
                                                            return;
                                                          }
#line 148 "llds_out_instr.m"
                                                        }
#line 123 "llds_out_instr.m"
                                                      else
#line 123 "llds_out_instr.m"
                                                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 204 "llds_out_instr.m"
                                                          {
#line 204 "llds_out_instr.m"
                                                            MR_Word ll_backend__llds_out__llds_out_instr__Lval_203 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 205 "llds_out_instr.m"
                                                            {
#line 205 "llds_out_instr.m"
                                                              ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_203, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 205 "llds_out_instr.m"
                                                              return;
                                                            }
#line 204 "llds_out_instr.m"
                                                          }
#line 123 "llds_out_instr.m"
                                                        else
#line 123 "llds_out_instr.m"
                                                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 204 "llds_out_instr.m"
                                                            {
#line 204 "llds_out_instr.m"
                                                              MR_Word ll_backend__llds_out__llds_out_instr__Lval_204 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 205 "llds_out_instr.m"
                                                              {
#line 205 "llds_out_instr.m"
                                                                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_204, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 205 "llds_out_instr.m"
                                                                return;
                                                              }
#line 204 "llds_out_instr.m"
                                                            }
#line 123 "llds_out_instr.m"
                                                          else
#line 123 "llds_out_instr.m"
                                                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 152 "llds_out_instr.m"
                                                              {
#line 152 "llds_out_instr.m"
                                                                MR_Word ll_backend__llds_out__llds_out_instr__MaybeFailureContinuation_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
#line 152 "llds_out_instr.m"
                                                                MR_Word ll_backend__llds_out__llds_out_instr___FrameInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 157 "llds_out_instr.m"
                                                                if ((ll_backend__llds_out__llds_out_instr__MaybeFailureContinuation_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 158 "llds_out_instr.m"
                                                                  *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
#line 157 "llds_out_instr.m"
                                                                else
#line 154 "llds_out_instr.m"
                                                                  {
#line 154 "llds_out_instr.m"
                                                                    MR_Word ll_backend__llds_out__llds_out_instr__FailureContinuation_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeFailureContinuation_38, (MR_Integer) 0)));

#line 155 "llds_out_instr.m"
                                                                    {
#line 155 "llds_out_instr.m"
                                                                      ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__FailureContinuation_39, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 155 "llds_out_instr.m"
                                                                      return;
                                                                    }
#line 154 "llds_out_instr.m"
                                                                  }
#line 152 "llds_out_instr.m"
                                                              }
#line 123 "llds_out_instr.m"
                                                            else
#line 123 "llds_out_instr.m"
                                                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 211 "llds_out_instr.m"
                                                                {
#line 211 "llds_out_instr.m"
                                                                  MR_Word ll_backend__llds_out__llds_out_instr__Rval_205 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 212 "llds_out_instr.m"
                                                                  {
#line 212 "llds_out_instr.m"
                                                                    ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_205, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 212 "llds_out_instr.m"
                                                                    return;
                                                                  }
#line 211 "llds_out_instr.m"
                                                                }
#line 123 "llds_out_instr.m"
                                                              else
#line 123 "llds_out_instr.m"
                                                                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 127 "llds_out_instr.m"
                                                                  *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
#line 123 "llds_out_instr.m"
                                                                else
#line 123 "llds_out_instr.m"
                                                                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 215 "llds_out_instr.m"
                                                                    {
#line 215 "llds_out_instr.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_instr__IdRval_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));
#line 215 "llds_out_instr.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_instr__NumLval_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 4)));
#line 215 "llds_out_instr.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_instr__AddrLval_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 5)));
#line 215 "llds_out_instr.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_120_120;
#line 215 "llds_out_instr.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_122_122;
#line 214 "llds_out_instr.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_instr___FillOp_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 214 "llds_out_instr.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_instr___EmbeddedFrame_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));

#line 216 "llds_out_instr.m"
                                                                      {
#line 216 "llds_out_instr.m"
                                                                        ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__IdRval_57, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_120_120);
                                                                      }
#line 217 "llds_out_instr.m"
                                                                      {
#line 217 "llds_out_instr.m"
                                                                        ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__NumLval_58, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_120_120, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_122_122);
                                                                      }
#line 218 "llds_out_instr.m"
                                                                      {
#line 218 "llds_out_instr.m"
                                                                        ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__AddrLval_59, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_122_122, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 218 "llds_out_instr.m"
                                                                        return;
                                                                      }
#line 215 "llds_out_instr.m"
                                                                    }
#line 123 "llds_out_instr.m"
                                                                  else
#line 123 "llds_out_instr.m"
                                                                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 220 "llds_out_instr.m"
                                                                      {
#line 220 "llds_out_instr.m"
                                                                        MR_Word ll_backend__llds_out__llds_out_instr__ValueRval_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));
#line 220 "llds_out_instr.m"
                                                                        MR_Word ll_backend__llds_out__llds_out_instr___SetOp_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 220 "llds_out_instr.m"
                                                                        MR_Word ll_backend__llds_out__llds_out_instr___EmbeddedFrame_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));

#line 221 "llds_out_instr.m"
                                                                        {
#line 221 "llds_out_instr.m"
                                                                          ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__ValueRval_61, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 221 "llds_out_instr.m"
                                                                          return;
                                                                        }
#line 220 "llds_out_instr.m"
                                                                      }
#line 123 "llds_out_instr.m"
                                                                    else
#line 123 "llds_out_instr.m"
                                                                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 211 "llds_out_instr.m"
                                                                        {
#line 211 "llds_out_instr.m"
                                                                          MR_Word ll_backend__llds_out__llds_out_instr__Rval_206 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
#line 210 "llds_out_instr.m"
                                                                          MR_Word ll_backend__llds_out__llds_out_instr___Reason_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));

#line 212 "llds_out_instr.m"
                                                                          {
#line 212 "llds_out_instr.m"
                                                                            ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_206, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 212 "llds_out_instr.m"
                                                                            return;
                                                                          }
#line 211 "llds_out_instr.m"
                                                                        }
#line 123 "llds_out_instr.m"
                                                                      else
#line 123 "llds_out_instr.m"
                                                                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 211 "llds_out_instr.m"
                                                                          {
#line 211 "llds_out_instr.m"
                                                                            MR_Word ll_backend__llds_out__llds_out_instr__Rval_207 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 212 "llds_out_instr.m"
                                                                            {
#line 212 "llds_out_instr.m"
                                                                              ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_207, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 212 "llds_out_instr.m"
                                                                              return;
                                                                            }
#line 211 "llds_out_instr.m"
                                                                          }
#line 123 "llds_out_instr.m"
                                                                        else
#line 123 "llds_out_instr.m"
                                                                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 174 "llds_out_instr.m"
                                                                            {
#line 174 "llds_out_instr.m"
                                                                              MR_Word ll_backend__llds_out__llds_out_instr__Lval_175 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 175 "llds_out_instr.m"
                                                                              {
#line 175 "llds_out_instr.m"
                                                                                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_175, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 175 "llds_out_instr.m"
                                                                                return;
                                                                              }
#line 174 "llds_out_instr.m"
                                                                            }
#line 123 "llds_out_instr.m"
                                                                          else
#line 123 "llds_out_instr.m"
                                                                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 171 "llds_out_instr.m"
                                                                              {
#line 171 "llds_out_instr.m"
                                                                                MR_Word ll_backend__llds_out__llds_out_instr__Lval_174 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 172 "llds_out_instr.m"
                                                                                {
#line 172 "llds_out_instr.m"
                                                                                  ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_174, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 172 "llds_out_instr.m"
                                                                                  return;
                                                                                }
#line 171 "llds_out_instr.m"
                                                                              }
#line 123 "llds_out_instr.m"
                                                                            else
#line 123 "llds_out_instr.m"
                                                                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 204 "llds_out_instr.m"
                                                                                {
#line 204 "llds_out_instr.m"
                                                                                  MR_Word ll_backend__llds_out__llds_out_instr__Lval_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 205 "llds_out_instr.m"
                                                                                  {
#line 205 "llds_out_instr.m"
                                                                                    ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_208, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
#line 205 "llds_out_instr.m"
                                                                                    return;
                                                                                  }
#line 204 "llds_out_instr.m"
                                                                                }
#line 123 "llds_out_instr.m"
                                                                              else
#line 128 "llds_out_instr.m"
                                                                                *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
#line 123 "llds_out_instr.m"
  }
#line 118 "llds_out_instr.m"
}

#line 70 "llds_out_instr.m"
void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_debug_instruction_4_p_0(
#line 70 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
#line 70 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_6)
#line 70 "llds_out_instr.m"
{
#line 489 "llds_out_instr.m"
  {
#line 489 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 489 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__TypeCtorInfo_26_26;
#line 489 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__DummyModule_8 = (MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_2[0];
#line 489 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__InitialProcIdInt_10;
#line 489 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__ProcLabel_11;
#line 489 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_12;
#line 489 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__ContLabels_13;
#line 489 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__WhileLabels_14;
#line 489 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__UndefWhileLabels_15;
#line 489 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_16;
#line 489 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__V_20_20;

#line 492 "llds_out_instr.m"
    {
#line 492 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__V_20_20 = hlds__hlds_pred__initial_proc_id_0_f_0();
    }
#line 492 "llds_out_instr.m"
    {
#line 492 "llds_out_instr.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__llds_out__llds_out_instr__V_20_20, &ll_backend__llds_out__llds_out_instr__InitialProcIdInt_10);
    }
#line 493 "llds_out_instr.m"
    {
#line 493 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__ProcLabel_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 493 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_11, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__DummyModule_8));
#line 493 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_11, 1) = ((MR_Box) ((MR_Integer) 0));
#line 493 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_11, 2) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__DummyModule_8));
#line 493 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_11, 3) = ((MR_Box) ((MR_String) "DEBUG"));
#line 493 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_11, 4) = ((MR_Box) ((MR_Integer) 0));
#line 493 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_11, 5) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__InitialProcIdInt_10));
#line 493 "llds_out_instr.m"
    }
#line 495 "llds_out_instr.m"
    {
#line 495 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__CallerLabel_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "llds_out_instr.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__CallerLabel_12, 0) = ((MR_Box) ((MR_Integer) 1));
#line 495 "llds_out_instr.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__CallerLabel_12, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__ProcLabel_11));
#line 495 "llds_out_instr.m"
    }
#line 11897 "ll_backend.llds_out.llds_out_instr.c"
    ll_backend__llds_out__llds_out_instr__TypeCtorInfo_26_26 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 496 "llds_out_instr.m"
    {
#line 496 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__ContLabels_13 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_instr__TypeCtorInfo_26_26);
    }
#line 497 "llds_out_instr.m"
    {
#line 497 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__WhileLabels_14 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_instr__TypeCtorInfo_26_26);
    }
#line 498 "llds_out_instr.m"
    {
#line 498 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__UndefWhileLabels_15 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_instr__TypeCtorInfo_26_26);
    }
#line 499 "llds_out_instr.m"
    {
#line 499 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__LabelOutputInfo_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 499 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_16, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__CallerLabel_12));
#line 499 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_16, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__ContLabels_13));
#line 499 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_16, 2) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__WhileLabels_14));
#line 499 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_16, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__UndefWhileLabels_15));
#line 499 "llds_out_instr.m"
    }
#line 501 "llds_out_instr.m"
    {
#line 501 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Instr_6, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_16);
#line 501 "llds_out_instr.m"
      return;
    }
#line 489 "llds_out_instr.m"
  }
#line 70 "llds_out_instr.m"
}

#line 63 "llds_out_instr.m"
void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_p_0(
#line 63 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
#line 63 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_7,
#line 63 "llds_out_instr.m"
  MR_String ll_backend__llds_out__llds_out_instr__Comment_8)
#line 63 "llds_out_instr.m"
{
#line 472 "llds_out_instr.m"
  {
#line 472 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 472 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__TypeCtorInfo_28_28;
#line 472 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__DummyModule_10 = (MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_2[0];
#line 472 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__InitialProcIdInt_12;
#line 472 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__ProcLabel_13;
#line 472 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_14;
#line 472 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__ContLabels_15;
#line 472 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__WhileLabels_16;
#line 472 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__UndefWhileLabels_17;
#line 472 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_18;
#line 472 "llds_out_instr.m"
    MR_Integer ll_backend__llds_out__llds_out_instr__V_22_22;
#line 472 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__AutoComments_36;
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_46_46;
#line 512 "llds_out_instr.m"
    MR_String ll_backend__llds_out__llds_out_instr__V_47_47;
#line 512 "llds_out_instr.m"
    MR_String ll_backend__llds_out__llds_out_instr__V_48_48;
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_49_49;
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_50_50;
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_51_51;
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_52_52;
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_53_53;
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_54_54;
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_55_55;
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_56_56;
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_57_57;
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_58_58;
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_59_59;
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_60_60;
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_61_61;
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_62_62;
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_63_63;
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_64_64;
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_65_65;
#line 512 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__V_66_66;

#line 475 "llds_out_instr.m"
    {
#line 475 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__V_22_22 = hlds__hlds_pred__initial_proc_id_0_f_0();
    }
#line 475 "llds_out_instr.m"
    {
#line 475 "llds_out_instr.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__llds_out__llds_out_instr__V_22_22, &ll_backend__llds_out__llds_out_instr__InitialProcIdInt_12);
    }
#line 476 "llds_out_instr.m"
    {
#line 476 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__ProcLabel_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 476 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_13, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__DummyModule_10));
#line 476 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_13, 1) = ((MR_Box) ((MR_Integer) 0));
#line 476 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_13, 2) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__DummyModule_10));
#line 476 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_13, 3) = ((MR_Box) ((MR_String) "DEBUG"));
#line 476 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_13, 4) = ((MR_Box) ((MR_Integer) 0));
#line 476 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_13, 5) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__InitialProcIdInt_12));
#line 476 "llds_out_instr.m"
    }
#line 478 "llds_out_instr.m"
    {
#line 478 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__CallerLabel_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "llds_out_instr.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__CallerLabel_14, 0) = ((MR_Box) ((MR_Integer) 1));
#line 478 "llds_out_instr.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__CallerLabel_14, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__ProcLabel_13));
#line 478 "llds_out_instr.m"
    }
#line 12058 "ll_backend.llds_out.llds_out_instr.c"
    ll_backend__llds_out__llds_out_instr__TypeCtorInfo_28_28 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 479 "llds_out_instr.m"
    {
#line 479 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__ContLabels_15 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_instr__TypeCtorInfo_28_28);
    }
#line 480 "llds_out_instr.m"
    {
#line 480 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__WhileLabels_16 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_instr__TypeCtorInfo_28_28);
    }
#line 481 "llds_out_instr.m"
    {
#line 481 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__UndefWhileLabels_17 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_instr__TypeCtorInfo_28_28);
    }
#line 482 "llds_out_instr.m"
    {
#line 482 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__LabelOutputInfo_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 482 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_18, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__CallerLabel_14));
#line 482 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_18, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__ContLabels_15));
#line 482 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_18, 2) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__WhileLabels_16));
#line 482 "llds_out_instr.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_18, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__UndefWhileLabels_17));
#line 482 "llds_out_instr.m"
    }
#line 512 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
#line 512 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
#line 512 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
#line 512 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
#line 512 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
#line 512 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
#line 512 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)));
#line 512 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__AutoComments_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 512 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 512 "llds_out_instr.m"
    ll_backend__llds_out__llds_out_instr__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 8)));
#line 524 "llds_out_instr.m"
    if ((ll_backend__llds_out__llds_out_instr__AutoComments_36 == (MR_Integer) 0))
#line 521 "llds_out_instr.m"
      {
#line 517 "llds_out_instr.m"
        if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 1))))
#line 516 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_instr__succeeded = MR_TRUE;
#line 517 "llds_out_instr.m"
        else
#line 517 "llds_out_instr.m"
          if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 2))))
#line 517 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__succeeded = MR_TRUE;
#line 517 "llds_out_instr.m"
          else
#line 517 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__succeeded = MR_FALSE;
#line 521 "llds_out_instr.m"
        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 517 "llds_out_instr.m"
          {
#line 517 "llds_out_instr.m"
          }
#line 521 "llds_out_instr.m"
        else
#line 522 "llds_out_instr.m"
          {
#line 522 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Instr_7, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_18);
#line 522 "llds_out_instr.m"
            return;
          }
#line 521 "llds_out_instr.m"
      }
#line 524 "llds_out_instr.m"
    else
#line 525 "llds_out_instr.m"
      {
#line 526 "llds_out_instr.m"
        {
#line 526 "llds_out_instr.m"
          ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Instr_7, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_18);
        }
#line 527 "llds_out_instr.m"
        ll_backend__llds_out__llds_out_instr__succeeded = (strcmp(ll_backend__llds_out__llds_out_instr__Comment_8, (MR_String) "") == 0);
#line 529 "llds_out_instr.m"
        if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 527 "llds_out_instr.m"
          {
#line 527 "llds_out_instr.m"
          }
#line 529 "llds_out_instr.m"
        else
#line 530 "llds_out_instr.m"
          {
#line 530 "llds_out_instr.m"
            {
#line 530 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) "\t\t/* ");
            }
#line 531 "llds_out_instr.m"
            {
#line 531 "llds_out_instr.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__Comment_8);
            }
#line 532 "llds_out_instr.m"
            {
#line 532 "llds_out_instr.m"
              mercury__io__write_string_3_p_0((MR_String) " */\n");
#line 532 "llds_out_instr.m"
              return;
            }
#line 530 "llds_out_instr.m"
          }
#line 525 "llds_out_instr.m"
      }
#line 472 "llds_out_instr.m"
  }
#line 63 "llds_out_instr.m"
}

#line 57 "llds_out_instr.m"
void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_6_p_0(
#line 57 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
#line 57 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
#line 57 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3,
#line 57 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0_4)
#line 57 "llds_out_instr.m"
{
#line 282 "llds_out_instr.m"
  while (MR_TRUE)
#line 282 "llds_out_instr.m"
    {
#line 282 "llds_out_instr.m"
      /* tailcall optimized into a loop */
#line 282 "llds_out_instr.m"
      {
#line 282 "llds_out_instr.m"
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

#line 282 "llds_out_instr.m"
        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 282 "llds_out_instr.m"
          {
#line 282 "llds_out_instr.m"
          }
#line 282 "llds_out_instr.m"
        else
#line 284 "llds_out_instr.m"
          {
#line 284 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Instr_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
#line 284 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Instrs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
#line 284 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Uinstr_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr_14, (MR_Integer) 0)));
#line 284 "llds_out_instr.m"
            MR_String ll_backend__llds_out__llds_out_instr__Comment_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr_14, (MR_Integer) 1)));
#line 323 "llds_out_instr.m"
            MR_Word ll_backend__llds_out__llds_out_instr__Label_21;

#line 286 "llds_out_instr.m"
            ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 286 "llds_out_instr.m"
            if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 286 "llds_out_instr.m"
              {
#line 286 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__Label_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 1)));
#line 287 "llds_out_instr.m"
                {
#line 287 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__InternalLabelToLayoutMap_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 3)));
#line 287 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_24;
#line 287 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__WhileLabels_25;
#line 287 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 0)));
#line 287 "llds_out_instr.m"
                  MR_String ll_backend__llds_out__llds_out_instr__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 1)));
#line 287 "llds_out_instr.m"
                  MR_String ll_backend__llds_out__llds_out_instr__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 2)));
#line 287 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 4)));
#line 287 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 5)));
#line 287 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)));
#line 287 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_62_62 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 287 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 287 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 287 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 287 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 287 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 287 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 287 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 287 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 287 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 287 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 287 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 287 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 287 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 287 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 8)));
#line 288 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_23_23;
#line 288 "llds_out_instr.m"
                  MR_Box ll_backend__llds_out__llds_out_instr__conv0_V_23_23;
#line 302 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_77_77;
#line 302 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_78_78;
#line 302 "llds_out_instr.m"
                  MR_Word ll_backend__llds_out__llds_out_instr__V_79_79;

#line 288 "llds_out_instr.m"
                  {
#line 288 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__llds_out__llds_out_instr__InternalLabelToLayoutMap_22, ((MR_Box) (ll_backend__llds_out__llds_out_instr__Label_21)), &ll_backend__llds_out__llds_out_instr__conv0_V_23_23);
                  }
#line 288 "llds_out_instr.m"
                  if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 288 "llds_out_instr.m"
                    {
#line 288 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__V_23_23 = ((MR_Word) ll_backend__llds_out__llds_out_instr__conv0_V_23_23);
#line 288 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__succeeded = MR_TRUE;
#line 288 "llds_out_instr.m"
                    }
#line 290 "llds_out_instr.m"
                  if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 289 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_24 = (MR_Integer) 1;
#line 290 "llds_out_instr.m"
                  else
#line 291 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_24 = (MR_Integer) 0;
#line 294 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0_4 == (MR_Integer) 1);
#line 294 "llds_out_instr.m"
                  if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 295 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_24 == (MR_Integer) 1);
#line 299 "llds_out_instr.m"
                  if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 298 "llds_out_instr.m"
                    {
#line 298 "llds_out_instr.m"
                      {
#line 298 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0((MR_String) "\tMR_dummy_function_call();\n");
                      }
#line 298 "llds_out_instr.m"
                    }
#line 299 "llds_out_instr.m"
                  else
#line 298 "llds_out_instr.m"
                    {
#line 298 "llds_out_instr.m"
                    }
#line 302 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_instr__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3, (MR_Integer) 0)));
#line 302 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_instr__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3, (MR_Integer) 1)));
#line 302 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_instr__WhileLabels_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3, (MR_Integer) 2)));
#line 302 "llds_out_instr.m"
                  ll_backend__llds_out__llds_out_instr__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3, (MR_Integer) 3)));
#line 303 "llds_out_instr.m"
                  {
#line 303 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__llds_out__llds_out_instr__WhileLabels_25, ((MR_Box) (ll_backend__llds_out__llds_out_instr__Label_21)));
                  }
#line 317 "llds_out_instr.m"
                  if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 304 "llds_out_instr.m"
                    {
#line 304 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__UndefWhileLabels_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3, (MR_Integer) 3)));
#line 304 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__AfterWhileInstrs_27;
#line 304 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3, (MR_Integer) 0)));
#line 304 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3, (MR_Integer) 1)));
#line 304 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3, (MR_Integer) 2)));

#line 305 "llds_out_instr.m"
                      {
#line 305 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__llds_out__llds_out_instr__UndefWhileLabels_26, ((MR_Box) (ll_backend__llds_out__llds_out_instr__Label_21)));
                      }
#line 307 "llds_out_instr.m"
                      if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 305 "llds_out_instr.m"
                        {
#line 305 "llds_out_instr.m"
                        }
#line 307 "llds_out_instr.m"
                      else
#line 308 "llds_out_instr.m"
                        {
#line 308 "llds_out_instr.m"
                          ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Uinstr_19, ll_backend__llds_out__llds_out_instr__Comment_20, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3);
                        }
#line 311 "llds_out_instr.m"
                      {
#line 311 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0((MR_String) "\twhile (1) {\n");
                      }
#line 312 "llds_out_instr.m"
                      {
#line 312 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Label_21, ll_backend__llds_out__llds_out_instr__Instrs_15, &ll_backend__llds_out__llds_out_instr__AfterWhileInstrs_27, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3);
                      }
#line 314 "llds_out_instr.m"
                      {
#line 314 "llds_out_instr.m"
                        mercury__io__write_string_3_p_0((MR_String) "\t} /* end while */\n");
                      }
#line 315 "llds_out_instr.m"
                      /* direct tailcall eliminated */
#line 315 "llds_out_instr.m"
                      {
#line 315 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__AfterWhileInstrs_27;

#line 315 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0_4 = (MR_Integer) 0;
#line 315 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 315 "llds_out_instr.m"
                      }
#line 315 "llds_out_instr.m"
                      continue;
#line 304 "llds_out_instr.m"
                    }
#line 317 "llds_out_instr.m"
                  else
#line 319 "llds_out_instr.m"
                    {
#line 318 "llds_out_instr.m"
                      {
#line 318 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Uinstr_19, ll_backend__llds_out__llds_out_instr__Comment_20, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3);
                      }
#line 320 "llds_out_instr.m"
                      /* direct tailcall eliminated */
#line 320 "llds_out_instr.m"
                      {
#line 320 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Instrs_15;
#line 320 "llds_out_instr.m"
                        MR_Word ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0__tmp_copy_4 = ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_24;

#line 320 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0_4 = ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0__tmp_copy_4;
#line 320 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 320 "llds_out_instr.m"
                      }
#line 320 "llds_out_instr.m"
                      continue;
#line 319 "llds_out_instr.m"
                    }
#line 287 "llds_out_instr.m"
                }
#line 286 "llds_out_instr.m"
              }
#line 286 "llds_out_instr.m"
            else
#line 332 "llds_out_instr.m"
              {
#line 332 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__Instrs1_29;
#line 332 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__Lval_32;
#line 332 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__Rval_33;
#line 324 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__Instr1_28;
#line 324 "llds_out_instr.m"
                MR_Word ll_backend__llds_out__llds_out_instr__Uinstr1_30;
#line 325 "llds_out_instr.m"
                MR_String ll_backend__llds_out__llds_out_instr__V_31_31;

#line 324 "llds_out_instr.m"
                ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instrs_15)) == (MR_mktag((MR_Integer) 1)));
#line 324 "llds_out_instr.m"
                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 324 "llds_out_instr.m"
                  {
#line 324 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__Instr1_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Instrs_15, (MR_Integer) 0)));
#line 324 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__Instrs1_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Instrs_15, (MR_Integer) 1)));
#line 325 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__Uinstr1_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr1_28, (MR_Integer) 0)));
#line 325 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr1_28, (MR_Integer) 1)));
#line 326 "llds_out_instr.m"
                    {
#line 326 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds_out__llds_out_instr__is_aligned_float_dword_assignment_4_p_0(ll_backend__llds_out__llds_out_instr__Uinstr_19, ll_backend__llds_out__llds_out_instr__Uinstr1_30, &ll_backend__llds_out__llds_out_instr__Lval_32, &ll_backend__llds_out__llds_out_instr__Rval_33);
                    }
#line 324 "llds_out_instr.m"
                  }
#line 332 "llds_out_instr.m"
                if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 328 "llds_out_instr.m"
                  {
#line 328 "llds_out_instr.m"
                    {
#line 328 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_5_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Lval_32, ll_backend__llds_out__llds_out_instr__Rval_33);
                    }
#line 330 "llds_out_instr.m"
                    /* direct tailcall eliminated */
#line 330 "llds_out_instr.m"
                    {
#line 330 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Instrs1_29;

#line 330 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0_4 = (MR_Integer) 0;
#line 330 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 330 "llds_out_instr.m"
                    }
#line 330 "llds_out_instr.m"
                    continue;
#line 328 "llds_out_instr.m"
                  }
#line 332 "llds_out_instr.m"
                else
#line 334 "llds_out_instr.m"
                  {
#line 334 "llds_out_instr.m"
                    MR_Word ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_54;
#line 335 "llds_out_instr.m"
                    MR_String ll_backend__llds_out__llds_out_instr__V_34_34;

#line 333 "llds_out_instr.m"
                    {
#line 333 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Uinstr_19, ll_backend__llds_out__llds_out_instr__Comment_20, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3);
                    }
#line 335 "llds_out_instr.m"
                    ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_19)) == (MR_mktag((MR_Integer) 1)));
#line 335 "llds_out_instr.m"
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
#line 335 "llds_out_instr.m"
                      {
#line 335 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 0)));
#line 336 "llds_out_instr.m"
                        ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_54 = ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0_4;
#line 335 "llds_out_instr.m"
                      }
#line 335 "llds_out_instr.m"
                    else
#line 338 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_54 = (MR_Integer) 0;
#line 340 "llds_out_instr.m"
                    /* direct tailcall eliminated */
#line 340 "llds_out_instr.m"
                    {
#line 340 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Instrs_15;
#line 340 "llds_out_instr.m"
                      MR_Word ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0__tmp_copy_4 = ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_54;

#line 340 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0_4 = ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0__tmp_copy_4;
#line 340 "llds_out_instr.m"
                      ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
#line 340 "llds_out_instr.m"
                    }
#line 340 "llds_out_instr.m"
                    continue;
#line 334 "llds_out_instr.m"
                  }
#line 332 "llds_out_instr.m"
              }
#line 284 "llds_out_instr.m"
          }
#line 282 "llds_out_instr.m"
      }
#line 282 "llds_out_instr.m"
      break;
#line 282 "llds_out_instr.m"
    }
#line 57 "llds_out_instr.m"
}

#line 28 "llds_out_instr.m"
void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instruction_decls_6_p_0(
#line 28 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
#line 28 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_8,
#line 28 "llds_out_instr.m"
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_13,
#line 28 "llds_out_instr.m"
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_14)
#line 28 "llds_out_instr.m"
{
#line 114 "llds_out_instr.m"
  {
#line 114 "llds_out_instr.m"
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
#line 114 "llds_out_instr.m"
    MR_Word ll_backend__llds_out__llds_out_instr__Uinstr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)));
#line 115 "llds_out_instr.m"
    MR_String ll_backend__llds_out__llds_out_instr__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

#line 116 "llds_out_instr.m"
    {
#line 116 "llds_out_instr.m"
      ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Uinstr_11, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_13, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_14);
#line 116 "llds_out_instr.m"
      return;
    }
#line 114 "llds_out_instr.m"
  }
#line 28 "llds_out_instr.m"
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
	MR_register_type_ctor_info(&ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__type_ctor_info_label_output_info_0);
}

void mercury__ll_backend__llds_out__llds_out_instr__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.llds_out.llds_out_instr. */
