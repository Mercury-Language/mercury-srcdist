/*
** Automatically generated from `optimize.m'
** by the Mercury compiler,
** version rotd-2023-06-08
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


// :- module ll_backend.optimize.
// :- implementation.

/*
INIT mercury__ll_backend__optimize__init
ENDINIT
*/

#include "ll_backend.optimize.mih"


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
#include "dir.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "io.call_system.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.delay_slot.mih"
#include "ll_backend.dupelim.mih"
#include "ll_backend.frameopt.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.jumpopt.mih"
#include "ll_backend.labelopt.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.livemap.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_debug.mih"
#include "ll_backend.opt_util.mih"
#include "ll_backend.peephole.mih"
#include "ll_backend.reassign.mih"
#include "ll_backend.stdlabel.mih"
#include "ll_backend.trace_gen.mih"
#include "ll_backend.use_local_vars.mih"
#include "ll_backend.wrap_blocks.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s {
  MR_bool ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded;
  MR_Word ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStrs_12;
  MR_Integer ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__PredIdInt_16;
  jmp_buf ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__commit_0;
  MR_String ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStr_47;
  MR_Integer ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredId_48;
  MR_Box ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__conv0_DebugOptPredIdStr_47;
  jmp_buf ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__commit_1;
  MR_String ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStr_45;
  MR_Integer ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredId_46;
  MR_Box ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__conv1_DebugOptPredIdStr_45;
};


static const MR_FA_TypeInfo_Struct1 ll_backend__optimize__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo ll_backend__optimize__ll_backend__optimize__field_types_llds_opt_info_0_0[26];

static const MR_ConstString ll_backend__optimize__ll_backend__optimize__field_names_llds_opt_info_0_0[26];

static const MR_DuArgLocn ll_backend__optimize__ll_backend__optimize__field_locns_llds_opt_info_0_0[26];

static const MR_DuFunctorDesc ll_backend__optimize__ll_backend__optimize__du_functor_desc_llds_opt_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_stag_ordered_llds_opt_info_0_0[1];

static const MR_DuPtagLayout ll_backend__optimize__ll_backend__optimize__du_ptag_ordered_llds_opt_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_name_ordered_llds_opt_info_0[1];

static const MR_Integer ll_backend__optimize__ll_backend__optimize__functor_number_map_llds_opt_info_0[1];

static const MR_FA_TypeInfo_Struct1 ll_backend__optimize__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_PseudoTypeInfo ll_backend__optimize__ll_backend__optimize__field_types_opt_debug_info_0_0[6];

static const MR_ConstString ll_backend__optimize__ll_backend__optimize__field_names_opt_debug_info_0_0[6];

static const MR_DuFunctorDesc ll_backend__optimize__ll_backend__optimize__du_functor_desc_opt_debug_info_0_0;

static const MR_DuFunctorDesc ll_backend__optimize__ll_backend__optimize__du_functor_desc_opt_debug_info_0_1;

static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_stag_ordered_opt_debug_info_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_stag_ordered_opt_debug_info_0_1[1];

static const MR_DuPtagLayout ll_backend__optimize__ll_backend__optimize__du_ptag_ordered_opt_debug_info_0[2];

static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_name_ordered_opt_debug_info_0[2];

static const MR_Integer ll_backend__optimize__ll_backend__optimize__functor_number_map_opt_debug_info_0[2];

static void MR_CALL 
ll_backend__optimize____Compare____opt_debug_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__optimize____Unify____opt_debug_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__optimize____Compare____llds_opt_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__optimize____Unify____llds_opt_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__optimize__escape_dir_char_3_p_0(
  MR_Char Char_4,
  MR_String STATE_VARIABLE_Str_0_6,
  MR_String * STATE_VARIABLE_Str_7);

static MR_Word MR_CALL 
ll_backend__optimize__make_internal_label_for_proc_label_2_f_0(
  MR_Word ProcLabel_4,
  MR_Integer LabelNum_5);

static MR_Box MR_CALL 
ll_backend__optimize__optimize_proc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
ll_backend__optimize__init_llds_opt_info_2_f_0(
  MR_Word Globals_4,
  MR_Word ModuleName_5);

static void MR_CALL 
ll_backend__optimize__optimize_last_8_p_0(
  MR_Word Info_9,
  MR_Word LayoutLabelSet_10,
  MR_Word ProcLabel_11,
  MR_Word STATE_VARIABLE_LabelNumCounter_0_25,
  MR_Word * STATE_VARIABLE_LabelNumCounter_26,
  MR_Word STATE_VARIABLE_OptDebugInfo_0_27,
  MR_Word STATE_VARIABLE_Instrs_0_28,
  MR_Word * STATE_VARIABLE_Instrs_29);

static void MR_CALL 
ll_backend__optimize__optimize_middle_12_p_0(
  MR_Word Info_13,
  MR_Word Final_14,
  MR_Word LayoutLabelSet_15,
  MR_Word ProcLabel_16,
  MR_Word CodeModel_17,
  MR_Word MayAlterRtti_18,
  MR_Word STATE_VARIABLE_LabelNumCounter_0_42,
  MR_Word * STATE_VARIABLE_LabelNumCounter_43,
  MR_Word STATE_VARIABLE_OptDebugInfo_0_44,
  MR_Word * STATE_VARIABLE_OptDebugInfo_45,
  MR_Word STATE_VARIABLE_Instrs_0_46,
  MR_Word * STATE_VARIABLE_Instrs_47);

static void MR_CALL 
ll_backend__optimize__optimize_repeat_11_p_0(
  MR_Word Info_12,
  MR_Integer CurIter_13,
  MR_Word LayoutLabelSet_14,
  MR_Word ProcLabel_15,
  MR_Word MayAlterRtti_16,
  MR_Word STATE_VARIABLE_LabelNumCounter_0_23,
  MR_Word * STATE_VARIABLE_LabelNumCounter_24,
  MR_Word STATE_VARIABLE_OptDebugInfo_0_25,
  MR_Word * STATE_VARIABLE_OptDebugInfo_26,
  MR_Word STATE_VARIABLE_Instrs_0_27,
  MR_Word * STATE_VARIABLE_Instrs_28);

static void MR_CALL 
ll_backend__optimize__optimize_repeated_12_p_0(
  MR_Word Info_13,
  MR_Word Final_14,
  MR_Word LayoutLabelSet_15,
  MR_Word ProcLabel_16,
  MR_Word MayAlterRtti_17,
  MR_Word STATE_VARIABLE_LabelNumCounter_0_40,
  MR_Word * STATE_VARIABLE_LabelNumCounter_41,
  MR_Word STATE_VARIABLE_OptDebugInfo_0_42,
  MR_Word * STATE_VARIABLE_OptDebugInfo_43,
  MR_Word STATE_VARIABLE_Instrs_0_44,
  MR_Word * STATE_VARIABLE_Instrs_45,
  MR_Word * Mod_21);

static void MR_CALL 
ll_backend__optimize__optimize_initial_11_p_0(
  MR_Word Info_12,
  MR_Word LayoutLabelSet_13,
  MR_Word ProcLabel_14,
  MR_Word CodeModel_15,
  MR_Word MayAlterRtti_16,
  MR_Word STATE_VARIABLE_LabelNumCounter_0_26,
  MR_Word * STATE_VARIABLE_LabelNumCounter_27,
  MR_Word STATE_VARIABLE_OptDebugInfo_0_28,
  MR_Word * STATE_VARIABLE_OptDebugInfo_29,
  MR_Word STATE_VARIABLE_Instrs_0_30,
  MR_Word * STATE_VARIABLE_Instrs_31);

static void MR_CALL 
ll_backend__optimize__get_opt_progress_output_stream_4_p_0(
  MR_Word Info_5,
  MR_Word * ProgressStream_6);

static void MR_CALL 
ll_backend__optimize__maybe_opt_debug_8_p_0(
  MR_Word Info_9,
  MR_Word Instrs_10,
  MR_Word Counter_11,
  MR_String Suffix_12,
  MR_String Msg_13,
  MR_Word ProcLabel_14,
  MR_Word STATE_VARIABLE_OptDebugInfo_0_35,
  MR_Word * STATE_VARIABLE_OptDebugInfo_36);

static MR_String MR_CALL 
ll_backend__optimize__num_to_str_1_f_0(
  MR_Integer N_3);

static void MR_CALL 
ll_backend__optimize__output_first_opt_debug_7_p_0(
  MR_Word Info_8,
  MR_String FileName_9,
  MR_Word ProcLabel_10,
  MR_Word Instrs0_11,
  MR_Word Counter_12);

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0(
  MR_Word Info_6,
  MR_String Name_7,
  MR_Integer Arity_8,
  MR_Word PredProcId_9,
  MR_Word * MaybeBaseName_10);

static void MR_CALL 
ll_backend__optimize__mangle_name_as_filename_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_String MR_CALL 
ll_backend__optimize__mangle_name_as_filename_1_f_0(
  MR_String Str0_3);

static MR_String MR_CALL 
ll_backend__optimize__opt_subdir_name_0_f_0(void);

static MR_bool MR_CALL 
ll_backend__optimize____Unify____llds_opt_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__optimize____Compare____llds_opt_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__optimize____Unify____opt_debug_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__optimize____Compare____opt_debug_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__optimize_scalar_common_1[2][2];

static /* final */ const MR_Box ll_backend__optimize_scalar_common_2[2][6];

static /* final */ const MR_Box ll_backend__optimize_scalar_common_3[1][3];




static /* final */ const MR_Box ll_backend__optimize_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
};

static /* final */ const MR_Box ll_backend__optimize_scalar_common_2[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
};

static /* final */ const MR_Box ll_backend__optimize_scalar_common_3[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ll_backend__optimize_scalar_common_2[0])),
    ((MR_Box) (ll_backend__optimize__mangle_name_as_filename_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 ll_backend__optimize__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo ll_backend__optimize__ll_backend__optimize__field_types_llds_opt_info_0_0[26] = {
  (MR_PseudoTypeInfo) (&ll_backend__optimize__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&ll_backend__optimize__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_gc_method_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_maybe_auto_comments_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_opt_checked_nondet_tailcalls_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_opt_delay_slot_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_opt_dups_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_opt_frames_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_opt_jumps_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_opt_fulljumps_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_opt_labels_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_opt_peep_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_opt_peep_mkword_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_opt_reassign_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_pessimize_tailcalls_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_standardize_labels_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_use_local_vars_0)
};

static const MR_ConstString ll_backend__optimize__ll_backend__optimize__field_names_llds_opt_info_0_0[26] = {
  (MR_String) "lopt_debug_opt_pred_ids",
  (MR_String) "lopt_debug_opt_pred_names",
  (MR_String) "lopt_num_real_r_regs",
  (MR_String) "lopt_local_vars_access_threshold",
  (MR_String) "lopt_opt_repeat",
  (MR_String) "lopt_globals",
  (MR_String) "lopt_module_name",
  (MR_String) "lopt_gc_method",
  (MR_String) "lopt_debug_opt",
  (MR_String) "lopt_auto_comments",
  (MR_String) "lopt_frameopt_comments",
  (MR_String) "lopt_detailed_statistics",
  (MR_String) "lopt_very_verbose",
  (MR_String) "lopt_checked_nondet_tailcalls",
  (MR_String) "lopt_opt_delay_slots",
  (MR_String) "lopt_opt_dups",
  (MR_String) "lopt_opt_frames",
  (MR_String) "lopt_opt_jumps",
  (MR_String) "lopt_opt_fulljumps",
  (MR_String) "lopt_opt_labels",
  (MR_String) "lopt_opt_peep",
  (MR_String) "lopt_opt_peep_mkword",
  (MR_String) "lopt_opt_reassign",
  (MR_String) "lopt_pes_tailcalls",
  (MR_String) "lopt_std_labels",
  (MR_String) "lopt_use_local_vars"
};

static const MR_DuArgLocn ll_backend__optimize__ll_backend__optimize__field_locns_llds_opt_info_0_0[26] = {
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
    (MR_Integer) 18,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 17,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 16,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 15,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 14,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 13,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 12,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 11,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 10,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 9,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 8,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 7,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ll_backend__optimize__ll_backend__optimize__du_functor_desc_llds_opt_info_0_0 = {
  (MR_String) "llds_opt_info",
  INT16_C(26),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__optimize__ll_backend__optimize__field_types_llds_opt_info_0_0,
  ll_backend__optimize__ll_backend__optimize__field_names_llds_opt_info_0_0,
  ll_backend__optimize__ll_backend__optimize__field_locns_llds_opt_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_stag_ordered_llds_opt_info_0_0[1] = { &ll_backend__optimize__ll_backend__optimize__du_functor_desc_llds_opt_info_0_0 };

static const MR_DuPtagLayout ll_backend__optimize__ll_backend__optimize__du_ptag_ordered_llds_opt_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__optimize__ll_backend__optimize__du_stag_ordered_llds_opt_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_name_ordered_llds_opt_info_0[1] = { &ll_backend__optimize__ll_backend__optimize__du_functor_desc_llds_opt_info_0_0 };

static const MR_Integer ll_backend__optimize__ll_backend__optimize__functor_number_map_llds_opt_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__optimize__ll_backend__optimize__type_ctor_info_llds_opt_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__optimize____Unify____llds_opt_info_0_0_10001)),
  ((MR_Box) (ll_backend__optimize____Compare____llds_opt_info_0_0_10001)),
  (MR_String) "ll_backend.optimize",
  (MR_String) "llds_opt_info",
  { ll_backend__optimize__ll_backend__optimize__du_name_ordered_llds_opt_info_0 },
  { ll_backend__optimize__ll_backend__optimize__du_ptag_ordered_llds_opt_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__optimize__ll_backend__optimize__functor_number_map_llds_opt_info_0,

};

static const MR_FA_TypeInfo_Struct1 ll_backend__optimize__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0) }
};

static const MR_PseudoTypeInfo ll_backend__optimize__ll_backend__optimize__field_types_opt_debug_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&ll_backend__optimize__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0)
};

static const MR_ConstString ll_backend__optimize__ll_backend__optimize__field_names_opt_debug_info_0_0[6] = {
  (MR_String) "odi_dump_file_base_name",
  (MR_String) "odi_last_dump_num",
  (MR_String) "odi_last_dump_file_name",
  (MR_String) "odi_last_instrs_dump_num",
  (MR_String) "odi_last_instrs_dump_file_name",
  (MR_String) "odi_last_dump_instr_seq"
};

static const MR_DuFunctorDesc ll_backend__optimize__ll_backend__optimize__du_functor_desc_opt_debug_info_0_0 = {
  (MR_String) "opt_debug_info",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__optimize__ll_backend__optimize__field_types_opt_debug_info_0_0,
  ll_backend__optimize__ll_backend__optimize__field_names_opt_debug_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc ll_backend__optimize__ll_backend__optimize__du_functor_desc_opt_debug_info_0_1 = {
  (MR_String) "no_opt_debug_info",
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

static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_stag_ordered_opt_debug_info_0_0[1] = { &ll_backend__optimize__ll_backend__optimize__du_functor_desc_opt_debug_info_0_1 };

static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_stag_ordered_opt_debug_info_0_1[1] = { &ll_backend__optimize__ll_backend__optimize__du_functor_desc_opt_debug_info_0_0 };

static const MR_DuPtagLayout ll_backend__optimize__ll_backend__optimize__du_ptag_ordered_opt_debug_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__optimize__ll_backend__optimize__du_stag_ordered_opt_debug_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__optimize__ll_backend__optimize__du_stag_ordered_opt_debug_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_name_ordered_opt_debug_info_0[2] = {
  &ll_backend__optimize__ll_backend__optimize__du_functor_desc_opt_debug_info_0_1,
  &ll_backend__optimize__ll_backend__optimize__du_functor_desc_opt_debug_info_0_0
};

static const MR_Integer ll_backend__optimize__ll_backend__optimize__functor_number_map_opt_debug_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__optimize__ll_backend__optimize__type_ctor_info_opt_debug_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__optimize____Unify____opt_debug_info_0_0_10001)),
  ((MR_Box) (ll_backend__optimize____Compare____opt_debug_info_0_0_10001)),
  (MR_String) "ll_backend.optimize",
  (MR_String) "opt_debug_info",
  { ll_backend__optimize__ll_backend__optimize__du_name_ordered_opt_debug_info_0 },
  { ll_backend__optimize__ll_backend__optimize__du_ptag_ordered_opt_debug_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__optimize__ll_backend__optimize__functor_number_map_opt_debug_info_0,

};

static void MR_CALL 
ll_backend__optimize____Compare____opt_debug_info_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 5))));
    MR_String Var_42 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer Var_43 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
    MR_String Var_44 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer Var_45 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_String Var_46 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
      MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 3))));
      MR_String ArgY5_17 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 5))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, Var_46, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        succeeded = (Var_45 < ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_45 > ArgY2_8);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_12, Var_44, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            succeeded = (Var_43 < ArgY4_14);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_43 > ArgY4_14);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult4_15 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult5_18, Var_42, ArgY5_17);
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__optimize_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_41)), ((MR_Box) (ArgY6_20)));
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__optimize____Unify____opt_debug_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_16 == CastX_15);
  }
  else
  {
    MR_Word TypeInfo_19_19;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4;
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6;
    MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_String ArgY3_8;
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10;
    MR_String ArgX5_11 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 4))));
    MR_String ArgY5_12;
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_8 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      ArgY4_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
      ArgY5_12 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 4))));
      ArgY6_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 5))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = (strcmp(ArgX5_11, ArgY5_12) == 0);
              if (succeeded)
              {
                TypeInfo_19_19 = (MR_Word) (&ll_backend__optimize_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
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
ll_backend__optimize____Compare____llds_opt_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_81 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_82 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_81 == CastY_82);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 18)) & (MR_Integer) 7);
    MR_Word ArgY8_26 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))) >> 18)) & (MR_Integer) 7);
    MR_Word ArgX9_28 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    MR_Word ArgY9_29 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    MR_Word ArgX10_31 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 16)) & (MR_Integer) 1);
    MR_Word ArgY10_32 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))) >> 16)) & (MR_Integer) 1);
    MR_Word ArgX11_34 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 15)) & (MR_Integer) 1);
    MR_Word ArgY11_35 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))) >> 15)) & (MR_Integer) 1);
    MR_Word ArgX12_37 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 14)) & (MR_Integer) 1);
    MR_Word ArgY12_38 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))) >> 14)) & (MR_Integer) 1);
    MR_Word ArgX13_40 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 13)) & (MR_Integer) 1);
    MR_Word ArgY13_41 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))) >> 13)) & (MR_Integer) 1);
    MR_Word ArgX14_43 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 12)) & (MR_Integer) 1);
    MR_Word ArgY14_44 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))) >> 12)) & (MR_Integer) 1);
    MR_Word ArgX15_46 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 11)) & (MR_Integer) 1);
    MR_Word ArgY15_47 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))) >> 11)) & (MR_Integer) 1);
    MR_Word ArgX16_49 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 10)) & (MR_Integer) 1);
    MR_Word ArgY16_50 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))) >> 10)) & (MR_Integer) 1);
    MR_Word ArgX17_52 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 9)) & (MR_Integer) 1);
    MR_Word ArgY17_53 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))) >> 9)) & (MR_Integer) 1);
    MR_Word ArgX18_55 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 8)) & (MR_Integer) 1);
    MR_Word ArgY18_56 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))) >> 8)) & (MR_Integer) 1);
    MR_Word ArgX19_58 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgY19_59 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgX20_61 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgY20_62 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgX21_64 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgY21_65 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgX22_67 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY22_68 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX23_70 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY23_71 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX24_73 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY24_74 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX25_76 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY25_77 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX26_79 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) & (MR_Integer) 1);
    MR_Word ArgY26_80 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__optimize_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__optimize_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (ArgX5_16 > ArgY5_17);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              libs__globals____Compare____globals_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;
                  MR_Integer Var_109 = (MR_Integer) (ArgX8_25);
                  MR_Integer Var_110 = (MR_Integer) (ArgY8_26);

                  succeeded = (Var_109 < Var_110);
                  if (succeeded)
                  {
                    SubResult8_27 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_109 > Var_110);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult8_27 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;
                    MR_Integer Var_111 = (MR_Integer) (ArgX9_28);
                    MR_Integer Var_112 = (MR_Integer) (ArgY9_29);

                    succeeded = (Var_111 < Var_112);
                    if (succeeded)
                    {
                      SubResult9_30 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_111 > Var_112);
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
                      MR_Word SubResult10_33;
                      MR_Integer Var_113 = (MR_Integer) (ArgX10_31);
                      MR_Integer Var_114 = (MR_Integer) (ArgY10_32);

                      succeeded = (Var_113 < Var_114);
                      if (succeeded)
                      {
                        SubResult10_33 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_113 > Var_114);
                        if (succeeded)
                        {
                          SubResult10_33 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult10_33 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;
                        MR_Integer Var_115 = (MR_Integer) (ArgX11_34);
                        MR_Integer Var_116 = (MR_Integer) (ArgY11_35);

                        succeeded = (Var_115 < Var_116);
                        if (succeeded)
                        {
                          SubResult11_36 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_115 > Var_116);
                          if (succeeded)
                          {
                            SubResult11_36 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult11_36 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;
                          MR_Integer Var_117 = (MR_Integer) (ArgX12_37);
                          MR_Integer Var_118 = (MR_Integer) (ArgY12_38);

                          succeeded = (Var_117 < Var_118);
                          if (succeeded)
                          {
                            SubResult12_39 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_117 > Var_118);
                            if (succeeded)
                            {
                              SubResult12_39 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult12_39 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Word SubResult13_42;
                            MR_Integer Var_119 = (MR_Integer) (ArgX13_40);
                            MR_Integer Var_120 = (MR_Integer) (ArgY13_41);

                            succeeded = (Var_119 < Var_120);
                            if (succeeded)
                            {
                              SubResult13_42 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_119 > Var_120);
                              if (succeeded)
                              {
                                SubResult13_42 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult13_42 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;
                              MR_Integer Var_121 = (MR_Integer) (ArgX14_43);
                              MR_Integer Var_122 = (MR_Integer) (ArgY14_44);

                              succeeded = (Var_121 < Var_122);
                              if (succeeded)
                              {
                                SubResult14_45 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (Var_121 > Var_122);
                                if (succeeded)
                                {
                                  SubResult14_45 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = MR_TRUE;
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    SubResult14_45 = (MR_Integer) 0;
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                              {
                                MR_Word SubResult15_48;
                                MR_Integer Var_123 = (MR_Integer) (ArgX15_46);
                                MR_Integer Var_124 = (MR_Integer) (ArgY15_47);

                                succeeded = (Var_123 < Var_124);
                                if (succeeded)
                                {
                                  SubResult15_48 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = (Var_123 > Var_124);
                                  if (succeeded)
                                  {
                                    SubResult15_48 = (MR_Integer) 2;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = MR_TRUE;
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      SubResult15_48 = (MR_Integer) 0;
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult15_48;
                                else
                                {
                                  MR_Word SubResult16_51;
                                  MR_Integer Var_125 = (MR_Integer) (ArgX16_49);
                                  MR_Integer Var_126 = (MR_Integer) (ArgY16_50);

                                  succeeded = (Var_125 < Var_126);
                                  if (succeeded)
                                  {
                                    SubResult16_51 = (MR_Integer) 1;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = (Var_125 > Var_126);
                                    if (succeeded)
                                    {
                                      SubResult16_51 = (MR_Integer) 2;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = MR_TRUE;
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                      {
                                        SubResult16_51 = (MR_Integer) 0;
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                  }
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult16_51;
                                  else
                                  {
                                    MR_Word SubResult17_54;
                                    MR_Integer Var_127 = (MR_Integer) (ArgX17_52);
                                    MR_Integer Var_128 = (MR_Integer) (ArgY17_53);

                                    succeeded = (Var_127 < Var_128);
                                    if (succeeded)
                                    {
                                      SubResult17_54 = (MR_Integer) 1;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = (Var_127 > Var_128);
                                      if (succeeded)
                                      {
                                        SubResult17_54 = (MR_Integer) 2;
                                        succeeded = MR_TRUE;
                                      }
                                      else
                                      {
                                        succeeded = MR_TRUE;
                                        succeeded = !(succeeded);
                                        if (succeeded)
                                        {
                                          SubResult17_54 = (MR_Integer) 0;
                                          succeeded = MR_TRUE;
                                        }
                                      }
                                    }
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult17_54;
                                    else
                                    {
                                      MR_Word SubResult18_57;
                                      MR_Integer Var_129 = (MR_Integer) (ArgX18_55);
                                      MR_Integer Var_130 = (MR_Integer) (ArgY18_56);

                                      succeeded = (Var_129 < Var_130);
                                      if (succeeded)
                                      {
                                        SubResult18_57 = (MR_Integer) 1;
                                        succeeded = MR_TRUE;
                                      }
                                      else
                                      {
                                        succeeded = (Var_129 > Var_130);
                                        if (succeeded)
                                        {
                                          SubResult18_57 = (MR_Integer) 2;
                                          succeeded = MR_TRUE;
                                        }
                                        else
                                        {
                                          succeeded = MR_TRUE;
                                          succeeded = !(succeeded);
                                          if (succeeded)
                                          {
                                            SubResult18_57 = (MR_Integer) 0;
                                            succeeded = MR_TRUE;
                                          }
                                        }
                                      }
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult18_57;
                                      else
                                      {
                                        MR_Word SubResult19_60;
                                        MR_Integer Var_131 = (MR_Integer) (ArgX19_58);
                                        MR_Integer Var_132 = (MR_Integer) (ArgY19_59);

                                        succeeded = (Var_131 < Var_132);
                                        if (succeeded)
                                        {
                                          SubResult19_60 = (MR_Integer) 1;
                                          succeeded = MR_TRUE;
                                        }
                                        else
                                        {
                                          succeeded = (Var_131 > Var_132);
                                          if (succeeded)
                                          {
                                            SubResult19_60 = (MR_Integer) 2;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            succeeded = MR_TRUE;
                                            succeeded = !(succeeded);
                                            if (succeeded)
                                            {
                                              SubResult19_60 = (MR_Integer) 0;
                                              succeeded = MR_TRUE;
                                            }
                                          }
                                        }
                                        if (succeeded)
                                          *HeadVar__1_1 = SubResult19_60;
                                        else
                                        {
                                          MR_Word SubResult20_63;
                                          MR_Integer Var_133 = (MR_Integer) (ArgX20_61);
                                          MR_Integer Var_134 = (MR_Integer) (ArgY20_62);

                                          succeeded = (Var_133 < Var_134);
                                          if (succeeded)
                                          {
                                            SubResult20_63 = (MR_Integer) 1;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            succeeded = (Var_133 > Var_134);
                                            if (succeeded)
                                            {
                                              SubResult20_63 = (MR_Integer) 2;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              succeeded = MR_TRUE;
                                              succeeded = !(succeeded);
                                              if (succeeded)
                                              {
                                                SubResult20_63 = (MR_Integer) 0;
                                                succeeded = MR_TRUE;
                                              }
                                            }
                                          }
                                          if (succeeded)
                                            *HeadVar__1_1 = SubResult20_63;
                                          else
                                          {
                                            MR_Word SubResult21_66;
                                            MR_Integer Var_135 = (MR_Integer) (ArgX21_64);
                                            MR_Integer Var_136 = (MR_Integer) (ArgY21_65);

                                            succeeded = (Var_135 < Var_136);
                                            if (succeeded)
                                            {
                                              SubResult21_66 = (MR_Integer) 1;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              succeeded = (Var_135 > Var_136);
                                              if (succeeded)
                                              {
                                                SubResult21_66 = (MR_Integer) 2;
                                                succeeded = MR_TRUE;
                                              }
                                              else
                                              {
                                                succeeded = MR_TRUE;
                                                succeeded = !(succeeded);
                                                if (succeeded)
                                                {
                                                  SubResult21_66 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
                                              }
                                            }
                                            if (succeeded)
                                              *HeadVar__1_1 = SubResult21_66;
                                            else
                                            {
                                              MR_Word SubResult22_69;
                                              MR_Integer Var_137 = (MR_Integer) (ArgX22_67);
                                              MR_Integer Var_138 = (MR_Integer) (ArgY22_68);

                                              succeeded = (Var_137 < Var_138);
                                              if (succeeded)
                                              {
                                                SubResult22_69 = (MR_Integer) 1;
                                                succeeded = MR_TRUE;
                                              }
                                              else
                                              {
                                                succeeded = (Var_137 > Var_138);
                                                if (succeeded)
                                                {
                                                  SubResult22_69 = (MR_Integer) 2;
                                                  succeeded = MR_TRUE;
                                                }
                                                else
                                                {
                                                  succeeded = MR_TRUE;
                                                  succeeded = !(succeeded);
                                                  if (succeeded)
                                                  {
                                                    SubResult22_69 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                }
                                              }
                                              if (succeeded)
                                                *HeadVar__1_1 = SubResult22_69;
                                              else
                                              {
                                                MR_Word SubResult23_72;
                                                MR_Integer Var_139 = (MR_Integer) (ArgX23_70);
                                                MR_Integer Var_140 = (MR_Integer) (ArgY23_71);

                                                succeeded = (Var_139 < Var_140);
                                                if (succeeded)
                                                {
                                                  SubResult23_72 = (MR_Integer) 1;
                                                  succeeded = MR_TRUE;
                                                }
                                                else
                                                {
                                                  succeeded = (Var_139 > Var_140);
                                                  if (succeeded)
                                                  {
                                                    SubResult23_72 = (MR_Integer) 2;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  else
                                                  {
                                                    succeeded = MR_TRUE;
                                                    succeeded = !(succeeded);
                                                    if (succeeded)
                                                    {
                                                      SubResult23_72 = (MR_Integer) 0;
                                                      succeeded = MR_TRUE;
                                                    }
                                                  }
                                                }
                                                if (succeeded)
                                                  *HeadVar__1_1 = SubResult23_72;
                                                else
                                                {
                                                  MR_Word SubResult24_75;
                                                  MR_Integer Var_141 = (MR_Integer) (ArgX24_73);
                                                  MR_Integer Var_142 = (MR_Integer) (ArgY24_74);

                                                  succeeded = (Var_141 < Var_142);
                                                  if (succeeded)
                                                  {
                                                    SubResult24_75 = (MR_Integer) 1;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  else
                                                  {
                                                    succeeded = (Var_141 > Var_142);
                                                    if (succeeded)
                                                    {
                                                      SubResult24_75 = (MR_Integer) 2;
                                                      succeeded = MR_TRUE;
                                                    }
                                                    else
                                                    {
                                                      succeeded = MR_TRUE;
                                                      succeeded = !(succeeded);
                                                      if (succeeded)
                                                      {
                                                        SubResult24_75 = (MR_Integer) 0;
                                                        succeeded = MR_TRUE;
                                                      }
                                                    }
                                                  }
                                                  if (succeeded)
                                                    *HeadVar__1_1 = SubResult24_75;
                                                  else
                                                  {
                                                    MR_Word SubResult25_78;
                                                    MR_Integer Var_143 = (MR_Integer) (ArgX25_76);
                                                    MR_Integer Var_144 = (MR_Integer) (ArgY25_77);

                                                    succeeded = (Var_143 < Var_144);
                                                    if (succeeded)
                                                    {
                                                      SubResult25_78 = (MR_Integer) 1;
                                                      succeeded = MR_TRUE;
                                                    }
                                                    else
                                                    {
                                                      succeeded = (Var_143 > Var_144);
                                                      if (succeeded)
                                                      {
                                                        SubResult25_78 = (MR_Integer) 2;
                                                        succeeded = MR_TRUE;
                                                      }
                                                      else
                                                      {
                                                        succeeded = MR_TRUE;
                                                        succeeded = !(succeeded);
                                                        if (succeeded)
                                                        {
                                                          SubResult25_78 = (MR_Integer) 0;
                                                          succeeded = MR_TRUE;
                                                        }
                                                      }
                                                    }
                                                    if (succeeded)
                                                      *HeadVar__1_1 = SubResult25_78;
                                                    else
                                                    {
                                                      MR_Integer Var_145 = (MR_Integer) (ArgX26_79);
                                                      MR_Integer Var_146 = (MR_Integer) (ArgY26_80);

                                                      succeeded = (Var_145 < Var_146);
                                                      if (succeeded)
                                                        *HeadVar__1_1 = (MR_Integer) 1;
                                                      else
                                                      {
                                                        succeeded = (Var_145 > Var_146);
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

static MR_bool MR_CALL 
ll_backend__optimize____Unify____llds_opt_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_55 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_56 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_55 == CastY_56);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_58_58;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))) >> 18)) & (MR_Integer) 7);
    MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 18)) & (MR_Integer) 7);
    MR_Word ArgX9_19 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    MR_Word ArgY9_20 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    MR_Word ArgX10_21 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))) >> 16)) & (MR_Integer) 1);
    MR_Word ArgY10_22 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 16)) & (MR_Integer) 1);
    MR_Word ArgX11_23 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))) >> 15)) & (MR_Integer) 1);
    MR_Word ArgY11_24 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 15)) & (MR_Integer) 1);
    MR_Word ArgX12_25 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))) >> 14)) & (MR_Integer) 1);
    MR_Word ArgY12_26 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 14)) & (MR_Integer) 1);
    MR_Word ArgX13_27 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))) >> 13)) & (MR_Integer) 1);
    MR_Word ArgY13_28 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 13)) & (MR_Integer) 1);
    MR_Word ArgX14_29 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))) >> 12)) & (MR_Integer) 1);
    MR_Word ArgY14_30 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 12)) & (MR_Integer) 1);
    MR_Word ArgX15_31 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))) >> 11)) & (MR_Integer) 1);
    MR_Word ArgY15_32 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 11)) & (MR_Integer) 1);
    MR_Word ArgX16_33 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))) >> 10)) & (MR_Integer) 1);
    MR_Word ArgY16_34 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 10)) & (MR_Integer) 1);
    MR_Word ArgX17_35 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))) >> 9)) & (MR_Integer) 1);
    MR_Word ArgY17_36 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 9)) & (MR_Integer) 1);
    MR_Word ArgX18_37 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))) >> 8)) & (MR_Integer) 1);
    MR_Word ArgY18_38 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 8)) & (MR_Integer) 1);
    MR_Word ArgX19_39 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgY19_40 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgX20_41 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgY20_42 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgX21_43 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgY21_44 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgX22_45 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY22_46 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX23_47 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY23_48 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX24_49 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY24_50 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX25_51 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY25_52 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX26_53 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))) & (MR_Integer) 1);
    MR_Word ArgY26_54 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) & (MR_Integer) 1);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__optimize_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_58_58 = (MR_Word) (&ll_backend__optimize_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_58_58, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              succeeded = libs__globals____Unify____globals_0_0(ArgX6_13, ArgY6_14);
              if (succeeded)
              {
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX7_15, ArgY7_16);
                if (succeeded)
                {
                  succeeded = (ArgX8_17 == ArgY8_18);
                  if (succeeded)
                  {
                    succeeded = (ArgX9_19 == ArgY9_20);
                    if (succeeded)
                    {
                      succeeded = (ArgX10_21 == ArgY10_22);
                      if (succeeded)
                      {
                        succeeded = (ArgX11_23 == ArgY11_24);
                        if (succeeded)
                        {
                          succeeded = (ArgX12_25 == ArgY12_26);
                          if (succeeded)
                          {
                            succeeded = (ArgX13_27 == ArgY13_28);
                            if (succeeded)
                            {
                              succeeded = (ArgX14_29 == ArgY14_30);
                              if (succeeded)
                              {
                                succeeded = (ArgX15_31 == ArgY15_32);
                                if (succeeded)
                                {
                                  succeeded = (ArgX16_33 == ArgY16_34);
                                  if (succeeded)
                                  {
                                    succeeded = (ArgX17_35 == ArgY17_36);
                                    if (succeeded)
                                    {
                                      succeeded = (ArgX18_37 == ArgY18_38);
                                      if (succeeded)
                                      {
                                        succeeded = (ArgX19_39 == ArgY19_40);
                                        if (succeeded)
                                        {
                                          succeeded = (ArgX20_41 == ArgY20_42);
                                          if (succeeded)
                                          {
                                            succeeded = (ArgX21_43 == ArgY21_44);
                                            if (succeeded)
                                            {
                                              succeeded = (ArgX22_45 == ArgY22_46);
                                              if (succeeded)
                                              {
                                                succeeded = (ArgX23_47 == ArgY23_48);
                                                if (succeeded)
                                                {
                                                  succeeded = (ArgX24_49 == ArgY24_50);
                                                  if (succeeded)
                                                  {
                                                    succeeded = (ArgX25_51 == ArgY25_52);
                                                    if (succeeded)
                                                      succeeded = (ArgX26_53 == ArgY26_54);
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
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__optimize__escape_dir_char_3_p_0(
  MR_Char Char_4,
  MR_String STATE_VARIABLE_Str_0_6,
  MR_String * STATE_VARIABLE_Str_7)
{
  MR_bool succeeded;

  succeeded = mercury__dir__is_directory_separator_1_p_0(Char_4);
  if (succeeded)
    *STATE_VARIABLE_Str_7 = mercury__string__f_43_43_2_f_0(STATE_VARIABLE_Str_0_6, (MR_String) "_slash_");
  else
  {
    MR_String Var_11;

    Var_11 = mercury__string__char_to_string_1_f_0(Char_4);
    *STATE_VARIABLE_Str_7 = mercury__string__f_43_43_2_f_0(STATE_VARIABLE_Str_0_6, Var_11);
  }
}

static MR_Word MR_CALL 
ll_backend__optimize__make_internal_label_for_proc_label_2_f_0(
  MR_Word ProcLabel_4,
  MR_Integer LabelNum_5)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (LabelNum_5));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (ProcLabel_4));
  }
  return HeadVar__3_3;
}

void MR_CALL 
ll_backend__optimize__optimize_procs_5_p_0(
  MR_Word Globals_1,
  MR_Word ModuleName_2,
  MR_Word GlobalData_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Proc0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Procs0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Proc_14;
    MR_Word Procs_15;

    ll_backend__optimize__optimize_proc_5_p_0(Globals_1, ModuleName_2, GlobalData_3, Proc0_12, &Proc_14);
    ll_backend__optimize__optimize_procs_5_p_0(Globals_1, ModuleName_2, GlobalData_3, Procs0_13, &Procs_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Proc_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (Procs_15));
    }
  }
}

static MR_Box MR_CALL 
ll_backend__optimize__optimize_proc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = ll_backend__optimize__make_internal_label_for_proc_label_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

void MR_CALL 
ll_backend__optimize__optimize_proc_5_p_0(
  MR_Word Globals_6,
  MR_Word ModuleName_7,
  MR_Word GlobalData_8,
  MR_Word CProc0_9,
  MR_Word * CProc_10)
{
  MR_bool succeeded;
  MR_Word Info_11;
  MR_String Name_15;
  MR_Integer Arity_16;
  MR_Word PredProcId_17;
  MR_Word ProcLabel_18;
  MR_Word CodeModel_19;
  MR_Word MayAlterRtti_21;
  MR_Word CGlobalVars_22;
  MR_Word MaybeBaseName_23;
  MR_Integer Repeat_27;
  MR_Word LayoutLabelSet_32;
  MR_Word Statistics_33;
  MR_Word STATE_VARIABLE_Instrs_35_35;
  MR_Word STATE_VARIABLE_LabelNumCounter_36_36;
  MR_Word STATE_VARIABLE_OptDebugInfo_37_37;
  MR_Word STATE_VARIABLE_LabelNumCounter_49_49;
  MR_Word STATE_VARIABLE_OptDebugInfo_50_50;
  MR_Word STATE_VARIABLE_Instrs_51_51;
  MR_Word STATE_VARIABLE_LabelNumCounter_52_52;
  MR_Word STATE_VARIABLE_OptDebugInfo_53_53;
  MR_Word STATE_VARIABLE_Instrs_54_54;
  MR_Word STATE_VARIABLE_LabelNumCounter_59_59;
  MR_Word STATE_VARIABLE_OptDebugInfo_60_60;
  MR_Word STATE_VARIABLE_Instrs_61_61;
  MR_Word STATE_VARIABLE_LabelNumCounter_65_65;
  MR_Word STATE_VARIABLE_Instrs_66_66;
  MR_Unsigned packed_word_0;
  MR_Word ProcLayout_28;
  MR_Word ProgressStream_70;
  MR_Word ProgressStream_71;
  MR_Word ProgressStream_72;

  Info_11 = ll_backend__optimize__init_llds_opt_info_2_f_0(Globals_6, ModuleName_7);
  Name_15 = ((MR_String) ((MR_hl_field(0, CProc0_9, (MR_Integer) 0))));
  Arity_16 = ((MR_Integer) ((MR_hl_field(0, CProc0_9, (MR_Integer) 1))));
  PredProcId_17 = ((MR_Word) ((MR_hl_field(0, CProc0_9, (MR_Integer) 2))));
  ProcLabel_18 = ((MR_Word) ((MR_hl_field(0, CProc0_9, (MR_Integer) 3))));
  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, CProc0_9, (MR_Integer) 4)));
  CodeModel_19 = ((((MR_Unsigned) ((MR_hl_field(0, CProc0_9, (MR_Integer) 4))) >> 3)) & (MR_Integer) 3);
  STATE_VARIABLE_Instrs_35_35 = ((MR_Word) ((MR_hl_field(0, CProc0_9, (MR_Integer) 5))));
  STATE_VARIABLE_LabelNumCounter_36_36 = ((MR_Word) ((MR_hl_field(0, CProc0_9, (MR_Integer) 6))));
  MayAlterRtti_21 = ((MR_Unsigned) ((MR_hl_field(0, CProc0_9, (MR_Integer) 7))) & (MR_Integer) 1);
  CGlobalVars_22 = ((MR_Word) ((MR_hl_field(0, CProc0_9, (MR_Integer) 8))));
  ll_backend__optimize__need_opt_debug_info_5_p_0(Info_11, Name_15, Arity_16, PredProcId_17, &MaybeBaseName_23);
  if ((MaybeBaseName_23 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_OptDebugInfo_37_37 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String BaseName_24 = ((MR_String) ((MR_hl_field(1, MaybeBaseName_23, (MR_Integer) 0))));
    MR_String FirstFileName_25;
    MR_String Var_38;
    MR_String Var_40;

    Var_40 = ll_backend__optimize__num_to_str_1_f_0((MR_Integer) 0);
    Var_38 = mercury__string__f_43_43_2_f_0((MR_String) ".opt", Var_40);
    FirstFileName_25 = mercury__string__f_43_43_2_f_0(BaseName_24, Var_38);
    ll_backend__optimize__output_first_opt_debug_7_p_0(Info_11, FirstFileName_25, ProcLabel_18, STATE_VARIABLE_Instrs_35_35, STATE_VARIABLE_LabelNumCounter_36_36);
    {
      STATE_VARIABLE_OptDebugInfo_37_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_OptDebugInfo_37_37, 0) = ((MR_Box) (BaseName_24));
      MR_hl_field(1, STATE_VARIABLE_OptDebugInfo_37_37, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(1, STATE_VARIABLE_OptDebugInfo_37_37, 2) = ((MR_Box) (FirstFileName_25));
      MR_hl_field(1, STATE_VARIABLE_OptDebugInfo_37_37, 3) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(1, STATE_VARIABLE_OptDebugInfo_37_37, 4) = ((MR_Box) (FirstFileName_25));
      MR_hl_field(1, STATE_VARIABLE_OptDebugInfo_37_37, 5) = ((MR_Box) (STATE_VARIABLE_Instrs_35_35));
    }
  }
  Repeat_27 = ((MR_Integer) ((MR_hl_field(0, Info_11, (MR_Integer) 4))));
  succeeded = ll_backend__global_data__global_data_maybe_get_proc_layout_3_p_0(GlobalData_8, PredProcId_17, &ProcLayout_28);
  if (succeeded)
  {
    MR_Word LabelMap_29 = ((MR_Word) ((MR_hl_field(0, ProcLayout_28, (MR_Integer) 16))));
    MR_Word LayoutLabelNums_30;
    MR_Word LayoutLabels_31;
    MR_Word Var_48;

    mercury__map__sorted_keys_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0), LabelMap_29, &LayoutLabelNums_30);
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_48, 0) = ((MR_Box) (&ll_backend__optimize_scalar_common_2[1]));
      MR_hl_field(0, Var_48, 1) = ((MR_Box) (ll_backend__optimize__optimize_proc_5_p_0_1));
      MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_48, 3) = ((MR_Box) (ProcLabel_18));
    }
    LayoutLabels_31 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), Var_48, LayoutLabelNums_30);
    mercury__set_tree234__sorted_list_to_set_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), LayoutLabels_31, &LayoutLabelSet_32);
  }
  else
    LayoutLabelSet_32 = mercury__set_tree234__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
  Statistics_33 = ((((MR_Unsigned) ((MR_hl_field(0, Info_11, (MR_Integer) 7))) >> 14)) & (MR_Integer) 1);
  ll_backend__optimize__optimize_initial_11_p_0(Info_11, LayoutLabelSet_32, ProcLabel_18, CodeModel_19, MayAlterRtti_21, STATE_VARIABLE_LabelNumCounter_36_36, &STATE_VARIABLE_LabelNumCounter_49_49, STATE_VARIABLE_OptDebugInfo_37_37, &STATE_VARIABLE_OptDebugInfo_50_50, STATE_VARIABLE_Instrs_35_35, &STATE_VARIABLE_Instrs_51_51);
  ll_backend__optimize__optimize_repeat_11_p_0(Info_11, Repeat_27, LayoutLabelSet_32, ProcLabel_18, MayAlterRtti_21, STATE_VARIABLE_LabelNumCounter_49_49, &STATE_VARIABLE_LabelNumCounter_52_52, STATE_VARIABLE_OptDebugInfo_50_50, &STATE_VARIABLE_OptDebugInfo_53_53, STATE_VARIABLE_Instrs_51_51, &STATE_VARIABLE_Instrs_54_54);
  ll_backend__optimize__get_opt_progress_output_stream_4_p_0(Info_11, &ProgressStream_70);
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_70, Statistics_33);
  ll_backend__optimize__optimize_middle_12_p_0(Info_11, (MR_Integer) 1, LayoutLabelSet_32, ProcLabel_18, CodeModel_19, MayAlterRtti_21, STATE_VARIABLE_LabelNumCounter_52_52, &STATE_VARIABLE_LabelNumCounter_59_59, STATE_VARIABLE_OptDebugInfo_53_53, &STATE_VARIABLE_OptDebugInfo_60_60, STATE_VARIABLE_Instrs_54_54, &STATE_VARIABLE_Instrs_61_61);
  ll_backend__optimize__get_opt_progress_output_stream_4_p_0(Info_11, &ProgressStream_71);
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_71, Statistics_33);
  ll_backend__optimize__optimize_last_8_p_0(Info_11, LayoutLabelSet_32, ProcLabel_18, STATE_VARIABLE_LabelNumCounter_59_59, &STATE_VARIABLE_LabelNumCounter_65_65, STATE_VARIABLE_OptDebugInfo_60_60, STATE_VARIABLE_Instrs_61_61, &STATE_VARIABLE_Instrs_66_66);
  ll_backend__optimize__get_opt_progress_output_stream_4_p_0(Info_11, &ProgressStream_72);
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_72, Statistics_33);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *CProc_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Name_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (Arity_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (PredProcId_17));
    MR_hl_field(0, base, 3) = ((MR_Box) (ProcLabel_18));
    MR_hl_field(0, base, 4) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 5) = ((MR_Box) (STATE_VARIABLE_Instrs_66_66));
    MR_hl_field(0, base, 6) = ((MR_Box) (STATE_VARIABLE_LabelNumCounter_65_65));
    MR_hl_field(0, base, 7) = (MR_Box) ((MR_Unsigned) (MayAlterRtti_21));
    MR_hl_field(0, base, 8) = ((MR_Box) (CGlobalVars_22));
  }
}

static MR_Word MR_CALL 
ll_backend__optimize__init_llds_opt_info_2_f_0(
  MR_Word Globals_4,
  MR_Word ModuleName_5)
{
  MR_Word Info_6;
  MR_Word DebugOptPredIdStrs_7;
  MR_Word DebugOptPredNames_8;
  MR_Integer NumRealRRegs_9;
  MR_Word OptTuple_10;
  MR_Integer LocalVarAccessThreshold_11;
  MR_Integer OptRepeat_12;
  MR_Word GCMethod_13;
  MR_Word DebugOpt_14;
  MR_Word AutoCommentsOption_15;
  MR_Word AutoComments_16;
  MR_Word FrameOptComments_17;
  MR_Word DetailedStatistics_18;
  MR_Word VeryVerbose_19;
  MR_Word CheckedNondetTailCalls_20;
  MR_Word OptDelaySlots_21;
  MR_Word OptDups_22;
  MR_Word OptFrames_23;
  MR_Word OptJumps_24;
  MR_Word OptFullJumps_25;
  MR_Word OptLabels_26;
  MR_Word OptPeep_27;
  MR_Word OptPeepMkword_28;
  MR_Word OptReassign_29;
  MR_Word PessimizeTailCalls_30;
  MR_Word StdLabels_31;
  MR_Word UseLocalVars_32;

  libs__globals__lookup_accumulating_option_3_p_0(Globals_4, (MR_Integer) 100, &DebugOptPredIdStrs_7);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_4, (MR_Integer) 101, &DebugOptPredNames_8);
  libs__globals__lookup_int_option_3_p_0(Globals_4, (MR_Integer) 354, &NumRealRRegs_9);
  libs__globals__get_opt_tuple_2_p_0(Globals_4, &OptTuple_10);
  LocalVarAccessThreshold_11 = ((MR_Integer) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 36))));
  OptRepeat_12 = ((MR_Integer) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 37))));
  libs__globals__get_gc_method_2_p_0(Globals_4, &GCMethod_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 98, &DebugOpt_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 177, &AutoCommentsOption_15);
  switch (AutoCommentsOption_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      AutoComments_16 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      AutoComments_16 = (MR_Integer) 1;
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 178, &FrameOptComments_17);
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 83, &DetailedStatistics_18);
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 73, &VeryVerbose_19);
  OptPeep_27 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 2))) >> 20)) & (MR_Integer) 1);
  OptPeepMkword_28 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 2))) >> 19)) & (MR_Integer) 1);
  OptJumps_24 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 2))) >> 18)) & (MR_Integer) 1);
  OptFullJumps_25 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
  PessimizeTailCalls_30 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
  CheckedNondetTailCalls_20 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 2))) >> 15)) & (MR_Integer) 1);
  UseLocalVars_32 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
  StdLabels_31 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 2))) >> 13)) & (MR_Integer) 1);
  OptLabels_26 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 2))) >> 12)) & (MR_Integer) 1);
  OptDups_22 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 2))) >> 11)) & (MR_Integer) 1);
  OptFrames_23 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 2))) >> 9)) & (MR_Integer) 1);
  OptDelaySlots_21 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 2))) >> 8)) & (MR_Integer) 1);
  OptReassign_29 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 2))) >> 7)) & (MR_Integer) 1);
  {
    Info_6 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_6, 0) = ((MR_Box) (DebugOptPredIdStrs_7));
    MR_hl_field(0, Info_6, 1) = ((MR_Box) (DebugOptPredNames_8));
    MR_hl_field(0, Info_6, 2) = ((MR_Box) (NumRealRRegs_9));
    MR_hl_field(0, Info_6, 3) = ((MR_Box) (LocalVarAccessThreshold_11));
    MR_hl_field(0, Info_6, 4) = ((MR_Box) (OptRepeat_12));
    MR_hl_field(0, Info_6, 5) = ((MR_Box) (Globals_4));
    MR_hl_field(0, Info_6, 6) = ((MR_Box) (ModuleName_5));
    MR_hl_field(0, Info_6, 7) = (MR_Box) (((((MR_Unsigned) (GCMethod_13) << 18)) | (((((MR_Unsigned) (DebugOpt_14) << 17)) | (((((MR_Unsigned) (AutoComments_16) << 16)) | (((((MR_Unsigned) (FrameOptComments_17) << 15)) | (((((MR_Unsigned) (DetailedStatistics_18) << 14)) | (((((MR_Unsigned) (VeryVerbose_19) << 13)) | (((((MR_Unsigned) (CheckedNondetTailCalls_20) << 12)) | (((((MR_Unsigned) (OptDelaySlots_21) << 11)) | (((((MR_Unsigned) (OptDups_22) << 10)) | (((((MR_Unsigned) (OptFrames_23) << 9)) | (((((MR_Unsigned) (OptJumps_24) << 8)) | (((((MR_Unsigned) (OptFullJumps_25) << 7)) | (((((MR_Unsigned) (OptLabels_26) << 6)) | (((((MR_Unsigned) (OptPeep_27) << 5)) | (((((MR_Unsigned) (OptPeepMkword_28) << 4)) | (((((MR_Unsigned) (OptReassign_29) << 3)) | (((((MR_Unsigned) (PessimizeTailCalls_30) << 2)) | (((((MR_Unsigned) (StdLabels_31) << 1)) | (MR_Unsigned) (UseLocalVars_32)))))))))))))))))))))))))))))))))))));
  }
  return Info_6;
}

static void MR_CALL 
ll_backend__optimize__optimize_last_8_p_0(
  MR_Word Info_9,
  MR_Word LayoutLabelSet_10,
  MR_Word ProcLabel_11,
  MR_Word STATE_VARIABLE_LabelNumCounter_0_25,
  MR_Word * STATE_VARIABLE_LabelNumCounter_26,
  MR_Word STATE_VARIABLE_OptDebugInfo_0_27,
  MR_Word STATE_VARIABLE_Instrs_0_28,
  MR_Word * STATE_VARIABLE_Instrs_29)
{
  MR_bool succeeded;
  MR_Word VeryVerbose_15 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 7))) >> 13)) & (MR_Integer) 1);
  MR_String LabelStr_16;
  MR_Word Reassign_17;
  MR_Word DelaySlot_18;
  MR_Word UseLocalVars_19;
  MR_Word StdLabels_20;
  MR_Word STATE_VARIABLE_Instrs_38_38;
  MR_Word STATE_VARIABLE_OptDebugInfo_41_41;
  MR_Word STATE_VARIABLE_Instrs_49_49;
  MR_Word STATE_VARIABLE_OptDebugInfo_52_52;
  MR_Word STATE_VARIABLE_Instrs_60_60;
  MR_Word STATE_VARIABLE_OptDebugInfo_63_63;
  MR_Word STATE_VARIABLE_Instrs_71_71;
  MR_Word STATE_VARIABLE_OptDebugInfo_74_74;
  MR_Word STATE_VARIABLE_Instrs_82_82;
  MR_Word STATE_VARIABLE_OptDebugInfo_86_86;

  LabelStr_16 = ll_backend__opt_util__format_proc_label_1_f_0(ProcLabel_11);
  DelaySlot_18 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 7))) >> 11)) & (MR_Integer) 1);
  Reassign_17 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 7))) >> 3)) & (MR_Integer) 1);
  StdLabels_20 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 7))) >> 1)) & (MR_Integer) 1);
  UseLocalVars_19 = ((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 7))) & (MR_Integer) 1);
  succeeded = (Reassign_17 == (MR_Integer) 0);
  if (!(succeeded))
  {
    succeeded = (DelaySlot_18 == (MR_Integer) 0);
    if (!(succeeded))
    {
      succeeded = (UseLocalVars_19 == (MR_Integer) 0);
      if (!(succeeded))
        succeeded = (StdLabels_20 == (MR_Integer) 0);
    }
  }
  if (succeeded)
  {
    MR_Word _Mod1_23;

    switch (VeryVerbose_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ProgressStream_97;

          ll_backend__optimize__get_opt_progress_output_stream_4_p_0(Info_9, &ProgressStream_97);
          mercury__io__write_string_4_p_0(ProgressStream_97, (MR_String) "% Optimizing labels for ");
          mercury__io__write_string_4_p_0(ProgressStream_97, LabelStr_16);
          mercury__io__write_string_4_p_0(ProgressStream_97, (MR_String) "\n");
        }
        break;
    }
    ll_backend__labelopt__labelopt_main_5_p_0((MR_Integer) 0, LayoutLabelSet_10, STATE_VARIABLE_Instrs_0_28, &STATE_VARIABLE_Instrs_38_38, &_Mod1_23);
    ll_backend__optimize__maybe_opt_debug_8_p_0(Info_9, STATE_VARIABLE_Instrs_38_38, STATE_VARIABLE_LabelNumCounter_0_25, (MR_String) "label", (MR_String) "after label opt", ProcLabel_11, STATE_VARIABLE_OptDebugInfo_0_27, &STATE_VARIABLE_OptDebugInfo_41_41);
  }
  else
  {
    STATE_VARIABLE_Instrs_38_38 = STATE_VARIABLE_Instrs_0_28;
    STATE_VARIABLE_OptDebugInfo_41_41 = STATE_VARIABLE_OptDebugInfo_0_27;
  }
  switch (Reassign_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        STATE_VARIABLE_OptDebugInfo_52_52 = STATE_VARIABLE_OptDebugInfo_41_41;
        STATE_VARIABLE_Instrs_49_49 = STATE_VARIABLE_Instrs_38_38;
      }
      break;
    case (MR_Integer) 0:
      {
        switch (VeryVerbose_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ProgressStream_98;

              ll_backend__optimize__get_opt_progress_output_stream_4_p_0(Info_9, &ProgressStream_98);
              mercury__io__write_string_4_p_0(ProgressStream_98, (MR_String) "% Optimizing reassign for ");
              mercury__io__write_string_4_p_0(ProgressStream_98, LabelStr_16);
              mercury__io__write_string_4_p_0(ProgressStream_98, (MR_String) "\n");
            }
            break;
        }
        ll_backend__reassign__remove_reassign_2_p_0(STATE_VARIABLE_Instrs_38_38, &STATE_VARIABLE_Instrs_49_49);
        ll_backend__optimize__maybe_opt_debug_8_p_0(Info_9, STATE_VARIABLE_Instrs_49_49, STATE_VARIABLE_LabelNumCounter_0_25, (MR_String) "reassign", (MR_String) "after reassign", ProcLabel_11, STATE_VARIABLE_OptDebugInfo_41_41, &STATE_VARIABLE_OptDebugInfo_52_52);
      }
      break;
  }
  switch (DelaySlot_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        STATE_VARIABLE_OptDebugInfo_63_63 = STATE_VARIABLE_OptDebugInfo_52_52;
        STATE_VARIABLE_Instrs_60_60 = STATE_VARIABLE_Instrs_49_49;
      }
      break;
    case (MR_Integer) 0:
      {
        switch (VeryVerbose_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ProgressStream_99;

              ll_backend__optimize__get_opt_progress_output_stream_4_p_0(Info_9, &ProgressStream_99);
              mercury__io__write_string_4_p_0(ProgressStream_99, (MR_String) "% Optimizing delay slot for ");
              mercury__io__write_string_4_p_0(ProgressStream_99, LabelStr_16);
              mercury__io__write_string_4_p_0(ProgressStream_99, (MR_String) "\n");
            }
            break;
        }
        ll_backend__delay_slot__fill_branch_delay_slot_2_p_0(STATE_VARIABLE_Instrs_49_49, &STATE_VARIABLE_Instrs_60_60);
        ll_backend__optimize__maybe_opt_debug_8_p_0(Info_9, STATE_VARIABLE_Instrs_60_60, STATE_VARIABLE_LabelNumCounter_0_25, (MR_String) "delay_slot", (MR_String) "after delay slots", ProcLabel_11, STATE_VARIABLE_OptDebugInfo_52_52, &STATE_VARIABLE_OptDebugInfo_63_63);
      }
      break;
  }
  switch (VeryVerbose_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ProgressStream_100;

        ll_backend__optimize__get_opt_progress_output_stream_4_p_0(Info_9, &ProgressStream_100);
        mercury__io__write_string_4_p_0(ProgressStream_100, (MR_String) "% Optimizing returns for ");
        mercury__io__write_string_4_p_0(ProgressStream_100, LabelStr_16);
        mercury__io__write_string_4_p_0(ProgressStream_100, (MR_String) "\n");
      }
      break;
  }
  ll_backend__peephole__combine_decr_sp_2_p_0(STATE_VARIABLE_Instrs_60_60, &STATE_VARIABLE_Instrs_71_71);
  ll_backend__optimize__maybe_opt_debug_8_p_0(Info_9, STATE_VARIABLE_Instrs_71_71, STATE_VARIABLE_LabelNumCounter_0_25, (MR_String) "decr_sp", (MR_String) "after combine decr_sp", ProcLabel_11, STATE_VARIABLE_OptDebugInfo_63_63, &STATE_VARIABLE_OptDebugInfo_74_74);
  switch (StdLabels_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_LabelNumCounter_26 = STATE_VARIABLE_LabelNumCounter_0_25;
        STATE_VARIABLE_OptDebugInfo_86_86 = STATE_VARIABLE_OptDebugInfo_74_74;
        STATE_VARIABLE_Instrs_82_82 = STATE_VARIABLE_Instrs_71_71;
      }
      break;
    case (MR_Integer) 0:
      {
        switch (VeryVerbose_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ProgressStream_101;

              ll_backend__optimize__get_opt_progress_output_stream_4_p_0(Info_9, &ProgressStream_101);
              mercury__io__write_string_4_p_0(ProgressStream_101, (MR_String) "% Standardizing labels for ");
              mercury__io__write_string_4_p_0(ProgressStream_101, LabelStr_16);
              mercury__io__write_string_4_p_0(ProgressStream_101, (MR_String) "\n");
            }
            break;
        }
        ll_backend__stdlabel__standardize_labels_4_p_0(STATE_VARIABLE_Instrs_71_71, &STATE_VARIABLE_Instrs_82_82, STATE_VARIABLE_LabelNumCounter_0_25, STATE_VARIABLE_LabelNumCounter_26);
        ll_backend__optimize__maybe_opt_debug_8_p_0(Info_9, STATE_VARIABLE_Instrs_82_82, *STATE_VARIABLE_LabelNumCounter_26, (MR_String) "stdlabel", (MR_String) "after standard labels", ProcLabel_11, STATE_VARIABLE_OptDebugInfo_74_74, &STATE_VARIABLE_OptDebugInfo_86_86);
      }
      break;
  }
  switch (UseLocalVars_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_Instrs_29 = STATE_VARIABLE_Instrs_82_82;
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_24;

        switch (VeryVerbose_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ProgressStream_102;

              ll_backend__optimize__get_opt_progress_output_stream_4_p_0(Info_9, &ProgressStream_102);
              mercury__io__write_string_4_p_0(ProgressStream_102, (MR_String) "% Wrapping blocks for ");
              mercury__io__write_string_4_p_0(ProgressStream_102, LabelStr_16);
              mercury__io__write_string_4_p_0(ProgressStream_102, (MR_String) "\n");
            }
            break;
        }
        ll_backend__wrap_blocks__wrap_blocks_2_p_0(STATE_VARIABLE_Instrs_82_82, STATE_VARIABLE_Instrs_29);
        ll_backend__optimize__maybe_opt_debug_8_p_0(Info_9, *STATE_VARIABLE_Instrs_29, *STATE_VARIABLE_LabelNumCounter_26, (MR_String) "wrapblocks", (MR_String) "after wrap blocks", ProcLabel_11, STATE_VARIABLE_OptDebugInfo_86_86, &Var_24);
      }
      break;
  }
}

static void MR_CALL 
ll_backend__optimize__optimize_middle_12_p_0(
  MR_Word Info_13,
  MR_Word Final_14,
  MR_Word LayoutLabelSet_15,
  MR_Word ProcLabel_16,
  MR_Word CodeModel_17,
  MR_Word MayAlterRtti_18,
  MR_Word STATE_VARIABLE_LabelNumCounter_0_42,
  MR_Word * STATE_VARIABLE_LabelNumCounter_43,
  MR_Word STATE_VARIABLE_OptDebugInfo_0_44,
  MR_Word * STATE_VARIABLE_OptDebugInfo_45,
  MR_Word STATE_VARIABLE_Instrs_0_46,
  MR_Word * STATE_VARIABLE_Instrs_47)
{
  MR_bool succeeded;
  MR_Word VeryVerbose_22 = ((((MR_Unsigned) ((MR_hl_field(0, Info_13, (MR_Integer) 7))) >> 13)) & (MR_Integer) 1);
  MR_String LabelStr_23;
  MR_Word OptFrames_24;
  MR_Word UseLocalVars_38;
  MR_Word STATE_VARIABLE_LabelNumCounter_72_72;
  MR_Word STATE_VARIABLE_Instrs_95_95;
  MR_Word STATE_VARIABLE_OptDebugInfo_98_98;
  MR_Integer Var_144;
  MR_Integer Var_145;
  MR_Word Var_151;
  MR_Word Var_152;

  LabelStr_23 = ll_backend__opt_util__format_proc_label_1_f_0(ProcLabel_16);
  Var_144 = ((MR_Integer) ((MR_hl_field(0, Info_13, (MR_Integer) 2))));
  Var_145 = ((MR_Integer) ((MR_hl_field(0, Info_13, (MR_Integer) 3))));
  Var_151 = ((((MR_Unsigned) ((MR_hl_field(0, Info_13, (MR_Integer) 7))) >> 16)) & (MR_Integer) 1);
  Var_152 = ((((MR_Unsigned) ((MR_hl_field(0, Info_13, (MR_Integer) 7))) >> 15)) & (MR_Integer) 1);
  OptFrames_24 = ((((MR_Unsigned) ((MR_hl_field(0, Info_13, (MR_Integer) 7))) >> 9)) & (MR_Integer) 1);
  UseLocalVars_38 = ((MR_Unsigned) ((MR_hl_field(0, Info_13, (MR_Integer) 7))) & (MR_Integer) 1);
  switch (OptFrames_24) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        STATE_VARIABLE_LabelNumCounter_72_72 = STATE_VARIABLE_LabelNumCounter_0_42;
        STATE_VARIABLE_OptDebugInfo_98_98 = STATE_VARIABLE_OptDebugInfo_0_44;
        STATE_VARIABLE_Instrs_95_95 = STATE_VARIABLE_Instrs_0_46;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Mod1_28;
        MR_Word Statistics_29;
        MR_Word OptFullJump_30;
        MR_Word PessimizeTailCalls_31;
        MR_Word CheckedNondetTailCalls_32;
        MR_Word STATE_VARIABLE_LabelNumCounter_55_55;
        MR_Word STATE_VARIABLE_Instrs_56_56;
        MR_Word STATE_VARIABLE_OptDebugInfo_61_61;
        MR_Word STATE_VARIABLE_Instrs_73_73;
        MR_Word STATE_VARIABLE_OptDebugInfo_76_76;
        MR_Word STATE_VARIABLE_Instrs_84_84;
        MR_Word STATE_VARIABLE_OptDebugInfo_87_87;
        MR_Word ProgressStream_112;

        switch (VeryVerbose_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ProgressStream_111;

              ll_backend__optimize__get_opt_progress_output_stream_4_p_0(Info_13, &ProgressStream_111);
              mercury__io__write_string_4_p_0(ProgressStream_111, (MR_String) "% Optimizing frames for ");
              mercury__io__write_string_4_p_0(ProgressStream_111, LabelStr_23);
              mercury__io__write_string_4_p_0(ProgressStream_111, (MR_String) "\n");
            }
            break;
        }
        switch (CodeModel_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            ll_backend__frameopt__frameopt_main_det_stack_7_p_0(ProcLabel_16, STATE_VARIABLE_LabelNumCounter_0_42, &STATE_VARIABLE_LabelNumCounter_55_55, STATE_VARIABLE_Instrs_0_46, &STATE_VARIABLE_Instrs_56_56, Var_152, &Mod1_28);
            break;
          case (MR_Integer) 2:
            ll_backend__frameopt__frameopt_main_nondet_stack_7_p_0(ProcLabel_16, STATE_VARIABLE_LabelNumCounter_0_42, &STATE_VARIABLE_LabelNumCounter_55_55, STATE_VARIABLE_Instrs_0_46, &STATE_VARIABLE_Instrs_56_56, Var_152, &Mod1_28);
            break;
        }
        ll_backend__optimize__maybe_opt_debug_8_p_0(Info_13, STATE_VARIABLE_Instrs_56_56, STATE_VARIABLE_LabelNumCounter_55_55, (MR_String) "frame", (MR_String) "after frame opt", ProcLabel_16, STATE_VARIABLE_OptDebugInfo_0_44, &STATE_VARIABLE_OptDebugInfo_61_61);
        Statistics_29 = ((((MR_Unsigned) ((MR_hl_field(0, Info_13, (MR_Integer) 7))) >> 14)) & (MR_Integer) 1);
        CheckedNondetTailCalls_32 = ((((MR_Unsigned) ((MR_hl_field(0, Info_13, (MR_Integer) 7))) >> 12)) & (MR_Integer) 1);
        OptFullJump_30 = ((((MR_Unsigned) ((MR_hl_field(0, Info_13, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
        PessimizeTailCalls_31 = ((((MR_Unsigned) ((MR_hl_field(0, Info_13, (MR_Integer) 7))) >> 2)) & (MR_Integer) 1);
        ll_backend__optimize__get_opt_progress_output_stream_4_p_0(Info_13, &ProgressStream_112);
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_112, Statistics_29);
        succeeded = (OptFullJump_30 == (MR_Integer) 0);
        if (!(succeeded))
          succeeded = (Mod1_28 == (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word _Mod2_33;

          switch (VeryVerbose_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ProgressStream_113;

                ll_backend__optimize__get_opt_progress_output_stream_4_p_0(Info_13, &ProgressStream_113);
                mercury__io__write_string_4_p_0(ProgressStream_113, (MR_String) "% Optimizing jumps for ");
                mercury__io__write_string_4_p_0(ProgressStream_113, LabelStr_23);
                mercury__io__write_string_4_p_0(ProgressStream_113, (MR_String) "\n");
              }
              break;
          }
          ll_backend__jumpopt__optimize_jumps_in_proc_12_p_0(LayoutLabelSet_15, MayAlterRtti_18, ProcLabel_16, OptFullJump_30, Final_14, PessimizeTailCalls_31, CheckedNondetTailCalls_32, STATE_VARIABLE_LabelNumCounter_55_55, &STATE_VARIABLE_LabelNumCounter_72_72, STATE_VARIABLE_Instrs_56_56, &STATE_VARIABLE_Instrs_73_73, &_Mod2_33);
          ll_backend__optimize__maybe_opt_debug_8_p_0(Info_13, STATE_VARIABLE_Instrs_73_73, STATE_VARIABLE_LabelNumCounter_72_72, (MR_String) "jump", (MR_String) "after jumps", ProcLabel_16, STATE_VARIABLE_OptDebugInfo_61_61, &STATE_VARIABLE_OptDebugInfo_76_76);
        }
        else
        {
          STATE_VARIABLE_Instrs_73_73 = STATE_VARIABLE_Instrs_56_56;
          STATE_VARIABLE_OptDebugInfo_76_76 = STATE_VARIABLE_OptDebugInfo_61_61;
          STATE_VARIABLE_LabelNumCounter_72_72 = STATE_VARIABLE_LabelNumCounter_55_55;
        }
        switch (Mod1_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_OptDebugInfo_87_87 = STATE_VARIABLE_OptDebugInfo_76_76;
              STATE_VARIABLE_Instrs_84_84 = STATE_VARIABLE_Instrs_73_73;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word _Mod3_34;

              switch (VeryVerbose_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ProgressStream_114;

                    ll_backend__optimize__get_opt_progress_output_stream_4_p_0(Info_13, &ProgressStream_114);
                    mercury__io__write_string_4_p_0(ProgressStream_114, (MR_String) "% Optimizing labels for ");
                    mercury__io__write_string_4_p_0(ProgressStream_114, LabelStr_23);
                    mercury__io__write_string_4_p_0(ProgressStream_114, (MR_String) "\n");
                  }
                  break;
              }
              ll_backend__labelopt__labelopt_main_5_p_0(Final_14, LayoutLabelSet_15, STATE_VARIABLE_Instrs_73_73, &STATE_VARIABLE_Instrs_84_84, &_Mod3_34);
              ll_backend__optimize__maybe_opt_debug_8_p_0(Info_13, STATE_VARIABLE_Instrs_84_84, STATE_VARIABLE_LabelNumCounter_72_72, (MR_String) "label", (MR_String) "after labels", ProcLabel_16, STATE_VARIABLE_OptDebugInfo_76_76, &STATE_VARIABLE_OptDebugInfo_87_87);
            }
            break;
        }
        switch (Mod1_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_OptDebugInfo_98_98 = STATE_VARIABLE_OptDebugInfo_87_87;
              STATE_VARIABLE_Instrs_95_95 = STATE_VARIABLE_Instrs_84_84;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word GC_Method_35;
              MR_Word OptPeepMkword_36;
              MR_Word _Mod_37;

              switch (VeryVerbose_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ProgressStream_115;

                    ll_backend__optimize__get_opt_progress_output_stream_4_p_0(Info_13, &ProgressStream_115);
                    mercury__io__write_string_4_p_0(ProgressStream_115, (MR_String) "% Optimizing locally for ");
                    mercury__io__write_string_4_p_0(ProgressStream_115, LabelStr_23);
                    mercury__io__write_string_4_p_0(ProgressStream_115, (MR_String) "\n");
                  }
                  break;
              }
              GC_Method_35 = ((((MR_Unsigned) ((MR_hl_field(0, Info_13, (MR_Integer) 7))) >> 18)) & (MR_Integer) 7);
              OptPeepMkword_36 = ((((MR_Unsigned) ((MR_hl_field(0, Info_13, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);
              ll_backend__peephole__peephole_optimize_5_p_0(GC_Method_35, OptPeepMkword_36, STATE_VARIABLE_Instrs_84_84, &STATE_VARIABLE_Instrs_95_95, &_Mod_37);
              ll_backend__optimize__maybe_opt_debug_8_p_0(Info_13, STATE_VARIABLE_Instrs_95_95, STATE_VARIABLE_LabelNumCounter_72_72, (MR_String) "peep", (MR_String) "after peephole", ProcLabel_16, STATE_VARIABLE_OptDebugInfo_87_87, &STATE_VARIABLE_OptDebugInfo_98_98);
            }
            break;
        }
      }
      break;
  }
  switch (UseLocalVars_38) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_LabelNumCounter_43 = STATE_VARIABLE_LabelNumCounter_72_72;
        *STATE_VARIABLE_OptDebugInfo_45 = STATE_VARIABLE_OptDebugInfo_98_98;
        *STATE_VARIABLE_Instrs_47 = STATE_VARIABLE_Instrs_95_95;
      }
      break;
    case (MR_Integer) 0:
      {
        switch (VeryVerbose_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ProgressStream_116;

              ll_backend__optimize__get_opt_progress_output_stream_4_p_0(Info_13, &ProgressStream_116);
              mercury__io__write_string_4_p_0(ProgressStream_116, (MR_String) "% Optimizing local vars for ");
              mercury__io__write_string_4_p_0(ProgressStream_116, LabelStr_23);
              mercury__io__write_string_4_p_0(ProgressStream_116, (MR_String) "\n");
            }
            break;
        }
        ll_backend__use_local_vars__use_local_vars_proc_8_p_0(STATE_VARIABLE_Instrs_95_95, STATE_VARIABLE_Instrs_47, Var_144, Var_145, Var_151, ProcLabel_16, STATE_VARIABLE_LabelNumCounter_72_72, STATE_VARIABLE_LabelNumCounter_43);
        ll_backend__optimize__maybe_opt_debug_8_p_0(Info_13, *STATE_VARIABLE_Instrs_47, *STATE_VARIABLE_LabelNumCounter_43, (MR_String) "use_local", (MR_String) "after use_local_vars", ProcLabel_16, STATE_VARIABLE_OptDebugInfo_98_98, STATE_VARIABLE_OptDebugInfo_45);
      }
      break;
  }
}

static void MR_CALL 
ll_backend__optimize__optimize_repeat_11_p_0(
  MR_Word Info_12,
  MR_Integer CurIter_13,
  MR_Word LayoutLabelSet_14,
  MR_Word ProcLabel_15,
  MR_Word MayAlterRtti_16,
  MR_Word STATE_VARIABLE_LabelNumCounter_0_23,
  MR_Word * STATE_VARIABLE_LabelNumCounter_24,
  MR_Word STATE_VARIABLE_OptDebugInfo_0_25,
  MR_Word * STATE_VARIABLE_OptDebugInfo_26,
  MR_Word STATE_VARIABLE_Instrs_0_27,
  MR_Word * STATE_VARIABLE_Instrs_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurIter_13 > (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer NextIter_20 = (MR_Integer) ((MR_Unsigned) CurIter_13 - (MR_Unsigned) 1);
      MR_Word Final_21;
      MR_Word Mod_22;
      MR_Word STATE_VARIABLE_LabelNumCounter_31_31;
      MR_Word STATE_VARIABLE_OptDebugInfo_32_32;
      MR_Word STATE_VARIABLE_Instrs_33_33;

      succeeded = (NextIter_20 == (MR_Integer) 0);
      if (succeeded)
        Final_21 = (MR_Integer) 1;
      else
        Final_21 = (MR_Integer) 0;
      ll_backend__optimize__optimize_repeated_12_p_0(Info_12, Final_21, LayoutLabelSet_14, ProcLabel_15, MayAlterRtti_16, STATE_VARIABLE_LabelNumCounter_0_23, &STATE_VARIABLE_LabelNumCounter_31_31, STATE_VARIABLE_OptDebugInfo_0_25, &STATE_VARIABLE_OptDebugInfo_32_32, STATE_VARIABLE_Instrs_0_27, &STATE_VARIABLE_Instrs_33_33, &Mod_22);
      switch (Mod_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_LabelNumCounter_24 = STATE_VARIABLE_LabelNumCounter_31_31;
            *STATE_VARIABLE_OptDebugInfo_26 = STATE_VARIABLE_OptDebugInfo_32_32;
            *STATE_VARIABLE_Instrs_28 = STATE_VARIABLE_Instrs_33_33;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer next_value_of_CurIter_13 = NextIter_20;
            MR_Word next_value_of_STATE_VARIABLE_LabelNumCounter_0_23 = STATE_VARIABLE_LabelNumCounter_31_31;
            MR_Word next_value_of_STATE_VARIABLE_OptDebugInfo_0_25 = STATE_VARIABLE_OptDebugInfo_32_32;
            MR_Word next_value_of_STATE_VARIABLE_Instrs_0_27 = STATE_VARIABLE_Instrs_33_33;

            // direct tailcall eliminated
            ;
            CurIter_13 = next_value_of_CurIter_13;
            STATE_VARIABLE_LabelNumCounter_0_23 = next_value_of_STATE_VARIABLE_LabelNumCounter_0_23;
            STATE_VARIABLE_OptDebugInfo_0_25 = next_value_of_STATE_VARIABLE_OptDebugInfo_0_25;
            STATE_VARIABLE_Instrs_0_27 = next_value_of_STATE_VARIABLE_Instrs_0_27;
            continue;
          }
          break;
      }
    }
    else
    {
      *STATE_VARIABLE_Instrs_28 = STATE_VARIABLE_Instrs_0_27;
      *STATE_VARIABLE_OptDebugInfo_26 = STATE_VARIABLE_OptDebugInfo_0_25;
      *STATE_VARIABLE_LabelNumCounter_24 = STATE_VARIABLE_LabelNumCounter_0_23;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__optimize__optimize_repeated_12_p_0(
  MR_Word Info_13,
  MR_Word Final_14,
  MR_Word LayoutLabelSet_15,
  MR_Word ProcLabel_16,
  MR_Word MayAlterRtti_17,
  MR_Word STATE_VARIABLE_LabelNumCounter_0_40,
  MR_Word * STATE_VARIABLE_LabelNumCounter_41,
  MR_Word STATE_VARIABLE_OptDebugInfo_0_42,
  MR_Word * STATE_VARIABLE_OptDebugInfo_43,
  MR_Word STATE_VARIABLE_Instrs_0_44,
  MR_Word * STATE_VARIABLE_Instrs_45,
  MR_Word * Mod_21)
{
  MR_bool succeeded;
  MR_String LabelStr_23;
  MR_Word VeryVerbose_24;
  MR_Word OptJump_25;
  MR_Word OptFullJump_26;
  MR_Word PessimizeTailCalls_27;
  MR_Word CheckedNondetTailCalls_28;
  MR_Word Mod1_31;
  MR_Word Peephole_32;
  MR_Word Mod2_35;
  MR_Word OptLabels_36;
  MR_Word Mod3_37;
  MR_Word DupElim_38;
  MR_Word STATE_VARIABLE_LabelNumCounter_53_53;
  MR_Word STATE_VARIABLE_Instrs_54_54;
  MR_Word STATE_VARIABLE_OptDebugInfo_57_57;
  MR_Word STATE_VARIABLE_Instrs_65_65;
  MR_Word STATE_VARIABLE_OptDebugInfo_68_68;
  MR_Word STATE_VARIABLE_Instrs_76_76;
  MR_Word STATE_VARIABLE_OptDebugInfo_79_79;
  MR_Word Var_107;
  MR_Word Var_120;
  MR_Word TypeInfo_391_391;
  MR_Word Statistics_39;
  MR_Word ProgressStream_99;

  LabelStr_23 = ll_backend__opt_util__format_proc_label_1_f_0(ProcLabel_16);
  Var_107 = ((((MR_Unsigned) ((MR_hl_field(0, Info_13, (MR_Integer) 7))) >> 18)) & (MR_Integer) 7);
  VeryVerbose_24 = ((((MR_Unsigned) ((MR_hl_field(0, Info_13, (MR_Integer) 7))) >> 13)) & (MR_Integer) 1);
  CheckedNondetTailCalls_28 = ((((MR_Unsigned) ((MR_hl_field(0, Info_13, (MR_Integer) 7))) >> 12)) & (MR_Integer) 1);
  DupElim_38 = ((((MR_Unsigned) ((MR_hl_field(0, Info_13, (MR_Integer) 7))) >> 10)) & (MR_Integer) 1);
  OptJump_25 = ((((MR_Unsigned) ((MR_hl_field(0, Info_13, (MR_Integer) 7))) >> 8)) & (MR_Integer) 1);
  OptFullJump_26 = ((((MR_Unsigned) ((MR_hl_field(0, Info_13, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
  OptLabels_36 = ((((MR_Unsigned) ((MR_hl_field(0, Info_13, (MR_Integer) 7))) >> 6)) & (MR_Integer) 1);
  Peephole_32 = ((((MR_Unsigned) ((MR_hl_field(0, Info_13, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
  Var_120 = ((((MR_Unsigned) ((MR_hl_field(0, Info_13, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);
  PessimizeTailCalls_27 = ((((MR_Unsigned) ((MR_hl_field(0, Info_13, (MR_Integer) 7))) >> 2)) & (MR_Integer) 1);
  switch (OptJump_25) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        Mod1_31 = (MR_Integer) 0;
        STATE_VARIABLE_LabelNumCounter_53_53 = STATE_VARIABLE_LabelNumCounter_0_40;
        STATE_VARIABLE_OptDebugInfo_57_57 = STATE_VARIABLE_OptDebugInfo_0_42;
        STATE_VARIABLE_Instrs_54_54 = STATE_VARIABLE_Instrs_0_44;
      }
      break;
    case (MR_Integer) 0:
      {
        switch (VeryVerbose_24) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ProgressStream_95;

              ll_backend__optimize__get_opt_progress_output_stream_4_p_0(Info_13, &ProgressStream_95);
              mercury__io__write_string_4_p_0(ProgressStream_95, (MR_String) "% Optimizing jumps for ");
              mercury__io__write_string_4_p_0(ProgressStream_95, LabelStr_23);
              mercury__io__write_string_4_p_0(ProgressStream_95, (MR_String) "\n");
            }
            break;
        }
        ll_backend__jumpopt__optimize_jumps_in_proc_12_p_0(LayoutLabelSet_15, MayAlterRtti_17, ProcLabel_16, OptFullJump_26, Final_14, PessimizeTailCalls_27, CheckedNondetTailCalls_28, STATE_VARIABLE_LabelNumCounter_0_40, &STATE_VARIABLE_LabelNumCounter_53_53, STATE_VARIABLE_Instrs_0_44, &STATE_VARIABLE_Instrs_54_54, &Mod1_31);
        ll_backend__optimize__maybe_opt_debug_8_p_0(Info_13, STATE_VARIABLE_Instrs_54_54, STATE_VARIABLE_LabelNumCounter_53_53, (MR_String) "jump", (MR_String) "after jump opt", ProcLabel_16, STATE_VARIABLE_OptDebugInfo_0_42, &STATE_VARIABLE_OptDebugInfo_57_57);
      }
      break;
  }
  switch (Peephole_32) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        Mod2_35 = (MR_Integer) 0;
        STATE_VARIABLE_OptDebugInfo_68_68 = STATE_VARIABLE_OptDebugInfo_57_57;
        STATE_VARIABLE_Instrs_65_65 = STATE_VARIABLE_Instrs_54_54;
      }
      break;
    case (MR_Integer) 0:
      {
        switch (VeryVerbose_24) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ProgressStream_96;

              ll_backend__optimize__get_opt_progress_output_stream_4_p_0(Info_13, &ProgressStream_96);
              mercury__io__write_string_4_p_0(ProgressStream_96, (MR_String) "% Optimizing locally for ");
              mercury__io__write_string_4_p_0(ProgressStream_96, LabelStr_23);
              mercury__io__write_string_4_p_0(ProgressStream_96, (MR_String) "\n");
            }
            break;
        }
        ll_backend__peephole__peephole_optimize_5_p_0(Var_107, Var_120, STATE_VARIABLE_Instrs_54_54, &STATE_VARIABLE_Instrs_65_65, &Mod2_35);
        ll_backend__optimize__maybe_opt_debug_8_p_0(Info_13, STATE_VARIABLE_Instrs_65_65, STATE_VARIABLE_LabelNumCounter_53_53, (MR_String) "peep", (MR_String) "after peephole", ProcLabel_16, STATE_VARIABLE_OptDebugInfo_57_57, &STATE_VARIABLE_OptDebugInfo_68_68);
      }
      break;
  }
  switch (OptLabels_36) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        Mod3_37 = (MR_Integer) 0;
        STATE_VARIABLE_OptDebugInfo_79_79 = STATE_VARIABLE_OptDebugInfo_68_68;
        STATE_VARIABLE_Instrs_76_76 = STATE_VARIABLE_Instrs_65_65;
      }
      break;
    case (MR_Integer) 0:
      {
        switch (VeryVerbose_24) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ProgressStream_97;

              ll_backend__optimize__get_opt_progress_output_stream_4_p_0(Info_13, &ProgressStream_97);
              mercury__io__write_string_4_p_0(ProgressStream_97, (MR_String) "% Optimizing labels for ");
              mercury__io__write_string_4_p_0(ProgressStream_97, LabelStr_23);
              mercury__io__write_string_4_p_0(ProgressStream_97, (MR_String) "\n");
            }
            break;
        }
        ll_backend__labelopt__labelopt_main_5_p_0(Final_14, LayoutLabelSet_15, STATE_VARIABLE_Instrs_65_65, &STATE_VARIABLE_Instrs_76_76, &Mod3_37);
        ll_backend__optimize__maybe_opt_debug_8_p_0(Info_13, STATE_VARIABLE_Instrs_76_76, STATE_VARIABLE_LabelNumCounter_53_53, (MR_String) "label", (MR_String) "after label opt", ProcLabel_16, STATE_VARIABLE_OptDebugInfo_68_68, &STATE_VARIABLE_OptDebugInfo_79_79);
      }
      break;
  }
  switch (DupElim_38) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_LabelNumCounter_41 = STATE_VARIABLE_LabelNumCounter_53_53;
        *STATE_VARIABLE_OptDebugInfo_43 = STATE_VARIABLE_OptDebugInfo_79_79;
        *STATE_VARIABLE_Instrs_45 = STATE_VARIABLE_Instrs_76_76;
      }
      break;
    case (MR_Integer) 0:
      {
        switch (VeryVerbose_24) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ProgressStream_98;

              ll_backend__optimize__get_opt_progress_output_stream_4_p_0(Info_13, &ProgressStream_98);
              mercury__io__write_string_4_p_0(ProgressStream_98, (MR_String) "% Optimizing duplicates for ");
              mercury__io__write_string_4_p_0(ProgressStream_98, LabelStr_23);
              mercury__io__write_string_4_p_0(ProgressStream_98, (MR_String) "\n");
            }
            break;
        }
        ll_backend__dupelim__dupelim_main_5_p_0(ProcLabel_16, STATE_VARIABLE_LabelNumCounter_53_53, STATE_VARIABLE_LabelNumCounter_41, STATE_VARIABLE_Instrs_76_76, STATE_VARIABLE_Instrs_45);
        ll_backend__optimize__maybe_opt_debug_8_p_0(Info_13, *STATE_VARIABLE_Instrs_45, *STATE_VARIABLE_LabelNumCounter_41, (MR_String) "dup", (MR_String) "after duplicates", ProcLabel_16, STATE_VARIABLE_OptDebugInfo_79_79, STATE_VARIABLE_OptDebugInfo_43);
      }
      break;
  }
  succeeded = (Mod1_31 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (Mod2_35 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (Mod3_37 == (MR_Integer) 0);
      if (succeeded)
      {
        TypeInfo_391_391 = (MR_Word) (&ll_backend__optimize_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_391_391, ((MR_Box) (*STATE_VARIABLE_Instrs_45)), ((MR_Box) (STATE_VARIABLE_Instrs_0_44)));
      }
    }
  }
  if (succeeded)
    *Mod_21 = (MR_Integer) 0;
  else
    *Mod_21 = (MR_Integer) 1;
  ll_backend__optimize__get_opt_progress_output_stream_4_p_0(Info_13, &ProgressStream_99);
  Statistics_39 = ((((MR_Unsigned) ((MR_hl_field(0, Info_13, (MR_Integer) 7))) >> 14)) & (MR_Integer) 1);
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_99, Statistics_39);
}

static void MR_CALL 
ll_backend__optimize__optimize_initial_11_p_0(
  MR_Word Info_12,
  MR_Word LayoutLabelSet_13,
  MR_Word ProcLabel_14,
  MR_Word CodeModel_15,
  MR_Word MayAlterRtti_16,
  MR_Word STATE_VARIABLE_LabelNumCounter_0_26,
  MR_Word * STATE_VARIABLE_LabelNumCounter_27,
  MR_Word STATE_VARIABLE_OptDebugInfo_0_28,
  MR_Word * STATE_VARIABLE_OptDebugInfo_29,
  MR_Word STATE_VARIABLE_Instrs_0_30,
  MR_Word * STATE_VARIABLE_Instrs_31)
{
  MR_bool succeeded;
  MR_String LabelStr_20;
  MR_Word OptFrames_21;

  LabelStr_20 = ll_backend__opt_util__format_proc_label_1_f_0(ProcLabel_14);
  OptFrames_21 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 9)) & (MR_Integer) 1);
  succeeded = (OptFrames_21 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (MayAlterRtti_16 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (CodeModel_15 == (MR_Integer) 2);
  }
  if (succeeded)
  {
    MR_Word VeryVerbose_22 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 13)) & (MR_Integer) 1);
    MR_Word _Mod_25;

    switch (VeryVerbose_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ProgressStream_24;

          ll_backend__optimize__get_opt_progress_output_stream_4_p_0(Info_12, &ProgressStream_24);
          mercury__io__write_string_4_p_0(ProgressStream_24, (MR_String) "% Optimizing nondet frames for ");
          mercury__io__write_string_4_p_0(ProgressStream_24, LabelStr_20);
          mercury__io__write_string_4_p_0(ProgressStream_24, (MR_String) "\n");
        }
        break;
    }
    ll_backend__frameopt__frameopt_keep_nondet_frame_7_p_0(ProcLabel_14, LayoutLabelSet_13, STATE_VARIABLE_LabelNumCounter_0_26, STATE_VARIABLE_LabelNumCounter_27, STATE_VARIABLE_Instrs_0_30, STATE_VARIABLE_Instrs_31, &_Mod_25);
    ll_backend__optimize__maybe_opt_debug_8_p_0(Info_12, *STATE_VARIABLE_Instrs_31, *STATE_VARIABLE_LabelNumCounter_27, (MR_String) "ndframeopt", (MR_String) "after nondet frame opt", ProcLabel_14, STATE_VARIABLE_OptDebugInfo_0_28, STATE_VARIABLE_OptDebugInfo_29);
  }
  else
  {
    *STATE_VARIABLE_Instrs_31 = STATE_VARIABLE_Instrs_0_30;
    *STATE_VARIABLE_OptDebugInfo_29 = STATE_VARIABLE_OptDebugInfo_0_28;
    *STATE_VARIABLE_LabelNumCounter_27 = STATE_VARIABLE_LabelNumCounter_0_26;
  }
}

static void MR_CALL 
ll_backend__optimize__get_opt_progress_output_stream_4_p_0(
  MR_Word Info_5,
  MR_Word * ProgressStream_6)
{
  MR_Word Globals_8 = ((MR_Word) ((MR_hl_field(0, Info_5, (MR_Integer) 5))));
  MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(0, Info_5, (MR_Integer) 6))));

  libs__globals__get_progress_output_stream_5_p_0(Globals_8, ModuleName_9, ProgressStream_6);
}

static void MR_CALL 
ll_backend__optimize__maybe_opt_debug_8_p_0(
  MR_Word Info_9,
  MR_Word Instrs_10,
  MR_Word Counter_11,
  MR_String Suffix_12,
  MR_String Msg_13,
  MR_Word ProcLabel_14,
  MR_Word STATE_VARIABLE_OptDebugInfo_0_35,
  MR_Word * STATE_VARIABLE_OptDebugInfo_36)
{
  MR_bool succeeded;

  if ((STATE_VARIABLE_OptDebugInfo_0_35 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_OptDebugInfo_36 = STATE_VARIABLE_OptDebugInfo_0_35;
  else
  {
    MR_String BaseName_16 = ((MR_String) ((MR_hl_field(1, STATE_VARIABLE_OptDebugInfo_0_35, (MR_Integer) 0))));
    MR_Integer OptNum0_17 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_OptDebugInfo_0_35, (MR_Integer) 1))));
    MR_Integer PrevNum_19 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_OptDebugInfo_0_35, (MR_Integer) 3))));
    MR_String PrevFileName_20 = ((MR_String) ((MR_hl_field(1, STATE_VARIABLE_OptDebugInfo_0_35, (MR_Integer) 4))));
    MR_Word PrevInstrs_21 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_OptDebugInfo_0_35, (MR_Integer) 5))));
    MR_Integer OptNum_22 = (MR_Integer) ((MR_Unsigned) OptNum0_17 + (MR_Unsigned) 1);
    MR_String OptFileName_23;
    MR_String DiffFileName_24;
    MR_Word Same_25;
    MR_String Var_38;
    MR_String Var_40;
    MR_String Var_41;
    MR_String Var_42;
    MR_String Var_44;
    MR_String Var_46;
    MR_String Var_47;
    MR_String Var_48;
    MR_Word Res_27;

    succeeded = (OptNum_22 < (MR_Integer) 10);
    if (succeeded)
    {
      MR_String Var_105;

      Var_105 = mercury__string__int_to_string_1_f_0(OptNum_22);
      Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "0", Var_105);
    }
    else
      Var_41 = mercury__string__int_to_string_1_f_0(OptNum_22);
    Var_42 = mercury__string__f_43_43_2_f_0((MR_String) ".", Suffix_12);
    Var_40 = mercury__string__f_43_43_2_f_0(Var_41, Var_42);
    Var_38 = mercury__string__f_43_43_2_f_0((MR_String) ".opt", Var_40);
    OptFileName_23 = mercury__string__f_43_43_2_f_0(BaseName_16, Var_38);
    succeeded = (OptNum_22 < (MR_Integer) 10);
    if (succeeded)
    {
      MR_String Var_108;

      Var_108 = mercury__string__int_to_string_1_f_0(OptNum_22);
      Var_47 = mercury__string__f_43_43_2_f_0((MR_String) "0", Var_108);
    }
    else
      Var_47 = mercury__string__int_to_string_1_f_0(OptNum_22);
    Var_48 = mercury__string__f_43_43_2_f_0((MR_String) ".", Suffix_12);
    Var_46 = mercury__string__f_43_43_2_f_0(Var_47, Var_48);
    Var_44 = mercury__string__f_43_43_2_f_0((MR_String) ".diff", Var_46);
    DiffFileName_24 = mercury__string__f_43_43_2_f_0(BaseName_16, Var_44);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__optimize_scalar_common_1[1]), ((MR_Box) (Instrs_10)), ((MR_Box) (PrevInstrs_21)));
    if (succeeded)
    {
      Same_25 = (MR_Integer) 1;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_OptDebugInfo_36 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (BaseName_16));
        MR_hl_field(1, base, 1) = ((MR_Box) (OptNum_22));
        MR_hl_field(1, base, 2) = ((MR_Box) (OptFileName_23));
        MR_hl_field(1, base, 3) = ((MR_Box) (PrevNum_19));
        MR_hl_field(1, base, 4) = ((MR_Box) (PrevFileName_20));
        MR_hl_field(1, base, 5) = ((MR_Box) (Instrs_10));
      }
    }
    else
    {
      Same_25 = (MR_Integer) 0;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_OptDebugInfo_36 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (BaseName_16));
        MR_hl_field(1, base, 1) = ((MR_Box) (OptNum_22));
        MR_hl_field(1, base, 2) = ((MR_Box) (OptFileName_23));
        MR_hl_field(1, base, 3) = ((MR_Box) (OptNum_22));
        MR_hl_field(1, base, 4) = ((MR_Box) (OptFileName_23));
        MR_hl_field(1, base, 5) = ((MR_Box) (Instrs_10));
      }
    }
    mercury__io__open_output_4_p_0(OptFileName_23, &Res_27);
    if (((MR_tag((MR_Word) Res_27)) == (MR_Integer) 1))
    {
      MR_String Var_65;

      Var_65 = mercury__string__f_43_43_2_f_0((MR_String) "cannot open ", OptFileName_23);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.optimize.maybe_opt_debug\'/8", Var_65);
        return;
      }
    }
    else
    {
      MR_Word FileStream_28 = ((MR_Word) ((MR_hl_field(0, Res_27, (MR_Integer) 0))));
      MR_Integer NextLabel_29;
      MR_Word Var_30;

      mercury__counter__allocate_3_p_0(&NextLabel_29, Counter_11, &Var_30);
      ll_backend__opt_debug__msg_6_p_0(FileStream_28, (MR_Integer) 1, NextLabel_29, Msg_13);
      switch (Same_25) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word AutoComments_31 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 7))) >> 16)) & (MR_Integer) 1);
            MR_String DiffCommand_33;
            MR_Word Var_61;
            MR_String Var_68;
            MR_String Var_69;
            MR_String Var_71;
            MR_String Var_72;
            MR_String Var_74;
            MR_Word Var_34;

            {
              Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_61, 0) = ((MR_Box) (ProcLabel_14));
            }
            ll_backend__opt_debug__maybe_write_instrs_7_p_0(FileStream_28, (MR_Integer) 1, AutoComments_31, Var_61, Instrs_10);
            mercury__io__close_output_3_p_0(FileStream_28);
            Var_74 = mercury__string__f_43_43_2_f_0(DiffFileName_24, (MR_String) "\'");
            Var_72 = mercury__string__f_43_43_2_f_0((MR_String) "\' > \'", Var_74);
            Var_71 = mercury__string__f_43_43_2_f_0(OptFileName_23, Var_72);
            Var_69 = mercury__string__f_43_43_2_f_0((MR_String) "\' \'", Var_71);
            Var_68 = mercury__string__f_43_43_2_f_0(PrevFileName_20, Var_69);
            DiffCommand_33 = mercury__string__f_43_43_2_f_0((MR_String) "diff -u \'", Var_68);
            mercury__io__call_system__call_system_4_p_0(DiffCommand_33, &Var_34);
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(FileStream_28, (MR_String) "same as previous version\n");
            mercury__io__close_output_3_p_0(FileStream_28);
          }
          break;
      }
    }
  }
}

static MR_String MR_CALL 
ll_backend__optimize__num_to_str_1_f_0(
  MR_Integer N_3)
{
  MR_bool succeeded = (N_3 < (MR_Integer) 10);
  MR_String HeadVar__2_2;

  if (succeeded)
  {
    MR_String Var_6;

    Var_6 = mercury__string__int_to_string_1_f_0(N_3);
    HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "0", Var_6);
  }
  else
    HeadVar__2_2 = mercury__string__int_to_string_1_f_0(N_3);
  return HeadVar__2_2;
}

static void MR_CALL 
ll_backend__optimize__output_first_opt_debug_7_p_0(
  MR_Word Info_8,
  MR_String FileName_9,
  MR_Word ProcLabel_10,
  MR_Word Instrs0_11,
  MR_Word Counter_12)
{
  MR_bool succeeded;
  MR_Word MkdirRes_14;
  MR_String Var_23;
  MR_Integer Var_27;

  Var_23 = mercury__string__f_43_43_2_f_0((MR_String) "mkdir -p ", (MR_String) "OptSubdir");
  mercury__io__call_system__call_system_4_p_0(Var_23, &MkdirRes_14);
  succeeded = ((MR_tag((MR_Word) MkdirRes_14)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_27 = ((MR_Integer) ((MR_hl_field(0, MkdirRes_14, (MR_Integer) 0))));
    succeeded = (Var_27 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    MR_Word Res_15;

    mercury__io__open_output_4_p_0(FileName_9, &Res_15);
    if (((MR_tag((MR_Word) Res_15)) == (MR_Integer) 1))
    {
      MR_String Var_37;

      Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "cannot open ", FileName_9);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.optimize.output_first_opt_debug\'/7", Var_37);
        return;
      }
    }
    else
    {
      MR_Word FileStream_16 = ((MR_Word) ((MR_hl_field(0, Res_15, (MR_Integer) 0))));
      MR_Integer NextLabel_17;
      MR_Word AutoComments_19;
      MR_Word Var_33;
      MR_Word Var_18;

      mercury__counter__allocate_3_p_0(&NextLabel_17, Counter_12, &Var_18);
      ll_backend__opt_debug__msg_6_p_0(FileStream_16, (MR_Integer) 1, NextLabel_17, (MR_String) "before optimization");
      AutoComments_19 = ((((MR_Unsigned) ((MR_hl_field(0, Info_8, (MR_Integer) 7))) >> 16)) & (MR_Integer) 1);
      {
        Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_33, 0) = ((MR_Box) (ProcLabel_10));
      }
      ll_backend__opt_debug__maybe_write_instrs_7_p_0(FileStream_16, (MR_Integer) 1, AutoComments_19, Var_33, Instrs0_11);
      mercury__io__close_output_3_p_0(FileStream_16);
    }
  }
  else
  {
    MR_String Var_40;

    Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "cannot make ", (MR_String) "OptSubdir");
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.optimize.output_first_opt_debug\'/7", Var_40);
      return;
    }
  }
}

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_1(
  void * env_ptr_arg)
{
  struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_3(
  void * env_ptr_arg)
{
  struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStr_47 = ((MR_String) ((env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__conv0_DebugOptPredIdStr_47));
  ll_backend__optimize__need_opt_debug_info_5_p_0_2(env_ptr);
}

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_2(
  void * env_ptr_arg)
{
  struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = mercury__string__to_int_2_p_0((env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStr_47, &(env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredId_48);
  if ((env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded)
  {
    (env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = ((env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredId_48 == (env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__PredIdInt_16);
    if ((env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded)
      ll_backend__optimize__need_opt_debug_info_5_p_0_1(env_ptr);
  }
}

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_4(
  void * env_ptr_arg)
{
  struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &(env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__conv0_DebugOptPredIdStr_47, (env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStrs_12, ll_backend__optimize__need_opt_debug_info_5_p_0_3, env_ptr);
      (env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_5(
  void * env_ptr_arg)
{
  struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__commit_1, 1);
}

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_7(
  void * env_ptr_arg)
{
  struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStr_45 = ((MR_String) ((env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__conv1_DebugOptPredIdStr_45));
  ll_backend__optimize__need_opt_debug_info_5_p_0_6(env_ptr);
}

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_6(
  void * env_ptr_arg)
{
  struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = mercury__string__to_int_2_p_0((env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStr_45, &(env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredId_46);
  if ((env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded)
  {
    (env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = ((env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredId_46 == (env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__PredIdInt_16);
    if ((env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded)
      ll_backend__optimize__need_opt_debug_info_5_p_0_5(env_ptr);
  }
}

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_8(
  void * env_ptr_arg)
{
  struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__commit_1) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &(env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__conv1_DebugOptPredIdStr_45, (env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStrs_12, ll_backend__optimize__need_opt_debug_info_5_p_0_7, env_ptr);
      (env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0(
  MR_Word Info_6,
  MR_String Name_7,
  MR_Integer Arity_8,
  MR_Word PredProcId_9,
  MR_Word * MaybeBaseName_10)
{
  struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s env;

  {
    MR_Word DebugOpt_11;
    MR_Word DebugOptPredNames_13;
    MR_Word PredId_14;
    MR_Integer ProcId_15;
    MR_Integer ProcIdInt_17;
    MR_Integer Var_51;
    MR_Integer Var_52;
    MR_Integer Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Unsigned packed_word_0;

    (env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStrs_12 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 0))));
    DebugOptPredNames_13 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 1))));
    Var_51 = ((MR_Integer) ((MR_hl_field(0, Info_6, (MR_Integer) 2))));
    Var_52 = ((MR_Integer) ((MR_hl_field(0, Info_6, (MR_Integer) 3))));
    Var_53 = ((MR_Integer) ((MR_hl_field(0, Info_6, (MR_Integer) 4))));
    Var_54 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 5))));
    Var_55 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 6))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 7)));
    Var_56 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 7))) >> 18)) & (MR_Integer) 7);
    DebugOpt_11 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    Var_57 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 7))) >> 16)) & (MR_Integer) 1);
    Var_58 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 7))) >> 15)) & (MR_Integer) 1);
    Var_59 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 7))) >> 14)) & (MR_Integer) 1);
    Var_60 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 7))) >> 13)) & (MR_Integer) 1);
    Var_61 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 7))) >> 12)) & (MR_Integer) 1);
    Var_62 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 7))) >> 11)) & (MR_Integer) 1);
    Var_63 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 7))) >> 10)) & (MR_Integer) 1);
    Var_64 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 7))) >> 9)) & (MR_Integer) 1);
    Var_65 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 7))) >> 8)) & (MR_Integer) 1);
    Var_66 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
    Var_67 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 7))) >> 6)) & (MR_Integer) 1);
    Var_68 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
    Var_69 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);
    Var_70 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 7))) >> 3)) & (MR_Integer) 1);
    Var_71 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 7))) >> 2)) & (MR_Integer) 1);
    Var_72 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 7))) >> 1)) & (MR_Integer) 1);
    Var_73 = ((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 7))) & (MR_Integer) 1);
    PredId_14 = ((MR_Word) ((MR_hl_field(0, PredProcId_9, (MR_Integer) 0))));
    ProcId_15 = ((MR_Integer) ((MR_hl_field(0, PredProcId_9, (MR_Integer) 1))));
    hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_14, &(env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__PredIdInt_16);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_15, &ProcIdInt_17);
    (env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = (DebugOpt_11 == (MR_Integer) 1);
    if ((env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded)
    {
      if (((env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStrs_12 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((DebugOptPredNames_13 == (MR_Word) ((MR_Unsigned) 0U)))
          (env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = MR_TRUE;
        else
          (env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Name_7)), DebugOptPredNames_13);
      else
      if ((DebugOptPredNames_13 == (MR_Word) ((MR_Unsigned) 0U)))
        ll_backend__optimize__need_opt_debug_info_5_p_0_4(&env);
      else
      {
        ll_backend__optimize__need_opt_debug_info_5_p_0_8(&env);
        if (!((env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded))
          (env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Name_7)), DebugOptPredNames_13);
      }
    }
    if ((env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded)
    {
      MR_String BaseName_28;
      MR_String Var_29;
      MR_String Var_30;
      MR_String Var_32;
      MR_String Var_33;
      MR_String Var_34;
      MR_String Var_36;
      MR_String Var_37;
      MR_String Var_38;
      MR_String Var_40;
      MR_String Var_41;
      MR_String Var_42;
      MR_String Var_44;

      Var_29 = ll_backend__optimize__opt_subdir_name_0_f_0();
      Var_33 = ll_backend__optimize__mangle_name_as_filename_1_f_0(Name_7);
      Var_37 = mercury__string__int_to_string_1_f_0(Arity_8);
      Var_41 = mercury__string__int_to_string_1_f_0((env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__PredIdInt_16);
      Var_44 = mercury__string__int_to_string_1_f_0(ProcIdInt_17);
      Var_42 = mercury__string__f_43_43_2_f_0((MR_String) ".proc", Var_44);
      Var_40 = mercury__string__f_43_43_2_f_0(Var_41, Var_42);
      Var_38 = mercury__string__f_43_43_2_f_0((MR_String) ".pred", Var_40);
      Var_36 = mercury__string__f_43_43_2_f_0(Var_37, Var_38);
      Var_34 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_36);
      Var_32 = mercury__string__f_43_43_2_f_0(Var_33, Var_34);
      Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_32);
      BaseName_28 = mercury__string__f_43_43_2_f_0(Var_29, Var_30);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeBaseName_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (BaseName_28));
      }
    }
    else
      *MaybeBaseName_10 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static void MR_CALL 
ll_backend__optimize__mangle_name_as_filename_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_String conv0_STATE_VARIABLE_Str_7;

  ll_backend__optimize__escape_dir_char_3_p_0(((MR_Char) (MR_Word) wrapper_arg_1), ((MR_String) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Str_7);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Str_7));
}

static MR_String MR_CALL 
ll_backend__optimize__mangle_name_as_filename_1_f_0(
  MR_String Str0_3)
{
  MR_String Str_4;
  MR_Box conv1_Str_4;

  mercury__string__foldl_4_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__optimize_scalar_common_3[0]), Str0_3, ((MR_Box) ((MR_String) "")), &conv1_Str_4);
  Str_4 = ((MR_String) (conv1_Str_4));
  return Str_4;
}

static MR_String MR_CALL 
ll_backend__optimize__opt_subdir_name_0_f_0(void)
{
  return (MR_String) "OptSubdir";
}

static MR_bool MR_CALL 
ll_backend__optimize____Unify____llds_opt_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__optimize____Unify____llds_opt_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__optimize____Compare____llds_opt_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__optimize____Compare____llds_opt_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__optimize____Unify____opt_debug_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__optimize____Unify____opt_debug_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__optimize____Compare____opt_debug_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__optimize____Compare____opt_debug_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__optimize__init(void)
{
}

void mercury__ll_backend__optimize__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__optimize__ll_backend__optimize__type_ctor_info_llds_opt_info_0);
	MR_register_type_ctor_info(&ll_backend__optimize__ll_backend__optimize__type_ctor_info_opt_debug_info_0);
}

void mercury__ll_backend__optimize__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__optimize__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.optimize.
