/*
** Automatically generated from `optimize.m'
** by the Mercury compiler,
** version rotd-2017-02-22
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


/* :- module ll_backend.optimize. */
/* :- implementation. */

/*
INIT mercury__ll_backend__optimize__init
ENDINIT
*/

#include "ll_backend.optimize.mih"


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
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "libs.file_util.mih"
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
#include "dir.mih"
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

static const MR_PseudoTypeInfo ll_backend__optimize__ll_backend__optimize__field_types_llds_opt_info_0_0[24];

static const MR_ConstString ll_backend__optimize__ll_backend__optimize__field_names_llds_opt_info_0_0[24];

static const MR_DuArgLocn ll_backend__optimize__ll_backend__optimize__field_locns_llds_opt_info_0_0[24];

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

static MR_bool MR_CALL 
ll_backend__optimize____Unify____llds_opt_info_0_0_10001(
  MR_Box ll_backend__optimize__wrapper_arg_1,
  MR_Box ll_backend__optimize__wrapper_arg_2);

static void MR_CALL 
ll_backend__optimize____Compare____llds_opt_info_0_0_10001(
  MR_Box * ll_backend__optimize__wrapper_arg_1,
  MR_Box ll_backend__optimize__wrapper_arg_2,
  MR_Box ll_backend__optimize__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__optimize____Unify____opt_debug_info_0_0_10001(
  MR_Box ll_backend__optimize__wrapper_arg_1,
  MR_Box ll_backend__optimize__wrapper_arg_2);

static void MR_CALL 
ll_backend__optimize____Compare____opt_debug_info_0_0_10001(
  MR_Box * ll_backend__optimize__wrapper_arg_1,
  MR_Box ll_backend__optimize__wrapper_arg_2,
  MR_Box ll_backend__optimize__wrapper_arg_3);

static void MR_CALL 
ll_backend__optimize____Compare____opt_debug_info_0_0(
  MR_Word * ll_backend__optimize__HeadVar__1_1,
  MR_Word ll_backend__optimize__HeadVar__2_2,
  MR_Word ll_backend__optimize__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__optimize____Unify____opt_debug_info_0_0(
  MR_Word ll_backend__optimize__HeadVar__1_1,
  MR_Word ll_backend__optimize__HeadVar__2_2);

static void MR_CALL 
ll_backend__optimize____Compare____llds_opt_info_0_0(
  MR_Word * ll_backend__optimize__HeadVar__1_1,
  MR_Word ll_backend__optimize__HeadVar__2_2,
  MR_Word ll_backend__optimize__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__optimize____Unify____llds_opt_info_0_0(
  MR_Word ll_backend__optimize__HeadVar__1_1,
  MR_Word ll_backend__optimize__HeadVar__2_2);

static MR_Word MR_CALL 
ll_backend__optimize__init_llds_opt_info_1_f_0(
  MR_Word ll_backend__optimize__Globals_3);

static void MR_CALL 
ll_backend__optimize__escape_dir_char_3_p_0(
  MR_Char ll_backend__optimize__Char_4,
  MR_String ll_backend__optimize__STATE_VARIABLE_Str_0_6,
  MR_String * ll_backend__optimize__STATE_VARIABLE_Str_7);

static void MR_CALL 
ll_backend__optimize__mangle_name_as_filename_1_f_0_1(
  MR_Box ll_backend__optimize__closure_arg,
  MR_Box ll_backend__optimize__wrapper_arg_1,
  MR_Box ll_backend__optimize__wrapper_arg_2,
  MR_Box * ll_backend__optimize__wrapper_arg_3);

static MR_String MR_CALL 
ll_backend__optimize__mangle_name_as_filename_1_f_0(
  MR_String ll_backend__optimize__Str0_3);

static void MR_CALL 
ll_backend__optimize__optimize_last_8_p_0(
  MR_Word ll_backend__optimize__Info_9,
  MR_Word ll_backend__optimize__LayoutLabelSet_10,
  MR_Word ll_backend__optimize__ProcLabel_11,
  MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_24,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_25,
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_26,
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_27,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_28);

static void MR_CALL 
ll_backend__optimize__optimize_middle_12_p_0(
  MR_Word ll_backend__optimize__Info_13,
  MR_Word ll_backend__optimize__Final_14,
  MR_Word ll_backend__optimize__LayoutLabelSet_15,
  MR_Word ll_backend__optimize__ProcLabel_16,
  MR_Word ll_backend__optimize__CodeModel_17,
  MR_Word ll_backend__optimize__MayAlterRtti_18,
  MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_41,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_42,
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_43,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_44,
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_45,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_46);

static void MR_CALL 
ll_backend__optimize__optimize_repeated_12_p_0(
  MR_Word ll_backend__optimize__Info_13,
  MR_Word ll_backend__optimize__Final_14,
  MR_Word ll_backend__optimize__LayoutLabelSet_15,
  MR_Word ll_backend__optimize__ProcLabel_16,
  MR_Word ll_backend__optimize__MayAlterRtti_17,
  MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_39,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_40,
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_41,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_42,
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_43,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_44,
  MR_Word * ll_backend__optimize__Mod_21);

static void MR_CALL 
ll_backend__optimize__optimize_repeat_11_p_0(
  MR_Word ll_backend__optimize__Info_12,
  MR_Integer ll_backend__optimize__CurIter_13,
  MR_Word ll_backend__optimize__LayoutLabelSet_14,
  MR_Word ll_backend__optimize__ProcLabel_15,
  MR_Word ll_backend__optimize__MayAlterRtti_16,
  MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_23,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_24,
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_25,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_26,
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_27,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_28);

static void MR_CALL 
ll_backend__optimize__optimize_initial_11_p_0(
  MR_Word ll_backend__optimize__Info_12,
  MR_Word ll_backend__optimize__LayoutLabelSet_13,
  MR_Word ll_backend__optimize__ProcLabel_14,
  MR_Word ll_backend__optimize__CodeModel_15,
  MR_Word ll_backend__optimize__MayAlterRtti_16,
  MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_25,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_26,
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_27,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_28,
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_29,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_30);

static void MR_CALL 
ll_backend__optimize__maybe_opt_debug_8_p_0(
  MR_Word ll_backend__optimize__Info_9,
  MR_Word ll_backend__optimize__Instrs_10,
  MR_Word ll_backend__optimize__Counter_11,
  MR_String ll_backend__optimize__Suffix_12,
  MR_String ll_backend__optimize__Msg_13,
  MR_Word ll_backend__optimize__ProcLabel_14,
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_38);

static MR_String MR_CALL 
ll_backend__optimize__num_to_str_1_f_0(
  MR_Integer ll_backend__optimize__N_3);

static MR_String MR_CALL 
ll_backend__optimize__opt_subdir_name_0_f_0(void);

static void MR_CALL 
ll_backend__optimize__output_first_opt_debug_7_p_0(
  MR_Word ll_backend__optimize__Info_8,
  MR_String ll_backend__optimize__FileName_9,
  MR_Word ll_backend__optimize__ProcLabel_10,
  MR_Word ll_backend__optimize__Instrs0_11,
  MR_Word ll_backend__optimize__Counter_12);

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_1(
  void * ll_backend__optimize__env_ptr_arg);

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_3(
  void * ll_backend__optimize__env_ptr_arg);

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_2(
  void * ll_backend__optimize__env_ptr_arg);

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_4(
  void * ll_backend__optimize__env_ptr_arg);

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_5(
  void * ll_backend__optimize__env_ptr_arg);

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_7(
  void * ll_backend__optimize__env_ptr_arg);

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_6(
  void * ll_backend__optimize__env_ptr_arg);

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_8(
  void * ll_backend__optimize__env_ptr_arg);

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0(
  MR_Word ll_backend__optimize__Info_6,
  MR_String ll_backend__optimize__Name_7,
  MR_Integer ll_backend__optimize__Arity_8,
  MR_Word ll_backend__optimize__PredProcId_9,
  MR_Word * ll_backend__optimize__MaybeBaseName_10);

static MR_Word MR_CALL 
ll_backend__optimize__make_internal_label_for_proc_label_2_f_0(
  MR_Word ll_backend__optimize__ProcLabel_4,
  MR_Integer ll_backend__optimize__LabelNum_5);

static MR_Box MR_CALL 
ll_backend__optimize__optimize_proc_4_p_0_1(
  MR_Box ll_backend__optimize__closure_arg,
  MR_Box ll_backend__optimize__wrapper_arg_1);


static /* final */ const MR_Box ll_backend__optimize_scalar_common_1[2][2];

static /* final */ const MR_Box ll_backend__optimize_scalar_common_2[2][6];

static /* final */ const MR_Box ll_backend__optimize_scalar_common_3[1][3];




static /* final */ const MR_Box ll_backend__optimize_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
};

static /* final */ const MR_Box ll_backend__optimize_scalar_common_2[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ll_backend__optimize_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ll_backend__optimize_scalar_common_2[1])),
    ((MR_Box) (ll_backend__optimize__mangle_name_as_filename_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 ll_backend__optimize__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo ll_backend__optimize__ll_backend__optimize__field_types_llds_opt_info_0_0[24] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_gc_method_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__optimize__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__optimize__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_ConstString ll_backend__optimize__ll_backend__optimize__field_names_llds_opt_info_0_0[24] = {
  (MR_String) "lopt_auto_comments",
  (MR_String) "lopt_detailed_statistics",
  (MR_String) "lopt_very_verbose",
  (MR_String) "lopt_checked_nondet_tailcalls",
  (MR_String) "lopt_num_real_r_regs",
  (MR_String) "lopt_gc_method",
  (MR_String) "lopt_opt_delay_slots",
  (MR_String) "lopt_opt_dups",
  (MR_String) "lopt_opt_frames",
  (MR_String) "lopt_frameopt_comments",
  (MR_String) "lopt_opt_jumps",
  (MR_String) "lopt_opt_fulljumps",
  (MR_String) "lopt_opt_labels",
  (MR_String) "lopt_opt_peep",
  (MR_String) "lopt_opt_peep_mkword",
  (MR_String) "lopt_opt_reassign",
  (MR_String) "lopt_pes_tailcalls",
  (MR_String) "lopt_std_labels",
  (MR_String) "lopt_use_local_vars",
  (MR_String) "lopt_local_vars_access_threshold",
  (MR_String) "lopt_opt_repeat",
  (MR_String) "lopt_debug_opt",
  (MR_String) "lopt_debug_opt_pred_ids",
  (MR_String) "lopt_debug_opt_pred_names"
};

static const MR_DuArgLocn ll_backend__optimize__ll_backend__optimize__field_locns_llds_opt_info_0_0[24] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 7,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 8,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 9,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 10,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 11,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 12,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 13,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 14,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 15,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc ll_backend__optimize__ll_backend__optimize__du_functor_desc_llds_opt_info_0_0 = {
  (MR_String) "llds_opt_info",
  (MR_Integer) 24,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__optimize__ll_backend__optimize__field_types_llds_opt_info_0_0,
  ll_backend__optimize__ll_backend__optimize__field_names_llds_opt_info_0_0,
  ll_backend__optimize__ll_backend__optimize__field_locns_llds_opt_info_0_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_stag_ordered_llds_opt_info_0_0[1] = {
  &ll_backend__optimize__ll_backend__optimize__du_functor_desc_llds_opt_info_0_0
};

static const MR_DuPtagLayout ll_backend__optimize__ll_backend__optimize__du_ptag_ordered_llds_opt_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__optimize__ll_backend__optimize__du_stag_ordered_llds_opt_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_name_ordered_llds_opt_info_0[1] = {
  &ll_backend__optimize__ll_backend__optimize__du_functor_desc_llds_opt_info_0_0
};

static const MR_Integer ll_backend__optimize__ll_backend__optimize__functor_number_map_llds_opt_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__optimize__ll_backend__optimize__type_ctor_info_llds_opt_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__optimize____Unify____llds_opt_info_0_0_10001)),
  ((MR_Box) (ll_backend__optimize____Compare____llds_opt_info_0_0_10001)),
  (MR_String) "ll_backend.optimize",
  (MR_String) "llds_opt_info",
  {     ll_backend__optimize__ll_backend__optimize__du_name_ordered_llds_opt_info_0 },
  {     ll_backend__optimize__ll_backend__optimize__du_ptag_ordered_llds_opt_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__optimize__ll_backend__optimize__functor_number_map_llds_opt_info_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__optimize__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

static const MR_PseudoTypeInfo ll_backend__optimize__ll_backend__optimize__field_types_opt_debug_info_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__optimize__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0
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
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__optimize__ll_backend__optimize__field_types_opt_debug_info_0_0,
  ll_backend__optimize__ll_backend__optimize__field_names_opt_debug_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc ll_backend__optimize__ll_backend__optimize__du_functor_desc_opt_debug_info_0_1 = {
  (MR_String) "no_opt_debug_info",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_stag_ordered_opt_debug_info_0_0[1] = {
  &ll_backend__optimize__ll_backend__optimize__du_functor_desc_opt_debug_info_0_1
};

static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_stag_ordered_opt_debug_info_0_1[1] = {
  &ll_backend__optimize__ll_backend__optimize__du_functor_desc_opt_debug_info_0_0
};

static const MR_DuPtagLayout ll_backend__optimize__ll_backend__optimize__du_ptag_ordered_opt_debug_info_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    ll_backend__optimize__ll_backend__optimize__du_stag_ordered_opt_debug_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__optimize__ll_backend__optimize__du_stag_ordered_opt_debug_info_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__optimize____Unify____opt_debug_info_0_0_10001)),
  ((MR_Box) (ll_backend__optimize____Compare____opt_debug_info_0_0_10001)),
  (MR_String) "ll_backend.optimize",
  (MR_String) "opt_debug_info",
  {     ll_backend__optimize__ll_backend__optimize__du_name_ordered_opt_debug_info_0 },
  {     ll_backend__optimize__ll_backend__optimize__du_ptag_ordered_opt_debug_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__optimize__ll_backend__optimize__functor_number_map_opt_debug_info_0
};

static MR_bool MR_CALL 
ll_backend__optimize____Unify____llds_opt_info_0_0_10001(
  MR_Box ll_backend__optimize__wrapper_arg_1,
  MR_Box ll_backend__optimize__wrapper_arg_2)
{
  {
    MR_bool ll_backend__optimize__succeeded;

    {
      ll_backend__optimize__succeeded = ll_backend__optimize____Unify____llds_opt_info_0_0(((MR_Word) ll_backend__optimize__wrapper_arg_1), ((MR_Word) ll_backend__optimize__wrapper_arg_2));
    }
    return ll_backend__optimize__succeeded;
  }
}

static void MR_CALL 
ll_backend__optimize____Compare____llds_opt_info_0_0_10001(
  MR_Box * ll_backend__optimize__wrapper_arg_1,
  MR_Box ll_backend__optimize__wrapper_arg_2,
  MR_Box ll_backend__optimize__wrapper_arg_3)
{
  {
    MR_Word ll_backend__optimize__conv0_HeadVar__1_1;

    {
      ll_backend__optimize____Compare____llds_opt_info_0_0(&ll_backend__optimize__conv0_HeadVar__1_1, ((MR_Word) ll_backend__optimize__wrapper_arg_2), ((MR_Word) ll_backend__optimize__wrapper_arg_3));
    }
    *ll_backend__optimize__wrapper_arg_1 = ((MR_Box) (ll_backend__optimize__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__optimize____Unify____opt_debug_info_0_0_10001(
  MR_Box ll_backend__optimize__wrapper_arg_1,
  MR_Box ll_backend__optimize__wrapper_arg_2)
{
  {
    MR_bool ll_backend__optimize__succeeded;

    {
      ll_backend__optimize__succeeded = ll_backend__optimize____Unify____opt_debug_info_0_0(((MR_Word) ll_backend__optimize__wrapper_arg_1), ((MR_Word) ll_backend__optimize__wrapper_arg_2));
    }
    return ll_backend__optimize__succeeded;
  }
}

static void MR_CALL 
ll_backend__optimize____Compare____opt_debug_info_0_0_10001(
  MR_Box * ll_backend__optimize__wrapper_arg_1,
  MR_Box ll_backend__optimize__wrapper_arg_2,
  MR_Box ll_backend__optimize__wrapper_arg_3)
{
  {
    MR_Word ll_backend__optimize__conv0_HeadVar__1_1;

    {
      ll_backend__optimize____Compare____opt_debug_info_0_0(&ll_backend__optimize__conv0_HeadVar__1_1, ((MR_Word) ll_backend__optimize__wrapper_arg_2), ((MR_Word) ll_backend__optimize__wrapper_arg_3));
    }
    *ll_backend__optimize__wrapper_arg_1 = ((MR_Box) (ll_backend__optimize__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
ll_backend__optimize____Compare____opt_debug_info_0_0(
  MR_Word * ll_backend__optimize__HeadVar__1_1,
  MR_Word ll_backend__optimize__HeadVar__2_2,
  MR_Word ll_backend__optimize__HeadVar__3_3)
{
  {
    MR_bool ll_backend__optimize__succeeded;
    MR_Integer ll_backend__optimize__CastX_33 = (MR_Integer) ll_backend__optimize__HeadVar__2_2;
    MR_Integer ll_backend__optimize__CastY_34 = (MR_Integer) ll_backend__optimize__HeadVar__3_3;

    ll_backend__optimize__succeeded = (ll_backend__optimize__CastX_33 == ll_backend__optimize__CastY_34);
    if (ll_backend__optimize__succeeded)
      *ll_backend__optimize__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((ll_backend__optimize__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ll_backend__optimize__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *ll_backend__optimize__HeadVar__1_1 = (MR_Integer) 0;
      else
        *ll_backend__optimize__HeadVar__1_1 = (MR_Integer) 2;
    else
      {
        MR_Word ll_backend__optimize__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 5)));
        MR_String ll_backend__optimize__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer ll_backend__optimize__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 3)));
        MR_String ll_backend__optimize__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer ll_backend__optimize__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 1)));
        MR_String ll_backend__optimize__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)));

        if ((ll_backend__optimize__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__optimize__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_String ll_backend__optimize__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 0)));
            MR_Integer ll_backend__optimize__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 1)));
            MR_String ll_backend__optimize__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)));
            MR_Integer ll_backend__optimize__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 3)));
            MR_String ll_backend__optimize__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 4)));
            MR_Word ll_backend__optimize__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 5)));
            MR_Word ll_backend__optimize__V_16_16;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__optimize__V_16_16, ll_backend__optimize__V_46_46, ll_backend__optimize__V_10_10);
            }
            ll_backend__optimize__succeeded = (ll_backend__optimize__V_16_16 == (MR_Integer) 0);
            ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
            if (ll_backend__optimize__succeeded)
              *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_16_16;
            else
              {
                MR_Word ll_backend__optimize__V_17_17;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_17_17, ll_backend__optimize__V_45_45, ll_backend__optimize__V_11_11);
                }
                ll_backend__optimize__succeeded = (ll_backend__optimize__V_17_17 == (MR_Integer) 0);
                ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
                if (ll_backend__optimize__succeeded)
                  *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_17_17;
                else
                  {
                    MR_Word ll_backend__optimize__V_18_18;

                    {
                      mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__optimize__V_18_18, ll_backend__optimize__V_44_44, ll_backend__optimize__V_12_12);
                    }
                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_18_18 == (MR_Integer) 0);
                    ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
                    if (ll_backend__optimize__succeeded)
                      *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_18_18;
                    else
                      {
                        MR_Word ll_backend__optimize__V_19_19;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_19_19, ll_backend__optimize__V_43_43, ll_backend__optimize__V_13_13);
                        }
                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_19_19 == (MR_Integer) 0);
                        ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
                        if (ll_backend__optimize__succeeded)
                          *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_19_19;
                        else
                          {
                            MR_Word ll_backend__optimize__V_20_20;

                            {
                              mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__optimize__V_20_20, ll_backend__optimize__V_42_42, ll_backend__optimize__V_14_14);
                            }
                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_20_20 == (MR_Integer) 0);
                            ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
                            if (ll_backend__optimize__succeeded)
                              *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_20_20;
                            else
                              {
                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__optimize_scalar_common_1[1], ll_backend__optimize__HeadVar__1_1, ((MR_Box) (ll_backend__optimize__V_41_41)), ((MR_Box) (ll_backend__optimize__V_15_15)));
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
ll_backend__optimize____Unify____opt_debug_info_0_0(
  MR_Word ll_backend__optimize__HeadVar__1_1,
  MR_Word ll_backend__optimize__HeadVar__2_2)
{
  {
    MR_bool ll_backend__optimize__succeeded;
    MR_Integer ll_backend__optimize__CastX_17 = (MR_Integer) ll_backend__optimize__HeadVar__1_1;
    MR_Integer ll_backend__optimize__CastY_18 = (MR_Integer) ll_backend__optimize__HeadVar__2_2;

    ll_backend__optimize__succeeded = (ll_backend__optimize__CastX_17 == ll_backend__optimize__CastY_18);
    if (ll_backend__optimize__succeeded)
      ll_backend__optimize__succeeded = MR_TRUE;
    else
    if ((ll_backend__optimize__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer ll_backend__optimize__CastX_15 = (MR_Integer) ll_backend__optimize__HeadVar__1_1;
        MR_Integer ll_backend__optimize__CastY_16 = (MR_Integer) ll_backend__optimize__HeadVar__2_2;

        ll_backend__optimize__succeeded = (ll_backend__optimize__CastY_16 == ll_backend__optimize__CastX_15);
      }
    else
      {
        MR_Word ll_backend__optimize__TypeInfo_19_19;
        MR_String ll_backend__optimize__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer ll_backend__optimize__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 1)));
        MR_String ll_backend__optimize__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer ll_backend__optimize__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 3)));
        MR_String ll_backend__optimize__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ll_backend__optimize__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 5)));
        MR_String ll_backend__optimize__V_9_9;
        MR_Integer ll_backend__optimize__V_10_10;
        MR_String ll_backend__optimize__V_11_11;
        MR_Integer ll_backend__optimize__V_12_12;
        MR_String ll_backend__optimize__V_13_13;
        MR_Word ll_backend__optimize__V_14_14;

        ll_backend__optimize__succeeded = ((MR_tag((MR_Word) ll_backend__optimize__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__optimize__succeeded)
          {
            ll_backend__optimize__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)));
            ll_backend__optimize__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 1)));
            ll_backend__optimize__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)));
            ll_backend__optimize__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 3)));
            ll_backend__optimize__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 4)));
            ll_backend__optimize__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 5)));
            ll_backend__optimize__succeeded = (strcmp(ll_backend__optimize__V_3_3, ll_backend__optimize__V_9_9) == 0);
            if (ll_backend__optimize__succeeded)
              {
                ll_backend__optimize__succeeded = (ll_backend__optimize__V_4_4 == ll_backend__optimize__V_10_10);
                if (ll_backend__optimize__succeeded)
                  {
                    ll_backend__optimize__succeeded = (strcmp(ll_backend__optimize__V_5_5, ll_backend__optimize__V_11_11) == 0);
                    if (ll_backend__optimize__succeeded)
                      {
                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_6_6 == ll_backend__optimize__V_12_12);
                        if (ll_backend__optimize__succeeded)
                          {
                            ll_backend__optimize__succeeded = (strcmp(ll_backend__optimize__V_7_7, ll_backend__optimize__V_13_13) == 0);
                            if (ll_backend__optimize__succeeded)
                              {
                                ll_backend__optimize__TypeInfo_19_19 = (MR_Word) &ll_backend__optimize_scalar_common_1[1];
                                {
                                  ll_backend__optimize__succeeded = mercury__builtin__unify_2_p_0(ll_backend__optimize__TypeInfo_19_19, ((MR_Box) (ll_backend__optimize__V_8_8)), ((MR_Box) (ll_backend__optimize__V_14_14)));
                                }
                              }
                          }
                      }
                  }
              }
          }
      }
    return ll_backend__optimize__succeeded;
  }
}

static void MR_CALL 
ll_backend__optimize____Compare____llds_opt_info_0_0(
  MR_Word * ll_backend__optimize__HeadVar__1_1,
  MR_Word ll_backend__optimize__HeadVar__2_2,
  MR_Word ll_backend__optimize__HeadVar__3_3)
{
  {
    MR_bool ll_backend__optimize__succeeded;
    MR_Integer ll_backend__optimize__CastX_75 = (MR_Integer) ll_backend__optimize__HeadVar__2_2;
    MR_Integer ll_backend__optimize__CastY_76 = (MR_Integer) ll_backend__optimize__HeadVar__3_3;

    ll_backend__optimize__succeeded = (ll_backend__optimize__CastX_75 == ll_backend__optimize__CastY_76);
    if (ll_backend__optimize__succeeded)
      *ll_backend__optimize__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__optimize__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Integer ll_backend__optimize__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__optimize__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 7);
        MR_Word ll_backend__optimize__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
        MR_Integer ll_backend__optimize__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer ll_backend__optimize__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ll_backend__optimize__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ll_backend__optimize__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ll_backend__optimize__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word ll_backend__optimize__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Integer ll_backend__optimize__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__optimize__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) & (MR_Integer) 7);
        MR_Word ll_backend__optimize__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
        MR_Integer ll_backend__optimize__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 3)));
        MR_Integer ll_backend__optimize__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ll_backend__optimize__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word ll_backend__optimize__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word ll_backend__optimize__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word ll_backend__optimize__V_52_52;
        MR_Integer ll_backend__optimize__V_101_101 = (MR_Integer) ll_backend__optimize__V_4_4;
        MR_Integer ll_backend__optimize__V_102_102 = (MR_Integer) ll_backend__optimize__V_28_28;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_52_52, ll_backend__optimize__V_101_101, ll_backend__optimize__V_102_102);
        }
        ll_backend__optimize__succeeded = (ll_backend__optimize__V_52_52 == (MR_Integer) 0);
        ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
        if (ll_backend__optimize__succeeded)
          *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_52_52;
        else
          {
            MR_Word ll_backend__optimize__V_53_53;
            MR_Integer ll_backend__optimize__V_103_103 = (MR_Integer) ll_backend__optimize__V_5_5;
            MR_Integer ll_backend__optimize__V_104_104 = (MR_Integer) ll_backend__optimize__V_29_29;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_53_53, ll_backend__optimize__V_103_103, ll_backend__optimize__V_104_104);
            }
            ll_backend__optimize__succeeded = (ll_backend__optimize__V_53_53 == (MR_Integer) 0);
            ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
            if (ll_backend__optimize__succeeded)
              *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_53_53;
            else
              {
                MR_Word ll_backend__optimize__V_54_54;
                MR_Integer ll_backend__optimize__V_105_105 = (MR_Integer) ll_backend__optimize__V_6_6;
                MR_Integer ll_backend__optimize__V_106_106 = (MR_Integer) ll_backend__optimize__V_30_30;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_54_54, ll_backend__optimize__V_105_105, ll_backend__optimize__V_106_106);
                }
                ll_backend__optimize__succeeded = (ll_backend__optimize__V_54_54 == (MR_Integer) 0);
                ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
                if (ll_backend__optimize__succeeded)
                  *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_54_54;
                else
                  {
                    MR_Word ll_backend__optimize__V_55_55;
                    MR_Integer ll_backend__optimize__V_107_107 = (MR_Integer) ll_backend__optimize__V_7_7;
                    MR_Integer ll_backend__optimize__V_108_108 = (MR_Integer) ll_backend__optimize__V_31_31;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_55_55, ll_backend__optimize__V_107_107, ll_backend__optimize__V_108_108);
                    }
                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_55_55 == (MR_Integer) 0);
                    ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
                    if (ll_backend__optimize__succeeded)
                      *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_55_55;
                    else
                      {
                        MR_Word ll_backend__optimize__V_56_56;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_56_56, ll_backend__optimize__V_8_8, ll_backend__optimize__V_32_32);
                        }
                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_56_56 == (MR_Integer) 0);
                        ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
                        if (ll_backend__optimize__succeeded)
                          *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_56_56;
                        else
                          {
                            MR_Word ll_backend__optimize__V_57_57;
                            MR_Integer ll_backend__optimize__V_109_109 = (MR_Integer) ll_backend__optimize__V_9_9;
                            MR_Integer ll_backend__optimize__V_110_110 = (MR_Integer) ll_backend__optimize__V_33_33;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_57_57, ll_backend__optimize__V_109_109, ll_backend__optimize__V_110_110);
                            }
                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_57_57 == (MR_Integer) 0);
                            ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
                            if (ll_backend__optimize__succeeded)
                              *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_57_57;
                            else
                              {
                                MR_Word ll_backend__optimize__V_58_58;
                                MR_Integer ll_backend__optimize__V_111_111 = (MR_Integer) ll_backend__optimize__V_10_10;
                                MR_Integer ll_backend__optimize__V_112_112 = (MR_Integer) ll_backend__optimize__V_34_34;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_58_58, ll_backend__optimize__V_111_111, ll_backend__optimize__V_112_112);
                                }
                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_58_58 == (MR_Integer) 0);
                                ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
                                if (ll_backend__optimize__succeeded)
                                  *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_58_58;
                                else
                                  {
                                    MR_Word ll_backend__optimize__V_59_59;
                                    MR_Integer ll_backend__optimize__V_113_113 = (MR_Integer) ll_backend__optimize__V_11_11;
                                    MR_Integer ll_backend__optimize__V_114_114 = (MR_Integer) ll_backend__optimize__V_35_35;

                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_59_59, ll_backend__optimize__V_113_113, ll_backend__optimize__V_114_114);
                                    }
                                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_59_59 == (MR_Integer) 0);
                                    ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
                                    if (ll_backend__optimize__succeeded)
                                      *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_59_59;
                                    else
                                      {
                                        MR_Word ll_backend__optimize__V_60_60;
                                        MR_Integer ll_backend__optimize__V_115_115 = (MR_Integer) ll_backend__optimize__V_12_12;
                                        MR_Integer ll_backend__optimize__V_116_116 = (MR_Integer) ll_backend__optimize__V_36_36;

                                        {
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_60_60, ll_backend__optimize__V_115_115, ll_backend__optimize__V_116_116);
                                        }
                                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_60_60 == (MR_Integer) 0);
                                        ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
                                        if (ll_backend__optimize__succeeded)
                                          *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_60_60;
                                        else
                                          {
                                            MR_Word ll_backend__optimize__V_61_61;
                                            MR_Integer ll_backend__optimize__V_117_117 = (MR_Integer) ll_backend__optimize__V_13_13;
                                            MR_Integer ll_backend__optimize__V_118_118 = (MR_Integer) ll_backend__optimize__V_37_37;

                                            {
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_61_61, ll_backend__optimize__V_117_117, ll_backend__optimize__V_118_118);
                                            }
                                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_61_61 == (MR_Integer) 0);
                                            ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
                                            if (ll_backend__optimize__succeeded)
                                              *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_61_61;
                                            else
                                              {
                                                MR_Word ll_backend__optimize__V_62_62;
                                                MR_Integer ll_backend__optimize__V_119_119 = (MR_Integer) ll_backend__optimize__V_14_14;
                                                MR_Integer ll_backend__optimize__V_120_120 = (MR_Integer) ll_backend__optimize__V_38_38;

                                                {
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_62_62, ll_backend__optimize__V_119_119, ll_backend__optimize__V_120_120);
                                                }
                                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_62_62 == (MR_Integer) 0);
                                                ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
                                                if (ll_backend__optimize__succeeded)
                                                  *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_62_62;
                                                else
                                                  {
                                                    MR_Word ll_backend__optimize__V_63_63;
                                                    MR_Integer ll_backend__optimize__V_121_121 = (MR_Integer) ll_backend__optimize__V_15_15;
                                                    MR_Integer ll_backend__optimize__V_122_122 = (MR_Integer) ll_backend__optimize__V_39_39;

                                                    {
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_63_63, ll_backend__optimize__V_121_121, ll_backend__optimize__V_122_122);
                                                    }
                                                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_63_63 == (MR_Integer) 0);
                                                    ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
                                                    if (ll_backend__optimize__succeeded)
                                                      *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_63_63;
                                                    else
                                                      {
                                                        MR_Word ll_backend__optimize__V_64_64;
                                                        MR_Integer ll_backend__optimize__V_123_123 = (MR_Integer) ll_backend__optimize__V_16_16;
                                                        MR_Integer ll_backend__optimize__V_124_124 = (MR_Integer) ll_backend__optimize__V_40_40;

                                                        {
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_64_64, ll_backend__optimize__V_123_123, ll_backend__optimize__V_124_124);
                                                        }
                                                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_64_64 == (MR_Integer) 0);
                                                        ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
                                                        if (ll_backend__optimize__succeeded)
                                                          *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_64_64;
                                                        else
                                                          {
                                                            MR_Word ll_backend__optimize__V_65_65;
                                                            MR_Integer ll_backend__optimize__V_125_125 = (MR_Integer) ll_backend__optimize__V_17_17;
                                                            MR_Integer ll_backend__optimize__V_126_126 = (MR_Integer) ll_backend__optimize__V_41_41;

                                                            {
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_65_65, ll_backend__optimize__V_125_125, ll_backend__optimize__V_126_126);
                                                            }
                                                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_65_65 == (MR_Integer) 0);
                                                            ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
                                                            if (ll_backend__optimize__succeeded)
                                                              *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_65_65;
                                                            else
                                                              {
                                                                MR_Word ll_backend__optimize__V_66_66;
                                                                MR_Integer ll_backend__optimize__V_127_127 = (MR_Integer) ll_backend__optimize__V_18_18;
                                                                MR_Integer ll_backend__optimize__V_128_128 = (MR_Integer) ll_backend__optimize__V_42_42;

                                                                {
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_66_66, ll_backend__optimize__V_127_127, ll_backend__optimize__V_128_128);
                                                                }
                                                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_66_66 == (MR_Integer) 0);
                                                                ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
                                                                if (ll_backend__optimize__succeeded)
                                                                  *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_66_66;
                                                                else
                                                                  {
                                                                    MR_Word ll_backend__optimize__V_67_67;
                                                                    MR_Integer ll_backend__optimize__V_129_129 = (MR_Integer) ll_backend__optimize__V_19_19;
                                                                    MR_Integer ll_backend__optimize__V_130_130 = (MR_Integer) ll_backend__optimize__V_43_43;

                                                                    {
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_67_67, ll_backend__optimize__V_129_129, ll_backend__optimize__V_130_130);
                                                                    }
                                                                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_67_67 == (MR_Integer) 0);
                                                                    ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
                                                                    if (ll_backend__optimize__succeeded)
                                                                      *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_67_67;
                                                                    else
                                                                      {
                                                                        MR_Word ll_backend__optimize__V_68_68;
                                                                        MR_Integer ll_backend__optimize__V_131_131 = (MR_Integer) ll_backend__optimize__V_20_20;
                                                                        MR_Integer ll_backend__optimize__V_132_132 = (MR_Integer) ll_backend__optimize__V_44_44;

                                                                        {
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_68_68, ll_backend__optimize__V_131_131, ll_backend__optimize__V_132_132);
                                                                        }
                                                                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_68_68 == (MR_Integer) 0);
                                                                        ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
                                                                        if (ll_backend__optimize__succeeded)
                                                                          *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_68_68;
                                                                        else
                                                                          {
                                                                            MR_Word ll_backend__optimize__V_69_69;
                                                                            MR_Integer ll_backend__optimize__V_133_133 = (MR_Integer) ll_backend__optimize__V_21_21;
                                                                            MR_Integer ll_backend__optimize__V_134_134 = (MR_Integer) ll_backend__optimize__V_45_45;

                                                                            {
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_69_69, ll_backend__optimize__V_133_133, ll_backend__optimize__V_134_134);
                                                                            }
                                                                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_69_69 == (MR_Integer) 0);
                                                                            ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
                                                                            if (ll_backend__optimize__succeeded)
                                                                              *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_69_69;
                                                                            else
                                                                              {
                                                                                MR_Word ll_backend__optimize__V_70_70;
                                                                                MR_Integer ll_backend__optimize__V_135_135 = (MR_Integer) ll_backend__optimize__V_22_22;
                                                                                MR_Integer ll_backend__optimize__V_136_136 = (MR_Integer) ll_backend__optimize__V_46_46;

                                                                                {
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_70_70, ll_backend__optimize__V_135_135, ll_backend__optimize__V_136_136);
                                                                                }
                                                                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_70_70 == (MR_Integer) 0);
                                                                                ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
                                                                                if (ll_backend__optimize__succeeded)
                                                                                  *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_70_70;
                                                                                else
                                                                                  {
                                                                                    MR_Word ll_backend__optimize__V_71_71;

                                                                                    {
                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_71_71, ll_backend__optimize__V_23_23, ll_backend__optimize__V_47_47);
                                                                                    }
                                                                                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_71_71 == (MR_Integer) 0);
                                                                                    ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
                                                                                    if (ll_backend__optimize__succeeded)
                                                                                      *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_71_71;
                                                                                    else
                                                                                      {
                                                                                        MR_Word ll_backend__optimize__V_72_72;

                                                                                        {
                                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_72_72, ll_backend__optimize__V_24_24, ll_backend__optimize__V_48_48);
                                                                                        }
                                                                                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_72_72 == (MR_Integer) 0);
                                                                                        ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
                                                                                        if (ll_backend__optimize__succeeded)
                                                                                          *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_72_72;
                                                                                        else
                                                                                          {
                                                                                            MR_Word ll_backend__optimize__V_73_73;
                                                                                            MR_Integer ll_backend__optimize__V_137_137 = (MR_Integer) ll_backend__optimize__V_25_25;
                                                                                            MR_Integer ll_backend__optimize__V_138_138 = (MR_Integer) ll_backend__optimize__V_49_49;

                                                                                            {
                                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_73_73, ll_backend__optimize__V_137_137, ll_backend__optimize__V_138_138);
                                                                                            }
                                                                                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_73_73 == (MR_Integer) 0);
                                                                                            ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
                                                                                            if (ll_backend__optimize__succeeded)
                                                                                              *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_73_73;
                                                                                            else
                                                                                              {
                                                                                                MR_Word ll_backend__optimize__V_74_74;

                                                                                                {
                                                                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__optimize_scalar_common_1[0], &ll_backend__optimize__V_74_74, ((MR_Box) (ll_backend__optimize__V_26_26)), ((MR_Box) (ll_backend__optimize__V_50_50)));
                                                                                                }
                                                                                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_74_74 == (MR_Integer) 0);
                                                                                                ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
                                                                                                if (ll_backend__optimize__succeeded)
                                                                                                  *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_74_74;
                                                                                                else
                                                                                                  {
                                                                                                    {
                                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__optimize_scalar_common_1[0], ll_backend__optimize__HeadVar__1_1, ((MR_Box) (ll_backend__optimize__V_27_27)), ((MR_Box) (ll_backend__optimize__V_51_51)));
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
  MR_Word ll_backend__optimize__HeadVar__1_1,
  MR_Word ll_backend__optimize__HeadVar__2_2)
{
  {
    MR_bool ll_backend__optimize__succeeded;
    MR_Integer ll_backend__optimize__CastX_51 = (MR_Integer) ll_backend__optimize__HeadVar__1_1;
    MR_Integer ll_backend__optimize__CastY_52 = (MR_Integer) ll_backend__optimize__HeadVar__2_2;

    ll_backend__optimize__succeeded = (ll_backend__optimize__CastX_51 == ll_backend__optimize__CastY_52);
    if (ll_backend__optimize__succeeded)
      ll_backend__optimize__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__optimize__TypeInfo_53_53;
        MR_Word ll_backend__optimize__TypeInfo_54_54;
        MR_Word ll_backend__optimize__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Integer ll_backend__optimize__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__optimize__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) & (MR_Integer) 7);
        MR_Word ll_backend__optimize__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
        MR_Integer ll_backend__optimize__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer ll_backend__optimize__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ll_backend__optimize__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word ll_backend__optimize__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word ll_backend__optimize__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word ll_backend__optimize__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Integer ll_backend__optimize__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__optimize__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 7);
        MR_Word ll_backend__optimize__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
        MR_Integer ll_backend__optimize__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer ll_backend__optimize__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ll_backend__optimize__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ll_backend__optimize__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ll_backend__optimize__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 7)));

        ll_backend__optimize__succeeded = (ll_backend__optimize__V_3_3 == ll_backend__optimize__V_27_27);
        if (ll_backend__optimize__succeeded)
          {
            ll_backend__optimize__succeeded = (ll_backend__optimize__V_4_4 == ll_backend__optimize__V_28_28);
            if (ll_backend__optimize__succeeded)
              {
                ll_backend__optimize__succeeded = (ll_backend__optimize__V_5_5 == ll_backend__optimize__V_29_29);
                if (ll_backend__optimize__succeeded)
                  {
                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_6_6 == ll_backend__optimize__V_30_30);
                    if (ll_backend__optimize__succeeded)
                      {
                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_7_7 == ll_backend__optimize__V_31_31);
                        if (ll_backend__optimize__succeeded)
                          {
                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_8_8 == ll_backend__optimize__V_32_32);
                            if (ll_backend__optimize__succeeded)
                              {
                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_9_9 == ll_backend__optimize__V_33_33);
                                if (ll_backend__optimize__succeeded)
                                  {
                                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_10_10 == ll_backend__optimize__V_34_34);
                                    if (ll_backend__optimize__succeeded)
                                      {
                                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_11_11 == ll_backend__optimize__V_35_35);
                                        if (ll_backend__optimize__succeeded)
                                          {
                                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_12_12 == ll_backend__optimize__V_36_36);
                                            if (ll_backend__optimize__succeeded)
                                              {
                                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_13_13 == ll_backend__optimize__V_37_37);
                                                if (ll_backend__optimize__succeeded)
                                                  {
                                                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_14_14 == ll_backend__optimize__V_38_38);
                                                    if (ll_backend__optimize__succeeded)
                                                      {
                                                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_15_15 == ll_backend__optimize__V_39_39);
                                                        if (ll_backend__optimize__succeeded)
                                                          {
                                                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_16_16 == ll_backend__optimize__V_40_40);
                                                            if (ll_backend__optimize__succeeded)
                                                              {
                                                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_17_17 == ll_backend__optimize__V_41_41);
                                                                if (ll_backend__optimize__succeeded)
                                                                  {
                                                                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_18_18 == ll_backend__optimize__V_42_42);
                                                                    if (ll_backend__optimize__succeeded)
                                                                      {
                                                                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_19_19 == ll_backend__optimize__V_43_43);
                                                                        if (ll_backend__optimize__succeeded)
                                                                          {
                                                                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_20_20 == ll_backend__optimize__V_44_44);
                                                                            if (ll_backend__optimize__succeeded)
                                                                              {
                                                                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_21_21 == ll_backend__optimize__V_45_45);
                                                                                if (ll_backend__optimize__succeeded)
                                                                                  {
                                                                                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_22_22 == ll_backend__optimize__V_46_46);
                                                                                    if (ll_backend__optimize__succeeded)
                                                                                      {
                                                                                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_23_23 == ll_backend__optimize__V_47_47);
                                                                                        if (ll_backend__optimize__succeeded)
                                                                                          {
                                                                                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_24_24 == ll_backend__optimize__V_48_48);
                                                                                            if (ll_backend__optimize__succeeded)
                                                                                              {
                                                                                                ll_backend__optimize__TypeInfo_53_53 = (MR_Word) &ll_backend__optimize_scalar_common_1[0];
                                                                                                {
                                                                                                  ll_backend__optimize__succeeded = mercury__builtin__unify_2_p_0(ll_backend__optimize__TypeInfo_53_53, ((MR_Box) (ll_backend__optimize__V_25_25)), ((MR_Box) (ll_backend__optimize__V_49_49)));
                                                                                                }
                                                                                                if (ll_backend__optimize__succeeded)
                                                                                                  {
                                                                                                    ll_backend__optimize__TypeInfo_54_54 = (MR_Word) &ll_backend__optimize_scalar_common_1[0];
                                                                                                    {
                                                                                                      ll_backend__optimize__succeeded = mercury__builtin__unify_2_p_0(ll_backend__optimize__TypeInfo_54_54, ((MR_Box) (ll_backend__optimize__V_26_26)), ((MR_Box) (ll_backend__optimize__V_50_50)));
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
    return ll_backend__optimize__succeeded;
  }
}

static MR_Word MR_CALL 
ll_backend__optimize__init_llds_opt_info_1_f_0(
  MR_Word ll_backend__optimize__Globals_3)
{
  {
    MR_bool ll_backend__optimize__succeeded;
    MR_Word ll_backend__optimize__Info_4;
    MR_Word ll_backend__optimize__AutoComments_5;
    MR_Word ll_backend__optimize__DetailedStatistics_6;
    MR_Word ll_backend__optimize__VeryVerbose_7;
    MR_Word ll_backend__optimize__CheckedNondetTailCalls_8;
    MR_Integer ll_backend__optimize__NumRealRRegs_9;
    MR_Word ll_backend__optimize__GCMethod_10;
    MR_Word ll_backend__optimize__OptDelaySlots_11;
    MR_Word ll_backend__optimize__OptDups_12;
    MR_Word ll_backend__optimize__OptFrames_13;
    MR_Word ll_backend__optimize__FrameOptComments_14;
    MR_Word ll_backend__optimize__OptJumps_15;
    MR_Word ll_backend__optimize__OptFullJumps_16;
    MR_Word ll_backend__optimize__OptLabels_17;
    MR_Word ll_backend__optimize__OptPeep_18;
    MR_Word ll_backend__optimize__OptPeepMkword_19;
    MR_Word ll_backend__optimize__OptReassign_20;
    MR_Word ll_backend__optimize__PessimizeTailCalls_21;
    MR_Word ll_backend__optimize__StdLabels_22;
    MR_Word ll_backend__optimize__UseLocalVars_23;
    MR_Integer ll_backend__optimize__LocalVarAccessThreshold_24;
    MR_Integer ll_backend__optimize__OptRepeat_25;
    MR_Word ll_backend__optimize__DebugOpt_26;
    MR_Word ll_backend__optimize__DebugOptPredIdStrs_27;
    MR_Word ll_backend__optimize__DebugOptPredNames_28;

    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 149, &ll_backend__optimize__AutoComments_5);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 65, &ll_backend__optimize__DetailedStatistics_6);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 55, &ll_backend__optimize__VeryVerbose_7);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 469, &ll_backend__optimize__CheckedNondetTailCalls_8);
    }
    {
      libs__globals__lookup_int_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 311, &ll_backend__optimize__NumRealRRegs_9);
    }
    {
      libs__globals__get_gc_method_2_p_0(ll_backend__optimize__Globals_3, &ll_backend__optimize__GCMethod_10);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 477, &ll_backend__optimize__OptDelaySlots_11);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 474, &ll_backend__optimize__OptDups_12);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 476, &ll_backend__optimize__OptFrames_13);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 150, &ll_backend__optimize__FrameOptComments_14);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 466, &ll_backend__optimize__OptJumps_15);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 467, &ll_backend__optimize__OptFullJumps_16);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 473, &ll_backend__optimize__OptLabels_17);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 464, &ll_backend__optimize__OptPeep_18);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 465, &ll_backend__optimize__OptPeepMkword_19);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 478, &ll_backend__optimize__OptReassign_20);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 468, &ll_backend__optimize__PessimizeTailCalls_21);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 472, &ll_backend__optimize__StdLabels_22);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 470, &ll_backend__optimize__UseLocalVars_23);
    }
    {
      libs__globals__lookup_int_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 471, &ll_backend__optimize__LocalVarAccessThreshold_24);
    }
    {
      libs__globals__lookup_int_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 479, &ll_backend__optimize__OptRepeat_25);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 77, &ll_backend__optimize__DebugOpt_26);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 79, &ll_backend__optimize__DebugOptPredIdStrs_27);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 80, &ll_backend__optimize__DebugOptPredNames_28);
    }
    {
      ll_backend__optimize__Info_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_4, 0) = ((MR_Box) ((ll_backend__optimize__AutoComments_5 | ((((ll_backend__optimize__DetailedStatistics_6 << (MR_Integer) 1)) | ((((ll_backend__optimize__VeryVerbose_7 << (MR_Integer) 2)) | ((ll_backend__optimize__CheckedNondetTailCalls_8 << (MR_Integer) 3)))))))));
      MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_4, 1) = ((MR_Box) (ll_backend__optimize__NumRealRRegs_9));
      MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_4, 2) = ((MR_Box) ((ll_backend__optimize__GCMethod_10 | ((((ll_backend__optimize__OptDelaySlots_11 << (MR_Integer) 3)) | ((((ll_backend__optimize__OptDups_12 << (MR_Integer) 4)) | ((((ll_backend__optimize__OptFrames_13 << (MR_Integer) 5)) | ((((ll_backend__optimize__FrameOptComments_14 << (MR_Integer) 6)) | ((((ll_backend__optimize__OptJumps_15 << (MR_Integer) 7)) | ((((ll_backend__optimize__OptFullJumps_16 << (MR_Integer) 8)) | ((((ll_backend__optimize__OptLabels_17 << (MR_Integer) 9)) | ((((ll_backend__optimize__OptPeep_18 << (MR_Integer) 10)) | ((((ll_backend__optimize__OptPeepMkword_19 << (MR_Integer) 11)) | ((((ll_backend__optimize__OptReassign_20 << (MR_Integer) 12)) | ((((ll_backend__optimize__PessimizeTailCalls_21 << (MR_Integer) 13)) | ((((ll_backend__optimize__StdLabels_22 << (MR_Integer) 14)) | ((ll_backend__optimize__UseLocalVars_23 << (MR_Integer) 15)))))))))))))))))))))))))))));
      MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_4, 3) = ((MR_Box) (ll_backend__optimize__LocalVarAccessThreshold_24));
      MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_4, 4) = ((MR_Box) (ll_backend__optimize__OptRepeat_25));
      MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_4, 5) = ((MR_Box) (ll_backend__optimize__DebugOpt_26));
      MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_4, 6) = ((MR_Box) (ll_backend__optimize__DebugOptPredIdStrs_27));
      MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_4, 7) = ((MR_Box) (ll_backend__optimize__DebugOptPredNames_28));
    }
    return ll_backend__optimize__Info_4;
  }
}

static void MR_CALL 
ll_backend__optimize__escape_dir_char_3_p_0(
  MR_Char ll_backend__optimize__Char_4,
  MR_String ll_backend__optimize__STATE_VARIABLE_Str_0_6,
  MR_String * ll_backend__optimize__STATE_VARIABLE_Str_7)
{
  {
    MR_bool ll_backend__optimize__succeeded;

    {
      ll_backend__optimize__succeeded = mercury__dir__is_directory_separator_1_p_0(ll_backend__optimize__Char_4);
    }
    if (ll_backend__optimize__succeeded)
      {
        {
          *ll_backend__optimize__STATE_VARIABLE_Str_7 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__STATE_VARIABLE_Str_0_6, (MR_String) "_slash_");
        }
      }
    else
      {
        MR_String ll_backend__optimize__V_11_11;

        {
          ll_backend__optimize__V_11_11 = mercury__string__char_to_string_1_f_0(ll_backend__optimize__Char_4);
        }
        {
          *ll_backend__optimize__STATE_VARIABLE_Str_7 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__STATE_VARIABLE_Str_0_6, ll_backend__optimize__V_11_11);
        }
      }
  }
}

static void MR_CALL 
ll_backend__optimize__mangle_name_as_filename_1_f_0_1(
  MR_Box ll_backend__optimize__closure_arg,
  MR_Box ll_backend__optimize__wrapper_arg_1,
  MR_Box ll_backend__optimize__wrapper_arg_2,
  MR_Box * ll_backend__optimize__wrapper_arg_3)
{
  {
    MR_Box ll_backend__optimize__closure = ll_backend__optimize__closure_arg;
    MR_String ll_backend__optimize__conv0_STATE_VARIABLE_Str_7;

    {
      ll_backend__optimize__escape_dir_char_3_p_0(((MR_Char) (MR_Word) ll_backend__optimize__wrapper_arg_1), ((MR_String) ll_backend__optimize__wrapper_arg_2), &ll_backend__optimize__conv0_STATE_VARIABLE_Str_7);
    }
    *ll_backend__optimize__wrapper_arg_3 = ((MR_Box) (ll_backend__optimize__conv0_STATE_VARIABLE_Str_7));
  }
}

static MR_String MR_CALL 
ll_backend__optimize__mangle_name_as_filename_1_f_0(
  MR_String ll_backend__optimize__Str0_3)
{
  {
    MR_bool ll_backend__optimize__succeeded;
    MR_String ll_backend__optimize__Str_4;
    MR_Box ll_backend__optimize__conv1_Str_4;

    {
      mercury__string__foldl_4_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__optimize_scalar_common_3[0], ll_backend__optimize__Str0_3, ((MR_Box) ((MR_String) "")), &ll_backend__optimize__conv1_Str_4);
    }
    ll_backend__optimize__Str_4 = ((MR_String) ll_backend__optimize__conv1_Str_4);
    return ll_backend__optimize__Str_4;
  }
}

static void MR_CALL 
ll_backend__optimize__optimize_last_8_p_0(
  MR_Word ll_backend__optimize__Info_9,
  MR_Word ll_backend__optimize__LayoutLabelSet_10,
  MR_Word ll_backend__optimize__ProcLabel_11,
  MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_24,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_25,
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_26,
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_27,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_28)
{
  {
    MR_bool ll_backend__optimize__succeeded;
    MR_Word ll_backend__optimize__VeryVerbose_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_String ll_backend__optimize__LabelStr_16;
    MR_Word ll_backend__optimize__Reassign_17;
    MR_Word ll_backend__optimize__DelaySlot_18;
    MR_Word ll_backend__optimize__UseLocalVars_19;
    MR_Word ll_backend__optimize__StdLabels_20;
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_36_36;
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_39_39;
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_46_46;
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_49_49;
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_56_56;
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_59_59;
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_66_66;
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_69_69;
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_76_76;
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_80_80;
    MR_Word ll_backend__optimize__V_90_90 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_91_91 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_92_92 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Integer ll_backend__optimize__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 1)));
    MR_Word ll_backend__optimize__V_94_94 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) & (MR_Integer) 7);
    MR_Word ll_backend__optimize__V_95_95 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_96_96 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_97_97 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_98_98 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_99_99 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_100_100 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_101_101 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_102_102 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_103_103 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_104_104 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_105_105 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_106_106 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_107_107 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
    MR_Integer ll_backend__optimize__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 3)));
    MR_Integer ll_backend__optimize__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 4)));
    MR_Word ll_backend__optimize__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 5)));
    MR_Word ll_backend__optimize__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 6)));
    MR_Word ll_backend__optimize__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 7)));
    MR_Word ll_backend__optimize__V_113_113;
    MR_Word ll_backend__optimize__V_114_114;
    MR_Word ll_backend__optimize__V_115_115;
    MR_Word ll_backend__optimize__V_116_116;
    MR_Integer ll_backend__optimize__V_117_117;
    MR_Word ll_backend__optimize__V_118_118;
    MR_Word ll_backend__optimize__V_120_120;
    MR_Word ll_backend__optimize__V_121_121;
    MR_Word ll_backend__optimize__V_122_122;
    MR_Word ll_backend__optimize__V_123_123;
    MR_Word ll_backend__optimize__V_124_124;
    MR_Word ll_backend__optimize__V_125_125;
    MR_Word ll_backend__optimize__V_126_126;
    MR_Word ll_backend__optimize__V_127_127;
    MR_Word ll_backend__optimize__V_128_128;
    MR_Integer ll_backend__optimize__V_131_131;
    MR_Integer ll_backend__optimize__V_132_132;
    MR_Word ll_backend__optimize__V_133_133;
    MR_Word ll_backend__optimize__V_134_134;
    MR_Word ll_backend__optimize__V_135_135;

    {
      ll_backend__optimize__LabelStr_16 = ll_backend__opt_util__format_proc_label_1_f_0(ll_backend__optimize__ProcLabel_11);
    }
    ll_backend__optimize__V_113_113 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) & (MR_Integer) 1);
    ll_backend__optimize__V_114_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__optimize__V_115_115 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__optimize__V_116_116 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__optimize__V_117_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 1)));
    ll_backend__optimize__V_118_118 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) & (MR_Integer) 7);
    ll_backend__optimize__DelaySlot_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__optimize__V_120_120 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__optimize__V_121_121 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__optimize__V_122_122 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__optimize__V_123_123 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__optimize__V_124_124 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__optimize__V_125_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__optimize__V_126_126 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__optimize__V_127_127 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__optimize__Reassign_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__optimize__V_128_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
    ll_backend__optimize__StdLabels_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
    ll_backend__optimize__UseLocalVars_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
    ll_backend__optimize__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 3)));
    ll_backend__optimize__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 4)));
    ll_backend__optimize__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 5)));
    ll_backend__optimize__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 6)));
    ll_backend__optimize__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 7)));
    ll_backend__optimize__succeeded = (ll_backend__optimize__Reassign_17 == (MR_Integer) 1);
    if (!(ll_backend__optimize__succeeded))
      {
        ll_backend__optimize__succeeded = (ll_backend__optimize__DelaySlot_18 == (MR_Integer) 1);
        if (!(ll_backend__optimize__succeeded))
          {
            ll_backend__optimize__succeeded = (ll_backend__optimize__UseLocalVars_19 == (MR_Integer) 1);
            if (!(ll_backend__optimize__succeeded))
              ll_backend__optimize__succeeded = (ll_backend__optimize__StdLabels_20 == (MR_Integer) 1);
          }
      }
    if (ll_backend__optimize__succeeded)
      {
        MR_Word ll_backend__optimize___Mod1_22;

        switch (ll_backend__optimize__VeryVerbose_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "% Optimizing labels for ");
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_16);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
            }
            break;
        }
        {
          ll_backend__labelopt__labelopt_main_5_p_0((MR_Integer) 0, ll_backend__optimize__LayoutLabelSet_10, ll_backend__optimize__STATE_VARIABLE_Instrs_0_27, &ll_backend__optimize__STATE_VARIABLE_Instrs_36_36, &ll_backend__optimize___Mod1_22);
        }
        {
          ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__STATE_VARIABLE_Instrs_36_36, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_24, (MR_String) "label", (MR_String) "after label opt", ll_backend__optimize__ProcLabel_11, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_26, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_39_39);
        }
      }
    else
      {
        ll_backend__optimize__STATE_VARIABLE_Instrs_36_36 = ll_backend__optimize__STATE_VARIABLE_Instrs_0_27;
        ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_39_39 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_26;
      }
    switch (ll_backend__optimize__Reassign_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_49_49 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_39_39;
          ll_backend__optimize__STATE_VARIABLE_Instrs_46_46 = ll_backend__optimize__STATE_VARIABLE_Instrs_36_36;
        }
        break;
      case (MR_Integer) 1:
        {
          switch (ll_backend__optimize__VeryVerbose_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "% Optimizing reassign for ");
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_16);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
              }
              break;
          }
          {
            ll_backend__reassign__remove_reassign_2_p_0(ll_backend__optimize__STATE_VARIABLE_Instrs_36_36, &ll_backend__optimize__STATE_VARIABLE_Instrs_46_46);
          }
          {
            ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__STATE_VARIABLE_Instrs_46_46, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_24, (MR_String) "reassign", (MR_String) "after reassign", ll_backend__optimize__ProcLabel_11, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_39_39, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_49_49);
          }
        }
        break;
    }
    switch (ll_backend__optimize__DelaySlot_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_59_59 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_49_49;
          ll_backend__optimize__STATE_VARIABLE_Instrs_56_56 = ll_backend__optimize__STATE_VARIABLE_Instrs_46_46;
        }
        break;
      case (MR_Integer) 1:
        {
          switch (ll_backend__optimize__VeryVerbose_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "% Optimizing delay slot for ");
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_16);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
              }
              break;
          }
          {
            ll_backend__delay_slot__fill_branch_delay_slot_2_p_0(ll_backend__optimize__STATE_VARIABLE_Instrs_46_46, &ll_backend__optimize__STATE_VARIABLE_Instrs_56_56);
          }
          {
            ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__STATE_VARIABLE_Instrs_56_56, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_24, (MR_String) "delay_slot", (MR_String) "after delay slots", ll_backend__optimize__ProcLabel_11, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_49_49, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_59_59);
          }
        }
        break;
    }
    switch (ll_backend__optimize__VeryVerbose_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "% Optimizing returns for ");
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_16);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
        }
        break;
    }
    {
      ll_backend__peephole__combine_decr_sp_2_p_0(ll_backend__optimize__STATE_VARIABLE_Instrs_56_56, &ll_backend__optimize__STATE_VARIABLE_Instrs_66_66);
    }
    {
      ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__STATE_VARIABLE_Instrs_66_66, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_24, (MR_String) "decr_sp", (MR_String) "after combine decr_sp", ll_backend__optimize__ProcLabel_11, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_59_59, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_69_69);
    }
    switch (ll_backend__optimize__StdLabels_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_25 = ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_24;
          ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_80_80 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_69_69;
          ll_backend__optimize__STATE_VARIABLE_Instrs_76_76 = ll_backend__optimize__STATE_VARIABLE_Instrs_66_66;
        }
        break;
      case (MR_Integer) 1:
        {
          switch (ll_backend__optimize__VeryVerbose_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "% Standardizing labels for ");
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_16);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
              }
              break;
          }
          {
            ll_backend__stdlabel__standardize_labels_4_p_0(ll_backend__optimize__STATE_VARIABLE_Instrs_66_66, &ll_backend__optimize__STATE_VARIABLE_Instrs_76_76, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_24, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_25);
          }
          {
            ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__STATE_VARIABLE_Instrs_76_76, *ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_25, (MR_String) "stdlabel", (MR_String) "after standard labels", ll_backend__optimize__ProcLabel_11, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_69_69, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_80_80);
          }
        }
        break;
    }
    switch (ll_backend__optimize__UseLocalVars_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ll_backend__optimize__STATE_VARIABLE_Instrs_28 = ll_backend__optimize__STATE_VARIABLE_Instrs_76_76;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__optimize__V_23_23;

          switch (ll_backend__optimize__VeryVerbose_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "% Wrapping blocks for ");
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_16);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
              }
              break;
          }
          {
            ll_backend__wrap_blocks__wrap_blocks_2_p_0(ll_backend__optimize__STATE_VARIABLE_Instrs_76_76, ll_backend__optimize__STATE_VARIABLE_Instrs_28);
          }
          {
            ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_9, *ll_backend__optimize__STATE_VARIABLE_Instrs_28, *ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_25, (MR_String) "wrapblocks", (MR_String) "after wrap blocks", ll_backend__optimize__ProcLabel_11, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_80_80, &ll_backend__optimize__V_23_23);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__optimize__optimize_middle_12_p_0(
  MR_Word ll_backend__optimize__Info_13,
  MR_Word ll_backend__optimize__Final_14,
  MR_Word ll_backend__optimize__LayoutLabelSet_15,
  MR_Word ll_backend__optimize__ProcLabel_16,
  MR_Word ll_backend__optimize__CodeModel_17,
  MR_Word ll_backend__optimize__MayAlterRtti_18,
  MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_41,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_42,
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_43,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_44,
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_45,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_46)
{
  {
    MR_bool ll_backend__optimize__succeeded;
    MR_Word ll_backend__optimize__VeryVerbose_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_String ll_backend__optimize__LabelStr_23;
    MR_Word ll_backend__optimize__OptFrames_24;
    MR_Word ll_backend__optimize__UseLocalVars_37;
    MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_68_68;
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_89_89;
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_92_92;
    MR_Word ll_backend__optimize__V_127_127;
    MR_Integer ll_backend__optimize__V_131_131;
    MR_Word ll_backend__optimize__V_135_135;
    MR_Integer ll_backend__optimize__V_145_145;
    MR_Word ll_backend__optimize__V_104_104 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_105_105 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_106_106 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Integer ll_backend__optimize__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 1)));
    MR_Word ll_backend__optimize__V_108_108 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) & (MR_Integer) 7);
    MR_Word ll_backend__optimize__V_109_109 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_110_110 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_111_111 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_112_112 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_113_113 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_114_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_115_115 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_116_116 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_117_117 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_118_118 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_119_119 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_120_120 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
    MR_Word ll_backend__optimize__V_121_121 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
    MR_Integer ll_backend__optimize__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 3)));
    MR_Integer ll_backend__optimize__V_123_123 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 4)));
    MR_Word ll_backend__optimize__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 5)));
    MR_Word ll_backend__optimize__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 6)));
    MR_Word ll_backend__optimize__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 7)));
    MR_Word ll_backend__optimize__V_128_128;
    MR_Word ll_backend__optimize__V_129_129;
    MR_Word ll_backend__optimize__V_130_130;
    MR_Word ll_backend__optimize__V_132_132;
    MR_Word ll_backend__optimize__V_133_133;
    MR_Word ll_backend__optimize__V_134_134;
    MR_Word ll_backend__optimize__V_136_136;
    MR_Word ll_backend__optimize__V_137_137;
    MR_Word ll_backend__optimize__V_138_138;
    MR_Word ll_backend__optimize__V_139_139;
    MR_Word ll_backend__optimize__V_140_140;
    MR_Word ll_backend__optimize__V_141_141;
    MR_Word ll_backend__optimize__V_142_142;
    MR_Word ll_backend__optimize__V_143_143;
    MR_Integer ll_backend__optimize__V_146_146;
    MR_Word ll_backend__optimize__V_147_147;
    MR_Word ll_backend__optimize__V_148_148;
    MR_Word ll_backend__optimize__V_149_149;

    {
      ll_backend__optimize__LabelStr_23 = ll_backend__opt_util__format_proc_label_1_f_0(ll_backend__optimize__ProcLabel_16);
    }
    ll_backend__optimize__V_127_127 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) & (MR_Integer) 1);
    ll_backend__optimize__V_128_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__optimize__V_129_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__optimize__V_130_130 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__optimize__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 1)));
    ll_backend__optimize__V_132_132 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) & (MR_Integer) 7);
    ll_backend__optimize__V_133_133 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__optimize__V_134_134 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__optimize__OptFrames_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__optimize__V_135_135 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__optimize__V_136_136 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__optimize__V_137_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__optimize__V_138_138 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__optimize__V_139_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__optimize__V_140_140 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__optimize__V_141_141 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__optimize__V_142_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
    ll_backend__optimize__V_143_143 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
    ll_backend__optimize__UseLocalVars_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
    ll_backend__optimize__V_145_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 3)));
    ll_backend__optimize__V_146_146 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 4)));
    ll_backend__optimize__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 5)));
    ll_backend__optimize__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 6)));
    ll_backend__optimize__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 7)));
    switch (ll_backend__optimize__OptFrames_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_68_68 = ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_41;
          ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_92_92 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_43;
          ll_backend__optimize__STATE_VARIABLE_Instrs_89_89 = ll_backend__optimize__STATE_VARIABLE_Instrs_0_45;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__optimize__Mod1_27;
          MR_Word ll_backend__optimize__Statistics_28;
          MR_Word ll_backend__optimize__OptFullJump_29;
          MR_Word ll_backend__optimize__PessimizeTailCalls_30;
          MR_Word ll_backend__optimize__CheckedNondetTailCalls_31;
          MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_55_55;
          MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_56_56;
          MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_59_59;
          MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_69_69;
          MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_72_72;
          MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_79_79;
          MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_82_82;
          MR_Word ll_backend__optimize__V_173_173;
          MR_Word ll_backend__optimize__V_174_174;
          MR_Integer ll_backend__optimize__V_176_176;
          MR_Word ll_backend__optimize__V_177_177;
          MR_Word ll_backend__optimize__V_178_178;
          MR_Word ll_backend__optimize__V_179_179;
          MR_Word ll_backend__optimize__V_180_180;
          MR_Word ll_backend__optimize__V_181_181;
          MR_Word ll_backend__optimize__V_182_182;
          MR_Word ll_backend__optimize__V_184_184;
          MR_Word ll_backend__optimize__V_185_185;
          MR_Word ll_backend__optimize__V_186_186;
          MR_Word ll_backend__optimize__V_187_187;
          MR_Word ll_backend__optimize__V_189_189;
          MR_Word ll_backend__optimize__V_190_190;
          MR_Integer ll_backend__optimize__V_191_191;
          MR_Integer ll_backend__optimize__V_192_192;
          MR_Word ll_backend__optimize__V_193_193;
          MR_Word ll_backend__optimize__V_194_194;
          MR_Word ll_backend__optimize__V_195_195;

          switch (ll_backend__optimize__VeryVerbose_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "% Optimizing frames for ");
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
              }
              break;
          }
          switch (ll_backend__optimize__CodeModel_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                ll_backend__frameopt__frameopt_main_det_stack_7_p_0(ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_41, &ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_55_55, ll_backend__optimize__STATE_VARIABLE_Instrs_0_45, &ll_backend__optimize__STATE_VARIABLE_Instrs_56_56, ll_backend__optimize__V_135_135, &ll_backend__optimize__Mod1_27);
              }
              break;
            case (MR_Integer) 2:
              {
                ll_backend__frameopt__frameopt_main_nondet_stack_7_p_0(ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_41, &ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_55_55, ll_backend__optimize__STATE_VARIABLE_Instrs_0_45, &ll_backend__optimize__STATE_VARIABLE_Instrs_56_56, ll_backend__optimize__V_135_135, &ll_backend__optimize__Mod1_27);
              }
              break;
          }
          {
            ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, ll_backend__optimize__STATE_VARIABLE_Instrs_56_56, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_55_55, (MR_String) "frame", (MR_String) "after frame opt", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_43, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_59_59);
          }
          ll_backend__optimize__V_173_173 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) & (MR_Integer) 1);
          ll_backend__optimize__Statistics_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          ll_backend__optimize__V_174_174 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          ll_backend__optimize__CheckedNondetTailCalls_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          ll_backend__optimize__V_176_176 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 1)));
          ll_backend__optimize__V_177_177 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) & (MR_Integer) 7);
          ll_backend__optimize__V_178_178 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          ll_backend__optimize__V_179_179 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
          ll_backend__optimize__V_180_180 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
          ll_backend__optimize__V_181_181 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
          ll_backend__optimize__V_182_182 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
          ll_backend__optimize__OptFullJump_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
          ll_backend__optimize__V_184_184 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
          ll_backend__optimize__V_185_185 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
          ll_backend__optimize__V_186_186 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
          ll_backend__optimize__V_187_187 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
          ll_backend__optimize__PessimizeTailCalls_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
          ll_backend__optimize__V_189_189 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
          ll_backend__optimize__V_190_190 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
          ll_backend__optimize__V_191_191 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 3)));
          ll_backend__optimize__V_192_192 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 4)));
          ll_backend__optimize__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 5)));
          ll_backend__optimize__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 6)));
          ll_backend__optimize__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 7)));
          {
            libs__file_util__maybe_report_stats_3_p_0(ll_backend__optimize__Statistics_28);
          }
          ll_backend__optimize__succeeded = (ll_backend__optimize__OptFullJump_29 == (MR_Integer) 1);
          if (!(ll_backend__optimize__succeeded))
            ll_backend__optimize__succeeded = (ll_backend__optimize__Mod1_27 == (MR_Integer) 1);
          if (ll_backend__optimize__succeeded)
            {
              MR_Word ll_backend__optimize___Mod2_32;

              switch (ll_backend__optimize__VeryVerbose_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "% Optimizing jumps for ");
                    }
                    {
                      mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\n");
                    }
                  }
                  break;
              }
              {
                ll_backend__jumpopt__optimize_jumps_in_proc_12_p_0(ll_backend__optimize__LayoutLabelSet_15, ll_backend__optimize__MayAlterRtti_18, ll_backend__optimize__ProcLabel_16, ll_backend__optimize__OptFullJump_29, ll_backend__optimize__Final_14, ll_backend__optimize__PessimizeTailCalls_30, ll_backend__optimize__CheckedNondetTailCalls_31, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_55_55, &ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_68_68, ll_backend__optimize__STATE_VARIABLE_Instrs_56_56, &ll_backend__optimize__STATE_VARIABLE_Instrs_69_69, &ll_backend__optimize___Mod2_32);
              }
              {
                ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, ll_backend__optimize__STATE_VARIABLE_Instrs_69_69, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_68_68, (MR_String) "jump", (MR_String) "after jumps", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_59_59, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_72_72);
              }
            }
          else
            {
              ll_backend__optimize__STATE_VARIABLE_Instrs_69_69 = ll_backend__optimize__STATE_VARIABLE_Instrs_56_56;
              ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_72_72 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_59_59;
              ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_68_68 = ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_55_55;
            }
          switch (ll_backend__optimize__Mod1_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_82_82 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_72_72;
                ll_backend__optimize__STATE_VARIABLE_Instrs_79_79 = ll_backend__optimize__STATE_VARIABLE_Instrs_69_69;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ll_backend__optimize___Mod3_33;

                switch (ll_backend__optimize__VeryVerbose_22) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "% Optimizing labels for ");
                      }
                      {
                        mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) "\n");
                      }
                    }
                    break;
                }
                {
                  ll_backend__labelopt__labelopt_main_5_p_0(ll_backend__optimize__Final_14, ll_backend__optimize__LayoutLabelSet_15, ll_backend__optimize__STATE_VARIABLE_Instrs_69_69, &ll_backend__optimize__STATE_VARIABLE_Instrs_79_79, &ll_backend__optimize___Mod3_33);
                }
                {
                  ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, ll_backend__optimize__STATE_VARIABLE_Instrs_79_79, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_68_68, (MR_String) "label", (MR_String) "after labels", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_72_72, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_82_82);
                }
              }
              break;
          }
          switch (ll_backend__optimize__Mod1_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_92_92 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_82_82;
                ll_backend__optimize__STATE_VARIABLE_Instrs_89_89 = ll_backend__optimize__STATE_VARIABLE_Instrs_79_79;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ll_backend__optimize__GC_Method_34;
                MR_Word ll_backend__optimize__OptPeepMkword_35;
                MR_Word ll_backend__optimize__V_265_265;
                MR_Word ll_backend__optimize__V_266_266;
                MR_Word ll_backend__optimize__V_267_267;
                MR_Word ll_backend__optimize__V_268_268;
                MR_Integer ll_backend__optimize__V_269_269;
                MR_Word ll_backend__optimize__V_270_270;
                MR_Word ll_backend__optimize__V_271_271;
                MR_Word ll_backend__optimize__V_272_272;
                MR_Word ll_backend__optimize__V_273_273;
                MR_Word ll_backend__optimize__V_274_274;
                MR_Word ll_backend__optimize__V_275_275;
                MR_Word ll_backend__optimize__V_276_276;
                MR_Word ll_backend__optimize__V_277_277;
                MR_Word ll_backend__optimize__V_279_279;
                MR_Word ll_backend__optimize__V_280_280;
                MR_Word ll_backend__optimize__V_281_281;
                MR_Word ll_backend__optimize__V_282_282;
                MR_Integer ll_backend__optimize__V_283_283;
                MR_Integer ll_backend__optimize__V_284_284;
                MR_Word ll_backend__optimize__V_285_285;
                MR_Word ll_backend__optimize__V_286_286;
                MR_Word ll_backend__optimize__V_287_287;
                MR_Word ll_backend__optimize___Mod_36;

                switch (ll_backend__optimize__VeryVerbose_22) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "% Optimizing locally for ");
                      }
                      {
                        mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) "\n");
                      }
                    }
                    break;
                }
                ll_backend__optimize__V_265_265 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) & (MR_Integer) 1);
                ll_backend__optimize__V_266_266 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                ll_backend__optimize__V_267_267 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                ll_backend__optimize__V_268_268 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                ll_backend__optimize__V_269_269 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 1)));
                ll_backend__optimize__GC_Method_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) & (MR_Integer) 7);
                ll_backend__optimize__V_270_270 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                ll_backend__optimize__V_271_271 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                ll_backend__optimize__V_272_272 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                ll_backend__optimize__V_273_273 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                ll_backend__optimize__V_274_274 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                ll_backend__optimize__V_275_275 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                ll_backend__optimize__V_276_276 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
                ll_backend__optimize__V_277_277 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
                ll_backend__optimize__OptPeepMkword_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
                ll_backend__optimize__V_279_279 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
                ll_backend__optimize__V_280_280 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
                ll_backend__optimize__V_281_281 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
                ll_backend__optimize__V_282_282 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
                ll_backend__optimize__V_283_283 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 3)));
                ll_backend__optimize__V_284_284 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 4)));
                ll_backend__optimize__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 5)));
                ll_backend__optimize__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 6)));
                ll_backend__optimize__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 7)));
                {
                  ll_backend__peephole__peephole_optimize_5_p_0(ll_backend__optimize__GC_Method_34, ll_backend__optimize__OptPeepMkword_35, ll_backend__optimize__STATE_VARIABLE_Instrs_79_79, &ll_backend__optimize__STATE_VARIABLE_Instrs_89_89, &ll_backend__optimize___Mod_36);
                }
                {
                  ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, ll_backend__optimize__STATE_VARIABLE_Instrs_89_89, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_68_68, (MR_String) "peep", (MR_String) "after peephole", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_82_82, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_92_92);
                }
              }
              break;
          }
        }
        break;
    }
    switch (ll_backend__optimize__UseLocalVars_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_42 = ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_68_68;
          *ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_44 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_92_92;
          *ll_backend__optimize__STATE_VARIABLE_Instrs_46 = ll_backend__optimize__STATE_VARIABLE_Instrs_89_89;
        }
        break;
      case (MR_Integer) 1:
        {
          switch (ll_backend__optimize__VeryVerbose_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "% Optimizing local vars for ");
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
              }
              break;
          }
          {
            ll_backend__use_local_vars__use_local_vars_proc_8_p_0(ll_backend__optimize__STATE_VARIABLE_Instrs_89_89, ll_backend__optimize__STATE_VARIABLE_Instrs_46, ll_backend__optimize__V_131_131, ll_backend__optimize__V_145_145, ll_backend__optimize__V_127_127, ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_68_68, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_42);
          }
          {
            ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, *ll_backend__optimize__STATE_VARIABLE_Instrs_46, *ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_42, (MR_String) "use_local", (MR_String) "after use_local_vars", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_92_92, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_44);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__optimize__optimize_repeated_12_p_0(
  MR_Word ll_backend__optimize__Info_13,
  MR_Word ll_backend__optimize__Final_14,
  MR_Word ll_backend__optimize__LayoutLabelSet_15,
  MR_Word ll_backend__optimize__ProcLabel_16,
  MR_Word ll_backend__optimize__MayAlterRtti_17,
  MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_39,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_40,
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_41,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_42,
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_43,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_44,
  MR_Word * ll_backend__optimize__Mod_21)
{
  {
    MR_bool ll_backend__optimize__succeeded;
    MR_String ll_backend__optimize__LabelStr_23;
    MR_Word ll_backend__optimize__VeryVerbose_24;
    MR_Word ll_backend__optimize__OptJump_25;
    MR_Word ll_backend__optimize__OptFullJump_26;
    MR_Word ll_backend__optimize__PessimizeTailCalls_27;
    MR_Word ll_backend__optimize__CheckedNondetTailCalls_28;
    MR_Word ll_backend__optimize__Mod1_30;
    MR_Word ll_backend__optimize__Peephole_31;
    MR_Word ll_backend__optimize__Mod2_34;
    MR_Word ll_backend__optimize__OptLabels_35;
    MR_Word ll_backend__optimize__Mod3_36;
    MR_Word ll_backend__optimize__DupElim_37;
    MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_51_51;
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_52_52;
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_55_55;
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_62_62;
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_65_65;
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_72_72;
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_75_75;
    MR_Word ll_backend__optimize__V_93_93;
    MR_Word ll_backend__optimize__V_102_102;
    MR_Word ll_backend__optimize__V_89_89;
    MR_Word ll_backend__optimize__V_90_90;
    MR_Integer ll_backend__optimize__V_92_92;
    MR_Word ll_backend__optimize__V_94_94;
    MR_Word ll_backend__optimize__V_96_96;
    MR_Word ll_backend__optimize__V_97_97;
    MR_Word ll_backend__optimize__V_103_103;
    MR_Word ll_backend__optimize__V_105_105;
    MR_Word ll_backend__optimize__V_106_106;
    MR_Integer ll_backend__optimize__V_107_107;
    MR_Integer ll_backend__optimize__V_108_108;
    MR_Word ll_backend__optimize__V_109_109;
    MR_Word ll_backend__optimize__V_110_110;
    MR_Word ll_backend__optimize__V_111_111;
    MR_Word ll_backend__optimize__TypeInfo_342_342;
    MR_Word ll_backend__optimize__Statistics_38;
    MR_Word ll_backend__optimize__V_319_319;
    MR_Word ll_backend__optimize__V_320_320;
    MR_Word ll_backend__optimize__V_321_321;
    MR_Integer ll_backend__optimize__V_322_322;
    MR_Word ll_backend__optimize__V_323_323;
    MR_Word ll_backend__optimize__V_324_324;
    MR_Word ll_backend__optimize__V_325_325;
    MR_Word ll_backend__optimize__V_326_326;
    MR_Word ll_backend__optimize__V_327_327;
    MR_Word ll_backend__optimize__V_328_328;
    MR_Word ll_backend__optimize__V_329_329;
    MR_Word ll_backend__optimize__V_330_330;
    MR_Word ll_backend__optimize__V_331_331;
    MR_Word ll_backend__optimize__V_332_332;
    MR_Word ll_backend__optimize__V_333_333;
    MR_Word ll_backend__optimize__V_334_334;
    MR_Word ll_backend__optimize__V_335_335;
    MR_Word ll_backend__optimize__V_336_336;
    MR_Integer ll_backend__optimize__V_337_337;
    MR_Integer ll_backend__optimize__V_338_338;
    MR_Word ll_backend__optimize__V_339_339;
    MR_Word ll_backend__optimize__V_340_340;
    MR_Word ll_backend__optimize__V_341_341;

    {
      ll_backend__optimize__LabelStr_23 = ll_backend__opt_util__format_proc_label_1_f_0(ll_backend__optimize__ProcLabel_16);
    }
    ll_backend__optimize__V_89_89 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) & (MR_Integer) 1);
    ll_backend__optimize__V_90_90 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__optimize__VeryVerbose_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__optimize__CheckedNondetTailCalls_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__optimize__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 1)));
    ll_backend__optimize__V_93_93 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) & (MR_Integer) 7);
    ll_backend__optimize__V_94_94 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__optimize__DupElim_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__optimize__V_96_96 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__optimize__V_97_97 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__optimize__OptJump_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__optimize__OptFullJump_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__optimize__OptLabels_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__optimize__Peephole_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__optimize__V_102_102 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__optimize__V_103_103 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__optimize__PessimizeTailCalls_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
    ll_backend__optimize__V_105_105 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
    ll_backend__optimize__V_106_106 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
    ll_backend__optimize__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 3)));
    ll_backend__optimize__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 4)));
    ll_backend__optimize__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 5)));
    ll_backend__optimize__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 6)));
    ll_backend__optimize__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 7)));
    switch (ll_backend__optimize__OptJump_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__optimize__Mod1_30 = (MR_Integer) 0;
          ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_51_51 = ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_39;
          ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_55_55 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_41;
          ll_backend__optimize__STATE_VARIABLE_Instrs_52_52 = ll_backend__optimize__STATE_VARIABLE_Instrs_0_43;
        }
        break;
      case (MR_Integer) 1:
        {
          switch (ll_backend__optimize__VeryVerbose_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "% Optimizing jumps for ");
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
              }
              break;
          }
          {
            ll_backend__jumpopt__optimize_jumps_in_proc_12_p_0(ll_backend__optimize__LayoutLabelSet_15, ll_backend__optimize__MayAlterRtti_17, ll_backend__optimize__ProcLabel_16, ll_backend__optimize__OptFullJump_26, ll_backend__optimize__Final_14, ll_backend__optimize__PessimizeTailCalls_27, ll_backend__optimize__CheckedNondetTailCalls_28, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_39, &ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_51_51, ll_backend__optimize__STATE_VARIABLE_Instrs_0_43, &ll_backend__optimize__STATE_VARIABLE_Instrs_52_52, &ll_backend__optimize__Mod1_30);
          }
          {
            ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, ll_backend__optimize__STATE_VARIABLE_Instrs_52_52, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_51_51, (MR_String) "jump", (MR_String) "after jump opt", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_41, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_55_55);
          }
        }
        break;
    }
    switch (ll_backend__optimize__Peephole_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__optimize__Mod2_34 = (MR_Integer) 0;
          ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_65_65 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_55_55;
          ll_backend__optimize__STATE_VARIABLE_Instrs_62_62 = ll_backend__optimize__STATE_VARIABLE_Instrs_52_52;
        }
        break;
      case (MR_Integer) 1:
        {
          switch (ll_backend__optimize__VeryVerbose_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "% Optimizing locally for ");
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
              }
              break;
          }
          {
            ll_backend__peephole__peephole_optimize_5_p_0(ll_backend__optimize__V_93_93, ll_backend__optimize__V_102_102, ll_backend__optimize__STATE_VARIABLE_Instrs_52_52, &ll_backend__optimize__STATE_VARIABLE_Instrs_62_62, &ll_backend__optimize__Mod2_34);
          }
          {
            ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, ll_backend__optimize__STATE_VARIABLE_Instrs_62_62, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_51_51, (MR_String) "peep", (MR_String) "after peephole", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_55_55, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_65_65);
          }
        }
        break;
    }
    switch (ll_backend__optimize__OptLabels_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__optimize__Mod3_36 = (MR_Integer) 0;
          ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_75_75 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_65_65;
          ll_backend__optimize__STATE_VARIABLE_Instrs_72_72 = ll_backend__optimize__STATE_VARIABLE_Instrs_62_62;
        }
        break;
      case (MR_Integer) 1:
        {
          switch (ll_backend__optimize__VeryVerbose_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "% Optimizing labels for ");
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
              }
              break;
          }
          {
            ll_backend__labelopt__labelopt_main_5_p_0(ll_backend__optimize__Final_14, ll_backend__optimize__LayoutLabelSet_15, ll_backend__optimize__STATE_VARIABLE_Instrs_62_62, &ll_backend__optimize__STATE_VARIABLE_Instrs_72_72, &ll_backend__optimize__Mod3_36);
          }
          {
            ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, ll_backend__optimize__STATE_VARIABLE_Instrs_72_72, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_51_51, (MR_String) "label", (MR_String) "after label opt", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_65_65, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_75_75);
          }
        }
        break;
    }
    switch (ll_backend__optimize__DupElim_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_40 = ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_51_51;
          *ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_42 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_75_75;
          *ll_backend__optimize__STATE_VARIABLE_Instrs_44 = ll_backend__optimize__STATE_VARIABLE_Instrs_72_72;
        }
        break;
      case (MR_Integer) 1:
        {
          switch (ll_backend__optimize__VeryVerbose_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "% Optimizing duplicates for ");
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
              }
              break;
          }
          {
            ll_backend__dupelim__dupelim_main_5_p_0(ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_51_51, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_40, ll_backend__optimize__STATE_VARIABLE_Instrs_72_72, ll_backend__optimize__STATE_VARIABLE_Instrs_44);
          }
          {
            ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, *ll_backend__optimize__STATE_VARIABLE_Instrs_44, *ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_40, (MR_String) "dup", (MR_String) "after duplicates", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_75_75, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_42);
          }
        }
        break;
    }
    ll_backend__optimize__succeeded = (ll_backend__optimize__Mod1_30 == (MR_Integer) 0);
    if (ll_backend__optimize__succeeded)
      {
        ll_backend__optimize__succeeded = (ll_backend__optimize__Mod2_34 == (MR_Integer) 0);
        if (ll_backend__optimize__succeeded)
          {
            ll_backend__optimize__succeeded = (ll_backend__optimize__Mod3_36 == (MR_Integer) 0);
            if (ll_backend__optimize__succeeded)
              {
                ll_backend__optimize__TypeInfo_342_342 = (MR_Word) &ll_backend__optimize_scalar_common_1[1];
                {
                  ll_backend__optimize__succeeded = mercury__builtin__unify_2_p_0(ll_backend__optimize__TypeInfo_342_342, ((MR_Box) (*ll_backend__optimize__STATE_VARIABLE_Instrs_44)), ((MR_Box) (ll_backend__optimize__STATE_VARIABLE_Instrs_0_43)));
                }
              }
          }
      }
    if (ll_backend__optimize__succeeded)
      *ll_backend__optimize__Mod_21 = (MR_Integer) 0;
    else
      *ll_backend__optimize__Mod_21 = (MR_Integer) 1;
    ll_backend__optimize__V_319_319 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) & (MR_Integer) 1);
    ll_backend__optimize__Statistics_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__optimize__V_320_320 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__optimize__V_321_321 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__optimize__V_322_322 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 1)));
    ll_backend__optimize__V_323_323 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) & (MR_Integer) 7);
    ll_backend__optimize__V_324_324 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__optimize__V_325_325 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__optimize__V_326_326 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__optimize__V_327_327 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__optimize__V_328_328 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__optimize__V_329_329 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__optimize__V_330_330 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__optimize__V_331_331 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__optimize__V_332_332 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__optimize__V_333_333 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__optimize__V_334_334 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
    ll_backend__optimize__V_335_335 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
    ll_backend__optimize__V_336_336 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
    ll_backend__optimize__V_337_337 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 3)));
    ll_backend__optimize__V_338_338 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 4)));
    ll_backend__optimize__V_339_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 5)));
    ll_backend__optimize__V_340_340 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 6)));
    ll_backend__optimize__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 7)));
    {
      libs__file_util__maybe_report_stats_3_p_0(ll_backend__optimize__Statistics_38);
    }
  }
}

static void MR_CALL 
ll_backend__optimize__optimize_repeat_11_p_0(
  MR_Word ll_backend__optimize__Info_12,
  MR_Integer ll_backend__optimize__CurIter_13,
  MR_Word ll_backend__optimize__LayoutLabelSet_14,
  MR_Word ll_backend__optimize__ProcLabel_15,
  MR_Word ll_backend__optimize__MayAlterRtti_16,
  MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_23,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_24,
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_25,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_26,
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_27,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_28)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__optimize__succeeded = (ll_backend__optimize__CurIter_13 > (MR_Integer) 0);

        if (ll_backend__optimize__succeeded)
          {
            MR_Integer ll_backend__optimize__NextIter_20 = (ll_backend__optimize__CurIter_13 - (MR_Integer) 1);
            MR_Word ll_backend__optimize__Final_21;
            MR_Word ll_backend__optimize__Mod_22;
            MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_31_31;
            MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_32_32;
            MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_33_33;

            ll_backend__optimize__succeeded = (ll_backend__optimize__NextIter_20 == (MR_Integer) 0);
            if (ll_backend__optimize__succeeded)
              ll_backend__optimize__Final_21 = (MR_Integer) 1;
            else
              ll_backend__optimize__Final_21 = (MR_Integer) 0;
            {
              ll_backend__optimize__optimize_repeated_12_p_0(ll_backend__optimize__Info_12, ll_backend__optimize__Final_21, ll_backend__optimize__LayoutLabelSet_14, ll_backend__optimize__ProcLabel_15, ll_backend__optimize__MayAlterRtti_16, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_23, &ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_31_31, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_25, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_32_32, ll_backend__optimize__STATE_VARIABLE_Instrs_0_27, &ll_backend__optimize__STATE_VARIABLE_Instrs_33_33, &ll_backend__optimize__Mod_22);
            }
            switch (ll_backend__optimize__Mod_22) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_24 = ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_31_31;
                  *ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_26 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_32_32;
                  *ll_backend__optimize__STATE_VARIABLE_Instrs_28 = ll_backend__optimize__STATE_VARIABLE_Instrs_33_33;
                }
                break;
              case (MR_Integer) 1:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Integer ll_backend__optimize__CurIter__tmp_copy_13 = ll_backend__optimize__NextIter_20;
                    MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0__tmp_copy_23 = ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_31_31;
                    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0__tmp_copy_25 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_32_32;
                    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0__tmp_copy_27 = ll_backend__optimize__STATE_VARIABLE_Instrs_33_33;

                    ll_backend__optimize__STATE_VARIABLE_Instrs_0_27 = ll_backend__optimize__STATE_VARIABLE_Instrs_0__tmp_copy_27;
                    ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_25 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0__tmp_copy_25;
                    ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_23 = ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0__tmp_copy_23;
                    ll_backend__optimize__CurIter_13 = ll_backend__optimize__CurIter__tmp_copy_13;
                  }
                  continue;
                }
                break;
            }
          }
        else
          {
            *ll_backend__optimize__STATE_VARIABLE_Instrs_28 = ll_backend__optimize__STATE_VARIABLE_Instrs_0_27;
            *ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_26 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_25;
            *ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_24 = ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_23;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__optimize__optimize_initial_11_p_0(
  MR_Word ll_backend__optimize__Info_12,
  MR_Word ll_backend__optimize__LayoutLabelSet_13,
  MR_Word ll_backend__optimize__ProcLabel_14,
  MR_Word ll_backend__optimize__CodeModel_15,
  MR_Word ll_backend__optimize__MayAlterRtti_16,
  MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_25,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_26,
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_27,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_28,
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_29,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_30)
{
  {
    MR_bool ll_backend__optimize__succeeded;
    MR_String ll_backend__optimize__LabelStr_20;
    MR_Word ll_backend__optimize__OptFrames_21;
    MR_Word ll_backend__optimize__V_42_42;
    MR_Word ll_backend__optimize__V_43_43;
    MR_Word ll_backend__optimize__V_44_44;
    MR_Word ll_backend__optimize__V_45_45;
    MR_Integer ll_backend__optimize__V_46_46;
    MR_Word ll_backend__optimize__V_47_47;
    MR_Word ll_backend__optimize__V_48_48;
    MR_Word ll_backend__optimize__V_49_49;
    MR_Word ll_backend__optimize__V_50_50;
    MR_Word ll_backend__optimize__V_51_51;
    MR_Word ll_backend__optimize__V_52_52;
    MR_Word ll_backend__optimize__V_53_53;
    MR_Word ll_backend__optimize__V_54_54;
    MR_Word ll_backend__optimize__V_55_55;
    MR_Word ll_backend__optimize__V_56_56;
    MR_Word ll_backend__optimize__V_57_57;
    MR_Word ll_backend__optimize__V_58_58;
    MR_Word ll_backend__optimize__V_59_59;
    MR_Integer ll_backend__optimize__V_60_60;
    MR_Integer ll_backend__optimize__V_61_61;
    MR_Word ll_backend__optimize__V_62_62;
    MR_Word ll_backend__optimize__V_63_63;
    MR_Word ll_backend__optimize__V_64_64;

    {
      ll_backend__optimize__LabelStr_20 = ll_backend__opt_util__format_proc_label_1_f_0(ll_backend__optimize__ProcLabel_14);
    }
    ll_backend__optimize__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 0)))) & (MR_Integer) 1);
    ll_backend__optimize__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__optimize__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__optimize__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__optimize__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 1)));
    ll_backend__optimize__V_47_47 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) & (MR_Integer) 7);
    ll_backend__optimize__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__optimize__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__optimize__OptFrames_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__optimize__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__optimize__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__optimize__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__optimize__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__optimize__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__optimize__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__optimize__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__optimize__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
    ll_backend__optimize__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
    ll_backend__optimize__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
    ll_backend__optimize__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 3)));
    ll_backend__optimize__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 4)));
    ll_backend__optimize__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 5)));
    ll_backend__optimize__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 6)));
    ll_backend__optimize__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 7)));
    ll_backend__optimize__succeeded = (ll_backend__optimize__OptFrames_21 == (MR_Integer) 1);
    if (ll_backend__optimize__succeeded)
      {
        ll_backend__optimize__succeeded = (ll_backend__optimize__MayAlterRtti_16 == (MR_Integer) 0);
        if (ll_backend__optimize__succeeded)
          ll_backend__optimize__succeeded = (ll_backend__optimize__CodeModel_15 == (MR_Integer) 2);
      }
    if (ll_backend__optimize__succeeded)
      {
        MR_Word ll_backend__optimize__VeryVerbose_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_65_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Integer ll_backend__optimize__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 1)));
        MR_Word ll_backend__optimize__V_69_69 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) & (MR_Integer) 7);
        MR_Word ll_backend__optimize__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
        MR_Word ll_backend__optimize__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
        MR_Integer ll_backend__optimize__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 3)));
        MR_Integer ll_backend__optimize__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 4)));
        MR_Word ll_backend__optimize__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 5)));
        MR_Word ll_backend__optimize__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 6)));
        MR_Word ll_backend__optimize__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 7)));
        MR_Word ll_backend__optimize___Mod_24;

        switch (ll_backend__optimize__VeryVerbose_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "% Optimizing nondet frames for ");
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_20);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
            }
            break;
        }
        {
          ll_backend__frameopt__frameopt_keep_nondet_frame_7_p_0(ll_backend__optimize__ProcLabel_14, ll_backend__optimize__LayoutLabelSet_13, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_25, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_26, ll_backend__optimize__STATE_VARIABLE_Instrs_0_29, ll_backend__optimize__STATE_VARIABLE_Instrs_30, &ll_backend__optimize___Mod_24);
        }
        {
          ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_12, *ll_backend__optimize__STATE_VARIABLE_Instrs_30, *ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_26, (MR_String) "ndframeopt", (MR_String) "after nondet frame opt", ll_backend__optimize__ProcLabel_14, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_27, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_28);
        }
      }
    else
      {
        *ll_backend__optimize__STATE_VARIABLE_Instrs_30 = ll_backend__optimize__STATE_VARIABLE_Instrs_0_29;
        *ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_28 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_27;
        *ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_26 = ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_25;
      }
  }
}

static void MR_CALL 
ll_backend__optimize__maybe_opt_debug_8_p_0(
  MR_Word ll_backend__optimize__Info_9,
  MR_Word ll_backend__optimize__Instrs_10,
  MR_Word ll_backend__optimize__Counter_11,
  MR_String ll_backend__optimize__Suffix_12,
  MR_String ll_backend__optimize__Msg_13,
  MR_Word ll_backend__optimize__ProcLabel_14,
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37,
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_38)
{
  {
    MR_bool ll_backend__optimize__succeeded;

    if ((ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_38 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37;
    else
      {
        MR_String ll_backend__optimize__BaseName_16 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37, (MR_Integer) 0)));
        MR_Integer ll_backend__optimize__OptNum0_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37, (MR_Integer) 1)));
        MR_Integer ll_backend__optimize__PrevNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37, (MR_Integer) 3)));
        MR_String ll_backend__optimize__PrevFileName_20 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37, (MR_Integer) 4)));
        MR_Word ll_backend__optimize__PrevInstrs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37, (MR_Integer) 5)));
        MR_Integer ll_backend__optimize__OptNum_22 = (ll_backend__optimize__OptNum0_17 + (MR_Integer) 1);
        MR_String ll_backend__optimize__OptFileName_23;
        MR_String ll_backend__optimize__DiffFileName_24;
        MR_Word ll_backend__optimize__Same_25;
        MR_String ll_backend__optimize__V_40_40;
        MR_String ll_backend__optimize__V_42_42;
        MR_String ll_backend__optimize__V_43_43;
        MR_String ll_backend__optimize__V_44_44;
        MR_String ll_backend__optimize__V_46_46;
        MR_String ll_backend__optimize__V_48_48;
        MR_String ll_backend__optimize__V_49_49;
        MR_String ll_backend__optimize__V_50_50;
        MR_String ll_backend__optimize___OptFileName0_18 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37, (MR_Integer) 2)));
        MR_Word ll_backend__optimize__Res_27;

        {
          ll_backend__optimize__V_43_43 = ll_backend__optimize__num_to_str_1_f_0(ll_backend__optimize__OptNum_22);
        }
        {
          ll_backend__optimize__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) ".", ll_backend__optimize__Suffix_12);
        }
        {
          ll_backend__optimize__V_42_42 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__V_43_43, ll_backend__optimize__V_44_44);
        }
        {
          ll_backend__optimize__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) ".opt", ll_backend__optimize__V_42_42);
        }
        {
          ll_backend__optimize__OptFileName_23 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__BaseName_16, ll_backend__optimize__V_40_40);
        }
        {
          ll_backend__optimize__V_49_49 = ll_backend__optimize__num_to_str_1_f_0(ll_backend__optimize__OptNum_22);
        }
        {
          ll_backend__optimize__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) ".", ll_backend__optimize__Suffix_12);
        }
        {
          ll_backend__optimize__V_48_48 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__V_49_49, ll_backend__optimize__V_50_50);
        }
        {
          ll_backend__optimize__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) ".diff", ll_backend__optimize__V_48_48);
        }
        {
          ll_backend__optimize__DiffFileName_24 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__BaseName_16, ll_backend__optimize__V_46_46);
        }
        {
          ll_backend__optimize__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__optimize_scalar_common_1[1], ((MR_Box) (ll_backend__optimize__Instrs_10)), ((MR_Box) (ll_backend__optimize__PrevInstrs_21)));
        }
        if (ll_backend__optimize__succeeded)
          {
            ll_backend__optimize__Same_25 = (MR_Integer) 1;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_38 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__optimize__BaseName_16));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__optimize__OptNum_22));
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ll_backend__optimize__OptFileName_23));
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ll_backend__optimize__PrevNum_19));
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (ll_backend__optimize__PrevFileName_20));
              MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (ll_backend__optimize__Instrs_10));
            }
          }
        else
          {
            ll_backend__optimize__Same_25 = (MR_Integer) 0;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_38 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__optimize__BaseName_16));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__optimize__OptNum_22));
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ll_backend__optimize__OptFileName_23));
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ll_backend__optimize__OptNum_22));
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (ll_backend__optimize__OptFileName_23));
              MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (ll_backend__optimize__Instrs_10));
            }
          }
        {
          mercury__io__open_output_4_p_0(ll_backend__optimize__OptFileName_23, &ll_backend__optimize__Res_27);
        }
        if (((MR_tag((MR_Word) ll_backend__optimize__Res_27)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String ll_backend__optimize__V_60_60;

            {
              ll_backend__optimize__V_60_60 = mercury__string__f_43_43_2_f_0((MR_String) "cannot open ", ll_backend__optimize__OptFileName_23);
            }
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.optimize", (MR_String) "predicate \140ll_backend.optimize.maybe_opt_debug\'/8", ll_backend__optimize__V_60_60);
              return;
            }
          }
        else
          {
            MR_Word ll_backend__optimize__FileStream_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Res_27, (MR_Integer) 0)));
            MR_Word ll_backend__optimize__OutputStream_29;
            MR_Integer ll_backend__optimize__NextLabel_30;
            MR_Word ll_backend__optimize__V_31_31;

            {
              mercury__io__set_output_stream_4_p_0(ll_backend__optimize__FileStream_28, &ll_backend__optimize__OutputStream_29);
            }
            {
              mercury__counter__allocate_3_p_0(&ll_backend__optimize__NextLabel_30, ll_backend__optimize__Counter_11, &ll_backend__optimize__V_31_31);
            }
            {
              ll_backend__opt_debug__msg_5_p_0((MR_Integer) 1, ll_backend__optimize__NextLabel_30, ll_backend__optimize__Msg_13);
            }
            switch (ll_backend__optimize__Same_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ll_backend__optimize__AutoComments_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) & (MR_Integer) 1);
                  MR_String ll_backend__optimize__DiffCommand_35;
                  MR_Word ll_backend__optimize__V_66_66;
                  MR_String ll_backend__optimize__V_73_73;
                  MR_String ll_backend__optimize__V_74_74;
                  MR_String ll_backend__optimize__V_76_76;
                  MR_String ll_backend__optimize__V_77_77;
                  MR_String ll_backend__optimize__V_79_79;
                  MR_Word ll_backend__optimize__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word ll_backend__optimize__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  MR_Word ll_backend__optimize__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  MR_Integer ll_backend__optimize__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 1)));
                  MR_Word ll_backend__optimize__V_86_86 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) & (MR_Integer) 7);
                  MR_Word ll_backend__optimize__V_87_87 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  MR_Word ll_backend__optimize__V_88_88 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                  MR_Word ll_backend__optimize__V_89_89 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                  MR_Word ll_backend__optimize__V_90_90 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                  MR_Word ll_backend__optimize__V_91_91 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                  MR_Word ll_backend__optimize__V_92_92 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                  MR_Word ll_backend__optimize__V_93_93 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
                  MR_Word ll_backend__optimize__V_94_94 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
                  MR_Word ll_backend__optimize__V_95_95 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
                  MR_Word ll_backend__optimize__V_96_96 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
                  MR_Word ll_backend__optimize__V_97_97 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
                  MR_Word ll_backend__optimize__V_98_98 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
                  MR_Word ll_backend__optimize__V_99_99 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
                  MR_Integer ll_backend__optimize__V_100_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 3)));
                  MR_Integer ll_backend__optimize__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 4)));
                  MR_Word ll_backend__optimize__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 5)));
                  MR_Word ll_backend__optimize__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 6)));
                  MR_Word ll_backend__optimize__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 7)));
                  MR_Word ll_backend__optimize__V_33_33;
                  MR_Word ll_backend__optimize__V_36_36;

                  {
                    ll_backend__optimize__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__optimize__V_66_66, 0) = ((MR_Box) (ll_backend__optimize__ProcLabel_14));
                  }
                  {
                    ll_backend__opt_debug__maybe_write_instrs_6_p_0((MR_Integer) 1, ll_backend__optimize__AutoComments_32, ll_backend__optimize__V_66_66, ll_backend__optimize__Instrs_10);
                  }
                  {
                    mercury__io__set_output_stream_4_p_0(ll_backend__optimize__OutputStream_29, &ll_backend__optimize__V_33_33);
                  }
                  {
                    mercury__io__close_output_3_p_0(ll_backend__optimize__FileStream_28);
                  }
                  {
                    ll_backend__optimize__V_79_79 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__DiffFileName_24, (MR_String) "\'");
                  }
                  {
                    ll_backend__optimize__V_77_77 = mercury__string__f_43_43_2_f_0((MR_String) "\' > \'", ll_backend__optimize__V_79_79);
                  }
                  {
                    ll_backend__optimize__V_76_76 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__OptFileName_23, ll_backend__optimize__V_77_77);
                  }
                  {
                    ll_backend__optimize__V_74_74 = mercury__string__f_43_43_2_f_0((MR_String) "\' \'", ll_backend__optimize__V_76_76);
                  }
                  {
                    ll_backend__optimize__V_73_73 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__PrevFileName_20, ll_backend__optimize__V_74_74);
                  }
                  {
                    ll_backend__optimize__DiffCommand_35 = mercury__string__f_43_43_2_f_0((MR_String) "diff -u \'", ll_backend__optimize__V_73_73);
                  }
                  {
                    mercury__io__call_system_4_p_0(ll_backend__optimize__DiffCommand_35, &ll_backend__optimize__V_36_36);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__optimize__V_106_106;

                  {
                    mercury__io__write_string_3_p_0((MR_String) "same as previous version\n");
                  }
                  {
                    mercury__io__set_output_stream_4_p_0(ll_backend__optimize__OutputStream_29, &ll_backend__optimize__V_106_106);
                  }
                  {
                    mercury__io__close_output_3_p_0(ll_backend__optimize__FileStream_28);
                  }
                }
                break;
            }
          }
      }
  }
}

static MR_String MR_CALL 
ll_backend__optimize__num_to_str_1_f_0(
  MR_Integer ll_backend__optimize__N_3)
{
  {
    MR_bool ll_backend__optimize__succeeded = (ll_backend__optimize__N_3 < (MR_Integer) 10);
    MR_String ll_backend__optimize__HeadVar__2_2;

    if (ll_backend__optimize__succeeded)
      {
        MR_String ll_backend__optimize__V_6_6;

        {
          ll_backend__optimize__V_6_6 = mercury__string__int_to_string_1_f_0(ll_backend__optimize__N_3);
        }
        {
          ll_backend__optimize__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "0", ll_backend__optimize__V_6_6);
        }
      }
    else
      {
        ll_backend__optimize__HeadVar__2_2 = mercury__string__int_to_string_1_f_0(ll_backend__optimize__N_3);
      }
    return ll_backend__optimize__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
ll_backend__optimize__opt_subdir_name_0_f_0(void)
{
  {
    MR_bool ll_backend__optimize__succeeded;

    return (MR_String) "OptSubdir";
  }
}

static void MR_CALL 
ll_backend__optimize__output_first_opt_debug_7_p_0(
  MR_Word ll_backend__optimize__Info_8,
  MR_String ll_backend__optimize__FileName_9,
  MR_Word ll_backend__optimize__ProcLabel_10,
  MR_Word ll_backend__optimize__Instrs0_11,
  MR_Word ll_backend__optimize__Counter_12)
{
  {
    MR_bool ll_backend__optimize__succeeded;
    MR_Word ll_backend__optimize__MkdirRes_14;
    MR_Integer ll_backend__optimize__V_29_29;

    {
      mercury__io__call_system_4_p_0((MR_String) "mkdir -p OptSubdir", &ll_backend__optimize__MkdirRes_14);
    }
    ll_backend__optimize__succeeded = ((MR_tag((MR_Word) ll_backend__optimize__MkdirRes_14)) == (MR_mktag((MR_Integer) 0)));
    if (ll_backend__optimize__succeeded)
      {
        ll_backend__optimize__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__MkdirRes_14, (MR_Integer) 0)));
        ll_backend__optimize__succeeded = (ll_backend__optimize__V_29_29 == (MR_Integer) 0);
      }
    if (ll_backend__optimize__succeeded)
      {
        MR_Word ll_backend__optimize__Res_15;

        {
          mercury__io__open_output_4_p_0(ll_backend__optimize__FileName_9, &ll_backend__optimize__Res_15);
        }
        if (((MR_tag((MR_Word) ll_backend__optimize__Res_15)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String ll_backend__optimize__V_33_33;

            {
              ll_backend__optimize__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "cannot open ", ll_backend__optimize__FileName_9);
            }
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.optimize", (MR_String) "predicate \140ll_backend.optimize.output_first_opt_debug\'/7", ll_backend__optimize__V_33_33);
              return;
            }
          }
        else
          {
            MR_Word ll_backend__optimize__FileStream_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Res_15, (MR_Integer) 0)));
            MR_Word ll_backend__optimize__OutputStream_17;
            MR_Integer ll_backend__optimize__NextLabel_18;
            MR_Word ll_backend__optimize__AutoComments_20;
            MR_Word ll_backend__optimize__V_40_40;
            MR_Word ll_backend__optimize__V_19_19;
            MR_Word ll_backend__optimize__V_49_49;
            MR_Word ll_backend__optimize__V_50_50;
            MR_Word ll_backend__optimize__V_51_51;
            MR_Integer ll_backend__optimize__V_52_52;
            MR_Word ll_backend__optimize__V_53_53;
            MR_Word ll_backend__optimize__V_54_54;
            MR_Word ll_backend__optimize__V_55_55;
            MR_Word ll_backend__optimize__V_56_56;
            MR_Word ll_backend__optimize__V_57_57;
            MR_Word ll_backend__optimize__V_58_58;
            MR_Word ll_backend__optimize__V_59_59;
            MR_Word ll_backend__optimize__V_60_60;
            MR_Word ll_backend__optimize__V_61_61;
            MR_Word ll_backend__optimize__V_62_62;
            MR_Word ll_backend__optimize__V_63_63;
            MR_Word ll_backend__optimize__V_64_64;
            MR_Word ll_backend__optimize__V_65_65;
            MR_Word ll_backend__optimize__V_66_66;
            MR_Integer ll_backend__optimize__V_67_67;
            MR_Integer ll_backend__optimize__V_68_68;
            MR_Word ll_backend__optimize__V_69_69;
            MR_Word ll_backend__optimize__V_70_70;
            MR_Word ll_backend__optimize__V_71_71;
            MR_Word ll_backend__optimize__V_21_21;

            {
              mercury__io__set_output_stream_4_p_0(ll_backend__optimize__FileStream_16, &ll_backend__optimize__OutputStream_17);
            }
            {
              mercury__counter__allocate_3_p_0(&ll_backend__optimize__NextLabel_18, ll_backend__optimize__Counter_12, &ll_backend__optimize__V_19_19);
            }
            {
              ll_backend__opt_debug__msg_5_p_0((MR_Integer) 1, ll_backend__optimize__NextLabel_18, (MR_String) "before optimization");
            }
            ll_backend__optimize__AutoComments_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 0)))) & (MR_Integer) 1);
            ll_backend__optimize__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            ll_backend__optimize__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            ll_backend__optimize__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            ll_backend__optimize__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 1)));
            ll_backend__optimize__V_53_53 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) & (MR_Integer) 7);
            ll_backend__optimize__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            ll_backend__optimize__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
            ll_backend__optimize__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
            ll_backend__optimize__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
            ll_backend__optimize__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
            ll_backend__optimize__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
            ll_backend__optimize__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
            ll_backend__optimize__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
            ll_backend__optimize__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
            ll_backend__optimize__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
            ll_backend__optimize__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
            ll_backend__optimize__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
            ll_backend__optimize__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
            ll_backend__optimize__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 3)));
            ll_backend__optimize__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 4)));
            ll_backend__optimize__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 5)));
            ll_backend__optimize__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 6)));
            ll_backend__optimize__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 7)));
            {
              ll_backend__optimize__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__optimize__V_40_40, 0) = ((MR_Box) (ll_backend__optimize__ProcLabel_10));
            }
            {
              ll_backend__opt_debug__maybe_write_instrs_6_p_0((MR_Integer) 1, ll_backend__optimize__AutoComments_20, ll_backend__optimize__V_40_40, ll_backend__optimize__Instrs0_11);
            }
            {
              mercury__io__set_output_stream_4_p_0(ll_backend__optimize__OutputStream_17, &ll_backend__optimize__V_21_21);
            }
            {
              mercury__io__close_output_3_p_0(ll_backend__optimize__FileStream_16);
            }
          }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.optimize", (MR_String) "predicate \140ll_backend.optimize.output_first_opt_debug\'/7", (MR_String) "cannot make OptSubdir");
          return;
        }
      }
  }
}

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_1(
  void * ll_backend__optimize__env_ptr_arg)
{
  {
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * ll_backend__optimize__env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) ll_backend__optimize__env_ptr_arg;

    MR_builtin_longjmp((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_3(
  void * ll_backend__optimize__env_ptr_arg)
{
  {
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * ll_backend__optimize__env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) ll_backend__optimize__env_ptr_arg;

    (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStr_47 = ((MR_String) (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__conv0_DebugOptPredIdStr_47);
    {
      ll_backend__optimize__need_opt_debug_info_5_p_0_2(ll_backend__optimize__env_ptr);
    }
  }
}

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_2(
  void * ll_backend__optimize__env_ptr_arg)
{
  {
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * ll_backend__optimize__env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) ll_backend__optimize__env_ptr_arg;

    {
      (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = mercury__string__to_int_2_p_0((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStr_47, &(ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredId_48);
    }
    if ((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded)
      {
        (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = ((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredId_48 == (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__PredIdInt_16);
        if ((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded)
          {
            ll_backend__optimize__need_opt_debug_info_5_p_0_1(ll_backend__optimize__env_ptr);
          }
      }
  }
}

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_4(
  void * ll_backend__optimize__env_ptr_arg)
{
  {
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * ll_backend__optimize__env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) ll_backend__optimize__env_ptr_arg;

    if (MR_builtin_setjmp((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &(ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__conv0_DebugOptPredIdStr_47, (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStrs_12, ll_backend__optimize__need_opt_debug_info_5_p_0_3, ll_backend__optimize__env_ptr);
          }
        }
        (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_5(
  void * ll_backend__optimize__env_ptr_arg)
{
  {
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * ll_backend__optimize__env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) ll_backend__optimize__env_ptr_arg;

    MR_builtin_longjmp((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_7(
  void * ll_backend__optimize__env_ptr_arg)
{
  {
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * ll_backend__optimize__env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) ll_backend__optimize__env_ptr_arg;

    (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStr_45 = ((MR_String) (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__conv1_DebugOptPredIdStr_45);
    {
      ll_backend__optimize__need_opt_debug_info_5_p_0_6(ll_backend__optimize__env_ptr);
    }
  }
}

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_6(
  void * ll_backend__optimize__env_ptr_arg)
{
  {
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * ll_backend__optimize__env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) ll_backend__optimize__env_ptr_arg;

    {
      (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = mercury__string__to_int_2_p_0((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStr_45, &(ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredId_46);
    }
    if ((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded)
      {
        (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = ((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredId_46 == (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__PredIdInt_16);
        if ((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded)
          {
            ll_backend__optimize__need_opt_debug_info_5_p_0_5(ll_backend__optimize__env_ptr);
          }
      }
  }
}

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_8(
  void * ll_backend__optimize__env_ptr_arg)
{
  {
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * ll_backend__optimize__env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) ll_backend__optimize__env_ptr_arg;

    if (MR_builtin_setjmp((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__commit_1) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &(ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__conv1_DebugOptPredIdStr_45, (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStrs_12, ll_backend__optimize__need_opt_debug_info_5_p_0_7, ll_backend__optimize__env_ptr);
          }
        }
        (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0(
  MR_Word ll_backend__optimize__Info_6,
  MR_String ll_backend__optimize__Name_7,
  MR_Integer ll_backend__optimize__Arity_8,
  MR_Word ll_backend__optimize__PredProcId_9,
  MR_Word * ll_backend__optimize__MaybeBaseName_10)
{
  {
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s ll_backend__optimize__env;

    {
      MR_Word ll_backend__optimize__DebugOpt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 5)));
      MR_Word ll_backend__optimize__DebugOptPredNames_13;
      MR_Word ll_backend__optimize__PredId_14;
      MR_Integer ll_backend__optimize__ProcId_15;
      MR_Integer ll_backend__optimize__ProcIdInt_17;
      MR_Word ll_backend__optimize__V_49_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ll_backend__optimize__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ll_backend__optimize__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ll_backend__optimize__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Integer ll_backend__optimize__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 1)));
      MR_Word ll_backend__optimize__V_54_54 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) & (MR_Integer) 7);
      MR_Word ll_backend__optimize__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ll_backend__optimize__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ll_backend__optimize__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ll_backend__optimize__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word ll_backend__optimize__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word ll_backend__optimize__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      MR_Word ll_backend__optimize__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
      MR_Word ll_backend__optimize__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
      MR_Word ll_backend__optimize__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
      MR_Word ll_backend__optimize__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
      MR_Word ll_backend__optimize__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
      MR_Word ll_backend__optimize__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
      MR_Word ll_backend__optimize__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
      MR_Integer ll_backend__optimize__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 3)));
      MR_Integer ll_backend__optimize__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 4)));

      (ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStrs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 6)));
      ll_backend__optimize__DebugOptPredNames_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 7)));
      ll_backend__optimize__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__PredProcId_9, (MR_Integer) 0)));
      ll_backend__optimize__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__PredProcId_9, (MR_Integer) 1)));
      {
        hlds__hlds_pred__pred_id_to_int_2_p_0(ll_backend__optimize__PredId_14, &(ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__PredIdInt_16);
      }
      {
        hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__optimize__ProcId_15, &ll_backend__optimize__ProcIdInt_17);
      }
      (ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = (ll_backend__optimize__DebugOpt_11 == (MR_Integer) 1);
      if ((ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded)
        {
          if (((ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStrs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            if ((ll_backend__optimize__DebugOptPredNames_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              (ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = MR_TRUE;
            else
              {
                {
                  (ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (ll_backend__optimize__Name_7)), ll_backend__optimize__DebugOptPredNames_13);
                }
              }
          else
          if ((ll_backend__optimize__DebugOptPredNames_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                ll_backend__optimize__need_opt_debug_info_5_p_0_4(&ll_backend__optimize__env);
              }
            }
          else
            {
              {
                ll_backend__optimize__need_opt_debug_info_5_p_0_8(&ll_backend__optimize__env);
              }
              if (!((ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded))
                {
                  {
                    (ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (ll_backend__optimize__Name_7)), ll_backend__optimize__DebugOptPredNames_13);
                  }
                }
            }
        }
      if ((ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded)
        {
          MR_String ll_backend__optimize__BaseName_28;
          MR_String ll_backend__optimize__V_29_29;
          MR_String ll_backend__optimize__V_30_30;
          MR_String ll_backend__optimize__V_32_32;
          MR_String ll_backend__optimize__V_33_33;
          MR_String ll_backend__optimize__V_34_34;
          MR_String ll_backend__optimize__V_36_36;
          MR_String ll_backend__optimize__V_37_37;
          MR_String ll_backend__optimize__V_38_38;
          MR_String ll_backend__optimize__V_40_40;
          MR_String ll_backend__optimize__V_41_41;
          MR_String ll_backend__optimize__V_42_42;
          MR_String ll_backend__optimize__V_44_44;

          {
            ll_backend__optimize__V_29_29 = ll_backend__optimize__opt_subdir_name_0_f_0();
          }
          {
            ll_backend__optimize__V_33_33 = ll_backend__optimize__mangle_name_as_filename_1_f_0(ll_backend__optimize__Name_7);
          }
          {
            ll_backend__optimize__V_37_37 = mercury__string__int_to_string_1_f_0(ll_backend__optimize__Arity_8);
          }
          {
            ll_backend__optimize__V_41_41 = mercury__string__int_to_string_1_f_0((ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__PredIdInt_16);
          }
          {
            ll_backend__optimize__V_44_44 = mercury__string__int_to_string_1_f_0(ll_backend__optimize__ProcIdInt_17);
          }
          {
            ll_backend__optimize__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) ".proc", ll_backend__optimize__V_44_44);
          }
          {
            ll_backend__optimize__V_40_40 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__V_41_41, ll_backend__optimize__V_42_42);
          }
          {
            ll_backend__optimize__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) ".pred", ll_backend__optimize__V_40_40);
          }
          {
            ll_backend__optimize__V_36_36 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__V_37_37, ll_backend__optimize__V_38_38);
          }
          {
            ll_backend__optimize__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__optimize__V_36_36);
          }
          {
            ll_backend__optimize__V_32_32 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__V_33_33, ll_backend__optimize__V_34_34);
          }
          {
            ll_backend__optimize__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "/", ll_backend__optimize__V_32_32);
          }
          {
            ll_backend__optimize__BaseName_28 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__V_29_29, ll_backend__optimize__V_30_30);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__optimize__MaybeBaseName_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__optimize__BaseName_28));
          }
        }
      else
        *ll_backend__optimize__MaybeBaseName_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
  }
}

static MR_Word MR_CALL 
ll_backend__optimize__make_internal_label_for_proc_label_2_f_0(
  MR_Word ll_backend__optimize__ProcLabel_4,
  MR_Integer ll_backend__optimize__LabelNum_5)
{
  {
    MR_bool ll_backend__optimize__succeeded;
    MR_Word ll_backend__optimize__HeadVar__3_3;

    {
      ll_backend__optimize__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, 0) = ((MR_Box) (ll_backend__optimize__LabelNum_5));
      MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, 1) = ((MR_Box) (ll_backend__optimize__ProcLabel_4));
    }
    return ll_backend__optimize__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
ll_backend__optimize__optimize_proc_4_p_0_1(
  MR_Box ll_backend__optimize__closure_arg,
  MR_Box ll_backend__optimize__wrapper_arg_1)
{
  {
    MR_Box ll_backend__optimize__wrapper_arg_2;
    MR_Box ll_backend__optimize__closure = ll_backend__optimize__closure_arg;
    MR_Word ll_backend__optimize__conv0_HeadVar__3_3;

    {
      ll_backend__optimize__conv0_HeadVar__3_3 = ll_backend__optimize__make_internal_label_for_proc_label_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__closure, (MR_Integer) 3))), ((MR_Integer) ll_backend__optimize__wrapper_arg_1));
    }
    ll_backend__optimize__wrapper_arg_2 = ((MR_Box) (ll_backend__optimize__conv0_HeadVar__3_3));
    return ll_backend__optimize__wrapper_arg_2;
  }
}

void MR_CALL 
ll_backend__optimize__optimize_proc_4_p_0(
  MR_Word ll_backend__optimize__Globals_5,
  MR_Word ll_backend__optimize__GlobalData_6,
  MR_Word ll_backend__optimize__CProc0_7,
  MR_Word * ll_backend__optimize__CProc_8)
{
  {
    MR_bool ll_backend__optimize__succeeded;
    MR_Word ll_backend__optimize__Info_9;
    MR_String ll_backend__optimize__Name_13;
    MR_Integer ll_backend__optimize__Arity_14;
    MR_Word ll_backend__optimize__PredProcId_15;
    MR_Word ll_backend__optimize__ProcLabel_16;
    MR_Word ll_backend__optimize__CodeModel_17;
    MR_Word ll_backend__optimize__MayAlterRtti_18;
    MR_Word ll_backend__optimize__CGlobalVars_19;
    MR_Word ll_backend__optimize__MaybeBaseName_20;
    MR_Integer ll_backend__optimize__Repeat_24;
    MR_Word ll_backend__optimize__LayoutLabelSet_29;
    MR_Word ll_backend__optimize__Statistics_30;
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_31_31;
    MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_32_32;
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43;
    MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_45_45;
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_46_46;
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_47_47;
    MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_48_48;
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_49_49;
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_50_50;
    MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_54_54;
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_55_55;
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_56_56;
    MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_59_59;
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_60_60;
    MR_Word ll_backend__optimize__V_63_63;
    MR_Word ll_backend__optimize__V_64_64;
    MR_Word ll_backend__optimize__V_65_65;
    MR_Word ll_backend__optimize__V_66_66;
    MR_Integer ll_backend__optimize__V_67_67;
    MR_Word ll_backend__optimize__V_68_68;
    MR_Word ll_backend__optimize__V_69_69;
    MR_Word ll_backend__optimize__V_70_70;
    MR_Word ll_backend__optimize__V_71_71;
    MR_Word ll_backend__optimize__V_72_72;
    MR_Word ll_backend__optimize__V_73_73;
    MR_Word ll_backend__optimize__V_74_74;
    MR_Word ll_backend__optimize__V_75_75;
    MR_Word ll_backend__optimize__V_76_76;
    MR_Word ll_backend__optimize__V_77_77;
    MR_Word ll_backend__optimize__V_78_78;
    MR_Word ll_backend__optimize__V_79_79;
    MR_Word ll_backend__optimize__V_80_80;
    MR_Word ll_backend__optimize__V_81_81;
    MR_Integer ll_backend__optimize__V_82_82;
    MR_Word ll_backend__optimize__V_83_83;
    MR_Word ll_backend__optimize__V_84_84;
    MR_Word ll_backend__optimize__V_85_85;
    MR_Word ll_backend__optimize__ProcLayout_25;
    MR_Word ll_backend__optimize__V_109_109;
    MR_Word ll_backend__optimize__V_110_110;
    MR_Word ll_backend__optimize__V_111_111;
    MR_Integer ll_backend__optimize__V_112_112;
    MR_Word ll_backend__optimize__V_113_113;
    MR_Word ll_backend__optimize__V_114_114;
    MR_Word ll_backend__optimize__V_115_115;
    MR_Word ll_backend__optimize__V_116_116;
    MR_Word ll_backend__optimize__V_117_117;
    MR_Word ll_backend__optimize__V_118_118;
    MR_Word ll_backend__optimize__V_119_119;
    MR_Word ll_backend__optimize__V_120_120;
    MR_Word ll_backend__optimize__V_121_121;
    MR_Word ll_backend__optimize__V_122_122;
    MR_Word ll_backend__optimize__V_123_123;
    MR_Word ll_backend__optimize__V_124_124;
    MR_Word ll_backend__optimize__V_125_125;
    MR_Word ll_backend__optimize__V_126_126;
    MR_Integer ll_backend__optimize__V_127_127;
    MR_Integer ll_backend__optimize__V_128_128;
    MR_Word ll_backend__optimize__V_129_129;
    MR_Word ll_backend__optimize__V_130_130;
    MR_Word ll_backend__optimize__V_131_131;

    {
      ll_backend__optimize__Info_9 = ll_backend__optimize__init_llds_opt_info_1_f_0(ll_backend__optimize__Globals_5);
    }
    ll_backend__optimize__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 0)));
    ll_backend__optimize__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 1)));
    ll_backend__optimize__PredProcId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 2)));
    ll_backend__optimize__ProcLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 3)));
    ll_backend__optimize__CodeModel_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 4)));
    ll_backend__optimize__STATE_VARIABLE_Instrs_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 5)));
    ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 6)));
    ll_backend__optimize__MayAlterRtti_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 7)));
    ll_backend__optimize__CGlobalVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 8)));
    {
      ll_backend__optimize__need_opt_debug_info_5_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__Name_13, ll_backend__optimize__Arity_14, ll_backend__optimize__PredProcId_15, &ll_backend__optimize__MaybeBaseName_20);
    }
    if ((ll_backend__optimize__MaybeBaseName_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_String ll_backend__optimize__BaseName_21 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__MaybeBaseName_20, (MR_Integer) 0)));
        MR_String ll_backend__optimize__FirstFileName_22;
        MR_String ll_backend__optimize__V_33_33;
        MR_String ll_backend__optimize__V_35_35;

        {
          ll_backend__optimize__V_35_35 = ll_backend__optimize__num_to_str_1_f_0((MR_Integer) 0);
        }
        {
          ll_backend__optimize__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) ".opt", ll_backend__optimize__V_35_35);
        }
        {
          ll_backend__optimize__FirstFileName_22 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__BaseName_21, ll_backend__optimize__V_33_33);
        }
        {
          ll_backend__optimize__output_first_opt_debug_7_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__FirstFileName_22, ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_Instrs_31_31, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_32_32);
        }
        {
          ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43, 0) = ((MR_Box) (ll_backend__optimize__BaseName_21));
          MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43, 2) = ((MR_Box) (ll_backend__optimize__FirstFileName_22));
          MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43, 3) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43, 4) = ((MR_Box) (ll_backend__optimize__FirstFileName_22));
          MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43, 5) = ((MR_Box) (ll_backend__optimize__STATE_VARIABLE_Instrs_31_31));
        }
      }
    ll_backend__optimize__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) & (MR_Integer) 1);
    ll_backend__optimize__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__optimize__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__optimize__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__optimize__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 1)));
    ll_backend__optimize__V_68_68 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) & (MR_Integer) 7);
    ll_backend__optimize__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__optimize__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__optimize__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__optimize__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__optimize__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__optimize__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__optimize__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__optimize__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__optimize__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__optimize__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__optimize__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
    ll_backend__optimize__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
    ll_backend__optimize__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
    ll_backend__optimize__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 3)));
    ll_backend__optimize__Repeat_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 4)));
    ll_backend__optimize__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 5)));
    ll_backend__optimize__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 6)));
    ll_backend__optimize__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 7)));
    {
      ll_backend__optimize__succeeded = ll_backend__global_data__global_data_maybe_get_proc_layout_3_p_0(ll_backend__optimize__GlobalData_6, ll_backend__optimize__PredProcId_15, &ll_backend__optimize__ProcLayout_25);
    }
    if (ll_backend__optimize__succeeded)
      {
        MR_Word ll_backend__optimize__TypeCtorInfo_132_132 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Word ll_backend__optimize__TypeCtorInfo_134_134;
        MR_Word ll_backend__optimize__LabelMap_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 19)));
        MR_Word ll_backend__optimize__LayoutLabelNums_27;
        MR_Word ll_backend__optimize__LayoutLabels_28;
        MR_Word ll_backend__optimize__V_44_44;
        MR_Word ll_backend__optimize__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 0)));
        MR_Word ll_backend__optimize__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 1)));
        MR_Word ll_backend__optimize__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 2)));
        MR_Integer ll_backend__optimize__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 3)));
        MR_Word ll_backend__optimize__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 4)));
        MR_Word ll_backend__optimize__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 5)));
        MR_Word ll_backend__optimize__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 6)));
        MR_Word ll_backend__optimize__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 7)));
        MR_Integer ll_backend__optimize__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 8)));
        MR_Integer ll_backend__optimize__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 9)));
        MR_Word ll_backend__optimize__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 10)));
        MR_Word ll_backend__optimize__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 11)));
        MR_Word ll_backend__optimize__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 12)));
        MR_Word ll_backend__optimize__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 13)));
        MR_Word ll_backend__optimize__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 14)));
        MR_Word ll_backend__optimize__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 15)));
        MR_Word ll_backend__optimize__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 16)));
        MR_Word ll_backend__optimize__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 17)));
        MR_Word ll_backend__optimize__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 18)));
        MR_Word ll_backend__optimize__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 20)));
        MR_Word ll_backend__optimize__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 21)));
        MR_Word ll_backend__optimize__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 22)));
        MR_Word ll_backend__optimize__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 23)));

        {
          mercury__map__sorted_keys_2_p_0(ll_backend__optimize__TypeCtorInfo_132_132, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__optimize__LabelMap_26, &ll_backend__optimize__LayoutLabelNums_27);
        }
        ll_backend__optimize__TypeCtorInfo_134_134 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
        {
          ll_backend__optimize__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__optimize__V_44_44, 0) = ((MR_Box) (&ll_backend__optimize_scalar_common_2[0]));
          MR_hl_field(MR_mktag(0), ll_backend__optimize__V_44_44, 1) = ((MR_Box) (ll_backend__optimize__optimize_proc_4_p_0_1));
          MR_hl_field(MR_mktag(0), ll_backend__optimize__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ll_backend__optimize__V_44_44, 3) = ((MR_Box) (ll_backend__optimize__ProcLabel_16));
        }
        {
          ll_backend__optimize__LayoutLabels_28 = mercury__list__map_2_f_0(ll_backend__optimize__TypeCtorInfo_132_132, ll_backend__optimize__TypeCtorInfo_134_134, ll_backend__optimize__V_44_44, ll_backend__optimize__LayoutLabelNums_27);
        }
        {
          mercury__set_tree234__sorted_list_to_set_2_p_0(ll_backend__optimize__TypeCtorInfo_134_134, ll_backend__optimize__LayoutLabels_28, &ll_backend__optimize__LayoutLabelSet_29);
        }
      }
    else
      {
        {
          ll_backend__optimize__LayoutLabelSet_29 = mercury__set_tree234__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0);
        }
      }
    ll_backend__optimize__V_109_109 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) & (MR_Integer) 1);
    ll_backend__optimize__Statistics_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__optimize__V_110_110 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__optimize__V_111_111 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__optimize__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 1)));
    ll_backend__optimize__V_113_113 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) & (MR_Integer) 7);
    ll_backend__optimize__V_114_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__optimize__V_115_115 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__optimize__V_116_116 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__optimize__V_117_117 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__optimize__V_118_118 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__optimize__V_119_119 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__optimize__V_120_120 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__optimize__V_121_121 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__optimize__V_122_122 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__optimize__V_123_123 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__optimize__V_124_124 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
    ll_backend__optimize__V_125_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
    ll_backend__optimize__V_126_126 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
    ll_backend__optimize__V_127_127 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 3)));
    ll_backend__optimize__V_128_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 4)));
    ll_backend__optimize__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 5)));
    ll_backend__optimize__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 6)));
    ll_backend__optimize__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 7)));
    {
      ll_backend__optimize__optimize_initial_11_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__LayoutLabelSet_29, ll_backend__optimize__ProcLabel_16, ll_backend__optimize__CodeModel_17, ll_backend__optimize__MayAlterRtti_18, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_32_32, &ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_45_45, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_46_46, ll_backend__optimize__STATE_VARIABLE_Instrs_31_31, &ll_backend__optimize__STATE_VARIABLE_Instrs_47_47);
    }
    {
      ll_backend__optimize__optimize_repeat_11_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__Repeat_24, ll_backend__optimize__LayoutLabelSet_29, ll_backend__optimize__ProcLabel_16, ll_backend__optimize__MayAlterRtti_18, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_45_45, &ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_48_48, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_46_46, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_49_49, ll_backend__optimize__STATE_VARIABLE_Instrs_47_47, &ll_backend__optimize__STATE_VARIABLE_Instrs_50_50);
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(ll_backend__optimize__Statistics_30);
    }
    {
      ll_backend__optimize__optimize_middle_12_p_0(ll_backend__optimize__Info_9, (MR_Integer) 1, ll_backend__optimize__LayoutLabelSet_29, ll_backend__optimize__ProcLabel_16, ll_backend__optimize__CodeModel_17, ll_backend__optimize__MayAlterRtti_18, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_48_48, &ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_54_54, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_49_49, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_55_55, ll_backend__optimize__STATE_VARIABLE_Instrs_50_50, &ll_backend__optimize__STATE_VARIABLE_Instrs_56_56);
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(ll_backend__optimize__Statistics_30);
    }
    {
      ll_backend__optimize__optimize_last_8_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__LayoutLabelSet_29, ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_54_54, &ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_59_59, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_55_55, ll_backend__optimize__STATE_VARIABLE_Instrs_56_56, &ll_backend__optimize__STATE_VARIABLE_Instrs_60_60);
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(ll_backend__optimize__Statistics_30);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__optimize__CProc_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__optimize__Name_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__optimize__Arity_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__optimize__PredProcId_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__optimize__ProcLabel_16));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__optimize__CodeModel_17));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__optimize__STATE_VARIABLE_Instrs_60_60));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_59_59));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__optimize__MayAlterRtti_18));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__optimize__CGlobalVars_19));
    }
  }
}

void MR_CALL 
ll_backend__optimize__optimize_procs_4_p_0(
  MR_Word ll_backend__optimize__Globals_1,
  MR_Word ll_backend__optimize__GlobalData_2,
  MR_Word ll_backend__optimize__HeadVar__3_3,
  MR_Word * ll_backend__optimize__HeadVar__4_4)
{
  {
    MR_bool ll_backend__optimize__succeeded;

    if ((ll_backend__optimize__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__optimize__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__optimize__Proc0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__optimize__Procs0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__optimize__Proc_11;
        MR_Word ll_backend__optimize__Procs_12;

        {
          ll_backend__optimize__optimize_proc_4_p_0(ll_backend__optimize__Globals_1, ll_backend__optimize__GlobalData_2, ll_backend__optimize__Proc0_9, &ll_backend__optimize__Proc_11);
        }
        {
          ll_backend__optimize__optimize_procs_4_p_0(ll_backend__optimize__Globals_1, ll_backend__optimize__GlobalData_2, ll_backend__optimize__Procs0_10, &ll_backend__optimize__Procs_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__optimize__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__optimize__Proc_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__optimize__Procs_12));
        }
      }
  }
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

/* :- end_module ll_backend.optimize. */
