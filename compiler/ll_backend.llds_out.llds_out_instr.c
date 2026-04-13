/*
** Automatically generated from `llds_out_instr.m'
** by the Mercury compiler,
** version rotd-2026-04-13
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


// :- module ll_backend.llds_out.llds_out_instr.
// :- implementation.

/*
INIT mercury__ll_backend__llds_out__llds_out_instr__init
ENDINIT
*/

#include "ll_backend.llds_out.llds_out_instr.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.export.mih"
#include "backend_libs.name_mangle.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.foreign_proc_gen.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.layout_out.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "ll_backend.llds_out.llds_out_code_addr.mih"
#include "ll_backend.llds_out.llds_out_data.mih"
#include "ll_backend.llds_out.llds_out_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_instr__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_instr__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_0;

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_1;

static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_ordinal_ordered_after_layout_label_0[2];

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
ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_float_dword_assignment__461__1_2_p_0(
  MR_Word Type_12,
  MR_Word HeadVar__2_22);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_instruction_list_while_block__413__1_2_p_0(
  MR_Word Instrs_18,
  MR_Word HeadVar__2_40);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word Component_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_5_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_output_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word Output_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_5_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word Input_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_alloc_site_id_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word AllocId_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Component_10,
  MR_Word STATE_VARIABLE_DeclSet_0_24,
  MR_Word * STATE_VARIABLE_DeclSet_25);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_7_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_DeclSet_0_4,
  MR_Word * STATE_VARIABLE_DeclSet_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_7_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_DeclSet_0_4,
  MR_Word * STATE_VARIABLE_DeclSet_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Instr_10,
  MR_String Comment_11,
  MR_Word LabelOutputInfo_12);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_7_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3,
  MR_Word Label_4,
  MR_Word LabelOutputInfo_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_8_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word Label_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word LabelOutputInfo_6);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_6_p_0_3(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word Instr_9,
  MR_Word LabelOutputInfo_10);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word Lval_9,
  MR_Word Rval_10);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__is_aligned_float_dword_assignment_4_p_0(
  MR_Word InstrA_5,
  MR_Word InstrB_6,
  MR_Word * LvalA_7,
  MR_Word * Rval_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_99_114_95_104_112_95_110_111_95_114_101_117_115_101_95_95_91_49_48_93_95_48_12_p_0(
  MR_Word Info_13,
  MR_Word Stream_14,
  MR_Word Lval_15,
  MR_Word MaybePtag_16,
  MR_Word MaybeOffset_17,
  MR_Word SizeRval_18,
  MR_Word MaybeAllocId_19,
  MR_Word MayUseAtomicAlloc_20,
  MR_Word MaybeRegionRval_21);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_maybe_alloc_site_id_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word MaybeAllocId_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
ll_backend__llds_out__llds_out_instr__reset_trail_reason_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Integer MR_CALL 
ll_backend__llds_out__llds_out_instr__max_leaf_stack_frame_size_0_f_0(void);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word EmbeddedFrame_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_goto_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word Target_9,
  MR_Word CallerLabel_10);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word Label_9,
  MR_Word LabelOutputInfo_10);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_defn_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word LiveVals_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_5_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_live_value_type_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_5_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_layout_locns_5_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_call_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Target_10,
  MR_Word Continuation_11,
  MR_Word CallerLabel_12);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_block_end_3_p_0(
  MR_Word Stream_4);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_block_start_5_p_0(
  MR_Word Stream_6,
  MR_Integer TempR_7,
  MR_Integer TempF_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_temp_decls_2_6_p_0(
  MR_Word Stream_7,
  MR_Integer Next_8,
  MR_Integer Max_9,
  MR_String Type_10);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_livevals_5_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_comment_chars_5_p_0(
  MR_Word Stream_1,
  MR_Char HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Instr_10,
  MR_Word STATE_VARIABLE_DeclSet_0_84,
  MR_Word * STATE_VARIABLE_DeclSet_85);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr____Unify____after_layout_label_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr____Compare____after_layout_label_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr____Unify____label_output_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr____Compare____label_output_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_1[6][2];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_2[6][1];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_3[2][10];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_5[2][5];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_6[1][8];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_7[1][4];


struct ll_backend__llds_out__llds_out_instr__vector_common_type_4_0_s {
  const MR_String ll_backend__llds_out__llds_out_instr__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct ll_backend__llds_out__llds_out_instr__vector_common_type_4_0_s ll_backend__llds_out__llds_out_instr_vector_common_4[6];



static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_1[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_2[6][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "DEBUG")) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   2 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 8U) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 9U) },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_3[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_instr__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_instr__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_instr__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_instr__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_5[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_instr__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_instr__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_6[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_7[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};


static /* final */ const struct ll_backend__llds_out__llds_out_instr__vector_common_type_4_0_s ll_backend__llds_out__llds_out_instr_vector_common_4[6] = {
  /* row   0 */   { (MR_String) "MR_undo" },
  /* row   1 */   { (MR_String) "MR_commit" },
  /* row   2 */   { (MR_String) "MR_solve" },
  /* row   3 */   { (MR_String) "MR_exception" },
  /* row   4 */   { (MR_String) "MR_retry" },
  /* row   5 */   { (MR_String) "MR_gc" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_instr__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_PseudoTypeInfo) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_instr__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0) }
};

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_0 = {
  (MR_String) "not_after_layout_label",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_1 = {
  (MR_String) "after_layout_label",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_ordinal_ordered_after_layout_label_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__llds_out__llds_out_instr____Unify____after_layout_label_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_instr____Compare____after_layout_label_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_instr",
  (MR_String) "after_layout_label",
  { ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_name_ordered_after_layout_label_0 },
  { ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_ordinal_ordered_after_layout_label_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__functor_number_map_after_layout_label_0,

};

static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_instr__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0) }
};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__field_types_label_output_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds_out__llds_out_instr__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds_out__llds_out_instr__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds_out__llds_out_instr__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0)
};

static const MR_ConstString ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__field_names_label_output_info_0_0[4] = {
  (MR_String) "loi_caller_label",
  (MR_String) "loi_cont_labels",
  (MR_String) "loi_while_labels",
  (MR_String) "loi_undef_while_labels"
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_functor_desc_label_output_info_0_0 = {
  (MR_String) "label_output_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__field_types_label_output_info_0_0,
  ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__field_names_label_output_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_stag_ordered_label_output_info_0_0[1] = { &ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_functor_desc_label_output_info_0_0 };

static const MR_DuPtagLayout ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_ptag_ordered_label_output_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_stag_ordered_label_output_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_name_ordered_label_output_info_0[1] = { &ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_functor_desc_label_output_info_0_0 };

static const MR_Integer ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__functor_number_map_label_output_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__type_ctor_info_label_output_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__llds_out__llds_out_instr____Unify____label_output_info_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_instr____Compare____label_output_info_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_instr",
  (MR_String) "label_output_info",
  { ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_name_ordered_label_output_info_0 },
  { ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_ptag_ordered_label_output_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__functor_number_map_label_output_info_0,

};

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_float_dword_assignment__461__1_2_p_0(
  MR_Word Type_12,
  MR_Word HeadVar__2_22)
{
  MR_bool succeeded;

  succeeded = ll_backend__llds____Unify____llds_type_0_0(Type_12, HeadVar__2_22);
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_instruction_list_while_block__413__1_2_p_0(
  MR_Word Instrs_18,
  MR_Word HeadVar__2_40)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__llds_out__llds_out_instr_scalar_common_1[0]), ((MR_Box) (Instrs_18)), ((MR_Box) (HeadVar__2_40)));
  return succeeded;
}

void MR_CALL 
ll_backend__llds_out__llds_out_instr____Compare____label_output_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    ll_backend__llds____Compare____label_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_instr_scalar_common_1[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_instr_scalar_common_1[3]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_instr_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr____Unify____label_output_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = ll_backend__llds____Unify____label_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&ll_backend__llds_out__llds_out_instr_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&ll_backend__llds_out__llds_out_instr_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&ll_backend__llds_out__llds_out_instr_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
ll_backend__llds_out__llds_out_instr____Compare____after_layout_label_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr____Unify____after_layout_label_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word Component_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Component_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Inputs_10 = ((MR_Word) ((MR_hl_field(1, Component_8, 0))));

        ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_5_p_0(Info_6, Stream_7, Inputs_10);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Outputs_11 = ((MR_Word) ((MR_hl_field(2, Component_8, 0))));

        ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_5_p_0(Info_6, Stream_7, Outputs_11);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Component_8, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MaybeContext_12 = ((MR_Word) ((MR_hl_field(3, Component_8, 1))));
            MR_String C_Code_14 = ((MR_String) ((MR_hl_field(3, Component_8, 3))));

            succeeded = (strcmp(C_Code_14, (MR_String) "") == 0);
            if (!(succeeded))
            {
              if ((MaybeContext_12 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "{\n");
                mercury__io__write_string_4_p_0(Stream_7, C_Code_14);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ";}\n");
              }
              else
              {
                MR_Word Context_15 = ((MR_Word) ((MR_hl_field(1, MaybeContext_12, 0))));
                MR_String OutputFileName_16;
                MR_Word Var_28;
                MR_Word Var_83;

                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "{\n");
                Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, 8))) >> 14)) & (MR_Integer) 1);
                ll_backend__llds_out__llds_out_util__output_set_line_num_5_p_0(Stream_7, Var_28, Context_15);
                mercury__io__write_string_4_p_0(Stream_7, C_Code_14);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ";}\n");
                OutputFileName_16 = ((MR_String) ((MR_hl_field(0, Info_6, 3))));
                Var_83 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, 8))) >> 14)) & (MR_Integer) 1);
                ll_backend__llds_out__llds_out_util__output_reset_line_num_5_p_0(Stream_7, Var_83, OutputFileName_16);
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String C_Code_51 = ((MR_String) ((MR_hl_field(3, Component_8, 3))));

            mercury__io__write_string_4_p_0(Stream_7, C_Code_51);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Label_20 = ((MR_Word) ((MR_hl_field(3, Component_8, 1))));
            MR_String Var_41;
            MR_String Var_44;
            MR_String Var_45;

            Var_45 = ll_backend__foreign_proc_gen__foreign_proc_succ_ind_name_0_f_0();
            Var_44 = mercury__string__f_43_43_2_f_0(Var_45, (MR_String) ") MR_GOTO_LAB(");
            Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "if (!", Var_44);
            mercury__io__write_string_4_p_0(Stream_7, Var_41);
            ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_4_p_0(Stream_7, Label_20);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ");\n");
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word AllocId_21 = ((MR_Word) ((MR_hl_field(3, Component_8, 1))));

            ll_backend__llds_out__llds_out_instr__output_alloc_site_id_5_p_0(Info_6, Stream_7, AllocId_21);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_5_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Output_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Outputs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word IsDummy_18 = ((MR_Unsigned) ((MR_hl_field(0, Output_13, 2))) & (MR_Integer) 1);
      MR_Word next_value_of_HeadVar__3_3;

      switch (IsDummy_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          ll_backend__llds_out__llds_out_instr__output_foreign_proc_output_5_p_0(Info_1, Stream_2, Output_13);
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Outputs_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_output_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word Output_8)
{
  MR_bool succeeded;
  MR_Word Lval_10 = ((MR_Word) ((MR_hl_field(0, Output_8, 0))));
  MR_Word OrigType_13 = ((MR_Word) ((MR_hl_field(0, Output_8, 3))));
  MR_String VarName_14 = ((MR_String) ((MR_hl_field(0, Output_8, 4))));
  MR_Word MaybeForeignType_15 = ((MR_Word) ((MR_hl_field(0, Output_8, 5))));
  MR_Word BoxPolicy_16 = ((MR_Unsigned) ((MR_hl_field(0, Output_8, 6))) & (MR_Integer) 1);

  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\t");
  switch (BoxPolicy_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_6, Stream_7, Lval_10);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) " = ");
        mercury__io__write_string_4_p_0(Stream_7, VarName_14);
      }
      break;
    case (MR_Integer) 0:
      if ((MaybeForeignType_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word BuiltinType_21;

        succeeded = ((MR_tag((MR_Word) OrigType_13)) == (MR_Integer) 2);
        if (succeeded)
        {
          BuiltinType_21 = ((MR_Word) ((MR_hl_field(2, OrigType_13, 0))));
          switch (MR_tag((MR_Word) BuiltinType_21)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(BuiltinType_21)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ActualType_22;

                    ll_backend__llds__lval_type_2_p_0(Lval_10, &ActualType_22);
                    succeeded = (ActualType_22 == (MR_Word) ((MR_Unsigned) 4U));
                    if (succeeded)
                    {
                      ll_backend__llds_out__llds_out_data__output_lval_5_p_0(Info_6, Stream_7, Lval_10);
                      mercury__io__write_string_4_p_0(Stream_7, (MR_String) " = ");
                      mercury__io__write_string_4_p_0(Stream_7, VarName_14);
                    }
                    else
                    {
                      ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_6, Stream_7, Lval_10);
                      mercury__io__write_string_4_p_0(Stream_7, (MR_String) " = MR_float_to_word(");
                      mercury__io__write_string_4_p_0(Stream_7, VarName_14);
                      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String WordTypeStr_118;

                    WordTypeStr_118 = ll_backend__llds_out__llds_out_data__llds_type_to_string_1_f_0((MR_Word) ((MR_Unsigned) 20U));
                    ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_6, Stream_7, Lval_10);
                    mercury__io__write_string_4_p_0(Stream_7, (MR_String) " = (");
                    mercury__io__write_string_4_p_0(Stream_7, WordTypeStr_118);
                    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ") ");
                    mercury__io__write_string_4_p_0(Stream_7, VarName_14);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_6, Stream_7, Lval_10);
                    mercury__io__write_string_4_p_0(Stream_7, (MR_String) " = (MR_UnsignedChar) ");
                    mercury__io__write_string_4_p_0(Stream_7, VarName_14);
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntType_23 = ((MR_Unsigned) ((MR_hl_field(1, BuiltinType_21, 0))) & (MR_Integer) 15);

                switch (IntType_23) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 4:
                  case (MR_Integer) 6:
                  case (MR_Integer) 2:
                  case (MR_Integer) 1:
                  case (MR_Integer) 5:
                  case (MR_Integer) 7:
                  case (MR_Integer) 3:
                    {
                      ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_6, Stream_7, Lval_10);
                      mercury__io__write_string_4_p_0(Stream_7, (MR_String) " = ");
                      mercury__io__write_string_4_p_0(Stream_7, VarName_14);
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_Word ActualType_119;
                      MR_Word Var_84;

                      ll_backend__llds__lval_type_2_p_0(Lval_10, &ActualType_119);
                      succeeded = ((MR_tag((MR_Word) ActualType_119)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                        Var_84 = ((MR_Unsigned) ((MR_hl_field(2, ActualType_119, 0))) & (MR_Integer) 15);
                        succeeded = (Var_84 == (MR_Integer) 8);
                      }
                      if (succeeded)
                      {
                        ll_backend__llds_out__llds_out_data__output_lval_5_p_0(Info_6, Stream_7, Lval_10);
                        mercury__io__write_string_4_p_0(Stream_7, (MR_String) " = ");
                        mercury__io__write_string_4_p_0(Stream_7, VarName_14);
                      }
                      else
                      {
                        ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_6, Stream_7, Lval_10);
                        mercury__io__write_string_4_p_0(Stream_7, (MR_String) " = MR_int64_to_word(");
                        mercury__io__write_string_4_p_0(Stream_7, VarName_14);
                        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
                      }
                    }
                    break;
                  case (MR_Integer) 9:
                    {
                      MR_Word ActualType_120;
                      MR_Word Var_97;

                      ll_backend__llds__lval_type_2_p_0(Lval_10, &ActualType_120);
                      succeeded = ((MR_tag((MR_Word) ActualType_120)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                        Var_97 = ((MR_Unsigned) ((MR_hl_field(2, ActualType_120, 0))) & (MR_Integer) 15);
                        succeeded = (Var_97 == (MR_Integer) 9);
                      }
                      if (succeeded)
                      {
                        ll_backend__llds_out__llds_out_data__output_lval_5_p_0(Info_6, Stream_7, Lval_10);
                        mercury__io__write_string_4_p_0(Stream_7, (MR_String) " = ");
                        mercury__io__write_string_4_p_0(Stream_7, VarName_14);
                      }
                      else
                      {
                        ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_6, Stream_7, Lval_10);
                        mercury__io__write_string_4_p_0(Stream_7, (MR_String) " = MR_uint64_to_word(");
                        mercury__io__write_string_4_p_0(Stream_7, VarName_14);
                        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
                      }
                    }
                    break;
                }
              }
              break;
          }
        }
        else
        {
          ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_6, Stream_7, Lval_10);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) " = ");
          mercury__io__write_string_4_p_0(Stream_7, VarName_14);
        }
      }
      else
      {
        MR_Word ForeignTypeInfo_17 = ((MR_Word) ((MR_hl_field(1, MaybeForeignType_15, 0))));
        MR_String ForeignType_18 = ((MR_String) ((MR_hl_field(0, ForeignTypeInfo_17, 0))));
        MR_Word Assertions_19 = ((MR_Word) ((MR_hl_field(0, ForeignTypeInfo_17, 1))));

        succeeded = hlds__hlds_data__asserted_can_pass_as_mercury_type_1_p_0(Assertions_19);
        if (succeeded)
        {
          MR_String WordTypeStr_20;

          WordTypeStr_20 = ll_backend__llds_out__llds_out_data__llds_type_to_string_1_f_0((MR_Word) ((MR_Unsigned) 20U));
          ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_6, Stream_7, Lval_10);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) " = (");
          mercury__io__write_string_4_p_0(Stream_7, WordTypeStr_20);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ") ");
          mercury__io__write_string_4_p_0(Stream_7, VarName_14);
        }
        else
        {
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_MAYBE_BOX_FOREIGN_TYPE(");
          mercury__io__write_string_4_p_0(Stream_7, ForeignType_18);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
          mercury__io__write_string_4_p_0(Stream_7, VarName_14);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
          ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_6, Stream_7, Lval_10);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
        }
      }
      break;
  }
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ";\n");
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_5_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Input_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Inputs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_String VarName_16 = ((MR_String) ((MR_hl_field(0, Input_13, 0))));
      MR_Word VarType_17 = ((MR_Word) ((MR_hl_field(0, Input_13, 1))));
      MR_Word IsDummy_18 = ((MR_Unsigned) ((MR_hl_field(0, Input_13, 2))) & (MR_Integer) 1);
      MR_Word next_value_of_HeadVar__3_3;

      switch (IsDummy_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeInfo_34_34;
            MR_Word VarTypeCtor_23;
            MR_Word Var_27;
            MR_Word Var_33;

            succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(VarType_17, &VarTypeCtor_23, &Var_33);
            if (succeeded)
            {
              TypeInfo_34_34 = (MR_Word) (&ll_backend__llds_out__llds_out_instr_scalar_common_1[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_34_34, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_33)));
              if (succeeded)
              {
                Var_27 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0(VarTypeCtor_23);
                succeeded = (Var_27 == (MR_Integer) 0);
              }
            }
            if (!(succeeded))
            {
              MR_String Var_28;
              MR_String Var_31;

              Var_31 = mercury__string__f_43_43_2_f_0(VarName_16, (MR_String) " = 0;\n");
              Var_28 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_31);
              mercury__io__write_string_4_p_0(Stream_2, Var_28);
            }
          }
          break;
        case (MR_Integer) 1:
          ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_5_p_0(Info_1, Stream_2, Input_13);
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Inputs_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word Input_8)
{
  MR_bool succeeded;
  MR_String VarName_10 = ((MR_String) ((MR_hl_field(0, Input_8, 0))));
  MR_Word OrigType_13 = ((MR_Word) ((MR_hl_field(0, Input_8, 3))));
  MR_Word Rval_14 = ((MR_Word) ((MR_hl_field(0, Input_8, 4))));
  MR_Word MaybeForeignTypeInfo_15 = ((MR_Word) ((MR_hl_field(0, Input_8, 5))));
  MR_Word BoxPolicy_16 = ((MR_Unsigned) ((MR_hl_field(0, Input_8, 6))) & (MR_Integer) 1);

  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\t");
  switch (BoxPolicy_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__io__write_string_4_p_0(Stream_7, VarName_10);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) " = ");
        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, Rval_14, (MR_Word) ((MR_Unsigned) 20U), Stream_7);
      }
      break;
    case (MR_Integer) 0:
      if ((MaybeForeignTypeInfo_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word BuiltinType_20;

        mercury__io__write_string_4_p_0(Stream_7, VarName_10);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) " = ");
        succeeded = ((MR_tag((MR_Word) OrigType_13)) == (MR_Integer) 2);
        if (succeeded)
        {
          BuiltinType_20 = ((MR_Word) ((MR_hl_field(2, OrigType_13, 0))));
          switch (MR_tag((MR_Word) BuiltinType_20)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(BuiltinType_20)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, Rval_14, (MR_Word) ((MR_Unsigned) 4U), Stream_7);
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String StringTypeStr_21;

                    StringTypeStr_21 = ll_backend__llds_out__llds_out_data__llds_type_to_string_1_f_0((MR_Word) ((MR_Unsigned) 8U));
                    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
                    mercury__io__write_string_4_p_0(Stream_7, StringTypeStr_21);
                    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ") ");
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, Rval_14, (MR_Word) ((MR_Unsigned) 20U), Stream_7);
                  }
                  break;
                case (MR_Integer) 2:
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, Rval_14, (MR_Word) ((MR_Unsigned) 20U), Stream_7);
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_97 = ((MR_Unsigned) ((MR_hl_field(1, BuiltinType_20, 0))) & (MR_Integer) 15);

                switch (Var_97) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, Rval_14, (MR_Word) ((MR_Unsigned) 20U), Stream_7);
                    break;
                  case (MR_Integer) 4:
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, Rval_14, (MR_Word) ((MR_Unsigned) 20U), Stream_7);
                    break;
                  case (MR_Integer) 6:
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, Rval_14, (MR_Word) ((MR_Unsigned) 20U), Stream_7);
                    break;
                  case (MR_Integer) 8:
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, Rval_14, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_instr_scalar_common_2[4])), Stream_7);
                    break;
                  case (MR_Integer) 2:
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, Rval_14, (MR_Word) ((MR_Unsigned) 20U), Stream_7);
                    break;
                  case (MR_Integer) 1:
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, Rval_14, (MR_Word) ((MR_Unsigned) 20U), Stream_7);
                    break;
                  case (MR_Integer) 5:
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, Rval_14, (MR_Word) ((MR_Unsigned) 20U), Stream_7);
                    break;
                  case (MR_Integer) 7:
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, Rval_14, (MR_Word) ((MR_Unsigned) 20U), Stream_7);
                    break;
                  case (MR_Integer) 9:
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, Rval_14, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_instr_scalar_common_2[5])), Stream_7);
                    break;
                  case (MR_Integer) 3:
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, Rval_14, (MR_Word) ((MR_Unsigned) 20U), Stream_7);
                    break;
                }
              }
              break;
          }
        }
        else
          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, Rval_14, (MR_Word) ((MR_Unsigned) 20U), Stream_7);
      }
      else
      {
        MR_Word ForeignTypeInfo_17 = ((MR_Word) ((MR_hl_field(1, MaybeForeignTypeInfo_15, 0))));
        MR_String ForeignType_18 = ((MR_String) ((MR_hl_field(0, ForeignTypeInfo_17, 0))));
        MR_Word Assertions_19 = ((MR_Word) ((MR_hl_field(0, ForeignTypeInfo_17, 1))));

        succeeded = backend_libs__export__c_type_is_word_sized_int_or_ptr_1_p_0(ForeignType_18);
        if (!(succeeded))
          succeeded = hlds__hlds_data__asserted_can_pass_as_mercury_type_1_p_0(Assertions_19);
        if (succeeded)
        {
          mercury__io__write_string_4_p_0(Stream_7, VarName_10);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) " = (");
          mercury__io__write_string_4_p_0(Stream_7, ForeignType_18);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ") ");
          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, Rval_14, (MR_Word) ((MR_Unsigned) 20U), Stream_7);
        }
        else
        {
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_MAYBE_UNBOX_FOREIGN_TYPE(");
          mercury__io__write_string_4_p_0(Stream_7, ForeignType_18);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, Rval_14, (MR_Word) ((MR_Unsigned) 20U), Stream_7);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
          mercury__io__write_string_4_p_0(Stream_7, VarName_10);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
        }
      }
      break;
  }
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ";\n");
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_alloc_site_id_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word AllocId_8)
{
  MR_String MangledModuleName_10 = ((MR_String) ((MR_hl_field(0, Info_6, 1))));
  MR_Word AllocSiteMap_11 = ((MR_Word) ((MR_hl_field(0, Info_6, 7))));
  MR_Word AllocSiteSlotName_12;
  MR_Box conv0_AllocSiteSlotName_12;

  mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0), (MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), AllocSiteMap_11, ((MR_Box) (AllocId_8)), &conv0_AllocSiteSlotName_12);
  AllocSiteSlotName_12 = ((MR_Word) (conv0_AllocSiteSlotName_12));
  ll_backend__layout_out__output_layout_slot_addr_6_p_0(Stream_7, (MR_Integer) 1, MangledModuleName_10, AllocSiteSlotName_12);
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Component_10,
  MR_Word STATE_VARIABLE_DeclSet_0_24,
  MR_Word * STATE_VARIABLE_DeclSet_25)
{
  switch (MR_tag((MR_Word) Component_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_DeclSet_25 = STATE_VARIABLE_DeclSet_0_24;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Inputs_13 = ((MR_Word) ((MR_hl_field(1, Component_10, 0))));

        ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_7_p_0(Info_8, Stream_9, Inputs_13, STATE_VARIABLE_DeclSet_0_24, STATE_VARIABLE_DeclSet_25);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Outputs_14 = ((MR_Word) ((MR_hl_field(2, Component_10, 0))));

        ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_7_p_0(Info_8, Stream_9, Outputs_14, STATE_VARIABLE_DeclSet_0_24, STATE_VARIABLE_DeclSet_25);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Component_10, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_DeclSet_25 = STATE_VARIABLE_DeclSet_0_24;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_DeclSet_25 = STATE_VARIABLE_DeclSet_0_24;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_DeclSet_25 = STATE_VARIABLE_DeclSet_0_24;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_DeclSet_25 = STATE_VARIABLE_DeclSet_0_24;
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_7_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_DeclSet_0_4,
  MR_Word * STATE_VARIABLE_DeclSet_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DeclSet_5 = STATE_VARIABLE_DeclSet_0_4;
    else
    {
      MR_Word Output_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Outputs_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Lval_22 = ((MR_Word) ((MR_hl_field(0, Output_18, 0))));
      MR_Word STATE_VARIABLE_DeclSet_1_33;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_DeclSet_0_4;

      ll_backend__llds_out__llds_out_data__output_record_lval_decls_tab_7_p_0(Info_1, Stream_2, Lval_22, STATE_VARIABLE_DeclSet_0_4, &STATE_VARIABLE_DeclSet_1_33);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Outputs_19;
      next_value_of_STATE_VARIABLE_DeclSet_0_4 = STATE_VARIABLE_DeclSet_1_33;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_DeclSet_0_4 = next_value_of_STATE_VARIABLE_DeclSet_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_7_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_DeclSet_0_4,
  MR_Word * STATE_VARIABLE_DeclSet_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DeclSet_5 = STATE_VARIABLE_DeclSet_0_4;
    else
    {
      MR_Word Input_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Inputs_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Rval_26 = ((MR_Word) ((MR_hl_field(0, Input_18, 4))));
      MR_Word STATE_VARIABLE_DeclSet_1_33;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_DeclSet_0_4;

      ll_backend__llds_out__llds_out_data__output_record_rval_decls_tab_7_p_0(Info_1, Stream_2, Rval_26, STATE_VARIABLE_DeclSet_0_4, &STATE_VARIABLE_DeclSet_1_33);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Inputs_19;
      next_value_of_STATE_VARIABLE_DeclSet_0_4 = STATE_VARIABLE_DeclSet_1_33;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_DeclSet_0_4 = next_value_of_STATE_VARIABLE_DeclSet_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_debug_instruction_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word Instr_8)
{
  MR_Integer InitialProcIdInt_12;
  MR_Word ProcLabel_13;
  MR_Word CallerLabel_14;
  MR_Word ContLabels_15;
  MR_Word WhileLabels_16;
  MR_Word UndefWhileLabels_17;
  MR_Word LabelOutputInfo_18;
  MR_Integer Var_22;

  Var_22 = hlds__hlds_pred__initial_proc_id_0_f_0();
  hlds__hlds_pred__proc_id_to_int_2_p_0(Var_22, &InitialProcIdInt_12);
  {
    ProcLabel_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ProcLabel_13, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_2[0]));
    MR_hl_field(0, ProcLabel_13, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, ProcLabel_13, 2) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_2[0]));
    MR_hl_field(0, ProcLabel_13, 3) = ((MR_Box) ((MR_String) "DEBUG"));
    MR_hl_field(0, ProcLabel_13, 4) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, ProcLabel_13, 5) = ((MR_Box) (InitialProcIdInt_12));
  }
  {
    CallerLabel_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CallerLabel_14, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(1, CallerLabel_14, 1) = ((MR_Box) (ProcLabel_13));
  }
  ContLabels_15 = mercury__set_tree234__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
  WhileLabels_16 = mercury__set_tree234__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
  UndefWhileLabels_17 = mercury__set_tree234__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
  {
    LabelOutputInfo_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LabelOutputInfo_18, 0) = ((MR_Box) (CallerLabel_14));
    MR_hl_field(0, LabelOutputInfo_18, 1) = ((MR_Box) (ContLabels_15));
    MR_hl_field(0, LabelOutputInfo_18, 2) = ((MR_Box) (WhileLabels_16));
    MR_hl_field(0, LabelOutputInfo_18, 3) = ((MR_Box) (UndefWhileLabels_17));
  }
  ll_backend__llds_out__llds_out_instr__output_instruction_6_p_0(Info_6, Stream_7, Instr_8, LabelOutputInfo_18);
}

void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word Instr_9,
  MR_String Comment_10)
{
  MR_bool succeeded;
  MR_Integer InitialProcIdInt_14;
  MR_Word ProcLabel_15;
  MR_Word CallerLabel_16;
  MR_Word ContLabels_17;
  MR_Word WhileLabels_18;
  MR_Word UndefWhileLabels_19;
  MR_Word LabelOutputInfo_20;
  MR_Integer Var_24;
  MR_Word AutoComments_30;

  Var_24 = hlds__hlds_pred__initial_proc_id_0_f_0();
  hlds__hlds_pred__proc_id_to_int_2_p_0(Var_24, &InitialProcIdInt_14);
  {
    ProcLabel_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ProcLabel_15, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_2[0]));
    MR_hl_field(0, ProcLabel_15, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, ProcLabel_15, 2) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_2[0]));
    MR_hl_field(0, ProcLabel_15, 3) = ((MR_Box) ((MR_String) "DEBUG"));
    MR_hl_field(0, ProcLabel_15, 4) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, ProcLabel_15, 5) = ((MR_Box) (InitialProcIdInt_14));
  }
  {
    CallerLabel_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CallerLabel_16, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(1, CallerLabel_16, 1) = ((MR_Box) (ProcLabel_15));
  }
  ContLabels_17 = mercury__set_tree234__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
  WhileLabels_18 = mercury__set_tree234__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
  UndefWhileLabels_19 = mercury__set_tree234__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
  {
    LabelOutputInfo_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LabelOutputInfo_20, 0) = ((MR_Box) (CallerLabel_16));
    MR_hl_field(0, LabelOutputInfo_20, 1) = ((MR_Box) (ContLabels_17));
    MR_hl_field(0, LabelOutputInfo_20, 2) = ((MR_Box) (WhileLabels_18));
    MR_hl_field(0, LabelOutputInfo_20, 3) = ((MR_Box) (UndefWhileLabels_19));
  }
  AutoComments_30 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, 8))) >> 15)) & (MR_Integer) 1);
  switch (AutoComments_30) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        ll_backend__llds_out__llds_out_instr__output_instruction_6_p_0(Info_7, Stream_8, Instr_9, LabelOutputInfo_20);
        succeeded = (strcmp(Comment_10, (MR_String) "") == 0);
        if (!(succeeded))
        {
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\t\t/* ");
          mercury__io__write_string_4_p_0(Stream_8, Comment_10);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) " */\n");
        }
      }
      break;
    case (MR_Integer) 0:
      {
        if (((MR_tag((MR_Word) Instr_9)) == (MR_Integer) 1))
          succeeded = MR_TRUE;
        else
        if (((MR_tag((MR_Word) Instr_9)) == (MR_Integer) 2))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
        if (!(succeeded))
          ll_backend__llds_out__llds_out_instr__output_instruction_6_p_0(Info_7, Stream_8, Instr_9, LabelOutputInfo_20);
      }
      break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Instr_10,
  MR_String Comment_11,
  MR_Word LabelOutputInfo_12)
{
  MR_bool succeeded;
  MR_Word AutoComments_14 = ((((MR_Unsigned) ((MR_hl_field(0, Info_8, 8))) >> 15)) & (MR_Integer) 1);

  switch (AutoComments_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        ll_backend__llds_out__llds_out_instr__output_instruction_6_p_0(Info_8, Stream_9, Instr_10, LabelOutputInfo_12);
        succeeded = (strcmp(Comment_11, (MR_String) "") == 0);
        if (!(succeeded))
        {
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\t\t/* ");
          mercury__io__write_string_4_p_0(Stream_9, Comment_11);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) " */\n");
        }
      }
      break;
    case (MR_Integer) 0:
      {
        if (((MR_tag((MR_Word) Instr_10)) == (MR_Integer) 1))
          succeeded = MR_TRUE;
        else
        if (((MR_tag((MR_Word) Instr_10)) == (MR_Integer) 2))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
        if (!(succeeded))
          ll_backend__llds_out__llds_out_instr__output_instruction_6_p_0(Info_8, Stream_9, Instr_10, LabelOutputInfo_12);
      }
      break;
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_instruction_list_while_block__413__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_7_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3,
  MR_Word Label_4,
  MR_Word LabelOutputInfo_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Instr_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Instrs_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Uinstr_22 = ((MR_Word) ((MR_hl_field(0, Instr_17, 0))));
      MR_String Comment_23 = ((MR_String) ((MR_hl_field(0, Instr_17, 1))));

      succeeded = ((((MR_tag((MR_Word) Uinstr_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_22, 0)))) == (MR_Integer) 5)));
      if (succeeded)
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction_list_while_block\'/7", (MR_String) "label in block");
          return;
        }
      else
      {
        MR_Word Var_34;
        MR_Word Var_80;

        succeeded = ((((MR_tag((MR_Word) Uinstr_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_22, 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          Var_34 = ((MR_Word) ((MR_hl_field(3, Uinstr_22, 1))));
          succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_80 = ((MR_Word) ((MR_hl_field(1, Var_34, 0))));
            succeeded = ll_backend__llds____Unify____label_0_0(Label_4, Var_80);
          }
        }
        if (succeeded)
        {
          MR_Word Var_37;

          mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\tcontinue;\n");
          {
            Var_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_37, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_5[1]));
            MR_hl_field(0, Var_37, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_7_p_0_1));
            MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_37, 3) = ((MR_Box) (Instrs_18));
            MR_hl_field(0, Var_37, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_37, (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction_list_while_block\'/7", (MR_String) "code after goto");
        }
        else
        {
          MR_Word Rval_25;
          MR_Word Var_41;
          MR_Word Var_81;

          succeeded = ((((MR_tag((MR_Word) Uinstr_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_22, 0)))) == (MR_Integer) 9)));
          if (succeeded)
          {
            Rval_25 = ((MR_Word) ((MR_hl_field(3, Uinstr_22, 1))));
            Var_41 = ((MR_Word) ((MR_hl_field(3, Uinstr_22, 2))));
            succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_81 = ((MR_Word) ((MR_hl_field(1, Var_41, 0))));
              succeeded = ll_backend__llds____Unify____label_0_0(Label_4, Var_81);
            }
          }
          if (succeeded)
          {
            MR_Word AutoComments_26;
            MR_Word next_value_of_HeadVar__3_3;

            mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\tif (");
            ll_backend__llds_out__llds_out_data__output_test_rval_5_p_0(Info_1, Rval_25, Stream_2);
            mercury__io__write_string_4_p_0(Stream_2, (MR_String) ")\n\t\tcontinue;\n");
            AutoComments_26 = ((((MR_Unsigned) ((MR_hl_field(0, Info_1, 8))) >> 15)) & (MR_Integer) 1);
            succeeded = (AutoComments_26 == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = (strcmp(Comment_23, (MR_String) "") == 0);
              succeeded = !(succeeded);
            }
            if (succeeded)
            {
              mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\t\t/* ");
              mercury__io__write_string_4_p_0(Stream_2, Comment_23);
              mercury__io__write_string_4_p_0(Stream_2, (MR_String) " */\n");
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__3_3 = Instrs_18;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            continue;
          }
          else
          {
            succeeded = ((((MR_tag((MR_Word) Uinstr_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_22, 0)))) == (MR_Integer) 0)));
            if (succeeded)
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction_list_while_block\'/7", (MR_String) "block in block");
                return;
              }
            else
            {
              MR_Word next_value_of_HeadVar__3_3;

              ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_7_p_0(Info_1, Stream_2, Uinstr_22, Comment_23, LabelOutputInfo_5);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__3_3 = Instrs_18;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              continue;
            }
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_8_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word Label_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word LabelOutputInfo_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\tbreak;\n");
    }
    else
    {
      MR_Word Instr_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Instrs_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word Uinstr_26 = ((MR_Word) ((MR_hl_field(0, Instr_21, 0))));
      MR_String Comment_27 = ((MR_String) ((MR_hl_field(0, Instr_21, 1))));

      succeeded = ((((MR_tag((MR_Word) Uinstr_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_26, 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\tbreak;\n");
        *HeadVar__5_5 = HeadVar__4_4;
      }
      else
      {
        MR_Word Var_38;
        MR_Word Var_81;

        succeeded = ((((MR_tag((MR_Word) Uinstr_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_26, 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          Var_38 = ((MR_Word) ((MR_hl_field(3, Uinstr_26, 1))));
          succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_81 = ((MR_Word) ((MR_hl_field(1, Var_38, 0))));
            succeeded = ll_backend__llds____Unify____label_0_0(Label_3, Var_81);
          }
        }
        if (succeeded)
        {
          mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\t/* continue */\n");
          *HeadVar__5_5 = Instrs_22;
        }
        else
        {
          MR_Word Rval_29;
          MR_Word Var_41;
          MR_Word Var_82;

          succeeded = ((((MR_tag((MR_Word) Uinstr_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_26, 0)))) == (MR_Integer) 9)));
          if (succeeded)
          {
            Rval_29 = ((MR_Word) ((MR_hl_field(3, Uinstr_26, 1))));
            Var_41 = ((MR_Word) ((MR_hl_field(3, Uinstr_26, 2))));
            succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_82 = ((MR_Word) ((MR_hl_field(1, Var_41, 0))));
              succeeded = ll_backend__llds____Unify____label_0_0(Label_3, Var_82);
            }
          }
          if (succeeded)
          {
            MR_Word AutoComments_30;
            MR_Word next_value_of_HeadVar__4_4;

            mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\tif (");
            ll_backend__llds_out__llds_out_data__output_test_rval_5_p_0(Info_1, Rval_29, Stream_2);
            mercury__io__write_string_4_p_0(Stream_2, (MR_String) ")\n\t\tcontinue;\n");
            AutoComments_30 = ((((MR_Unsigned) ((MR_hl_field(0, Info_1, 8))) >> 15)) & (MR_Integer) 1);
            succeeded = (AutoComments_30 == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = (strcmp(Comment_27, (MR_String) "") == 0);
              succeeded = !(succeeded);
            }
            if (succeeded)
            {
              mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\t\t/* ");
              mercury__io__write_string_4_p_0(Stream_2, Comment_27);
              mercury__io__write_string_4_p_0(Stream_2, (MR_String) " */\n");
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__4_4 = Instrs_22;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            continue;
          }
          else
          {
            MR_Integer TempR_31;
            MR_Integer TempF_32;
            MR_Word BlockInstrs_33;

            succeeded = ((((MR_tag((MR_Word) Uinstr_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_26, 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              TempR_31 = ((MR_Integer) ((MR_hl_field(3, Uinstr_26, 1))));
              TempF_32 = ((MR_Integer) ((MR_hl_field(3, Uinstr_26, 2))));
              BlockInstrs_33 = ((MR_Word) ((MR_hl_field(3, Uinstr_26, 3))));
              {
                MR_Word next_value_of_HeadVar__4_4;

                ll_backend__llds_out__llds_out_instr__output_block_start_5_p_0(Stream_2, TempR_31, TempF_32);
                ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_7_p_0(Info_1, Stream_2, BlockInstrs_33, Label_3, LabelOutputInfo_6);
                mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\t}\n");
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__4_4 = Instrs_22;
                HeadVar__4_4 = next_value_of_HeadVar__4_4;
                continue;
              }
            }
            else
            {
              MR_Word next_value_of_HeadVar__4_4;

              ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_7_p_0(Info_1, Stream_2, Uinstr_26, Comment_27, LabelOutputInfo_6);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__4_4 = Instrs_22;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              continue;
            }
          }
        }
      }
    }
    break;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_7_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3,
  MR_Word LabelOutputInfo_4,
  MR_Word AfterLayoutLabel0_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Instr_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Instrs_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Uinstr_22 = ((MR_Word) ((MR_hl_field(0, Instr_17, 0))));
      MR_String Comment_23 = ((MR_String) ((MR_hl_field(0, Instr_17, 1))));
      MR_Word Label_24;

      succeeded = ((((MR_tag((MR_Word) Uinstr_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_22, 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        Label_24 = ((MR_Word) ((MR_hl_field(3, Uinstr_22, 1))));
        {
          MR_Word InternalLabelToLayoutMap_25 = ((MR_Word) ((MR_hl_field(0, Info_1, 4))));
          MR_Word AfterLayoutLabel_27;
          MR_Word WhileLabels_28;
          MR_Box conv0_Var_26;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), InternalLabelToLayoutMap_25, ((MR_Box) (Label_24)), &conv0_Var_26);
          if (succeeded)
            succeeded = MR_TRUE;
          if (succeeded)
            AfterLayoutLabel_27 = (MR_Integer) 1;
          else
            AfterLayoutLabel_27 = (MR_Integer) 0;
          succeeded = (AfterLayoutLabel0_5 == (MR_Integer) 1);
          if (succeeded)
            succeeded = (AfterLayoutLabel_27 == (MR_Integer) 1);
          if (succeeded)
            mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\tMR_dummy_function_call();\n");
          WhileLabels_28 = ((MR_Word) ((MR_hl_field(0, LabelOutputInfo_4, 2))));
          succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), WhileLabels_28, ((MR_Box) (Label_24)));
          if (succeeded)
          {
            MR_Word UndefWhileLabels_29 = ((MR_Word) ((MR_hl_field(0, LabelOutputInfo_4, 3))));
            MR_Word AfterWhileInstrs_30;
            MR_Word next_value_of_HeadVar__3_3;

            succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), UndefWhileLabels_29, ((MR_Box) (Label_24)));
            if (!(succeeded))
              ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_7_p_0(Info_1, Stream_2, Uinstr_22, Comment_23, LabelOutputInfo_4);
            mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\twhile (1) {\n");
            ll_backend__llds_out__llds_out_instr__output_instruction_list_while_8_p_0(Info_1, Stream_2, Label_24, Instrs_18, &AfterWhileInstrs_30, LabelOutputInfo_4);
            mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\t} /* end while */\n");
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__3_3 = AfterWhileInstrs_30;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            AfterLayoutLabel0_5 = (MR_Integer) 0;
            continue;
          }
          else
          {
            MR_Word next_value_of_HeadVar__3_3;
            MR_Word next_value_of_AfterLayoutLabel0_5;

            ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_7_p_0(Info_1, Stream_2, Uinstr_22, Comment_23, LabelOutputInfo_4);
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__3_3 = Instrs_18;
            next_value_of_AfterLayoutLabel0_5 = AfterLayoutLabel_27;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            AfterLayoutLabel0_5 = next_value_of_AfterLayoutLabel0_5;
            continue;
          }
        }
      }
      else
      {
        MR_Word Instrs1_32;
        MR_Word Lval_35;
        MR_Word Rval_36;
        MR_Word Instr1_31;
        MR_Word Uinstr1_33;

        succeeded = (Instrs_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Instr1_31 = ((MR_Word) ((MR_hl_field(1, Instrs_18, 0))));
          Instrs1_32 = ((MR_Word) ((MR_hl_field(1, Instrs_18, 1))));
          Uinstr1_33 = ((MR_Word) ((MR_hl_field(0, Instr1_31, 0))));
          succeeded = ll_backend__llds_out__llds_out_instr__is_aligned_float_dword_assignment_4_p_0(Uinstr_22, Uinstr1_33, &Lval_35, &Rval_36);
        }
        if (succeeded)
        {
          MR_Word next_value_of_HeadVar__3_3;

          ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_6_p_0(Info_1, Stream_2, Lval_35, Rval_36);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = Instrs1_32;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          AfterLayoutLabel0_5 = (MR_Integer) 0;
          continue;
        }
        else
        {
          MR_Word AfterLayoutLabel_57;
          MR_Word next_value_of_HeadVar__3_3;
          MR_Word next_value_of_AfterLayoutLabel0_5;

          ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_7_p_0(Info_1, Stream_2, Uinstr_22, Comment_23, LabelOutputInfo_4);
          succeeded = ((MR_tag((MR_Word) Uinstr_22)) == (MR_Integer) 1);
          if (succeeded)
            AfterLayoutLabel_57 = AfterLayoutLabel0_5;
          else
            AfterLayoutLabel_57 = (MR_Integer) 0;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = Instrs_18;
          next_value_of_AfterLayoutLabel0_5 = AfterLayoutLabel_57;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          AfterLayoutLabel0_5 = next_value_of_AfterLayoutLabel0_5;
          continue;
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_6_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__int__even_1_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word Instr_9,
  MR_Word LabelOutputInfo_10)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Instr_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Instr_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_prune_ticket();\n");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_discard_ticket();\n");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Comment_12 = ((MR_String) ((MR_hl_field(1, Instr_9, 0))));
        MR_Word CommentChars_13;

        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/* ");
        mercury__string__to_char_list_2_p_0(Comment_12, &CommentChars_13);
        ll_backend__llds_out__llds_out_instr__output_comment_chars_5_p_0(Stream_8, (MR_Char) 42, CommentChars_13);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " */\n");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word LiveVals_14 = ((MR_Word) ((MR_hl_field(2, Instr_9, 0))));
        MR_Word LiveValsList_15;

        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/*\n* Live lvalues:\n");
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LiveVals_14, &LiveValsList_15);
        ll_backend__llds_out__llds_out_instr__output_livevals_5_p_0(Info_7, Stream_8, LiveValsList_15);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "*/\n");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Instr_9, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer TempR_16 = ((MR_Integer) ((MR_hl_field(3, Instr_9, 1))));
            MR_Integer TempF_17 = ((MR_Integer) ((MR_hl_field(3, Instr_9, 2))));
            MR_Word Instrs_18 = ((MR_Word) ((MR_hl_field(3, Instr_9, 3))));
            MR_Word CallerLabel_19;
            MR_Word ContLabels_20;
            MR_Word BlockLabelOutputInfo_23;
            MR_Word Var_111;
            MR_Word Var_112;

            ll_backend__llds_out__llds_out_instr__output_block_start_5_p_0(Stream_8, TempR_16, TempF_17);
            CallerLabel_19 = ((MR_Word) ((MR_hl_field(0, LabelOutputInfo_10, 0))));
            ContLabels_20 = ((MR_Word) ((MR_hl_field(0, LabelOutputInfo_10, 1))));
            Var_111 = mercury__set_tree234__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
            Var_112 = mercury__set_tree234__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
            {
              BlockLabelOutputInfo_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BlockLabelOutputInfo_23, 0) = ((MR_Box) (CallerLabel_19));
              MR_hl_field(0, BlockLabelOutputInfo_23, 1) = ((MR_Box) (ContLabels_20));
              MR_hl_field(0, BlockLabelOutputInfo_23, 2) = ((MR_Box) (Var_111));
              MR_hl_field(0, BlockLabelOutputInfo_23, 3) = ((MR_Box) (Var_112));
            }
            ll_backend__llds_out__llds_out_instr__output_instruction_list_7_p_0(Info_7, Stream_8, Instrs_18, BlockLabelOutputInfo_23, (MR_Integer) 0);
            ll_backend__llds_out__llds_out_instr__output_block_end_3_p_0(Stream_8);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_24 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));
            MR_Word Rval_25 = ((MR_Word) ((MR_hl_field(3, Instr_9, 2))));
            MR_Word Type_26;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\t");
            ll_backend__llds_out__llds_out_data__output_lval_for_assign_6_p_0(Info_7, Stream_8, Lval_24, &Type_26);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " = ");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_7, Rval_25, Type_26, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ";\n");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_677 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));
            MR_Word Rval_678 = ((MR_Word) ((MR_hl_field(3, Instr_9, 2))));
            MR_Word Type_679;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\t");
            ll_backend__llds_out__llds_out_data__output_lval_for_assign_6_p_0(Info_7, Stream_8, Lval_677, &Type_679);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " = ");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_7, Rval_678, Type_679, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ";\n");
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Target_27 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));
            MR_Word ContLabel_28 = ((MR_Word) ((MR_hl_field(3, Instr_9, 2))));
            MR_Word LiveVals_480 = ((MR_Word) ((MR_hl_field(3, Instr_9, 3))));
            MR_Word CallerLabel_481 = ((MR_Word) ((MR_hl_field(0, LabelOutputInfo_10, 0))));

            ll_backend__llds_out__llds_out_instr__output_call_7_p_0(Info_7, Stream_8, Target_27, ContLabel_28, CallerLabel_481);
            ll_backend__llds_out__llds_out_instr__output_gc_livevals_5_p_0(Info_7, Stream_8, LiveVals_480);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word FrameInfo_35 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));
            MR_Word MaybeFailCont_36 = ((MR_Word) ((MR_hl_field(3, Instr_9, 2))));

            if (((MR_tag((MR_Word) FrameInfo_35)) == (MR_Integer) 1))
            {
              MR_String Msg_37 = ((MR_String) ((MR_hl_field(1, FrameInfo_35, 0))));
              MR_Integer Num_38 = ((MR_Integer) ((MR_hl_field(1, FrameInfo_35, 1))));

              if ((MaybeFailCont_36 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_mkframe_no_redoip(");
                backend_libs__c_util__output_quoted_string_c_4_p_0(Stream_8, Msg_37);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                mercury__io__write_int_4_p_0(Stream_8, Num_38);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
              }
              else
              {
                MR_Word FailCont_39 = ((MR_Word) ((MR_hl_field(1, MaybeFailCont_36, 0))));

                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_mkframe(");
                backend_libs__c_util__output_quoted_string_c_4_p_0(Stream_8, Msg_37);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                mercury__io__write_int_4_p_0(Stream_8, Num_38);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",\n\t\t");
                ll_backend__llds_out__llds_out_code_addr__output_code_addr_4_p_0(Stream_8, FailCont_39);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
              }
            }
            else
            {
              MR_Word Kind_40 = ((MR_Unsigned) ((MR_hl_field(0, FrameInfo_35, 0))) & (MR_Integer) 1);

              switch (Kind_40) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_mkdettempframe(");
                    if ((MaybeFailCont_36 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction\'/6", (MR_String) "no failcont");
                        return;
                      }
                    else
                    {
                      MR_Word FailCont_482 = ((MR_Word) ((MR_hl_field(1, MaybeFailCont_36, 0))));

                      ll_backend__llds_out__llds_out_code_addr__output_code_addr_4_p_0(Stream_8, FailCont_482);
                    }
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_mktempframe(");
                    if ((MaybeFailCont_36 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction\'/6", (MR_String) "no failcont");
                        return;
                      }
                    else
                    {
                      MR_Word FailCont_485 = ((MR_Word) ((MR_hl_field(1, MaybeFailCont_36, 0))));

                      ll_backend__llds_out__llds_out_code_addr__output_code_addr_4_p_0(Stream_8, FailCont_485);
                    }
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
                  }
                  break;
              }
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Label_41 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));
            MR_Word LocalThreadEngineBase_42;

            ll_backend__llds_out__llds_out_instr__output_label_defn_4_p_0(Stream_8, Label_41);
            LocalThreadEngineBase_42 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, 8))) >> 12)) & (MR_Integer) 1);
            switch (LocalThreadEngineBase_42) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                }
                break;
              case (MR_Integer) 0:
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE\n");
                break;
            }
            ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_6_p_0(Info_7, Stream_8, Label_41, LabelOutputInfo_10);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word CodeAddr_43 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));
            MR_Word CallerLabel_490 = ((MR_Word) ((MR_hl_field(0, LabelOutputInfo_10, 0))));

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\t");
            ll_backend__llds_out__llds_out_instr__output_goto_6_p_0(Info_7, Stream_8, CodeAddr_43, CallerLabel_490);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word MaybeLabels_45 = ((MR_Word) ((MR_hl_field(3, Instr_9, 3))));
            MR_Word Rval_491 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_COMPUTED_GOTO(");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_7, Rval_491, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_instr_scalar_common_2[1])), Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",\n\t\t");
            ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_4_p_0(Stream_8, MaybeLabels_45);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String C_Code_34 = ((MR_String) ((MR_hl_field(3, Instr_9, 3))));

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\t");
            mercury__io__write_string_4_p_0(Stream_8, C_Code_34);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word CallerLabel_492 = ((MR_Word) ((MR_hl_field(0, LabelOutputInfo_10, 0))));
            MR_Word Rval_493 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));
            MR_Word Target_494 = ((MR_Word) ((MR_hl_field(3, Instr_9, 2))));

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tif (");
            ll_backend__llds_out__llds_out_data__output_test_rval_5_p_0(Info_7, Rval_493, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") {\n\t\t");
            ll_backend__llds_out__llds_out_instr__output_goto_6_p_0(Info_7, Stream_8, Target_494, CallerLabel_492);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\t}\n");
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Lval_495 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_save_maxfr(");
            ll_backend__llds_out__llds_out_data__output_lval_5_p_0(Info_7, Stream_8, Lval_495);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word Lval_496 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_restore_maxfr(");
            ll_backend__llds_out__llds_out_data__output_lval_5_p_0(Info_7, Stream_8, Lval_496);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word MaybePtag_46 = ((MR_Word) ((MR_hl_field(3, Instr_9, 2))));
            MR_Word MaybeOffset_47 = ((MR_Word) ((MR_hl_field(3, Instr_9, 3))));
            MR_Word SizeRval_48 = ((MR_Word) ((MR_hl_field(3, Instr_9, 4))));
            MR_Word MaybeAllocId_49 = ((MR_Word) ((MR_hl_field(3, Instr_9, 5))));
            MR_Word MayUseAtomicAlloc_50 = ((MR_Unsigned) ((MR_hl_field(3, Instr_9, 6))) & (MR_Integer) 1);
            MR_Word MaybeRegionRval_51 = ((MR_Word) ((MR_hl_field(3, Instr_9, 7))));
            MR_Word MaybeReuse_52 = ((MR_Word) ((MR_hl_field(3, Instr_9, 8))));
            MR_Word Lval_500 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\t");
            if ((MaybeReuse_52 == (MR_Word) ((MR_Unsigned) 0U)))
              ll_backend__llds_out__llds_out_instr__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_99_114_95_104_112_95_110_111_95_114_101_117_115_101_95_95_91_49_48_93_95_48_12_p_0(Info_7, Stream_8, Lval_500, MaybePtag_46, MaybeOffset_47, SizeRval_48, MaybeAllocId_49, MayUseAtomicAlloc_50, MaybeRegionRval_51);
            else
            {
              MR_Word ReuseRval_53 = ((MR_Word) ((MR_hl_field(1, MaybeReuse_52, 0))));
              MR_Word MaybeFlagLval_54 = ((MR_Word) ((MR_hl_field(1, MaybeReuse_52, 1))));

              if ((MaybePtag_46 == (MR_Word) ((MR_Unsigned) 0U)))
                if ((MaybeFlagLval_54 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_reuse_or_alloc_heap(");
                  ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_7, Stream_8, Lval_500);
                }
                else
                {
                  MR_Word FlagLval_55 = ((MR_Word) ((MR_hl_field(1, MaybeFlagLval_54, 0))));

                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_reuse_or_alloc_heap_flag(");
                  ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_7, Stream_8, Lval_500);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                  ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_7, Stream_8, FlagLval_55);
                }
              else
              {
                MR_Word Ptag_56 = ((MR_Word) ((MR_hl_field(1, MaybePtag_46, 0))));

                if ((MaybeFlagLval_54 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_tag_reuse_or_alloc_heap(");
                  ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_7, Stream_8, Lval_500);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                  ll_backend__llds_out__llds_out_data__output_ptag_4_p_0(Stream_8, Ptag_56);
                }
                else
                {
                  MR_Word FlagLval_497 = ((MR_Word) ((MR_hl_field(1, MaybeFlagLval_54, 0))));

                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_tag_reuse_or_alloc_heap_flag(");
                  ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_7, Stream_8, Lval_500);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                  ll_backend__llds_out__llds_out_data__output_ptag_4_p_0(Stream_8, Ptag_56);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                  ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_7, Stream_8, FlagLval_497);
                }
              }
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, ReuseRval_53, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              ll_backend__llds_out__llds_out_instr__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_99_114_95_104_112_95_110_111_95_114_101_117_115_101_95_95_91_49_48_93_95_48_12_p_0(Info_7, Stream_8, Lval_500, MaybePtag_46, MaybeOffset_47, SizeRval_48, MaybeAllocId_49, MayUseAtomicAlloc_50, MaybeRegionRval_51);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ";\n");
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Lval_501 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_mark_hp(");
            ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_7, Stream_8, Lval_501);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Rval_502 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_restore_hp(");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_7, Rval_502, (MR_Word) ((MR_Unsigned) 20U), Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Rval_503 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_free_heap(");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_7, Rval_503, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
        case (MR_Integer) 16:
          {
            MR_Word StackId_57 = ((MR_Unsigned) ((MR_hl_field(3, Instr_9, 1))) & (MR_Integer) 3);
            MR_Word EmbeddedFrame_58 = ((MR_Word) ((MR_hl_field(3, Instr_9, 2))));
            MR_Integer FirstSlot_60;
            MR_Integer LastSlot_61;
            MR_String Var_263;
            MR_String Var_264;
            MR_String Var_265;
            MR_String Var_267;
            MR_String Var_268;
            MR_String Comment_504;

            switch (StackId_57) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_push_region_commit_frame");
                break;
              case (MR_Integer) 1:
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_push_region_disj_frame");
                break;
              case (MR_Integer) 0:
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_push_region_ite_frame");
                break;
            }
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_5_p_0(Info_7, Stream_8, EmbeddedFrame_58);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");");
            FirstSlot_60 = ((MR_Integer) ((MR_hl_field(0, EmbeddedFrame_58, 1))));
            LastSlot_61 = ((MR_Integer) ((MR_hl_field(0, EmbeddedFrame_58, 2))));
            Var_264 = mercury__string__int_to_string_1_f_0(FirstSlot_60);
            Var_268 = mercury__string__int_to_string_1_f_0(LastSlot_61);
            Var_267 = mercury__string__f_43_43_2_f_0(Var_268, (MR_String) " */");
            Var_265 = mercury__string__f_43_43_2_f_0((MR_String) "..", Var_267);
            Var_263 = mercury__string__f_43_43_2_f_0(Var_264, Var_265);
            Comment_504 = mercury__string__f_43_43_2_f_0((MR_String) " /* ", Var_263);
            mercury__io__write_string_4_p_0(Stream_8, Comment_504);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word FillOp_62 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));
            MR_Word IdRval_63 = ((MR_Word) ((MR_hl_field(3, Instr_9, 3))));
            MR_Word NumLval_64 = ((MR_Word) ((MR_hl_field(3, Instr_9, 4))));
            MR_Word AddrLval_65 = ((MR_Word) ((MR_hl_field(3, Instr_9, 5))));
            MR_Word EmbeddedFrame_505 = ((MR_Word) ((MR_hl_field(3, Instr_9, 2))));

            switch (MR_tag((MR_Word) FillOp_62)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(FillOp_62)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_region_fill_ite_protect");
                    break;
                  case (MR_Integer) 1:
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_region_fill_semi_disj_protect");
                    break;
                  case (MR_Integer) 2:
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_region_fill_disj_snapshot");
                    break;
                  case (MR_Integer) 3:
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_region_fill_commit");
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_638 = ((MR_Unsigned) ((MR_hl_field(1, FillOp_62, 0))) & (MR_Integer) 1);

                  switch (Var_638) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_region_fill_ite_snapshot_not_removed");
                      break;
                    case (MR_Integer) 0:
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_region_fill_ite_snapshot_removed");
                      break;
                  }
                }
                break;
            }
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_5_p_0(Info_7, Stream_8, EmbeddedFrame_505);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, IdRval_63, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            ll_backend__llds_out__llds_out_data__output_lval_5_p_0(Info_7, Stream_8, NumLval_64);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            ll_backend__llds_out__llds_out_data__output_lval_5_p_0(Info_7, Stream_8, AddrLval_65);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word SetOp_66 = ((MR_Unsigned) ((MR_hl_field(3, Instr_9, 1))) & (MR_Integer) 7);
            MR_Word ValueRval_67 = ((MR_Word) ((MR_hl_field(3, Instr_9, 3))));
            MR_Word EmbeddedFrame_506 = ((MR_Word) ((MR_hl_field(3, Instr_9, 2))));

            switch (SetOp_66) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 4:
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_region_set_commit_num_entries");
                break;
              case (MR_Integer) 2:
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_region_set_disj_num_protects");
                break;
              case (MR_Integer) 3:
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_region_set_disj_num_snapshots");
                break;
              case (MR_Integer) 0:
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_region_set_ite_num_protects");
                break;
              case (MR_Integer) 1:
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_region_set_ite_num_snapshots");
                break;
            }
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_5_p_0(Info_7, Stream_8, EmbeddedFrame_506);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, ValueRval_67, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
        case (MR_Integer) 19:
          {
            MR_Word UseOp_68 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));
            MR_Word EmbeddedFrame_507 = ((MR_Word) ((MR_hl_field(3, Instr_9, 2))));

            switch (MR_tag((MR_Word) UseOp_68)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(UseOp_68)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_use_region_ite_nondet_cond_fail");
                    break;
                  case (MR_Integer) 1:
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_use_region_disj_later");
                    break;
                  case (MR_Integer) 2:
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_use_region_disj_last");
                    break;
                  case (MR_Integer) 3:
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_use_region_disj_nonlast_semi_commit");
                    break;
                  case (MR_Integer) 4:
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_use_region_commit_success");
                    break;
                  case (MR_Integer) 5:
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_use_region_commit_failure");
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_640 = ((MR_Unsigned) ((MR_hl_field(1, UseOp_68, 0))) & (MR_Integer) 1);

                  switch (Var_640) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_use_region_ite_then_nondet");
                      break;
                    case (MR_Integer) 0:
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_use_region_ite_then_semidet");
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_639 = ((MR_Unsigned) ((MR_hl_field(2, UseOp_68, 0))) & (MR_Integer) 1);

                  switch (Var_639) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_use_region_ite_else_nondet");
                      break;
                    case (MR_Integer) 0:
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_use_region_ite_else_semidet");
                      break;
                  }
                }
                break;
            }
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_5_p_0(Info_7, Stream_8, EmbeddedFrame_507);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Word Lval_508 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_store_ticket(");
            ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_7, Stream_8, Lval_508);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word Reason_69 = ((MR_Unsigned) ((MR_hl_field(3, Instr_9, 2))) & (MR_Integer) 7);
            MR_String Var_359;
            MR_Word Rval_509 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_reset_ticket(");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_7, Rval_509, (MR_Word) ((MR_Unsigned) 20U), Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            Var_359 = ll_backend__llds_out__llds_out_instr__reset_trail_reason_to_string_1_f_0(Reason_69);
            mercury__io__write_string_4_p_0(Stream_8, Var_359);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word Lval_510 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_mark_ticket_stack(");
            ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_7, Stream_8, Lval_510);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word Rval_511 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_prune_tickets_to(");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_7, Rval_511, (MR_Word) ((MR_Unsigned) 20U), Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
        case (MR_Integer) 24:
          {
            MR_Integer N_70 = ((MR_Integer) ((MR_hl_field(3, Instr_9, 1))));
            MR_Word DwordAlignment_72 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, 8))) >> 6)) & (MR_Integer) 1);
            MR_String IncrSp_73;
            MR_Word Kind_512 = ((MR_Unsigned) ((MR_hl_field(3, Instr_9, 3))) & (MR_Integer) 1);
            MR_String Var_647;

            switch (DwordAlignment_72) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_378;

                  {
                    Var_378 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_378, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_7[0]));
                    MR_hl_field(0, Var_378, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_instruction_6_p_0_3));
                    MR_hl_field(0, Var_378, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_378, 3) = ((MR_Box) (N_70));
                  }
                  mercury__require__expect_3_p_0(Var_378, (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction\'/6", (MR_String) "odd sp increment");
                }
                break;
            }
            switch (Kind_512) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Var_381;

                  Var_381 = ll_backend__llds_out__llds_out_instr__max_leaf_stack_frame_size_0_f_0();
                  succeeded = (N_70 < Var_381);
                  if (succeeded)
                    IncrSp_73 = (MR_String) "MR_incr_sp_leaf";
                  else
                    IncrSp_73 = (MR_String) "MR_incr_sp";
                }
                break;
              case (MR_Integer) 1:
                IncrSp_73 = (MR_String) "MR_incr_sp";
                break;
            }
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\t");
            mercury__io__write_string_4_p_0(Stream_8, IncrSp_73);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_instr_scalar_common_2[2]), N_70, &Var_647);
            mercury__io__write_string_4_p_0(Stream_8, Var_647);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
        case (MR_Integer) 25:
          {
            MR_Integer N_513 = ((MR_Integer) ((MR_hl_field(3, Instr_9, 1))));
            MR_String Var_669;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_decr_sp(");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_instr_scalar_common_2[2]), N_513, &Var_669);
            mercury__io__write_string_4_p_0(Stream_8, Var_669);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
        case (MR_Integer) 26:
          {
            MR_Integer N_514 = ((MR_Integer) ((MR_hl_field(3, Instr_9, 1))));
            MR_String Var_658;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_decr_sp_and_return(");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_instr_scalar_common_2[2]), N_514, &Var_658);
            mercury__io__write_string_4_p_0(Stream_8, Var_658);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
        case (MR_Integer) 27:
          {
            MR_Word Decls_74 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));
            MR_Word Components_75 = ((MR_Word) ((MR_hl_field(3, Instr_9, 2))));
            MR_Word MaybeDefLabel_81 = ((MR_Word) ((MR_hl_field(3, Instr_9, 8))));

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\t{\n");
            ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_4_p_0(Stream_8, Decls_74);
            if ((MaybeDefLabel_81 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_402;
              MR_Box conv0_STATE_VARIABLE_IO_158_403;

              {
                Var_402 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_402, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_6[0]));
                MR_hl_field(0, Var_402, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_instruction_6_p_0_1));
                MR_hl_field(0, Var_402, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_402, 3) = ((MR_Box) (Info_7));
                MR_hl_field(0, Var_402, 4) = ((MR_Box) (Stream_8));
              }
              mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_402, Components_75, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_158_403);
            }
            else
            {
              MR_Word DefLabel_84 = ((MR_Word) ((MR_hl_field(1, MaybeDefLabel_81, 0))));
              MR_Word InternalLabelToLayoutMap_85 = ((MR_Word) ((MR_hl_field(0, Info_7, 4))));
              MR_Word DefLabelLayout_86;
              MR_String MangledModuleName_87;
              MR_Word Var_409;
              MR_Box conv1_DefLabelLayout_86;
              MR_Box conv2_STATE_VARIABLE_IO_162_410;

              mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), InternalLabelToLayoutMap_85, ((MR_Box) (DefLabel_84)), &conv1_DefLabelLayout_86);
              DefLabelLayout_86 = ((MR_Word) (conv1_DefLabelLayout_86));
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "#define MR_HASH_DEF_LABEL_LAYOUT ");
              MangledModuleName_87 = ((MR_String) ((MR_hl_field(0, Info_7, 1))));
              ll_backend__layout_out__output_layout_slot_addr_6_p_0(Stream_8, (MR_Integer) 1, MangledModuleName_87, DefLabelLayout_86);
              mercury__io__nl_3_p_0(Stream_8);
              {
                Var_409 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_409, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_6[0]));
                MR_hl_field(0, Var_409, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_instruction_6_p_0_2));
                MR_hl_field(0, Var_409, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_409, 3) = ((MR_Box) (Info_7));
                MR_hl_field(0, Var_409, 4) = ((MR_Box) (Stream_8));
              }
              mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_409, Components_75, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_162_410);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "#undef MR_HASH_DEF_LABEL_LAYOUT\n");
            }
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\t}\n");
          }
          break;
        case (MR_Integer) 28:
          {
            MR_Integer NumConjuncts_88 = ((MR_Integer) ((MR_hl_field(3, Instr_9, 2))));
            MR_Integer TSStringIndex_89 = ((MR_Integer) ((MR_hl_field(3, Instr_9, 3))));
            MR_Word Lval_515 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_init_sync_term(");
            ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_7, Stream_8, Lval_515);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            mercury__io__write_int_4_p_0(Stream_8, NumConjuncts_88);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            mercury__io__write_int_4_p_0(Stream_8, TSStringIndex_89);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
        case (MR_Integer) 29:
          {
            MR_Word Child_90 = ((MR_Word) ((MR_hl_field(3, Instr_9, 2))));
            MR_Word Lval_516 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_fork_new_child(");
            ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_7, Stream_8, Lval_516);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_4_p_0(Stream_8, Child_90);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
        case (MR_Integer) 30:
          {
            MR_Word Lval_517 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));
            MR_Word Label_518 = ((MR_Word) ((MR_hl_field(3, Instr_9, 2))));

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_join_and_continue(");
            ll_backend__llds_out__llds_out_data__output_lval_5_p_0(Info_7, Stream_8, Lval_517);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_4_p_0(Stream_8, Label_518);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
        case (MR_Integer) 31:
          {
            MR_Integer NumSlots_91 = ((MR_Integer) ((MR_hl_field(3, Instr_9, 1))));
            MR_Word Lval_519 = ((MR_Word) ((MR_hl_field(3, Instr_9, 2))));

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_lc_create_loop_control(");
            mercury__io__write_int_4_p_0(Stream_8, NumSlots_91);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            ll_backend__llds_out__llds_out_data__output_lval_5_p_0(Info_7, Stream_8, Lval_519);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
        case (MR_Integer) 32:
          {
            MR_Word LCRval_92 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));
            MR_Word LCSLval_93 = ((MR_Word) ((MR_hl_field(3, Instr_9, 2))));
            MR_Word InternalLabel_94 = ((MR_Word) ((MR_hl_field(3, Instr_9, 3))));

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_lc_wait_free_slot(");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, LCRval_92, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            ll_backend__llds_out__llds_out_data__output_lval_5_p_0(Info_7, Stream_8, LCSLval_93);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            ll_backend__llds_out__llds_out_code_addr__output_label_4_p_0(Stream_8, InternalLabel_94);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
        case (MR_Integer) 33:
          {
            MR_Word LCSRval_95 = ((MR_Word) ((MR_hl_field(3, Instr_9, 2))));
            MR_Word ChildLabel_96 = ((MR_Word) ((MR_hl_field(3, Instr_9, 3))));
            MR_Word LCRval_520 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_lc_spawn_off((MR_LoopControl*)");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, LCRval_520, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, LCSRval_95, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_4_p_0(Stream_8, ChildLabel_96);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
        case (MR_Integer) 34:
          {
            MR_Word LCRval_521 = ((MR_Word) ((MR_hl_field(3, Instr_9, 1))));
            MR_Word LCSRval_522 = ((MR_Word) ((MR_hl_field(3, Instr_9, 2))));

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_lc_join_and_terminate(");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, LCRval_521, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, LCSRval_522, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_float_dword_assignment__461__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word Lval_9,
  MR_Word Rval_10)
{
  MR_bool succeeded;
  MR_Word Type_12;
  MR_Word AutoComments_13;
  MR_Word Var_19;

  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\t* (MR_Float *) &(");
  ll_backend__llds_out__llds_out_data__output_lval_for_assign_6_p_0(Info_7, Stream_8, Lval_9, &Type_12);
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_5[0]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_6_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (Type_12));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) ((MR_Unsigned) 20U));
  }
  mercury__require__expect_3_p_0(Var_19, (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_float_dword_assignment\'/6", (MR_String) "expected word");
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") = ");
  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_7, Rval_10, (MR_Word) ((MR_Unsigned) 4U), Stream_8);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ";\n");
  AutoComments_13 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, 8))) >> 15)) & (MR_Integer) 1);
  switch (AutoComments_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\t\t/* assigning float dword */\n");
      break;
    case (MR_Integer) 0:
      {
      }
      break;
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__is_aligned_float_dword_assignment_4_p_0(
  MR_Word InstrA_5,
  MR_Word InstrB_6,
  MR_Word * LvalA_7,
  MR_Word * Rval_8)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) InstrA_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, InstrA_5, 0)))) == (MR_Integer) 1)));
  MR_Word TypeInfo_27_27;
  MR_Word RvalA_9;
  MR_Word LvalB_10;
  MR_Word RvalB_11;
  MR_Word MaybePtag_12;
  MR_Word Address_13;
  MR_Integer Offset_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Integer Var_21;
  MR_Integer Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;

  if (succeeded)
  {
    *LvalA_7 = ((MR_Word) ((MR_hl_field(3, InstrA_5, 1))));
    RvalA_9 = ((MR_Word) ((MR_hl_field(3, InstrA_5, 2))));
    succeeded = ((((MR_tag((MR_Word) InstrB_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, InstrB_6, 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      LvalB_10 = ((MR_Word) ((MR_hl_field(3, InstrB_6, 1))));
      RvalB_11 = ((MR_Word) ((MR_hl_field(3, InstrB_6, 2))));
      succeeded = ((((MR_tag((MR_Word) RvalA_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RvalA_9, 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        Var_15 = ((MR_Word) ((MR_hl_field(3, RvalA_9, 1))));
        *Rval_8 = ((MR_Word) ((MR_hl_field(3, RvalA_9, 2))));
        succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 44U));
        if (succeeded)
        {
          succeeded = ((((MR_tag((MR_Word) RvalB_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RvalB_11, 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            Var_16 = ((MR_Word) ((MR_hl_field(3, RvalB_11, 1))));
            Var_23 = ((MR_Word) ((MR_hl_field(3, RvalB_11, 2))));
            succeeded = ll_backend__llds____Unify____rval_0_0(*Rval_8, Var_23);
            if (succeeded)
            {
              succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 48U));
              if (succeeded)
              {
                succeeded = ((((MR_tag((MR_Word) *LvalA_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, *LvalA_7, 0)))) == (MR_Integer) 9)));
                if (succeeded)
                {
                  MaybePtag_12 = ((MR_Word) ((MR_hl_field(3, *LvalA_7, 1))));
                  Address_13 = ((MR_Word) ((MR_hl_field(3, *LvalA_7, 2))));
                  Var_17 = ((MR_Word) ((MR_hl_field(3, *LvalA_7, 3))));
                  succeeded = ((((MR_tag((MR_Word) Var_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_17, 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_18 = ((MR_Word) ((MR_hl_field(3, Var_17, 1))));
                    succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Offset_14 = ((MR_Integer) ((MR_hl_field(1, Var_18, 0))));
                      succeeded = ((((MR_tag((MR_Word) LvalB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, LvalB_10, 0)))) == (MR_Integer) 9)));
                      if (succeeded)
                      {
                        Var_24 = ((MR_Word) ((MR_hl_field(3, LvalB_10, 1))));
                        Var_25 = ((MR_Word) ((MR_hl_field(3, LvalB_10, 2))));
                        Var_19 = ((MR_Word) ((MR_hl_field(3, LvalB_10, 3))));
                        TypeInfo_27_27 = (MR_Word) (&ll_backend__llds_out__llds_out_instr_scalar_common_1[4]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (MaybePtag_12)), ((MR_Box) (Var_24)));
                        if (succeeded)
                        {
                          succeeded = ll_backend__llds____Unify____rval_0_0(Address_13, Var_25);
                          if (succeeded)
                          {
                            succeeded = ((((MR_tag((MR_Word) Var_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_19, 0)))) == (MR_Integer) 1)));
                            if (succeeded)
                            {
                              Var_20 = ((MR_Word) ((MR_hl_field(3, Var_19, 1))));
                              succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 1);
                              if (succeeded)
                              {
                                Var_21 = ((MR_Integer) ((MR_hl_field(1, Var_20, 0))));
                                Var_22 = (MR_Integer) ((MR_Unsigned) Var_21 - (MR_Unsigned) Offset_14);
                                succeeded = (Var_22 == (MR_Integer) 1);
                                if (succeeded)
                                  succeeded = mercury__int__even_1_p_0(Offset_14);
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
  return succeeded;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_99_114_95_104_112_95_110_111_95_114_101_117_115_101_95_95_91_49_48_93_95_48_12_p_0(
  MR_Word Info_13,
  MR_Word Stream_14,
  MR_Word Lval_15,
  MR_Word MaybePtag_16,
  MR_Word MaybeOffset_17,
  MR_Word SizeRval_18,
  MR_Word MaybeAllocId_19,
  MR_Word MayUseAtomicAlloc_20,
  MR_Word MaybeRegionRval_21)
{
  MR_bool succeeded;

  if ((MaybeRegionRval_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ProfMem_27 = ((((MR_Unsigned) ((MR_hl_field(0, Info_13, 8))) >> 9)) & (MR_Integer) 1);

    if ((MaybePtag_16 == (MR_Word) ((MR_Unsigned) 0U)))
      switch (ProfMem_27) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer N_130;
            MR_Word Var_114;

            if ((MaybeOffset_17 == (MR_Word) ((MR_Unsigned) 0U)))
              switch (MayUseAtomicAlloc_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) "MR_alloc_heap(");
                  break;
                case (MR_Integer) 0:
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) "MR_alloc_heap_atomic(");
                  break;
              }
            else
              switch (MayUseAtomicAlloc_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) "MR_offset_incr_hp(");
                  break;
                case (MR_Integer) 0:
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) "MR_offset_incr_hp_atomic(");
                  break;
              }
            ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_13, Stream_14, Lval_15);
            mercury__io__write_string_4_p_0(Stream_14, (MR_String) ", ");
            if (!((MaybeOffset_17 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Integer Offset_128 = ((MR_Integer) ((MR_hl_field(1, MaybeOffset_17, 0))));

              mercury__io__write_int_4_p_0(Stream_14, Offset_128);
              mercury__io__write_string_4_p_0(Stream_14, (MR_String) ", ");
            }
            succeeded = ((((MR_tag((MR_Word) SizeRval_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SizeRval_18, 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_114 = ((MR_Word) ((MR_hl_field(3, SizeRval_18, 1))));
              succeeded = ((MR_tag((MR_Word) Var_114)) == (MR_Integer) 1);
              if (succeeded)
                N_130 = ((MR_Integer) ((MR_hl_field(1, Var_114, 0))));
            }
            if (succeeded)
              mercury__io__write_int_4_p_0(Stream_14, N_130);
            else
              ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_13, SizeRval_18, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_instr_scalar_common_2[3])), Stream_14);
            mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer N_123;
            MR_Word Var_74;

            switch (MayUseAtomicAlloc_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                mercury__io__write_string_4_p_0(Stream_14, (MR_String) "MR_offset_incr_hp_msg(");
                break;
              case (MR_Integer) 0:
                mercury__io__write_string_4_p_0(Stream_14, (MR_String) "MR_offset_incr_hp_atomic_msg(");
                break;
            }
            ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_13, Stream_14, Lval_15);
            mercury__io__write_string_4_p_0(Stream_14, (MR_String) ", ");
            if ((MaybeOffset_17 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__io__write_string_4_p_0(Stream_14, (MR_String) "0, ");
            else
            {
              MR_Integer Offset_28 = ((MR_Integer) ((MR_hl_field(1, MaybeOffset_17, 0))));

              mercury__io__write_int_4_p_0(Stream_14, Offset_28);
              mercury__io__write_string_4_p_0(Stream_14, (MR_String) ", ");
            }
            succeeded = ((((MR_tag((MR_Word) SizeRval_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SizeRval_18, 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_74 = ((MR_Word) ((MR_hl_field(3, SizeRval_18, 1))));
              succeeded = ((MR_tag((MR_Word) Var_74)) == (MR_Integer) 1);
              if (succeeded)
                N_123 = ((MR_Integer) ((MR_hl_field(1, Var_74, 0))));
            }
            if (succeeded)
              mercury__io__write_int_4_p_0(Stream_14, N_123);
            else
              ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_13, SizeRval_18, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_instr_scalar_common_2[3])), Stream_14);
            mercury__io__write_string_4_p_0(Stream_14, (MR_String) ", ");
            ll_backend__llds_out__llds_out_instr__output_maybe_alloc_site_id_5_p_0(Info_13, Stream_14, MaybeAllocId_19);
            mercury__io__write_string_4_p_0(Stream_14, (MR_String) ", NULL)");
          }
          break;
      }
    else
    {
      MR_Word Var_242 = ((MR_Word) ((MR_hl_field(1, MaybePtag_16, 0))));

      switch (ProfMem_27) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer N_166;
            MR_Word Var_160;

            if ((MaybeOffset_17 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              switch (MayUseAtomicAlloc_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) "MR_tag_alloc_heap(");
                  break;
                case (MR_Integer) 0:
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) "MR_tag_alloc_heap_atomic(");
                  break;
              }
              ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_13, Stream_14, Lval_15);
              mercury__io__write_string_4_p_0(Stream_14, (MR_String) ", ");
              ll_backend__llds_out__llds_out_data__write_ptag_4_p_0(Stream_14, Var_242);
            }
            else
            {
              switch (MayUseAtomicAlloc_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) "MR_tag_offset_incr_hp(");
                  break;
                case (MR_Integer) 0:
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) "MR_tag_offset_incr_hp_atomic(");
                  break;
              }
              ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_13, Stream_14, Lval_15);
              mercury__io__write_string_4_p_0(Stream_14, (MR_String) ", ");
              ll_backend__llds_out__llds_out_data__output_ptag_4_p_0(Stream_14, Var_242);
            }
            mercury__io__write_string_4_p_0(Stream_14, (MR_String) ", ");
            if (!((MaybeOffset_17 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Integer Offset_156 = ((MR_Integer) ((MR_hl_field(1, MaybeOffset_17, 0))));

              mercury__io__write_int_4_p_0(Stream_14, Offset_156);
              mercury__io__write_string_4_p_0(Stream_14, (MR_String) ", ");
            }
            succeeded = ((((MR_tag((MR_Word) SizeRval_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SizeRval_18, 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_160 = ((MR_Word) ((MR_hl_field(3, SizeRval_18, 1))));
              succeeded = ((MR_tag((MR_Word) Var_160)) == (MR_Integer) 1);
              if (succeeded)
                N_166 = ((MR_Integer) ((MR_hl_field(1, Var_160, 0))));
            }
            if (succeeded)
              mercury__io__write_int_4_p_0(Stream_14, N_166);
            else
              ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_13, SizeRval_18, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_instr_scalar_common_2[3])), Stream_14);
            mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer N_194;
            MR_Word Var_188;

            switch (MayUseAtomicAlloc_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                mercury__io__write_string_4_p_0(Stream_14, (MR_String) "MR_tag_offset_incr_hp_msg(");
                break;
              case (MR_Integer) 0:
                mercury__io__write_string_4_p_0(Stream_14, (MR_String) "MR_tag_offset_incr_hp_atomic_msg(");
                break;
            }
            ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_13, Stream_14, Lval_15);
            mercury__io__write_string_4_p_0(Stream_14, (MR_String) ", ");
            ll_backend__llds_out__llds_out_data__output_ptag_4_p_0(Stream_14, Var_242);
            mercury__io__write_string_4_p_0(Stream_14, (MR_String) ", ");
            if ((MaybeOffset_17 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__io__write_string_4_p_0(Stream_14, (MR_String) "0, ");
            else
            {
              MR_Integer Offset_181 = ((MR_Integer) ((MR_hl_field(1, MaybeOffset_17, 0))));

              mercury__io__write_int_4_p_0(Stream_14, Offset_181);
              mercury__io__write_string_4_p_0(Stream_14, (MR_String) ", ");
            }
            succeeded = ((((MR_tag((MR_Word) SizeRval_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SizeRval_18, 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_188 = ((MR_Word) ((MR_hl_field(3, SizeRval_18, 1))));
              succeeded = ((MR_tag((MR_Word) Var_188)) == (MR_Integer) 1);
              if (succeeded)
                N_194 = ((MR_Integer) ((MR_hl_field(1, Var_188, 0))));
            }
            if (succeeded)
              mercury__io__write_int_4_p_0(Stream_14, N_194);
            else
              ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_13, SizeRval_18, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_instr_scalar_common_2[3])), Stream_14);
            mercury__io__write_string_4_p_0(Stream_14, (MR_String) ", ");
            ll_backend__llds_out__llds_out_instr__output_maybe_alloc_site_id_5_p_0(Info_13, Stream_14, MaybeAllocId_19);
            mercury__io__write_string_4_p_0(Stream_14, (MR_String) ", NULL)");
          }
          break;
      }
    }
  }
  else
  {
    MR_Word RegionRval_24 = ((MR_Word) ((MR_hl_field(1, MaybeRegionRval_21, 0))));
    MR_Integer N_26;
    MR_Word Var_47;

    if ((MaybePtag_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_4_p_0(Stream_14, (MR_String) "MR_alloc_in_region(");
      ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_13, Stream_14, Lval_15);
    }
    else
    {
      MR_Word Ptag_25 = ((MR_Word) ((MR_hl_field(1, MaybePtag_16, 0))));

      mercury__io__write_string_4_p_0(Stream_14, (MR_String) "MR_tag_alloc_in_region(");
      ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(Info_13, Stream_14, Lval_15);
      mercury__io__write_string_4_p_0(Stream_14, (MR_String) ", ");
      ll_backend__llds_out__llds_out_data__output_ptag_4_p_0(Stream_14, Ptag_25);
    }
    mercury__io__write_string_4_p_0(Stream_14, (MR_String) ", ");
    ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_13, RegionRval_24, Stream_14);
    mercury__io__write_string_4_p_0(Stream_14, (MR_String) ", ");
    succeeded = ((((MR_tag((MR_Word) SizeRval_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SizeRval_18, 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_47 = ((MR_Word) ((MR_hl_field(3, SizeRval_18, 1))));
      succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 1);
      if (succeeded)
        N_26 = ((MR_Integer) ((MR_hl_field(1, Var_47, 0))));
    }
    if (succeeded)
      mercury__io__write_int_4_p_0(Stream_14, N_26);
    else
      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_13, SizeRval_18, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_instr_scalar_common_2[3])), Stream_14);
    mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_maybe_alloc_site_id_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word MaybeAllocId_8)
{
  if ((MaybeAllocId_8 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "NULL");
  else
  {
    MR_Word AllocId_10 = ((MR_Word) ((MR_hl_field(1, MaybeAllocId_8, 0))));
    MR_String MangledModuleName_15 = ((MR_String) ((MR_hl_field(0, Info_6, 1))));
    MR_Word AllocSiteMap_16 = ((MR_Word) ((MR_hl_field(0, Info_6, 7))));
    MR_Word AllocSiteSlotName_17;
    MR_Box conv0_AllocSiteSlotName_17;

    mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0), (MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), AllocSiteMap_16, ((MR_Box) (AllocId_10)), &conv0_AllocSiteSlotName_17);
    AllocSiteSlotName_17 = ((MR_Word) (conv0_AllocSiteSlotName_17));
    ll_backend__layout_out__output_layout_slot_addr_6_p_0(Stream_7, (MR_Integer) 1, MangledModuleName_15, AllocSiteSlotName_17);
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Decl_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Decls_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_String TypeString_14 = ((MR_String) ((MR_hl_field(0, Decl_10, 1))));
      MR_String VarName_15 = ((MR_String) ((MR_hl_field(0, Decl_10, 2))));
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\t");
      mercury__io__write_string_4_p_0(Stream_1, TypeString_14);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\t");
      mercury__io__write_string_4_p_0(Stream_1, VarName_15);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ";\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Decls_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static MR_String MR_CALL 
ll_backend__llds_out__llds_out_instr__reset_trail_reason_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2 = ((&ll_backend__llds_out__llds_out_instr_vector_common_4[0 + HeadVar__1_1]))->ll_backend__llds_out__llds_out_instr__vector_common_type_4_0__vct_4_f_0;

  return HeadVar__2_2;
}

static MR_Integer MR_CALL 
ll_backend__llds_out__llds_out_instr__max_leaf_stack_frame_size_0_f_0(void)
{
  return (MR_Integer) 32;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word EmbeddedFrame_8)
{
  MR_Word MainStackId_10 = ((MR_Unsigned) ((MR_hl_field(0, EmbeddedFrame_8, 0))) & (MR_Integer) 1);
  MR_Integer LastSlot_12 = ((MR_Integer) ((MR_hl_field(0, EmbeddedFrame_8, 2))));
  MR_Word FrameStartRval_13;

  FrameStartRval_13 = ll_backend__llds__stack_slot_num_to_lval_ref_2_f_0(MainStackId_10, LastSlot_12);
  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, FrameStartRval_13, (MR_Word) ((MR_Unsigned) 12U), Stream_7);
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word MaybeLabel_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word MaybeLabels_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));

    if ((MaybeLabel_10 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "MR_ENTRY(MR_do_not_reached)");
    else
    {
      MR_Word Label_16 = ((MR_Word) ((MR_hl_field(1, MaybeLabel_10, 0))));

      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "MR_LABEL_AP(");
      ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_4_p_0(Stream_1, Label_16);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ")");
    }
    ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_4_p_0(Stream_1, MaybeLabels_11);
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word MaybeLabel_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word MaybeLabels_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_4_p_0(Stream_1, (MR_String) " MR_AND\n\t\t");
      if ((MaybeLabel_10 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) "MR_ENTRY(MR_do_not_reached)");
      else
      {
        MR_Word Label_18 = ((MR_Word) ((MR_hl_field(1, MaybeLabel_10, 0))));

        mercury__io__write_string_4_p_0(Stream_1, (MR_String) "MR_LABEL_AP(");
        ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_4_p_0(Stream_1, Label_18);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) ")");
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = MaybeLabels_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_goto_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word Target_9,
  MR_Word CallerLabel_10)
{
  switch (MR_tag((MR_Word) Target_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Target_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_proceed();\n");
          break;
        case (MR_Integer) 1:
          {
            MR_Word UseMacro_21 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, 8))) >> 2)) & (MR_Integer) 1);

            switch (UseMacro_21) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_GOTO(MR_ENTRY(MR_do_redo));\n");
                break;
              case (MR_Integer) 0:
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_redo();\n");
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word UseMacro_135 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, 8))) >> 2)) & (MR_Integer) 1);

            switch (UseMacro_135) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_GOTO(MR_ENTRY(MR_do_fail));\n");
                break;
              case (MR_Integer) 0:
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_fail();\n");
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_GOTO(MR_ENTRY(MR_do_trace_redo_fail_shallow));\n");
          break;
        case (MR_Integer) 4:
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_GOTO(MR_ENTRY(MR_do_trace_redo_fail_deep));\n");
          break;
        case (MR_Integer) 5:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_tailcall(MR_ENTRY(MR_do_not_reached),\n\t\t");
            ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_4_p_0(Stream_8, CallerLabel_10);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Label_12 = ((MR_Word) ((MR_hl_field(1, Target_9, 0))));
        MR_Word ProfileCalls_13 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, 8))) >> 11)) & (MR_Integer) 1);

        if (((MR_tag((MR_Word) Label_12)) == (MR_Integer) 1))
        {
          MR_Word Var_249 = ((MR_Unsigned) ((MR_hl_field(1, Label_12, 0))) & (MR_Integer) 3);

          switch (ProfileCalls_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (Var_249) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_np_localtailcall(");
                    ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_4_p_0(Stream_8, Label_12);
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_np_tailcall_ent(");
                    ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_4_p_0(Stream_8, Label_12);
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_np_tailcall_ent(");
                    ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_4_p_0(Stream_8, Label_12);
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (Var_249) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_localtailcall(");
                    ll_backend__llds_out__llds_out_code_addr__output_label_4_p_0(Stream_8, Label_12);
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",\n\t\t");
                    ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_4_p_0(Stream_8, CallerLabel_10);
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_tailcall(");
                    ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_4_p_0(Stream_8, Label_12);
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",\n\t\t");
                    ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_4_p_0(Stream_8, CallerLabel_10);
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_tailcall(");
                    ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_4_p_0(Stream_8, Label_12);
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",\n\t\t");
                    ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_4_p_0(Stream_8, CallerLabel_10);
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
                  }
                  break;
              }
              break;
          }
        }
        else
        {
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_GOTO_LAB(");
          ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_4_p_0(Stream_8, Label_12);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ProcLabel_19 = ((MR_Word) ((MR_hl_field(2, Target_9, 0))));
        MR_Word ProfileCalls_134 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, 8))) >> 11)) & (MR_Integer) 1);

        switch (ProfileCalls_134) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_84;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_np_tailcall_ent(");
              Var_84 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0((MR_Integer) 0, ProcLabel_19);
              mercury__io__write_string_4_p_0(Stream_8, Var_84);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_74;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_tailcall(MR_ENTRY(");
              Var_74 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0((MR_Integer) 1, ProcLabel_19);
              mercury__io__write_string_4_p_0(Stream_8, Var_74);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "),\n\t\t");
              ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_4_p_0(Stream_8, CallerLabel_10);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Target_9, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Last_20 = ((MR_Unsigned) ((MR_hl_field(3, Target_9, 1))) & (MR_Integer) 1);

            switch (Last_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_succeed();\n");
                break;
              case (MR_Integer) 1:
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_succeed_discard();\n");
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Variant_22 = ((MR_Word) ((MR_hl_field(3, Target_9, 1))));
            MR_String Var_114;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_set_prof_ho_caller_proc(");
            ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_4_p_0(Stream_8, CallerLabel_10);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n\t");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_np_tailcall_ent(do_call_closure_");
            Var_114 = ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_f_0(Variant_22);
            mercury__io__write_string_4_p_0(Stream_8, Var_114);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_125;
            MR_Word Variant_136 = ((MR_Word) ((MR_hl_field(3, Target_9, 1))));

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_set_prof_ho_caller_proc(");
            ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_4_p_0(Stream_8, CallerLabel_10);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n\t");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_np_tailcall_ent(do_call_class_method_");
            Var_125 = ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_f_0(Variant_136);
            mercury__io__write_string_4_p_0(Stream_8, Var_125);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word Label_9,
  MR_Word LabelOutputInfo_10)
{
  MR_bool succeeded;
  MR_Word ProfileTime_12 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, 8))) >> 10)) & (MR_Integer) 1);
  MR_Word TypeCtorInfo_50_50;
  MR_Word ContLabelSet_13;

  succeeded = (ProfileTime_12 == (MR_Integer) 1);
  if (succeeded)
  {
    ContLabelSet_13 = ((MR_Word) ((MR_hl_field(0, LabelOutputInfo_10, 1))));
    TypeCtorInfo_50_50 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0);
    succeeded = mercury__set_tree234__contains_2_p_0(TypeCtorInfo_50_50, ContLabelSet_13, ((MR_Box) (Label_9)));
  }
  if (succeeded)
  {
    MR_Word CallerLabel_14 = ((MR_Word) ((MR_hl_field(0, LabelOutputInfo_10, 0))));

    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_update_prof_current_proc(MR_LABEL_AP(");
    ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_4_p_0(Stream_8, CallerLabel_14);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "));\n");
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_defn_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_59 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Var_60 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 3);

    switch (Var_60) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Var_41;

          Var_41 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0((MR_Integer) 0, Var_59);
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "MR_def_local(");
          mercury__io__write_string_4_p_0(Stream_1, Var_41);
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) ")\n");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_13;

          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "MR_define_entry(");
          {
            Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_13, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
            MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_59));
          }
          ll_backend__llds_out__llds_out_code_addr__output_label_4_p_0(Stream_1, Var_13);
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) ");\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_28;

          Var_28 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0((MR_Integer) 0, Var_59);
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "MR_def_static(");
          mercury__io__write_string_4_p_0(Stream_1, Var_28);
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) ")\n");
        }
        break;
    }
  }
  else
  {
    MR_Integer Num_45 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ProcLabel_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String Var_54;
    MR_String Var_67;

    Var_54 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0((MR_Integer) 0, ProcLabel_46);
    mercury__io__write_string_4_p_0(Stream_1, (MR_String) "MR_def_label(");
    mercury__io__write_string_4_p_0(Stream_1, Var_54);
    mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_instr_scalar_common_2[2]), Num_45, &Var_67);
    mercury__io__write_string_4_p_0(Stream_1, Var_67);
    mercury__io__write_string_4_p_0(Stream_1, (MR_String) ")\n");
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word LiveVals_8)
{
  MR_Word AutoComments_10 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, 8))) >> 15)) & (MR_Integer) 1);

  switch (AutoComments_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "/*\n");
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "* Garbage collection livevals info\n");
        ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_5_p_0(Info_6, Stream_7, LiveVals_8);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "*/\n");
      }
      break;
    case (MR_Integer) 0:
      {
      }
      break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_5_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word LiveInfo_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word LiveInfos_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Locn_16 = ((MR_Word) ((MR_hl_field(0, LiveInfo_13, 0))));
      MR_Word LiveValueType_17 = ((MR_Word) ((MR_hl_field(0, LiveInfo_13, 1))));
      MR_Word TypeParams_18 = ((MR_Word) ((MR_hl_field(0, LiveInfo_13, 2))));
      MR_Word TypeParamList_19;
      MR_Word next_value_of_HeadVar__3_3;

      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "*\t");
      if (((MR_tag((MR_Word) Locn_16)) == (MR_Integer) 0))
      {
        MR_Word Lval_35 = ((MR_Word) ((MR_hl_field(0, Locn_16, 0))));

        ll_backend__llds_out__llds_out_data__output_lval_5_p_0(Info_1, Stream_2, Lval_35);
      }
      else
      {
        MR_Integer Offset_36 = ((MR_Integer) ((MR_hl_field(1, Locn_16, 1))));
        MR_Word Lval_42 = ((MR_Word) ((MR_hl_field(1, Locn_16, 0))));

        mercury__io__write_string_4_p_0(Stream_2, (MR_String) "offset ");
        mercury__io__write_int_4_p_0(Stream_2, Offset_36);
        mercury__io__write_string_4_p_0(Stream_2, (MR_String) " from ");
        ll_backend__llds_out__llds_out_data__output_lval_5_p_0(Info_1, Stream_2, Lval_42);
      }
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\t");
      ll_backend__llds_out__llds_out_instr__output_live_value_type_4_p_0(Stream_2, LiveValueType_17);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\t");
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__llds_out__llds_out_instr_scalar_common_1[1]), (MR_Word) (&ll_backend__llds_out__llds_out_instr_scalar_common_1[2]), TypeParams_18, &TypeParamList_19);
      ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_5_p_0(Info_1, Stream_2, TypeParamList_19);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = LiveInfos_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_live_value_type_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "type succip");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "type curfr");
          break;
        case (MR_Integer) 2:
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "type maxfr");
          break;
        case (MR_Integer) 3:
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "type redoip");
          break;
        case (MR_Integer) 4:
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "type redofr");
          break;
        case (MR_Integer) 5:
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "type hp");
          break;
        case (MR_Integer) 6:
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "type trail_ptr");
          break;
        case (MR_Integer) 7:
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "type ticket");
          break;
        case (MR_Integer) 8:
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "type region ite");
          break;
        case (MR_Integer) 9:
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "type region disj");
          break;
        case (MR_Integer) 10:
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "type region commit");
          break;
        case (MR_Integer) 11:
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "unwanted");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_78 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
        MR_String Name_79 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Word Type_80 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
        MR_Integer VarInt_83;
        MR_Word NewTVarset_84;
        MR_String Var_102;

        mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_78, &VarInt_83);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) "var(");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_instr_scalar_common_2[2]), VarInt_83, &Var_102);
        mercury__io__write_string_4_p_0(Stream_1, Var_102);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", ");
        mercury__io__write_string_4_p_0(Stream_1, Name_79);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", ");
        mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &NewTVarset_84);
        parse_tree__parse_tree_out_type__mercury_output_type_6_p_0(NewTVarset_84, (MR_Integer) 0, Type_80, Stream_1);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) ")");
      }
      break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_5_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_13;
      MR_Word LocnSet_14;
      MR_Word VarLocnSets_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Integer VarInt_17;
      MR_Word Locns_18;
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word next_value_of_HeadVar__3_3;

      Var_13 = ((MR_Word) ((MR_hl_field(0, Var_21, 0))));
      LocnSet_14 = ((MR_Word) ((MR_hl_field(0, Var_21, 1))));
      mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), Var_13, &VarInt_17);
      mercury__io__write_int_4_p_0(Stream_2, VarInt_17);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) " - ");
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0), LocnSet_14, &Locns_18);
      ll_backend__llds_out__llds_out_instr__output_layout_locns_5_p_0(Info_1, Stream_2, Locns_18);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "  ");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = VarLocnSets_15;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_layout_locns_5_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Locn_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Locns_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));

      if (((MR_tag((MR_Word) Locn_13)) == (MR_Integer) 0))
      {
        MR_Word Lval_23 = ((MR_Word) ((MR_hl_field(0, Locn_13, 0))));

        ll_backend__llds_out__llds_out_data__output_lval_5_p_0(Info_1, Stream_2, Lval_23);
      }
      else
      {
        MR_Integer Offset_24 = ((MR_Integer) ((MR_hl_field(1, Locn_13, 1))));
        MR_Word Lval_30 = ((MR_Word) ((MR_hl_field(1, Locn_13, 0))));

        mercury__io__write_string_4_p_0(Stream_2, (MR_String) "offset ");
        mercury__io__write_int_4_p_0(Stream_2, Offset_24);
        mercury__io__write_string_4_p_0(Stream_2, (MR_String) " from ");
        ll_backend__llds_out__llds_out_data__output_lval_5_p_0(Info_1, Stream_2, Lval_30);
      }
      if (!((Locns_14 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word next_value_of_HeadVar__3_3;

        mercury__io__write_string_4_p_0(Stream_2, (MR_String) " and ");
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = Locns_14;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_call_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Target_10,
  MR_Word Continuation_11,
  MR_Word CallerLabel_12)
{
  MR_bool succeeded;
  MR_Word ProfileCall_16;
  MR_Word Label_17;
  MR_Word Var_31;

  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\t");
  if (((((MR_tag((MR_Word) Target_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Target_10, 0)))) == (MR_Integer) 2))))
    succeeded = MR_TRUE;
  else
  if (((((MR_tag((MR_Word) Target_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Target_10, 0)))) == (MR_Integer) 1))))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  if (succeeded)
  {
    ProfileCall_16 = (MR_Integer) 0;
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_set_prof_ho_caller_proc(");
    ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_4_p_0(Stream_9, CallerLabel_12);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ");\n\t");
  }
  else
    ProfileCall_16 = ((((MR_Unsigned) ((MR_hl_field(0, Info_8, 8))) >> 11)) & (MR_Integer) 1);
  succeeded = ((MR_tag((MR_Word) Target_10)) == (MR_Integer) 1);
  if (succeeded)
  {
    Label_17 = ((MR_Word) ((MR_hl_field(1, Target_10, 0))));
    Var_31 = ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_f_0(Label_17);
    succeeded = (Var_31 == (MR_Integer) 0);
  }
  if (succeeded)
    switch (ProfileCall_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String BaseStr_18;
          MR_Word NeedsPrefix_19;
          MR_Word Wrapper_20;

          ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_p_0(Continuation_11, &BaseStr_18, &NeedsPrefix_19, &Wrapper_20);
          switch (NeedsPrefix_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_noprof_localcall(");
                ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_4_p_0(Stream_9, Label_17);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t\t");
                mercury__io__write_string_4_p_0(Stream_9, BaseStr_18);
                ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_6_p_0(Stream_9, BaseStr_18, NeedsPrefix_19, Wrapper_20);
              }
              break;
            case (MR_Integer) 1:
              switch (Wrapper_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_np_localcall_ent(");
                    ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_4_p_0(Stream_9, Label_17);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t\t");
                    mercury__io__write_string_4_p_0(Stream_9, BaseStr_18);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_np_localcall_lab(");
                    ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_4_p_0(Stream_9, Label_17);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t\t");
                    mercury__io__write_string_4_p_0(Stream_9, BaseStr_18);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_np_localcall(");
                    ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_4_p_0(Stream_9, Label_17);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t\t");
                    ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_6_p_0(Stream_9, BaseStr_18, NeedsPrefix_19, Wrapper_20);
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_localcall(");
          ll_backend__llds_out__llds_out_code_addr__output_label_4_p_0(Stream_9, Label_17);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t\t");
          ll_backend__llds_out__llds_out_code_addr__output_code_addr_4_p_0(Stream_9, Continuation_11);
        }
        break;
    }
  else
  {
    MR_Word ContLabel_21;
    MR_Word Var_63;

    succeeded = ((MR_tag((MR_Word) Continuation_11)) == (MR_Integer) 1);
    if (succeeded)
    {
      ContLabel_21 = ((MR_Word) ((MR_hl_field(1, Continuation_11, 0))));
      Var_63 = ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_f_0(ContLabel_21);
      succeeded = (Var_63 == (MR_Integer) 0);
    }
    if (succeeded)
      switch (ProfileCall_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String BaseStr_103;
            MR_Word NeedsPrefix_104;
            MR_Word Wrapper_105;

            ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_p_0(Target_10, &BaseStr_103, &NeedsPrefix_104, &Wrapper_105);
            switch (NeedsPrefix_104) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_noprof_call_localret(");
                  ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_6_p_0(Stream_9, BaseStr_103, NeedsPrefix_104, Wrapper_105);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t\t");
                  ll_backend__llds_out__llds_out_code_addr__output_label_4_p_0(Stream_9, ContLabel_21);
                }
                break;
              case (MR_Integer) 1:
                switch (Wrapper_105) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_np_call_localret_ent(");
                      mercury__io__write_string_4_p_0(Stream_9, BaseStr_103);
                      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t\t");
                      ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_4_p_0(Stream_9, ContLabel_21);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_call\'/7", (MR_String) "calling label");
                      return;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_np_call_localret(");
                      ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_6_p_0(Stream_9, BaseStr_103, NeedsPrefix_104, Wrapper_105);
                      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t\t");
                      ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_4_p_0(Stream_9, ContLabel_21);
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_call_localret(");
            ll_backend__llds_out__llds_out_code_addr__output_code_addr_4_p_0(Stream_9, Target_10);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t\t");
            ll_backend__llds_out__llds_out_code_addr__output_label_4_p_0(Stream_9, ContLabel_21);
          }
          break;
      }
    else
    {
      switch (ProfileCall_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_noprof_call(");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_call(");
          break;
      }
      ll_backend__llds_out__llds_out_code_addr__output_code_addr_4_p_0(Stream_9, Target_10);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t\t");
      ll_backend__llds_out__llds_out_code_addr__output_code_addr_4_p_0(Stream_9, Continuation_11);
    }
  }
  switch (ProfileCall_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t\t");
        ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_4_p_0(Stream_9, CallerLabel_12);
      }
      break;
  }
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ");\n");
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_block_end_3_p_0(
  MR_Word Stream_4)
{
  mercury__io__write_string_4_p_0(Stream_4, (MR_String) "\t}\n");
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_block_start_5_p_0(
  MR_Word Stream_6,
  MR_Integer TempR_7,
  MR_Integer TempF_8)
{
  MR_bool succeeded;

  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\t{\n");
  succeeded = (TempR_7 > (MR_Integer) 0);
  if (succeeded)
  {
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\tMR_Word ");
    ll_backend__llds_out__llds_out_instr__output_temp_decls_2_6_p_0(Stream_6, (MR_Integer) 1, TempR_7, (MR_String) "r");
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ";\n");
  }
  succeeded = (TempF_8 > (MR_Integer) 0);
  if (succeeded)
  {
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\tMR_Float ");
    ll_backend__llds_out__llds_out_instr__output_temp_decls_2_6_p_0(Stream_6, (MR_Integer) 1, TempF_8, (MR_String) "f");
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ";\n");
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_temp_decls_2_6_p_0(
  MR_Word Stream_7,
  MR_Integer Next_8,
  MR_Integer Max_9,
  MR_String Type_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Next_8 <= Max_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer Var_24;
      MR_String Var_30;
      MR_Integer next_value_of_Next_8;

      succeeded = (Next_8 > (MR_Integer) 1);
      if (succeeded)
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_temp");
      mercury__io__write_string_4_p_0(Stream_7, Type_10);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_instr_scalar_common_2[2]), Next_8, &Var_30);
      mercury__io__write_string_4_p_0(Stream_7, Var_30);
      Var_24 = (MR_Integer) ((MR_Unsigned) Next_8 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Next_8 = Var_24;
      Next_8 = next_value_of_Next_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_livevals_5_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Lval_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Lvals_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word next_value_of_HeadVar__3_3;

      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "*\t");
      ll_backend__llds_out__llds_out_data__output_lval_5_p_0(Info_1, Stream_2, Lval_13);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Lvals_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_comment_chars_5_p_0(
  MR_Word Stream_1,
  MR_Char HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Char Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__3_3, 0)));
      MR_Word Chars_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Char next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      succeeded = (HeadVar__2_2 == (MR_Char) 47);
      if (succeeded)
        succeeded = (Char_13 == (MR_Char) 42);
      if (succeeded)
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) " *");
      else
      {
        succeeded = (HeadVar__2_2 == (MR_Char) 42);
        if (succeeded)
          succeeded = (Char_13 == (MR_Char) 47);
        if (succeeded)
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) " /");
        else
          mercury__io__write_char_4_p_0(Stream_1, Char_13);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Char_13;
      next_value_of_HeadVar__3_3 = Chars_14;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instruction_decls_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Instr_10,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16)
{
  MR_Word Uinstr_13 = ((MR_Word) ((MR_hl_field(0, Instr_10, 0))));

  ll_backend__llds_out__llds_out_instr__output_record_instr_decls_7_p_0(Info_8, Stream_9, Uinstr_13, STATE_VARIABLE_DeclSet_0_15, STATE_VARIABLE_DeclSet_16);
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_DeclSet_25;

  ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_DeclSet_25);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_DeclSet_25));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_DeclSet_16;

  ll_backend__llds_out__llds_out_instr__output_record_instruction_decls_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeclSet_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_16));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Instr_10,
  MR_Word STATE_VARIABLE_DeclSet_0_84,
  MR_Word * STATE_VARIABLE_DeclSet_85)
{
  switch (MR_tag((MR_Word) Instr_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Instr_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_DeclSet_85 = STATE_VARIABLE_DeclSet_0_84;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_DeclSet_85 = STATE_VARIABLE_DeclSet_0_84;
          break;
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_DeclSet_85 = STATE_VARIABLE_DeclSet_0_84;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_DeclSet_85 = STATE_VARIABLE_DeclSet_0_84;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Instr_10, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Instrs_30 = ((MR_Word) ((MR_hl_field(3, Instr_10, 3))));
            MR_Word Var_88;
            MR_Box conv2_STATE_VARIABLE_DeclSet_85;
            MR_Box conv1_STATE_VARIABLE_IO_87;

            {
              Var_88 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_88, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_3[0]));
              MR_hl_field(0, Var_88, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_record_instr_decls_7_p_0_1));
              MR_hl_field(0, Var_88, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_88, 3) = ((MR_Box) (Info_8));
              MR_hl_field(0, Var_88, 4) = ((MR_Box) (Stream_9));
            }
            mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_88, Instrs_30, ((MR_Box) (STATE_VARIABLE_DeclSet_0_84)), &conv2_STATE_VARIABLE_DeclSet_85, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_87);
            *STATE_VARIABLE_DeclSet_85 = ((MR_Word) (conv2_STATE_VARIABLE_DeclSet_85));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_31 = ((MR_Word) ((MR_hl_field(3, Instr_10, 1))));
            MR_Word Rval_32 = ((MR_Word) ((MR_hl_field(3, Instr_10, 2))));
            MR_Word STATE_VARIABLE_DeclSet_2_91;

            ll_backend__llds_out__llds_out_data__output_record_lval_decls_7_p_0(Info_8, Stream_9, Lval_31, STATE_VARIABLE_DeclSet_0_84, &STATE_VARIABLE_DeclSet_2_91);
            ll_backend__llds_out__llds_out_data__output_record_rval_decls_7_p_0(Info_8, Stream_9, Rval_32, STATE_VARIABLE_DeclSet_2_91, STATE_VARIABLE_DeclSet_85);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word STATE_VARIABLE_DeclSet_4_95;
            MR_Word Lval_172 = ((MR_Word) ((MR_hl_field(3, Instr_10, 1))));
            MR_Word Rval_173 = ((MR_Word) ((MR_hl_field(3, Instr_10, 2))));

            ll_backend__llds_out__llds_out_data__output_record_lval_decls_7_p_0(Info_8, Stream_9, Lval_172, STATE_VARIABLE_DeclSet_0_84, &STATE_VARIABLE_DeclSet_4_95);
            ll_backend__llds_out__llds_out_data__output_record_rval_decls_7_p_0(Info_8, Stream_9, Rval_173, STATE_VARIABLE_DeclSet_4_95, STATE_VARIABLE_DeclSet_85);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Target_33 = ((MR_Word) ((MR_hl_field(3, Instr_10, 1))));
            MR_Word ContLabel_34 = ((MR_Word) ((MR_hl_field(3, Instr_10, 2))));
            MR_Word STATE_VARIABLE_DeclSet_6_99;

            ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_7_p_0(Info_8, Stream_9, Target_33, STATE_VARIABLE_DeclSet_0_84, &STATE_VARIABLE_DeclSet_6_99);
            ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_7_p_0(Info_8, Stream_9, ContLabel_34, STATE_VARIABLE_DeclSet_6_99, STATE_VARIABLE_DeclSet_85);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word MaybeFailureContinuation_40 = ((MR_Word) ((MR_hl_field(3, Instr_10, 2))));

            if ((MaybeFailureContinuation_40 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_DeclSet_85 = STATE_VARIABLE_DeclSet_0_84;
            else
            {
              MR_Word FailureContinuation_41 = ((MR_Word) ((MR_hl_field(1, MaybeFailureContinuation_40, 0))));

              ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_7_p_0(Info_8, Stream_9, FailureContinuation_41, STATE_VARIABLE_DeclSet_0_84, STATE_VARIABLE_DeclSet_85);
            }
          }
          break;
        case (MR_Integer) 5:
          *STATE_VARIABLE_DeclSet_85 = STATE_VARIABLE_DeclSet_0_84;
          break;
        case (MR_Integer) 6:
          {
            MR_Word CodeAddr_42 = ((MR_Word) ((MR_hl_field(3, Instr_10, 1))));

            ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_7_p_0(Info_8, Stream_9, CodeAddr_42, STATE_VARIABLE_DeclSet_0_84, STATE_VARIABLE_DeclSet_85);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Rval_174 = ((MR_Word) ((MR_hl_field(3, Instr_10, 1))));

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_7_p_0(Info_8, Stream_9, Rval_174, STATE_VARIABLE_DeclSet_0_84, STATE_VARIABLE_DeclSet_85);
          }
          break;
        case (MR_Integer) 8:
          *STATE_VARIABLE_DeclSet_85 = STATE_VARIABLE_DeclSet_0_84;
          break;
        case (MR_Integer) 9:
          {
            MR_Word STATE_VARIABLE_DeclSet_11_109;
            MR_Word Rval_175 = ((MR_Word) ((MR_hl_field(3, Instr_10, 1))));
            MR_Word Target_176 = ((MR_Word) ((MR_hl_field(3, Instr_10, 2))));

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_7_p_0(Info_8, Stream_9, Rval_175, STATE_VARIABLE_DeclSet_0_84, &STATE_VARIABLE_DeclSet_11_109);
            ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_7_p_0(Info_8, Stream_9, Target_176, STATE_VARIABLE_DeclSet_11_109, STATE_VARIABLE_DeclSet_85);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Lval_177 = ((MR_Word) ((MR_hl_field(3, Instr_10, 1))));

            ll_backend__llds_out__llds_out_data__output_record_lval_decls_7_p_0(Info_8, Stream_9, Lval_177, STATE_VARIABLE_DeclSet_0_84, STATE_VARIABLE_DeclSet_85);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word Lval_178 = ((MR_Word) ((MR_hl_field(3, Instr_10, 1))));

            ll_backend__llds_out__llds_out_data__output_record_lval_decls_7_p_0(Info_8, Stream_9, Lval_178, STATE_VARIABLE_DeclSet_0_84, STATE_VARIABLE_DeclSet_85);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word MaybeRegionRval_49 = ((MR_Word) ((MR_hl_field(3, Instr_10, 7))));
            MR_Word MaybeReuse_50 = ((MR_Word) ((MR_hl_field(3, Instr_10, 8))));
            MR_Word STATE_VARIABLE_DeclSet_15_117;
            MR_Word STATE_VARIABLE_DeclSet_16_119;
            MR_Word STATE_VARIABLE_DeclSet_17_121;
            MR_Word Lval_179 = ((MR_Word) ((MR_hl_field(3, Instr_10, 1))));
            MR_Word Rval_180 = ((MR_Word) ((MR_hl_field(3, Instr_10, 4))));

            ll_backend__llds_out__llds_out_data__output_record_lval_decls_7_p_0(Info_8, Stream_9, Lval_179, STATE_VARIABLE_DeclSet_0_84, &STATE_VARIABLE_DeclSet_15_117);
            ll_backend__llds_out__llds_out_data__output_record_rval_decls_7_p_0(Info_8, Stream_9, Rval_180, STATE_VARIABLE_DeclSet_15_117, &STATE_VARIABLE_DeclSet_16_119);
            if ((MaybeRegionRval_49 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_DeclSet_17_121 = STATE_VARIABLE_DeclSet_16_119;
            else
            {
              MR_Word RegionRval_51 = ((MR_Word) ((MR_hl_field(1, MaybeRegionRval_49, 0))));

              ll_backend__llds_out__llds_out_data__output_record_rval_decls_7_p_0(Info_8, Stream_9, RegionRval_51, STATE_VARIABLE_DeclSet_16_119, &STATE_VARIABLE_DeclSet_17_121);
            }
            if ((MaybeReuse_50 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_DeclSet_85 = STATE_VARIABLE_DeclSet_17_121;
            else
            {
              MR_Word ReuseRval_52 = ((MR_Word) ((MR_hl_field(1, MaybeReuse_50, 0))));
              MR_Word MaybeFlagLval_53 = ((MR_Word) ((MR_hl_field(1, MaybeReuse_50, 1))));
              MR_Word STATE_VARIABLE_DeclSet_18_123;

              ll_backend__llds_out__llds_out_data__output_record_rval_decls_7_p_0(Info_8, Stream_9, ReuseRval_52, STATE_VARIABLE_DeclSet_17_121, &STATE_VARIABLE_DeclSet_18_123);
              if ((MaybeFlagLval_53 == (MR_Word) ((MR_Unsigned) 0U)))
                *STATE_VARIABLE_DeclSet_85 = STATE_VARIABLE_DeclSet_18_123;
              else
              {
                MR_Word FlagLval_54 = ((MR_Word) ((MR_hl_field(1, MaybeFlagLval_53, 0))));

                ll_backend__llds_out__llds_out_data__output_record_lval_decls_7_p_0(Info_8, Stream_9, FlagLval_54, STATE_VARIABLE_DeclSet_18_123, STATE_VARIABLE_DeclSet_85);
              }
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Lval_209 = ((MR_Word) ((MR_hl_field(3, Instr_10, 1))));

            ll_backend__llds_out__llds_out_data__output_record_lval_decls_7_p_0(Info_8, Stream_9, Lval_209, STATE_VARIABLE_DeclSet_0_84, STATE_VARIABLE_DeclSet_85);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Rval_208 = ((MR_Word) ((MR_hl_field(3, Instr_10, 1))));

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_7_p_0(Info_8, Stream_9, Rval_208, STATE_VARIABLE_DeclSet_0_84, STATE_VARIABLE_DeclSet_85);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Rval_182 = ((MR_Word) ((MR_hl_field(3, Instr_10, 1))));

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_7_p_0(Info_8, Stream_9, Rval_182, STATE_VARIABLE_DeclSet_0_84, STATE_VARIABLE_DeclSet_85);
          }
          break;
        case (MR_Integer) 16:
          *STATE_VARIABLE_DeclSet_85 = STATE_VARIABLE_DeclSet_0_84;
          break;
        case (MR_Integer) 17:
          {
            MR_Word IdRval_60 = ((MR_Word) ((MR_hl_field(3, Instr_10, 3))));
            MR_Word NumLval_61 = ((MR_Word) ((MR_hl_field(3, Instr_10, 4))));
            MR_Word AddrLval_62 = ((MR_Word) ((MR_hl_field(3, Instr_10, 5))));
            MR_Word STATE_VARIABLE_DeclSet_22_131;
            MR_Word STATE_VARIABLE_DeclSet_23_133;

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_7_p_0(Info_8, Stream_9, IdRval_60, STATE_VARIABLE_DeclSet_0_84, &STATE_VARIABLE_DeclSet_22_131);
            ll_backend__llds_out__llds_out_data__output_record_lval_decls_7_p_0(Info_8, Stream_9, NumLval_61, STATE_VARIABLE_DeclSet_22_131, &STATE_VARIABLE_DeclSet_23_133);
            ll_backend__llds_out__llds_out_data__output_record_lval_decls_7_p_0(Info_8, Stream_9, AddrLval_62, STATE_VARIABLE_DeclSet_23_133, STATE_VARIABLE_DeclSet_85);
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word ValueRval_64 = ((MR_Word) ((MR_hl_field(3, Instr_10, 3))));

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_7_p_0(Info_8, Stream_9, ValueRval_64, STATE_VARIABLE_DeclSet_0_84, STATE_VARIABLE_DeclSet_85);
          }
          break;
        case (MR_Integer) 19:
          *STATE_VARIABLE_DeclSet_85 = STATE_VARIABLE_DeclSet_0_84;
          break;
        case (MR_Integer) 20:
          {
            MR_Word Lval_211 = ((MR_Word) ((MR_hl_field(3, Instr_10, 1))));

            ll_backend__llds_out__llds_out_data__output_record_lval_decls_7_p_0(Info_8, Stream_9, Lval_211, STATE_VARIABLE_DeclSet_0_84, STATE_VARIABLE_DeclSet_85);
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word Rval_207 = ((MR_Word) ((MR_hl_field(3, Instr_10, 1))));

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_7_p_0(Info_8, Stream_9, Rval_207, STATE_VARIABLE_DeclSet_0_84, STATE_VARIABLE_DeclSet_85);
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word Lval_210 = ((MR_Word) ((MR_hl_field(3, Instr_10, 1))));

            ll_backend__llds_out__llds_out_data__output_record_lval_decls_7_p_0(Info_8, Stream_9, Lval_210, STATE_VARIABLE_DeclSet_0_84, STATE_VARIABLE_DeclSet_85);
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word Rval_206 = ((MR_Word) ((MR_hl_field(3, Instr_10, 1))));

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_7_p_0(Info_8, Stream_9, Rval_206, STATE_VARIABLE_DeclSet_0_84, STATE_VARIABLE_DeclSet_85);
          }
          break;
        case (MR_Integer) 24:
          *STATE_VARIABLE_DeclSet_85 = STATE_VARIABLE_DeclSet_0_84;
          break;
        case (MR_Integer) 25:
          *STATE_VARIABLE_DeclSet_85 = STATE_VARIABLE_DeclSet_0_84;
          break;
        case (MR_Integer) 26:
          *STATE_VARIABLE_DeclSet_85 = STATE_VARIABLE_DeclSet_0_84;
          break;
        case (MR_Integer) 27:
          {
            MR_Word Comps_66 = ((MR_Word) ((MR_hl_field(3, Instr_10, 2))));
            MR_Word Var_139;
            MR_Box conv5_STATE_VARIABLE_DeclSet_85;
            MR_Box conv4_STATE_VARIABLE_IO_87;

            {
              Var_139 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_139, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_3[1]));
              MR_hl_field(0, Var_139, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_record_instr_decls_7_p_0_2));
              MR_hl_field(0, Var_139, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_139, 3) = ((MR_Box) (Info_8));
              MR_hl_field(0, Var_139, 4) = ((MR_Box) (Stream_9));
            }
            mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_139, Comps_66, ((MR_Box) (STATE_VARIABLE_DeclSet_0_84)), &conv5_STATE_VARIABLE_DeclSet_85, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_87);
            *STATE_VARIABLE_DeclSet_85 = ((MR_Word) (conv5_STATE_VARIABLE_DeclSet_85));
          }
          break;
        case (MR_Integer) 28:
          {
            MR_Word Lval_181 = ((MR_Word) ((MR_hl_field(3, Instr_10, 1))));

            ll_backend__llds_out__llds_out_data__output_record_lval_decls_7_p_0(Info_8, Stream_9, Lval_181, STATE_VARIABLE_DeclSet_0_84, STATE_VARIABLE_DeclSet_85);
          }
          break;
        case (MR_Integer) 29:
          {
            MR_Word Child_75 = ((MR_Word) ((MR_hl_field(3, Instr_10, 2))));
            MR_Word STATE_VARIABLE_DeclSet_27_142;
            MR_Word Var_144;
            MR_Word Lval_185 = ((MR_Word) ((MR_hl_field(3, Instr_10, 1))));

            ll_backend__llds_out__llds_out_data__output_record_lval_decls_7_p_0(Info_8, Stream_9, Lval_185, STATE_VARIABLE_DeclSet_0_84, &STATE_VARIABLE_DeclSet_27_142);
            {
              Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_144, 0) = ((MR_Box) (Child_75));
            }
            ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_7_p_0(Info_8, Stream_9, Var_144, STATE_VARIABLE_DeclSet_27_142, STATE_VARIABLE_DeclSet_85);
          }
          break;
        case (MR_Integer) 30:
          {
            MR_Word Label_76 = ((MR_Word) ((MR_hl_field(3, Instr_10, 2))));
            MR_Word STATE_VARIABLE_DeclSet_29_147;
            MR_Word Var_149;
            MR_Word Lval_186 = ((MR_Word) ((MR_hl_field(3, Instr_10, 1))));

            ll_backend__llds_out__llds_out_data__output_record_lval_decls_7_p_0(Info_8, Stream_9, Lval_186, STATE_VARIABLE_DeclSet_0_84, &STATE_VARIABLE_DeclSet_29_147);
            {
              Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_149, 0) = ((MR_Box) (Label_76));
            }
            ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_7_p_0(Info_8, Stream_9, Var_149, STATE_VARIABLE_DeclSet_29_147, STATE_VARIABLE_DeclSet_85);
          }
          break;
        case (MR_Integer) 31:
          {
            MR_Word LCLval_78 = ((MR_Word) ((MR_hl_field(3, Instr_10, 2))));

            ll_backend__llds_out__llds_out_data__output_record_lval_decls_7_p_0(Info_8, Stream_9, LCLval_78, STATE_VARIABLE_DeclSet_0_84, STATE_VARIABLE_DeclSet_85);
          }
          break;
        case (MR_Integer) 32:
          {
            MR_Word LCRval_79 = ((MR_Word) ((MR_hl_field(3, Instr_10, 1))));
            MR_Word LCSLval_80 = ((MR_Word) ((MR_hl_field(3, Instr_10, 2))));
            MR_Word InternalLabel_81 = ((MR_Word) ((MR_hl_field(3, Instr_10, 3))));
            MR_Word STATE_VARIABLE_DeclSet_32_154;
            MR_Word STATE_VARIABLE_DeclSet_33_156;
            MR_Word Var_158;

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_7_p_0(Info_8, Stream_9, LCRval_79, STATE_VARIABLE_DeclSet_0_84, &STATE_VARIABLE_DeclSet_32_154);
            ll_backend__llds_out__llds_out_data__output_record_lval_decls_7_p_0(Info_8, Stream_9, LCSLval_80, STATE_VARIABLE_DeclSet_32_154, &STATE_VARIABLE_DeclSet_33_156);
            {
              Var_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_158, 0) = ((MR_Box) (InternalLabel_81));
            }
            ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_7_p_0(Info_8, Stream_9, Var_158, STATE_VARIABLE_DeclSet_33_156, STATE_VARIABLE_DeclSet_85);
          }
          break;
        case (MR_Integer) 33:
          {
            MR_Word LCSRval_82 = ((MR_Word) ((MR_hl_field(3, Instr_10, 2))));
            MR_Word ChildLabel_83 = ((MR_Word) ((MR_hl_field(3, Instr_10, 3))));
            MR_Word STATE_VARIABLE_DeclSet_35_161;
            MR_Word STATE_VARIABLE_DeclSet_36_163;
            MR_Word Var_165;
            MR_Word LCRval_187 = ((MR_Word) ((MR_hl_field(3, Instr_10, 1))));

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_7_p_0(Info_8, Stream_9, LCRval_187, STATE_VARIABLE_DeclSet_0_84, &STATE_VARIABLE_DeclSet_35_161);
            ll_backend__llds_out__llds_out_data__output_record_rval_decls_7_p_0(Info_8, Stream_9, LCSRval_82, STATE_VARIABLE_DeclSet_35_161, &STATE_VARIABLE_DeclSet_36_163);
            {
              Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_165, 0) = ((MR_Box) (ChildLabel_83));
            }
            ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_7_p_0(Info_8, Stream_9, Var_165, STATE_VARIABLE_DeclSet_36_163, STATE_VARIABLE_DeclSet_85);
          }
          break;
        case (MR_Integer) 34:
          {
            MR_Word STATE_VARIABLE_DeclSet_38_168;
            MR_Word LCRval_188 = ((MR_Word) ((MR_hl_field(3, Instr_10, 1))));
            MR_Word LCSRval_189 = ((MR_Word) ((MR_hl_field(3, Instr_10, 2))));

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_7_p_0(Info_8, Stream_9, LCRval_188, STATE_VARIABLE_DeclSet_0_84, &STATE_VARIABLE_DeclSet_38_168);
            ll_backend__llds_out__llds_out_data__output_record_rval_decls_7_p_0(Info_8, Stream_9, LCSRval_189, STATE_VARIABLE_DeclSet_38_168, STATE_VARIABLE_DeclSet_85);
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr____Unify____after_layout_label_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__llds_out__llds_out_instr____Unify____after_layout_label_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr____Compare____after_layout_label_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__llds_out__llds_out_instr____Compare____after_layout_label_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr____Unify____label_output_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__llds_out__llds_out_instr____Unify____label_output_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr____Compare____label_output_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__llds_out__llds_out_instr____Compare____label_output_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__llds_out__llds_out_instr__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module ll_backend.llds_out.llds_out_instr.
