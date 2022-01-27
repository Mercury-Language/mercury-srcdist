/*
** Automatically generated from `llds_out_instr.m'
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


/* :- module ll_backend.llds_out.llds_out_instr. */
/* :- implementation. */

/*
INIT mercury__ll_backend__llds_out__llds_out_instr__init
ENDINIT
*/

#include "ll_backend.llds_out.llds_out_instr.mih"


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
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
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
#include "ll_backend.llds_out.llds_out_code_addr.mih"
#include "ll_backend.llds_out.llds_out_data.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_instr__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_instr__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_0;

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_1;

static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_value_ordered_after_layout_label_0[2];

static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_name_ordered_after_layout_label_0[2];

static const MR_Integer ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__functor_number_map_after_layout_label_0[2];

static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_instr__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0;

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__field_types_label_output_info_0_0[4];

static const MR_ConstString ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__field_names_label_output_info_0_0[4];

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_functor_desc_label_output_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_stag_ordered_label_output_info_0_0[1];

static const MR_DuPtagLayout ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_ptag_ordered_label_output_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_name_ordered_label_output_info_0[1];

static const MR_Integer ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__functor_number_map_label_output_info_0[1];

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr____Unify____after_layout_label_0_0_10001(
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr____Compare____after_layout_label_0_0_10001(
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr____Unify____label_output_info_0_0_10001(
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr____Compare____label_output_info_0_0_10001(
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_99_114_95_104_112_95_110_111_95_114_101_117_115_101_95_95_91_57_93_95_48_11_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_12,
  MR_Word ll_backend__llds_out__llds_out_instr__Lval_13,
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeTag_14,
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeOffset_15,
  MR_Word ll_backend__llds_out__llds_out_instr__Rval_16,
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeAllocId_17,
  MR_Word ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_18,
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeRegionRval_19);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_float_dword_assignment__456__1_2_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Type_10,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_21);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_instruction_list_while_block__406__1_2_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Instrs_15,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_39);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_output_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
  MR_Word ll_backend__llds_out__llds_out_instr__Output_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3,
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_4);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3,
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_4);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
  MR_Word ll_backend__llds_out__llds_out_instr__Component_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1);

static MR_Integer MR_CALL 
ll_backend__llds_out__llds_out_instr__max_leaf_stack_frame_size_0_f_0(void);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
  MR_Word ll_backend__llds_out__llds_out_instr__EmbeddedFrame_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_alloc_site_id_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
  MR_Word ll_backend__llds_out__llds_out_instr__AllocId_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_maybe_alloc_site_id_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeAllocId_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_goto_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
  MR_Word ll_backend__llds_out__llds_out_instr__Target_7,
  MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
  MR_Word ll_backend__llds_out__llds_out_instr__Label_7,
  MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_defn_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_live_value_type_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_layout_locns_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
  MR_Word ll_backend__llds_out__llds_out_instr__LiveVals_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_call_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
  MR_Word ll_backend__llds_out__llds_out_instr__Target_8,
  MR_Word ll_backend__llds_out__llds_out_instr__Continuation_9,
  MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_10);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_p_0(
  MR_Integer ll_backend__llds_out__llds_out_instr__Next_6,
  MR_Integer ll_backend__llds_out__llds_out_instr__Max_7,
  MR_String ll_backend__llds_out__llds_out_instr__Type_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_block_end_2_p_0(void);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_block_start_4_p_0(
  MR_Integer ll_backend__llds_out__llds_out_instr__TempR_5,
  MR_Integer ll_backend__llds_out__llds_out_instr__TempF_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_livevals_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_comment_chars_4_p_0(
  MR_Char ll_backend__llds_out__llds_out_instr__HeadVar__1_1,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_3(
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_2(
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_1(
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_7,
  MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_8,
  MR_String ll_backend__llds_out__llds_out_instr__Comment_9,
  MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_10);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_5_p_0_1(
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
  MR_Word ll_backend__llds_out__llds_out_instr__Lval_7,
  MR_Word ll_backend__llds_out__llds_out_instr__Rval_8);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__is_aligned_float_dword_assignment_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__InstrA_5,
  MR_Word ll_backend__llds_out__llds_out_instr__InstrB_6,
  MR_Word * ll_backend__llds_out__llds_out_instr__LvalA_7,
  MR_Word * ll_backend__llds_out__llds_out_instr__Rval_8);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_p_0_1(
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
  MR_Word ll_backend__llds_out__llds_out_instr__Label_3,
  MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_4);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
  MR_Word ll_backend__llds_out__llds_out_instr__Label_2,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__3_3,
  MR_Word * ll_backend__llds_out__llds_out_instr__HeadVar__4_4,
  MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
  MR_Word ll_backend__llds_out__llds_out_instr__Component_8,
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22,
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0_2(
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_3,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_4,
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0_1(
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_3,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_4,
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_8,
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81,
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);


static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_1[7][2];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_2[1][1];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_3[2][9];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_4[2][5];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_5[1][7];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_6[1][4];




static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 6 */
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_instr__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_instr__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_0 = {
  (MR_String) "not_after_layout_label",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_1 = {
  (MR_String) "after_layout_label",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_value_ordered_after_layout_label_0[2] = {
  &ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_0,
  &ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_name_ordered_after_layout_label_0[2] = {
  &ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_1,
  &ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_0
};

static const MR_Integer ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__functor_number_map_after_layout_label_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__type_ctor_info_after_layout_label_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__llds_out__llds_out_instr____Unify____after_layout_label_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_instr____Compare____after_layout_label_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_instr",
  (MR_String) "after_layout_label",
  {     ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_name_ordered_after_layout_label_0 },
  {     ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_value_ordered_after_layout_label_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__functor_number_map_after_layout_label_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_instr__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__field_types_label_output_info_0_0[4] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_instr__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_instr__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_instr__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0
};

static const MR_ConstString ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__field_names_label_output_info_0_0[4] = {
  (MR_String) "loi_caller_label",
  (MR_String) "loi_cont_labels",
  (MR_String) "loi_while_labels",
  (MR_String) "loi_undef_while_labels"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_stag_ordered_label_output_info_0_0[1] = {
  &ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_functor_desc_label_output_info_0_0
};

static const MR_DuPtagLayout ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_ptag_ordered_label_output_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_stag_ordered_label_output_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_name_ordered_label_output_info_0[1] = {
  &ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_functor_desc_label_output_info_0_0
};

static const MR_Integer ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__functor_number_map_label_output_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__type_ctor_info_label_output_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__llds_out__llds_out_instr____Unify____label_output_info_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_instr____Compare____label_output_info_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_instr",
  (MR_String) "label_output_info",
  {     ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_name_ordered_label_output_info_0 },
  {     ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_ptag_ordered_label_output_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__functor_number_map_label_output_info_0
};

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr____Unify____after_layout_label_0_0_10001(
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

    {
      ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds_out__llds_out_instr____Unify____after_layout_label_0_0(((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_2));
    }
    return ll_backend__llds_out__llds_out_instr__succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr____Compare____after_layout_label_0_0_10001(
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_3)
{
  {
    MR_Word ll_backend__llds_out__llds_out_instr__conv0_HeadVar__1_1;

    {
      ll_backend__llds_out__llds_out_instr____Compare____after_layout_label_0_0(&ll_backend__llds_out__llds_out_instr__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_3));
    }
    *ll_backend__llds_out__llds_out_instr__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_instr__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr____Unify____label_output_info_0_0_10001(
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

    {
      ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds_out__llds_out_instr____Unify____label_output_info_0_0(((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_2));
    }
    return ll_backend__llds_out__llds_out_instr__succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr____Compare____label_output_info_0_0_10001(
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_3)
{
  {
    MR_Word ll_backend__llds_out__llds_out_instr__conv0_HeadVar__1_1;

    {
      ll_backend__llds_out__llds_out_instr____Compare____label_output_info_0_0(&ll_backend__llds_out__llds_out_instr__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_3));
    }
    *ll_backend__llds_out__llds_out_instr__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_instr__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_99_114_95_104_112_95_110_111_95_114_101_117_115_101_95_95_91_57_93_95_48_11_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_12,
  MR_Word ll_backend__llds_out__llds_out_instr__Lval_13,
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeTag_14,
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeOffset_15,
  MR_Word ll_backend__llds_out__llds_out_instr__Rval_16,
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeAllocId_17,
  MR_Word ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_18,
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeRegionRval_19)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

    if ((ll_backend__llds_out__llds_out_instr__MaybeRegionRval_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ll_backend__llds_out__llds_out_instr__ProfMem_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 0)));
        MR_String ll_backend__llds_out__llds_out_instr__V_121_121 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 1)));
        MR_String ll_backend__llds_out__llds_out_instr__V_122_122 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 2)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 3)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 4)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 5)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 6)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_127_127 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_128_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_129_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_130_130 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_131_131 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_132_132 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_133_133 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_134_134 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_135_135 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_136_136 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_137_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_138_138 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_139_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
        MR_Word ll_backend__llds_out__llds_out_instr__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_12, (MR_Integer) 8)));

        if ((ll_backend__llds_out__llds_out_instr__MaybeTag_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          switch (ll_backend__llds_out__llds_out_instr__ProfMem_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                if ((ll_backend__llds_out__llds_out_instr__MaybeOffset_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  switch (ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_18) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "MR_alloc_heap(");
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "MR_alloc_heap_atomic(");
                        }
                      }
                      break;
                  }
                else
                  switch (ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_18) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "MR_offset_incr_hp(");
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "MR_offset_incr_hp_atomic(");
                        }
                      }
                      break;
                  }
                {
                  ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Lval_13);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
                if ((ll_backend__llds_out__llds_out_instr__MaybeOffset_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                  }
                else
                  {
                    MR_Integer ll_backend__llds_out__llds_out_instr__Offset_114 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeOffset_15, (MR_Integer) 0)));

                    {
                      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Offset_114);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
                  }
                {
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Rval_16, (MR_Integer) 13);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
              break;
            case (MR_Integer) 1:
              {
                switch (ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_18) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_offset_incr_hp_msg(");
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_offset_incr_hp_atomic_msg(");
                      }
                    }
                    break;
                }
                {
                  ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Lval_13);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
                if ((ll_backend__llds_out__llds_out_instr__MaybeOffset_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "0, ");
                    }
                  }
                else
                  {
                    MR_Integer ll_backend__llds_out__llds_out_instr__Offset_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeOffset_15, (MR_Integer) 0)));

                    {
                      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Offset_25);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
                  }
                {
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Rval_16, (MR_Integer) 13);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
                {
                  ll_backend__llds_out__llds_out_instr__output_maybe_alloc_site_id_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__MaybeAllocId_17);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ", NULL)");
                }
              }
              break;
          }
        else
          {
            MR_Integer ll_backend__llds_out__llds_out_instr__V_203_203 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeTag_14, (MR_Integer) 0)));

            switch (ll_backend__llds_out__llds_out_instr__ProfMem_24) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  if ((ll_backend__llds_out__llds_out_instr__MaybeOffset_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      switch (ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_18) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "MR_tag_alloc_heap(");
                            }
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "MR_tag_alloc_heap_atomic(");
                            }
                          }
                          break;
                      }
                      {
                        ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Lval_13);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                      }
                      {
                        mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__V_203_203);
                      }
                    }
                  else
                    {
                      switch (ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_18) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "MR_tag_offset_incr_hp(");
                            }
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "MR_tag_offset_incr_hp_atomic(");
                            }
                          }
                          break;
                      }
                      {
                        ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Lval_13);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                      }
                      {
                        ll_backend__llds_out__llds_out_data__output_tag_3_p_0(ll_backend__llds_out__llds_out_instr__V_203_203);
                      }
                    }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                  }
                  if ((ll_backend__llds_out__llds_out_instr__MaybeOffset_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                    }
                  else
                    {
                      MR_Integer ll_backend__llds_out__llds_out_instr__Offset_143 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeOffset_15, (MR_Integer) 0)));

                      {
                        mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Offset_143);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                      }
                    }
                  {
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Rval_16, (MR_Integer) 13);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  switch (ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_18) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "MR_tag_offset_incr_hp_msg(");
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "MR_tag_offset_incr_hp_atomic_msg(");
                        }
                      }
                      break;
                  }
                  {
                    ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Lval_13);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                  }
                  {
                    ll_backend__llds_out__llds_out_data__output_tag_3_p_0(ll_backend__llds_out__llds_out_instr__V_203_203);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                  }
                  if ((ll_backend__llds_out__llds_out_instr__MaybeOffset_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "0, ");
                      }
                    }
                  else
                    {
                      MR_Integer ll_backend__llds_out__llds_out_instr__Offset_158 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeOffset_15, (MR_Integer) 0)));

                      {
                        mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Offset_158);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                      }
                    }
                  {
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Rval_16, (MR_Integer) 13);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                  }
                  {
                    ll_backend__llds_out__llds_out_instr__output_maybe_alloc_site_id_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__MaybeAllocId_17);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ", NULL)");
                  }
                }
                break;
            }
          }
      }
    else
      {
        MR_Word ll_backend__llds_out__llds_out_instr__RegionRval_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeRegionRval_19, (MR_Integer) 0)));

        if ((ll_backend__llds_out__llds_out_instr__MaybeTag_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_alloc_in_region(");
            }
            {
              ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Lval_13);
            }
          }
        else
          {
            MR_Integer ll_backend__llds_out__llds_out_instr__Tag_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeTag_14, (MR_Integer) 0)));

            {
              mercury__io__write_string_3_p_0((MR_String) "MR_tag_alloc_in_region(");
            }
            {
              ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Lval_13);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            {
              ll_backend__llds_out__llds_out_data__output_tag_3_p_0(ll_backend__llds_out__llds_out_instr__Tag_23);
            }
          }
        {
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
        {
          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__RegionRval_22);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
        {
          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_12, ll_backend__llds_out__llds_out_instr__Rval_16, (MR_Integer) 13);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_float_dword_assignment__456__1_2_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Type_10,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_21)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__Type_10 == ll_backend__llds_out__llds_out_instr__HeadVar__2_21);

    return ll_backend__llds_out__llds_out_instr__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_instruction_list_while_block__406__1_2_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Instrs_15,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_39)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

    {
      ll_backend__llds_out__llds_out_instr__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[1], ((MR_Box) (ll_backend__llds_out__llds_out_instr__Instrs_15)), ((MR_Box) (ll_backend__llds_out__llds_out_instr__HeadVar__2_39)));
    }
    return ll_backend__llds_out__llds_out_instr__succeeded;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_instr____Compare____label_output_info_0_0(
  MR_Word * ll_backend__llds_out__llds_out_instr__HeadVar__1_1,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__3_3)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
    MR_Integer ll_backend__llds_out__llds_out_instr__CastX_15 = (MR_Integer) ll_backend__llds_out__llds_out_instr__HeadVar__2_2;
    MR_Integer ll_backend__llds_out__llds_out_instr__CastY_16 = (MR_Integer) ll_backend__llds_out__llds_out_instr__HeadVar__3_3;

    ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__CastX_15 == ll_backend__llds_out__llds_out_instr__CastY_16);
    if (ll_backend__llds_out__llds_out_instr__succeeded)
      *ll_backend__llds_out__llds_out_instr__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__llds_out__llds_out_instr__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_12_12;

        {
          ll_backend__llds____Compare____label_0_0(&ll_backend__llds_out__llds_out_instr__V_12_12, ll_backend__llds_out__llds_out_instr__V_4_4, ll_backend__llds_out__llds_out_instr__V_8_8);
        }
        ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_12_12 == (MR_Integer) 0);
        ll_backend__llds_out__llds_out_instr__succeeded = !(ll_backend__llds_out__llds_out_instr__succeeded);
        if (ll_backend__llds_out__llds_out_instr__succeeded)
          *ll_backend__llds_out__llds_out_instr__HeadVar__1_1 = ll_backend__llds_out__llds_out_instr__V_12_12;
        else
          {
            MR_Word ll_backend__llds_out__llds_out_instr__V_13_13;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[4], &ll_backend__llds_out__llds_out_instr__V_13_13, ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_5_5)), ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_9_9)));
            }
            ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_13_13 == (MR_Integer) 0);
            ll_backend__llds_out__llds_out_instr__succeeded = !(ll_backend__llds_out__llds_out_instr__succeeded);
            if (ll_backend__llds_out__llds_out_instr__succeeded)
              *ll_backend__llds_out__llds_out_instr__HeadVar__1_1 = ll_backend__llds_out__llds_out_instr__V_13_13;
            else
              {
                MR_Word ll_backend__llds_out__llds_out_instr__V_14_14;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[4], &ll_backend__llds_out__llds_out_instr__V_14_14, ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_6_6)), ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_10_10)));
                }
                ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_14_14 == (MR_Integer) 0);
                ll_backend__llds_out__llds_out_instr__succeeded = !(ll_backend__llds_out__llds_out_instr__succeeded);
                if (ll_backend__llds_out__llds_out_instr__succeeded)
                  *ll_backend__llds_out__llds_out_instr__HeadVar__1_1 = ll_backend__llds_out__llds_out_instr__V_14_14;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[4], ll_backend__llds_out__llds_out_instr__HeadVar__1_1, ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_7_7)), ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_11_11)));
                    }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr____Unify____label_output_info_0_0(
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
    MR_Integer ll_backend__llds_out__llds_out_instr__CastX_11 = (MR_Integer) ll_backend__llds_out__llds_out_instr__HeadVar__1_1;
    MR_Integer ll_backend__llds_out__llds_out_instr__CastY_12 = (MR_Integer) ll_backend__llds_out__llds_out_instr__HeadVar__2_2;

    ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__CastX_11 == ll_backend__llds_out__llds_out_instr__CastY_12);
    if (ll_backend__llds_out__llds_out_instr__succeeded)
      ll_backend__llds_out__llds_out_instr__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__llds_out__llds_out_instr__TypeInfo_14_14;
        MR_Word ll_backend__llds_out__llds_out_instr__TypeInfo_15_15;
        MR_Word ll_backend__llds_out__llds_out_instr__TypeInfo_16_16;
        MR_Word ll_backend__llds_out__llds_out_instr__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 3)));

        {
          ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_instr__V_3_3, ll_backend__llds_out__llds_out_instr__V_7_7);
        }
        if (ll_backend__llds_out__llds_out_instr__succeeded)
          {
            ll_backend__llds_out__llds_out_instr__TypeInfo_14_14 = (MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[4];
            {
              ll_backend__llds_out__llds_out_instr__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_instr__TypeInfo_14_14, ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_4_4)), ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_8_8)));
            }
            if (ll_backend__llds_out__llds_out_instr__succeeded)
              {
                ll_backend__llds_out__llds_out_instr__TypeInfo_15_15 = (MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[4];
                {
                  ll_backend__llds_out__llds_out_instr__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_instr__TypeInfo_15_15, ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_5_5)), ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_9_9)));
                }
                if (ll_backend__llds_out__llds_out_instr__succeeded)
                  {
                    ll_backend__llds_out__llds_out_instr__TypeInfo_16_16 = (MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[4];
                    {
                      ll_backend__llds_out__llds_out_instr__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_instr__TypeInfo_16_16, ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_6_6)), ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_10_10)));
                    }
                  }
              }
          }
      }
    return ll_backend__llds_out__llds_out_instr__succeeded;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_instr____Compare____after_layout_label_0_0(
  MR_Word * ll_backend__llds_out__llds_out_instr__HeadVar__1_1,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__3_3)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
    MR_Integer ll_backend__llds_out__llds_out_instr__Cast_HeadVar1_4 = (MR_Integer) ll_backend__llds_out__llds_out_instr__HeadVar__2_2;
    MR_Integer ll_backend__llds_out__llds_out_instr__Cast_HeadVar2_5 = (MR_Integer) ll_backend__llds_out__llds_out_instr__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__llds_out__llds_out_instr__HeadVar__1_1, ll_backend__llds_out__llds_out_instr__Cast_HeadVar1_4, ll_backend__llds_out__llds_out_instr__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr____Unify____after_layout_label_0_0(
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_1,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__HeadVar__2_1 == ll_backend__llds_out__llds_out_instr__HeadVar__2_2);

    return ll_backend__llds_out__llds_out_instr__succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_output_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
  MR_Word ll_backend__llds_out__llds_out_instr__Output_6)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
    MR_Word ll_backend__llds_out__llds_out_instr__Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_6, (MR_Integer) 0)));
    MR_Word ll_backend__llds_out__llds_out_instr__OrigType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_6, (MR_Integer) 3)));
    MR_String ll_backend__llds_out__llds_out_instr__VarName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_6, (MR_Integer) 4)));
    MR_Word ll_backend__llds_out__llds_out_instr__MaybeForeignType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_6, (MR_Integer) 5)));
    MR_Word ll_backend__llds_out__llds_out_instr__BoxPolicy_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_6, (MR_Integer) 6)));
    MR_Word ll_backend__llds_out__llds_out_instr___VarType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_6, (MR_Integer) 1)));
    MR_Word ll_backend__llds_out__llds_out_instr___IsDummy_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_6, (MR_Integer) 2)));

    {
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
    switch (ll_backend__llds_out__llds_out_instr__BoxPolicy_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
          }
        }
        break;
      case (MR_Integer) 0:
        if ((ll_backend__llds_out__llds_out_instr__MaybeForeignType_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word ll_backend__llds_out__llds_out_instr__BuiltinType_18;

            ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__OrigType_11)) == (MR_mktag((MR_Integer) 2)));
            if (ll_backend__llds_out__llds_out_instr__succeeded)
              {
                ll_backend__llds_out__llds_out_instr__BuiltinType_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_instr__OrigType_11, (MR_Integer) 0)));
                switch (ll_backend__llds_out__llds_out_instr__BuiltinType_18) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 3:
                    {
                      {
                        ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) " = ");
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(MR_UnsignedChar) ");
                      }
                      {
                        mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ll_backend__llds_out__llds_out_instr__ActualType_19;

                      {
                        ll_backend__llds__lval_type_2_p_0(ll_backend__llds_out__llds_out_instr__Lval_8, &ll_backend__llds_out__llds_out_instr__ActualType_19);
                      }
                      ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__ActualType_19 == (MR_Integer) 9);
                      if (ll_backend__llds_out__llds_out_instr__succeeded)
                        {
                          {
                            ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
                          }
                          {
                            mercury__io__write_string_3_p_0((MR_String) " = ");
                          }
                          {
                            mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
                          }
                        }
                      else
                        {
                          {
                            ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
                          }
                          {
                            mercury__io__write_string_3_p_0((MR_String) " = ");
                          }
                          {
                            mercury__io__write_string_3_p_0((MR_String) "MR_float_to_word(");
                          }
                          {
                            mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
                          }
                          {
                            mercury__io__write_string_3_p_0((MR_String) ")");
                          }
                        }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      {
                        ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) " = ");
                      }
                      {
                        mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) " = ");
                      }
                      {
                        ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Integer) 13);
                      }
                      {
                        mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
                      }
                    }
                    break;
                }
              }
            else
              {
                {
                  ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) " = ");
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
                }
              }
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_instr__ForeignTypeInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeForeignType_13, (MR_Integer) 0)));
            MR_String ll_backend__llds_out__llds_out_instr__ForeignType_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ForeignTypeInfo_15, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_instr__Assertions_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ForeignTypeInfo_15, (MR_Integer) 1)));

            {
              ll_backend__llds_out__llds_out_instr__succeeded = hlds__hlds_data__asserted_can_pass_as_mercury_type_1_p_0(ll_backend__llds_out__llds_out_instr__Assertions_17);
            }
            if (ll_backend__llds_out__llds_out_instr__succeeded)
              {
                {
                  ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) " = ");
                }
                {
                  ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Integer) 13);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
                }
              }
            else
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_MAYBE_BOX_FOREIGN_TYPE(");
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__ForeignType_16);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
                {
                  ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Lval_8);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
          }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_instr__Output_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_instr__Outputs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__llds_out__llds_out_instr__IsDummy_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_10, (MR_Integer) 2)));
            MR_Word ll_backend__llds_out__llds_out_instr___Lval_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_10, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_instr___VarType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_10, (MR_Integer) 1)));
            MR_Word ll_backend__llds_out__llds_out_instr___OrigType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_10, (MR_Integer) 3)));
            MR_String ll_backend__llds_out__llds_out_instr___VarName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_10, (MR_Integer) 4)));
            MR_Word ll_backend__llds_out__llds_out_instr___MaybeForeignType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_10, (MR_Integer) 5)));
            MR_Word ll_backend__llds_out__llds_out_instr___BoxPolicy_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_10, (MR_Integer) 6)));

            switch (ll_backend__llds_out__llds_out_instr__IsDummy_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  ll_backend__llds_out__llds_out_instr__output_foreign_proc_output_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Output_10);
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Outputs_11;

              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3,
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_4 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3;
        else
          {
            MR_Word ll_backend__llds_out__llds_out_instr__Output_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_instr__Outputs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__llds_out__llds_out_instr__Lval_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_15, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_30_30;
            MR_Word ll_backend__llds_out__llds_out_instr___VarType_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_15, (MR_Integer) 1)));
            MR_Word ll_backend__llds_out__llds_out_instr___IsDummy_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_15, (MR_Integer) 2)));
            MR_Word ll_backend__llds_out__llds_out_instr___OrigType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_15, (MR_Integer) 3)));
            MR_String ll_backend__llds_out__llds_out_instr___VarName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_15, (MR_Integer) 4)));
            MR_Word ll_backend__llds_out__llds_out_instr__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_15, (MR_Integer) 5)));
            MR_Word ll_backend__llds_out__llds_out_instr__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Output_15, (MR_Integer) 6)));

            {
              ll_backend__llds_out__llds_out_data__output_record_lval_decls_tab_6_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Lval_19, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_30_30);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Outputs_16;
              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0__tmp_copy_3 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_30_30;

              ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0__tmp_copy_3;
              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_instr__Input_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_instr__Inputs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
            MR_String ll_backend__llds_out__llds_out_instr__VarName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_10, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_instr__VarType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_10, (MR_Integer) 1)));
            MR_Word ll_backend__llds_out__llds_out_instr__IsDummy_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_10, (MR_Integer) 2)));
            MR_Word ll_backend__llds_out__llds_out_instr___OrigType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_10, (MR_Integer) 3)));
            MR_Word ll_backend__llds_out__llds_out_instr___Rval_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_10, (MR_Integer) 4)));
            MR_Word ll_backend__llds_out__llds_out_instr___MaybeForeignTypeInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_10, (MR_Integer) 5)));
            MR_Word ll_backend__llds_out__llds_out_instr___BoxPolicy_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_10, (MR_Integer) 6)));

            switch (ll_backend__llds_out__llds_out_instr__IsDummy_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ll_backend__llds_out__llds_out_instr__TypeInfo_33_33;
                  MR_Word ll_backend__llds_out__llds_out_instr__VarTypeCtor_20;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_25_25;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_32_32;

                  {
                    ll_backend__llds_out__llds_out_instr__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ll_backend__llds_out__llds_out_instr__VarType_14, &ll_backend__llds_out__llds_out_instr__VarTypeCtor_20, &ll_backend__llds_out__llds_out_instr__V_32_32);
                  }
                  if (ll_backend__llds_out__llds_out_instr__succeeded)
                    {
                      ll_backend__llds_out__llds_out_instr__TypeInfo_33_33 = (MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[6];
                      {
                        ll_backend__llds_out__llds_out_instr__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_instr__TypeInfo_33_33, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_32_32)));
                      }
                      if (ll_backend__llds_out__llds_out_instr__succeeded)
                        {
                          {
                            ll_backend__llds_out__llds_out_instr__V_25_25 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(ll_backend__llds_out__llds_out_instr__VarTypeCtor_20);
                          }
                          ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_25_25 == (MR_Integer) 0);
                        }
                    }
                  if (ll_backend__llds_out__llds_out_instr__succeeded)
                    {
                    }
                  else
                    {
                      MR_String ll_backend__llds_out__llds_out_instr__V_26_26;
                      MR_String ll_backend__llds_out__llds_out_instr__V_29_29;

                      {
                        ll_backend__llds_out__llds_out_instr__V_29_29 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_instr__VarName_13, (MR_String) " = 0;\n");
                      }
                      {
                        ll_backend__llds_out__llds_out_instr__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ll_backend__llds_out__llds_out_instr__V_29_29);
                      }
                      {
                        mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__V_26_26);
                      }
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "\t");
                  }
                  switch (ll_backend__llds_out__llds_out_instr___BoxPolicy_19) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_13);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " = ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr___Rval_17, (MR_Integer) 13);
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      if ((ll_backend__llds_out__llds_out_instr___MaybeForeignTypeInfo_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word ll_backend__llds_out__llds_out_instr__V_54_54;

                          {
                            mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_13);
                          }
                          {
                            mercury__io__write_string_3_p_0((MR_String) " = ");
                          }
                          ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr___OrigType_16)) == (MR_mktag((MR_Integer) 2)));
                          if (ll_backend__llds_out__llds_out_instr__succeeded)
                            {
                              ll_backend__llds_out__llds_out_instr__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_instr___OrigType_16, (MR_Integer) 0)));
                              ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_54_54 == (MR_Integer) 2);
                            }
                          if (ll_backend__llds_out__llds_out_instr__succeeded)
                            {
                              {
                                ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Integer) 10);
                              }
                              {
                                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr___Rval_17, (MR_Integer) 13);
                              }
                            }
                          else
                            {
                              MR_Word ll_backend__llds_out__llds_out_instr__V_59_59;

                              ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr___OrigType_16)) == (MR_mktag((MR_Integer) 2)));
                              if (ll_backend__llds_out__llds_out_instr__succeeded)
                                {
                                  ll_backend__llds_out__llds_out_instr__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_instr___OrigType_16, (MR_Integer) 0)));
                                  ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_59_59 == (MR_Integer) 1);
                                }
                              if (ll_backend__llds_out__llds_out_instr__succeeded)
                                {
                                  {
                                    ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr___Rval_17, (MR_Integer) 9);
                                  }
                                }
                              else
                                {
                                  {
                                    ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr___Rval_17, (MR_Integer) 13);
                                  }
                                }
                            }
                        }
                      else
                        {
                          MR_Word ll_backend__llds_out__llds_out_instr__ForeignTypeInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr___MaybeForeignTypeInfo_18, (MR_Integer) 0)));
                          MR_String ll_backend__llds_out__llds_out_instr__ForeignType_47 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ForeignTypeInfo_46, (MR_Integer) 0)));
                          MR_Word ll_backend__llds_out__llds_out_instr__Assertions_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ForeignTypeInfo_46, (MR_Integer) 1)));

                          {
                            ll_backend__llds_out__llds_out_instr__succeeded = backend_libs__export__c_type_is_word_sized_int_or_ptr_1_p_0(ll_backend__llds_out__llds_out_instr__ForeignType_47);
                          }
                          if (!(ll_backend__llds_out__llds_out_instr__succeeded))
                            {
                              ll_backend__llds_out__llds_out_instr__succeeded = hlds__hlds_data__asserted_can_pass_as_mercury_type_1_p_0(ll_backend__llds_out__llds_out_instr__Assertions_48);
                            }
                          if (ll_backend__llds_out__llds_out_instr__succeeded)
                            {
                              MR_String ll_backend__llds_out__llds_out_instr__V_67_67;
                              MR_String ll_backend__llds_out__llds_out_instr__V_70_70;

                              {
                                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_13);
                              }
                              {
                                mercury__io__write_string_3_p_0((MR_String) " = ");
                              }
                              {
                                ll_backend__llds_out__llds_out_instr__V_70_70 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_instr__ForeignType_47, (MR_String) ") ");
                              }
                              {
                                ll_backend__llds_out__llds_out_instr__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__llds_out__llds_out_instr__V_70_70);
                              }
                              {
                                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__V_67_67);
                              }
                              {
                                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr___Rval_17, (MR_Integer) 13);
                              }
                            }
                          else
                            {
                              {
                                mercury__io__write_string_3_p_0((MR_String) "MR_MAYBE_UNBOX_FOREIGN_TYPE(");
                              }
                              {
                                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__ForeignType_47);
                              }
                              {
                                mercury__io__write_string_3_p_0((MR_String) ", ");
                              }
                              {
                                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr___Rval_17, (MR_Integer) 13);
                              }
                              {
                                mercury__io__write_string_3_p_0((MR_String) ", ");
                              }
                              {
                                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_13);
                              }
                              {
                                mercury__io__write_string_3_p_0((MR_String) ")");
                              }
                            }
                        }
                      break;
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ";\n");
                  }
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Inputs_11;

              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3,
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_4 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3;
        else
          {
            MR_Word ll_backend__llds_out__llds_out_instr__Input_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_instr__Inputs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__llds_out__llds_out_instr__Rval_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_15, (MR_Integer) 4)));
            MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_30_30;
            MR_String ll_backend__llds_out__llds_out_instr___VarName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_15, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_instr___VarType_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_15, (MR_Integer) 1)));
            MR_Word ll_backend__llds_out__llds_out_instr___IsDummy_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_15, (MR_Integer) 2)));
            MR_Word ll_backend__llds_out__llds_out_instr___OrigType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_15, (MR_Integer) 3)));
            MR_Word ll_backend__llds_out__llds_out_instr__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_15, (MR_Integer) 5)));
            MR_Word ll_backend__llds_out__llds_out_instr__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Input_15, (MR_Integer) 6)));

            {
              ll_backend__llds_out__llds_out_data__output_record_rval_decls_tab_6_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Rval_23, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_30_30);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Inputs_16;
              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0__tmp_copy_3 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_30_30;

              ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_3 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0__tmp_copy_3;
              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

        if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_instr__Decl_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_instr__Decls_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 1)));
            MR_String ll_backend__llds_out__llds_out_instr__TypeString_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Decl_7, (MR_Integer) 1)));
            MR_String ll_backend__llds_out__llds_out_instr__VarName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Decl_7, (MR_Integer) 2)));
            MR_Word ll_backend__llds_out__llds_out_instr___Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Decl_7, (MR_Integer) 0)));

            {
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__TypeString_11);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__VarName_12);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ";\n");
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_instr__Decls_8;

              ll_backend__llds_out__llds_out_instr__HeadVar__1_1 = ll_backend__llds_out__llds_out_instr__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
  MR_Word ll_backend__llds_out__llds_out_instr__Component_6)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

    switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Component_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__llds_out__llds_out_instr__Inputs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 0)));

          {
            ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Inputs_8);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__llds_out__llds_out_instr__Outputs_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 0)));

          {
            ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Outputs_9);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__MaybeContext_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 1)));
              MR_String ll_backend__llds_out__llds_out_instr__C_Code_12 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 2)));

              ll_backend__llds_out__llds_out_instr__succeeded = (strcmp(ll_backend__llds_out__llds_out_instr__C_Code_12, (MR_String) "") == 0);
              if (ll_backend__llds_out__llds_out_instr__succeeded)
                {
                }
              else
              if ((ll_backend__llds_out__llds_out_instr__MaybeContext_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "{\n");
                  }
                  {
                    mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__C_Code_12);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ";}\n");
                  }
                }
              else
                {
                  MR_Word ll_backend__llds_out__llds_out_instr__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeContext_10, (MR_Integer) 0)));
                  MR_Word ll_backend__llds_out__llds_out_instr__V_39_39;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_44_44;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_49_49;
                  MR_String ll_backend__llds_out__llds_out_instr__V_50_50;
                  MR_String ll_backend__llds_out__llds_out_instr__V_51_51;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_52_52;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_53_53;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_54_54;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_55_55;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_56_56;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_57_57;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_58_58;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_59_59;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_60_60;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_61_61;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_62_62;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_63_63;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_64_64;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_65_65;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_66_66;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_67_67;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_68_68;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_69_69;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_70_70;
                  MR_String ll_backend__llds_out__llds_out_instr__V_71_71;
                  MR_String ll_backend__llds_out__llds_out_instr__V_72_72;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_73_73;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_74_74;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_75_75;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_76_76;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_77_77;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_78_78;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_79_79;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_80_80;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_81_81;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_82_82;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_83_83;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_84_84;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_85_85;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_86_86;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_87_87;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_88_88;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_89_89;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_90_90;

                  {
                    mercury__io__write_string_3_p_0((MR_String) "{\n");
                  }
                  ll_backend__llds_out__llds_out_instr__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 0)));
                  ll_backend__llds_out__llds_out_instr__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 1)));
                  ll_backend__llds_out__llds_out_instr__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 2)));
                  ll_backend__llds_out__llds_out_instr__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 3)));
                  ll_backend__llds_out__llds_out_instr__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 4)));
                  ll_backend__llds_out__llds_out_instr__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 5)));
                  ll_backend__llds_out__llds_out_instr__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)));
                  ll_backend__llds_out__llds_out_instr__V_56_56 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
                  ll_backend__llds_out__llds_out_instr__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 8)));
                  {
                    ll_backend__llds_out__llds_out_util__output_set_line_num_4_p_0(ll_backend__llds_out__llds_out_instr__V_39_39, ll_backend__llds_out__llds_out_instr__Context_13);
                  }
                  {
                    mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__C_Code_12);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ";}\n");
                  }
                  ll_backend__llds_out__llds_out_instr__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 0)));
                  ll_backend__llds_out__llds_out_instr__V_71_71 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 1)));
                  ll_backend__llds_out__llds_out_instr__V_72_72 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 2)));
                  ll_backend__llds_out__llds_out_instr__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 3)));
                  ll_backend__llds_out__llds_out_instr__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 4)));
                  ll_backend__llds_out__llds_out_instr__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 5)));
                  ll_backend__llds_out__llds_out_instr__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)));
                  ll_backend__llds_out__llds_out_instr__V_77_77 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_85_85 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_86_86 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_87_87 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_88_88 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_89_89 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
                  ll_backend__llds_out__llds_out_instr__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 8)));
                  {
                    ll_backend__llds_out__llds_out_util__output_reset_line_num_3_p_0(ll_backend__llds_out__llds_out_instr__V_44_44);
                  }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ll_backend__llds_out__llds_out_instr__C_Code_48 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 4)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 3)));

              {
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__C_Code_48);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Label_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 1)));
              MR_String ll_backend__llds_out__llds_out_instr__V_22_22;
              MR_String ll_backend__llds_out__llds_out_instr__V_25_25;
              MR_String ll_backend__llds_out__llds_out_instr__V_26_26;

              {
                ll_backend__llds_out__llds_out_instr__V_26_26 = ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_f_0();
              }
              {
                ll_backend__llds_out__llds_out_instr__V_25_25 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_instr__V_26_26, (MR_String) ") MR_GOTO_LAB(");
              }
              {
                ll_backend__llds_out__llds_out_instr__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "if (!", ll_backend__llds_out__llds_out_instr__V_25_25);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__V_22_22);
              }
              {
                ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_17);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__AllocId_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_6, (MR_Integer) 1)));

              {
                ll_backend__llds_out__llds_out_instr__output_alloc_site_id_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__AllocId_18);
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

    switch (ll_backend__llds_out__llds_out_instr__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_commit");
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_exception");
          }
        }
        break;
      case (MR_Integer) 5:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_gc");
          }
        }
        break;
      case (MR_Integer) 4:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_retry");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_solve");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_undo");
          }
        }
        break;
    }
  }
}

static MR_Integer MR_CALL 
ll_backend__llds_out__llds_out_instr__max_leaf_stack_frame_size_0_f_0(void)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

    return (MR_Integer) 32;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
  MR_Word ll_backend__llds_out__llds_out_instr__EmbeddedFrame_6)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
    MR_Word ll_backend__llds_out__llds_out_instr__MainStackId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__EmbeddedFrame_6, (MR_Integer) 0)));
    MR_Integer ll_backend__llds_out__llds_out_instr__LastSlot_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__EmbeddedFrame_6, (MR_Integer) 2)));
    MR_Word ll_backend__llds_out__llds_out_instr__FrameStartRval_11;
    MR_Integer ll_backend__llds_out__llds_out_instr___FirstSlot_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__EmbeddedFrame_6, (MR_Integer) 1)));

    {
      ll_backend__llds_out__llds_out_instr__FrameStartRval_11 = ll_backend__llds__stack_slot_num_to_lval_ref_2_f_0(ll_backend__llds_out__llds_out_instr__MainStackId_8, ll_backend__llds_out__llds_out_instr__LastSlot_10);
    }
    {
      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__FrameStartRval_11, (MR_Integer) 11);
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_alloc_site_id_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
  MR_Word ll_backend__llds_out__llds_out_instr__AllocId_6)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
    MR_String ll_backend__llds_out__llds_out_instr__MangledModuleName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 1)));
    MR_Word ll_backend__llds_out__llds_out_instr__AllocSiteMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)));
    MR_Word ll_backend__llds_out__llds_out_instr__AllocSiteSlotName_10;
    MR_Word ll_backend__llds_out__llds_out_instr__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 0)));
    MR_String ll_backend__llds_out__llds_out_instr__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 2)));
    MR_Word ll_backend__llds_out__llds_out_instr__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 3)));
    MR_Word ll_backend__llds_out__llds_out_instr__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 4)));
    MR_Word ll_backend__llds_out__llds_out_instr__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 5)));
    MR_Word ll_backend__llds_out__llds_out_instr__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__llds_out__llds_out_instr__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 8)));
    MR_Box ll_backend__llds_out__llds_out_instr__conv0_AllocSiteSlotName_10;

    {
      mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__llds_out__llds_out_instr__AllocSiteMap_9, ((MR_Box) (ll_backend__llds_out__llds_out_instr__AllocId_6)), &ll_backend__llds_out__llds_out_instr__conv0_AllocSiteSlotName_10);
    }
    ll_backend__llds_out__llds_out_instr__AllocSiteSlotName_10 = ((MR_Word) ll_backend__llds_out__llds_out_instr__conv0_AllocSiteSlotName_10);
    {
      ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__llds_out__llds_out_instr__MangledModuleName_8, ll_backend__llds_out__llds_out_instr__AllocSiteSlotName_10);
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_maybe_alloc_site_id_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
  MR_Word ll_backend__llds_out__llds_out_instr__MaybeAllocId_6)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

    if ((ll_backend__llds_out__llds_out_instr__MaybeAllocId_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL");
        }
      }
    else
      {
        MR_Word ll_backend__llds_out__llds_out_instr__AllocId_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeAllocId_6, (MR_Integer) 0)));
        MR_String ll_backend__llds_out__llds_out_instr__MangledModuleName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 1)));
        MR_Word ll_backend__llds_out__llds_out_instr__AllocSiteMap_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)));
        MR_Word ll_backend__llds_out__llds_out_instr__AllocSiteSlotName_21;
        MR_Word ll_backend__llds_out__llds_out_instr__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 0)));
        MR_String ll_backend__llds_out__llds_out_instr__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 2)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 3)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 4)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 5)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
        MR_Word ll_backend__llds_out__llds_out_instr__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 8)));
        MR_Box ll_backend__llds_out__llds_out_instr__conv0_AllocSiteSlotName_21;

        {
          mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__llds_out__llds_out_instr__AllocSiteMap_20, ((MR_Box) (ll_backend__llds_out__llds_out_instr__AllocId_8)), &ll_backend__llds_out__llds_out_instr__conv0_AllocSiteSlotName_21);
        }
        ll_backend__llds_out__llds_out_instr__AllocSiteSlotName_21 = ((MR_Word) ll_backend__llds_out__llds_out_instr__conv0_AllocSiteSlotName_21);
        {
          ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__llds_out__llds_out_instr__MangledModuleName_19, ll_backend__llds_out__llds_out_instr__AllocSiteSlotName_21);
        }
      }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

        if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_instr__MaybeLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_instr__MaybeLabels_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 1)));

            {
              mercury__io__write_string_3_p_0((MR_String) " MR_AND\n\t\t");
            }
            if ((ll_backend__llds_out__llds_out_instr__MaybeLabel_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_ENTRY(MR_do_not_reached)");
                }
              }
            else
              {
                MR_Word ll_backend__llds_out__llds_out_instr__Label_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeLabel_7, (MR_Integer) 0)));

                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_LABEL_AP(");
                }
                {
                  ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_20);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_instr__MaybeLabels_8;

              ll_backend__llds_out__llds_out_instr__HeadVar__1_1 = ll_backend__llds_out__llds_out_instr__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

    if ((ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word ll_backend__llds_out__llds_out_instr__MaybeLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__llds_out__llds_out_instr__MaybeLabels_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 1)));

        if ((ll_backend__llds_out__llds_out_instr__MaybeLabel_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_ENTRY(MR_do_not_reached)");
            }
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_instr__Label_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeLabel_7, (MR_Integer) 0)));

            {
              mercury__io__write_string_3_p_0((MR_String) "MR_LABEL_AP(");
            }
            {
              ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_18);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
        {
          ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_p_0(ll_backend__llds_out__llds_out_instr__MaybeLabels_8);
        }
      }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_goto_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
  MR_Word ll_backend__llds_out__llds_out_instr__Target_7,
  MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_8)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

    switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Target_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__llds_out__llds_out_instr__Target_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_proceed();\n");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__UseMacro_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
              MR_String ll_backend__llds_out__llds_out_instr__V_174_174 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
              MR_String ll_backend__llds_out__llds_out_instr__V_175_175 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_180_180 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_181_181 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_182_182 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_183_183 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_184_184 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_185_185 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_186_186 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_187_187 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_188_188 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_189_189 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_190_190 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_191_191 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_192_192 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
              MR_Word ll_backend__llds_out__llds_out_instr__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 8)));

              switch (ll_backend__llds_out__llds_out_instr__UseMacro_19) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_GOTO(MR_ENTRY(MR_do_redo));\n");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_redo();\n");
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__UseMacro_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
              MR_String ll_backend__llds_out__llds_out_instr__V_195_195 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
              MR_String ll_backend__llds_out__llds_out_instr__V_196_196 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_201_201 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_202_202 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_203_203 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_204_204 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_205_205 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_206_206 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_207_207 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_208_208 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_209_209 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_210_210 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_211_211 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_212_212 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_213_213 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
              MR_Word ll_backend__llds_out__llds_out_instr__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 8)));

              switch (ll_backend__llds_out__llds_out_instr__UseMacro_129) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_GOTO(MR_ENTRY(MR_do_fail));\n");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_fail();\n");
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_GOTO(MR_ENTRY(MR_do_trace_redo_fail_shallow));\n");
              }
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_GOTO(MR_ENTRY(MR_do_trace_redo_fail_deep));\n");
              }
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_tailcall(MR_ENTRY(MR_do_not_reached),\n\t\t");
              }
              {
                ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__llds_out__llds_out_instr__Label_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Target_7, (MR_Integer) 0)));
          MR_Word ll_backend__llds_out__llds_out_instr__ProfileCalls_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
          MR_String ll_backend__llds_out__llds_out_instr__V_132_132 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
          MR_String ll_backend__llds_out__llds_out_instr__V_133_133 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
          MR_Word ll_backend__llds_out__llds_out_instr__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
          MR_Word ll_backend__llds_out__llds_out_instr__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
          MR_Word ll_backend__llds_out__llds_out_instr__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
          MR_Word ll_backend__llds_out__llds_out_instr__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)));
          MR_Word ll_backend__llds_out__llds_out_instr__V_138_138 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_139_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_140_140 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_141_141 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_142_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_143_143 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_144_144 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_145_145 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_146_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_147_147 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_148_148 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_149_149 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_150_150 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
          MR_Word ll_backend__llds_out__llds_out_instr__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 8)));

          if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Label_10)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ll_backend__llds_out__llds_out_instr__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Label_10, (MR_Integer) 0)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Label_10, (MR_Integer) 1)));

              switch (ll_backend__llds_out__llds_out_instr__V_216_216) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (ll_backend__llds_out__llds_out_instr__ProfileCalls_11) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "MR_np_localtailcall(");
                        }
                        {
                          ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_10);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ");\n");
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "MR_localtailcall(");
                        }
                        {
                          ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(ll_backend__llds_out__llds_out_instr__Label_10);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                        }
                        {
                          ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_8);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ");\n");
                        }
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 2:
                  switch (ll_backend__llds_out__llds_out_instr__ProfileCalls_11) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "MR_np_tailcall_ent(");
                        }
                        {
                          ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_10);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ");\n");
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "MR_tailcall(");
                        }
                        {
                          ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__Label_10);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                        }
                        {
                          ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_8);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ");\n");
                        }
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  switch (ll_backend__llds_out__llds_out_instr__ProfileCalls_11) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "MR_np_tailcall_ent(");
                        }
                        {
                          ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_10);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ");\n");
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "MR_tailcall(");
                        }
                        {
                          ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__Label_10);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                        }
                        {
                          ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_8);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ");\n");
                        }
                      }
                      break;
                  }
                  break;
              }
            }
          else
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_GOTO_LAB(");
              }
              {
                ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__llds_out__llds_out_instr__ProcLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_instr__Target_7, (MR_Integer) 0)));
          MR_Word ll_backend__llds_out__llds_out_instr__ProfileCalls_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
          MR_String ll_backend__llds_out__llds_out_instr__V_153_153 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
          MR_String ll_backend__llds_out__llds_out_instr__V_154_154 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
          MR_Word ll_backend__llds_out__llds_out_instr__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
          MR_Word ll_backend__llds_out__llds_out_instr__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
          MR_Word ll_backend__llds_out__llds_out_instr__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
          MR_Word ll_backend__llds_out__llds_out_instr__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)));
          MR_Word ll_backend__llds_out__llds_out_instr__V_159_159 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_160_160 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_161_161 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_162_162 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_163_163 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_164_164 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_165_165 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_166_166 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_167_167 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_168_168 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_169_169 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_170_170 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
          MR_Word ll_backend__llds_out__llds_out_instr__V_171_171 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
          MR_Word ll_backend__llds_out__llds_out_instr__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 8)));

          switch (ll_backend__llds_out__llds_out_instr__ProfileCalls_128) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_np_tailcall_ent(");
                }
                {
                  backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__ProcLabel_17);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ");\n");
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_tailcall(MR_ENTRY(");
                }
                {
                  backend_libs__name_mangle__output_proc_label_3_p_0(ll_backend__llds_out__llds_out_instr__ProcLabel_17);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "),\n\t\t");
                }
                {
                  ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_8);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ");\n");
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Target_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Last_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Target_7, (MR_Integer) 1)));

              switch (ll_backend__llds_out__llds_out_instr__Last_18) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_succeed();\n");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_succeed_discard();\n");
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Variant_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Target_7, (MR_Integer) 1)));
              MR_String ll_backend__llds_out__llds_out_instr__V_46_46;

              {
                mercury__io__write_string_3_p_0((MR_String) "MR_set_prof_ho_caller_proc(");
              }
              {
                ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n\t");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_np_tailcall_ent(do_call_closure_");
              }
              {
                ll_backend__llds_out__llds_out_instr__V_46_46 = ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_f_0(ll_backend__llds_out__llds_out_instr__Variant_20);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__V_46_46);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ll_backend__llds_out__llds_out_instr__V_35_35;
              MR_Word ll_backend__llds_out__llds_out_instr__Variant_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Target_7, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "MR_set_prof_ho_caller_proc(");
              }
              {
                ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n\t");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_np_tailcall_ent(do_call_class_method_");
              }
              {
                ll_backend__llds_out__llds_out_instr__V_35_35 = ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_f_0(ll_backend__llds_out__llds_out_instr__Variant_130);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__V_35_35);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
  MR_Word ll_backend__llds_out__llds_out_instr__Label_7,
  MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
    MR_Word ll_backend__llds_out__llds_out_instr__ProfileTime_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
    MR_String ll_backend__llds_out__llds_out_instr__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
    MR_String ll_backend__llds_out__llds_out_instr__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
    MR_Word ll_backend__llds_out__llds_out_instr__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
    MR_Word ll_backend__llds_out__llds_out_instr__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
    MR_Word ll_backend__llds_out__llds_out_instr__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
    MR_Word ll_backend__llds_out__llds_out_instr__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)));
    MR_Word ll_backend__llds_out__llds_out_instr__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__llds_out__llds_out_instr__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 8)));
    MR_Word ll_backend__llds_out__llds_out_instr__TypeCtorInfo_47_47;
    MR_Word ll_backend__llds_out__llds_out_instr__ContLabelSet_11;
    MR_Word ll_backend__llds_out__llds_out_instr__V_41_41;
    MR_Word ll_backend__llds_out__llds_out_instr__V_42_42;
    MR_Word ll_backend__llds_out__llds_out_instr__V_43_43;

    ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__ProfileTime_10 == (MR_Integer) 1);
    if (ll_backend__llds_out__llds_out_instr__succeeded)
      {
        ll_backend__llds_out__llds_out_instr__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 0)));
        ll_backend__llds_out__llds_out_instr__ContLabelSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 1)));
        ll_backend__llds_out__llds_out_instr__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 2)));
        ll_backend__llds_out__llds_out_instr__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 3)));
        ll_backend__llds_out__llds_out_instr__TypeCtorInfo_47_47 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
        {
          ll_backend__llds_out__llds_out_instr__succeeded = mercury__set_tree234__contains_2_p_0(ll_backend__llds_out__llds_out_instr__TypeCtorInfo_47_47, ll_backend__llds_out__llds_out_instr__ContLabelSet_11, ((MR_Box) (ll_backend__llds_out__llds_out_instr__Label_7)));
        }
      }
    if (ll_backend__llds_out__llds_out_instr__succeeded)
      {
        MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 0)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 1)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 2)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 3)));

        {
          mercury__io__write_string_3_p_0((MR_String) "\tMR_update_prof_current_proc(MR_LABEL_AP(");
        }
        {
          ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_12);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "));\n");
        }
      }
    else
      {
      }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_defn_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ll_backend__llds_out__llds_out_instr__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 0)));

        switch (ll_backend__llds_out__llds_out_instr__V_50_50) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_def_local(");
              }
              {
                backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__V_49_49);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")\n");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__V_11_11;

              {
                mercury__io__write_string_3_p_0((MR_String) "MR_define_entry(");
              }
              {
                ll_backend__llds_out__llds_out_instr__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_11_11, 0) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_11_11, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_49_49));
              }
              {
                ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(ll_backend__llds_out__llds_out_instr__V_11_11);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_def_static(");
              }
              {
                backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__V_49_49);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")\n");
              }
            }
            break;
        }
      }
    else
      {
        MR_Integer ll_backend__llds_out__llds_out_instr__Num_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__llds_out__llds_out_instr__ProcLabel_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 1)));

        {
          mercury__io__write_string_3_p_0((MR_String) "MR_def_label(");
        }
        {
          backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__ProcLabel_37);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",");
        }
        {
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Num_36);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ")\n");
        }
      }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_live_value_type_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__1_1)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

    switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__llds_out__llds_out_instr__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "type succip");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "type curfr");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "type maxfr");
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "type redoip");
              }
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "type redofr");
              }
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "type hp");
              }
            }
            break;
          case (MR_Integer) 6:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "type trail_ptr");
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "type ticket");
              }
            }
            break;
          case (MR_Integer) 8:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "type region ite");
              }
            }
            break;
          case (MR_Integer) 9:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "type region disj");
              }
            }
            break;
          case (MR_Integer) 10:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "type region commit");
              }
            }
            break;
          case (MR_Integer) 11:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "unwanted");
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__llds_out__llds_out_instr__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 0)));
          MR_String ll_backend__llds_out__llds_out_instr__Name_65 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word ll_backend__llds_out__llds_out_instr__Type_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__1_1, (MR_Integer) 2)));
          MR_Integer ll_backend__llds_out__llds_out_instr__VarInt_69;
          MR_Word ll_backend__llds_out__llds_out_instr__NewTVarset_70;

          {
            mercury__io__write_string_3_p_0((MR_String) "var(");
          }
          {
            mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__llds_out__llds_out_instr__Var_64, &ll_backend__llds_out__llds_out_instr__VarInt_69);
          }
          {
            mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__VarInt_69);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ", ");
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__Name_65);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ", ");
          }
          {
            mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &ll_backend__llds_out__llds_out_instr__NewTVarset_70);
          }
          {
            parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(ll_backend__llds_out__llds_out_instr__NewTVarset_70, (MR_Integer) 0, ll_backend__llds_out__llds_out_instr__Type_66);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_layout_locns_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_instr__Locn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_instr__Locns_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));

            if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Locn_10)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word ll_backend__llds_out__llds_out_instr__Lval_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Locn_10, (MR_Integer) 0)));

                {
                  ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Lval_26);
                }
              }
            else
              {
                MR_Integer ll_backend__llds_out__llds_out_instr__Offset_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Locn_10, (MR_Integer) 1)));
                MR_Word ll_backend__llds_out__llds_out_instr__Lval_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Locn_10, (MR_Integer) 0)));

                {
                  mercury__io__write_string_3_p_0((MR_String) "offset ");
                }
                {
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Offset_27);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) " from ");
                }
                {
                  ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Lval_35);
                }
              }
            if ((ll_backend__llds_out__llds_out_instr__Locns_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) " and ");
                }
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Locns_11;

                  ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_instr__Var_10;
            MR_Word ll_backend__llds_out__llds_out_instr__LocnSet_11;
            MR_Word ll_backend__llds_out__llds_out_instr__VarLocnSets_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer ll_backend__llds_out__llds_out_instr__VarInt_14;
            MR_Word ll_backend__llds_out__llds_out_instr__Locns_15;
            MR_Word ll_backend__llds_out__llds_out_instr__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));

            ll_backend__llds_out__llds_out_instr__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_18_18, (MR_Integer) 0)));
            ll_backend__llds_out__llds_out_instr__LocnSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_18_18, (MR_Integer) 1)));
            {
              mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, ll_backend__llds_out__llds_out_instr__Var_10, &ll_backend__llds_out__llds_out_instr__VarInt_14);
            }
            {
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__VarInt_14);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " - ");
            }
            {
              mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0, ll_backend__llds_out__llds_out_instr__LocnSet_11, &ll_backend__llds_out__llds_out_instr__Locns_15);
            }
            {
              ll_backend__llds_out__llds_out_instr__output_layout_locns_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Locns_15);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "  ");
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__VarLocnSets_12;

              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_instr__LiveInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_instr__LiveInfos_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__llds_out__llds_out_instr__Locn_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LiveInfo_10, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_instr__LiveValueType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LiveInfo_10, (MR_Integer) 1)));
            MR_Word ll_backend__llds_out__llds_out_instr__TypeParams_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LiveInfo_10, (MR_Integer) 2)));
            MR_Word ll_backend__llds_out__llds_out_instr__TypeParamList_16;

            {
              mercury__io__write_string_3_p_0((MR_String) "*\t");
            }
            if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Locn_13)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word ll_backend__llds_out__llds_out_instr__Lval_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Locn_13, (MR_Integer) 0)));

                {
                  ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Lval_38);
                }
              }
            else
              {
                MR_Integer ll_backend__llds_out__llds_out_instr__Offset_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Locn_13, (MR_Integer) 1)));
                MR_Word ll_backend__llds_out__llds_out_instr__Lval_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Locn_13, (MR_Integer) 0)));

                {
                  mercury__io__write_string_3_p_0((MR_String) "offset ");
                }
                {
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Offset_39);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) " from ");
                }
                {
                  ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Lval_47);
                }
              }
            {
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
            {
              ll_backend__llds_out__llds_out_instr__output_live_value_type_3_p_0(ll_backend__llds_out__llds_out_instr__LiveValueType_14);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
            {
              mercury__map__to_assoc_list_2_p_0((MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[2], (MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[3], ll_backend__llds_out__llds_out_instr__TypeParams_15, &ll_backend__llds_out__llds_out_instr__TypeParamList_16);
            }
            {
              ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__TypeParamList_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__LiveInfos_11;

              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
  MR_Word ll_backend__llds_out__llds_out_instr__LiveVals_6)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
    MR_Word ll_backend__llds_out__llds_out_instr__AutoComments_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 0)));
    MR_String ll_backend__llds_out__llds_out_instr__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 1)));
    MR_String ll_backend__llds_out__llds_out_instr__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 2)));
    MR_Word ll_backend__llds_out__llds_out_instr__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 3)));
    MR_Word ll_backend__llds_out__llds_out_instr__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 4)));
    MR_Word ll_backend__llds_out__llds_out_instr__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 5)));
    MR_Word ll_backend__llds_out__llds_out_instr__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 6)));
    MR_Word ll_backend__llds_out__llds_out_instr__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__llds_out__llds_out_instr__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_5, (MR_Integer) 8)));

    switch (ll_backend__llds_out__llds_out_instr__AutoComments_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "/*\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "* Garbage collection livevals info\n");
          }
          {
            ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__LiveVals_6);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "*/\n");
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_call_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
  MR_Word ll_backend__llds_out__llds_out_instr__Target_8,
  MR_Word ll_backend__llds_out__llds_out_instr__Continuation_9,
  MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_10)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
    MR_Word ll_backend__llds_out__llds_out_instr__ProfileCall_14;
    MR_Word ll_backend__llds_out__llds_out_instr__Label_15;
    MR_Word ll_backend__llds_out__llds_out_instr__V_29_29;

    {
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Target_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Target_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
      ll_backend__llds_out__llds_out_instr__succeeded = MR_TRUE;
    else
    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Target_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Target_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
      ll_backend__llds_out__llds_out_instr__succeeded = MR_TRUE;
    else
      ll_backend__llds_out__llds_out_instr__succeeded = MR_FALSE;
    if (ll_backend__llds_out__llds_out_instr__succeeded)
      {
        ll_backend__llds_out__llds_out_instr__ProfileCall_14 = (MR_Integer) 0;
        {
          mercury__io__write_string_3_p_0((MR_String) "MR_set_prof_ho_caller_proc(");
        }
        {
          ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_10);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ");\n\t");
        }
      }
    else
      {
        MR_Word ll_backend__llds_out__llds_out_instr__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 0)));
        MR_String ll_backend__llds_out__llds_out_instr__V_112_112 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 1)));
        MR_String ll_backend__llds_out__llds_out_instr__V_113_113 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 2)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 3)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 4)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 5)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)));
        MR_Word ll_backend__llds_out__llds_out_instr__V_118_118 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_119_119 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_120_120 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_121_121 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_122_122 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_instr__V_123_123;
        MR_Word ll_backend__llds_out__llds_out_instr__V_124_124;
        MR_Word ll_backend__llds_out__llds_out_instr__V_125_125;
        MR_Word ll_backend__llds_out__llds_out_instr__V_126_126;
        MR_Word ll_backend__llds_out__llds_out_instr__V_127_127;
        MR_Word ll_backend__llds_out__llds_out_instr__V_128_128;
        MR_Word ll_backend__llds_out__llds_out_instr__V_129_129;
        MR_Word ll_backend__llds_out__llds_out_instr__V_130_130;
        MR_Word ll_backend__llds_out__llds_out_instr__V_131_131;

        ll_backend__llds_out__llds_out_instr__ProfileCall_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        ll_backend__llds_out__llds_out_instr__V_123_123 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        ll_backend__llds_out__llds_out_instr__V_124_124 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
        ll_backend__llds_out__llds_out_instr__V_125_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
        ll_backend__llds_out__llds_out_instr__V_126_126 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
        ll_backend__llds_out__llds_out_instr__V_127_127 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
        ll_backend__llds_out__llds_out_instr__V_128_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
        ll_backend__llds_out__llds_out_instr__V_129_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
        ll_backend__llds_out__llds_out_instr__V_130_130 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
        ll_backend__llds_out__llds_out_instr__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 8)));
      }
    ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Target_8)) == (MR_mktag((MR_Integer) 1)));
    if (ll_backend__llds_out__llds_out_instr__succeeded)
      {
        ll_backend__llds_out__llds_out_instr__Label_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Target_8, (MR_Integer) 0)));
        {
          ll_backend__llds_out__llds_out_instr__V_29_29 = ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_f_0(ll_backend__llds_out__llds_out_instr__Label_15);
        }
        ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_29_29 == (MR_Integer) 0);
      }
    if (ll_backend__llds_out__llds_out_instr__succeeded)
      switch (ll_backend__llds_out__llds_out_instr__ProfileCall_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String ll_backend__llds_out__llds_out_instr__BaseStr_16;
            MR_Word ll_backend__llds_out__llds_out_instr__NeedsPrefix_17;
            MR_Word ll_backend__llds_out__llds_out_instr__Wrapper_18;

            {
              ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_p_0(ll_backend__llds_out__llds_out_instr__Continuation_9, &ll_backend__llds_out__llds_out_instr__BaseStr_16, &ll_backend__llds_out__llds_out_instr__NeedsPrefix_17, &ll_backend__llds_out__llds_out_instr__Wrapper_18);
            }
            switch (ll_backend__llds_out__llds_out_instr__NeedsPrefix_17) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_noprof_localcall(");
                  }
                  {
                    ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_15);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                  }
                  {
                    mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__BaseStr_16);
                  }
                  {
                    ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_p_0(ll_backend__llds_out__llds_out_instr__BaseStr_16, ll_backend__llds_out__llds_out_instr__NeedsPrefix_17, ll_backend__llds_out__llds_out_instr__Wrapper_18);
                  }
                }
                break;
              case (MR_Integer) 1:
                switch (ll_backend__llds_out__llds_out_instr__Wrapper_18) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_np_localcall_ent(");
                      }
                      {
                        ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_15);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                      }
                      {
                        mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__BaseStr_16);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_np_localcall_lab(");
                      }
                      {
                        ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_15);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                      }
                      {
                        mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__BaseStr_16);
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_np_localcall(");
                      }
                      {
                        ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__Label_15);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                      }
                      {
                        ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_p_0(ll_backend__llds_out__llds_out_instr__BaseStr_16, ll_backend__llds_out__llds_out_instr__NeedsPrefix_17, ll_backend__llds_out__llds_out_instr__Wrapper_18);
                      }
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_localcall(");
            }
            {
              ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(ll_backend__llds_out__llds_out_instr__Label_15);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
            }
            {
              ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__Continuation_9);
            }
          }
          break;
      }
    else
      {
        MR_Word ll_backend__llds_out__llds_out_instr__ContLabel_19;
        MR_Word ll_backend__llds_out__llds_out_instr__V_61_61;

        ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Continuation_9)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__llds_out__llds_out_instr__succeeded)
          {
            ll_backend__llds_out__llds_out_instr__ContLabel_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Continuation_9, (MR_Integer) 0)));
            {
              ll_backend__llds_out__llds_out_instr__V_61_61 = ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_f_0(ll_backend__llds_out__llds_out_instr__ContLabel_19);
            }
            ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_61_61 == (MR_Integer) 0);
          }
        if (ll_backend__llds_out__llds_out_instr__succeeded)
          switch (ll_backend__llds_out__llds_out_instr__ProfileCall_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String ll_backend__llds_out__llds_out_instr__BaseStr_102;
                MR_Word ll_backend__llds_out__llds_out_instr__NeedsPrefix_103;
                MR_Word ll_backend__llds_out__llds_out_instr__Wrapper_104;

                {
                  ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_p_0(ll_backend__llds_out__llds_out_instr__Target_8, &ll_backend__llds_out__llds_out_instr__BaseStr_102, &ll_backend__llds_out__llds_out_instr__NeedsPrefix_103, &ll_backend__llds_out__llds_out_instr__Wrapper_104);
                }
                switch (ll_backend__llds_out__llds_out_instr__NeedsPrefix_103) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_noprof_call_localret(");
                      }
                      {
                        ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_p_0(ll_backend__llds_out__llds_out_instr__BaseStr_102, ll_backend__llds_out__llds_out_instr__NeedsPrefix_103, ll_backend__llds_out__llds_out_instr__Wrapper_104);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                      }
                      {
                        ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(ll_backend__llds_out__llds_out_instr__ContLabel_19);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    switch (ll_backend__llds_out__llds_out_instr__Wrapper_104) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            mercury__io__write_string_3_p_0((MR_String) "MR_np_call_localret_ent(");
                          }
                          {
                            mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__BaseStr_102);
                          }
                          {
                            mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                          }
                          {
                            ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__ContLabel_19);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_instr", (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_call\'/6", (MR_String) "calling label");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          {
                            mercury__io__write_string_3_p_0((MR_String) "MR_np_call_localret(");
                          }
                          {
                            ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_p_0(ll_backend__llds_out__llds_out_instr__BaseStr_102, ll_backend__llds_out__llds_out_instr__NeedsPrefix_103, ll_backend__llds_out__llds_out_instr__Wrapper_104);
                          }
                          {
                            mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                          }
                          {
                            ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_instr__ContLabel_19);
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_call_localret(");
                }
                {
                  ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__Target_8);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                }
                {
                  ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(ll_backend__llds_out__llds_out_instr__ContLabel_19);
                }
              }
              break;
          }
        else
          {
            switch (ll_backend__llds_out__llds_out_instr__ProfileCall_14) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_noprof_call(");
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_call(");
                  }
                }
                break;
            }
            {
              ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__Target_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
            }
            {
              ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__Continuation_9);
            }
          }
      }
    switch (ll_backend__llds_out__llds_out_instr__ProfileCall_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
          }
          {
            ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__CallerLabel_10);
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ");\n");
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_p_0(
  MR_Integer ll_backend__llds_out__llds_out_instr__Next_6,
  MR_Integer ll_backend__llds_out__llds_out_instr__Max_7,
  MR_String ll_backend__llds_out__llds_out_instr__Type_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__Next_6 <= ll_backend__llds_out__llds_out_instr__Max_7);

        if (ll_backend__llds_out__llds_out_instr__succeeded)
          {
            MR_Integer ll_backend__llds_out__llds_out_instr__V_19_19;

            ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__Next_6 > (MR_Integer) 1);
            if (ll_backend__llds_out__llds_out_instr__succeeded)
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
              }
            else
              {
              }
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_temp");
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__Type_8);
            }
            {
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Next_6);
            }
            ll_backend__llds_out__llds_out_instr__V_19_19 = (ll_backend__llds_out__llds_out_instr__Next_6 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer ll_backend__llds_out__llds_out_instr__Next__tmp_copy_6 = ll_backend__llds_out__llds_out_instr__V_19_19;

              ll_backend__llds_out__llds_out_instr__Next_6 = ll_backend__llds_out__llds_out_instr__Next__tmp_copy_6;
            }
            continue;
          }
        else
          {
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_block_end_2_p_0(void)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "\t}\n");
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_block_start_4_p_0(
  MR_Integer ll_backend__llds_out__llds_out_instr__TempR_5,
  MR_Integer ll_backend__llds_out__llds_out_instr__TempF_6)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "\t{\n");
    }
    ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__TempR_5 > (MR_Integer) 0);
    if (ll_backend__llds_out__llds_out_instr__succeeded)
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "\tMR_Word ");
        }
        {
          ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_p_0((MR_Integer) 1, ll_backend__llds_out__llds_out_instr__TempR_5, (MR_String) "r");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ";\n");
        }
      }
    else
      {
      }
    ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__TempF_6 > (MR_Integer) 0);
    if (ll_backend__llds_out__llds_out_instr__succeeded)
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "\tMR_Float ");
        }
        {
          ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_p_0((MR_Integer) 1, ll_backend__llds_out__llds_out_instr__TempF_6, (MR_String) "f");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ";\n");
        }
      }
    else
      {
      }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_livevals_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_instr__Lval_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_instr__Lvals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));

            {
              mercury__io__write_string_3_p_0((MR_String) "*\t");
            }
            {
              ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Lval_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Lvals_11;

              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_comment_chars_4_p_0(
  MR_Char ll_backend__llds_out__llds_out_instr__HeadVar__1_1,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Char ll_backend__llds_out__llds_out_instr__Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_instr__Chars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));

            ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == (MR_Char) 47);
            if (ll_backend__llds_out__llds_out_instr__succeeded)
              ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__Char_10 == (MR_Char) 42);
            if (ll_backend__llds_out__llds_out_instr__succeeded)
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) " *");
                }
              }
            else
              {
                ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__HeadVar__1_1 == (MR_Char) 42);
                if (ll_backend__llds_out__llds_out_instr__succeeded)
                  ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__Char_10 == (MR_Char) 47);
                if (ll_backend__llds_out__llds_out_instr__succeeded)
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) " /");
                    }
                  }
                else
                  {
                    mercury__io__write_char_3_p_0(ll_backend__llds_out__llds_out_instr__Char_10);
                  }
              }
            /* direct tailcall eliminated */
            {
              MR_Char ll_backend__llds_out__llds_out_instr__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_instr__Char_10;
              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Chars_11;

              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
              ll_backend__llds_out__llds_out_instr__HeadVar__1_1 = ll_backend__llds_out__llds_out_instr__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_3(
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
    MR_Box ll_backend__llds_out__llds_out_instr__closure = ll_backend__llds_out__llds_out_instr__closure_arg;

    {
      ll_backend__llds_out__llds_out_instr__succeeded = mercury__int__even_1_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 3))));
    }
    return ll_backend__llds_out__llds_out_instr__succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_2(
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_3)
{
  {
    MR_Box ll_backend__llds_out__llds_out_instr__closure = ll_backend__llds_out__llds_out_instr__closure_arg;

    {
      ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_1(
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_3)
{
  {
    MR_Box ll_backend__llds_out__llds_out_instr__closure = ll_backend__llds_out__llds_out_instr__closure_arg;

    {
      ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_7,
  MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

    switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__llds_out__llds_out_instr__Instr_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "\tMR_prune_ticket();\n");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "\tMR_discard_ticket();\n");
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ll_backend__llds_out__llds_out_instr__Comment_10 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)));
          MR_Word ll_backend__llds_out__llds_out_instr__CommentChars_11;

          {
            mercury__io__write_string_3_p_0((MR_String) "/*");
          }
          {
            mercury__string__to_char_list_2_p_0(ll_backend__llds_out__llds_out_instr__Comment_10, &ll_backend__llds_out__llds_out_instr__CommentChars_11);
          }
          {
            ll_backend__llds_out__llds_out_instr__output_comment_chars_4_p_0((MR_Char) 42, ll_backend__llds_out__llds_out_instr__CommentChars_11);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "*/\n");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__llds_out__llds_out_instr__LiveVals_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)));
          MR_Word ll_backend__llds_out__llds_out_instr__LiveValsList_13;

          {
            mercury__io__write_string_3_p_0((MR_String) "/*\n* Live lvalues:\n");
          }
          {
            mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__llds_out__llds_out_instr__LiveVals_12, &ll_backend__llds_out__llds_out_instr__LiveValsList_13);
          }
          {
            ll_backend__llds_out__llds_out_instr__output_livevals_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__LiveValsList_13);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "*/\n");
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__TypeCtorInfo_616_616;
              MR_Integer ll_backend__llds_out__llds_out_instr__TempR_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
              MR_Integer ll_backend__llds_out__llds_out_instr__TempF_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__Instrs_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_17;
              MR_Word ll_backend__llds_out__llds_out_instr__ContLabels_18;
              MR_Word ll_backend__llds_out__llds_out_instr__BlockLabelOutputInfo_21;
              MR_Word ll_backend__llds_out__llds_out_instr__V_463_463;
              MR_Word ll_backend__llds_out__llds_out_instr__V_464_464;
              MR_Word ll_backend__llds_out__llds_out_instr__V_19_19;
              MR_Word ll_backend__llds_out__llds_out_instr__V_20_20;

              {
                ll_backend__llds_out__llds_out_instr__output_block_start_4_p_0(ll_backend__llds_out__llds_out_instr__TempR_14, ll_backend__llds_out__llds_out_instr__TempF_15);
              }
              ll_backend__llds_out__llds_out_instr__CallerLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 0)));
              ll_backend__llds_out__llds_out_instr__ContLabels_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 1)));
              ll_backend__llds_out__llds_out_instr__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 2)));
              ll_backend__llds_out__llds_out_instr__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 3)));
              ll_backend__llds_out__llds_out_instr__TypeCtorInfo_616_616 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
              {
                ll_backend__llds_out__llds_out_instr__V_463_463 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_instr__TypeCtorInfo_616_616);
              }
              {
                ll_backend__llds_out__llds_out_instr__V_464_464 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_instr__TypeCtorInfo_616_616);
              }
              {
                ll_backend__llds_out__llds_out_instr__BlockLabelOutputInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__BlockLabelOutputInfo_21, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__CallerLabel_17));
                MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__BlockLabelOutputInfo_21, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__ContLabels_18));
                MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__BlockLabelOutputInfo_21, 2) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_463_463));
                MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__BlockLabelOutputInfo_21, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_464_464));
              }
              {
                ll_backend__llds_out__llds_out_instr__output_instruction_list_6_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Instrs_16, ll_backend__llds_out__llds_out_instr__BlockLabelOutputInfo_21, (MR_Integer) 0);
              }
              {
                ll_backend__llds_out__llds_out_instr__output_block_end_2_p_0();
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Lval_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__Rval_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__Type_24;

              {
                mercury__io__write_string_3_p_0((MR_String) "\t");
              }
              {
                ll_backend__llds_out__llds_out_data__output_lval_for_assign_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_22, &ll_backend__llds_out__llds_out_instr__Type_24);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " = ");
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_23, ll_backend__llds_out__llds_out_instr__Type_24);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ";\n");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Lval_629 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__Rval_630 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__Type_631;

              {
                mercury__io__write_string_3_p_0((MR_String) "\t");
              }
              {
                ll_backend__llds_out__llds_out_data__output_lval_for_assign_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_629, &ll_backend__llds_out__llds_out_instr__Type_631);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " = ");
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_630, ll_backend__llds_out__llds_out_instr__Type_631);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ";\n");
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Target_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__ContLabel_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__LiveVals_479 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_480 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 0)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 4)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 5)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 6)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_522_522 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_523_523 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_524_524 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 3)));

              {
                ll_backend__llds_out__llds_out_instr__output_call_6_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Target_25, ll_backend__llds_out__llds_out_instr__ContLabel_26, ll_backend__llds_out__llds_out_instr__CallerLabel_480);
              }
              {
                ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__LiveVals_479);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__FrameInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__MaybeFailCont_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));

              if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__FrameInfo_33)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_String ll_backend__llds_out__llds_out_instr__Msg_35 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__FrameInfo_33, (MR_Integer) 0)));
                  MR_Integer ll_backend__llds_out__llds_out_instr__Num_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__FrameInfo_33, (MR_Integer) 1)));

                  if ((ll_backend__llds_out__llds_out_instr__MaybeFailCont_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "\tMR_mkframe_no_redoip(\"");
                      }
                      {
                        backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__llds_out__llds_out_instr__Msg_35);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) "\", ");
                      }
                      {
                        mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Num_36);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ");\n");
                      }
                    }
                  else
                    {
                      MR_Word ll_backend__llds_out__llds_out_instr__FailCont_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeFailCont_34, (MR_Integer) 0)));

                      {
                        mercury__io__write_string_3_p_0((MR_String) "\tMR_mkframe(\"");
                      }
                      {
                        backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__llds_out__llds_out_instr__Msg_35);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) "\", ");
                      }
                      {
                        mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__Num_36);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                      }
                      {
                        ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__FailCont_37);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ");\n");
                      }
                    }
                }
              else
                {
                  MR_Word ll_backend__llds_out__llds_out_instr__Kind_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__FrameInfo_33, (MR_Integer) 0)));

                  switch (ll_backend__llds_out__llds_out_instr__Kind_38) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "\tMR_mkdettempframe(");
                        }
                        if ((ll_backend__llds_out__llds_out_instr__MaybeFailCont_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_instr", (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction\'/5", (MR_String) "no failcont");
                              return;
                            }
                          }
                        else
                          {
                            MR_Word ll_backend__llds_out__llds_out_instr__FailCont_481 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeFailCont_34, (MR_Integer) 0)));

                            {
                              ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__FailCont_481);
                            }
                          }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ");\n");
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "\tMR_mktempframe(");
                        }
                        if ((ll_backend__llds_out__llds_out_instr__MaybeFailCont_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_instr", (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction\'/5", (MR_String) "no failcont");
                              return;
                            }
                          }
                        else
                          {
                            MR_Word ll_backend__llds_out__llds_out_instr__FailCont_484 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeFailCont_34, (MR_Integer) 0)));

                            {
                              ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__FailCont_484);
                            }
                          }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ");\n");
                        }
                      }
                      break;
                  }
                }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Label_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__LocalThreadEngineBase_40;
              MR_Word ll_backend__llds_out__llds_out_instr__V_525_525;
              MR_String ll_backend__llds_out__llds_out_instr__V_526_526;
              MR_String ll_backend__llds_out__llds_out_instr__V_527_527;
              MR_Word ll_backend__llds_out__llds_out_instr__V_528_528;
              MR_Word ll_backend__llds_out__llds_out_instr__V_529_529;
              MR_Word ll_backend__llds_out__llds_out_instr__V_530_530;
              MR_Word ll_backend__llds_out__llds_out_instr__V_531_531;
              MR_Word ll_backend__llds_out__llds_out_instr__V_532_532;
              MR_Word ll_backend__llds_out__llds_out_instr__V_533_533;
              MR_Word ll_backend__llds_out__llds_out_instr__V_534_534;
              MR_Word ll_backend__llds_out__llds_out_instr__V_535_535;
              MR_Word ll_backend__llds_out__llds_out_instr__V_536_536;
              MR_Word ll_backend__llds_out__llds_out_instr__V_537_537;
              MR_Word ll_backend__llds_out__llds_out_instr__V_538_538;
              MR_Word ll_backend__llds_out__llds_out_instr__V_539_539;
              MR_Word ll_backend__llds_out__llds_out_instr__V_540_540;
              MR_Word ll_backend__llds_out__llds_out_instr__V_541_541;
              MR_Word ll_backend__llds_out__llds_out_instr__V_542_542;
              MR_Word ll_backend__llds_out__llds_out_instr__V_543_543;
              MR_Word ll_backend__llds_out__llds_out_instr__V_544_544;
              MR_Word ll_backend__llds_out__llds_out_instr__V_545_545;

              {
                ll_backend__llds_out__llds_out_instr__output_label_defn_3_p_0(ll_backend__llds_out__llds_out_instr__Label_39);
              }
              ll_backend__llds_out__llds_out_instr__V_525_525 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
              ll_backend__llds_out__llds_out_instr__V_526_526 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
              ll_backend__llds_out__llds_out_instr__V_527_527 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
              ll_backend__llds_out__llds_out_instr__V_528_528 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
              ll_backend__llds_out__llds_out_instr__V_529_529 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
              ll_backend__llds_out__llds_out_instr__V_530_530 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
              ll_backend__llds_out__llds_out_instr__V_531_531 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)));
              ll_backend__llds_out__llds_out_instr__V_532_532 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_instr__V_533_533 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_instr__V_534_534 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_instr__V_535_535 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_instr__LocalThreadEngineBase_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_instr__V_536_536 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_instr__V_537_537 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_instr__V_538_538 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_instr__V_539_539 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_instr__V_540_540 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_instr__V_541_541 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_instr__V_542_542 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_instr__V_543_543 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_instr__V_544_544 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
              ll_backend__llds_out__llds_out_instr__V_545_545 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 8)));
              switch (ll_backend__llds_out__llds_out_instr__LocalThreadEngineBase_40) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\tMR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE\n");
                    }
                  }
                  break;
              }
              {
                ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Label_39, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__CodeAddr_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_489 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 0)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_546_546 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_547_547 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_548_548 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 3)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\t");
              }
              {
                ll_backend__llds_out__llds_out_instr__output_goto_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__CodeAddr_41, ll_backend__llds_out__llds_out_instr__CallerLabel_489);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__MaybeLabels_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__Rval_490 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\tMR_COMPUTED_GOTO(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_490, (MR_Integer) 8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
              }
              {
                ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_p_0(ll_backend__llds_out__llds_out_instr__MaybeLabels_42);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String ll_backend__llds_out__llds_out_instr__C_Code_32 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\t");
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__C_Code_32);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_491 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 0)));
              MR_Word ll_backend__llds_out__llds_out_instr__Rval_492 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__Target_493 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_549_549 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_550_550 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_551_551 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_8, (MR_Integer) 3)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\tif (");
              }
              {
                ll_backend__llds_out__llds_out_data__output_test_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_492);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ") {\n\t\t");
              }
              {
                ll_backend__llds_out__llds_out_instr__output_goto_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Target_493, ll_backend__llds_out__llds_out_instr__CallerLabel_491);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\t}\n");
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Lval_494 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\tMR_save_maxfr(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_494);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Lval_495 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\tMR_restore_maxfr(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_495);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__MaybeTag_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__MaybeOffset_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_instr__SizeRval_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 4)));
              MR_Word ll_backend__llds_out__llds_out_instr__MaybeAllocId_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 5)));
              MR_Word ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 6)));
              MR_Word ll_backend__llds_out__llds_out_instr__MaybeRegionRval_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 7)));
              MR_Word ll_backend__llds_out__llds_out_instr__MaybeReuse_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 8)));
              MR_Word ll_backend__llds_out__llds_out_instr__Lval_499 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\t");
              }
              if ((ll_backend__llds_out__llds_out_instr__MaybeReuse_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  ll_backend__llds_out__llds_out_instr__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_99_114_95_104_112_95_110_111_95_114_101_117_115_101_95_95_91_57_93_95_48_11_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_499, ll_backend__llds_out__llds_out_instr__MaybeTag_43, ll_backend__llds_out__llds_out_instr__MaybeOffset_44, ll_backend__llds_out__llds_out_instr__SizeRval_45, ll_backend__llds_out__llds_out_instr__MaybeAllocId_46, ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_47, ll_backend__llds_out__llds_out_instr__MaybeRegionRval_48);
                }
              else
                {
                  MR_Word ll_backend__llds_out__llds_out_instr__ReuseRval_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeReuse_49, (MR_Integer) 0)));
                  MR_Word ll_backend__llds_out__llds_out_instr__MaybeFlagLval_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeReuse_49, (MR_Integer) 1)));

                  if ((ll_backend__llds_out__llds_out_instr__MaybeTag_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    if ((ll_backend__llds_out__llds_out_instr__MaybeFlagLval_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "MR_reuse_or_alloc_heap(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_499);
                        }
                      }
                    else
                      {
                        MR_Word ll_backend__llds_out__llds_out_instr__FlagLval_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeFlagLval_51, (MR_Integer) 0)));

                        {
                          mercury__io__write_string_3_p_0((MR_String) "MR_reuse_or_alloc_heap_flag(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_499);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ", ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__FlagLval_52);
                        }
                      }
                  else
                    {
                      MR_Integer ll_backend__llds_out__llds_out_instr__Tag_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeTag_43, (MR_Integer) 0)));

                      if ((ll_backend__llds_out__llds_out_instr__MaybeFlagLval_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          {
                            mercury__io__write_string_3_p_0((MR_String) "MR_tag_reuse_or_alloc_heap(");
                          }
                          {
                            ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_499);
                          }
                          {
                            mercury__io__write_string_3_p_0((MR_String) ", ");
                          }
                          {
                            ll_backend__llds_out__llds_out_data__output_tag_3_p_0(ll_backend__llds_out__llds_out_instr__Tag_53);
                          }
                        }
                      else
                        {
                          MR_Word ll_backend__llds_out__llds_out_instr__FlagLval_496 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeFlagLval_51, (MR_Integer) 0)));

                          {
                            mercury__io__write_string_3_p_0((MR_String) "MR_tag_reuse_or_alloc_heap_flag(");
                          }
                          {
                            ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_499);
                          }
                          {
                            mercury__io__write_string_3_p_0((MR_String) ", ");
                          }
                          {
                            ll_backend__llds_out__llds_out_data__output_tag_3_p_0(ll_backend__llds_out__llds_out_instr__Tag_53);
                          }
                          {
                            mercury__io__write_string_3_p_0((MR_String) ", ");
                          }
                          {
                            ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__FlagLval_496);
                          }
                        }
                    }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                  }
                  {
                    ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__ReuseRval_50);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                  }
                  {
                    ll_backend__llds_out__llds_out_instr__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_99_114_95_104_112_95_110_111_95_114_101_117_115_101_95_95_91_57_93_95_48_11_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_499, ll_backend__llds_out__llds_out_instr__MaybeTag_43, ll_backend__llds_out__llds_out_instr__MaybeOffset_44, ll_backend__llds_out__llds_out_instr__SizeRval_45, ll_backend__llds_out__llds_out_instr__MaybeAllocId_46, ll_backend__llds_out__llds_out_instr__MayUseAtomicAlloc_47, ll_backend__llds_out__llds_out_instr__MaybeRegionRval_48);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
              {
                mercury__io__write_string_3_p_0((MR_String) ";\n");
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Lval_500 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\tMR_mark_hp(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_500);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Rval_501 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\tMR_restore_hp(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_501, (MR_Integer) 13);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Rval_502 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\tMR_free_heap(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_502, (MR_Integer) 11);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__StackId_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__EmbeddedFrame_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
              MR_Integer ll_backend__llds_out__llds_out_instr__FirstSlot_57;
              MR_Integer ll_backend__llds_out__llds_out_instr__LastSlot_58;
              MR_String ll_backend__llds_out__llds_out_instr__V_316_316;
              MR_String ll_backend__llds_out__llds_out_instr__V_317_317;
              MR_String ll_backend__llds_out__llds_out_instr__V_318_318;
              MR_String ll_backend__llds_out__llds_out_instr__V_320_320;
              MR_String ll_backend__llds_out__llds_out_instr__V_321_321;
              MR_String ll_backend__llds_out__llds_out_instr__Comment_503;
              MR_Word ll_backend__llds_out__llds_out_instr___StackId_56;

              switch (ll_backend__llds_out__llds_out_instr__StackId_54) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\tMR_push_region_commit_frame");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\tMR_push_region_disj_frame");
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\tMR_push_region_ite_frame");
                    }
                  }
                  break;
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__EmbeddedFrame_55);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");");
              }
              ll_backend__llds_out__llds_out_instr___StackId_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__EmbeddedFrame_55, (MR_Integer) 0)));
              ll_backend__llds_out__llds_out_instr__FirstSlot_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__EmbeddedFrame_55, (MR_Integer) 1)));
              ll_backend__llds_out__llds_out_instr__LastSlot_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__EmbeddedFrame_55, (MR_Integer) 2)));
              {
                ll_backend__llds_out__llds_out_instr__V_317_317 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_instr__FirstSlot_57);
              }
              {
                ll_backend__llds_out__llds_out_instr__V_321_321 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_instr__LastSlot_58);
              }
              {
                ll_backend__llds_out__llds_out_instr__V_320_320 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_instr__V_321_321, (MR_String) " */");
              }
              {
                ll_backend__llds_out__llds_out_instr__V_318_318 = mercury__string__f_43_43_2_f_0((MR_String) "..", ll_backend__llds_out__llds_out_instr__V_320_320);
              }
              {
                ll_backend__llds_out__llds_out_instr__V_316_316 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_instr__V_317_317, ll_backend__llds_out__llds_out_instr__V_318_318);
              }
              {
                ll_backend__llds_out__llds_out_instr__Comment_503 = mercury__string__f_43_43_2_f_0((MR_String) " /* ", ll_backend__llds_out__llds_out_instr__V_316_316);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__Comment_503);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__FillOp_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__IdRval_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_instr__NumLval_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 4)));
              MR_Word ll_backend__llds_out__llds_out_instr__AddrLval_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 5)));
              MR_Word ll_backend__llds_out__llds_out_instr__EmbeddedFrame_504 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));

              switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__FillOp_59)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ll_backend__llds_out__llds_out_instr__FillOp_59)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "\tMR_region_fill_ite_protect");
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "\tMR_region_fill_semi_disj_protect");
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "\tMR_region_fill_disj_snapshot");
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "\tMR_region_fill_commit");
                        }
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ll_backend__llds_out__llds_out_instr__V_639_639 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__FillOp_59, (MR_Integer) 0)));

                    switch (ll_backend__llds_out__llds_out_instr__V_639_639) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__io__write_string_3_p_0((MR_String) "\tMR_region_fill_ite_snapshot_not_removed");
                          }
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          {
                            mercury__io__write_string_3_p_0((MR_String) "\tMR_region_fill_ite_snapshot_removed");
                          }
                        }
                        break;
                    }
                  }
                  break;
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__EmbeddedFrame_504);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__IdRval_60);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
              {
                ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__NumLval_61);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
              {
                ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__AddrLval_62);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__SetOp_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__ValueRval_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_instr__EmbeddedFrame_505 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));

              switch (ll_backend__llds_out__llds_out_instr__SetOp_63) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 4:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\tMR_region_set_commit_num_entries");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\tMR_region_set_disj_num_protects");
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\tMR_region_set_disj_num_snapshots");
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\tMR_region_set_ite_num_protects");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\tMR_region_set_ite_num_snapshots");
                    }
                  }
                  break;
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__EmbeddedFrame_505);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__ValueRval_64);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__UseOp_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__EmbeddedFrame_506 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));

              switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__UseOp_65)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ll_backend__llds_out__llds_out_instr__UseOp_65)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_ite_nondet_cond_fail");
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_disj_later");
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_disj_last");
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_disj_nonlast_semi_commit");
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_commit_success");
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_commit_failure");
                        }
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ll_backend__llds_out__llds_out_instr__V_641_641 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__UseOp_65, (MR_Integer) 0)));

                    switch (ll_backend__llds_out__llds_out_instr__V_641_641) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_ite_then_nondet");
                          }
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          {
                            mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_ite_then_semidet");
                          }
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ll_backend__llds_out__llds_out_instr__V_640_640 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_instr__UseOp_65, (MR_Integer) 0)));

                    switch (ll_backend__llds_out__llds_out_instr__V_640_640) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_ite_else_nondet");
                          }
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          {
                            mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_ite_else_semidet");
                          }
                        }
                        break;
                    }
                  }
                  break;
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__EmbeddedFrame_506);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Lval_507 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\tMR_store_ticket(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_507);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Reason_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__Rval_508 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\tMR_reset_ticket(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_508, (MR_Integer) 13);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
              {
                ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_p_0(ll_backend__llds_out__llds_out_instr__Reason_66);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Lval_509 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\tMR_mark_ticket_stack(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_509);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Rval_510 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\tMR_prune_tickets_to(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_510, (MR_Integer) 13);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 24:
            {
              MR_Integer ll_backend__llds_out__llds_out_instr__N_67 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__DwordAlignment_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__Kind_511 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
              MR_String ll_backend__llds_out__llds_out_instr___Msg_68 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_552_552 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
              MR_String ll_backend__llds_out__llds_out_instr__V_553_553 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
              MR_String ll_backend__llds_out__llds_out_instr__V_554_554 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_555_555 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_556_556 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_557_557 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_558_558 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_559_559 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_560_560 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_561_561 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_562_562 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_563_563 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_564_564 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_565_565 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_566_566 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_567_567 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_568_568 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_569_569 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_570_570 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_instr__V_571_571 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
              MR_Word ll_backend__llds_out__llds_out_instr__V_572_572 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 8)));

              switch (ll_backend__llds_out__llds_out_instr__DwordAlignment_69) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ll_backend__llds_out__llds_out_instr__V_186_186;

                    {
                      ll_backend__llds_out__llds_out_instr__V_186_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_186_186, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_6[0]));
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_186_186, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_3));
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_186_186, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_186_186, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__N_67));
                    }
                    {
                      mercury__require__expect_4_p_0(ll_backend__llds_out__llds_out_instr__V_186_186, (MR_String) "ll_backend.llds_out.llds_out_instr", (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction\'/5", (MR_String) "odd sp increment");
                    }
                  }
                  break;
              }
              switch (ll_backend__llds_out__llds_out_instr__Kind_511) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer ll_backend__llds_out__llds_out_instr__V_192_192;

                    {
                      ll_backend__llds_out__llds_out_instr__V_192_192 = ll_backend__llds_out__llds_out_instr__max_leaf_stack_frame_size_0_f_0();
                    }
                    ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__N_67 < ll_backend__llds_out__llds_out_instr__V_192_192);
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "\tMR_incr_sp_leaf(");
                        }
                      }
                    else
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "\tMR_incr_sp(");
                        }
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\tMR_incr_sp(");
                    }
                  }
                  break;
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__N_67);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 25:
            {
              MR_Integer ll_backend__llds_out__llds_out_instr__N_512 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\tMR_decr_sp(");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__N_512);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 26:
            {
              MR_Integer ll_backend__llds_out__llds_out_instr__N_513 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\tMR_decr_sp_and_return(");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__N_513);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Decls_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__Components_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__MaybeDefLabel_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 8)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 4)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 5)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 6)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 7)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 9)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 10)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\t{\n");
              }
              {
                ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_p_0(ll_backend__llds_out__llds_out_instr__Decls_70);
              }
              if ((ll_backend__llds_out__llds_out_instr__MaybeDefLabel_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word ll_backend__llds_out__llds_out_instr__V_172_172;
                  MR_Box ll_backend__llds_out__llds_out_instr__conv0_STATE_VARIABLE_IO_173_173;

                  {
                    ll_backend__llds_out__llds_out_instr__V_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_172_172, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_5[0]));
                    MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_172_172, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_1));
                    MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_172_172, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_172_172, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__Info_6));
                  }
                  {
                    mercury__list__foldl_4_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_instr__V_172_172, ll_backend__llds_out__llds_out_instr__Components_71, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_instr__conv0_STATE_VARIABLE_IO_173_173);
                  }
                }
              else
                {
                  MR_Word ll_backend__llds_out__llds_out_instr__DefLabel_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeDefLabel_77, (MR_Integer) 0)));
                  MR_Word ll_backend__llds_out__llds_out_instr__InternalLabelToLayoutMap_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
                  MR_Word ll_backend__llds_out__llds_out_instr__DefLabelLayout_82;
                  MR_String ll_backend__llds_out__llds_out_instr__MangledModuleName_83;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_168_168;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_573_573 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
                  MR_String ll_backend__llds_out__llds_out_instr__V_574_574 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
                  MR_String ll_backend__llds_out__llds_out_instr__V_575_575 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
                  MR_Word ll_backend__llds_out__llds_out_instr__V_576_576 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
                  MR_Word ll_backend__llds_out__llds_out_instr__V_577_577 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
                  MR_Word ll_backend__llds_out__llds_out_instr__V_578_578 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)));
                  MR_Word ll_backend__llds_out__llds_out_instr__V_579_579 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_580_580 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_581_581 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_582_582 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_583_583 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_584_584 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_585_585 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_586_586 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_587_587 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_588_588 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_589_589 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_590_590 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_591_591 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_592_592 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_593_593 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 8)));
                  MR_Box ll_backend__llds_out__llds_out_instr__conv1_DefLabelLayout_82;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_594_594;
                  MR_String ll_backend__llds_out__llds_out_instr__V_595_595;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_596_596;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_597_597;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_598_598;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_599_599;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_600_600;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_601_601;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_602_602;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_603_603;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_604_604;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_605_605;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_606_606;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_607_607;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_608_608;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_609_609;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_610_610;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_611_611;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_612_612;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_613_613;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_614_614;
                  MR_Box ll_backend__llds_out__llds_out_instr__conv2_STATE_VARIABLE_IO_169_169;

                  {
                    mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__llds_out__llds_out_instr__InternalLabelToLayoutMap_81, ((MR_Box) (ll_backend__llds_out__llds_out_instr__DefLabel_80)), &ll_backend__llds_out__llds_out_instr__conv1_DefLabelLayout_82);
                  }
                  ll_backend__llds_out__llds_out_instr__DefLabelLayout_82 = ((MR_Word) ll_backend__llds_out__llds_out_instr__conv1_DefLabelLayout_82);
                  {
                    mercury__io__write_string_3_p_0((MR_String) "#define MR_HASH_DEF_LABEL_LAYOUT ");
                  }
                  ll_backend__llds_out__llds_out_instr__V_594_594 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
                  ll_backend__llds_out__llds_out_instr__MangledModuleName_83 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
                  ll_backend__llds_out__llds_out_instr__V_595_595 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
                  ll_backend__llds_out__llds_out_instr__V_596_596 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
                  ll_backend__llds_out__llds_out_instr__V_597_597 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
                  ll_backend__llds_out__llds_out_instr__V_598_598 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
                  ll_backend__llds_out__llds_out_instr__V_599_599 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)));
                  ll_backend__llds_out__llds_out_instr__V_600_600 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_601_601 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_602_602 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_603_603 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_604_604 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_605_605 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_606_606 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_607_607 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_608_608 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_609_609 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_610_610 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_611_611 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_612_612 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_instr__V_613_613 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
                  ll_backend__llds_out__llds_out_instr__V_614_614 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 8)));
                  {
                    ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__llds_out__llds_out_instr__MangledModuleName_83, ll_backend__llds_out__llds_out_instr__DefLabelLayout_82);
                  }
                  {
                    mercury__io__nl_2_p_0();
                  }
                  {
                    ll_backend__llds_out__llds_out_instr__V_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_168_168, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_5[0]));
                    MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_168_168, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_2));
                    MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_168_168, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_168_168, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__Info_6));
                  }
                  {
                    mercury__list__foldl_4_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_instr__V_168_168, ll_backend__llds_out__llds_out_instr__Components_71, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_instr__conv2_STATE_VARIABLE_IO_169_169);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "#undef MR_HASH_DEF_LABEL_LAYOUT\n");
                  }
                }
              {
                mercury__io__write_string_3_p_0((MR_String) "\t}\n");
              }
            }
            break;
          case (MR_Integer) 28:
            {
              MR_Integer ll_backend__llds_out__llds_out_instr__NumConjuncts_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
              MR_Integer ll_backend__llds_out__llds_out_instr__TSStringIndex_85 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_instr__Lval_514 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\tMR_init_sync_term(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_514);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__NumConjuncts_84);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__TSStringIndex_85);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 29:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Child_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__Lval_515 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\tMR_fork_new_child(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_515);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
              {
                ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__Child_86);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 30:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Lval_516 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__Label_517 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\tMR_join_and_continue(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_516);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
              {
                ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__Label_517);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 31:
            {
              MR_Integer ll_backend__llds_out__llds_out_instr__NumSlots_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__Lval_518 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\tMR_lc_create_loop_control(");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_instr__NumSlots_87);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
              {
                ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_518);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 32:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__LCRval_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__LCSLval_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__InternalLabel_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\tMR_lc_wait_free_slot(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__LCRval_88);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
              {
                ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__LCSLval_89);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
              {
                ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(ll_backend__llds_out__llds_out_instr__InternalLabel_90);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 33:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__LCSRval_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__ChildLabel_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_instr__LCRval_519 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\tMR_lc_spawn_off((MR_LoopControl*)");
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__LCRval_519);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__LCSRval_91);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
              {
                ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ll_backend__llds_out__llds_out_instr__ChildLabel_92);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 34:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__LCRval_520 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__LCSRval_521 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_7, (MR_Integer) 2)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\tMR_lc_join_and_terminate(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__LCRval_520);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__LCSRval_521);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_8,
  MR_String ll_backend__llds_out__llds_out_instr__Comment_9,
  MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_10)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
    MR_Word ll_backend__llds_out__llds_out_instr__AutoComments_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 0)));
    MR_String ll_backend__llds_out__llds_out_instr__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 1)));
    MR_String ll_backend__llds_out__llds_out_instr__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 2)));
    MR_Word ll_backend__llds_out__llds_out_instr__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 3)));
    MR_Word ll_backend__llds_out__llds_out_instr__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 4)));
    MR_Word ll_backend__llds_out__llds_out_instr__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 5)));
    MR_Word ll_backend__llds_out__llds_out_instr__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 6)));
    MR_Word ll_backend__llds_out__llds_out_instr__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_instr__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__llds_out__llds_out_instr__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_7, (MR_Integer) 8)));

    switch (ll_backend__llds_out__llds_out_instr__AutoComments_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 1))))
            ll_backend__llds_out__llds_out_instr__succeeded = MR_TRUE;
          else
          if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) == (MR_mktag((MR_Integer) 2))))
            ll_backend__llds_out__llds_out_instr__succeeded = MR_TRUE;
          else
            ll_backend__llds_out__llds_out_instr__succeeded = MR_FALSE;
          if (ll_backend__llds_out__llds_out_instr__succeeded)
            {
            }
          else
            {
              ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Instr_8, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_10);
            }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Instr_8, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_10);
          }
          ll_backend__llds_out__llds_out_instr__succeeded = (strcmp(ll_backend__llds_out__llds_out_instr__Comment_9, (MR_String) "") == 0);
          if (ll_backend__llds_out__llds_out_instr__succeeded)
            {
            }
          else
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "\t\t/* ");
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__Comment_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " */\n");
              }
            }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_5_p_0_1(
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
    MR_Box ll_backend__llds_out__llds_out_instr__closure = ll_backend__llds_out__llds_out_instr__closure_arg;

    {
      ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_float_dword_assignment__456__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 4))));
    }
    return ll_backend__llds_out__llds_out_instr__succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
  MR_Word ll_backend__llds_out__llds_out_instr__Lval_7,
  MR_Word ll_backend__llds_out__llds_out_instr__Rval_8)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
    MR_Word ll_backend__llds_out__llds_out_instr__Type_10;
    MR_Word ll_backend__llds_out__llds_out_instr__AutoComments_11;
    MR_Word ll_backend__llds_out__llds_out_instr__V_17_17;
    MR_Word ll_backend__llds_out__llds_out_instr__V_30_30;
    MR_String ll_backend__llds_out__llds_out_instr__V_31_31;
    MR_String ll_backend__llds_out__llds_out_instr__V_32_32;
    MR_Word ll_backend__llds_out__llds_out_instr__V_33_33;
    MR_Word ll_backend__llds_out__llds_out_instr__V_34_34;
    MR_Word ll_backend__llds_out__llds_out_instr__V_35_35;
    MR_Word ll_backend__llds_out__llds_out_instr__V_36_36;
    MR_Word ll_backend__llds_out__llds_out_instr__V_37_37;
    MR_Word ll_backend__llds_out__llds_out_instr__V_38_38;
    MR_Word ll_backend__llds_out__llds_out_instr__V_39_39;
    MR_Word ll_backend__llds_out__llds_out_instr__V_40_40;
    MR_Word ll_backend__llds_out__llds_out_instr__V_41_41;
    MR_Word ll_backend__llds_out__llds_out_instr__V_42_42;
    MR_Word ll_backend__llds_out__llds_out_instr__V_43_43;
    MR_Word ll_backend__llds_out__llds_out_instr__V_44_44;
    MR_Word ll_backend__llds_out__llds_out_instr__V_45_45;
    MR_Word ll_backend__llds_out__llds_out_instr__V_46_46;
    MR_Word ll_backend__llds_out__llds_out_instr__V_47_47;
    MR_Word ll_backend__llds_out__llds_out_instr__V_48_48;
    MR_Word ll_backend__llds_out__llds_out_instr__V_49_49;
    MR_Word ll_backend__llds_out__llds_out_instr__V_50_50;

    {
      mercury__io__write_string_3_p_0((MR_String) "\t* (MR_Float *) &(");
    }
    {
      ll_backend__llds_out__llds_out_data__output_lval_for_assign_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Lval_7, &ll_backend__llds_out__llds_out_instr__Type_10);
    }
    {
      ll_backend__llds_out__llds_out_instr__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_17_17, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_17_17, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_5_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_17_17, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__Type_10));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_17_17, 4) = ((MR_Box) ((MR_Integer) 13));
    }
    {
      mercury__require__expect_4_p_0(ll_backend__llds_out__llds_out_instr__V_17_17, (MR_String) "ll_backend.llds_out.llds_out_instr", (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_float_dword_assignment\'/5", (MR_String) "expected word");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ") = ");
    }
    {
      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Rval_8, (MR_Integer) 9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
    ll_backend__llds_out__llds_out_instr__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
    ll_backend__llds_out__llds_out_instr__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
    ll_backend__llds_out__llds_out_instr__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
    ll_backend__llds_out__llds_out_instr__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
    ll_backend__llds_out__llds_out_instr__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
    ll_backend__llds_out__llds_out_instr__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
    ll_backend__llds_out__llds_out_instr__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)));
    ll_backend__llds_out__llds_out_instr__AutoComments_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    ll_backend__llds_out__llds_out_instr__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 8)));
    switch (ll_backend__llds_out__llds_out_instr__AutoComments_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "\t\t/* assigning float dword */\n");
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__is_aligned_float_dword_assignment_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__InstrA_5,
  MR_Word ll_backend__llds_out__llds_out_instr__InstrB_6,
  MR_Word * ll_backend__llds_out__llds_out_instr__LvalA_7,
  MR_Word * ll_backend__llds_out__llds_out_instr__Rval_8)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__InstrA_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__InstrA_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word ll_backend__llds_out__llds_out_instr__TypeInfo_33_33;
    MR_Word ll_backend__llds_out__llds_out_instr__RvalA_9;
    MR_Word ll_backend__llds_out__llds_out_instr__LvalB_10;
    MR_Word ll_backend__llds_out__llds_out_instr__RvalB_11;
    MR_Word ll_backend__llds_out__llds_out_instr__MaybeTag_12;
    MR_Word ll_backend__llds_out__llds_out_instr__Address_13;
    MR_Integer ll_backend__llds_out__llds_out_instr__Offset_14;
    MR_Word ll_backend__llds_out__llds_out_instr__V_15_15;
    MR_Word ll_backend__llds_out__llds_out_instr__V_16_16;
    MR_Word ll_backend__llds_out__llds_out_instr__V_17_17;
    MR_Integer ll_backend__llds_out__llds_out_instr__V_18_18;
    MR_Word ll_backend__llds_out__llds_out_instr__V_19_19;
    MR_Word ll_backend__llds_out__llds_out_instr__V_20_20;
    MR_Word ll_backend__llds_out__llds_out_instr__V_21_21;
    MR_Integer ll_backend__llds_out__llds_out_instr__V_22_22;
    MR_Word ll_backend__llds_out__llds_out_instr__V_23_23;
    MR_Word ll_backend__llds_out__llds_out_instr__V_24_24;
    MR_Word ll_backend__llds_out__llds_out_instr__V_25_25;
    MR_Word ll_backend__llds_out__llds_out_instr__V_26_26;
    MR_Integer ll_backend__llds_out__llds_out_instr__V_27_27;
    MR_Integer ll_backend__llds_out__llds_out_instr__V_28_28;
    MR_Word ll_backend__llds_out__llds_out_instr__V_29_29;
    MR_Word ll_backend__llds_out__llds_out_instr__V_30_30;
    MR_Word ll_backend__llds_out__llds_out_instr__V_31_31;

    if (ll_backend__llds_out__llds_out_instr__succeeded)
      {
        *ll_backend__llds_out__llds_out_instr__LvalA_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__InstrA_5, (MR_Integer) 1)));
        ll_backend__llds_out__llds_out_instr__RvalA_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__InstrA_5, (MR_Integer) 2)));
        ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__InstrB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__InstrB_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (ll_backend__llds_out__llds_out_instr__succeeded)
          {
            ll_backend__llds_out__llds_out_instr__LvalB_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__InstrB_6, (MR_Integer) 1)));
            ll_backend__llds_out__llds_out_instr__RvalB_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__InstrB_6, (MR_Integer) 2)));
            ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__RvalA_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__RvalA_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (ll_backend__llds_out__llds_out_instr__succeeded)
              {
                ll_backend__llds_out__llds_out_instr__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__RvalA_9, (MR_Integer) 1)));
                *ll_backend__llds_out__llds_out_instr__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__RvalA_9, (MR_Integer) 2)));
                ll_backend__llds_out__llds_out_instr__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__RvalA_9, (MR_Integer) 3)));
                ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 38))));
                if (ll_backend__llds_out__llds_out_instr__succeeded)
                  {
                    ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_16_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__V_16_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
                      {
                        ll_backend__llds_out__llds_out_instr__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__V_16_16, (MR_Integer) 1)));
                        ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_17_17)) == (MR_mktag((MR_Integer) 1)));
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
                          {
                            ll_backend__llds_out__llds_out_instr__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_17_17, (MR_Integer) 0)));
                            ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_18_18 == (MR_Integer) 0);
                            if (ll_backend__llds_out__llds_out_instr__succeeded)
                              {
                                ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__RvalB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__RvalB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
                                if (ll_backend__llds_out__llds_out_instr__succeeded)
                                  {
                                    ll_backend__llds_out__llds_out_instr__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__RvalB_11, (MR_Integer) 1)));
                                    ll_backend__llds_out__llds_out_instr__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__RvalB_11, (MR_Integer) 2)));
                                    ll_backend__llds_out__llds_out_instr__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__RvalB_11, (MR_Integer) 3)));
                                    {
                                      ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds____Unify____rval_0_0(*ll_backend__llds_out__llds_out_instr__Rval_8, ll_backend__llds_out__llds_out_instr__V_29_29);
                                    }
                                    if (ll_backend__llds_out__llds_out_instr__succeeded)
                                      {
                                        ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 38))));
                                        if (ll_backend__llds_out__llds_out_instr__succeeded)
                                          {
                                            ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 1)));
                                            if (ll_backend__llds_out__llds_out_instr__succeeded)
                                              {
                                                ll_backend__llds_out__llds_out_instr__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__V_20_20, (MR_Integer) 1)));
                                                ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_21_21)) == (MR_mktag((MR_Integer) 1)));
                                                if (ll_backend__llds_out__llds_out_instr__succeeded)
                                                  {
                                                    ll_backend__llds_out__llds_out_instr__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_21_21, (MR_Integer) 0)));
                                                    ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_22_22 == (MR_Integer) 1);
                                                    if (ll_backend__llds_out__llds_out_instr__succeeded)
                                                      {
                                                        ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) *ll_backend__llds_out__llds_out_instr__LvalA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), *ll_backend__llds_out__llds_out_instr__LvalA_7, (MR_Integer) 0)))) == (MR_Integer) 9)));
                                                        if (ll_backend__llds_out__llds_out_instr__succeeded)
                                                          {
                                                            ll_backend__llds_out__llds_out_instr__MaybeTag_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), *ll_backend__llds_out__llds_out_instr__LvalA_7, (MR_Integer) 1)));
                                                            ll_backend__llds_out__llds_out_instr__Address_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), *ll_backend__llds_out__llds_out_instr__LvalA_7, (MR_Integer) 2)));
                                                            ll_backend__llds_out__llds_out_instr__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), *ll_backend__llds_out__llds_out_instr__LvalA_7, (MR_Integer) 3)));
                                                            ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_23_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__V_23_23, (MR_Integer) 0)))) == (MR_Integer) 1)));
                                                            if (ll_backend__llds_out__llds_out_instr__succeeded)
                                                              {
                                                                ll_backend__llds_out__llds_out_instr__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__V_23_23, (MR_Integer) 1)));
                                                                ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_24_24)) == (MR_mktag((MR_Integer) 1)));
                                                                if (ll_backend__llds_out__llds_out_instr__succeeded)
                                                                  {
                                                                    ll_backend__llds_out__llds_out_instr__Offset_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_24_24, (MR_Integer) 0)));
                                                                    ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__LvalB_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__LvalB_10, (MR_Integer) 0)))) == (MR_Integer) 9)));
                                                                    if (ll_backend__llds_out__llds_out_instr__succeeded)
                                                                      {
                                                                        ll_backend__llds_out__llds_out_instr__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__LvalB_10, (MR_Integer) 1)));
                                                                        ll_backend__llds_out__llds_out_instr__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__LvalB_10, (MR_Integer) 2)));
                                                                        ll_backend__llds_out__llds_out_instr__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__LvalB_10, (MR_Integer) 3)));
                                                                        ll_backend__llds_out__llds_out_instr__TypeInfo_33_33 = (MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[5];
                                                                        {
                                                                          ll_backend__llds_out__llds_out_instr__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_instr__TypeInfo_33_33, ((MR_Box) (ll_backend__llds_out__llds_out_instr__MaybeTag_12)), ((MR_Box) (ll_backend__llds_out__llds_out_instr__V_30_30)));
                                                                        }
                                                                        if (ll_backend__llds_out__llds_out_instr__succeeded)
                                                                          {
                                                                            {
                                                                              ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__llds_out__llds_out_instr__Address_13, ll_backend__llds_out__llds_out_instr__V_31_31);
                                                                            }
                                                                            if (ll_backend__llds_out__llds_out_instr__succeeded)
                                                                              {
                                                                                ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_25_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__V_25_25, (MR_Integer) 0)))) == (MR_Integer) 1)));
                                                                                if (ll_backend__llds_out__llds_out_instr__succeeded)
                                                                                  {
                                                                                    ll_backend__llds_out__llds_out_instr__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__V_25_25, (MR_Integer) 1)));
                                                                                    ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_26_26)) == (MR_mktag((MR_Integer) 1)));
                                                                                    if (ll_backend__llds_out__llds_out_instr__succeeded)
                                                                                      {
                                                                                        ll_backend__llds_out__llds_out_instr__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_26_26, (MR_Integer) 0)));
                                                                                        ll_backend__llds_out__llds_out_instr__V_28_28 = (ll_backend__llds_out__llds_out_instr__V_27_27 - ll_backend__llds_out__llds_out_instr__Offset_14);
                                                                                        ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__V_28_28 == (MR_Integer) 1);
                                                                                        if (ll_backend__llds_out__llds_out_instr__succeeded)
                                                                                          {
                                                                                            ll_backend__llds_out__llds_out_instr__succeeded = mercury__int__even_1_p_0(ll_backend__llds_out__llds_out_instr__Offset_14);
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
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return ll_backend__llds_out__llds_out_instr__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_p_0_1(
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
    MR_Box ll_backend__llds_out__llds_out_instr__closure = ll_backend__llds_out__llds_out_instr__closure_arg;

    {
      ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_instruction_list_while_block__406__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 4))));
    }
    return ll_backend__llds_out__llds_out_instr__succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
  MR_Word ll_backend__llds_out__llds_out_instr__Label_3,
  MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_instr__Instr_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_instr__Instrs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__llds_out__llds_out_instr__Uinstr_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr_14, (MR_Integer) 0)));
            MR_String ll_backend__llds_out__llds_out_instr__Comment_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr_14, (MR_Integer) 1)));
            MR_Word ll_backend__llds_out__llds_out_instr__V_21_21;

            ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (ll_backend__llds_out__llds_out_instr__succeeded)
              {
                ll_backend__llds_out__llds_out_instr__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 1)));
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_instr", (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction_list_while_block\'/6", (MR_String) "label in block");
                  return;
                }
              }
            else
              {
                MR_Word ll_backend__llds_out__llds_out_instr__V_32_32;
                MR_Word ll_backend__llds_out__llds_out_instr__V_79_79;

                ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (ll_backend__llds_out__llds_out_instr__succeeded)
                  {
                    ll_backend__llds_out__llds_out_instr__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 1)));
                    ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_32_32)) == (MR_mktag((MR_Integer) 1)));
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
                      {
                        ll_backend__llds_out__llds_out_instr__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_32_32, (MR_Integer) 0)));
                        {
                          ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_instr__Label_3, ll_backend__llds_out__llds_out_instr__V_79_79);
                        }
                      }
                  }
                if (ll_backend__llds_out__llds_out_instr__succeeded)
                  {
                    MR_Word ll_backend__llds_out__llds_out_instr__V_35_35;

                    {
                      mercury__io__write_string_3_p_0((MR_String) "\tcontinue;\n");
                    }
                    {
                      ll_backend__llds_out__llds_out_instr__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_35_35, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_4[0]));
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_35_35, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_p_0_1));
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_35_35, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__Instrs_15));
                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_35_35, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      mercury__require__expect_4_p_0(ll_backend__llds_out__llds_out_instr__V_35_35, (MR_String) "ll_backend.llds_out.llds_out_instr", (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction_list_while_block\'/6", (MR_String) "code after goto");
                    }
                  }
                else
                  {
                    MR_Word ll_backend__llds_out__llds_out_instr__Rval_22;
                    MR_Word ll_backend__llds_out__llds_out_instr__V_40_40;
                    MR_Word ll_backend__llds_out__llds_out_instr__V_80_80;

                    ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 9)));
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
                      {
                        ll_backend__llds_out__llds_out_instr__Rval_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 1)));
                        ll_backend__llds_out__llds_out_instr__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 2)));
                        ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_40_40)) == (MR_mktag((MR_Integer) 1)));
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
                          {
                            ll_backend__llds_out__llds_out_instr__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_40_40, (MR_Integer) 0)));
                            {
                              ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_instr__Label_3, ll_backend__llds_out__llds_out_instr__V_80_80);
                            }
                          }
                      }
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
                      {
                        MR_Word ll_backend__llds_out__llds_out_instr__AutoComments_23;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_57_57;
                        MR_String ll_backend__llds_out__llds_out_instr__V_58_58;
                        MR_String ll_backend__llds_out__llds_out_instr__V_59_59;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_60_60;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_61_61;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_62_62;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_63_63;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_64_64;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_65_65;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_66_66;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_67_67;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_68_68;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_69_69;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_70_70;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_71_71;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_72_72;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_73_73;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_74_74;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_75_75;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_76_76;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_77_77;

                        {
                          mercury__io__write_string_3_p_0((MR_String) "\tif (");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_test_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Rval_22);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")\n\t\tcontinue;\n");
                        }
                        ll_backend__llds_out__llds_out_instr__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 0)));
                        ll_backend__llds_out__llds_out_instr__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 1)));
                        ll_backend__llds_out__llds_out_instr__V_59_59 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 2)));
                        ll_backend__llds_out__llds_out_instr__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 3)));
                        ll_backend__llds_out__llds_out_instr__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 4)));
                        ll_backend__llds_out__llds_out_instr__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 5)));
                        ll_backend__llds_out__llds_out_instr__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)));
                        ll_backend__llds_out__llds_out_instr__AutoComments_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
                        ll_backend__llds_out__llds_out_instr__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 8)));
                        ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__AutoComments_23 == (MR_Integer) 1);
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
                          {
                            ll_backend__llds_out__llds_out_instr__succeeded = (strcmp(ll_backend__llds_out__llds_out_instr__Comment_20, (MR_String) "") == 0);
                            ll_backend__llds_out__llds_out_instr__succeeded = !(ll_backend__llds_out__llds_out_instr__succeeded);
                          }
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "\t\t/* ");
                            }
                            {
                              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__Comment_20);
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) " */\n");
                            }
                          }
                        else
                          {
                          }
                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Instrs_15;

                          ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
                        }
                        continue;
                      }
                    else
                      {
                        MR_Integer ll_backend__llds_out__llds_out_instr__V_24_24;
                        MR_Integer ll_backend__llds_out__llds_out_instr__V_25_25;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_26_26;

                        ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
                          {
                            ll_backend__llds_out__llds_out_instr__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 1)));
                            ll_backend__llds_out__llds_out_instr__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 2)));
                            ll_backend__llds_out__llds_out_instr__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 3)));
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_instr", (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction_list_while_block\'/6", (MR_String) "block in block");
                              return;
                            }
                          }
                        else
                          {
                            {
                              ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Uinstr_19, ll_backend__llds_out__llds_out_instr__Comment_20, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_4);
                            }
                            /* direct tailcall eliminated */
                            {
                              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Instrs_15;

                              ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
                            }
                            continue;
                          }
                      }
                  }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
  MR_Word ll_backend__llds_out__llds_out_instr__Label_2,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__3_3,
  MR_Word * ll_backend__llds_out__llds_out_instr__HeadVar__4_4,
  MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

        if ((ll_backend__llds_out__llds_out_instr__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__llds_out__llds_out_instr__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__io__write_string_3_p_0((MR_String) "\tbreak;\n");
            }
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_instr__Instr_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_instr__Instrs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word ll_backend__llds_out__llds_out_instr__Uinstr_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr_18, (MR_Integer) 0)));
            MR_String ll_backend__llds_out__llds_out_instr__Comment_24 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr_18, (MR_Integer) 1)));
            MR_Word ll_backend__llds_out__llds_out_instr__V_25_25;

            ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_23, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (ll_backend__llds_out__llds_out_instr__succeeded)
              {
                ll_backend__llds_out__llds_out_instr__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_23, (MR_Integer) 1)));
                {
                  mercury__io__write_string_3_p_0((MR_String) "\tbreak;\n");
                }
                *ll_backend__llds_out__llds_out_instr__HeadVar__4_4 = ll_backend__llds_out__llds_out_instr__HeadVar__3_3;
              }
            else
              {
                MR_Word ll_backend__llds_out__llds_out_instr__V_35_35;
                MR_Word ll_backend__llds_out__llds_out_instr__V_77_77;

                ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_23, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (ll_backend__llds_out__llds_out_instr__succeeded)
                  {
                    ll_backend__llds_out__llds_out_instr__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_23, (MR_Integer) 1)));
                    ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_35_35)) == (MR_mktag((MR_Integer) 1)));
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
                      {
                        ll_backend__llds_out__llds_out_instr__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_35_35, (MR_Integer) 0)));
                        {
                          ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_instr__Label_2, ll_backend__llds_out__llds_out_instr__V_77_77);
                        }
                      }
                  }
                if (ll_backend__llds_out__llds_out_instr__succeeded)
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\t/* continue */\n");
                    }
                    *ll_backend__llds_out__llds_out_instr__HeadVar__4_4 = ll_backend__llds_out__llds_out_instr__Instrs_19;
                  }
                else
                  {
                    MR_Word ll_backend__llds_out__llds_out_instr__Rval_26;
                    MR_Word ll_backend__llds_out__llds_out_instr__V_38_38;
                    MR_Word ll_backend__llds_out__llds_out_instr__V_78_78;

                    ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_23, (MR_Integer) 0)))) == (MR_Integer) 9)));
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
                      {
                        ll_backend__llds_out__llds_out_instr__Rval_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_23, (MR_Integer) 1)));
                        ll_backend__llds_out__llds_out_instr__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_23, (MR_Integer) 2)));
                        ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__V_38_38)) == (MR_mktag((MR_Integer) 1)));
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
                          {
                            ll_backend__llds_out__llds_out_instr__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_38_38, (MR_Integer) 0)));
                            {
                              ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_instr__Label_2, ll_backend__llds_out__llds_out_instr__V_78_78);
                            }
                          }
                      }
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
                      {
                        MR_Word ll_backend__llds_out__llds_out_instr__AutoComments_27;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_56_56;
                        MR_String ll_backend__llds_out__llds_out_instr__V_57_57;
                        MR_String ll_backend__llds_out__llds_out_instr__V_58_58;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_59_59;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_60_60;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_61_61;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_62_62;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_63_63;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_64_64;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_65_65;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_66_66;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_67_67;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_68_68;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_69_69;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_70_70;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_71_71;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_72_72;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_73_73;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_74_74;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_75_75;
                        MR_Word ll_backend__llds_out__llds_out_instr__V_76_76;

                        {
                          mercury__io__write_string_3_p_0((MR_String) "\tif (");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_test_rval_4_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Rval_26);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")\n\t\tcontinue;\n");
                        }
                        ll_backend__llds_out__llds_out_instr__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 0)));
                        ll_backend__llds_out__llds_out_instr__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 1)));
                        ll_backend__llds_out__llds_out_instr__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 2)));
                        ll_backend__llds_out__llds_out_instr__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 3)));
                        ll_backend__llds_out__llds_out_instr__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 4)));
                        ll_backend__llds_out__llds_out_instr__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 5)));
                        ll_backend__llds_out__llds_out_instr__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)));
                        ll_backend__llds_out__llds_out_instr__AutoComments_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
                        ll_backend__llds_out__llds_out_instr__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
                        ll_backend__llds_out__llds_out_instr__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 8)));
                        ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__AutoComments_27 == (MR_Integer) 1);
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
                          {
                            ll_backend__llds_out__llds_out_instr__succeeded = (strcmp(ll_backend__llds_out__llds_out_instr__Comment_24, (MR_String) "") == 0);
                            ll_backend__llds_out__llds_out_instr__succeeded = !(ll_backend__llds_out__llds_out_instr__succeeded);
                          }
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "\t\t/* ");
                            }
                            {
                              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__Comment_24);
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) " */\n");
                            }
                          }
                        else
                          {
                          }
                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__3__tmp_copy_3 = ll_backend__llds_out__llds_out_instr__Instrs_19;

                          ll_backend__llds_out__llds_out_instr__HeadVar__3_3 = ll_backend__llds_out__llds_out_instr__HeadVar__3__tmp_copy_3;
                        }
                        continue;
                      }
                    else
                      {
                        MR_Integer ll_backend__llds_out__llds_out_instr__TempR_28;
                        MR_Integer ll_backend__llds_out__llds_out_instr__TempF_29;
                        MR_Word ll_backend__llds_out__llds_out_instr__BlockInstrs_30;

                        ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_23, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (ll_backend__llds_out__llds_out_instr__succeeded)
                          {
                            ll_backend__llds_out__llds_out_instr__TempR_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_23, (MR_Integer) 1)));
                            ll_backend__llds_out__llds_out_instr__TempF_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_23, (MR_Integer) 2)));
                            ll_backend__llds_out__llds_out_instr__BlockInstrs_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_23, (MR_Integer) 3)));
                            {
                              ll_backend__llds_out__llds_out_instr__output_block_start_4_p_0(ll_backend__llds_out__llds_out_instr__TempR_28, ll_backend__llds_out__llds_out_instr__TempF_29);
                            }
                            {
                              ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__BlockInstrs_30, ll_backend__llds_out__llds_out_instr__Label_2, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_5);
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) "\t}\n");
                            }
                            {
                              /* direct tailcall eliminated */
                              {
                                MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__3__tmp_copy_3 = ll_backend__llds_out__llds_out_instr__Instrs_19;

                                ll_backend__llds_out__llds_out_instr__HeadVar__3_3 = ll_backend__llds_out__llds_out_instr__HeadVar__3__tmp_copy_3;
                              }
                              continue;
                            }
                          }
                        else
                          {
                            {
                              ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Uinstr_23, ll_backend__llds_out__llds_out_instr__Comment_24, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_5);
                            }
                            /* direct tailcall eliminated */
                            {
                              MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__3__tmp_copy_3 = ll_backend__llds_out__llds_out_instr__Instrs_19;

                              ll_backend__llds_out__llds_out_instr__HeadVar__3_3 = ll_backend__llds_out__llds_out_instr__HeadVar__3__tmp_copy_3;
                            }
                            continue;
                          }
                      }
                  }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
  MR_Word ll_backend__llds_out__llds_out_instr__Component_8,
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22,
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

    switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Component_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__llds_out__llds_out_instr__Inputs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Component_8, (MR_Integer) 0)));

          {
            ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Inputs_11, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__llds_out__llds_out_instr__Outputs_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_instr__Component_8, (MR_Integer) 0)));

          {
            ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Outputs_12, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Component_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22;
            break;
          case (MR_Integer) 1:
            *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22;
            break;
          case (MR_Integer) 2:
            *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22;
            break;
          case (MR_Integer) 3:
            *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_23 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_22;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0_2(
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_3,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_4,
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_5)
{
  {
    MR_Box ll_backend__llds_out__llds_out_instr__closure = ll_backend__llds_out__llds_out_instr__closure_arg;
    MR_Word ll_backend__llds_out__llds_out_instr__conv3_STATE_VARIABLE_DeclSet_23;

    {
      ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_2), &ll_backend__llds_out__llds_out_instr__conv3_STATE_VARIABLE_DeclSet_23);
    }
    *ll_backend__llds_out__llds_out_instr__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_instr__conv3_STATE_VARIABLE_DeclSet_23));
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0_1(
  MR_Box ll_backend__llds_out__llds_out_instr__closure_arg,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_2,
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_3,
  MR_Box ll_backend__llds_out__llds_out_instr__wrapper_arg_4,
  MR_Box * ll_backend__llds_out__llds_out_instr__wrapper_arg_5)
{
  {
    MR_Box ll_backend__llds_out__llds_out_instr__closure = ll_backend__llds_out__llds_out_instr__closure_arg;
    MR_Word ll_backend__llds_out__llds_out_instr__conv0_STATE_VARIABLE_DeclSet_14;

    {
      ll_backend__llds_out__llds_out_instr__output_record_instruction_decls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_instr__wrapper_arg_2), &ll_backend__llds_out__llds_out_instr__conv0_STATE_VARIABLE_DeclSet_14);
    }
    *ll_backend__llds_out__llds_out_instr__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_instr__conv0_STATE_VARIABLE_DeclSet_14));
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_8,
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81,
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

    switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__llds_out__llds_out_instr__Instr_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
            break;
          case (MR_Integer) 1:
            *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
            break;
        }
        break;
      case (MR_Integer) 1:
        *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
        break;
      case (MR_Integer) 2:
        *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Instrs_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_166_166;
              MR_Integer ll_backend__llds_out__llds_out_instr___TempR_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
              MR_Integer ll_backend__llds_out__llds_out_instr___TempF_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
              MR_Box ll_backend__llds_out__llds_out_instr__conv2_STATE_VARIABLE_DeclSet_82;
              MR_Box ll_backend__llds_out__llds_out_instr__conv1_STATE_VARIABLE_IO_84;

              {
                ll_backend__llds_out__llds_out_instr__V_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_166_166, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_3[0]));
                MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_166_166, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0_1));
                MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_166_166, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_166_166, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__Info_7));
              }
              {
                mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, (MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_instr__V_166_166, ll_backend__llds_out__llds_out_instr__Instrs_28, ((MR_Box) (ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81)), &ll_backend__llds_out__llds_out_instr__conv2_STATE_VARIABLE_DeclSet_82, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_instr__conv1_STATE_VARIABLE_IO_84);
              }
              *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ((MR_Word) ll_backend__llds_out__llds_out_instr__conv2_STATE_VARIABLE_DeclSet_82);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Lval_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__Rval_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_162_162;

              {
                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_29, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_162_162);
              }
              {
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_30, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_162_162, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_158_158;
              MR_Word ll_backend__llds_out__llds_out_instr__Lval_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__Rval_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));

              {
                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_169, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_158_158);
              }
              {
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_170, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_158_158, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Target_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__ContLabel_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_154_154;
              MR_Word ll_backend__llds_out__llds_out_instr__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 4)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 5)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 6)));

              {
                ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Target_31, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_154_154);
              }
              {
                ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__ContLabel_32, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_154_154, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__MaybeFailureContinuation_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr___FrameInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

              if ((ll_backend__llds_out__llds_out_instr__MaybeFailureContinuation_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
              else
                {
                  MR_Word ll_backend__llds_out__llds_out_instr__FailureContinuation_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeFailureContinuation_38, (MR_Integer) 0)));

                  {
                    ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__FailureContinuation_39, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
                  }
                }
            }
            break;
          case (MR_Integer) 5:
            *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__CodeAddr_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

              {
                ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__CodeAddr_40, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Rval_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr___MaybeLabels_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));

              {
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_171, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
              }
            }
            break;
          case (MR_Integer) 8:
            *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_144_144;
              MR_Word ll_backend__llds_out__llds_out_instr__Rval_172 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__Target_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));

              {
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_172, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_144_144);
              }
              {
                ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Target_173, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_144_144, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Lval_174 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

              {
                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_174, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Lval_175 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

              {
                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_175, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__MaybeRegionRval_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 7)));
              MR_Word ll_backend__llds_out__llds_out_instr__MaybeReuse_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 8)));
              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_130_130;
              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_132_132;
              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_134_134;
              MR_Word ll_backend__llds_out__llds_out_instr__Lval_176 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__Rval_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 4)));
              MR_Word ll_backend__llds_out__llds_out_instr___Tag_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 5)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 6)));

              {
                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_176, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_130_130);
              }
              {
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_177, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_130_130, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_132_132);
              }
              if ((ll_backend__llds_out__llds_out_instr__MaybeRegionRval_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_134_134 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_132_132;
              else
                {
                  MR_Word ll_backend__llds_out__llds_out_instr__RegionRval_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeRegionRval_46, (MR_Integer) 0)));

                  {
                    ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__RegionRval_48, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_132_132, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_134_134);
                  }
                }
              if ((ll_backend__llds_out__llds_out_instr__MaybeReuse_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_134_134;
              else
                {
                  MR_Word ll_backend__llds_out__llds_out_instr__ReuseRval_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeReuse_47, (MR_Integer) 0)));
                  MR_Word ll_backend__llds_out__llds_out_instr__MaybeFlagLval_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeReuse_47, (MR_Integer) 1)));
                  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_136_136;

                  {
                    ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__ReuseRval_49, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_134_134, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_136_136);
                  }
                  if ((ll_backend__llds_out__llds_out_instr__MaybeFlagLval_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_136_136;
                  else
                    {
                      MR_Word ll_backend__llds_out__llds_out_instr__FlagLval_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__MaybeFlagLval_50, (MR_Integer) 0)));

                      {
                        ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__FlagLval_51, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_136_136, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
                      }
                    }
                }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Lval_203 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

              {
                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_203, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Rval_207 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

              {
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_207, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Rval_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

              {
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_179, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
              }
            }
            break;
          case (MR_Integer) 16:
            *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
            break;
          case (MR_Integer) 17:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__IdRval_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_instr__NumLval_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 4)));
              MR_Word ll_backend__llds_out__llds_out_instr__AddrLval_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 5)));
              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_120_120;
              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_122_122;
              MR_Word ll_backend__llds_out__llds_out_instr___FillOp_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr___EmbeddedFrame_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));

              {
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__IdRval_57, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_120_120);
              }
              {
                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__NumLval_58, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_120_120, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_122_122);
              }
              {
                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__AddrLval_59, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_122_122, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__ValueRval_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_instr___SetOp_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr___EmbeddedFrame_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));

              {
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__ValueRval_61, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
              }
            }
            break;
          case (MR_Integer) 19:
            *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
            break;
          case (MR_Integer) 20:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Lval_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

              {
                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_208, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Rval_206 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr___Reason_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));

              {
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_206, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
              }
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Lval_204 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

              {
                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_204, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
              }
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Rval_205 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

              {
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Rval_205, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
              }
            }
            break;
          case (MR_Integer) 24:
            *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
            break;
          case (MR_Integer) 25:
            *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
            break;
          case (MR_Integer) 26:
            *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81;
            break;
          case (MR_Integer) 27:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Comps_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_115_115;
              MR_Word ll_backend__llds_out__llds_out_instr__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 4)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 5)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 6)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 7)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 8)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 9)));
              MR_Word ll_backend__llds_out__llds_out_instr__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 10)));
              MR_Box ll_backend__llds_out__llds_out_instr__conv5_STATE_VARIABLE_DeclSet_82;
              MR_Box ll_backend__llds_out__llds_out_instr__conv4_STATE_VARIABLE_IO_84;

              {
                ll_backend__llds_out__llds_out_instr__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_115_115, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_115_115, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0_2));
                MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_115_115, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__V_115_115, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__Info_7));
              }
              {
                mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0, (MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_1[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_instr__V_115_115, ll_backend__llds_out__llds_out_instr__Comps_63, ((MR_Box) (ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81)), &ll_backend__llds_out__llds_out_instr__conv5_STATE_VARIABLE_DeclSet_82, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_instr__conv4_STATE_VARIABLE_IO_84);
              }
              *ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82 = ((MR_Word) ll_backend__llds_out__llds_out_instr__conv5_STATE_VARIABLE_DeclSet_82);
            }
            break;
          case (MR_Integer) 28:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Lval_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
              MR_Integer ll_backend__llds_out__llds_out_instr___NumBranches_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
              MR_Integer ll_backend__llds_out__llds_out_instr___ConjIdSlotNum_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));

              {
                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_178, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
              }
            }
            break;
          case (MR_Integer) 29:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Child_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_110_110;
              MR_Word ll_backend__llds_out__llds_out_instr__V_112_112;
              MR_Word ll_backend__llds_out__llds_out_instr__Lval_182 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

              {
                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_182, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_110_110);
              }
              {
                ll_backend__llds_out__llds_out_instr__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_112_112, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__Child_72));
              }
              {
                ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__V_112_112, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_110_110, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
              }
            }
            break;
          case (MR_Integer) 30:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__Label_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_105_105;
              MR_Word ll_backend__llds_out__llds_out_instr__V_107_107;
              MR_Word ll_backend__llds_out__llds_out_instr__Lval_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

              {
                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Lval_183, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_105_105);
              }
              {
                ll_backend__llds_out__llds_out_instr__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_107_107, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__Label_73));
              }
              {
                ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__V_107_107, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_105_105, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
              }
            }
            break;
          case (MR_Integer) 31:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__LCLval_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
              MR_Integer ll_backend__llds_out__llds_out_instr__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

              {
                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__LCLval_75, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
              }
            }
            break;
          case (MR_Integer) 32:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__LCRval_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__LCSLval_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__InternalLabel_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_96_96;
              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_98_98;
              MR_Word ll_backend__llds_out__llds_out_instr__V_100_100;

              {
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__LCRval_76, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_96_96);
              }
              {
                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__LCSLval_77, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_96_96, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_98_98);
              }
              {
                ll_backend__llds_out__llds_out_instr__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_100_100, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__InternalLabel_78));
              }
              {
                ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__V_100_100, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_98_98, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
              }
            }
            break;
          case (MR_Integer) 33:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__LCSRval_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_instr__ChildLabel_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_89_89;
              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_91_91;
              MR_Word ll_backend__llds_out__llds_out_instr__V_93_93;
              MR_Word ll_backend__llds_out__llds_out_instr__LCRval_184 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

              {
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__LCRval_184, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_89_89);
              }
              {
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__LCSRval_79, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_89_89, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_91_91);
              }
              {
                ll_backend__llds_out__llds_out_instr__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__V_93_93, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__ChildLabel_80));
              }
              {
                ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__V_93_93, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_91_91, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
              }
            }
            break;
          case (MR_Integer) 34:
            {
              MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_85_85;
              MR_Word ll_backend__llds_out__llds_out_instr__LCRval_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_instr__LCSRval_186 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 2)));

              {
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__LCRval_185, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_81, &ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_85_85);
              }
              {
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__LCSRval_186, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_85_85, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_82);
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_debug_instruction_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_5,
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_6)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
    MR_Word ll_backend__llds_out__llds_out_instr__TypeCtorInfo_26_26;
    MR_Word ll_backend__llds_out__llds_out_instr__DummyModule_8 = (MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_2[0];
    MR_Integer ll_backend__llds_out__llds_out_instr__InitialProcIdInt_10;
    MR_Word ll_backend__llds_out__llds_out_instr__ProcLabel_11;
    MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_12;
    MR_Word ll_backend__llds_out__llds_out_instr__ContLabels_13;
    MR_Word ll_backend__llds_out__llds_out_instr__WhileLabels_14;
    MR_Word ll_backend__llds_out__llds_out_instr__UndefWhileLabels_15;
    MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_16;
    MR_Integer ll_backend__llds_out__llds_out_instr__V_20_20;

    {
      ll_backend__llds_out__llds_out_instr__V_20_20 = hlds__hlds_pred__initial_proc_id_0_f_0();
    }
    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__llds_out__llds_out_instr__V_20_20, &ll_backend__llds_out__llds_out_instr__InitialProcIdInt_10);
    }
    {
      ll_backend__llds_out__llds_out_instr__ProcLabel_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_11, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__DummyModule_8));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_11, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_11, 2) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__DummyModule_8));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_11, 3) = ((MR_Box) ((MR_String) "DEBUG"));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_11, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_11, 5) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__InitialProcIdInt_10));
    }
    {
      ll_backend__llds_out__llds_out_instr__CallerLabel_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__CallerLabel_12, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__CallerLabel_12, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__ProcLabel_11));
    }
    ll_backend__llds_out__llds_out_instr__TypeCtorInfo_26_26 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
    {
      ll_backend__llds_out__llds_out_instr__ContLabels_13 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_instr__TypeCtorInfo_26_26);
    }
    {
      ll_backend__llds_out__llds_out_instr__WhileLabels_14 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_instr__TypeCtorInfo_26_26);
    }
    {
      ll_backend__llds_out__llds_out_instr__UndefWhileLabels_15 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_instr__TypeCtorInfo_26_26);
    }
    {
      ll_backend__llds_out__llds_out_instr__LabelOutputInfo_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_16, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__CallerLabel_12));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_16, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__ContLabels_13));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_16, 2) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__WhileLabels_14));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_16, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__UndefWhileLabels_15));
    }
    {
      ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(ll_backend__llds_out__llds_out_instr__Info_5, ll_backend__llds_out__llds_out_instr__Instr_6, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_16);
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_6,
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_7,
  MR_String ll_backend__llds_out__llds_out_instr__Comment_8)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
    MR_Word ll_backend__llds_out__llds_out_instr__TypeCtorInfo_28_28;
    MR_Word ll_backend__llds_out__llds_out_instr__DummyModule_10 = (MR_Word) &ll_backend__llds_out__llds_out_instr_scalar_common_2[0];
    MR_Integer ll_backend__llds_out__llds_out_instr__InitialProcIdInt_12;
    MR_Word ll_backend__llds_out__llds_out_instr__ProcLabel_13;
    MR_Word ll_backend__llds_out__llds_out_instr__CallerLabel_14;
    MR_Word ll_backend__llds_out__llds_out_instr__ContLabels_15;
    MR_Word ll_backend__llds_out__llds_out_instr__WhileLabels_16;
    MR_Word ll_backend__llds_out__llds_out_instr__UndefWhileLabels_17;
    MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_18;
    MR_Integer ll_backend__llds_out__llds_out_instr__V_22_22;
    MR_Word ll_backend__llds_out__llds_out_instr__AutoComments_36;
    MR_Word ll_backend__llds_out__llds_out_instr__V_46_46;
    MR_String ll_backend__llds_out__llds_out_instr__V_47_47;
    MR_String ll_backend__llds_out__llds_out_instr__V_48_48;
    MR_Word ll_backend__llds_out__llds_out_instr__V_49_49;
    MR_Word ll_backend__llds_out__llds_out_instr__V_50_50;
    MR_Word ll_backend__llds_out__llds_out_instr__V_51_51;
    MR_Word ll_backend__llds_out__llds_out_instr__V_52_52;
    MR_Word ll_backend__llds_out__llds_out_instr__V_53_53;
    MR_Word ll_backend__llds_out__llds_out_instr__V_54_54;
    MR_Word ll_backend__llds_out__llds_out_instr__V_55_55;
    MR_Word ll_backend__llds_out__llds_out_instr__V_56_56;
    MR_Word ll_backend__llds_out__llds_out_instr__V_57_57;
    MR_Word ll_backend__llds_out__llds_out_instr__V_58_58;
    MR_Word ll_backend__llds_out__llds_out_instr__V_59_59;
    MR_Word ll_backend__llds_out__llds_out_instr__V_60_60;
    MR_Word ll_backend__llds_out__llds_out_instr__V_61_61;
    MR_Word ll_backend__llds_out__llds_out_instr__V_62_62;
    MR_Word ll_backend__llds_out__llds_out_instr__V_63_63;
    MR_Word ll_backend__llds_out__llds_out_instr__V_64_64;
    MR_Word ll_backend__llds_out__llds_out_instr__V_65_65;
    MR_Word ll_backend__llds_out__llds_out_instr__V_66_66;

    {
      ll_backend__llds_out__llds_out_instr__V_22_22 = hlds__hlds_pred__initial_proc_id_0_f_0();
    }
    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__llds_out__llds_out_instr__V_22_22, &ll_backend__llds_out__llds_out_instr__InitialProcIdInt_12);
    }
    {
      ll_backend__llds_out__llds_out_instr__ProcLabel_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_13, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__DummyModule_10));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_13, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_13, 2) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__DummyModule_10));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_13, 3) = ((MR_Box) ((MR_String) "DEBUG"));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_13, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__ProcLabel_13, 5) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__InitialProcIdInt_12));
    }
    {
      ll_backend__llds_out__llds_out_instr__CallerLabel_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__CallerLabel_14, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__CallerLabel_14, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__ProcLabel_13));
    }
    ll_backend__llds_out__llds_out_instr__TypeCtorInfo_28_28 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
    {
      ll_backend__llds_out__llds_out_instr__ContLabels_15 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_instr__TypeCtorInfo_28_28);
    }
    {
      ll_backend__llds_out__llds_out_instr__WhileLabels_16 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_instr__TypeCtorInfo_28_28);
    }
    {
      ll_backend__llds_out__llds_out_instr__UndefWhileLabels_17 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_instr__TypeCtorInfo_28_28);
    }
    {
      ll_backend__llds_out__llds_out_instr__LabelOutputInfo_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_18, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__CallerLabel_14));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_18, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__ContLabels_15));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_18, 2) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__WhileLabels_16));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_18, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__UndefWhileLabels_17));
    }
    ll_backend__llds_out__llds_out_instr__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 0)));
    ll_backend__llds_out__llds_out_instr__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 1)));
    ll_backend__llds_out__llds_out_instr__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 2)));
    ll_backend__llds_out__llds_out_instr__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 3)));
    ll_backend__llds_out__llds_out_instr__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 4)));
    ll_backend__llds_out__llds_out_instr__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 5)));
    ll_backend__llds_out__llds_out_instr__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 6)));
    ll_backend__llds_out__llds_out_instr__AutoComments_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__llds_out__llds_out_instr__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    ll_backend__llds_out__llds_out_instr__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_6, (MR_Integer) 8)));
    switch (ll_backend__llds_out__llds_out_instr__AutoComments_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 1))))
            ll_backend__llds_out__llds_out_instr__succeeded = MR_TRUE;
          else
          if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instr_7)) == (MR_mktag((MR_Integer) 2))))
            ll_backend__llds_out__llds_out_instr__succeeded = MR_TRUE;
          else
            ll_backend__llds_out__llds_out_instr__succeeded = MR_FALSE;
          if (ll_backend__llds_out__llds_out_instr__succeeded)
            {
            }
          else
            {
              ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Instr_7, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_18);
            }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(ll_backend__llds_out__llds_out_instr__Info_6, ll_backend__llds_out__llds_out_instr__Instr_7, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_18);
          }
          ll_backend__llds_out__llds_out_instr__succeeded = (strcmp(ll_backend__llds_out__llds_out_instr__Comment_8, (MR_String) "") == 0);
          if (ll_backend__llds_out__llds_out_instr__succeeded)
            {
            }
          else
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "\t\t/* ");
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_instr__Comment_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " */\n");
              }
            }
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_1,
  MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2_2,
  MR_Word ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3,
  MR_Word ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_instr__succeeded;

        if ((ll_backend__llds_out__llds_out_instr__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_instr__Instr_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_instr__Instrs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__llds_out__llds_out_instr__Uinstr_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr_14, (MR_Integer) 0)));
            MR_String ll_backend__llds_out__llds_out_instr__Comment_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr_14, (MR_Integer) 1)));
            MR_Word ll_backend__llds_out__llds_out_instr__Label_21;

            ll_backend__llds_out__llds_out_instr__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (ll_backend__llds_out__llds_out_instr__succeeded)
              {
                ll_backend__llds_out__llds_out_instr__Label_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 1)));
                {
                  MR_Word ll_backend__llds_out__llds_out_instr__InternalLabelToLayoutMap_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 3)));
                  MR_Word ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_24;
                  MR_Word ll_backend__llds_out__llds_out_instr__WhileLabels_25;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 0)));
                  MR_String ll_backend__llds_out__llds_out_instr__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 1)));
                  MR_String ll_backend__llds_out__llds_out_instr__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 2)));
                  MR_Word ll_backend__llds_out__llds_out_instr__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 4)));
                  MR_Word ll_backend__llds_out__llds_out_instr__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 5)));
                  MR_Word ll_backend__llds_out__llds_out_instr__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 6)));
                  MR_Word ll_backend__llds_out__llds_out_instr__V_62_62 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
                  MR_Word ll_backend__llds_out__llds_out_instr__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Info_1, (MR_Integer) 8)));
                  MR_Word ll_backend__llds_out__llds_out_instr__V_23_23;
                  MR_Box ll_backend__llds_out__llds_out_instr__conv0_V_23_23;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_77_77;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_78_78;
                  MR_Word ll_backend__llds_out__llds_out_instr__V_79_79;

                  {
                    ll_backend__llds_out__llds_out_instr__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__llds_out__llds_out_instr__InternalLabelToLayoutMap_22, ((MR_Box) (ll_backend__llds_out__llds_out_instr__Label_21)), &ll_backend__llds_out__llds_out_instr__conv0_V_23_23);
                  }
                  if (ll_backend__llds_out__llds_out_instr__succeeded)
                    {
                      ll_backend__llds_out__llds_out_instr__V_23_23 = ((MR_Word) ll_backend__llds_out__llds_out_instr__conv0_V_23_23);
                      ll_backend__llds_out__llds_out_instr__succeeded = MR_TRUE;
                    }
                  if (ll_backend__llds_out__llds_out_instr__succeeded)
                    ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_24 = (MR_Integer) 1;
                  else
                    ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_24 = (MR_Integer) 0;
                  ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0_4 == (MR_Integer) 1);
                  if (ll_backend__llds_out__llds_out_instr__succeeded)
                    ll_backend__llds_out__llds_out_instr__succeeded = (ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_24 == (MR_Integer) 1);
                  if (ll_backend__llds_out__llds_out_instr__succeeded)
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "\tMR_dummy_function_call();\n");
                      }
                    }
                  else
                    {
                    }
                  ll_backend__llds_out__llds_out_instr__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3, (MR_Integer) 0)));
                  ll_backend__llds_out__llds_out_instr__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3, (MR_Integer) 1)));
                  ll_backend__llds_out__llds_out_instr__WhileLabels_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3, (MR_Integer) 2)));
                  ll_backend__llds_out__llds_out_instr__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3, (MR_Integer) 3)));
                  {
                    ll_backend__llds_out__llds_out_instr__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__llds_out__llds_out_instr__WhileLabels_25, ((MR_Box) (ll_backend__llds_out__llds_out_instr__Label_21)));
                  }
                  if (ll_backend__llds_out__llds_out_instr__succeeded)
                    {
                      MR_Word ll_backend__llds_out__llds_out_instr__UndefWhileLabels_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3, (MR_Integer) 3)));
                      MR_Word ll_backend__llds_out__llds_out_instr__AfterWhileInstrs_27;
                      MR_Word ll_backend__llds_out__llds_out_instr__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3, (MR_Integer) 0)));
                      MR_Word ll_backend__llds_out__llds_out_instr__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3, (MR_Integer) 1)));
                      MR_Word ll_backend__llds_out__llds_out_instr__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3, (MR_Integer) 2)));

                      {
                        ll_backend__llds_out__llds_out_instr__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__llds_out__llds_out_instr__UndefWhileLabels_26, ((MR_Box) (ll_backend__llds_out__llds_out_instr__Label_21)));
                      }
                      if (ll_backend__llds_out__llds_out_instr__succeeded)
                        {
                        }
                      else
                        {
                          ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Uinstr_19, ll_backend__llds_out__llds_out_instr__Comment_20, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3);
                        }
                      {
                        mercury__io__write_string_3_p_0((MR_String) "\twhile (1) {\n");
                      }
                      {
                        ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Label_21, ll_backend__llds_out__llds_out_instr__Instrs_15, &ll_backend__llds_out__llds_out_instr__AfterWhileInstrs_27, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) "\t} /* end while */\n");
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__AfterWhileInstrs_27;

                        ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0_4 = (MR_Integer) 0;
                        ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                  else
                    {
                      {
                        ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Uinstr_19, ll_backend__llds_out__llds_out_instr__Comment_20, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Instrs_15;
                        MR_Word ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0__tmp_copy_4 = ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_24;

                        ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0_4 = ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0__tmp_copy_4;
                        ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
              }
            else
              {
                MR_Word ll_backend__llds_out__llds_out_instr__Instrs1_29;
                MR_Word ll_backend__llds_out__llds_out_instr__Lval_32;
                MR_Word ll_backend__llds_out__llds_out_instr__Rval_33;
                MR_Word ll_backend__llds_out__llds_out_instr__Instr1_28;
                MR_Word ll_backend__llds_out__llds_out_instr__Uinstr1_30;
                MR_String ll_backend__llds_out__llds_out_instr__V_31_31;

                ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Instrs_15)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__llds_out__llds_out_instr__succeeded)
                  {
                    ll_backend__llds_out__llds_out_instr__Instr1_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Instrs_15, (MR_Integer) 0)));
                    ll_backend__llds_out__llds_out_instr__Instrs1_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Instrs_15, (MR_Integer) 1)));
                    ll_backend__llds_out__llds_out_instr__Uinstr1_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr1_28, (MR_Integer) 0)));
                    ll_backend__llds_out__llds_out_instr__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr1_28, (MR_Integer) 1)));
                    {
                      ll_backend__llds_out__llds_out_instr__succeeded = ll_backend__llds_out__llds_out_instr__is_aligned_float_dword_assignment_4_p_0(ll_backend__llds_out__llds_out_instr__Uinstr_19, ll_backend__llds_out__llds_out_instr__Uinstr1_30, &ll_backend__llds_out__llds_out_instr__Lval_32, &ll_backend__llds_out__llds_out_instr__Rval_33);
                    }
                  }
                if (ll_backend__llds_out__llds_out_instr__succeeded)
                  {
                    {
                      ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_5_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Lval_32, ll_backend__llds_out__llds_out_instr__Rval_33);
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Instrs1_29;

                      ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0_4 = (MR_Integer) 0;
                      ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
                    }
                    continue;
                  }
                else
                  {
                    MR_Word ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_54;
                    MR_String ll_backend__llds_out__llds_out_instr__V_34_34;

                    {
                      ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(ll_backend__llds_out__llds_out_instr__Info_1, ll_backend__llds_out__llds_out_instr__Uinstr_19, ll_backend__llds_out__llds_out_instr__Comment_20, ll_backend__llds_out__llds_out_instr__LabelOutputInfo_3);
                    }
                    ll_backend__llds_out__llds_out_instr__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_instr__Uinstr_19)) == (MR_mktag((MR_Integer) 1)));
                    if (ll_backend__llds_out__llds_out_instr__succeeded)
                      {
                        ll_backend__llds_out__llds_out_instr__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_instr__Uinstr_19, (MR_Integer) 0)));
                        ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_54 = ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0_4;
                      }
                    else
                      ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_54 = (MR_Integer) 0;
                    /* direct tailcall eliminated */
                    {
                      MR_Word ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_instr__Instrs_15;
                      MR_Word ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0__tmp_copy_4 = ll_backend__llds_out__llds_out_instr__AfterLayoutLabel_54;

                      ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0_4 = ll_backend__llds_out__llds_out_instr__AfterLayoutLabel0__tmp_copy_4;
                      ll_backend__llds_out__llds_out_instr__HeadVar__2_2 = ll_backend__llds_out__llds_out_instr__HeadVar__2__tmp_copy_2;
                    }
                    continue;
                  }
              }
          }
      }
      break;
    }
}

void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instruction_decls_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_instr__Info_7,
  MR_Word ll_backend__llds_out__llds_out_instr__Instr_8,
  MR_Word ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_13,
  MR_Word * ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_14)
{
  {
    MR_bool ll_backend__llds_out__llds_out_instr__succeeded;
    MR_Word ll_backend__llds_out__llds_out_instr__Uinstr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 0)));
    MR_String ll_backend__llds_out__llds_out_instr__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_instr__Instr_8, (MR_Integer) 1)));

    {
      ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0(ll_backend__llds_out__llds_out_instr__Info_7, ll_backend__llds_out__llds_out_instr__Uinstr_11, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_0_13, ll_backend__llds_out__llds_out_instr__STATE_VARIABLE_DeclSet_14);
    }
  }
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
