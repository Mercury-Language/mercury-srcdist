/*
** Automatically generated from `llds_out_instr.m'
** by the Mercury compiler,
** version rotd-2019-07-09
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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
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
ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_float_dword_assignment__457__1_2_p_0(
  MR_Word Type_10,
  MR_Word HeadVar__2_20);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_instruction_list_while_block__407__1_2_p_0(
  MR_Word Instrs_15,
  MR_Word HeadVar__2_37);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_p_0(
  MR_Word Info_5,
  MR_Word Component_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_output_4_p_0(
  MR_Word Info_5,
  MR_Word Output_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_p_0(
  MR_Word Info_5,
  MR_Word Input_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_alloc_site_id_4_p_0(
  MR_Word Info_5,
  MR_Word AllocId_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_p_0(
  MR_Word Info_7,
  MR_Word Component_8,
  MR_Word STATE_VARIABLE_DeclSet_0_22,
  MR_Word * STATE_VARIABLE_DeclSet_23);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_6_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_DeclSet_0_3,
  MR_Word * STATE_VARIABLE_DeclSet_4);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_6_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_DeclSet_0_3,
  MR_Word * STATE_VARIABLE_DeclSet_4);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(
  MR_Word Info_7,
  MR_Word Instr_8,
  MR_String Comment_9,
  MR_Word LabelOutputInfo_10);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word Label_3,
  MR_Word LabelOutputInfo_4);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_p_0(
  MR_Word Info_1,
  MR_Word Label_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word LabelOutputInfo_5);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_3(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(
  MR_Word Info_6,
  MR_Word Instr_7,
  MR_Word LabelOutputInfo_8);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_5_p_0(
  MR_Word Info_6,
  MR_Word Lval_7,
  MR_Word Rval_8);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__is_aligned_float_dword_assignment_4_p_0(
  MR_Word InstrA_5,
  MR_Word InstrB_6,
  MR_Word * LvalA_7,
  MR_Word * Rval_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_99_114_95_104_112_95_110_111_95_114_101_117_115_101_95_95_91_57_93_95_48_11_p_0(
  MR_Word Info_12,
  MR_Word Lval_13,
  MR_Word MaybePtag_14,
  MR_Word MaybeOffset_15,
  MR_Word Rval_16,
  MR_Word MaybeAllocId_17,
  MR_Word MayUseAtomicAlloc_18,
  MR_Word MaybeRegionRval_19);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_maybe_alloc_site_id_4_p_0(
  MR_Word Info_5,
  MR_Word MaybeAllocId_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_p_0(
  MR_Word HeadVar__1_1);

static MR_Integer MR_CALL 
ll_backend__llds_out__llds_out_instr__max_leaf_stack_frame_size_0_f_0(void);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_p_0(
  MR_Word Info_5,
  MR_Word EmbeddedFrame_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_goto_5_p_0(
  MR_Word Info_6,
  MR_Word Target_7,
  MR_Word CallerLabel_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_p_0(
  MR_Word Info_6,
  MR_Word Label_7,
  MR_Word LabelOutputInfo_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_defn_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_p_0(
  MR_Word Info_5,
  MR_Word LiveVals_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_live_value_type_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_layout_locns_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_call_6_p_0(
  MR_Word Info_7,
  MR_Word Target_8,
  MR_Word Continuation_9,
  MR_Word CallerLabel_10);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_block_end_2_p_0(void);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_block_start_4_p_0(
  MR_Integer TempR_5,
  MR_Integer TempF_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_p_0(
  MR_Integer Next_6,
  MR_Integer Max_7,
  MR_String Type_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_livevals_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_comment_chars_4_p_0(
  MR_Char HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0(
  MR_Word Info_7,
  MR_Word Instr_8,
  MR_Word STATE_VARIABLE_DeclSet_0_81,
  MR_Word * STATE_VARIABLE_DeclSet_82);

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

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_2[2][9];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_3[2][5];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_4[4][1];

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
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_2[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
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
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_instr__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_instr__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_instr__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_instr__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_4[4][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "DEBUG"))
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 8U)
  },
  /* row 3 */
  {
    (MR_Box) ((MR_Unsigned) 9U)
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_instr_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
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
    ((MR_Box) ((MR_Integer) 1)),
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
    (MR_PseudoTypeInfo) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_instr__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)
  }
};

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_0 = {
  (MR_String) "not_after_layout_label",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_functor_desc_after_layout_label_0_1 = {
  (MR_String) "after_layout_label",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__llds_out__llds_out_instr____Unify____after_layout_label_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_instr____Compare____after_layout_label_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_instr",
  (MR_String) "after_layout_label",
  {     ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_name_ordered_after_layout_label_0 },
  {     ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__enum_value_ordered_after_layout_label_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__functor_number_map_after_layout_label_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_instr__set_tree234__ti_set_tree234_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
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

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_stag_ordered_label_output_info_0_0[1] = {
  &ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_functor_desc_label_output_info_0_0
};

static const MR_DuPtagLayout ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_ptag_ordered_label_output_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_stag_ordered_label_output_info_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__llds_out__llds_out_instr____Unify____label_output_info_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_instr____Compare____label_output_info_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_instr",
  (MR_String) "label_output_info",
  {     ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_name_ordered_label_output_info_0 },
  {     ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__du_ptag_ordered_label_output_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__functor_number_map_label_output_info_0
};

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_float_dword_assignment__457__1_2_p_0(
  MR_Word Type_10,
  MR_Word HeadVar__2_20)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__llds____Unify____llds_type_0_0(Type_10, HeadVar__2_20);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_instruction_list_while_block__407__1_2_p_0(
  MR_Word Instrs_15,
  MR_Word HeadVar__2_37)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__llds_out__llds_out_instr_scalar_common_1[0]), ((MR_Box) (Instrs_15)), ((MR_Box) (HeadVar__2_37)));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_instr____Compare____label_output_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
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
          {
            mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_instr_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr____Unify____label_output_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

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
}

void MR_CALL 
ll_backend__llds_out__llds_out_instr____Compare____after_layout_label_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr____Unify____after_layout_label_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_p_0(
  MR_Word Info_5,
  MR_Word Component_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Component_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Inputs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Component_6, (MR_Integer) 0))));

          ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_p_0(Info_5, Inputs_8);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Outputs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Component_6, (MR_Integer) 0))));

          ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_p_0(Info_5, Outputs_9);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Component_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word MaybeContext_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Component_6, (MR_Integer) 1))));
              MR_String C_Code_12 = ((MR_String) ((MR_hl_field(MR_mktag(3), Component_6, (MR_Integer) 3))));

              succeeded = (strcmp(C_Code_12, (MR_String) "") == 0);
              if (!(succeeded))
              {
                if ((MaybeContext_10 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__io__write_string_3_p_0((MR_String) "{\n");
                  mercury__io__write_string_3_p_0(C_Code_12);
                  mercury__io__write_string_3_p_0((MR_String) ";}\n");
                }
                else
                {
                  MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeContext_10, (MR_Integer) 0))));
                  MR_Word Var_39;
                  MR_Word Var_44;

                  mercury__io__write_string_3_p_0((MR_String) "{\n");
                  Var_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) >> 16)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_util__output_set_line_num_4_p_0(Var_39, Context_13);
                  mercury__io__write_string_3_p_0(C_Code_12);
                  mercury__io__write_string_3_p_0((MR_String) ";}\n");
                  Var_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) >> 16)) & (MR_Integer) 1);
                  ll_backend__llds_out__llds_out_util__output_reset_line_num_3_p_0(Var_44);
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String C_Code_48 = ((MR_String) ((MR_hl_field(MR_mktag(3), Component_6, (MR_Integer) 3))));

              mercury__io__write_string_3_p_0(C_Code_48);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Label_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Component_6, (MR_Integer) 1))));
              MR_String Var_22;
              MR_String Var_25;
              MR_String Var_26;

              Var_26 = ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_f_0();
              Var_25 = mercury__string__f_43_43_2_f_0(Var_26, (MR_String) ") MR_GOTO_LAB(");
              Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "if (!", Var_25);
              mercury__io__write_string_3_p_0(Var_22);
              ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(Label_17);
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word AllocId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Component_6, (MR_Integer) 1))));

              ll_backend__llds_out__llds_out_instr__output_alloc_site_id_4_p_0(Info_5, AllocId_18);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_outputs_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Output_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Outputs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word IsDummy_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Output_10, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word next_value_of_HeadVar__2_2;

      switch (IsDummy_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          ll_backend__llds_out__llds_out_instr__output_foreign_proc_output_4_p_0(Info_1, Output_10);
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Outputs_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_output_4_p_0(
  MR_Word Info_5,
  MR_Word Output_6)
{
  {
    MR_bool succeeded;
    MR_Word Lval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Output_6, (MR_Integer) 0))));
    MR_Word OrigType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Output_6, (MR_Integer) 3))));
    MR_String VarName_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), Output_6, (MR_Integer) 4))));
    MR_Word MaybeForeignType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Output_6, (MR_Integer) 5))));
    MR_Word BoxPolicy_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Output_6, (MR_Integer) 6))) & (MR_Integer) 1);

    mercury__io__write_string_3_p_0((MR_String) "\t");
    switch (BoxPolicy_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_5, Lval_8);
          mercury__io__write_string_3_p_0((MR_String) " = ");
          mercury__io__write_string_3_p_0(VarName_12);
        }
        break;
      case (MR_Integer) 0:
        if ((MaybeForeignType_13 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word BuiltinType_18;

          succeeded = ((MR_tag((MR_Word) OrigType_11)) == (MR_Integer) 2);
          if (succeeded)
          {
            BuiltinType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OrigType_11, (MR_Integer) 0))));
            switch (MR_tag((MR_Word) BuiltinType_18)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(BuiltinType_18)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ActualType_19;

                      ll_backend__llds__lval_type_2_p_0(Lval_8, &ActualType_19);
                      succeeded = (ActualType_19 == (MR_Word) ((MR_Unsigned) 4U));
                      if (succeeded)
                      {
                        ll_backend__llds_out__llds_out_data__output_lval_4_p_0(Info_5, Lval_8);
                        mercury__io__write_string_3_p_0((MR_String) " = ");
                        mercury__io__write_string_3_p_0(VarName_12);
                      }
                      else
                      {
                        ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_5, Lval_8);
                        mercury__io__write_string_3_p_0((MR_String) " = ");
                        mercury__io__write_string_3_p_0((MR_String) "MR_float_to_word(");
                        mercury__io__write_string_3_p_0(VarName_12);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_5, Lval_8);
                      mercury__io__write_string_3_p_0((MR_String) " = ");
                      ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Word) ((MR_Unsigned) 20U));
                      mercury__io__write_string_3_p_0(VarName_12);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_5, Lval_8);
                      mercury__io__write_string_3_p_0((MR_String) " = ");
                      mercury__io__write_string_3_p_0((MR_String) "(MR_UnsignedChar) ");
                      mercury__io__write_string_3_p_0(VarName_12);
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word IntType_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), BuiltinType_18, (MR_Integer) 0))) & (MR_Integer) 15);

                  switch (IntType_20) {
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
                        ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_5, Lval_8);
                        mercury__io__write_string_3_p_0((MR_String) " = ");
                        mercury__io__write_string_3_p_0(VarName_12);
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word ActualType_106;
                        MR_Word Var_38;

                        ll_backend__llds__lval_type_2_p_0(Lval_8, &ActualType_106);
                        succeeded = ((MR_tag((MR_Word) ActualType_106)) == (MR_Integer) 2);
                        if (succeeded)
                        {
                          Var_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), ActualType_106, (MR_Integer) 0))) & (MR_Integer) 15);
                          succeeded = (Var_38 == (MR_Integer) 8);
                        }
                        if (succeeded)
                        {
                          ll_backend__llds_out__llds_out_data__output_lval_4_p_0(Info_5, Lval_8);
                          mercury__io__write_string_3_p_0((MR_String) " = ");
                          mercury__io__write_string_3_p_0(VarName_12);
                        }
                        else
                        {
                          ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_5, Lval_8);
                          mercury__io__write_string_3_p_0((MR_String) " = ");
                          mercury__io__write_string_3_p_0((MR_String) "MR_int64_to_word(");
                          mercury__io__write_string_3_p_0(VarName_12);
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Word ActualType_107;
                        MR_Word Var_25;

                        ll_backend__llds__lval_type_2_p_0(Lval_8, &ActualType_107);
                        succeeded = ((MR_tag((MR_Word) ActualType_107)) == (MR_Integer) 2);
                        if (succeeded)
                        {
                          Var_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), ActualType_107, (MR_Integer) 0))) & (MR_Integer) 15);
                          succeeded = (Var_25 == (MR_Integer) 9);
                        }
                        if (succeeded)
                        {
                          ll_backend__llds_out__llds_out_data__output_lval_4_p_0(Info_5, Lval_8);
                          mercury__io__write_string_3_p_0((MR_String) " = ");
                          mercury__io__write_string_3_p_0(VarName_12);
                        }
                        else
                        {
                          ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_5, Lval_8);
                          mercury__io__write_string_3_p_0((MR_String) " = ");
                          mercury__io__write_string_3_p_0((MR_String) "MR_uint64_to_word(");
                          mercury__io__write_string_3_p_0(VarName_12);
                          mercury__io__write_string_3_p_0((MR_String) ")");
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
            ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_5, Lval_8);
            mercury__io__write_string_3_p_0((MR_String) " = ");
            mercury__io__write_string_3_p_0(VarName_12);
          }
        }
        else
        {
          MR_Word ForeignTypeInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignType_13, (MR_Integer) 0))));
          MR_String ForeignType_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), ForeignTypeInfo_15, (MR_Integer) 0))));
          MR_Word Assertions_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeInfo_15, (MR_Integer) 1))));

          succeeded = hlds__hlds_data__asserted_can_pass_as_mercury_type_1_p_0(Assertions_17);
          if (succeeded)
          {
            ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_5, Lval_8);
            mercury__io__write_string_3_p_0((MR_String) " = ");
            ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Word) ((MR_Unsigned) 20U));
            mercury__io__write_string_3_p_0(VarName_12);
          }
          else
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_MAYBE_BOX_FOREIGN_TYPE(");
            mercury__io__write_string_3_p_0(ForeignType_16);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            mercury__io__write_string_3_p_0(VarName_12);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_5, Lval_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_inputs_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Input_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Inputs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String VarName_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), Input_10, (MR_Integer) 0))));
      MR_Word VarType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Input_10, (MR_Integer) 1))));
      MR_Word IsDummy_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Input_10, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word next_value_of_HeadVar__2_2;

      switch (IsDummy_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeInfo_33_33;
            MR_Word VarTypeCtor_20;
            MR_Word Var_25;
            MR_Word Var_32;

            succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(VarType_14, &VarTypeCtor_20, &Var_32);
            if (succeeded)
            {
              TypeInfo_33_33 = (MR_Word) (&ll_backend__llds_out__llds_out_instr_scalar_common_1[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_32)));
              if (succeeded)
              {
                Var_25 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0(VarTypeCtor_20);
                succeeded = (Var_25 == (MR_Integer) 0);
              }
            }
            if (!(succeeded))
            {
              MR_String Var_26;
              MR_String Var_29;

              Var_29 = mercury__string__f_43_43_2_f_0(VarName_13, (MR_String) " = 0;\n");
              Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_29);
              mercury__io__write_string_3_p_0(Var_26);
            }
          }
          break;
        case (MR_Integer) 1:
          ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_p_0(Info_1, Input_10);
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Inputs_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_input_4_p_0(
  MR_Word Info_5,
  MR_Word Input_6)
{
  {
    MR_bool succeeded;
    MR_String VarName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Input_6, (MR_Integer) 0))));
    MR_Word OrigType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Input_6, (MR_Integer) 3))));
    MR_Word Rval_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Input_6, (MR_Integer) 4))));
    MR_Word MaybeForeignTypeInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Input_6, (MR_Integer) 5))));
    MR_Word BoxPolicy_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Input_6, (MR_Integer) 6))) & (MR_Integer) 1);

    mercury__io__write_string_3_p_0((MR_String) "\t");
    switch (BoxPolicy_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0(VarName_8);
          mercury__io__write_string_3_p_0((MR_String) " = ");
          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, Rval_12, (MR_Word) ((MR_Unsigned) 20U));
        }
        break;
      case (MR_Integer) 0:
        if ((MaybeForeignTypeInfo_13 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word BuiltinType_18;

          mercury__io__write_string_3_p_0(VarName_8);
          mercury__io__write_string_3_p_0((MR_String) " = ");
          succeeded = ((MR_tag((MR_Word) OrigType_11)) == (MR_Integer) 2);
          if (succeeded)
          {
            BuiltinType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OrigType_11, (MR_Integer) 0))));
            switch (MR_tag((MR_Word) BuiltinType_18)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(BuiltinType_18)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, Rval_12, (MR_Word) ((MR_Unsigned) 4U));
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Word) ((MR_Unsigned) 8U));
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, Rval_12, (MR_Word) ((MR_Unsigned) 20U));
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, Rval_12, (MR_Word) ((MR_Unsigned) 20U));
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_90 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), BuiltinType_18, (MR_Integer) 0))) & (MR_Integer) 15);

                  switch (Var_90) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, Rval_12, (MR_Word) ((MR_Unsigned) 20U));
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, Rval_12, (MR_Word) ((MR_Unsigned) 20U));
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, Rval_12, (MR_Word) ((MR_Unsigned) 20U));
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, Rval_12, (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__llds_out__llds_out_instr_scalar_common_4[2])));
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, Rval_12, (MR_Word) ((MR_Unsigned) 20U));
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, Rval_12, (MR_Word) ((MR_Unsigned) 20U));
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, Rval_12, (MR_Word) ((MR_Unsigned) 20U));
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, Rval_12, (MR_Word) ((MR_Unsigned) 20U));
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, Rval_12, (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__llds_out__llds_out_instr_scalar_common_4[3])));
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, Rval_12, (MR_Word) ((MR_Unsigned) 20U));
                      }
                      break;
                  }
                }
                break;
            }
          }
          else
          {
            ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, Rval_12, (MR_Word) ((MR_Unsigned) 20U));
          }
        }
        else
        {
          MR_Word ForeignTypeInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignTypeInfo_13, (MR_Integer) 0))));
          MR_String ForeignType_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), ForeignTypeInfo_15, (MR_Integer) 0))));
          MR_Word Assertions_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeInfo_15, (MR_Integer) 1))));

          succeeded = backend_libs__export__c_type_is_word_sized_int_or_ptr_1_p_0(ForeignType_16);
          if (!(succeeded))
            succeeded = hlds__hlds_data__asserted_can_pass_as_mercury_type_1_p_0(Assertions_17);
          if (succeeded)
          {
            MR_String Var_55;
            MR_String Var_58;

            mercury__io__write_string_3_p_0(VarName_8);
            mercury__io__write_string_3_p_0((MR_String) " = ");
            Var_58 = mercury__string__f_43_43_2_f_0(ForeignType_16, (MR_String) ") ");
            Var_55 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_58);
            mercury__io__write_string_3_p_0(Var_55);
            ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, Rval_12, (MR_Word) ((MR_Unsigned) 20U));
          }
          else
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_MAYBE_UNBOX_FOREIGN_TYPE(");
            mercury__io__write_string_3_p_0(ForeignType_16);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, Rval_12, (MR_Word) ((MR_Unsigned) 20U));
            mercury__io__write_string_3_p_0((MR_String) ", ");
            mercury__io__write_string_3_p_0(VarName_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_alloc_site_id_4_p_0(
  MR_Word Info_5,
  MR_Word AllocId_6)
{
  {
    MR_String MangledModuleName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))));
    MR_Word AllocSiteMap_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 6))));
    MR_Word AllocSiteSlotName_10;
    MR_Box conv0_AllocSiteSlotName_10;

    mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0), (MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), AllocSiteMap_9, ((MR_Box) (AllocId_6)), &conv0_AllocSiteSlotName_10);
    AllocSiteSlotName_10 = ((MR_Word) (conv0_AllocSiteSlotName_10));
    ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, MangledModuleName_8, AllocSiteSlotName_10);
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_p_0(
  MR_Word Info_7,
  MR_Word Component_8,
  MR_Word STATE_VARIABLE_DeclSet_0_22,
  MR_Word * STATE_VARIABLE_DeclSet_23)
{
  switch (MR_tag((MR_Word) Component_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_DeclSet_23 = STATE_VARIABLE_DeclSet_0_22;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Inputs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Component_8, (MR_Integer) 0))));

        ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_6_p_0(Info_7, Inputs_11, STATE_VARIABLE_DeclSet_0_22, STATE_VARIABLE_DeclSet_23);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Outputs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Component_8, (MR_Integer) 0))));

        ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_6_p_0(Info_7, Outputs_12, STATE_VARIABLE_DeclSet_0_22, STATE_VARIABLE_DeclSet_23);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Component_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_DeclSet_23 = STATE_VARIABLE_DeclSet_0_22;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_DeclSet_23 = STATE_VARIABLE_DeclSet_0_22;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_DeclSet_23 = STATE_VARIABLE_DeclSet_0_22;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_DeclSet_23 = STATE_VARIABLE_DeclSet_0_22;
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_output_lval_decls_6_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_DeclSet_0_3,
  MR_Word * STATE_VARIABLE_DeclSet_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DeclSet_4 = STATE_VARIABLE_DeclSet_0_3;
    else
    {
      MR_Word Output_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Outputs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Lval_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Output_15, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_DeclSet_30_30;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_DeclSet_0_3;

      ll_backend__llds_out__llds_out_data__output_record_lval_decls_tab_6_p_0(Info_1, Lval_19, STATE_VARIABLE_DeclSet_0_3, &STATE_VARIABLE_DeclSet_30_30);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Outputs_16;
      next_value_of_STATE_VARIABLE_DeclSet_0_3 = STATE_VARIABLE_DeclSet_30_30;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_DeclSet_0_3 = next_value_of_STATE_VARIABLE_DeclSet_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_input_rval_decls_6_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_DeclSet_0_3,
  MR_Word * STATE_VARIABLE_DeclSet_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DeclSet_4 = STATE_VARIABLE_DeclSet_0_3;
    else
    {
      MR_Word Input_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Inputs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Rval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Input_15, (MR_Integer) 4))));
      MR_Word STATE_VARIABLE_DeclSet_30_30;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_DeclSet_0_3;

      ll_backend__llds_out__llds_out_data__output_record_rval_decls_tab_6_p_0(Info_1, Rval_23, STATE_VARIABLE_DeclSet_0_3, &STATE_VARIABLE_DeclSet_30_30);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Inputs_16;
      next_value_of_STATE_VARIABLE_DeclSet_0_3 = STATE_VARIABLE_DeclSet_30_30;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_DeclSet_0_3 = next_value_of_STATE_VARIABLE_DeclSet_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_debug_instruction_4_p_0(
  MR_Word Info_5,
  MR_Word Instr_6)
{
  {
    MR_Integer InitialProcIdInt_10;
    MR_Word ProcLabel_11;
    MR_Word CallerLabel_12;
    MR_Word ContLabels_13;
    MR_Word WhileLabels_14;
    MR_Word UndefWhileLabels_15;
    MR_Word LabelOutputInfo_16;
    MR_Integer Var_20;

    Var_20 = hlds__hlds_pred__initial_proc_id_0_f_0();
    hlds__hlds_pred__proc_id_to_int_2_p_0(Var_20, &InitialProcIdInt_10);
    {
      ProcLabel_11 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ProcLabel_11, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), ProcLabel_11, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ProcLabel_11, 2) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), ProcLabel_11, 3) = ((MR_Box) ((MR_String) "DEBUG"));
      MR_hl_field(MR_mktag(0), ProcLabel_11, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ProcLabel_11, 5) = ((MR_Box) (InitialProcIdInt_10));
    }
    {
      CallerLabel_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CallerLabel_12, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), CallerLabel_12, 1) = ((MR_Box) (ProcLabel_11));
    }
    ContLabels_13 = mercury__set_tree234__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
    WhileLabels_14 = mercury__set_tree234__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
    UndefWhileLabels_15 = mercury__set_tree234__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
    {
      LabelOutputInfo_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LabelOutputInfo_16, 0) = ((MR_Box) (CallerLabel_12));
      MR_hl_field(MR_mktag(0), LabelOutputInfo_16, 1) = ((MR_Box) (ContLabels_13));
      MR_hl_field(MR_mktag(0), LabelOutputInfo_16, 2) = ((MR_Box) (WhileLabels_14));
      MR_hl_field(MR_mktag(0), LabelOutputInfo_16, 3) = ((MR_Box) (UndefWhileLabels_15));
    }
    ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(Info_5, Instr_6, LabelOutputInfo_16);
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_debug_instruction_and_comment_5_p_0(
  MR_Word Info_6,
  MR_Word Instr_7,
  MR_String Comment_8)
{
  {
    MR_bool succeeded;
    MR_Integer InitialProcIdInt_12;
    MR_Word ProcLabel_13;
    MR_Word CallerLabel_14;
    MR_Word ContLabels_15;
    MR_Word WhileLabels_16;
    MR_Word UndefWhileLabels_17;
    MR_Word LabelOutputInfo_18;
    MR_Integer Var_22;
    MR_Word AutoComments_36;

    Var_22 = hlds__hlds_pred__initial_proc_id_0_f_0();
    hlds__hlds_pred__proc_id_to_int_2_p_0(Var_22, &InitialProcIdInt_12);
    {
      ProcLabel_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ProcLabel_13, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), ProcLabel_13, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ProcLabel_13, 2) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), ProcLabel_13, 3) = ((MR_Box) ((MR_String) "DEBUG"));
      MR_hl_field(MR_mktag(0), ProcLabel_13, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ProcLabel_13, 5) = ((MR_Box) (InitialProcIdInt_12));
    }
    {
      CallerLabel_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CallerLabel_14, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), CallerLabel_14, 1) = ((MR_Box) (ProcLabel_13));
    }
    ContLabels_15 = mercury__set_tree234__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
    WhileLabels_16 = mercury__set_tree234__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
    UndefWhileLabels_17 = mercury__set_tree234__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
    {
      LabelOutputInfo_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LabelOutputInfo_18, 0) = ((MR_Box) (CallerLabel_14));
      MR_hl_field(MR_mktag(0), LabelOutputInfo_18, 1) = ((MR_Box) (ContLabels_15));
      MR_hl_field(MR_mktag(0), LabelOutputInfo_18, 2) = ((MR_Box) (WhileLabels_16));
      MR_hl_field(MR_mktag(0), LabelOutputInfo_18, 3) = ((MR_Box) (UndefWhileLabels_17));
    }
    AutoComments_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          if (((MR_tag((MR_Word) Instr_7)) == (MR_Integer) 1))
            succeeded = MR_TRUE;
          else
          if (((MR_tag((MR_Word) Instr_7)) == (MR_Integer) 2))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
          if (!(succeeded))
            ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(Info_6, Instr_7, LabelOutputInfo_18);
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(Info_6, Instr_7, LabelOutputInfo_18);
          succeeded = (strcmp(Comment_8, (MR_String) "") == 0);
          if (!(succeeded))
          {
            mercury__io__write_string_3_p_0((MR_String) "\t\t/* ");
            mercury__io__write_string_3_p_0(Comment_8);
            mercury__io__write_string_3_p_0((MR_String) " */\n");
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(
  MR_Word Info_7,
  MR_Word Instr_8,
  MR_String Comment_9,
  MR_Word LabelOutputInfo_10)
{
  {
    MR_bool succeeded;
    MR_Word AutoComments_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);

    switch (AutoComments_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          if (((MR_tag((MR_Word) Instr_8)) == (MR_Integer) 1))
            succeeded = MR_TRUE;
          else
          if (((MR_tag((MR_Word) Instr_8)) == (MR_Integer) 2))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
          if (!(succeeded))
            ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(Info_7, Instr_8, LabelOutputInfo_10);
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(Info_7, Instr_8, LabelOutputInfo_10);
          succeeded = (strcmp(Comment_9, (MR_String) "") == 0);
          if (!(succeeded))
          {
            mercury__io__write_string_3_p_0((MR_String) "\t\t/* ");
            mercury__io__write_string_3_p_0(Comment_9);
            mercury__io__write_string_3_p_0((MR_String) " */\n");
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_instruction_list_while_block__407__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word Label_3,
  MR_Word LabelOutputInfo_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Instr_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Instrs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Uinstr_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr_14, (MR_Integer) 0))));
      MR_String Comment_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), Instr_14, (MR_Integer) 1))));

      succeeded = ((((MR_tag((MR_Word) Uinstr_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction_list_while_block\'/6", (MR_String) "label in block");
          return;
        }
      }
      else
      {
        MR_Word Var_31;
        MR_Word Var_78;

        succeeded = ((((MR_tag((MR_Word) Uinstr_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_19, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 0))));
            succeeded = ll_backend__llds____Unify____label_0_0(Label_3, Var_78);
          }
        }
        if (succeeded)
        {
          MR_Word Var_34;

          mercury__io__write_string_3_p_0((MR_String) "\tcontinue;\n");
          {
            Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_3[1]));
            MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_p_0_1));
            MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (Instrs_15));
            MR_hl_field(MR_mktag(0), Var_34, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_34, (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction_list_while_block\'/6", (MR_String) "code after goto");
        }
        else
        {
          MR_Word Rval_22;
          MR_Word Var_38;
          MR_Word Var_79;

          succeeded = ((((MR_tag((MR_Word) Uinstr_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 9)));
          if (succeeded)
          {
            Rval_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_19, (MR_Integer) 1))));
            Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_19, (MR_Integer) 2))));
            succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 0))));
              succeeded = ll_backend__llds____Unify____label_0_0(Label_3, Var_79);
            }
          }
          if (succeeded)
          {
            MR_Word AutoComments_23;
            MR_Word next_value_of_HeadVar__2_2;

            mercury__io__write_string_3_p_0((MR_String) "\tif (");
            ll_backend__llds_out__llds_out_data__output_test_rval_4_p_0(Info_1, Rval_22);
            mercury__io__write_string_3_p_0((MR_String) ")\n\t\tcontinue;\n");
            AutoComments_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
            succeeded = (AutoComments_23 == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = (strcmp(Comment_20, (MR_String) "") == 0);
              succeeded = !(succeeded);
            }
            if (succeeded)
            {
              mercury__io__write_string_3_p_0((MR_String) "\t\t/* ");
              mercury__io__write_string_3_p_0(Comment_20);
              mercury__io__write_string_3_p_0((MR_String) " */\n");
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__2_2 = Instrs_15;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          else
          {
            succeeded = ((((MR_tag((MR_Word) Uinstr_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction_list_while_block\'/6", (MR_String) "block in block");
                return;
              }
            }
            else
            {
              MR_Word next_value_of_HeadVar__2_2;

              ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(Info_1, Uinstr_19, Comment_20, LabelOutputInfo_4);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Instrs_15;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
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
ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_p_0(
  MR_Word Info_1,
  MR_Word Label_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word LabelOutputInfo_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      mercury__io__write_string_3_p_0((MR_String) "\tbreak;\n");
    }
    else
    {
      MR_Word Instr_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Instrs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Uinstr_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr_18, (MR_Integer) 0))));
      MR_String Comment_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), Instr_18, (MR_Integer) 1))));

      succeeded = ((((MR_tag((MR_Word) Uinstr_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_23, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        mercury__io__write_string_3_p_0((MR_String) "\tbreak;\n");
        *HeadVar__4_4 = HeadVar__3_3;
      }
      else
      {
        MR_Word Var_35;
        MR_Word Var_79;

        succeeded = ((((MR_tag((MR_Word) Uinstr_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_23, (MR_Integer) 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_23, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_35)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 0))));
            succeeded = ll_backend__llds____Unify____label_0_0(Label_2, Var_79);
          }
        }
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) "\t/* continue */\n");
          *HeadVar__4_4 = Instrs_19;
        }
        else
        {
          MR_Word Rval_26;
          MR_Word Var_38;
          MR_Word Var_80;

          succeeded = ((((MR_tag((MR_Word) Uinstr_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_23, (MR_Integer) 0)))) == (MR_Integer) 9)));
          if (succeeded)
          {
            Rval_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_23, (MR_Integer) 1))));
            Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_23, (MR_Integer) 2))));
            succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 0))));
              succeeded = ll_backend__llds____Unify____label_0_0(Label_2, Var_80);
            }
          }
          if (succeeded)
          {
            MR_Word AutoComments_27;
            MR_Word next_value_of_HeadVar__3_3;

            mercury__io__write_string_3_p_0((MR_String) "\tif (");
            ll_backend__llds_out__llds_out_data__output_test_rval_4_p_0(Info_1, Rval_26);
            mercury__io__write_string_3_p_0((MR_String) ")\n\t\tcontinue;\n");
            AutoComments_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
            succeeded = (AutoComments_27 == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = (strcmp(Comment_24, (MR_String) "") == 0);
              succeeded = !(succeeded);
            }
            if (succeeded)
            {
              mercury__io__write_string_3_p_0((MR_String) "\t\t/* ");
              mercury__io__write_string_3_p_0(Comment_24);
              mercury__io__write_string_3_p_0((MR_String) " */\n");
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__3_3 = Instrs_19;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            continue;
          }
          else
          {
            MR_Integer TempR_28;
            MR_Integer TempF_29;
            MR_Word BlockInstrs_30;

            succeeded = ((((MR_tag((MR_Word) Uinstr_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_23, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              TempR_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_23, (MR_Integer) 1))));
              TempF_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_23, (MR_Integer) 2))));
              BlockInstrs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_23, (MR_Integer) 3))));
              {
                MR_Word next_value_of_HeadVar__3_3;

                ll_backend__llds_out__llds_out_instr__output_block_start_4_p_0(TempR_28, TempF_29);
                ll_backend__llds_out__llds_out_instr__output_instruction_list_while_block_6_p_0(Info_1, BlockInstrs_30, Label_2, LabelOutputInfo_5);
                mercury__io__write_string_3_p_0((MR_String) "\t}\n");
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__3_3 = Instrs_19;
                HeadVar__3_3 = next_value_of_HeadVar__3_3;
                continue;
              }
            }
            else
            {
              MR_Word next_value_of_HeadVar__3_3;

              ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(Info_1, Uinstr_23, Comment_24, LabelOutputInfo_5);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__3_3 = Instrs_19;
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

void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_list_6_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word LabelOutputInfo_3,
  MR_Word AfterLayoutLabel0_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Instr_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Instrs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Uinstr_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr_14, (MR_Integer) 0))));
      MR_String Comment_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), Instr_14, (MR_Integer) 1))));
      MR_Word Label_21;

      succeeded = ((((MR_tag((MR_Word) Uinstr_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        Label_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_19, (MR_Integer) 1))));
        {
          MR_Word InternalLabelToLayoutMap_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 3))));
          MR_Word AfterLayoutLabel_24;
          MR_Word WhileLabels_25;
          MR_Box conv0_Var_23;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), InternalLabelToLayoutMap_22, ((MR_Box) (Label_21)), &conv0_Var_23);
          if (succeeded)
            succeeded = MR_TRUE;
          if (succeeded)
            AfterLayoutLabel_24 = (MR_Integer) 1;
          else
            AfterLayoutLabel_24 = (MR_Integer) 0;
          succeeded = (AfterLayoutLabel0_4 == (MR_Integer) 1);
          if (succeeded)
            succeeded = (AfterLayoutLabel_24 == (MR_Integer) 1);
          if (succeeded)
          {
            mercury__io__write_string_3_p_0((MR_String) "\tMR_dummy_function_call();\n");
          }
          WhileLabels_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabelOutputInfo_3, (MR_Integer) 2))));
          succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), WhileLabels_25, ((MR_Box) (Label_21)));
          if (succeeded)
          {
            MR_Word UndefWhileLabels_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabelOutputInfo_3, (MR_Integer) 3))));
            MR_Word AfterWhileInstrs_27;
            MR_Word next_value_of_HeadVar__2_2;

            succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), UndefWhileLabels_26, ((MR_Box) (Label_21)));
            if (!(succeeded))
              ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(Info_1, Uinstr_19, Comment_20, LabelOutputInfo_3);
            mercury__io__write_string_3_p_0((MR_String) "\twhile (1) {\n");
            ll_backend__llds_out__llds_out_instr__output_instruction_list_while_7_p_0(Info_1, Label_21, Instrs_15, &AfterWhileInstrs_27, LabelOutputInfo_3);
            mercury__io__write_string_3_p_0((MR_String) "\t} /* end while */\n");
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__2_2 = AfterWhileInstrs_27;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            AfterLayoutLabel0_4 = (MR_Integer) 0;
            continue;
          }
          else
          {
            MR_Word next_value_of_HeadVar__2_2;
            MR_Word next_value_of_AfterLayoutLabel0_4;

            ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(Info_1, Uinstr_19, Comment_20, LabelOutputInfo_3);
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__2_2 = Instrs_15;
            next_value_of_AfterLayoutLabel0_4 = AfterLayoutLabel_24;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            AfterLayoutLabel0_4 = next_value_of_AfterLayoutLabel0_4;
            continue;
          }
        }
      }
      else
      {
        MR_Word Instrs1_29;
        MR_Word Lval_32;
        MR_Word Rval_33;
        MR_Word Instr1_28;
        MR_Word Uinstr1_30;

        succeeded = (Instrs_15 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Instr1_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs_15, (MR_Integer) 0))));
          Instrs1_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs_15, (MR_Integer) 1))));
          Uinstr1_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr1_28, (MR_Integer) 0))));
          succeeded = ll_backend__llds_out__llds_out_instr__is_aligned_float_dword_assignment_4_p_0(Uinstr_19, Uinstr1_30, &Lval_32, &Rval_33);
        }
        if (succeeded)
        {
          MR_Word next_value_of_HeadVar__2_2;

          ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_5_p_0(Info_1, Lval_32, Rval_33);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Instrs1_29;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          AfterLayoutLabel0_4 = (MR_Integer) 0;
          continue;
        }
        else
        {
          MR_Word AfterLayoutLabel_54;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_AfterLayoutLabel0_4;

          ll_backend__llds_out__llds_out_instr__output_instruction_and_comment_6_p_0(Info_1, Uinstr_19, Comment_20, LabelOutputInfo_3);
          succeeded = ((MR_tag((MR_Word) Uinstr_19)) == (MR_Integer) 1);
          if (succeeded)
          {
            AfterLayoutLabel_54 = AfterLayoutLabel0_4;
          }
          else
            AfterLayoutLabel_54 = (MR_Integer) 0;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Instrs_15;
          next_value_of_AfterLayoutLabel0_4 = AfterLayoutLabel_54;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          AfterLayoutLabel0_4 = next_value_of_AfterLayoutLabel0_4;
          continue;
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__int__even_1_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__llds_out__llds_out_instr__output_foreign_proc_component_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0(
  MR_Word Info_6,
  MR_Word Instr_7,
  MR_Word LabelOutputInfo_8)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Instr_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Instr_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "\tMR_prune_ticket();\n");
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "\tMR_discard_ticket();\n");
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Comment_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), Instr_7, (MR_Integer) 0))));
          MR_Word CommentChars_11;

          mercury__io__write_string_3_p_0((MR_String) "/*");
          mercury__string__to_char_list_2_p_0(Comment_10, &CommentChars_11);
          ll_backend__llds_out__llds_out_instr__output_comment_chars_4_p_0((MR_Char) 42, CommentChars_11);
          mercury__io__write_string_3_p_0((MR_String) "*/\n");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word LiveVals_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Instr_7, (MR_Integer) 0))));
          MR_Word LiveValsList_13;

          mercury__io__write_string_3_p_0((MR_String) "/*\n* Live lvalues:\n");
          mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LiveVals_12, &LiveValsList_13);
          ll_backend__llds_out__llds_out_instr__output_livevals_4_p_0(Info_6, LiveValsList_13);
          mercury__io__write_string_3_p_0((MR_String) "*/\n");
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer TempR_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));
              MR_Integer TempF_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2))));
              MR_Word Instrs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 3))));
              MR_Word CallerLabel_17;
              MR_Word ContLabels_18;
              MR_Word BlockLabelOutputInfo_21;
              MR_Word Var_461;
              MR_Word Var_462;

              ll_backend__llds_out__llds_out_instr__output_block_start_4_p_0(TempR_14, TempF_15);
              CallerLabel_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabelOutputInfo_8, (MR_Integer) 0))));
              ContLabels_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabelOutputInfo_8, (MR_Integer) 1))));
              Var_461 = mercury__set_tree234__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
              Var_462 = mercury__set_tree234__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
              {
                BlockLabelOutputInfo_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), BlockLabelOutputInfo_21, 0) = ((MR_Box) (CallerLabel_17));
                MR_hl_field(MR_mktag(0), BlockLabelOutputInfo_21, 1) = ((MR_Box) (ContLabels_18));
                MR_hl_field(MR_mktag(0), BlockLabelOutputInfo_21, 2) = ((MR_Box) (Var_461));
                MR_hl_field(MR_mktag(0), BlockLabelOutputInfo_21, 3) = ((MR_Box) (Var_462));
              }
              ll_backend__llds_out__llds_out_instr__output_instruction_list_6_p_0(Info_6, Instrs_16, BlockLabelOutputInfo_21, (MR_Integer) 0);
              ll_backend__llds_out__llds_out_instr__output_block_end_2_p_0();
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lval_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));
              MR_Word Rval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2))));
              MR_Word Type_24;

              mercury__io__write_string_3_p_0((MR_String) "\t");
              ll_backend__llds_out__llds_out_data__output_lval_for_assign_5_p_0(Info_6, Lval_22, &Type_24);
              mercury__io__write_string_3_p_0((MR_String) " = ");
              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_6, Rval_23, Type_24);
              mercury__io__write_string_3_p_0((MR_String) ";\n");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Lval_635 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));
              MR_Word Rval_636 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2))));
              MR_Word Type_637;

              mercury__io__write_string_3_p_0((MR_String) "\t");
              ll_backend__llds_out__llds_out_data__output_lval_for_assign_5_p_0(Info_6, Lval_635, &Type_637);
              mercury__io__write_string_3_p_0((MR_String) " = ");
              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_6, Rval_636, Type_637);
              mercury__io__write_string_3_p_0((MR_String) ";\n");
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Target_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));
              MR_Word ContLabel_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2))));
              MR_Word LiveVals_477 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 3))));
              MR_Word CallerLabel_478 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabelOutputInfo_8, (MR_Integer) 0))));

              ll_backend__llds_out__llds_out_instr__output_call_6_p_0(Info_6, Target_25, ContLabel_26, CallerLabel_478);
              ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_p_0(Info_6, LiveVals_477);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word FrameInfo_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));
              MR_Word MaybeFailCont_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2))));

              if (((MR_tag((MR_Word) FrameInfo_33)) == (MR_Integer) 1))
              {
                MR_String Msg_35 = ((MR_String) ((MR_hl_field(MR_mktag(1), FrameInfo_33, (MR_Integer) 0))));
                MR_Integer Num_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), FrameInfo_33, (MR_Integer) 1))));

                if ((MaybeFailCont_34 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__io__write_string_3_p_0((MR_String) "\tMR_mkframe_no_redoip(\"");
                  backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(Msg_35);
                  mercury__io__write_string_3_p_0((MR_String) "\", ");
                  mercury__io__write_int_3_p_0(Num_36);
                  mercury__io__write_string_3_p_0((MR_String) ");\n");
                }
                else
                {
                  MR_Word FailCont_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFailCont_34, (MR_Integer) 0))));

                  mercury__io__write_string_3_p_0((MR_String) "\tMR_mkframe(\"");
                  backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(Msg_35);
                  mercury__io__write_string_3_p_0((MR_String) "\", ");
                  mercury__io__write_int_3_p_0(Num_36);
                  mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                  ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(FailCont_37);
                  mercury__io__write_string_3_p_0((MR_String) ");\n");
                }
              }
              else
              {
                MR_Word Kind_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FrameInfo_33, (MR_Integer) 0))) & (MR_Integer) 1);

                switch (Kind_38) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\tMR_mkdettempframe(");
                      if ((MaybeFailCont_34 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction\'/5", (MR_String) "no failcont");
                          return;
                        }
                      }
                      else
                      {
                        MR_Word FailCont_479 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFailCont_34, (MR_Integer) 0))));

                        ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(FailCont_479);
                      }
                      mercury__io__write_string_3_p_0((MR_String) ");\n");
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\tMR_mktempframe(");
                      if ((MaybeFailCont_34 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction\'/5", (MR_String) "no failcont");
                          return;
                        }
                      }
                      else
                      {
                        MR_Word FailCont_482 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFailCont_34, (MR_Integer) 0))));

                        ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(FailCont_482);
                      }
                      mercury__io__write_string_3_p_0((MR_String) ");\n");
                    }
                    break;
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Label_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));
              MR_Word LocalThreadEngineBase_40;

              ll_backend__llds_out__llds_out_instr__output_label_defn_3_p_0(Label_39);
              LocalThreadEngineBase_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7))) >> 13)) & (MR_Integer) 1);
              switch (LocalThreadEngineBase_40) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "\tMR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE\n");
                  }
                  break;
              }
              ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_p_0(Info_6, Label_39, LabelOutputInfo_8);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word CodeAddr_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));
              MR_Word CallerLabel_487 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabelOutputInfo_8, (MR_Integer) 0))));

              mercury__io__write_string_3_p_0((MR_String) "\t");
              ll_backend__llds_out__llds_out_instr__output_goto_5_p_0(Info_6, CodeAddr_41, CallerLabel_487);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word MaybeLabels_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2))));
              MR_Word Rval_488 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "\tMR_COMPUTED_GOTO(");
              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_6, Rval_488, (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__llds_out__llds_out_instr_scalar_common_4[0])));
              mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
              ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_p_0(MaybeLabels_42);
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String C_Code_32 = ((MR_String) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 3))));

              mercury__io__write_string_3_p_0((MR_String) "\t");
              mercury__io__write_string_3_p_0(C_Code_32);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word CallerLabel_489 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabelOutputInfo_8, (MR_Integer) 0))));
              MR_Word Rval_490 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));
              MR_Word Target_491 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2))));

              mercury__io__write_string_3_p_0((MR_String) "\tif (");
              ll_backend__llds_out__llds_out_data__output_test_rval_4_p_0(Info_6, Rval_490);
              mercury__io__write_string_3_p_0((MR_String) ") {\n\t\t");
              ll_backend__llds_out__llds_out_instr__output_goto_5_p_0(Info_6, Target_491, CallerLabel_489);
              mercury__io__write_string_3_p_0((MR_String) "\t}\n");
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Lval_492 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "\tMR_save_maxfr(");
              ll_backend__llds_out__llds_out_data__output_lval_4_p_0(Info_6, Lval_492);
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Lval_493 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "\tMR_restore_maxfr(");
              ll_backend__llds_out__llds_out_data__output_lval_4_p_0(Info_6, Lval_493);
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word MaybePtag_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2))));
              MR_Word MaybeOffset_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 3))));
              MR_Word SizeRval_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 4))));
              MR_Word MaybeAllocId_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 5))));
              MR_Word MayUseAtomicAlloc_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 6))) & (MR_Integer) 1);
              MR_Word MaybeRegionRval_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 7))));
              MR_Word MaybeReuse_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 8))));
              MR_Word Lval_497 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "\t");
              if ((MaybeReuse_49 == (MR_Word) ((MR_Unsigned) 0U)))
                ll_backend__llds_out__llds_out_instr__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_99_114_95_104_112_95_110_111_95_114_101_117_115_101_95_95_91_57_93_95_48_11_p_0(Info_6, Lval_497, MaybePtag_43, MaybeOffset_44, SizeRval_45, MaybeAllocId_46, MayUseAtomicAlloc_47, MaybeRegionRval_48);
              else
              {
                MR_Word ReuseRval_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuse_49, (MR_Integer) 0))));
                MR_Word MaybeFlagLval_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuse_49, (MR_Integer) 1))));

                if ((MaybePtag_43 == (MR_Word) ((MR_Unsigned) 0U)))
                  if ((MaybeFlagLval_51 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_reuse_or_alloc_heap(");
                    ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_6, Lval_497);
                  }
                  else
                  {
                    MR_Word FlagLval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFlagLval_51, (MR_Integer) 0))));

                    mercury__io__write_string_3_p_0((MR_String) "MR_reuse_or_alloc_heap_flag(");
                    ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_6, Lval_497);
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                    ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_6, FlagLval_52);
                  }
                else
                {
                  MR_Word Ptag_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePtag_43, (MR_Integer) 0))));

                  if ((MaybeFlagLval_51 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_tag_reuse_or_alloc_heap(");
                    ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_6, Lval_497);
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                    ll_backend__llds_out__llds_out_data__output_ptag_3_p_0(Ptag_53);
                  }
                  else
                  {
                    MR_Word FlagLval_494 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFlagLval_51, (MR_Integer) 0))));

                    mercury__io__write_string_3_p_0((MR_String) "MR_tag_reuse_or_alloc_heap_flag(");
                    ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_6, Lval_497);
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                    ll_backend__llds_out__llds_out_data__output_ptag_3_p_0(Ptag_53);
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                    ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_6, FlagLval_494);
                  }
                }
                mercury__io__write_string_3_p_0((MR_String) ", ");
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, ReuseRval_50);
                mercury__io__write_string_3_p_0((MR_String) ", ");
                ll_backend__llds_out__llds_out_instr__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_99_114_95_104_112_95_110_111_95_114_101_117_115_101_95_95_91_57_93_95_48_11_p_0(Info_6, Lval_497, MaybePtag_43, MaybeOffset_44, SizeRval_45, MaybeAllocId_46, MayUseAtomicAlloc_47, MaybeRegionRval_48);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              mercury__io__write_string_3_p_0((MR_String) ";\n");
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word Lval_498 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "\tMR_mark_hp(");
              ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_6, Lval_498);
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Rval_499 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "\tMR_restore_hp(");
              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_6, Rval_499, (MR_Word) ((MR_Unsigned) 20U));
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word Rval_500 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "\tMR_free_heap(");
              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_6, Rval_500, (MR_Word) ((MR_Unsigned) 12U));
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word StackId_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word EmbeddedFrame_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2))));
              MR_Integer FirstSlot_57;
              MR_Integer LastSlot_58;
              MR_String Var_315;
              MR_String Var_316;
              MR_String Var_317;
              MR_String Var_319;
              MR_String Var_320;
              MR_String Comment_501;

              switch (StackId_54) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "\tMR_push_region_commit_frame");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "\tMR_push_region_disj_frame");
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "\tMR_push_region_ite_frame");
                  }
                  break;
              }
              mercury__io__write_string_3_p_0((MR_String) "(");
              ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_p_0(Info_6, EmbeddedFrame_55);
              mercury__io__write_string_3_p_0((MR_String) ");");
              FirstSlot_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), EmbeddedFrame_55, (MR_Integer) 1))));
              LastSlot_58 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), EmbeddedFrame_55, (MR_Integer) 2))));
              Var_316 = mercury__string__int_to_string_1_f_0(FirstSlot_57);
              Var_320 = mercury__string__int_to_string_1_f_0(LastSlot_58);
              Var_319 = mercury__string__f_43_43_2_f_0(Var_320, (MR_String) " */");
              Var_317 = mercury__string__f_43_43_2_f_0((MR_String) "..", Var_319);
              Var_315 = mercury__string__f_43_43_2_f_0(Var_316, Var_317);
              Comment_501 = mercury__string__f_43_43_2_f_0((MR_String) " /* ", Var_315);
              mercury__io__write_string_3_p_0(Comment_501);
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word FillOp_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));
              MR_Word IdRval_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 3))));
              MR_Word NumLval_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 4))));
              MR_Word AddrLval_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 5))));
              MR_Word EmbeddedFrame_502 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) FillOp_59)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(FillOp_59)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "\tMR_region_fill_ite_protect");
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "\tMR_region_fill_semi_disj_protect");
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "\tMR_region_fill_disj_snapshot");
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "\tMR_region_fill_commit");
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_645 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), FillOp_59, (MR_Integer) 0))) & (MR_Integer) 1);

                    switch (Var_645) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          mercury__io__write_string_3_p_0((MR_String) "\tMR_region_fill_ite_snapshot_not_removed");
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          mercury__io__write_string_3_p_0((MR_String) "\tMR_region_fill_ite_snapshot_removed");
                        }
                        break;
                    }
                  }
                  break;
              }
              mercury__io__write_string_3_p_0((MR_String) "(");
              ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_p_0(Info_6, EmbeddedFrame_502);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, IdRval_60);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ll_backend__llds_out__llds_out_data__output_lval_4_p_0(Info_6, NumLval_61);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ll_backend__llds_out__llds_out_data__output_lval_4_p_0(Info_6, AddrLval_62);
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word SetOp_63 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word ValueRval_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 3))));
              MR_Word EmbeddedFrame_503 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2))));

              switch (SetOp_63) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 4:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "\tMR_region_set_commit_num_entries");
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "\tMR_region_set_disj_num_protects");
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "\tMR_region_set_disj_num_snapshots");
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "\tMR_region_set_ite_num_protects");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "\tMR_region_set_ite_num_snapshots");
                  }
                  break;
              }
              mercury__io__write_string_3_p_0((MR_String) "(");
              ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_p_0(Info_6, EmbeddedFrame_503);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, ValueRval_64);
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word UseOp_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));
              MR_Word EmbeddedFrame_504 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) UseOp_65)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(UseOp_65)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_ite_nondet_cond_fail");
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_disj_later");
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_disj_last");
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_disj_nonlast_semi_commit");
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_commit_success");
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_commit_failure");
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_647 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), UseOp_65, (MR_Integer) 0))) & (MR_Integer) 1);

                    switch (Var_647) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_ite_then_nondet");
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_ite_then_semidet");
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_646 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), UseOp_65, (MR_Integer) 0))) & (MR_Integer) 1);

                    switch (Var_646) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_ite_else_nondet");
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          mercury__io__write_string_3_p_0((MR_String) "\tMR_use_region_ite_else_semidet");
                        }
                        break;
                    }
                  }
                  break;
              }
              mercury__io__write_string_3_p_0((MR_String) "(");
              ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_p_0(Info_6, EmbeddedFrame_504);
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word Lval_505 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "\tMR_store_ticket(");
              ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_6, Lval_505);
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word Reason_66 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word Rval_506 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "\tMR_reset_ticket(");
              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_6, Rval_506, (MR_Word) ((MR_Unsigned) 20U));
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_p_0(Reason_66);
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word Lval_507 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "\tMR_mark_ticket_stack(");
              ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_6, Lval_507);
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word Rval_508 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "\tMR_prune_tickets_to(");
              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_6, Rval_508, (MR_Word) ((MR_Unsigned) 20U));
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
          case (MR_Integer) 24:
            {
              MR_Integer N_67 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));
              MR_Word DwordAlignment_69 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
              MR_Word Kind_509 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 3))) & (MR_Integer) 1);

              switch (DwordAlignment_69) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_186;

                    {
                      Var_186 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_186, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_6[0]));
                      MR_hl_field(MR_mktag(0), Var_186, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_3));
                      MR_hl_field(MR_mktag(0), Var_186, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_186, 3) = ((MR_Box) (N_67));
                    }
                    mercury__require__expect_3_p_0(Var_186, (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_instruction\'/5", (MR_String) "odd sp increment");
                  }
                  break;
              }
              switch (Kind_509) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer Var_191;

                    Var_191 = ll_backend__llds_out__llds_out_instr__max_leaf_stack_frame_size_0_f_0();
                    succeeded = (N_67 < Var_191);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\tMR_incr_sp_leaf(");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\tMR_incr_sp(");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "\tMR_incr_sp(");
                  }
                  break;
              }
              mercury__io__write_int_3_p_0(N_67);
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
          case (MR_Integer) 25:
            {
              MR_Integer N_510 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "\tMR_decr_sp(");
              mercury__io__write_int_3_p_0(N_510);
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
          case (MR_Integer) 26:
            {
              MR_Integer N_511 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "\tMR_decr_sp_and_return(");
              mercury__io__write_int_3_p_0(N_511);
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word Decls_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));
              MR_Word Components_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2))));
              MR_Word MaybeDefLabel_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 8))));

              mercury__io__write_string_3_p_0((MR_String) "\t{\n");
              ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_p_0(Decls_70);
              if ((MaybeDefLabel_77 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_172;
                MR_Box conv0_STATE_VARIABLE_IO_173_173;

                {
                  Var_172 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_172, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_5[0]));
                  MR_hl_field(MR_mktag(0), Var_172, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_172, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_172, 3) = ((MR_Box) (Info_6));
                }
                mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_172, Components_71, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_173_173);
              }
              else
              {
                MR_Word DefLabel_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefLabel_77, (MR_Integer) 0))));
                MR_Word InternalLabelToLayoutMap_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3))));
                MR_Word DefLabelLayout_82;
                MR_String MangledModuleName_83;
                MR_Word Var_168;
                MR_Box conv1_DefLabelLayout_82;
                MR_Box conv2_STATE_VARIABLE_IO_169_169;

                mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), InternalLabelToLayoutMap_81, ((MR_Box) (DefLabel_80)), &conv1_DefLabelLayout_82);
                DefLabelLayout_82 = ((MR_Word) (conv1_DefLabelLayout_82));
                mercury__io__write_string_3_p_0((MR_String) "#define MR_HASH_DEF_LABEL_LAYOUT ");
                MangledModuleName_83 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))));
                ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, MangledModuleName_83, DefLabelLayout_82);
                mercury__io__nl_2_p_0();
                {
                  Var_168 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_168, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_5[0]));
                  MR_hl_field(MR_mktag(0), Var_168, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_instruction_5_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_168, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_168, 3) = ((MR_Box) (Info_6));
                }
                mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_168, Components_71, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_169_169);
                mercury__io__write_string_3_p_0((MR_String) "#undef MR_HASH_DEF_LABEL_LAYOUT\n");
              }
              mercury__io__write_string_3_p_0((MR_String) "\t}\n");
            }
            break;
          case (MR_Integer) 28:
            {
              MR_Integer NumConjuncts_84 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2))));
              MR_Integer TSStringIndex_85 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 3))));
              MR_Word Lval_512 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "\tMR_init_sync_term(");
              ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_6, Lval_512);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              mercury__io__write_int_3_p_0(NumConjuncts_84);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              mercury__io__write_int_3_p_0(TSStringIndex_85);
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
          case (MR_Integer) 29:
            {
              MR_Word Child_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2))));
              MR_Word Lval_513 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "\tMR_fork_new_child(");
              ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_6, Lval_513);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(Child_86);
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
          case (MR_Integer) 30:
            {
              MR_Word Lval_514 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));
              MR_Word Label_515 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2))));

              mercury__io__write_string_3_p_0((MR_String) "\tMR_join_and_continue(");
              ll_backend__llds_out__llds_out_data__output_lval_4_p_0(Info_6, Lval_514);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(Label_515);
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
          case (MR_Integer) 31:
            {
              MR_Integer NumSlots_87 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));
              MR_Word Lval_516 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2))));

              mercury__io__write_string_3_p_0((MR_String) "\tMR_lc_create_loop_control(");
              mercury__io__write_int_3_p_0(NumSlots_87);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ll_backend__llds_out__llds_out_data__output_lval_4_p_0(Info_6, Lval_516);
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
          case (MR_Integer) 32:
            {
              MR_Word LCRval_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));
              MR_Word LCSLval_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2))));
              MR_Word InternalLabel_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 3))));

              mercury__io__write_string_3_p_0((MR_String) "\tMR_lc_wait_free_slot(");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, LCRval_88);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ll_backend__llds_out__llds_out_data__output_lval_4_p_0(Info_6, LCSLval_89);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(InternalLabel_90);
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
          case (MR_Integer) 33:
            {
              MR_Word LCSRval_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2))));
              MR_Word ChildLabel_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 3))));
              MR_Word LCRval_517 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "\tMR_lc_spawn_off((MR_LoopControl*)");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, LCRval_517);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, LCSRval_91);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(ChildLabel_92);
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
          case (MR_Integer) 34:
            {
              MR_Word LCRval_518 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1))));
              MR_Word LCSRval_519 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2))));

              mercury__io__write_string_3_p_0((MR_String) "\tMR_lc_join_and_terminate(");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, LCRval_518);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, LCSRval_519);
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__llds_out__llds_out_instr__IntroducedFrom__pred__output_float_dword_assignment__457__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_5_p_0(
  MR_Word Info_6,
  MR_Word Lval_7,
  MR_Word Rval_8)
{
  {
    MR_bool succeeded;
    MR_Word Type_10;
    MR_Word AutoComments_11;
    MR_Word Var_17;

    mercury__io__write_string_3_p_0((MR_String) "\t* (MR_Float *) &(");
    ll_backend__llds_out__llds_out_data__output_lval_for_assign_5_p_0(Info_6, Lval_7, &Type_10);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_float_dword_assignment_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Type_10));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) ((MR_Unsigned) 20U));
    }
    mercury__require__expect_3_p_0(Var_17, (MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_float_dword_assignment\'/5", (MR_String) "expected word");
    mercury__io__write_string_3_p_0((MR_String) ") = ");
    ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_6, Rval_8, (MR_Word) ((MR_Unsigned) 4U));
    mercury__io__write_string_3_p_0((MR_String) ";\n");
    AutoComments_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "\t\t/* assigning float dword */\n");
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr__is_aligned_float_dword_assignment_4_p_0(
  MR_Word InstrA_5,
  MR_Word InstrB_6,
  MR_Word * LvalA_7,
  MR_Word * Rval_8)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) InstrA_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstrA_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
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
      *LvalA_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_5, (MR_Integer) 1))));
      RvalA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_5, (MR_Integer) 2))));
      succeeded = ((((MR_tag((MR_Word) InstrB_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstrB_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        LvalB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_6, (MR_Integer) 1))));
        RvalB_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_6, (MR_Integer) 2))));
        succeeded = ((((MR_tag((MR_Word) RvalA_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), RvalA_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalA_9, (MR_Integer) 1))));
          *Rval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalA_9, (MR_Integer) 2))));
          succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 44U));
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) RvalB_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), RvalB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (succeeded)
            {
              Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalB_11, (MR_Integer) 1))));
              Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalB_11, (MR_Integer) 2))));
              succeeded = ll_backend__llds____Unify____rval_0_0(*Rval_8, Var_23);
              if (succeeded)
              {
                succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 48U));
                if (succeeded)
                {
                  succeeded = ((((MR_tag((MR_Word) *LvalA_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), *LvalA_7, (MR_Integer) 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    MaybePtag_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), *LvalA_7, (MR_Integer) 1))));
                    Address_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), *LvalA_7, (MR_Integer) 2))));
                    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), *LvalA_7, (MR_Integer) 3))));
                    succeeded = ((((MR_tag((MR_Word) Var_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_17, (MR_Integer) 1))));
                      succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        Offset_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));
                        succeeded = ((((MR_tag((MR_Word) LvalB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), LvalB_10, (MR_Integer) 0)))) == (MR_Integer) 9)));
                        if (succeeded)
                        {
                          Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LvalB_10, (MR_Integer) 1))));
                          Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LvalB_10, (MR_Integer) 2))));
                          Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LvalB_10, (MR_Integer) 3))));
                          TypeInfo_27_27 = (MR_Word) (&ll_backend__llds_out__llds_out_instr_scalar_common_1[4]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (MaybePtag_12)), ((MR_Box) (Var_24)));
                          if (succeeded)
                          {
                            succeeded = ll_backend__llds____Unify____rval_0_0(Address_13, Var_25);
                            if (succeeded)
                            {
                              succeeded = ((((MR_tag((MR_Word) Var_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 0)))) == (MR_Integer) 1)));
                              if (succeeded)
                              {
                                Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 1))));
                                succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 1);
                                if (succeeded)
                                {
                                  Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0))));
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
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_99_114_95_104_112_95_110_111_95_114_101_117_115_101_95_95_91_57_93_95_48_11_p_0(
  MR_Word Info_12,
  MR_Word Lval_13,
  MR_Word MaybePtag_14,
  MR_Word MaybeOffset_15,
  MR_Word Rval_16,
  MR_Word MaybeAllocId_17,
  MR_Word MayUseAtomicAlloc_18,
  MR_Word MaybeRegionRval_19)
{
  if ((MaybeRegionRval_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ProfMem_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 7))) >> 10)) & (MR_Integer) 1);

    if ((MaybePtag_14 == (MR_Word) ((MR_Unsigned) 0U)))
      switch (ProfMem_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            if ((MaybeOffset_15 == (MR_Word) ((MR_Unsigned) 0U)))
              switch (MayUseAtomicAlloc_18) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_alloc_heap(");
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_alloc_heap_atomic(");
                  }
                  break;
              }
            else
              switch (MayUseAtomicAlloc_18) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_offset_incr_hp(");
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_offset_incr_hp_atomic(");
                  }
                  break;
              }
            ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_12, Lval_13);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            if (!((MaybeOffset_15 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Integer Offset_114 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeOffset_15, (MR_Integer) 0))));

              mercury__io__write_int_3_p_0(Offset_114);
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_12, Rval_16, (MR_Word) ((MR_Unsigned) 20U));
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 1:
          {
            switch (MayUseAtomicAlloc_18) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_offset_incr_hp_msg(");
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_offset_incr_hp_atomic_msg(");
                }
                break;
            }
            ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_12, Lval_13);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            if ((MaybeOffset_15 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__io__write_string_3_p_0((MR_String) "0, ");
            }
            else
            {
              MR_Integer Offset_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeOffset_15, (MR_Integer) 0))));

              mercury__io__write_int_3_p_0(Offset_25);
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_12, Rval_16, (MR_Word) ((MR_Unsigned) 20U));
            mercury__io__write_string_3_p_0((MR_String) ", ");
            ll_backend__llds_out__llds_out_instr__output_maybe_alloc_site_id_4_p_0(Info_12, MaybeAllocId_17);
            mercury__io__write_string_3_p_0((MR_String) ", NULL)");
          }
          break;
      }
    else
    {
      MR_Word Var_205 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePtag_14, (MR_Integer) 0))));

      switch (ProfMem_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            if ((MaybeOffset_15 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              switch (MayUseAtomicAlloc_18) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_tag_alloc_heap(");
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_tag_alloc_heap_atomic(");
                  }
                  break;
              }
              ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_12, Lval_13);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ll_backend__llds_out__llds_out_data__write_ptag_3_p_0(Var_205);
            }
            else
            {
              switch (MayUseAtomicAlloc_18) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_tag_offset_incr_hp(");
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_tag_offset_incr_hp_atomic(");
                  }
                  break;
              }
              ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_12, Lval_13);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ll_backend__llds_out__llds_out_data__output_ptag_3_p_0(Var_205);
            }
            mercury__io__write_string_3_p_0((MR_String) ", ");
            if (!((MaybeOffset_15 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Integer Offset_145 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeOffset_15, (MR_Integer) 0))));

              mercury__io__write_int_3_p_0(Offset_145);
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_12, Rval_16, (MR_Word) ((MR_Unsigned) 20U));
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 1:
          {
            switch (MayUseAtomicAlloc_18) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_tag_offset_incr_hp_msg(");
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_tag_offset_incr_hp_atomic_msg(");
                }
                break;
            }
            ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_12, Lval_13);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            ll_backend__llds_out__llds_out_data__output_ptag_3_p_0(Var_205);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            if ((MaybeOffset_15 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__io__write_string_3_p_0((MR_String) "0, ");
            }
            else
            {
              MR_Integer Offset_160 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeOffset_15, (MR_Integer) 0))));

              mercury__io__write_int_3_p_0(Offset_160);
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_12, Rval_16, (MR_Word) ((MR_Unsigned) 20U));
            mercury__io__write_string_3_p_0((MR_String) ", ");
            ll_backend__llds_out__llds_out_instr__output_maybe_alloc_site_id_4_p_0(Info_12, MaybeAllocId_17);
            mercury__io__write_string_3_p_0((MR_String) ", NULL)");
          }
          break;
      }
    }
  }
  else
  {
    MR_Word RegionRval_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRegionRval_19, (MR_Integer) 0))));

    if ((MaybePtag_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "MR_alloc_in_region(");
      ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_12, Lval_13);
    }
    else
    {
      MR_Word Ptag_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePtag_14, (MR_Integer) 0))));

      mercury__io__write_string_3_p_0((MR_String) "MR_tag_alloc_in_region(");
      ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(Info_12, Lval_13);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      ll_backend__llds_out__llds_out_data__output_ptag_3_p_0(Ptag_23);
    }
    mercury__io__write_string_3_p_0((MR_String) ", ");
    ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_12, RegionRval_22);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_12, Rval_16, (MR_Word) ((MR_Unsigned) 20U));
    mercury__io__write_string_3_p_0((MR_String) ")");
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_maybe_alloc_site_id_4_p_0(
  MR_Word Info_5,
  MR_Word MaybeAllocId_6)
{
  if ((MaybeAllocId_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_3_p_0((MR_String) "NULL");
  }
  else
  {
    MR_Word AllocId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAllocId_6, (MR_Integer) 0))));
    MR_String MangledModuleName_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))));
    MR_Word AllocSiteMap_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 6))));
    MR_Word AllocSiteSlotName_21;
    MR_Box conv0_AllocSiteSlotName_21;

    mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0), (MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), AllocSiteMap_20, ((MR_Box) (AllocId_8)), &conv0_AllocSiteSlotName_21);
    AllocSiteSlotName_21 = ((MR_Word) (conv0_AllocSiteSlotName_21));
    ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, MangledModuleName_19, AllocSiteSlotName_21);
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_foreign_proc_decls_3_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Decl_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Decls_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String TypeString_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Decl_7, (MR_Integer) 1))));
      MR_String VarName_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), Decl_7, (MR_Integer) 2))));
      MR_Word next_value_of_HeadVar__1_1;

      mercury__io__write_string_3_p_0((MR_String) "\t");
      mercury__io__write_string_3_p_0(TypeString_11);
      mercury__io__write_string_3_p_0((MR_String) "\t");
      mercury__io__write_string_3_p_0(VarName_12);
      mercury__io__write_string_3_p_0((MR_String) ";\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Decls_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_reset_trail_reason_3_p_0(
  MR_Word HeadVar__1_1)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__io__write_string_3_p_0((MR_String) "MR_commit");
      }
      break;
    case (MR_Integer) 3:
      {
        mercury__io__write_string_3_p_0((MR_String) "MR_exception");
      }
      break;
    case (MR_Integer) 5:
      {
        mercury__io__write_string_3_p_0((MR_String) "MR_gc");
      }
      break;
    case (MR_Integer) 4:
      {
        mercury__io__write_string_3_p_0((MR_String) "MR_retry");
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__io__write_string_3_p_0((MR_String) "MR_solve");
      }
      break;
    case (MR_Integer) 0:
      {
        mercury__io__write_string_3_p_0((MR_String) "MR_undo");
      }
      break;
  }
}

static MR_Integer MR_CALL 
ll_backend__llds_out__llds_out_instr__max_leaf_stack_frame_size_0_f_0(void)
{
  {
    return (MR_Integer) 32;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_embedded_frame_addr_4_p_0(
  MR_Word Info_5,
  MR_Word EmbeddedFrame_6)
{
  {
    MR_Word MainStackId_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), EmbeddedFrame_6, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Integer LastSlot_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), EmbeddedFrame_6, (MR_Integer) 2))));
    MR_Word FrameStartRval_11;

    FrameStartRval_11 = ll_backend__llds__stack_slot_num_to_lval_ref_2_f_0(MainStackId_8, LastSlot_10);
    ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, FrameStartRval_11, (MR_Word) ((MR_Unsigned) 12U));
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_3_p_0(
  MR_Word HeadVar__1_1)
{
  if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word MaybeLabel_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word MaybeLabels_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

    if ((MaybeLabel_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "MR_ENTRY(MR_do_not_reached)");
    }
    else
    {
      MR_Word Label_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLabel_7, (MR_Integer) 0))));

      mercury__io__write_string_3_p_0((MR_String) "MR_LABEL_AP(");
      ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(Label_18);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_p_0(MaybeLabels_8);
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_list_or_not_reached_2_3_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word MaybeLabel_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word MaybeLabels_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;

      mercury__io__write_string_3_p_0((MR_String) " MR_AND\n\t\t");
      if ((MaybeLabel_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__io__write_string_3_p_0((MR_String) "MR_ENTRY(MR_do_not_reached)");
      }
      else
      {
        MR_Word Label_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLabel_7, (MR_Integer) 0))));

        mercury__io__write_string_3_p_0((MR_String) "MR_LABEL_AP(");
        ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(Label_20);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = MaybeLabels_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_goto_5_p_0(
  MR_Word Info_6,
  MR_Word Target_7,
  MR_Word CallerLabel_8)
{
  switch (MR_tag((MR_Word) Target_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Target_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_proceed();\n");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word UseMacro_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7))) >> 3)) & (MR_Integer) 1);

            switch (UseMacro_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_GOTO(MR_ENTRY(MR_do_redo));\n");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_redo();\n");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word UseMacro_129 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7))) >> 3)) & (MR_Integer) 1);

            switch (UseMacro_129) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_GOTO(MR_ENTRY(MR_do_fail));\n");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_fail();\n");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_GOTO(MR_ENTRY(MR_do_trace_redo_fail_shallow));\n");
          }
          break;
        case (MR_Integer) 4:
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_GOTO(MR_ENTRY(MR_do_trace_redo_fail_deep));\n");
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_tailcall(MR_ENTRY(MR_do_not_reached),\n\t\t");
            ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(CallerLabel_8);
            mercury__io__write_string_3_p_0((MR_String) ");\n");
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Label_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Target_7, (MR_Integer) 0))));
        MR_Word ProfileCalls_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7))) >> 12)) & (MR_Integer) 1);

        if (((MR_tag((MR_Word) Label_10)) == (MR_Integer) 1))
        {
          MR_Word Var_243 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Label_10, (MR_Integer) 0))) & (MR_Integer) 3);

          switch (ProfileCalls_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (Var_243) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_np_localtailcall(");
                    ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(Label_10);
                    mercury__io__write_string_3_p_0((MR_String) ");\n");
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_np_tailcall_ent(");
                    ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(Label_10);
                    mercury__io__write_string_3_p_0((MR_String) ");\n");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_np_tailcall_ent(");
                    ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(Label_10);
                    mercury__io__write_string_3_p_0((MR_String) ");\n");
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (Var_243) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_localtailcall(");
                    ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(Label_10);
                    mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                    ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(CallerLabel_8);
                    mercury__io__write_string_3_p_0((MR_String) ");\n");
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_tailcall(");
                    ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(Label_10);
                    mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                    ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(CallerLabel_8);
                    mercury__io__write_string_3_p_0((MR_String) ");\n");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_tailcall(");
                    ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(Label_10);
                    mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                    ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(CallerLabel_8);
                    mercury__io__write_string_3_p_0((MR_String) ");\n");
                  }
                  break;
              }
              break;
          }
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "MR_GOTO_LAB(");
          ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(Label_10);
          mercury__io__write_string_3_p_0((MR_String) ");\n");
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ProcLabel_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Target_7, (MR_Integer) 0))));
        MR_Word ProfileCalls_128 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7))) >> 12)) & (MR_Integer) 1);

        switch (ProfileCalls_128) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_np_tailcall_ent(");
              backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ProcLabel_17);
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_tailcall(MR_ENTRY(");
              backend_libs__name_mangle__output_proc_label_3_p_0(ProcLabel_17);
              mercury__io__write_string_3_p_0((MR_String) "),\n\t\t");
              ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(CallerLabel_8);
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Target_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Last_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Target_7, (MR_Integer) 1))) & (MR_Integer) 1);

            switch (Last_18) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_succeed();\n");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_succeed_discard();\n");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Variant_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Target_7, (MR_Integer) 1))));
            MR_String Var_46;

            mercury__io__write_string_3_p_0((MR_String) "MR_set_prof_ho_caller_proc(");
            ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(CallerLabel_8);
            mercury__io__write_string_3_p_0((MR_String) ");\n\t");
            mercury__io__write_string_3_p_0((MR_String) "MR_np_tailcall_ent(do_call_closure_");
            Var_46 = ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_f_0(Variant_20);
            mercury__io__write_string_3_p_0(Var_46);
            mercury__io__write_string_3_p_0((MR_String) ");\n");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_35;
            MR_Word Variant_130 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Target_7, (MR_Integer) 1))));

            mercury__io__write_string_3_p_0((MR_String) "MR_set_prof_ho_caller_proc(");
            ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(CallerLabel_8);
            mercury__io__write_string_3_p_0((MR_String) ");\n\t");
            mercury__io__write_string_3_p_0((MR_String) "MR_np_tailcall_ent(do_call_class_method_");
            Var_35 = ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_f_0(Variant_130);
            mercury__io__write_string_3_p_0(Var_35);
            mercury__io__write_string_3_p_0((MR_String) ");\n");
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__maybe_output_update_prof_counter_5_p_0(
  MR_Word Info_6,
  MR_Word Label_7,
  MR_Word LabelOutputInfo_8)
{
  {
    MR_bool succeeded;
    MR_Word ProfileTime_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7))) >> 11)) & (MR_Integer) 1);
    MR_Word TypeCtorInfo_49_49;
    MR_Word ContLabelSet_11;

    succeeded = (ProfileTime_10 == (MR_Integer) 1);
    if (succeeded)
    {
      ContLabelSet_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabelOutputInfo_8, (MR_Integer) 1))));
      TypeCtorInfo_49_49 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0);
      succeeded = mercury__set_tree234__contains_2_p_0(TypeCtorInfo_49_49, ContLabelSet_11, ((MR_Box) (Label_7)));
    }
    if (succeeded)
    {
      MR_Word CallerLabel_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabelOutputInfo_8, (MR_Integer) 0))));

      mercury__io__write_string_3_p_0((MR_String) "\tMR_update_prof_current_proc(MR_LABEL_AP(");
      ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(CallerLabel_12);
      mercury__io__write_string_3_p_0((MR_String) "));\n");
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_label_defn_3_p_0(
  MR_Word HeadVar__1_1)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);

    switch (Var_50) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "MR_def_local(");
          backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(Var_49);
          mercury__io__write_string_3_p_0((MR_String) ")\n");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_11;

          mercury__io__write_string_3_p_0((MR_String) "MR_define_entry(");
          {
            Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_11, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_49));
          }
          ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(Var_11);
          mercury__io__write_string_3_p_0((MR_String) ");\n");
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "MR_def_static(");
          backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(Var_49);
          mercury__io__write_string_3_p_0((MR_String) ")\n");
        }
        break;
    }
  }
  else
  {
    MR_Integer Num_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ProcLabel_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    mercury__io__write_string_3_p_0((MR_String) "MR_def_label(");
    backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ProcLabel_37);
    mercury__io__write_string_3_p_0((MR_String) ",");
    mercury__io__write_int_3_p_0(Num_36);
    mercury__io__write_string_3_p_0((MR_String) ")\n");
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_4_p_0(
  MR_Word Info_5,
  MR_Word LiveVals_6)
{
  {
    MR_Word AutoComments_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);

    switch (AutoComments_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "/*\n");
          mercury__io__write_string_3_p_0((MR_String) "* Garbage collection livevals info\n");
          ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_p_0(Info_5, LiveVals_6);
          mercury__io__write_string_3_p_0((MR_String) "*/\n");
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_2_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word LiveInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word LiveInfos_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Locn_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LiveInfo_10, (MR_Integer) 0))));
      MR_Word LiveValueType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LiveInfo_10, (MR_Integer) 1))));
      MR_Word TypeParams_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LiveInfo_10, (MR_Integer) 2))));
      MR_Word TypeParamList_16;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_3_p_0((MR_String) "*\t");
      if (((MR_tag((MR_Word) Locn_13)) == (MR_Integer) 0))
      {
        MR_Word Lval_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Locn_13, (MR_Integer) 0))));

        ll_backend__llds_out__llds_out_data__output_lval_4_p_0(Info_1, Lval_38);
      }
      else
      {
        MR_Integer Offset_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Locn_13, (MR_Integer) 1))));
        MR_Word Lval_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Locn_13, (MR_Integer) 0))));

        mercury__io__write_string_3_p_0((MR_String) "offset ");
        mercury__io__write_int_3_p_0(Offset_39);
        mercury__io__write_string_3_p_0((MR_String) " from ");
        ll_backend__llds_out__llds_out_data__output_lval_4_p_0(Info_1, Lval_47);
      }
      mercury__io__write_string_3_p_0((MR_String) "\t");
      ll_backend__llds_out__llds_out_instr__output_live_value_type_3_p_0(LiveValueType_14);
      mercury__io__write_string_3_p_0((MR_String) "\t");
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__llds_out__llds_out_instr_scalar_common_1[1]), (MR_Word) (&ll_backend__llds_out__llds_out_instr_scalar_common_1[2]), TypeParams_15, &TypeParamList_16);
      ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_p_0(Info_1, TypeParamList_16);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = LiveInfos_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_live_value_type_3_p_0(
  MR_Word HeadVar__1_1)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "type succip");
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "type curfr");
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__io__write_string_3_p_0((MR_String) "type maxfr");
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__io__write_string_3_p_0((MR_String) "type redoip");
          }
          break;
        case (MR_Integer) 4:
          {
            mercury__io__write_string_3_p_0((MR_String) "type redofr");
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__io__write_string_3_p_0((MR_String) "type hp");
          }
          break;
        case (MR_Integer) 6:
          {
            mercury__io__write_string_3_p_0((MR_String) "type trail_ptr");
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__io__write_string_3_p_0((MR_String) "type ticket");
          }
          break;
        case (MR_Integer) 8:
          {
            mercury__io__write_string_3_p_0((MR_String) "type region ite");
          }
          break;
        case (MR_Integer) 9:
          {
            mercury__io__write_string_3_p_0((MR_String) "type region disj");
          }
          break;
        case (MR_Integer) 10:
          {
            mercury__io__write_string_3_p_0((MR_String) "type region commit");
          }
          break;
        case (MR_Integer) 11:
          {
            mercury__io__write_string_3_p_0((MR_String) "unwanted");
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_String Name_65 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
        MR_Word Type_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
        MR_Integer VarInt_69;
        MR_Word NewTVarset_70;

        mercury__io__write_string_3_p_0((MR_String) "var(");
        mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_64, &VarInt_69);
        mercury__io__write_int_3_p_0(VarInt_69);
        mercury__io__write_string_3_p_0((MR_String) ", ");
        mercury__io__write_string_3_p_0(Name_65);
        mercury__io__write_string_3_p_0((MR_String) ", ");
        mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &NewTVarset_70);
        parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(NewTVarset_70, (MR_Integer) 0, Type_66);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_gc_livevals_params_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_10;
      MR_Word LocnSet_11;
      MR_Word VarLocnSets_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer VarInt_14;
      MR_Word Locns_15;
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__2_2;

      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
      LocnSet_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))));
      mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), Var_10, &VarInt_14);
      mercury__io__write_int_3_p_0(VarInt_14);
      mercury__io__write_string_3_p_0((MR_String) " - ");
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0), LocnSet_11, &Locns_15);
      ll_backend__llds_out__llds_out_instr__output_layout_locns_4_p_0(Info_1, Locns_15);
      mercury__io__write_string_3_p_0((MR_String) "  ");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = VarLocnSets_12;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_layout_locns_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Locn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Locns_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));

      if (((MR_tag((MR_Word) Locn_10)) == (MR_Integer) 0))
      {
        MR_Word Lval_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Locn_10, (MR_Integer) 0))));

        ll_backend__llds_out__llds_out_data__output_lval_4_p_0(Info_1, Lval_26);
      }
      else
      {
        MR_Integer Offset_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Locn_10, (MR_Integer) 1))));
        MR_Word Lval_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Locn_10, (MR_Integer) 0))));

        mercury__io__write_string_3_p_0((MR_String) "offset ");
        mercury__io__write_int_3_p_0(Offset_27);
        mercury__io__write_string_3_p_0((MR_String) " from ");
        ll_backend__llds_out__llds_out_data__output_lval_4_p_0(Info_1, Lval_35);
      }
      if (!((Locns_11 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word next_value_of_HeadVar__2_2;

        mercury__io__write_string_3_p_0((MR_String) " and ");
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Locns_11;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_call_6_p_0(
  MR_Word Info_7,
  MR_Word Target_8,
  MR_Word Continuation_9,
  MR_Word CallerLabel_10)
{
  {
    MR_bool succeeded;
    MR_Word ProfileCall_14;
    MR_Word Label_15;
    MR_Word Var_29;

    mercury__io__write_string_3_p_0((MR_String) "\t");
    if (((((MR_tag((MR_Word) Target_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Target_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
      succeeded = MR_TRUE;
    else
    if (((((MR_tag((MR_Word) Target_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Target_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      ProfileCall_14 = (MR_Integer) 0;
      mercury__io__write_string_3_p_0((MR_String) "MR_set_prof_ho_caller_proc(");
      ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(CallerLabel_10);
      mercury__io__write_string_3_p_0((MR_String) ");\n\t");
    }
    else
      ProfileCall_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7))) >> 12)) & (MR_Integer) 1);
    succeeded = ((MR_tag((MR_Word) Target_8)) == (MR_Integer) 1);
    if (succeeded)
    {
      Label_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Target_8, (MR_Integer) 0))));
      Var_29 = ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_f_0(Label_15);
      succeeded = (Var_29 == (MR_Integer) 0);
    }
    if (succeeded)
      switch (ProfileCall_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String BaseStr_16;
            MR_Word NeedsPrefix_17;
            MR_Word Wrapper_18;

            ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_p_0(Continuation_9, &BaseStr_16, &NeedsPrefix_17, &Wrapper_18);
            switch (NeedsPrefix_17) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_noprof_localcall(");
                  ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(Label_15);
                  mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                  mercury__io__write_string_3_p_0(BaseStr_16);
                  ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_p_0(BaseStr_16, NeedsPrefix_17, Wrapper_18);
                }
                break;
              case (MR_Integer) 1:
                switch (Wrapper_18) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_np_localcall_ent(");
                      ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(Label_15);
                      mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                      mercury__io__write_string_3_p_0(BaseStr_16);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_np_localcall_lab(");
                      ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(Label_15);
                      mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                      mercury__io__write_string_3_p_0(BaseStr_16);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_np_localcall(");
                      ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(Label_15);
                      mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                      ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_p_0(BaseStr_16, NeedsPrefix_17, Wrapper_18);
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_localcall(");
            ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(Label_15);
            mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
            ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(Continuation_9);
          }
          break;
      }
    else
    {
      MR_Word ContLabel_19;
      MR_Word Var_61;

      succeeded = ((MR_tag((MR_Word) Continuation_9)) == (MR_Integer) 1);
      if (succeeded)
      {
        ContLabel_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Continuation_9, (MR_Integer) 0))));
        Var_61 = ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_f_0(ContLabel_19);
        succeeded = (Var_61 == (MR_Integer) 0);
      }
      if (succeeded)
        switch (ProfileCall_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String BaseStr_101;
              MR_Word NeedsPrefix_102;
              MR_Word Wrapper_103;

              ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_p_0(Target_8, &BaseStr_101, &NeedsPrefix_102, &Wrapper_103);
              switch (NeedsPrefix_102) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_noprof_call_localret(");
                    ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_p_0(BaseStr_101, NeedsPrefix_102, Wrapper_103);
                    mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                    ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(ContLabel_19);
                  }
                  break;
                case (MR_Integer) 1:
                  switch (Wrapper_103) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_np_call_localret_ent(");
                        mercury__io__write_string_3_p_0(BaseStr_101);
                        mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                        ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ContLabel_19);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.llds_out.llds_out_instr.output_call\'/6", (MR_String) "calling label");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_np_call_localret(");
                        ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_p_0(BaseStr_101, NeedsPrefix_102, Wrapper_103);
                        mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                        ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ContLabel_19);
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_call_localret(");
              ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(Target_8);
              mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
              ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(ContLabel_19);
            }
            break;
        }
      else
      {
        switch (ProfileCall_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_noprof_call(");
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_call(");
            }
            break;
        }
        ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(Target_8);
        mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
        ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(Continuation_9);
      }
    }
    switch (ProfileCall_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
          ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(CallerLabel_10);
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) ");\n");
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_block_end_2_p_0(void)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "\t}\n");
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_block_start_4_p_0(
  MR_Integer TempR_5,
  MR_Integer TempF_6)
{
  {
    MR_bool succeeded;

    mercury__io__write_string_3_p_0((MR_String) "\t{\n");
    succeeded = (TempR_5 > (MR_Integer) 0);
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "\tMR_Word ");
      ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_p_0((MR_Integer) 1, TempR_5, (MR_String) "r");
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
    succeeded = (TempF_6 > (MR_Integer) 0);
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "\tMR_Float ");
      ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_p_0((MR_Integer) 1, TempF_6, (MR_String) "f");
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_temp_decls_2_5_p_0(
  MR_Integer Next_6,
  MR_Integer Max_7,
  MR_String Type_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Next_6 <= Max_7);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer Var_19;
      MR_Integer next_value_of_Next_6;

      succeeded = (Next_6 > (MR_Integer) 1);
      if (succeeded)
      {
        mercury__io__write_string_3_p_0((MR_String) ", ");
      }
      mercury__io__write_string_3_p_0((MR_String) "MR_temp");
      mercury__io__write_string_3_p_0(Type_8);
      mercury__io__write_int_3_p_0(Next_6);
      Var_19 = (MR_Integer) ((MR_Unsigned) Next_6 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Next_6 = Var_19;
      Next_6 = next_value_of_Next_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_livevals_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Lval_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Lvals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_3_p_0((MR_String) "*\t");
      ll_backend__llds_out__llds_out_data__output_lval_4_p_0(Info_1, Lval_10);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Lvals_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_comment_chars_4_p_0(
  MR_Char HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Char Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Chars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Char next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__1_1 == (MR_Char) 47);
      if (succeeded)
        succeeded = (Char_10 == (MR_Char) 42);
      if (succeeded)
      {
        mercury__io__write_string_3_p_0((MR_String) " *");
      }
      else
      {
        succeeded = (HeadVar__1_1 == (MR_Char) 42);
        if (succeeded)
          succeeded = (Char_10 == (MR_Char) 47);
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) " /");
        }
        else
          mercury__io__write_char_3_p_0(Char_10);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Char_10;
      next_value_of_HeadVar__2_2 = Chars_11;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instruction_decls_6_p_0(
  MR_Word Info_7,
  MR_Word Instr_8,
  MR_Word STATE_VARIABLE_DeclSet_0_13,
  MR_Word * STATE_VARIABLE_DeclSet_14)
{
  {
    MR_Word Uinstr_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr_8, (MR_Integer) 0))));

    ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0(Info_7, Uinstr_11, STATE_VARIABLE_DeclSet_0_13, STATE_VARIABLE_DeclSet_14);
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_DeclSet_23;

    ll_backend__llds_out__llds_out_instr__output_record_foreign_proc_component_decls_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_DeclSet_23);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_DeclSet_23));
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_DeclSet_14;

    ll_backend__llds_out__llds_out_instr__output_record_instruction_decls_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeclSet_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_14));
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0(
  MR_Word Info_7,
  MR_Word Instr_8,
  MR_Word STATE_VARIABLE_DeclSet_0_81,
  MR_Word * STATE_VARIABLE_DeclSet_82)
{
  switch (MR_tag((MR_Word) Instr_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Instr_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_DeclSet_82 = STATE_VARIABLE_DeclSet_0_81;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_DeclSet_82 = STATE_VARIABLE_DeclSet_0_81;
          break;
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_DeclSet_82 = STATE_VARIABLE_DeclSet_0_81;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_DeclSet_82 = STATE_VARIABLE_DeclSet_0_81;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Instrs_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 3))));
            MR_Word Var_166;
            MR_Box conv2_STATE_VARIABLE_DeclSet_82;
            MR_Box conv1_STATE_VARIABLE_IO_84;

            {
              Var_166 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_166, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_2[0]));
              MR_hl_field(MR_mktag(0), Var_166, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0_1));
              MR_hl_field(MR_mktag(0), Var_166, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_166, 3) = ((MR_Box) (Info_7));
            }
            mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_166, Instrs_28, ((MR_Box) (STATE_VARIABLE_DeclSet_0_81)), &conv2_STATE_VARIABLE_DeclSet_82, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_84);
            *STATE_VARIABLE_DeclSet_82 = ((MR_Word) (conv2_STATE_VARIABLE_DeclSet_82));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 1))));
            MR_Word Rval_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_DeclSet_162_162;

            ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(Info_7, Lval_29, STATE_VARIABLE_DeclSet_0_81, &STATE_VARIABLE_DeclSet_162_162);
            ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(Info_7, Rval_30, STATE_VARIABLE_DeclSet_162_162, STATE_VARIABLE_DeclSet_82);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word STATE_VARIABLE_DeclSet_158_158;
            MR_Word Lval_169 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 1))));
            MR_Word Rval_170 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 2))));

            ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(Info_7, Lval_169, STATE_VARIABLE_DeclSet_0_81, &STATE_VARIABLE_DeclSet_158_158);
            ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(Info_7, Rval_170, STATE_VARIABLE_DeclSet_158_158, STATE_VARIABLE_DeclSet_82);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Target_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 1))));
            MR_Word ContLabel_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_DeclSet_154_154;

            ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(Info_7, Target_31, STATE_VARIABLE_DeclSet_0_81, &STATE_VARIABLE_DeclSet_154_154);
            ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(Info_7, ContLabel_32, STATE_VARIABLE_DeclSet_154_154, STATE_VARIABLE_DeclSet_82);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word MaybeFailureContinuation_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 2))));

            if ((MaybeFailureContinuation_38 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_DeclSet_82 = STATE_VARIABLE_DeclSet_0_81;
            else
            {
              MR_Word FailureContinuation_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFailureContinuation_38, (MR_Integer) 0))));

              ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(Info_7, FailureContinuation_39, STATE_VARIABLE_DeclSet_0_81, STATE_VARIABLE_DeclSet_82);
            }
          }
          break;
        case (MR_Integer) 5:
          *STATE_VARIABLE_DeclSet_82 = STATE_VARIABLE_DeclSet_0_81;
          break;
        case (MR_Integer) 6:
          {
            MR_Word CodeAddr_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 1))));

            ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(Info_7, CodeAddr_40, STATE_VARIABLE_DeclSet_0_81, STATE_VARIABLE_DeclSet_82);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Rval_171 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 1))));

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(Info_7, Rval_171, STATE_VARIABLE_DeclSet_0_81, STATE_VARIABLE_DeclSet_82);
          }
          break;
        case (MR_Integer) 8:
          *STATE_VARIABLE_DeclSet_82 = STATE_VARIABLE_DeclSet_0_81;
          break;
        case (MR_Integer) 9:
          {
            MR_Word STATE_VARIABLE_DeclSet_144_144;
            MR_Word Rval_172 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 1))));
            MR_Word Target_173 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 2))));

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(Info_7, Rval_172, STATE_VARIABLE_DeclSet_0_81, &STATE_VARIABLE_DeclSet_144_144);
            ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(Info_7, Target_173, STATE_VARIABLE_DeclSet_144_144, STATE_VARIABLE_DeclSet_82);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Lval_174 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 1))));

            ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(Info_7, Lval_174, STATE_VARIABLE_DeclSet_0_81, STATE_VARIABLE_DeclSet_82);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word Lval_175 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 1))));

            ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(Info_7, Lval_175, STATE_VARIABLE_DeclSet_0_81, STATE_VARIABLE_DeclSet_82);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word MaybeRegionRval_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 7))));
            MR_Word MaybeReuse_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 8))));
            MR_Word STATE_VARIABLE_DeclSet_130_130;
            MR_Word STATE_VARIABLE_DeclSet_132_132;
            MR_Word STATE_VARIABLE_DeclSet_134_134;
            MR_Word Lval_176 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 1))));
            MR_Word Rval_177 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 4))));

            ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(Info_7, Lval_176, STATE_VARIABLE_DeclSet_0_81, &STATE_VARIABLE_DeclSet_130_130);
            ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(Info_7, Rval_177, STATE_VARIABLE_DeclSet_130_130, &STATE_VARIABLE_DeclSet_132_132);
            if ((MaybeRegionRval_46 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_DeclSet_134_134 = STATE_VARIABLE_DeclSet_132_132;
            else
            {
              MR_Word RegionRval_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRegionRval_46, (MR_Integer) 0))));

              ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(Info_7, RegionRval_48, STATE_VARIABLE_DeclSet_132_132, &STATE_VARIABLE_DeclSet_134_134);
            }
            if ((MaybeReuse_47 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_DeclSet_82 = STATE_VARIABLE_DeclSet_134_134;
            else
            {
              MR_Word ReuseRval_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuse_47, (MR_Integer) 0))));
              MR_Word MaybeFlagLval_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuse_47, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_DeclSet_136_136;

              ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(Info_7, ReuseRval_49, STATE_VARIABLE_DeclSet_134_134, &STATE_VARIABLE_DeclSet_136_136);
              if ((MaybeFlagLval_50 == (MR_Word) ((MR_Unsigned) 0U)))
                *STATE_VARIABLE_DeclSet_82 = STATE_VARIABLE_DeclSet_136_136;
              else
              {
                MR_Word FlagLval_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFlagLval_50, (MR_Integer) 0))));

                ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(Info_7, FlagLval_51, STATE_VARIABLE_DeclSet_136_136, STATE_VARIABLE_DeclSet_82);
              }
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Lval_203 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 1))));

            ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(Info_7, Lval_203, STATE_VARIABLE_DeclSet_0_81, STATE_VARIABLE_DeclSet_82);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Rval_207 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 1))));

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(Info_7, Rval_207, STATE_VARIABLE_DeclSet_0_81, STATE_VARIABLE_DeclSet_82);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Rval_179 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 1))));

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(Info_7, Rval_179, STATE_VARIABLE_DeclSet_0_81, STATE_VARIABLE_DeclSet_82);
          }
          break;
        case (MR_Integer) 16:
          *STATE_VARIABLE_DeclSet_82 = STATE_VARIABLE_DeclSet_0_81;
          break;
        case (MR_Integer) 17:
          {
            MR_Word IdRval_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 3))));
            MR_Word NumLval_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 4))));
            MR_Word AddrLval_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 5))));
            MR_Word STATE_VARIABLE_DeclSet_120_120;
            MR_Word STATE_VARIABLE_DeclSet_122_122;

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(Info_7, IdRval_57, STATE_VARIABLE_DeclSet_0_81, &STATE_VARIABLE_DeclSet_120_120);
            ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(Info_7, NumLval_58, STATE_VARIABLE_DeclSet_120_120, &STATE_VARIABLE_DeclSet_122_122);
            ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(Info_7, AddrLval_59, STATE_VARIABLE_DeclSet_122_122, STATE_VARIABLE_DeclSet_82);
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word ValueRval_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 3))));

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(Info_7, ValueRval_61, STATE_VARIABLE_DeclSet_0_81, STATE_VARIABLE_DeclSet_82);
          }
          break;
        case (MR_Integer) 19:
          *STATE_VARIABLE_DeclSet_82 = STATE_VARIABLE_DeclSet_0_81;
          break;
        case (MR_Integer) 20:
          {
            MR_Word Lval_208 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 1))));

            ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(Info_7, Lval_208, STATE_VARIABLE_DeclSet_0_81, STATE_VARIABLE_DeclSet_82);
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word Rval_206 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 1))));

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(Info_7, Rval_206, STATE_VARIABLE_DeclSet_0_81, STATE_VARIABLE_DeclSet_82);
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word Lval_204 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 1))));

            ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(Info_7, Lval_204, STATE_VARIABLE_DeclSet_0_81, STATE_VARIABLE_DeclSet_82);
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word Rval_205 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 1))));

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(Info_7, Rval_205, STATE_VARIABLE_DeclSet_0_81, STATE_VARIABLE_DeclSet_82);
          }
          break;
        case (MR_Integer) 24:
          *STATE_VARIABLE_DeclSet_82 = STATE_VARIABLE_DeclSet_0_81;
          break;
        case (MR_Integer) 25:
          *STATE_VARIABLE_DeclSet_82 = STATE_VARIABLE_DeclSet_0_81;
          break;
        case (MR_Integer) 26:
          *STATE_VARIABLE_DeclSet_82 = STATE_VARIABLE_DeclSet_0_81;
          break;
        case (MR_Integer) 27:
          {
            MR_Word Comps_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 2))));
            MR_Word Var_115;
            MR_Box conv5_STATE_VARIABLE_DeclSet_82;
            MR_Box conv4_STATE_VARIABLE_IO_84;

            {
              Var_115 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_115, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_instr_scalar_common_2[1]));
              MR_hl_field(MR_mktag(0), Var_115, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_instr__output_record_instr_decls_6_p_0_2));
              MR_hl_field(MR_mktag(0), Var_115, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_115, 3) = ((MR_Box) (Info_7));
            }
            mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_115, Comps_63, ((MR_Box) (STATE_VARIABLE_DeclSet_0_81)), &conv5_STATE_VARIABLE_DeclSet_82, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_84);
            *STATE_VARIABLE_DeclSet_82 = ((MR_Word) (conv5_STATE_VARIABLE_DeclSet_82));
          }
          break;
        case (MR_Integer) 28:
          {
            MR_Word Lval_178 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 1))));

            ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(Info_7, Lval_178, STATE_VARIABLE_DeclSet_0_81, STATE_VARIABLE_DeclSet_82);
          }
          break;
        case (MR_Integer) 29:
          {
            MR_Word Child_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_DeclSet_110_110;
            MR_Word Var_112;
            MR_Word Lval_182 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 1))));

            ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(Info_7, Lval_182, STATE_VARIABLE_DeclSet_0_81, &STATE_VARIABLE_DeclSet_110_110);
            {
              Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Child_72));
            }
            ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(Info_7, Var_112, STATE_VARIABLE_DeclSet_110_110, STATE_VARIABLE_DeclSet_82);
          }
          break;
        case (MR_Integer) 30:
          {
            MR_Word Label_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_DeclSet_105_105;
            MR_Word Var_107;
            MR_Word Lval_183 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 1))));

            ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(Info_7, Lval_183, STATE_VARIABLE_DeclSet_0_81, &STATE_VARIABLE_DeclSet_105_105);
            {
              Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Label_73));
            }
            ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(Info_7, Var_107, STATE_VARIABLE_DeclSet_105_105, STATE_VARIABLE_DeclSet_82);
          }
          break;
        case (MR_Integer) 31:
          {
            MR_Word LCLval_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 2))));

            ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(Info_7, LCLval_75, STATE_VARIABLE_DeclSet_0_81, STATE_VARIABLE_DeclSet_82);
          }
          break;
        case (MR_Integer) 32:
          {
            MR_Word LCRval_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 1))));
            MR_Word LCSLval_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 2))));
            MR_Word InternalLabel_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 3))));
            MR_Word STATE_VARIABLE_DeclSet_96_96;
            MR_Word STATE_VARIABLE_DeclSet_98_98;
            MR_Word Var_100;

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(Info_7, LCRval_76, STATE_VARIABLE_DeclSet_0_81, &STATE_VARIABLE_DeclSet_96_96);
            ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(Info_7, LCSLval_77, STATE_VARIABLE_DeclSet_96_96, &STATE_VARIABLE_DeclSet_98_98);
            {
              Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (InternalLabel_78));
            }
            ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(Info_7, Var_100, STATE_VARIABLE_DeclSet_98_98, STATE_VARIABLE_DeclSet_82);
          }
          break;
        case (MR_Integer) 33:
          {
            MR_Word LCSRval_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 2))));
            MR_Word ChildLabel_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 3))));
            MR_Word STATE_VARIABLE_DeclSet_89_89;
            MR_Word STATE_VARIABLE_DeclSet_91_91;
            MR_Word Var_93;
            MR_Word LCRval_184 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 1))));

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(Info_7, LCRval_184, STATE_VARIABLE_DeclSet_0_81, &STATE_VARIABLE_DeclSet_89_89);
            ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(Info_7, LCSRval_79, STATE_VARIABLE_DeclSet_89_89, &STATE_VARIABLE_DeclSet_91_91);
            {
              Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (ChildLabel_80));
            }
            ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(Info_7, Var_93, STATE_VARIABLE_DeclSet_91_91, STATE_VARIABLE_DeclSet_82);
          }
          break;
        case (MR_Integer) 34:
          {
            MR_Word STATE_VARIABLE_DeclSet_85_85;
            MR_Word LCRval_185 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 1))));
            MR_Word LCSRval_186 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr_8, (MR_Integer) 2))));

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(Info_7, LCRval_185, STATE_VARIABLE_DeclSet_0_81, &STATE_VARIABLE_DeclSet_85_85);
            ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(Info_7, LCSRval_186, STATE_VARIABLE_DeclSet_85_85, STATE_VARIABLE_DeclSet_82);
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
  {
    MR_bool succeeded;

    succeeded = ll_backend__llds_out__llds_out_instr____Unify____after_layout_label_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr____Compare____after_layout_label_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__llds_out__llds_out_instr____Compare____after_layout_label_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_instr____Unify____label_output_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__llds_out__llds_out_instr____Unify____label_output_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_instr____Compare____label_output_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__llds_out__llds_out_instr____Compare____label_output_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__llds_out__llds_out_instr__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.llds_out.llds_out_instr.
