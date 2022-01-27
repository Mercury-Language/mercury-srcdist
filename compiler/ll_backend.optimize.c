/*
** Automatically generated from `optimize.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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



#line 166 "optimize.m"
struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s {
#line 169 "optimize.m"
  MR_bool ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded;
#line 169 "optimize.m"
  MR_Word ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStrs_12;
#line 169 "optimize.m"
  MR_Integer ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__PredIdInt_16;
#line 194 "optimize.m"
  jmp_buf ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__commit_0;
#line 194 "optimize.m"
  MR_String ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStr_47;
#line 194 "optimize.m"
  MR_Integer ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredId_48;
#line 194 "optimize.m"
  MR_Box ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__conv0_DebugOptPredIdStr_47;
#line 183 "optimize.m"
  jmp_buf ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__commit_1;
#line 183 "optimize.m"
  MR_String ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStr_45;
#line 183 "optimize.m"
  MR_Integer ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredId_46;
#line 183 "optimize.m"
  MR_Box ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__conv1_DebugOptPredIdStr_45;
#line 166 "optimize.m"
};


#line 199 "ll_backend.optimize.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__optimize__list__ti_list_1builtin__type_ctor_info_string_0;

#line 202 "ll_backend.optimize.c"
static const MR_PseudoTypeInfo ll_backend__optimize__ll_backend__optimize__field_types_llds_opt_info_0_0[24];

#line 205 "ll_backend.optimize.c"
static const MR_ConstString ll_backend__optimize__ll_backend__optimize__field_names_llds_opt_info_0_0[24];

#line 208 "ll_backend.optimize.c"
static const MR_DuArgLocn ll_backend__optimize__ll_backend__optimize__field_locns_llds_opt_info_0_0[24];

#line 211 "ll_backend.optimize.c"
static const MR_DuFunctorDesc ll_backend__optimize__ll_backend__optimize__du_functor_desc_llds_opt_info_0_0;

#line 214 "ll_backend.optimize.c"
static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_stag_ordered_llds_opt_info_0_0[1];

#line 217 "ll_backend.optimize.c"
static const MR_DuPtagLayout ll_backend__optimize__ll_backend__optimize__du_ptag_ordered_llds_opt_info_0[1];

#line 220 "ll_backend.optimize.c"
static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_name_ordered_llds_opt_info_0[1];

#line 223 "ll_backend.optimize.c"
static const MR_Integer ll_backend__optimize__ll_backend__optimize__functor_number_map_llds_opt_info_0[1];

#line 226 "ll_backend.optimize.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__optimize__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0;

#line 229 "ll_backend.optimize.c"
static const MR_PseudoTypeInfo ll_backend__optimize__ll_backend__optimize__field_types_opt_debug_info_0_0[6];

#line 232 "ll_backend.optimize.c"
static const MR_ConstString ll_backend__optimize__ll_backend__optimize__field_names_opt_debug_info_0_0[6];

#line 235 "ll_backend.optimize.c"
static const MR_DuFunctorDesc ll_backend__optimize__ll_backend__optimize__du_functor_desc_opt_debug_info_0_0;

#line 238 "ll_backend.optimize.c"
static const MR_DuFunctorDesc ll_backend__optimize__ll_backend__optimize__du_functor_desc_opt_debug_info_0_1;

#line 241 "ll_backend.optimize.c"
static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_stag_ordered_opt_debug_info_0_0[1];

#line 244 "ll_backend.optimize.c"
static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_stag_ordered_opt_debug_info_0_1[1];

#line 247 "ll_backend.optimize.c"
static const MR_DuPtagLayout ll_backend__optimize__ll_backend__optimize__du_ptag_ordered_opt_debug_info_0[2];

#line 250 "ll_backend.optimize.c"
static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_name_ordered_opt_debug_info_0[2];

#line 253 "ll_backend.optimize.c"
static const MR_Integer ll_backend__optimize__ll_backend__optimize__functor_number_map_opt_debug_info_0[2];

#line 256 "ll_backend.optimize.c"
static MR_bool MR_CALL 
ll_backend__optimize____Unify____llds_opt_info_0_0_10001(
#line 259 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_1,
#line 261 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_2);

#line 264 "ll_backend.optimize.c"
static void MR_CALL 
ll_backend__optimize____Compare____llds_opt_info_0_0_10001(
#line 267 "ll_backend.optimize.c"
  MR_Box * ll_backend__optimize__wrapper_arg_1,
#line 269 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_2,
#line 271 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_3);

#line 274 "ll_backend.optimize.c"
static MR_bool MR_CALL 
ll_backend__optimize____Unify____opt_debug_info_0_0_10001(
#line 277 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_1,
#line 279 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_2);

#line 282 "ll_backend.optimize.c"
static void MR_CALL 
ll_backend__optimize____Compare____opt_debug_info_0_0_10001(
#line 285 "ll_backend.optimize.c"
  MR_Box * ll_backend__optimize__wrapper_arg_1,
#line 287 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_2,
#line 289 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_3);

#line 141 "optimize.m"
static void MR_CALL 
ll_backend__optimize____Compare____opt_debug_info_0_0(
#line 141 "optimize.m"
  MR_Word * ll_backend__optimize__HeadVar__1_1,
#line 141 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__2_2,
#line 141 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__3_3);

#line 141 "optimize.m"
static MR_bool MR_CALL 
ll_backend__optimize____Unify____opt_debug_info_0_0(
#line 141 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__1_1,
#line 141 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__2_2);

#line 766 "optimize.m"
static void MR_CALL 
ll_backend__optimize____Compare____llds_opt_info_0_0(
#line 766 "optimize.m"
  MR_Word * ll_backend__optimize__HeadVar__1_1,
#line 766 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__2_2,
#line 766 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__3_3);

#line 766 "optimize.m"
static MR_bool MR_CALL 
ll_backend__optimize____Unify____llds_opt_info_0_0(
#line 766 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__1_1,
#line 766 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__2_2);

#line 798 "optimize.m"
static MR_Word MR_CALL 
ll_backend__optimize__init_llds_opt_info_1_f_0(
#line 798 "optimize.m"
  MR_Word ll_backend__optimize__Globals_3);

#line 755 "optimize.m"
static void MR_CALL 
ll_backend__optimize__escape_dir_char_3_p_0(
#line 755 "optimize.m"
  MR_Char ll_backend__optimize__Char_4,
#line 755 "optimize.m"
  MR_String ll_backend__optimize__STATE_VARIABLE_Str_0_6,
#line 755 "optimize.m"
  MR_String * ll_backend__optimize__STATE_VARIABLE_Str_7);

#line 753 "optimize.m"
static void MR_CALL 
ll_backend__optimize__mangle_name_as_filename_1_f_0_1(
#line 753 "optimize.m"
  MR_Box ll_backend__optimize__closure_arg,
#line 753 "optimize.m"
  MR_Box ll_backend__optimize__wrapper_arg_1,
#line 753 "optimize.m"
  MR_Box ll_backend__optimize__wrapper_arg_2,
#line 753 "optimize.m"
  MR_Box * ll_backend__optimize__wrapper_arg_3);

#line 750 "optimize.m"
static MR_String MR_CALL 
ll_backend__optimize__mangle_name_as_filename_1_f_0(
#line 750 "optimize.m"
  MR_String ll_backend__optimize__Str0_3);

#line 621 "optimize.m"
static void MR_CALL 
ll_backend__optimize__optimize_last_8_p_0(
#line 621 "optimize.m"
  MR_Word ll_backend__optimize__Info_9,
#line 621 "optimize.m"
  MR_Word ll_backend__optimize__LayoutLabelSet_10,
#line 621 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_11,
#line 621 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_24,
#line 621 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_25,
#line 621 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_26,
#line 621 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_27,
#line 621 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_28);

#line 488 "optimize.m"
static void MR_CALL 
ll_backend__optimize__optimize_middle_12_p_0(
#line 488 "optimize.m"
  MR_Word ll_backend__optimize__Info_13,
#line 488 "optimize.m"
  MR_Word ll_backend__optimize__Final_14,
#line 488 "optimize.m"
  MR_Word ll_backend__optimize__LayoutLabelSet_15,
#line 488 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_16,
#line 488 "optimize.m"
  MR_Word ll_backend__optimize__CodeModel_17,
#line 488 "optimize.m"
  MR_Word ll_backend__optimize__MayAlterRtti_18,
#line 488 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_41,
#line 488 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_42,
#line 488 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_43,
#line 488 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_44,
#line 488 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_45,
#line 488 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_46);

#line 382 "optimize.m"
static void MR_CALL 
ll_backend__optimize__optimize_repeated_12_p_0(
#line 382 "optimize.m"
  MR_Word ll_backend__optimize__Info_13,
#line 382 "optimize.m"
  MR_Word ll_backend__optimize__Final_14,
#line 382 "optimize.m"
  MR_Word ll_backend__optimize__LayoutLabelSet_15,
#line 382 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_16,
#line 382 "optimize.m"
  MR_Word ll_backend__optimize__MayAlterRtti_17,
#line 382 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_39,
#line 382 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_40,
#line 382 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_41,
#line 382 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_42,
#line 382 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_43,
#line 382 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_44,
#line 382 "optimize.m"
  MR_Word * ll_backend__optimize__Mod_21);

#line 352 "optimize.m"
static void MR_CALL 
ll_backend__optimize__optimize_repeat_11_p_0(
#line 352 "optimize.m"
  MR_Word ll_backend__optimize__Info_12,
#line 352 "optimize.m"
  MR_Integer ll_backend__optimize__CurIter_13,
#line 352 "optimize.m"
  MR_Word ll_backend__optimize__LayoutLabelSet_14,
#line 352 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_15,
#line 352 "optimize.m"
  MR_Word ll_backend__optimize__MayAlterRtti_16,
#line 352 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_23,
#line 352 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_24,
#line 352 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_25,
#line 352 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_26,
#line 352 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_27,
#line 352 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_28);

#line 317 "optimize.m"
static void MR_CALL 
ll_backend__optimize__optimize_initial_11_p_0(
#line 317 "optimize.m"
  MR_Word ll_backend__optimize__Info_12,
#line 317 "optimize.m"
  MR_Word ll_backend__optimize__LayoutLabelSet_13,
#line 317 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_14,
#line 317 "optimize.m"
  MR_Word ll_backend__optimize__CodeModel_15,
#line 317 "optimize.m"
  MR_Word ll_backend__optimize__MayAlterRtti_16,
#line 317 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_25,
#line 317 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_26,
#line 317 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_27,
#line 317 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_28,
#line 317 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_29,
#line 317 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_30);

#line 254 "optimize.m"
static void MR_CALL 
ll_backend__optimize__maybe_opt_debug_8_p_0(
#line 254 "optimize.m"
  MR_Word ll_backend__optimize__Info_9,
#line 254 "optimize.m"
  MR_Word ll_backend__optimize__Instrs_10,
#line 254 "optimize.m"
  MR_Word ll_backend__optimize__Counter_11,
#line 254 "optimize.m"
  MR_String ll_backend__optimize__Suffix_12,
#line 254 "optimize.m"
  MR_String ll_backend__optimize__Msg_13,
#line 254 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_14,
#line 254 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37,
#line 254 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_38);

#line 245 "optimize.m"
static MR_String MR_CALL 
ll_backend__optimize__num_to_str_1_f_0(
#line 245 "optimize.m"
  MR_Integer ll_backend__optimize__N_3);

#line 241 "optimize.m"
static MR_String MR_CALL 
ll_backend__optimize__opt_subdir_name_0_f_0(void);

#line 216 "optimize.m"
static void MR_CALL 
ll_backend__optimize__output_first_opt_debug_7_p_0(
#line 216 "optimize.m"
  MR_Word ll_backend__optimize__Info_8,
#line 216 "optimize.m"
  MR_String ll_backend__optimize__FileName_9,
#line 216 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_10,
#line 216 "optimize.m"
  MR_Word ll_backend__optimize__Instrs0_11,
#line 216 "optimize.m"
  MR_Word ll_backend__optimize__Counter_12);

#line 194 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_1(
#line 194 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg);

#line 194 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_3(
#line 194 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg);

#line 194 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_2(
#line 194 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg);

#line 194 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_4(
#line 194 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg);

#line 183 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_5(
#line 183 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg);

#line 183 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_7(
#line 183 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg);

#line 183 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_6(
#line 183 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg);

#line 183 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_8(
#line 183 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg);

#line 166 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0(
#line 166 "optimize.m"
  MR_Word ll_backend__optimize__Info_6,
#line 166 "optimize.m"
  MR_String ll_backend__optimize__Name_7,
#line 166 "optimize.m"
  MR_Integer ll_backend__optimize__Arity_8,
#line 166 "optimize.m"
  MR_Word ll_backend__optimize__PredProcId_9,
#line 166 "optimize.m"
  MR_Word * ll_backend__optimize__MaybeBaseName_10);

#line 134 "optimize.m"
static MR_Word MR_CALL 
ll_backend__optimize__make_internal_label_for_proc_label_2_f_0(
#line 134 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_4,
#line 134 "optimize.m"
  MR_Integer ll_backend__optimize__LabelNum_5);

#line 106 "optimize.m"
static MR_Box MR_CALL 
ll_backend__optimize__optimize_proc_4_p_0_1(
#line 106 "optimize.m"
  MR_Box ll_backend__optimize__closure_arg,
#line 106 "optimize.m"
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



#line 675 "ll_backend.optimize.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__optimize__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 683 "ll_backend.optimize.c"
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

#line 711 "ll_backend.optimize.c"
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

#line 739 "ll_backend.optimize.c"
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

#line 863 "ll_backend.optimize.c"
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
  NULL
};

#line 878 "ll_backend.optimize.c"
static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_stag_ordered_llds_opt_info_0_0[1] = {
  &ll_backend__optimize__ll_backend__optimize__du_functor_desc_llds_opt_info_0_0
};

#line 883 "ll_backend.optimize.c"
static const MR_DuPtagLayout ll_backend__optimize__ll_backend__optimize__du_ptag_ordered_llds_opt_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__optimize__ll_backend__optimize__du_stag_ordered_llds_opt_info_0_0
  }
};

#line 892 "ll_backend.optimize.c"
static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_name_ordered_llds_opt_info_0[1] = {
  &ll_backend__optimize__ll_backend__optimize__du_functor_desc_llds_opt_info_0_0
};

#line 897 "ll_backend.optimize.c"
static const MR_Integer ll_backend__optimize__ll_backend__optimize__functor_number_map_llds_opt_info_0[1] = {
  (MR_Integer) 0
};

#line 902 "ll_backend.optimize.c"
const MR_TypeCtorInfo_Struct ll_backend__optimize__ll_backend__optimize__type_ctor_info_llds_opt_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 919 "ll_backend.optimize.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__optimize__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 927 "ll_backend.optimize.c"
static const MR_PseudoTypeInfo ll_backend__optimize__ll_backend__optimize__field_types_opt_debug_info_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__optimize__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0
};

#line 937 "ll_backend.optimize.c"
static const MR_ConstString ll_backend__optimize__ll_backend__optimize__field_names_opt_debug_info_0_0[6] = {
  (MR_String) "odi_dump_file_base_name",
  (MR_String) "odi_last_dump_num",
  (MR_String) "odi_last_dump_file_name",
  (MR_String) "odi_last_instrs_dump_num",
  (MR_String) "odi_last_instrs_dump_file_name",
  (MR_String) "odi_last_dump_instr_seq"
};

#line 947 "ll_backend.optimize.c"
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
  NULL
};

#line 962 "ll_backend.optimize.c"
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
  NULL
};

#line 977 "ll_backend.optimize.c"
static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_stag_ordered_opt_debug_info_0_0[1] = {
  &ll_backend__optimize__ll_backend__optimize__du_functor_desc_opt_debug_info_0_1
};

#line 982 "ll_backend.optimize.c"
static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_stag_ordered_opt_debug_info_0_1[1] = {
  &ll_backend__optimize__ll_backend__optimize__du_functor_desc_opt_debug_info_0_0
};

#line 987 "ll_backend.optimize.c"
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

#line 1001 "ll_backend.optimize.c"
static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_name_ordered_opt_debug_info_0[2] = {
  &ll_backend__optimize__ll_backend__optimize__du_functor_desc_opt_debug_info_0_1,
  &ll_backend__optimize__ll_backend__optimize__du_functor_desc_opt_debug_info_0_0
};

#line 1007 "ll_backend.optimize.c"
static const MR_Integer ll_backend__optimize__ll_backend__optimize__functor_number_map_opt_debug_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1013 "ll_backend.optimize.c"
const MR_TypeCtorInfo_Struct ll_backend__optimize__ll_backend__optimize__type_ctor_info_opt_debug_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1030 "ll_backend.optimize.c"
static MR_bool MR_CALL 
ll_backend__optimize____Unify____llds_opt_info_0_0_10001(
#line 1033 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_1,
#line 1035 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_2)
#line 1037 "ll_backend.optimize.c"
{
#line 1039 "ll_backend.optimize.c"
  {
#line 1041 "ll_backend.optimize.c"
    MR_bool ll_backend__optimize__succeeded;

#line 1044 "ll_backend.optimize.c"
    {
#line 1046 "ll_backend.optimize.c"
      ll_backend__optimize__succeeded = ll_backend__optimize____Unify____llds_opt_info_0_0(((MR_Word) ll_backend__optimize__wrapper_arg_1), ((MR_Word) ll_backend__optimize__wrapper_arg_2));
    }
#line 1049 "ll_backend.optimize.c"
    return ll_backend__optimize__succeeded;
#line 1051 "ll_backend.optimize.c"
  }
#line 1053 "ll_backend.optimize.c"
}

#line 1056 "ll_backend.optimize.c"
static void MR_CALL 
ll_backend__optimize____Compare____llds_opt_info_0_0_10001(
#line 1059 "ll_backend.optimize.c"
  MR_Box * ll_backend__optimize__wrapper_arg_1,
#line 1061 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_2,
#line 1063 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_3)
#line 1065 "ll_backend.optimize.c"
{
#line 1067 "ll_backend.optimize.c"
  {
#line 1069 "ll_backend.optimize.c"
    MR_Word ll_backend__optimize__conv0_HeadVar__1_1;

#line 1072 "ll_backend.optimize.c"
    {
#line 1074 "ll_backend.optimize.c"
      ll_backend__optimize____Compare____llds_opt_info_0_0(&ll_backend__optimize__conv0_HeadVar__1_1, ((MR_Word) ll_backend__optimize__wrapper_arg_2), ((MR_Word) ll_backend__optimize__wrapper_arg_3));
    }
#line 1077 "ll_backend.optimize.c"
    *ll_backend__optimize__wrapper_arg_1 = ((MR_Box) (ll_backend__optimize__conv0_HeadVar__1_1));
#line 1079 "ll_backend.optimize.c"
  }
#line 1081 "ll_backend.optimize.c"
}

#line 1084 "ll_backend.optimize.c"
static MR_bool MR_CALL 
ll_backend__optimize____Unify____opt_debug_info_0_0_10001(
#line 1087 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_1,
#line 1089 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_2)
#line 1091 "ll_backend.optimize.c"
{
#line 1093 "ll_backend.optimize.c"
  {
#line 1095 "ll_backend.optimize.c"
    MR_bool ll_backend__optimize__succeeded;

#line 1098 "ll_backend.optimize.c"
    {
#line 1100 "ll_backend.optimize.c"
      ll_backend__optimize__succeeded = ll_backend__optimize____Unify____opt_debug_info_0_0(((MR_Word) ll_backend__optimize__wrapper_arg_1), ((MR_Word) ll_backend__optimize__wrapper_arg_2));
    }
#line 1103 "ll_backend.optimize.c"
    return ll_backend__optimize__succeeded;
#line 1105 "ll_backend.optimize.c"
  }
#line 1107 "ll_backend.optimize.c"
}

#line 1110 "ll_backend.optimize.c"
static void MR_CALL 
ll_backend__optimize____Compare____opt_debug_info_0_0_10001(
#line 1113 "ll_backend.optimize.c"
  MR_Box * ll_backend__optimize__wrapper_arg_1,
#line 1115 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_2,
#line 1117 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_3)
#line 1119 "ll_backend.optimize.c"
{
#line 1121 "ll_backend.optimize.c"
  {
#line 1123 "ll_backend.optimize.c"
    MR_Word ll_backend__optimize__conv0_HeadVar__1_1;

#line 1126 "ll_backend.optimize.c"
    {
#line 1128 "ll_backend.optimize.c"
      ll_backend__optimize____Compare____opt_debug_info_0_0(&ll_backend__optimize__conv0_HeadVar__1_1, ((MR_Word) ll_backend__optimize__wrapper_arg_2), ((MR_Word) ll_backend__optimize__wrapper_arg_3));
    }
#line 1131 "ll_backend.optimize.c"
    *ll_backend__optimize__wrapper_arg_1 = ((MR_Box) (ll_backend__optimize__conv0_HeadVar__1_1));
#line 1133 "ll_backend.optimize.c"
  }
#line 1135 "ll_backend.optimize.c"
}

#line 141 "optimize.m"
static void MR_CALL 
ll_backend__optimize____Compare____opt_debug_info_0_0(
#line 141 "optimize.m"
  MR_Word * ll_backend__optimize__HeadVar__1_1,
#line 141 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__2_2,
#line 141 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__3_3)
#line 141 "optimize.m"
{
#line 141 "optimize.m"
  {
#line 141 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 141 "optimize.m"
    MR_Integer ll_backend__optimize__CastX_33 = (MR_Integer) ll_backend__optimize__HeadVar__2_2;
#line 141 "optimize.m"
    MR_Integer ll_backend__optimize__CastY_34 = (MR_Integer) ll_backend__optimize__HeadVar__3_3;

#line 141 "optimize.m"
    ll_backend__optimize__succeeded = (ll_backend__optimize__CastX_33 == ll_backend__optimize__CastY_34);
#line 141 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 1162 "ll_backend.optimize.c"
      *ll_backend__optimize__HeadVar__1_1 = (MR_Integer) 0;
#line 141 "optimize.m"
    else
#line 141 "optimize.m"
    if ((ll_backend__optimize__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 141 "optimize.m"
      if ((ll_backend__optimize__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 141 "optimize.m"
        *ll_backend__optimize__HeadVar__1_1 = (MR_Integer) 0;
#line 141 "optimize.m"
      else
#line 1174 "ll_backend.optimize.c"
        *ll_backend__optimize__HeadVar__1_1 = (MR_Integer) 2;
#line 141 "optimize.m"
    else
#line 141 "optimize.m"
      {
#line 141 "optimize.m"
        MR_Word ll_backend__optimize__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 5)));
#line 141 "optimize.m"
        MR_String ll_backend__optimize__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 4)));
#line 141 "optimize.m"
        MR_Integer ll_backend__optimize__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 3)));
#line 141 "optimize.m"
        MR_String ll_backend__optimize__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)));
#line 141 "optimize.m"
        MR_Integer ll_backend__optimize__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 1)));
#line 141 "optimize.m"
        MR_String ll_backend__optimize__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)));

#line 141 "optimize.m"
        if ((ll_backend__optimize__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1195 "ll_backend.optimize.c"
          *ll_backend__optimize__HeadVar__1_1 = (MR_Integer) 1;
#line 141 "optimize.m"
        else
#line 141 "optimize.m"
          {
#line 141 "optimize.m"
            MR_String ll_backend__optimize__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 0)));
#line 141 "optimize.m"
            MR_Integer ll_backend__optimize__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 1)));
#line 141 "optimize.m"
            MR_String ll_backend__optimize__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)));
#line 141 "optimize.m"
            MR_Integer ll_backend__optimize__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 3)));
#line 141 "optimize.m"
            MR_String ll_backend__optimize__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 4)));
#line 141 "optimize.m"
            MR_Word ll_backend__optimize__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 5)));
#line 141 "optimize.m"
            MR_Word ll_backend__optimize__V_16_16;

#line 141 "optimize.m"
            {
#line 141 "optimize.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__optimize__V_16_16, ll_backend__optimize__V_46_46, ll_backend__optimize__V_10_10);
            }
#line 1221 "ll_backend.optimize.c"
            ll_backend__optimize__succeeded = (ll_backend__optimize__V_16_16 == (MR_Integer) 0);
#line 141 "optimize.m"
            ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 141 "optimize.m"
            if (ll_backend__optimize__succeeded)
#line 141 "optimize.m"
              *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_16_16;
#line 141 "optimize.m"
            else
#line 141 "optimize.m"
              {
#line 141 "optimize.m"
                MR_Word ll_backend__optimize__V_17_17;

#line 141 "optimize.m"
                {
#line 141 "optimize.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_17_17, ll_backend__optimize__V_45_45, ll_backend__optimize__V_11_11);
                }
#line 1241 "ll_backend.optimize.c"
                ll_backend__optimize__succeeded = (ll_backend__optimize__V_17_17 == (MR_Integer) 0);
#line 141 "optimize.m"
                ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 141 "optimize.m"
                if (ll_backend__optimize__succeeded)
#line 141 "optimize.m"
                  *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_17_17;
#line 141 "optimize.m"
                else
#line 141 "optimize.m"
                  {
#line 141 "optimize.m"
                    MR_Word ll_backend__optimize__V_18_18;

#line 141 "optimize.m"
                    {
#line 141 "optimize.m"
                      mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__optimize__V_18_18, ll_backend__optimize__V_44_44, ll_backend__optimize__V_12_12);
                    }
#line 1261 "ll_backend.optimize.c"
                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_18_18 == (MR_Integer) 0);
#line 141 "optimize.m"
                    ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 141 "optimize.m"
                    if (ll_backend__optimize__succeeded)
#line 141 "optimize.m"
                      *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_18_18;
#line 141 "optimize.m"
                    else
#line 141 "optimize.m"
                      {
#line 141 "optimize.m"
                        MR_Word ll_backend__optimize__V_19_19;

#line 141 "optimize.m"
                        {
#line 141 "optimize.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_19_19, ll_backend__optimize__V_43_43, ll_backend__optimize__V_13_13);
                        }
#line 1281 "ll_backend.optimize.c"
                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_19_19 == (MR_Integer) 0);
#line 141 "optimize.m"
                        ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 141 "optimize.m"
                        if (ll_backend__optimize__succeeded)
#line 141 "optimize.m"
                          *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_19_19;
#line 141 "optimize.m"
                        else
#line 141 "optimize.m"
                          {
#line 141 "optimize.m"
                            MR_Word ll_backend__optimize__V_20_20;

#line 141 "optimize.m"
                            {
#line 141 "optimize.m"
                              mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__optimize__V_20_20, ll_backend__optimize__V_42_42, ll_backend__optimize__V_14_14);
                            }
#line 1301 "ll_backend.optimize.c"
                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_20_20 == (MR_Integer) 0);
#line 141 "optimize.m"
                            ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 141 "optimize.m"
                            if (ll_backend__optimize__succeeded)
#line 141 "optimize.m"
                              *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_20_20;
#line 141 "optimize.m"
                            else
#line 141 "optimize.m"
                              {
#line 141 "optimize.m"
                                {
#line 141 "optimize.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__optimize_scalar_common_1[1], ll_backend__optimize__HeadVar__1_1, ((MR_Box) (ll_backend__optimize__V_41_41)), ((MR_Box) (ll_backend__optimize__V_15_15)));
                                }
#line 141 "optimize.m"
                              }
#line 141 "optimize.m"
                          }
#line 141 "optimize.m"
                      }
#line 141 "optimize.m"
                  }
#line 141 "optimize.m"
              }
#line 141 "optimize.m"
          }
#line 141 "optimize.m"
      }
#line 141 "optimize.m"
  }
#line 141 "optimize.m"
}

#line 141 "optimize.m"
static MR_bool MR_CALL 
ll_backend__optimize____Unify____opt_debug_info_0_0(
#line 141 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__1_1,
#line 141 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__2_2)
#line 141 "optimize.m"
{
#line 141 "optimize.m"
  {
#line 141 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 141 "optimize.m"
    MR_Integer ll_backend__optimize__CastX_17 = (MR_Integer) ll_backend__optimize__HeadVar__1_1;
#line 141 "optimize.m"
    MR_Integer ll_backend__optimize__CastY_18 = (MR_Integer) ll_backend__optimize__HeadVar__2_2;

#line 141 "optimize.m"
    ll_backend__optimize__succeeded = (ll_backend__optimize__CastX_17 == ll_backend__optimize__CastY_18);
#line 141 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 141 "optimize.m"
      ll_backend__optimize__succeeded = MR_TRUE;
#line 141 "optimize.m"
    else
#line 141 "optimize.m"
    if ((ll_backend__optimize__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 141 "optimize.m"
      {
#line 141 "optimize.m"
        MR_Integer ll_backend__optimize__CastX_15 = (MR_Integer) ll_backend__optimize__HeadVar__1_1;
#line 141 "optimize.m"
        MR_Integer ll_backend__optimize__CastY_16 = (MR_Integer) ll_backend__optimize__HeadVar__2_2;

#line 141 "optimize.m"
        ll_backend__optimize__succeeded = (ll_backend__optimize__CastY_16 == ll_backend__optimize__CastX_15);
#line 141 "optimize.m"
      }
#line 141 "optimize.m"
    else
#line 141 "optimize.m"
      {
#line 141 "optimize.m"
        MR_Word ll_backend__optimize__TypeInfo_19_19;
#line 141 "optimize.m"
        MR_String ll_backend__optimize__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 0)));
#line 141 "optimize.m"
        MR_Integer ll_backend__optimize__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 1)));
#line 141 "optimize.m"
        MR_String ll_backend__optimize__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)));
#line 141 "optimize.m"
        MR_Integer ll_backend__optimize__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 3)));
#line 141 "optimize.m"
        MR_String ll_backend__optimize__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 4)));
#line 141 "optimize.m"
        MR_Word ll_backend__optimize__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 5)));
#line 141 "optimize.m"
        MR_String ll_backend__optimize__V_9_9;
#line 141 "optimize.m"
        MR_Integer ll_backend__optimize__V_10_10;
#line 141 "optimize.m"
        MR_String ll_backend__optimize__V_11_11;
#line 141 "optimize.m"
        MR_Integer ll_backend__optimize__V_12_12;
#line 141 "optimize.m"
        MR_String ll_backend__optimize__V_13_13;
#line 141 "optimize.m"
        MR_Word ll_backend__optimize__V_14_14;

#line 141 "optimize.m"
        ll_backend__optimize__succeeded = ((MR_tag((MR_Word) ll_backend__optimize__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 141 "optimize.m"
        if (ll_backend__optimize__succeeded)
#line 141 "optimize.m"
          {
#line 141 "optimize.m"
            ll_backend__optimize__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)));
#line 141 "optimize.m"
            ll_backend__optimize__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 1)));
#line 141 "optimize.m"
            ll_backend__optimize__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)));
#line 141 "optimize.m"
            ll_backend__optimize__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 3)));
#line 141 "optimize.m"
            ll_backend__optimize__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 4)));
#line 141 "optimize.m"
            ll_backend__optimize__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 5)));
#line 1425 "ll_backend.optimize.c"
            ll_backend__optimize__succeeded = (strcmp(ll_backend__optimize__V_3_3, ll_backend__optimize__V_9_9) == 0);
#line 141 "optimize.m"
            if (ll_backend__optimize__succeeded)
#line 141 "optimize.m"
              {
#line 1431 "ll_backend.optimize.c"
                ll_backend__optimize__succeeded = (ll_backend__optimize__V_4_4 == ll_backend__optimize__V_10_10);
#line 141 "optimize.m"
                if (ll_backend__optimize__succeeded)
#line 141 "optimize.m"
                  {
#line 1437 "ll_backend.optimize.c"
                    ll_backend__optimize__succeeded = (strcmp(ll_backend__optimize__V_5_5, ll_backend__optimize__V_11_11) == 0);
#line 141 "optimize.m"
                    if (ll_backend__optimize__succeeded)
#line 141 "optimize.m"
                      {
#line 1443 "ll_backend.optimize.c"
                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_6_6 == ll_backend__optimize__V_12_12);
#line 141 "optimize.m"
                        if (ll_backend__optimize__succeeded)
#line 141 "optimize.m"
                          {
#line 1449 "ll_backend.optimize.c"
                            ll_backend__optimize__succeeded = (strcmp(ll_backend__optimize__V_7_7, ll_backend__optimize__V_13_13) == 0);
#line 141 "optimize.m"
                            if (ll_backend__optimize__succeeded)
#line 141 "optimize.m"
                              {
#line 1455 "ll_backend.optimize.c"
                                ll_backend__optimize__TypeInfo_19_19 = (MR_Word) &ll_backend__optimize_scalar_common_1[1];
#line 1457 "ll_backend.optimize.c"
                                {
#line 1459 "ll_backend.optimize.c"
                                  ll_backend__optimize__succeeded = mercury__builtin__unify_2_p_0(ll_backend__optimize__TypeInfo_19_19, ((MR_Box) (ll_backend__optimize__V_8_8)), ((MR_Box) (ll_backend__optimize__V_14_14)));
                                }
#line 141 "optimize.m"
                              }
#line 141 "optimize.m"
                          }
#line 141 "optimize.m"
                      }
#line 141 "optimize.m"
                  }
#line 141 "optimize.m"
              }
#line 141 "optimize.m"
          }
#line 141 "optimize.m"
      }
#line 141 "optimize.m"
    return ll_backend__optimize__succeeded;
#line 141 "optimize.m"
  }
#line 141 "optimize.m"
}

#line 766 "optimize.m"
static void MR_CALL 
ll_backend__optimize____Compare____llds_opt_info_0_0(
#line 766 "optimize.m"
  MR_Word * ll_backend__optimize__HeadVar__1_1,
#line 766 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__2_2,
#line 766 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__3_3)
#line 766 "optimize.m"
{
#line 766 "optimize.m"
  {
#line 766 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 766 "optimize.m"
    MR_Integer ll_backend__optimize__CastX_75 = (MR_Integer) ll_backend__optimize__HeadVar__2_2;
#line 766 "optimize.m"
    MR_Integer ll_backend__optimize__CastY_76 = (MR_Integer) ll_backend__optimize__HeadVar__3_3;

#line 766 "optimize.m"
    ll_backend__optimize__succeeded = (ll_backend__optimize__CastX_75 == ll_backend__optimize__CastY_76);
#line 766 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 1507 "ll_backend.optimize.c"
      *ll_backend__optimize__HeadVar__1_1 = (MR_Integer) 0;
#line 766 "optimize.m"
    else
#line 766 "optimize.m"
      {
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Integer ll_backend__optimize__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 1)));
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Integer ll_backend__optimize__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 3)));
#line 766 "optimize.m"
        MR_Integer ll_backend__optimize__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 4)));
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 5)));
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 6)));
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 7)));
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Integer ll_backend__optimize__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 1)));
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Integer ll_backend__optimize__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 3)));
#line 766 "optimize.m"
        MR_Integer ll_backend__optimize__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 4)));
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 5)));
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 6)));
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 7)));
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_52_52;
#line 766 "optimize.m"
        MR_Integer ll_backend__optimize__V_101_101 = (MR_Integer) ll_backend__optimize__V_4_4;
#line 766 "optimize.m"
        MR_Integer ll_backend__optimize__V_102_102 = (MR_Integer) ll_backend__optimize__V_28_28;

#line 766 "optimize.m"
        {
#line 766 "optimize.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_52_52, ll_backend__optimize__V_101_101, ll_backend__optimize__V_102_102);
        }
#line 1621 "ll_backend.optimize.c"
        ll_backend__optimize__succeeded = (ll_backend__optimize__V_52_52 == (MR_Integer) 0);
#line 766 "optimize.m"
        ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 766 "optimize.m"
        if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
          *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_52_52;
#line 766 "optimize.m"
        else
#line 766 "optimize.m"
          {
#line 766 "optimize.m"
            MR_Word ll_backend__optimize__V_53_53;
#line 766 "optimize.m"
            MR_Integer ll_backend__optimize__V_103_103 = (MR_Integer) ll_backend__optimize__V_5_5;
#line 766 "optimize.m"
            MR_Integer ll_backend__optimize__V_104_104 = (MR_Integer) ll_backend__optimize__V_29_29;

#line 766 "optimize.m"
            {
#line 766 "optimize.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_53_53, ll_backend__optimize__V_103_103, ll_backend__optimize__V_104_104);
            }
#line 1645 "ll_backend.optimize.c"
            ll_backend__optimize__succeeded = (ll_backend__optimize__V_53_53 == (MR_Integer) 0);
#line 766 "optimize.m"
            ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 766 "optimize.m"
            if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
              *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_53_53;
#line 766 "optimize.m"
            else
#line 766 "optimize.m"
              {
#line 766 "optimize.m"
                MR_Word ll_backend__optimize__V_54_54;
#line 766 "optimize.m"
                MR_Integer ll_backend__optimize__V_105_105 = (MR_Integer) ll_backend__optimize__V_6_6;
#line 766 "optimize.m"
                MR_Integer ll_backend__optimize__V_106_106 = (MR_Integer) ll_backend__optimize__V_30_30;

#line 766 "optimize.m"
                {
#line 766 "optimize.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_54_54, ll_backend__optimize__V_105_105, ll_backend__optimize__V_106_106);
                }
#line 1669 "ll_backend.optimize.c"
                ll_backend__optimize__succeeded = (ll_backend__optimize__V_54_54 == (MR_Integer) 0);
#line 766 "optimize.m"
                ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 766 "optimize.m"
                if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                  *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_54_54;
#line 766 "optimize.m"
                else
#line 766 "optimize.m"
                  {
#line 766 "optimize.m"
                    MR_Word ll_backend__optimize__V_55_55;
#line 766 "optimize.m"
                    MR_Integer ll_backend__optimize__V_107_107 = (MR_Integer) ll_backend__optimize__V_7_7;
#line 766 "optimize.m"
                    MR_Integer ll_backend__optimize__V_108_108 = (MR_Integer) ll_backend__optimize__V_31_31;

#line 766 "optimize.m"
                    {
#line 766 "optimize.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_55_55, ll_backend__optimize__V_107_107, ll_backend__optimize__V_108_108);
                    }
#line 1693 "ll_backend.optimize.c"
                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_55_55 == (MR_Integer) 0);
#line 766 "optimize.m"
                    ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 766 "optimize.m"
                    if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                      *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_55_55;
#line 766 "optimize.m"
                    else
#line 766 "optimize.m"
                      {
#line 766 "optimize.m"
                        MR_Word ll_backend__optimize__V_56_56;

#line 766 "optimize.m"
                        {
#line 766 "optimize.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_56_56, ll_backend__optimize__V_8_8, ll_backend__optimize__V_32_32);
                        }
#line 1713 "ll_backend.optimize.c"
                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_56_56 == (MR_Integer) 0);
#line 766 "optimize.m"
                        ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 766 "optimize.m"
                        if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                          *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_56_56;
#line 766 "optimize.m"
                        else
#line 766 "optimize.m"
                          {
#line 766 "optimize.m"
                            MR_Word ll_backend__optimize__V_57_57;
#line 766 "optimize.m"
                            MR_Integer ll_backend__optimize__V_109_109 = (MR_Integer) ll_backend__optimize__V_9_9;
#line 766 "optimize.m"
                            MR_Integer ll_backend__optimize__V_110_110 = (MR_Integer) ll_backend__optimize__V_33_33;

#line 766 "optimize.m"
                            {
#line 766 "optimize.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_57_57, ll_backend__optimize__V_109_109, ll_backend__optimize__V_110_110);
                            }
#line 1737 "ll_backend.optimize.c"
                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_57_57 == (MR_Integer) 0);
#line 766 "optimize.m"
                            ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 766 "optimize.m"
                            if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                              *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_57_57;
#line 766 "optimize.m"
                            else
#line 766 "optimize.m"
                              {
#line 766 "optimize.m"
                                MR_Word ll_backend__optimize__V_58_58;
#line 766 "optimize.m"
                                MR_Integer ll_backend__optimize__V_111_111 = (MR_Integer) ll_backend__optimize__V_10_10;
#line 766 "optimize.m"
                                MR_Integer ll_backend__optimize__V_112_112 = (MR_Integer) ll_backend__optimize__V_34_34;

#line 766 "optimize.m"
                                {
#line 766 "optimize.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_58_58, ll_backend__optimize__V_111_111, ll_backend__optimize__V_112_112);
                                }
#line 1761 "ll_backend.optimize.c"
                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_58_58 == (MR_Integer) 0);
#line 766 "optimize.m"
                                ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 766 "optimize.m"
                                if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                  *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_58_58;
#line 766 "optimize.m"
                                else
#line 766 "optimize.m"
                                  {
#line 766 "optimize.m"
                                    MR_Word ll_backend__optimize__V_59_59;
#line 766 "optimize.m"
                                    MR_Integer ll_backend__optimize__V_113_113 = (MR_Integer) ll_backend__optimize__V_11_11;
#line 766 "optimize.m"
                                    MR_Integer ll_backend__optimize__V_114_114 = (MR_Integer) ll_backend__optimize__V_35_35;

#line 766 "optimize.m"
                                    {
#line 766 "optimize.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_59_59, ll_backend__optimize__V_113_113, ll_backend__optimize__V_114_114);
                                    }
#line 1785 "ll_backend.optimize.c"
                                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_59_59 == (MR_Integer) 0);
#line 766 "optimize.m"
                                    ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 766 "optimize.m"
                                    if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                      *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_59_59;
#line 766 "optimize.m"
                                    else
#line 766 "optimize.m"
                                      {
#line 766 "optimize.m"
                                        MR_Word ll_backend__optimize__V_60_60;
#line 766 "optimize.m"
                                        MR_Integer ll_backend__optimize__V_115_115 = (MR_Integer) ll_backend__optimize__V_12_12;
#line 766 "optimize.m"
                                        MR_Integer ll_backend__optimize__V_116_116 = (MR_Integer) ll_backend__optimize__V_36_36;

#line 766 "optimize.m"
                                        {
#line 766 "optimize.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_60_60, ll_backend__optimize__V_115_115, ll_backend__optimize__V_116_116);
                                        }
#line 1809 "ll_backend.optimize.c"
                                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_60_60 == (MR_Integer) 0);
#line 766 "optimize.m"
                                        ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 766 "optimize.m"
                                        if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                          *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_60_60;
#line 766 "optimize.m"
                                        else
#line 766 "optimize.m"
                                          {
#line 766 "optimize.m"
                                            MR_Word ll_backend__optimize__V_61_61;
#line 766 "optimize.m"
                                            MR_Integer ll_backend__optimize__V_117_117 = (MR_Integer) ll_backend__optimize__V_13_13;
#line 766 "optimize.m"
                                            MR_Integer ll_backend__optimize__V_118_118 = (MR_Integer) ll_backend__optimize__V_37_37;

#line 766 "optimize.m"
                                            {
#line 766 "optimize.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_61_61, ll_backend__optimize__V_117_117, ll_backend__optimize__V_118_118);
                                            }
#line 1833 "ll_backend.optimize.c"
                                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_61_61 == (MR_Integer) 0);
#line 766 "optimize.m"
                                            ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 766 "optimize.m"
                                            if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                              *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_61_61;
#line 766 "optimize.m"
                                            else
#line 766 "optimize.m"
                                              {
#line 766 "optimize.m"
                                                MR_Word ll_backend__optimize__V_62_62;
#line 766 "optimize.m"
                                                MR_Integer ll_backend__optimize__V_119_119 = (MR_Integer) ll_backend__optimize__V_14_14;
#line 766 "optimize.m"
                                                MR_Integer ll_backend__optimize__V_120_120 = (MR_Integer) ll_backend__optimize__V_38_38;

#line 766 "optimize.m"
                                                {
#line 766 "optimize.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_62_62, ll_backend__optimize__V_119_119, ll_backend__optimize__V_120_120);
                                                }
#line 1857 "ll_backend.optimize.c"
                                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_62_62 == (MR_Integer) 0);
#line 766 "optimize.m"
                                                ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 766 "optimize.m"
                                                if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                  *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_62_62;
#line 766 "optimize.m"
                                                else
#line 766 "optimize.m"
                                                  {
#line 766 "optimize.m"
                                                    MR_Word ll_backend__optimize__V_63_63;
#line 766 "optimize.m"
                                                    MR_Integer ll_backend__optimize__V_121_121 = (MR_Integer) ll_backend__optimize__V_15_15;
#line 766 "optimize.m"
                                                    MR_Integer ll_backend__optimize__V_122_122 = (MR_Integer) ll_backend__optimize__V_39_39;

#line 766 "optimize.m"
                                                    {
#line 766 "optimize.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_63_63, ll_backend__optimize__V_121_121, ll_backend__optimize__V_122_122);
                                                    }
#line 1881 "ll_backend.optimize.c"
                                                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_63_63 == (MR_Integer) 0);
#line 766 "optimize.m"
                                                    ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 766 "optimize.m"
                                                    if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                      *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_63_63;
#line 766 "optimize.m"
                                                    else
#line 766 "optimize.m"
                                                      {
#line 766 "optimize.m"
                                                        MR_Word ll_backend__optimize__V_64_64;
#line 766 "optimize.m"
                                                        MR_Integer ll_backend__optimize__V_123_123 = (MR_Integer) ll_backend__optimize__V_16_16;
#line 766 "optimize.m"
                                                        MR_Integer ll_backend__optimize__V_124_124 = (MR_Integer) ll_backend__optimize__V_40_40;

#line 766 "optimize.m"
                                                        {
#line 766 "optimize.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_64_64, ll_backend__optimize__V_123_123, ll_backend__optimize__V_124_124);
                                                        }
#line 1905 "ll_backend.optimize.c"
                                                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_64_64 == (MR_Integer) 0);
#line 766 "optimize.m"
                                                        ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 766 "optimize.m"
                                                        if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                          *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_64_64;
#line 766 "optimize.m"
                                                        else
#line 766 "optimize.m"
                                                          {
#line 766 "optimize.m"
                                                            MR_Word ll_backend__optimize__V_65_65;
#line 766 "optimize.m"
                                                            MR_Integer ll_backend__optimize__V_125_125 = (MR_Integer) ll_backend__optimize__V_17_17;
#line 766 "optimize.m"
                                                            MR_Integer ll_backend__optimize__V_126_126 = (MR_Integer) ll_backend__optimize__V_41_41;

#line 766 "optimize.m"
                                                            {
#line 766 "optimize.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_65_65, ll_backend__optimize__V_125_125, ll_backend__optimize__V_126_126);
                                                            }
#line 1929 "ll_backend.optimize.c"
                                                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_65_65 == (MR_Integer) 0);
#line 766 "optimize.m"
                                                            ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 766 "optimize.m"
                                                            if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                              *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_65_65;
#line 766 "optimize.m"
                                                            else
#line 766 "optimize.m"
                                                              {
#line 766 "optimize.m"
                                                                MR_Word ll_backend__optimize__V_66_66;
#line 766 "optimize.m"
                                                                MR_Integer ll_backend__optimize__V_127_127 = (MR_Integer) ll_backend__optimize__V_18_18;
#line 766 "optimize.m"
                                                                MR_Integer ll_backend__optimize__V_128_128 = (MR_Integer) ll_backend__optimize__V_42_42;

#line 766 "optimize.m"
                                                                {
#line 766 "optimize.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_66_66, ll_backend__optimize__V_127_127, ll_backend__optimize__V_128_128);
                                                                }
#line 1953 "ll_backend.optimize.c"
                                                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_66_66 == (MR_Integer) 0);
#line 766 "optimize.m"
                                                                ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 766 "optimize.m"
                                                                if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                                  *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_66_66;
#line 766 "optimize.m"
                                                                else
#line 766 "optimize.m"
                                                                  {
#line 766 "optimize.m"
                                                                    MR_Word ll_backend__optimize__V_67_67;
#line 766 "optimize.m"
                                                                    MR_Integer ll_backend__optimize__V_129_129 = (MR_Integer) ll_backend__optimize__V_19_19;
#line 766 "optimize.m"
                                                                    MR_Integer ll_backend__optimize__V_130_130 = (MR_Integer) ll_backend__optimize__V_43_43;

#line 766 "optimize.m"
                                                                    {
#line 766 "optimize.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_67_67, ll_backend__optimize__V_129_129, ll_backend__optimize__V_130_130);
                                                                    }
#line 1977 "ll_backend.optimize.c"
                                                                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_67_67 == (MR_Integer) 0);
#line 766 "optimize.m"
                                                                    ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 766 "optimize.m"
                                                                    if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                                      *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_67_67;
#line 766 "optimize.m"
                                                                    else
#line 766 "optimize.m"
                                                                      {
#line 766 "optimize.m"
                                                                        MR_Word ll_backend__optimize__V_68_68;
#line 766 "optimize.m"
                                                                        MR_Integer ll_backend__optimize__V_131_131 = (MR_Integer) ll_backend__optimize__V_20_20;
#line 766 "optimize.m"
                                                                        MR_Integer ll_backend__optimize__V_132_132 = (MR_Integer) ll_backend__optimize__V_44_44;

#line 766 "optimize.m"
                                                                        {
#line 766 "optimize.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_68_68, ll_backend__optimize__V_131_131, ll_backend__optimize__V_132_132);
                                                                        }
#line 2001 "ll_backend.optimize.c"
                                                                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_68_68 == (MR_Integer) 0);
#line 766 "optimize.m"
                                                                        ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 766 "optimize.m"
                                                                        if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                                          *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_68_68;
#line 766 "optimize.m"
                                                                        else
#line 766 "optimize.m"
                                                                          {
#line 766 "optimize.m"
                                                                            MR_Word ll_backend__optimize__V_69_69;
#line 766 "optimize.m"
                                                                            MR_Integer ll_backend__optimize__V_133_133 = (MR_Integer) ll_backend__optimize__V_21_21;
#line 766 "optimize.m"
                                                                            MR_Integer ll_backend__optimize__V_134_134 = (MR_Integer) ll_backend__optimize__V_45_45;

#line 766 "optimize.m"
                                                                            {
#line 766 "optimize.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_69_69, ll_backend__optimize__V_133_133, ll_backend__optimize__V_134_134);
                                                                            }
#line 2025 "ll_backend.optimize.c"
                                                                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_69_69 == (MR_Integer) 0);
#line 766 "optimize.m"
                                                                            ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 766 "optimize.m"
                                                                            if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                                              *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_69_69;
#line 766 "optimize.m"
                                                                            else
#line 766 "optimize.m"
                                                                              {
#line 766 "optimize.m"
                                                                                MR_Word ll_backend__optimize__V_70_70;
#line 766 "optimize.m"
                                                                                MR_Integer ll_backend__optimize__V_135_135 = (MR_Integer) ll_backend__optimize__V_22_22;
#line 766 "optimize.m"
                                                                                MR_Integer ll_backend__optimize__V_136_136 = (MR_Integer) ll_backend__optimize__V_46_46;

#line 766 "optimize.m"
                                                                                {
#line 766 "optimize.m"
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_70_70, ll_backend__optimize__V_135_135, ll_backend__optimize__V_136_136);
                                                                                }
#line 2049 "ll_backend.optimize.c"
                                                                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_70_70 == (MR_Integer) 0);
#line 766 "optimize.m"
                                                                                ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 766 "optimize.m"
                                                                                if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                                                  *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_70_70;
#line 766 "optimize.m"
                                                                                else
#line 766 "optimize.m"
                                                                                  {
#line 766 "optimize.m"
                                                                                    MR_Word ll_backend__optimize__V_71_71;

#line 766 "optimize.m"
                                                                                    {
#line 766 "optimize.m"
                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_71_71, ll_backend__optimize__V_23_23, ll_backend__optimize__V_47_47);
                                                                                    }
#line 2069 "ll_backend.optimize.c"
                                                                                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_71_71 == (MR_Integer) 0);
#line 766 "optimize.m"
                                                                                    ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 766 "optimize.m"
                                                                                    if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                                                      *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_71_71;
#line 766 "optimize.m"
                                                                                    else
#line 766 "optimize.m"
                                                                                      {
#line 766 "optimize.m"
                                                                                        MR_Word ll_backend__optimize__V_72_72;

#line 766 "optimize.m"
                                                                                        {
#line 766 "optimize.m"
                                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_72_72, ll_backend__optimize__V_24_24, ll_backend__optimize__V_48_48);
                                                                                        }
#line 2089 "ll_backend.optimize.c"
                                                                                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_72_72 == (MR_Integer) 0);
#line 766 "optimize.m"
                                                                                        ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 766 "optimize.m"
                                                                                        if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                                                          *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_72_72;
#line 766 "optimize.m"
                                                                                        else
#line 766 "optimize.m"
                                                                                          {
#line 766 "optimize.m"
                                                                                            MR_Word ll_backend__optimize__V_73_73;
#line 766 "optimize.m"
                                                                                            MR_Integer ll_backend__optimize__V_137_137 = (MR_Integer) ll_backend__optimize__V_25_25;
#line 766 "optimize.m"
                                                                                            MR_Integer ll_backend__optimize__V_138_138 = (MR_Integer) ll_backend__optimize__V_49_49;

#line 766 "optimize.m"
                                                                                            {
#line 766 "optimize.m"
                                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_73_73, ll_backend__optimize__V_137_137, ll_backend__optimize__V_138_138);
                                                                                            }
#line 2113 "ll_backend.optimize.c"
                                                                                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_73_73 == (MR_Integer) 0);
#line 766 "optimize.m"
                                                                                            ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 766 "optimize.m"
                                                                                            if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                                                              *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_73_73;
#line 766 "optimize.m"
                                                                                            else
#line 766 "optimize.m"
                                                                                              {
#line 766 "optimize.m"
                                                                                                MR_Word ll_backend__optimize__V_74_74;

#line 766 "optimize.m"
                                                                                                {
#line 766 "optimize.m"
                                                                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__optimize_scalar_common_1[0], &ll_backend__optimize__V_74_74, ((MR_Box) (ll_backend__optimize__V_26_26)), ((MR_Box) (ll_backend__optimize__V_50_50)));
                                                                                                }
#line 2133 "ll_backend.optimize.c"
                                                                                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_74_74 == (MR_Integer) 0);
#line 766 "optimize.m"
                                                                                                ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 766 "optimize.m"
                                                                                                if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                                                                  *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_74_74;
#line 766 "optimize.m"
                                                                                                else
#line 766 "optimize.m"
                                                                                                  {
#line 766 "optimize.m"
                                                                                                    {
#line 766 "optimize.m"
                                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__optimize_scalar_common_1[0], ll_backend__optimize__HeadVar__1_1, ((MR_Box) (ll_backend__optimize__V_27_27)), ((MR_Box) (ll_backend__optimize__V_51_51)));
                                                                                                    }
#line 766 "optimize.m"
                                                                                                  }
#line 766 "optimize.m"
                                                                                              }
#line 766 "optimize.m"
                                                                                          }
#line 766 "optimize.m"
                                                                                      }
#line 766 "optimize.m"
                                                                                  }
#line 766 "optimize.m"
                                                                              }
#line 766 "optimize.m"
                                                                          }
#line 766 "optimize.m"
                                                                      }
#line 766 "optimize.m"
                                                                  }
#line 766 "optimize.m"
                                                              }
#line 766 "optimize.m"
                                                          }
#line 766 "optimize.m"
                                                      }
#line 766 "optimize.m"
                                                  }
#line 766 "optimize.m"
                                              }
#line 766 "optimize.m"
                                          }
#line 766 "optimize.m"
                                      }
#line 766 "optimize.m"
                                  }
#line 766 "optimize.m"
                              }
#line 766 "optimize.m"
                          }
#line 766 "optimize.m"
                      }
#line 766 "optimize.m"
                  }
#line 766 "optimize.m"
              }
#line 766 "optimize.m"
          }
#line 766 "optimize.m"
      }
#line 766 "optimize.m"
  }
#line 766 "optimize.m"
}

#line 766 "optimize.m"
static MR_bool MR_CALL 
ll_backend__optimize____Unify____llds_opt_info_0_0(
#line 766 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__1_1,
#line 766 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__2_2)
#line 766 "optimize.m"
{
#line 766 "optimize.m"
  {
#line 766 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 766 "optimize.m"
    MR_Integer ll_backend__optimize__CastX_51 = (MR_Integer) ll_backend__optimize__HeadVar__1_1;
#line 766 "optimize.m"
    MR_Integer ll_backend__optimize__CastY_52 = (MR_Integer) ll_backend__optimize__HeadVar__2_2;

#line 766 "optimize.m"
    ll_backend__optimize__succeeded = (ll_backend__optimize__CastX_51 == ll_backend__optimize__CastY_52);
#line 766 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
      ll_backend__optimize__succeeded = MR_TRUE;
#line 766 "optimize.m"
    else
#line 766 "optimize.m"
      {
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__TypeInfo_53_53;
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__TypeInfo_54_54;
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Integer ll_backend__optimize__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 1)));
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Integer ll_backend__optimize__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 3)));
#line 766 "optimize.m"
        MR_Integer ll_backend__optimize__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 4)));
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 5)));
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 6)));
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 7)));
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Integer ll_backend__optimize__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 1)));
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 766 "optimize.m"
        MR_Integer ll_backend__optimize__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 3)));
#line 766 "optimize.m"
        MR_Integer ll_backend__optimize__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 4)));
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 5)));
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 6)));
#line 766 "optimize.m"
        MR_Word ll_backend__optimize__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 7)));

#line 2332 "ll_backend.optimize.c"
        ll_backend__optimize__succeeded = (ll_backend__optimize__V_3_3 == ll_backend__optimize__V_27_27);
#line 766 "optimize.m"
        if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
          {
#line 2338 "ll_backend.optimize.c"
            ll_backend__optimize__succeeded = (ll_backend__optimize__V_4_4 == ll_backend__optimize__V_28_28);
#line 766 "optimize.m"
            if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
              {
#line 2344 "ll_backend.optimize.c"
                ll_backend__optimize__succeeded = (ll_backend__optimize__V_5_5 == ll_backend__optimize__V_29_29);
#line 766 "optimize.m"
                if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                  {
#line 2350 "ll_backend.optimize.c"
                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_6_6 == ll_backend__optimize__V_30_30);
#line 766 "optimize.m"
                    if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                      {
#line 2356 "ll_backend.optimize.c"
                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_7_7 == ll_backend__optimize__V_31_31);
#line 766 "optimize.m"
                        if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                          {
#line 2362 "ll_backend.optimize.c"
                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_8_8 == ll_backend__optimize__V_32_32);
#line 766 "optimize.m"
                            if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                              {
#line 2368 "ll_backend.optimize.c"
                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_9_9 == ll_backend__optimize__V_33_33);
#line 766 "optimize.m"
                                if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                  {
#line 2374 "ll_backend.optimize.c"
                                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_10_10 == ll_backend__optimize__V_34_34);
#line 766 "optimize.m"
                                    if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                      {
#line 2380 "ll_backend.optimize.c"
                                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_11_11 == ll_backend__optimize__V_35_35);
#line 766 "optimize.m"
                                        if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                          {
#line 2386 "ll_backend.optimize.c"
                                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_12_12 == ll_backend__optimize__V_36_36);
#line 766 "optimize.m"
                                            if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                              {
#line 2392 "ll_backend.optimize.c"
                                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_13_13 == ll_backend__optimize__V_37_37);
#line 766 "optimize.m"
                                                if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                  {
#line 2398 "ll_backend.optimize.c"
                                                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_14_14 == ll_backend__optimize__V_38_38);
#line 766 "optimize.m"
                                                    if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                      {
#line 2404 "ll_backend.optimize.c"
                                                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_15_15 == ll_backend__optimize__V_39_39);
#line 766 "optimize.m"
                                                        if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                          {
#line 2410 "ll_backend.optimize.c"
                                                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_16_16 == ll_backend__optimize__V_40_40);
#line 766 "optimize.m"
                                                            if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                              {
#line 2416 "ll_backend.optimize.c"
                                                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_17_17 == ll_backend__optimize__V_41_41);
#line 766 "optimize.m"
                                                                if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                                  {
#line 2422 "ll_backend.optimize.c"
                                                                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_18_18 == ll_backend__optimize__V_42_42);
#line 766 "optimize.m"
                                                                    if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                                      {
#line 2428 "ll_backend.optimize.c"
                                                                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_19_19 == ll_backend__optimize__V_43_43);
#line 766 "optimize.m"
                                                                        if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                                          {
#line 2434 "ll_backend.optimize.c"
                                                                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_20_20 == ll_backend__optimize__V_44_44);
#line 766 "optimize.m"
                                                                            if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                                              {
#line 2440 "ll_backend.optimize.c"
                                                                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_21_21 == ll_backend__optimize__V_45_45);
#line 766 "optimize.m"
                                                                                if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                                                  {
#line 2446 "ll_backend.optimize.c"
                                                                                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_22_22 == ll_backend__optimize__V_46_46);
#line 766 "optimize.m"
                                                                                    if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                                                      {
#line 2452 "ll_backend.optimize.c"
                                                                                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_23_23 == ll_backend__optimize__V_47_47);
#line 766 "optimize.m"
                                                                                        if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                                                          {
#line 2458 "ll_backend.optimize.c"
                                                                                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_24_24 == ll_backend__optimize__V_48_48);
#line 766 "optimize.m"
                                                                                            if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                                                              {
#line 2464 "ll_backend.optimize.c"
                                                                                                ll_backend__optimize__TypeInfo_53_53 = (MR_Word) &ll_backend__optimize_scalar_common_1[0];
#line 2466 "ll_backend.optimize.c"
                                                                                                {
#line 2468 "ll_backend.optimize.c"
                                                                                                  ll_backend__optimize__succeeded = mercury__builtin__unify_2_p_0(ll_backend__optimize__TypeInfo_53_53, ((MR_Box) (ll_backend__optimize__V_25_25)), ((MR_Box) (ll_backend__optimize__V_49_49)));
                                                                                                }
#line 766 "optimize.m"
                                                                                                if (ll_backend__optimize__succeeded)
#line 766 "optimize.m"
                                                                                                  {
#line 2475 "ll_backend.optimize.c"
                                                                                                    ll_backend__optimize__TypeInfo_54_54 = (MR_Word) &ll_backend__optimize_scalar_common_1[0];
#line 2477 "ll_backend.optimize.c"
                                                                                                    {
#line 2479 "ll_backend.optimize.c"
                                                                                                      ll_backend__optimize__succeeded = mercury__builtin__unify_2_p_0(ll_backend__optimize__TypeInfo_54_54, ((MR_Box) (ll_backend__optimize__V_26_26)), ((MR_Box) (ll_backend__optimize__V_50_50)));
                                                                                                    }
#line 766 "optimize.m"
                                                                                                  }
#line 766 "optimize.m"
                                                                                              }
#line 766 "optimize.m"
                                                                                          }
#line 766 "optimize.m"
                                                                                      }
#line 766 "optimize.m"
                                                                                  }
#line 766 "optimize.m"
                                                                              }
#line 766 "optimize.m"
                                                                          }
#line 766 "optimize.m"
                                                                      }
#line 766 "optimize.m"
                                                                  }
#line 766 "optimize.m"
                                                              }
#line 766 "optimize.m"
                                                          }
#line 766 "optimize.m"
                                                      }
#line 766 "optimize.m"
                                                  }
#line 766 "optimize.m"
                                              }
#line 766 "optimize.m"
                                          }
#line 766 "optimize.m"
                                      }
#line 766 "optimize.m"
                                  }
#line 766 "optimize.m"
                              }
#line 766 "optimize.m"
                          }
#line 766 "optimize.m"
                      }
#line 766 "optimize.m"
                  }
#line 766 "optimize.m"
              }
#line 766 "optimize.m"
          }
#line 766 "optimize.m"
      }
#line 766 "optimize.m"
    return ll_backend__optimize__succeeded;
#line 766 "optimize.m"
  }
#line 766 "optimize.m"
}

#line 798 "optimize.m"
static MR_Word MR_CALL 
ll_backend__optimize__init_llds_opt_info_1_f_0(
#line 798 "optimize.m"
  MR_Word ll_backend__optimize__Globals_3)
#line 798 "optimize.m"
{
#line 800 "optimize.m"
  {
#line 800 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 800 "optimize.m"
    MR_Word ll_backend__optimize__Info_4;
#line 800 "optimize.m"
    MR_Word ll_backend__optimize__AutoComments_5;
#line 800 "optimize.m"
    MR_Word ll_backend__optimize__DetailedStatistics_6;
#line 800 "optimize.m"
    MR_Word ll_backend__optimize__VeryVerbose_7;
#line 800 "optimize.m"
    MR_Word ll_backend__optimize__CheckedNondetTailCalls_8;
#line 800 "optimize.m"
    MR_Integer ll_backend__optimize__NumRealRRegs_9;
#line 800 "optimize.m"
    MR_Word ll_backend__optimize__GCMethod_10;
#line 800 "optimize.m"
    MR_Word ll_backend__optimize__OptDelaySlots_11;
#line 800 "optimize.m"
    MR_Word ll_backend__optimize__OptDups_12;
#line 800 "optimize.m"
    MR_Word ll_backend__optimize__OptFrames_13;
#line 800 "optimize.m"
    MR_Word ll_backend__optimize__FrameOptComments_14;
#line 800 "optimize.m"
    MR_Word ll_backend__optimize__OptJumps_15;
#line 800 "optimize.m"
    MR_Word ll_backend__optimize__OptFullJumps_16;
#line 800 "optimize.m"
    MR_Word ll_backend__optimize__OptLabels_17;
#line 800 "optimize.m"
    MR_Word ll_backend__optimize__OptPeep_18;
#line 800 "optimize.m"
    MR_Word ll_backend__optimize__OptPeepMkword_19;
#line 800 "optimize.m"
    MR_Word ll_backend__optimize__OptReassign_20;
#line 800 "optimize.m"
    MR_Word ll_backend__optimize__PessimizeTailCalls_21;
#line 800 "optimize.m"
    MR_Word ll_backend__optimize__StdLabels_22;
#line 800 "optimize.m"
    MR_Word ll_backend__optimize__UseLocalVars_23;
#line 800 "optimize.m"
    MR_Integer ll_backend__optimize__LocalVarAccessThreshold_24;
#line 800 "optimize.m"
    MR_Integer ll_backend__optimize__OptRepeat_25;
#line 800 "optimize.m"
    MR_Word ll_backend__optimize__DebugOpt_26;
#line 800 "optimize.m"
    MR_Word ll_backend__optimize__DebugOptPredIdStrs_27;
#line 800 "optimize.m"
    MR_Word ll_backend__optimize__DebugOptPredNames_28;

#line 801 "optimize.m"
    {
#line 801 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 140, &ll_backend__optimize__AutoComments_5);
    }
#line 802 "optimize.m"
    {
#line 802 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 57, &ll_backend__optimize__DetailedStatistics_6);
    }
#line 804 "optimize.m"
    {
#line 804 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 47, &ll_backend__optimize__VeryVerbose_7);
    }
#line 806 "optimize.m"
    {
#line 806 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 462, &ll_backend__optimize__CheckedNondetTailCalls_8);
    }
#line 808 "optimize.m"
    {
#line 808 "optimize.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 304, &ll_backend__optimize__NumRealRRegs_9);
    }
#line 809 "optimize.m"
    {
#line 809 "optimize.m"
      libs__globals__get_gc_method_2_p_0(ll_backend__optimize__Globals_3, &ll_backend__optimize__GCMethod_10);
    }
#line 811 "optimize.m"
    {
#line 811 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 470, &ll_backend__optimize__OptDelaySlots_11);
    }
#line 812 "optimize.m"
    {
#line 812 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 467, &ll_backend__optimize__OptDups_12);
    }
#line 813 "optimize.m"
    {
#line 813 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 469, &ll_backend__optimize__OptFrames_13);
    }
#line 814 "optimize.m"
    {
#line 814 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 141, &ll_backend__optimize__FrameOptComments_14);
    }
#line 815 "optimize.m"
    {
#line 815 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 459, &ll_backend__optimize__OptJumps_15);
    }
#line 816 "optimize.m"
    {
#line 816 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 460, &ll_backend__optimize__OptFullJumps_16);
    }
#line 817 "optimize.m"
    {
#line 817 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 466, &ll_backend__optimize__OptLabels_17);
    }
#line 818 "optimize.m"
    {
#line 818 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 457, &ll_backend__optimize__OptPeep_18);
    }
#line 819 "optimize.m"
    {
#line 819 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 458, &ll_backend__optimize__OptPeepMkword_19);
    }
#line 820 "optimize.m"
    {
#line 820 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 471, &ll_backend__optimize__OptReassign_20);
    }
#line 821 "optimize.m"
    {
#line 821 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 461, &ll_backend__optimize__PessimizeTailCalls_21);
    }
#line 823 "optimize.m"
    {
#line 823 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 465, &ll_backend__optimize__StdLabels_22);
    }
#line 824 "optimize.m"
    {
#line 824 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 463, &ll_backend__optimize__UseLocalVars_23);
    }
#line 825 "optimize.m"
    {
#line 825 "optimize.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 464, &ll_backend__optimize__LocalVarAccessThreshold_24);
    }
#line 827 "optimize.m"
    {
#line 827 "optimize.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 472, &ll_backend__optimize__OptRepeat_25);
    }
#line 829 "optimize.m"
    {
#line 829 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 69, &ll_backend__optimize__DebugOpt_26);
    }
#line 830 "optimize.m"
    {
#line 830 "optimize.m"
      libs__globals__lookup_accumulating_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 71, &ll_backend__optimize__DebugOptPredIdStrs_27);
    }
#line 832 "optimize.m"
    {
#line 832 "optimize.m"
      libs__globals__lookup_accumulating_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 72, &ll_backend__optimize__DebugOptPredNames_28);
    }
#line 835 "optimize.m"
    {
#line 835 "optimize.m"
      ll_backend__optimize__Info_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 835 "optimize.m"
      MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_4, 0) = ((MR_Box) ((ll_backend__optimize__AutoComments_5 | ((((ll_backend__optimize__DetailedStatistics_6 << (MR_Integer) 1)) | ((((ll_backend__optimize__VeryVerbose_7 << (MR_Integer) 2)) | ((ll_backend__optimize__CheckedNondetTailCalls_8 << (MR_Integer) 3)))))))));
#line 835 "optimize.m"
      MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_4, 1) = ((MR_Box) (ll_backend__optimize__NumRealRRegs_9));
#line 835 "optimize.m"
      MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_4, 2) = ((MR_Box) ((ll_backend__optimize__GCMethod_10 | ((((ll_backend__optimize__OptDelaySlots_11 << (MR_Integer) 3)) | ((((ll_backend__optimize__OptDups_12 << (MR_Integer) 4)) | ((((ll_backend__optimize__OptFrames_13 << (MR_Integer) 5)) | ((((ll_backend__optimize__FrameOptComments_14 << (MR_Integer) 6)) | ((((ll_backend__optimize__OptJumps_15 << (MR_Integer) 7)) | ((((ll_backend__optimize__OptFullJumps_16 << (MR_Integer) 8)) | ((((ll_backend__optimize__OptLabels_17 << (MR_Integer) 9)) | ((((ll_backend__optimize__OptPeep_18 << (MR_Integer) 10)) | ((((ll_backend__optimize__OptPeepMkword_19 << (MR_Integer) 11)) | ((((ll_backend__optimize__OptReassign_20 << (MR_Integer) 12)) | ((((ll_backend__optimize__PessimizeTailCalls_21 << (MR_Integer) 13)) | ((((ll_backend__optimize__StdLabels_22 << (MR_Integer) 14)) | ((ll_backend__optimize__UseLocalVars_23 << (MR_Integer) 15)))))))))))))))))))))))))))));
#line 835 "optimize.m"
      MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_4, 3) = ((MR_Box) (ll_backend__optimize__LocalVarAccessThreshold_24));
#line 835 "optimize.m"
      MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_4, 4) = ((MR_Box) (ll_backend__optimize__OptRepeat_25));
#line 835 "optimize.m"
      MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_4, 5) = ((MR_Box) (ll_backend__optimize__DebugOpt_26));
#line 835 "optimize.m"
      MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_4, 6) = ((MR_Box) (ll_backend__optimize__DebugOptPredIdStrs_27));
#line 835 "optimize.m"
      MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_4, 7) = ((MR_Box) (ll_backend__optimize__DebugOptPredNames_28));
#line 835 "optimize.m"
    }
#line 800 "optimize.m"
    return ll_backend__optimize__Info_4;
#line 800 "optimize.m"
  }
#line 798 "optimize.m"
}

#line 755 "optimize.m"
static void MR_CALL 
ll_backend__optimize__escape_dir_char_3_p_0(
#line 755 "optimize.m"
  MR_Char ll_backend__optimize__Char_4,
#line 755 "optimize.m"
  MR_String ll_backend__optimize__STATE_VARIABLE_Str_0_6,
#line 755 "optimize.m"
  MR_String * ll_backend__optimize__STATE_VARIABLE_Str_7)
#line 755 "optimize.m"
{
#line 758 "optimize.m"
  {
#line 758 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;

#line 758 "optimize.m"
    {
#line 758 "optimize.m"
      ll_backend__optimize__succeeded = mercury__dir__is_directory_separator_1_p_0(ll_backend__optimize__Char_4);
    }
#line 758 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 759 "optimize.m"
      {
#line 759 "optimize.m"
        {
#line 759 "optimize.m"
          *ll_backend__optimize__STATE_VARIABLE_Str_7 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__STATE_VARIABLE_Str_0_6, (MR_String) "_slash_");
        }
#line 759 "optimize.m"
      }
#line 758 "optimize.m"
    else
#line 761 "optimize.m"
      {
#line 761 "optimize.m"
        MR_String ll_backend__optimize__V_11_11;

#line 761 "optimize.m"
        {
#line 761 "optimize.m"
          ll_backend__optimize__V_11_11 = mercury__string__char_to_string_1_f_0(ll_backend__optimize__Char_4);
        }
#line 761 "optimize.m"
        {
#line 761 "optimize.m"
          *ll_backend__optimize__STATE_VARIABLE_Str_7 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__STATE_VARIABLE_Str_0_6, ll_backend__optimize__V_11_11);
        }
#line 761 "optimize.m"
      }
#line 758 "optimize.m"
  }
#line 755 "optimize.m"
}

#line 753 "optimize.m"
static void MR_CALL 
ll_backend__optimize__mangle_name_as_filename_1_f_0_1(
#line 753 "optimize.m"
  MR_Box ll_backend__optimize__closure_arg,
#line 753 "optimize.m"
  MR_Box ll_backend__optimize__wrapper_arg_1,
#line 753 "optimize.m"
  MR_Box ll_backend__optimize__wrapper_arg_2,
#line 753 "optimize.m"
  MR_Box * ll_backend__optimize__wrapper_arg_3)
#line 753 "optimize.m"
{
#line 753 "optimize.m"
  {
#line 753 "optimize.m"
    MR_Box ll_backend__optimize__closure = ll_backend__optimize__closure_arg;
#line 753 "optimize.m"
    MR_String ll_backend__optimize__conv0_STATE_VARIABLE_Str_7;

#line 753 "optimize.m"
    {
#line 753 "optimize.m"
      ll_backend__optimize__escape_dir_char_3_p_0(((MR_Char) (MR_Word) ll_backend__optimize__wrapper_arg_1), ((MR_String) ll_backend__optimize__wrapper_arg_2), &ll_backend__optimize__conv0_STATE_VARIABLE_Str_7);
    }
#line 753 "optimize.m"
    *ll_backend__optimize__wrapper_arg_3 = ((MR_Box) (ll_backend__optimize__conv0_STATE_VARIABLE_Str_7));
#line 753 "optimize.m"
  }
#line 753 "optimize.m"
}

#line 750 "optimize.m"
static MR_String MR_CALL 
ll_backend__optimize__mangle_name_as_filename_1_f_0(
#line 750 "optimize.m"
  MR_String ll_backend__optimize__Str0_3)
#line 750 "optimize.m"
{
#line 752 "optimize.m"
  {
#line 752 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 752 "optimize.m"
    MR_String ll_backend__optimize__Str_4;
#line 753 "optimize.m"
    MR_Box ll_backend__optimize__conv1_Str_4;

#line 753 "optimize.m"
    {
#line 753 "optimize.m"
      mercury__string__foldl_4_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__optimize_scalar_common_3[0], ll_backend__optimize__Str0_3, ((MR_Box) ((MR_String) "")), &ll_backend__optimize__conv1_Str_4);
    }
#line 753 "optimize.m"
    ll_backend__optimize__Str_4 = ((MR_String) ll_backend__optimize__conv1_Str_4);
#line 752 "optimize.m"
    return ll_backend__optimize__Str_4;
#line 752 "optimize.m"
  }
#line 750 "optimize.m"
}

#line 621 "optimize.m"
static void MR_CALL 
ll_backend__optimize__optimize_last_8_p_0(
#line 621 "optimize.m"
  MR_Word ll_backend__optimize__Info_9,
#line 621 "optimize.m"
  MR_Word ll_backend__optimize__LayoutLabelSet_10,
#line 621 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_11,
#line 621 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_24,
#line 621 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_25,
#line 621 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_26,
#line 621 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_27,
#line 621 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_28)
#line 621 "optimize.m"
{
#line 626 "optimize.m"
  {
#line 626 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 626 "optimize.m"
    MR_Word ll_backend__optimize__VeryVerbose_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 626 "optimize.m"
    MR_String ll_backend__optimize__LabelStr_16;
#line 626 "optimize.m"
    MR_Word ll_backend__optimize__Reassign_17;
#line 626 "optimize.m"
    MR_Word ll_backend__optimize__DelaySlot_18;
#line 626 "optimize.m"
    MR_Word ll_backend__optimize__UseLocalVars_19;
#line 626 "optimize.m"
    MR_Word ll_backend__optimize__StdLabels_20;
#line 626 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_36_36;
#line 626 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_39_39;
#line 626 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_46_46;
#line 626 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_49_49;
#line 626 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_56_56;
#line 626 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_59_59;
#line 626 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_66_66;
#line 626 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_69_69;
#line 626 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_76_76;
#line 626 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_80_80;
#line 627 "optimize.m"
    MR_Word ll_backend__optimize__V_90_90 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 627 "optimize.m"
    MR_Word ll_backend__optimize__V_91_91 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 627 "optimize.m"
    MR_Word ll_backend__optimize__V_92_92 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 627 "optimize.m"
    MR_Integer ll_backend__optimize__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 1)));
#line 627 "optimize.m"
    MR_Word ll_backend__optimize__V_94_94 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 627 "optimize.m"
    MR_Word ll_backend__optimize__V_95_95 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 627 "optimize.m"
    MR_Word ll_backend__optimize__V_96_96 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 627 "optimize.m"
    MR_Word ll_backend__optimize__V_97_97 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 627 "optimize.m"
    MR_Word ll_backend__optimize__V_98_98 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 627 "optimize.m"
    MR_Word ll_backend__optimize__V_99_99 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 627 "optimize.m"
    MR_Word ll_backend__optimize__V_100_100 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 627 "optimize.m"
    MR_Word ll_backend__optimize__V_101_101 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 627 "optimize.m"
    MR_Word ll_backend__optimize__V_102_102 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 627 "optimize.m"
    MR_Word ll_backend__optimize__V_103_103 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 627 "optimize.m"
    MR_Word ll_backend__optimize__V_104_104 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 627 "optimize.m"
    MR_Word ll_backend__optimize__V_105_105 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 627 "optimize.m"
    MR_Word ll_backend__optimize__V_106_106 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 627 "optimize.m"
    MR_Word ll_backend__optimize__V_107_107 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 627 "optimize.m"
    MR_Integer ll_backend__optimize__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 3)));
#line 627 "optimize.m"
    MR_Integer ll_backend__optimize__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 4)));
#line 627 "optimize.m"
    MR_Word ll_backend__optimize__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 5)));
#line 627 "optimize.m"
    MR_Word ll_backend__optimize__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 6)));
#line 627 "optimize.m"
    MR_Word ll_backend__optimize__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 7)));
#line 630 "optimize.m"
    MR_Word ll_backend__optimize__V_113_113;
#line 630 "optimize.m"
    MR_Word ll_backend__optimize__V_114_114;
#line 630 "optimize.m"
    MR_Word ll_backend__optimize__V_115_115;
#line 630 "optimize.m"
    MR_Word ll_backend__optimize__V_116_116;
#line 630 "optimize.m"
    MR_Integer ll_backend__optimize__V_117_117;
#line 630 "optimize.m"
    MR_Word ll_backend__optimize__V_118_118;
#line 630 "optimize.m"
    MR_Word ll_backend__optimize__V_120_120;
#line 630 "optimize.m"
    MR_Word ll_backend__optimize__V_121_121;
#line 630 "optimize.m"
    MR_Word ll_backend__optimize__V_122_122;
#line 630 "optimize.m"
    MR_Word ll_backend__optimize__V_123_123;
#line 630 "optimize.m"
    MR_Word ll_backend__optimize__V_124_124;
#line 630 "optimize.m"
    MR_Word ll_backend__optimize__V_125_125;
#line 630 "optimize.m"
    MR_Word ll_backend__optimize__V_126_126;
#line 630 "optimize.m"
    MR_Word ll_backend__optimize__V_127_127;
#line 630 "optimize.m"
    MR_Word ll_backend__optimize__V_128_128;
#line 630 "optimize.m"
    MR_Integer ll_backend__optimize__V_131_131;
#line 630 "optimize.m"
    MR_Integer ll_backend__optimize__V_132_132;
#line 630 "optimize.m"
    MR_Word ll_backend__optimize__V_133_133;
#line 630 "optimize.m"
    MR_Word ll_backend__optimize__V_134_134;
#line 630 "optimize.m"
    MR_Word ll_backend__optimize__V_135_135;

#line 628 "optimize.m"
    {
#line 628 "optimize.m"
      ll_backend__optimize__LabelStr_16 = ll_backend__opt_util__format_proc_label_1_f_0(ll_backend__optimize__ProcLabel_11);
    }
#line 630 "optimize.m"
    ll_backend__optimize__V_113_113 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 630 "optimize.m"
    ll_backend__optimize__V_114_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 630 "optimize.m"
    ll_backend__optimize__V_115_115 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 630 "optimize.m"
    ll_backend__optimize__V_116_116 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 630 "optimize.m"
    ll_backend__optimize__V_117_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 1)));
#line 630 "optimize.m"
    ll_backend__optimize__V_118_118 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 630 "optimize.m"
    ll_backend__optimize__DelaySlot_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 630 "optimize.m"
    ll_backend__optimize__V_120_120 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 630 "optimize.m"
    ll_backend__optimize__V_121_121 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 630 "optimize.m"
    ll_backend__optimize__V_122_122 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 630 "optimize.m"
    ll_backend__optimize__V_123_123 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 630 "optimize.m"
    ll_backend__optimize__V_124_124 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 630 "optimize.m"
    ll_backend__optimize__V_125_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 630 "optimize.m"
    ll_backend__optimize__V_126_126 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 630 "optimize.m"
    ll_backend__optimize__V_127_127 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 630 "optimize.m"
    ll_backend__optimize__Reassign_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 630 "optimize.m"
    ll_backend__optimize__V_128_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 630 "optimize.m"
    ll_backend__optimize__StdLabels_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 630 "optimize.m"
    ll_backend__optimize__UseLocalVars_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 630 "optimize.m"
    ll_backend__optimize__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 3)));
#line 630 "optimize.m"
    ll_backend__optimize__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 4)));
#line 630 "optimize.m"
    ll_backend__optimize__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 5)));
#line 630 "optimize.m"
    ll_backend__optimize__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 6)));
#line 630 "optimize.m"
    ll_backend__optimize__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 7)));
#line 635 "optimize.m"
    ll_backend__optimize__succeeded = (ll_backend__optimize__Reassign_17 == (MR_Integer) 1);
#line 636 "optimize.m"
    if (!(ll_backend__optimize__succeeded))
#line 636 "optimize.m"
      {
#line 636 "optimize.m"
        ll_backend__optimize__succeeded = (ll_backend__optimize__DelaySlot_18 == (MR_Integer) 1);
#line 636 "optimize.m"
        if (!(ll_backend__optimize__succeeded))
#line 636 "optimize.m"
          {
#line 637 "optimize.m"
            ll_backend__optimize__succeeded = (ll_backend__optimize__UseLocalVars_19 == (MR_Integer) 1);
#line 636 "optimize.m"
            if (!(ll_backend__optimize__succeeded))
#line 638 "optimize.m"
              ll_backend__optimize__succeeded = (ll_backend__optimize__StdLabels_20 == (MR_Integer) 1);
#line 636 "optimize.m"
          }
#line 636 "optimize.m"
      }
#line 634 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 652 "optimize.m"
      {
#line 653 "optimize.m"
        MR_Word ll_backend__optimize___Mod1_22;

#line 650 "optimize.m"
#line 650 "optimize.m"
        switch (ll_backend__optimize__VeryVerbose_15) {
#line 650 "optimize.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 650 "optimize.m"
          case (MR_Integer) 0:
#line 651 "optimize.m"
            {
#line 651 "optimize.m"
            }
#line 650 "optimize.m"
            break;
#line 650 "optimize.m"
          case (MR_Integer) 1:
#line 645 "optimize.m"
            {
#line 646 "optimize.m"
              {
#line 646 "optimize.m"
                mercury__io__write_string_3_p_0((MR_String) "% Optimizing labels for ");
              }
#line 647 "optimize.m"
              {
#line 647 "optimize.m"
                mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_16);
              }
#line 648 "optimize.m"
              {
#line 648 "optimize.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
#line 645 "optimize.m"
            }
#line 650 "optimize.m"
            break;
#line 650 "optimize.m"
        }
#line 653 "optimize.m"
        {
#line 653 "optimize.m"
          ll_backend__labelopt__labelopt_main_5_p_0((MR_Integer) 0, ll_backend__optimize__LayoutLabelSet_10, ll_backend__optimize__STATE_VARIABLE_Instrs_0_27, &ll_backend__optimize__STATE_VARIABLE_Instrs_36_36, &ll_backend__optimize___Mod1_22);
        }
#line 654 "optimize.m"
        {
#line 654 "optimize.m"
          ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__STATE_VARIABLE_Instrs_36_36, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_24, (MR_String) "label", (MR_String) "after label opt", ll_backend__optimize__ProcLabel_11, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_26, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_39_39);
        }
#line 652 "optimize.m"
      }
#line 634 "optimize.m"
    else
#line 657 "optimize.m"
      {
#line 657 "optimize.m"
        ll_backend__optimize__STATE_VARIABLE_Instrs_36_36 = ll_backend__optimize__STATE_VARIABLE_Instrs_0_27;
#line 657 "optimize.m"
        ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_39_39 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_26;
#line 657 "optimize.m"
      }
#line 674 "optimize.m"
#line 674 "optimize.m"
    switch (ll_backend__optimize__Reassign_17) {
#line 674 "optimize.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 674 "optimize.m"
      case (MR_Integer) 0:
#line 675 "optimize.m"
        {
#line 675 "optimize.m"
          ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_49_49 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_39_39;
#line 675 "optimize.m"
          ll_backend__optimize__STATE_VARIABLE_Instrs_46_46 = ll_backend__optimize__STATE_VARIABLE_Instrs_36_36;
#line 675 "optimize.m"
        }
#line 674 "optimize.m"
        break;
#line 674 "optimize.m"
      case (MR_Integer) 1:
#line 660 "optimize.m"
        {
#line 668 "optimize.m"
#line 668 "optimize.m"
          switch (ll_backend__optimize__VeryVerbose_15) {
#line 668 "optimize.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 668 "optimize.m"
            case (MR_Integer) 0:
#line 669 "optimize.m"
              {
#line 669 "optimize.m"
              }
#line 668 "optimize.m"
              break;
#line 668 "optimize.m"
            case (MR_Integer) 1:
#line 663 "optimize.m"
              {
#line 664 "optimize.m"
                {
#line 664 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "% Optimizing reassign for ");
                }
#line 665 "optimize.m"
                {
#line 665 "optimize.m"
                  mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_16);
                }
#line 666 "optimize.m"
                {
#line 666 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 663 "optimize.m"
              }
#line 668 "optimize.m"
              break;
#line 668 "optimize.m"
          }
#line 671 "optimize.m"
          {
#line 671 "optimize.m"
            ll_backend__reassign__remove_reassign_2_p_0(ll_backend__optimize__STATE_VARIABLE_Instrs_36_36, &ll_backend__optimize__STATE_VARIABLE_Instrs_46_46);
          }
#line 672 "optimize.m"
          {
#line 672 "optimize.m"
            ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__STATE_VARIABLE_Instrs_46_46, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_24, (MR_String) "reassign", (MR_String) "after reassign", ll_backend__optimize__ProcLabel_11, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_39_39, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_49_49);
          }
#line 660 "optimize.m"
        }
#line 674 "optimize.m"
        break;
#line 674 "optimize.m"
    }
#line 692 "optimize.m"
#line 692 "optimize.m"
    switch (ll_backend__optimize__DelaySlot_18) {
#line 692 "optimize.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 692 "optimize.m"
      case (MR_Integer) 0:
#line 693 "optimize.m"
        {
#line 693 "optimize.m"
          ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_59_59 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_49_49;
#line 693 "optimize.m"
          ll_backend__optimize__STATE_VARIABLE_Instrs_56_56 = ll_backend__optimize__STATE_VARIABLE_Instrs_46_46;
#line 693 "optimize.m"
        }
#line 692 "optimize.m"
        break;
#line 692 "optimize.m"
      case (MR_Integer) 1:
#line 678 "optimize.m"
        {
#line 686 "optimize.m"
#line 686 "optimize.m"
          switch (ll_backend__optimize__VeryVerbose_15) {
#line 686 "optimize.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 686 "optimize.m"
            case (MR_Integer) 0:
#line 687 "optimize.m"
              {
#line 687 "optimize.m"
              }
#line 686 "optimize.m"
              break;
#line 686 "optimize.m"
            case (MR_Integer) 1:
#line 681 "optimize.m"
              {
#line 682 "optimize.m"
                {
#line 682 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "% Optimizing delay slot for ");
                }
#line 683 "optimize.m"
                {
#line 683 "optimize.m"
                  mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_16);
                }
#line 684 "optimize.m"
                {
#line 684 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 681 "optimize.m"
              }
#line 686 "optimize.m"
              break;
#line 686 "optimize.m"
          }
#line 689 "optimize.m"
          {
#line 689 "optimize.m"
            ll_backend__delay_slot__fill_branch_delay_slot_2_p_0(ll_backend__optimize__STATE_VARIABLE_Instrs_46_46, &ll_backend__optimize__STATE_VARIABLE_Instrs_56_56);
          }
#line 690 "optimize.m"
          {
#line 690 "optimize.m"
            ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__STATE_VARIABLE_Instrs_56_56, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_24, (MR_String) "delay_slot", (MR_String) "after delay slots", ll_backend__optimize__ProcLabel_11, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_49_49, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_59_59);
          }
#line 678 "optimize.m"
        }
#line 692 "optimize.m"
        break;
#line 692 "optimize.m"
    }
#line 702 "optimize.m"
#line 702 "optimize.m"
    switch (ll_backend__optimize__VeryVerbose_15) {
#line 702 "optimize.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 702 "optimize.m"
      case (MR_Integer) 0:
#line 703 "optimize.m"
        {
#line 703 "optimize.m"
        }
#line 702 "optimize.m"
        break;
#line 702 "optimize.m"
      case (MR_Integer) 1:
#line 697 "optimize.m"
        {
#line 698 "optimize.m"
          {
#line 698 "optimize.m"
            mercury__io__write_string_3_p_0((MR_String) "% Optimizing returns for ");
          }
#line 699 "optimize.m"
          {
#line 699 "optimize.m"
            mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_16);
          }
#line 700 "optimize.m"
          {
#line 700 "optimize.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
#line 697 "optimize.m"
        }
#line 702 "optimize.m"
        break;
#line 702 "optimize.m"
    }
#line 705 "optimize.m"
    {
#line 705 "optimize.m"
      ll_backend__peephole__combine_decr_sp_2_p_0(ll_backend__optimize__STATE_VARIABLE_Instrs_56_56, &ll_backend__optimize__STATE_VARIABLE_Instrs_66_66);
    }
#line 706 "optimize.m"
    {
#line 706 "optimize.m"
      ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__STATE_VARIABLE_Instrs_66_66, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_24, (MR_String) "decr_sp", (MR_String) "after combine decr_sp", ll_backend__optimize__ProcLabel_11, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_59_59, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_69_69);
    }
#line 723 "optimize.m"
#line 723 "optimize.m"
    switch (ll_backend__optimize__StdLabels_20) {
#line 723 "optimize.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 723 "optimize.m"
      case (MR_Integer) 0:
#line 724 "optimize.m"
        {
#line 724 "optimize.m"
          *ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_25 = ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_24;
#line 724 "optimize.m"
          ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_80_80 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_69_69;
#line 724 "optimize.m"
          ll_backend__optimize__STATE_VARIABLE_Instrs_76_76 = ll_backend__optimize__STATE_VARIABLE_Instrs_66_66;
#line 724 "optimize.m"
        }
#line 723 "optimize.m"
        break;
#line 723 "optimize.m"
      case (MR_Integer) 1:
#line 709 "optimize.m"
        {
#line 717 "optimize.m"
#line 717 "optimize.m"
          switch (ll_backend__optimize__VeryVerbose_15) {
#line 717 "optimize.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 717 "optimize.m"
            case (MR_Integer) 0:
#line 718 "optimize.m"
              {
#line 718 "optimize.m"
              }
#line 717 "optimize.m"
              break;
#line 717 "optimize.m"
            case (MR_Integer) 1:
#line 712 "optimize.m"
              {
#line 713 "optimize.m"
                {
#line 713 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "% Standardizing labels for ");
                }
#line 714 "optimize.m"
                {
#line 714 "optimize.m"
                  mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_16);
                }
#line 715 "optimize.m"
                {
#line 715 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 712 "optimize.m"
              }
#line 717 "optimize.m"
              break;
#line 717 "optimize.m"
          }
#line 720 "optimize.m"
          {
#line 720 "optimize.m"
            ll_backend__stdlabel__standardize_labels_4_p_0(ll_backend__optimize__STATE_VARIABLE_Instrs_66_66, &ll_backend__optimize__STATE_VARIABLE_Instrs_76_76, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_24, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_25);
          }
#line 721 "optimize.m"
          {
#line 721 "optimize.m"
            ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__STATE_VARIABLE_Instrs_76_76, *ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_25, (MR_String) "stdlabel", (MR_String) "after standard labels", ll_backend__optimize__ProcLabel_11, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_69_69, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_80_80);
          }
#line 709 "optimize.m"
        }
#line 723 "optimize.m"
        break;
#line 723 "optimize.m"
    }
#line 741 "optimize.m"
#line 741 "optimize.m"
    switch (ll_backend__optimize__UseLocalVars_19) {
#line 741 "optimize.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 741 "optimize.m"
      case (MR_Integer) 0:
#line 742 "optimize.m"
        *ll_backend__optimize__STATE_VARIABLE_Instrs_28 = ll_backend__optimize__STATE_VARIABLE_Instrs_76_76;
#line 741 "optimize.m"
        break;
#line 741 "optimize.m"
      case (MR_Integer) 1:
#line 727 "optimize.m"
        {
#line 739 "optimize.m"
          MR_Word ll_backend__optimize__V_23_23;

#line 735 "optimize.m"
#line 735 "optimize.m"
          switch (ll_backend__optimize__VeryVerbose_15) {
#line 735 "optimize.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 735 "optimize.m"
            case (MR_Integer) 0:
#line 736 "optimize.m"
              {
#line 736 "optimize.m"
              }
#line 735 "optimize.m"
              break;
#line 735 "optimize.m"
            case (MR_Integer) 1:
#line 730 "optimize.m"
              {
#line 731 "optimize.m"
                {
#line 731 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "% Wrapping blocks for ");
                }
#line 732 "optimize.m"
                {
#line 732 "optimize.m"
                  mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_16);
                }
#line 733 "optimize.m"
                {
#line 733 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 730 "optimize.m"
              }
#line 735 "optimize.m"
              break;
#line 735 "optimize.m"
          }
#line 738 "optimize.m"
          {
#line 738 "optimize.m"
            ll_backend__wrap_blocks__wrap_blocks_2_p_0(ll_backend__optimize__STATE_VARIABLE_Instrs_76_76, ll_backend__optimize__STATE_VARIABLE_Instrs_28);
          }
#line 739 "optimize.m"
          {
#line 739 "optimize.m"
            ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_9, *ll_backend__optimize__STATE_VARIABLE_Instrs_28, *ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_25, (MR_String) "wrapblocks", (MR_String) "after wrap blocks", ll_backend__optimize__ProcLabel_11, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_80_80, &ll_backend__optimize__V_23_23);
          }
#line 727 "optimize.m"
        }
#line 741 "optimize.m"
        break;
#line 741 "optimize.m"
    }
#line 626 "optimize.m"
  }
#line 621 "optimize.m"
}

#line 488 "optimize.m"
static void MR_CALL 
ll_backend__optimize__optimize_middle_12_p_0(
#line 488 "optimize.m"
  MR_Word ll_backend__optimize__Info_13,
#line 488 "optimize.m"
  MR_Word ll_backend__optimize__Final_14,
#line 488 "optimize.m"
  MR_Word ll_backend__optimize__LayoutLabelSet_15,
#line 488 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_16,
#line 488 "optimize.m"
  MR_Word ll_backend__optimize__CodeModel_17,
#line 488 "optimize.m"
  MR_Word ll_backend__optimize__MayAlterRtti_18,
#line 488 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_41,
#line 488 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_42,
#line 488 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_43,
#line 488 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_44,
#line 488 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_45,
#line 488 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_46)
#line 488 "optimize.m"
{
#line 494 "optimize.m"
  {
#line 494 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 494 "optimize.m"
    MR_Word ll_backend__optimize__VeryVerbose_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 494 "optimize.m"
    MR_String ll_backend__optimize__LabelStr_23;
#line 494 "optimize.m"
    MR_Word ll_backend__optimize__OptFrames_24;
#line 494 "optimize.m"
    MR_Word ll_backend__optimize__UseLocalVars_37;
#line 494 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_68_68;
#line 494 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_89_89;
#line 494 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_92_92;
#line 494 "optimize.m"
    MR_Word ll_backend__optimize__V_127_127;
#line 494 "optimize.m"
    MR_Integer ll_backend__optimize__V_131_131;
#line 494 "optimize.m"
    MR_Word ll_backend__optimize__V_135_135;
#line 494 "optimize.m"
    MR_Integer ll_backend__optimize__V_145_145;
#line 495 "optimize.m"
    MR_Word ll_backend__optimize__V_104_104 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 495 "optimize.m"
    MR_Word ll_backend__optimize__V_105_105 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 495 "optimize.m"
    MR_Word ll_backend__optimize__V_106_106 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 495 "optimize.m"
    MR_Integer ll_backend__optimize__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 1)));
#line 495 "optimize.m"
    MR_Word ll_backend__optimize__V_108_108 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 495 "optimize.m"
    MR_Word ll_backend__optimize__V_109_109 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 495 "optimize.m"
    MR_Word ll_backend__optimize__V_110_110 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 495 "optimize.m"
    MR_Word ll_backend__optimize__V_111_111 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 495 "optimize.m"
    MR_Word ll_backend__optimize__V_112_112 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 495 "optimize.m"
    MR_Word ll_backend__optimize__V_113_113 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 495 "optimize.m"
    MR_Word ll_backend__optimize__V_114_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 495 "optimize.m"
    MR_Word ll_backend__optimize__V_115_115 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 495 "optimize.m"
    MR_Word ll_backend__optimize__V_116_116 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 495 "optimize.m"
    MR_Word ll_backend__optimize__V_117_117 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 495 "optimize.m"
    MR_Word ll_backend__optimize__V_118_118 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 495 "optimize.m"
    MR_Word ll_backend__optimize__V_119_119 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 495 "optimize.m"
    MR_Word ll_backend__optimize__V_120_120 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 495 "optimize.m"
    MR_Word ll_backend__optimize__V_121_121 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 495 "optimize.m"
    MR_Integer ll_backend__optimize__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 3)));
#line 495 "optimize.m"
    MR_Integer ll_backend__optimize__V_123_123 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 4)));
#line 495 "optimize.m"
    MR_Word ll_backend__optimize__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 5)));
#line 495 "optimize.m"
    MR_Word ll_backend__optimize__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 6)));
#line 495 "optimize.m"
    MR_Word ll_backend__optimize__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 7)));
#line 498 "optimize.m"
    MR_Word ll_backend__optimize__V_128_128;
#line 498 "optimize.m"
    MR_Word ll_backend__optimize__V_129_129;
#line 498 "optimize.m"
    MR_Word ll_backend__optimize__V_130_130;
#line 498 "optimize.m"
    MR_Word ll_backend__optimize__V_132_132;
#line 498 "optimize.m"
    MR_Word ll_backend__optimize__V_133_133;
#line 498 "optimize.m"
    MR_Word ll_backend__optimize__V_134_134;
#line 498 "optimize.m"
    MR_Word ll_backend__optimize__V_136_136;
#line 498 "optimize.m"
    MR_Word ll_backend__optimize__V_137_137;
#line 498 "optimize.m"
    MR_Word ll_backend__optimize__V_138_138;
#line 498 "optimize.m"
    MR_Word ll_backend__optimize__V_139_139;
#line 498 "optimize.m"
    MR_Word ll_backend__optimize__V_140_140;
#line 498 "optimize.m"
    MR_Word ll_backend__optimize__V_141_141;
#line 498 "optimize.m"
    MR_Word ll_backend__optimize__V_142_142;
#line 498 "optimize.m"
    MR_Word ll_backend__optimize__V_143_143;
#line 498 "optimize.m"
    MR_Integer ll_backend__optimize__V_146_146;
#line 498 "optimize.m"
    MR_Word ll_backend__optimize__V_147_147;
#line 498 "optimize.m"
    MR_Word ll_backend__optimize__V_148_148;
#line 498 "optimize.m"
    MR_Word ll_backend__optimize__V_149_149;

#line 496 "optimize.m"
    {
#line 496 "optimize.m"
      ll_backend__optimize__LabelStr_23 = ll_backend__opt_util__format_proc_label_1_f_0(ll_backend__optimize__ProcLabel_16);
    }
#line 498 "optimize.m"
    ll_backend__optimize__V_127_127 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 498 "optimize.m"
    ll_backend__optimize__V_128_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 498 "optimize.m"
    ll_backend__optimize__V_129_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 498 "optimize.m"
    ll_backend__optimize__V_130_130 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 498 "optimize.m"
    ll_backend__optimize__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 1)));
#line 498 "optimize.m"
    ll_backend__optimize__V_132_132 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 498 "optimize.m"
    ll_backend__optimize__V_133_133 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 498 "optimize.m"
    ll_backend__optimize__V_134_134 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 498 "optimize.m"
    ll_backend__optimize__OptFrames_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 498 "optimize.m"
    ll_backend__optimize__V_135_135 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 498 "optimize.m"
    ll_backend__optimize__V_136_136 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 498 "optimize.m"
    ll_backend__optimize__V_137_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 498 "optimize.m"
    ll_backend__optimize__V_138_138 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 498 "optimize.m"
    ll_backend__optimize__V_139_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 498 "optimize.m"
    ll_backend__optimize__V_140_140 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 498 "optimize.m"
    ll_backend__optimize__V_141_141 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 498 "optimize.m"
    ll_backend__optimize__V_142_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 498 "optimize.m"
    ll_backend__optimize__V_143_143 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 498 "optimize.m"
    ll_backend__optimize__UseLocalVars_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 498 "optimize.m"
    ll_backend__optimize__V_145_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 3)));
#line 498 "optimize.m"
    ll_backend__optimize__V_146_146 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 4)));
#line 498 "optimize.m"
    ll_backend__optimize__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 5)));
#line 498 "optimize.m"
    ll_backend__optimize__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 6)));
#line 498 "optimize.m"
    ll_backend__optimize__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 7)));
#line 594 "optimize.m"
#line 594 "optimize.m"
    switch (ll_backend__optimize__OptFrames_24) {
#line 594 "optimize.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 594 "optimize.m"
      case (MR_Integer) 0:
#line 595 "optimize.m"
        {
#line 595 "optimize.m"
          ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_68_68 = ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_41;
#line 595 "optimize.m"
          ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_92_92 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_43;
#line 595 "optimize.m"
          ll_backend__optimize__STATE_VARIABLE_Instrs_89_89 = ll_backend__optimize__STATE_VARIABLE_Instrs_0_45;
#line 595 "optimize.m"
        }
#line 594 "optimize.m"
        break;
#line 594 "optimize.m"
      case (MR_Integer) 1:
#line 500 "optimize.m"
        {
#line 500 "optimize.m"
          MR_Word ll_backend__optimize__Mod1_27;
#line 500 "optimize.m"
          MR_Word ll_backend__optimize__Statistics_28;
#line 500 "optimize.m"
          MR_Word ll_backend__optimize__OptFullJump_29;
#line 500 "optimize.m"
          MR_Word ll_backend__optimize__PessimizeTailCalls_30;
#line 500 "optimize.m"
          MR_Word ll_backend__optimize__CheckedNondetTailCalls_31;
#line 500 "optimize.m"
          MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_55_55;
#line 500 "optimize.m"
          MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_56_56;
#line 500 "optimize.m"
          MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_59_59;
#line 500 "optimize.m"
          MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_69_69;
#line 500 "optimize.m"
          MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_72_72;
#line 500 "optimize.m"
          MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_79_79;
#line 500 "optimize.m"
          MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_82_82;
#line 525 "optimize.m"
          MR_Word ll_backend__optimize__V_173_173;
#line 525 "optimize.m"
          MR_Word ll_backend__optimize__V_174_174;
#line 525 "optimize.m"
          MR_Integer ll_backend__optimize__V_176_176;
#line 525 "optimize.m"
          MR_Word ll_backend__optimize__V_177_177;
#line 525 "optimize.m"
          MR_Word ll_backend__optimize__V_178_178;
#line 525 "optimize.m"
          MR_Word ll_backend__optimize__V_179_179;
#line 525 "optimize.m"
          MR_Word ll_backend__optimize__V_180_180;
#line 525 "optimize.m"
          MR_Word ll_backend__optimize__V_181_181;
#line 525 "optimize.m"
          MR_Word ll_backend__optimize__V_182_182;
#line 525 "optimize.m"
          MR_Word ll_backend__optimize__V_184_184;
#line 525 "optimize.m"
          MR_Word ll_backend__optimize__V_185_185;
#line 525 "optimize.m"
          MR_Word ll_backend__optimize__V_186_186;
#line 525 "optimize.m"
          MR_Word ll_backend__optimize__V_187_187;
#line 525 "optimize.m"
          MR_Word ll_backend__optimize__V_189_189;
#line 525 "optimize.m"
          MR_Word ll_backend__optimize__V_190_190;
#line 525 "optimize.m"
          MR_Integer ll_backend__optimize__V_191_191;
#line 525 "optimize.m"
          MR_Integer ll_backend__optimize__V_192_192;
#line 525 "optimize.m"
          MR_Word ll_backend__optimize__V_193_193;
#line 525 "optimize.m"
          MR_Word ll_backend__optimize__V_194_194;
#line 525 "optimize.m"
          MR_Word ll_backend__optimize__V_195_195;

#line 508 "optimize.m"
#line 508 "optimize.m"
          switch (ll_backend__optimize__VeryVerbose_22) {
#line 508 "optimize.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 508 "optimize.m"
            case (MR_Integer) 0:
#line 509 "optimize.m"
              {
#line 509 "optimize.m"
              }
#line 508 "optimize.m"
              break;
#line 508 "optimize.m"
            case (MR_Integer) 1:
#line 503 "optimize.m"
              {
#line 504 "optimize.m"
                {
#line 504 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "% Optimizing frames for ");
                }
#line 505 "optimize.m"
                {
#line 505 "optimize.m"
                  mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
                }
#line 506 "optimize.m"
                {
#line 506 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 503 "optimize.m"
              }
#line 508 "optimize.m"
              break;
#line 508 "optimize.m"
          }
#line 518 "optimize.m"
#line 518 "optimize.m"
          switch (ll_backend__optimize__CodeModel_17) {
#line 518 "optimize.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 518 "optimize.m"
            case (MR_Integer) 0:
#line 518 "optimize.m"
            case (MR_Integer) 1:
#line 516 "optimize.m"
              {
#line 516 "optimize.m"
                ll_backend__frameopt__frameopt_main_det_stack_7_p_0(ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_41, &ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_55_55, ll_backend__optimize__STATE_VARIABLE_Instrs_0_45, &ll_backend__optimize__STATE_VARIABLE_Instrs_56_56, ll_backend__optimize__V_135_135, &ll_backend__optimize__Mod1_27);
              }
#line 518 "optimize.m"
              break;
#line 518 "optimize.m"
            case (MR_Integer) 2:
#line 520 "optimize.m"
              {
#line 520 "optimize.m"
                ll_backend__frameopt__frameopt_main_nondet_stack_7_p_0(ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_41, &ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_55_55, ll_backend__optimize__STATE_VARIABLE_Instrs_0_45, &ll_backend__optimize__STATE_VARIABLE_Instrs_56_56, ll_backend__optimize__V_135_135, &ll_backend__optimize__Mod1_27);
              }
#line 518 "optimize.m"
              break;
#line 518 "optimize.m"
          }
#line 523 "optimize.m"
          {
#line 523 "optimize.m"
            ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, ll_backend__optimize__STATE_VARIABLE_Instrs_56_56, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_55_55, (MR_String) "frame", (MR_String) "after frame opt", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_43, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_59_59);
          }
#line 525 "optimize.m"
          ll_backend__optimize__V_173_173 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 525 "optimize.m"
          ll_backend__optimize__Statistics_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 525 "optimize.m"
          ll_backend__optimize__V_174_174 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 525 "optimize.m"
          ll_backend__optimize__CheckedNondetTailCalls_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 525 "optimize.m"
          ll_backend__optimize__V_176_176 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 1)));
#line 525 "optimize.m"
          ll_backend__optimize__V_177_177 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 525 "optimize.m"
          ll_backend__optimize__V_178_178 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 525 "optimize.m"
          ll_backend__optimize__V_179_179 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 525 "optimize.m"
          ll_backend__optimize__V_180_180 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 525 "optimize.m"
          ll_backend__optimize__V_181_181 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 525 "optimize.m"
          ll_backend__optimize__V_182_182 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 525 "optimize.m"
          ll_backend__optimize__OptFullJump_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 525 "optimize.m"
          ll_backend__optimize__V_184_184 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 525 "optimize.m"
          ll_backend__optimize__V_185_185 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 525 "optimize.m"
          ll_backend__optimize__V_186_186 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 525 "optimize.m"
          ll_backend__optimize__V_187_187 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 525 "optimize.m"
          ll_backend__optimize__PessimizeTailCalls_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 525 "optimize.m"
          ll_backend__optimize__V_189_189 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 525 "optimize.m"
          ll_backend__optimize__V_190_190 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 525 "optimize.m"
          ll_backend__optimize__V_191_191 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 3)));
#line 525 "optimize.m"
          ll_backend__optimize__V_192_192 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 4)));
#line 525 "optimize.m"
          ll_backend__optimize__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 5)));
#line 525 "optimize.m"
          ll_backend__optimize__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 6)));
#line 525 "optimize.m"
          ll_backend__optimize__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 7)));
#line 527 "optimize.m"
          {
#line 527 "optimize.m"
            libs__file_util__maybe_report_stats_3_p_0(ll_backend__optimize__Statistics_28);
          }
#line 534 "optimize.m"
          ll_backend__optimize__succeeded = (ll_backend__optimize__OptFullJump_29 == (MR_Integer) 1);
#line 535 "optimize.m"
          if (!(ll_backend__optimize__succeeded))
#line 535 "optimize.m"
            ll_backend__optimize__succeeded = (ll_backend__optimize__Mod1_27 == (MR_Integer) 1);
#line 533 "optimize.m"
          if (ll_backend__optimize__succeeded)
#line 547 "optimize.m"
            {
#line 548 "optimize.m"
              MR_Word ll_backend__optimize___Mod2_32;

#line 545 "optimize.m"
#line 545 "optimize.m"
              switch (ll_backend__optimize__VeryVerbose_22) {
#line 545 "optimize.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 545 "optimize.m"
                case (MR_Integer) 0:
#line 546 "optimize.m"
                  {
#line 546 "optimize.m"
                  }
#line 545 "optimize.m"
                  break;
#line 545 "optimize.m"
                case (MR_Integer) 1:
#line 540 "optimize.m"
                  {
#line 541 "optimize.m"
                    {
#line 541 "optimize.m"
                      mercury__io__write_string_3_p_0((MR_String) "% Optimizing jumps for ");
                    }
#line 542 "optimize.m"
                    {
#line 542 "optimize.m"
                      mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
                    }
#line 543 "optimize.m"
                    {
#line 543 "optimize.m"
                      mercury__io__write_string_3_p_0((MR_String) "\n");
                    }
#line 540 "optimize.m"
                  }
#line 545 "optimize.m"
                  break;
#line 545 "optimize.m"
              }
#line 548 "optimize.m"
              {
#line 548 "optimize.m"
                ll_backend__jumpopt__optimize_jumps_in_proc_12_p_0(ll_backend__optimize__LayoutLabelSet_15, ll_backend__optimize__MayAlterRtti_18, ll_backend__optimize__ProcLabel_16, ll_backend__optimize__OptFullJump_29, ll_backend__optimize__Final_14, ll_backend__optimize__PessimizeTailCalls_30, ll_backend__optimize__CheckedNondetTailCalls_31, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_55_55, &ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_68_68, ll_backend__optimize__STATE_VARIABLE_Instrs_56_56, &ll_backend__optimize__STATE_VARIABLE_Instrs_69_69, &ll_backend__optimize___Mod2_32);
              }
#line 551 "optimize.m"
              {
#line 551 "optimize.m"
                ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, ll_backend__optimize__STATE_VARIABLE_Instrs_69_69, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_68_68, (MR_String) "jump", (MR_String) "after jumps", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_59_59, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_72_72);
              }
#line 547 "optimize.m"
            }
#line 533 "optimize.m"
          else
#line 554 "optimize.m"
            {
#line 554 "optimize.m"
              ll_backend__optimize__STATE_VARIABLE_Instrs_69_69 = ll_backend__optimize__STATE_VARIABLE_Instrs_56_56;
#line 554 "optimize.m"
              ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_72_72 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_59_59;
#line 554 "optimize.m"
              ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_68_68 = ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_55_55;
#line 554 "optimize.m"
            }
#line 571 "optimize.m"
#line 571 "optimize.m"
          switch (ll_backend__optimize__Mod1_27) {
#line 571 "optimize.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 571 "optimize.m"
            case (MR_Integer) 0:
#line 572 "optimize.m"
              {
#line 572 "optimize.m"
                ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_82_82 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_72_72;
#line 572 "optimize.m"
                ll_backend__optimize__STATE_VARIABLE_Instrs_79_79 = ll_backend__optimize__STATE_VARIABLE_Instrs_69_69;
#line 572 "optimize.m"
              }
#line 571 "optimize.m"
              break;
#line 571 "optimize.m"
            case (MR_Integer) 1:
#line 557 "optimize.m"
              {
#line 568 "optimize.m"
                MR_Word ll_backend__optimize___Mod3_33;

#line 565 "optimize.m"
#line 565 "optimize.m"
                switch (ll_backend__optimize__VeryVerbose_22) {
#line 565 "optimize.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 565 "optimize.m"
                  case (MR_Integer) 0:
#line 566 "optimize.m"
                    {
#line 566 "optimize.m"
                    }
#line 565 "optimize.m"
                    break;
#line 565 "optimize.m"
                  case (MR_Integer) 1:
#line 560 "optimize.m"
                    {
#line 561 "optimize.m"
                      {
#line 561 "optimize.m"
                        mercury__io__write_string_3_p_0((MR_String) "% Optimizing labels for ");
                      }
#line 562 "optimize.m"
                      {
#line 562 "optimize.m"
                        mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
                      }
#line 563 "optimize.m"
                      {
#line 563 "optimize.m"
                        mercury__io__write_string_3_p_0((MR_String) "\n");
                      }
#line 560 "optimize.m"
                    }
#line 565 "optimize.m"
                    break;
#line 565 "optimize.m"
                }
#line 568 "optimize.m"
                {
#line 568 "optimize.m"
                  ll_backend__labelopt__labelopt_main_5_p_0(ll_backend__optimize__Final_14, ll_backend__optimize__LayoutLabelSet_15, ll_backend__optimize__STATE_VARIABLE_Instrs_69_69, &ll_backend__optimize__STATE_VARIABLE_Instrs_79_79, &ll_backend__optimize___Mod3_33);
                }
#line 569 "optimize.m"
                {
#line 569 "optimize.m"
                  ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, ll_backend__optimize__STATE_VARIABLE_Instrs_79_79, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_68_68, (MR_String) "label", (MR_String) "after labels", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_72_72, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_82_82);
                }
#line 557 "optimize.m"
              }
#line 571 "optimize.m"
              break;
#line 571 "optimize.m"
          }
#line 591 "optimize.m"
#line 591 "optimize.m"
          switch (ll_backend__optimize__Mod1_27) {
#line 591 "optimize.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 591 "optimize.m"
            case (MR_Integer) 0:
#line 592 "optimize.m"
              {
#line 592 "optimize.m"
                ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_92_92 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_82_82;
#line 592 "optimize.m"
                ll_backend__optimize__STATE_VARIABLE_Instrs_89_89 = ll_backend__optimize__STATE_VARIABLE_Instrs_79_79;
#line 592 "optimize.m"
              }
#line 591 "optimize.m"
              break;
#line 591 "optimize.m"
            case (MR_Integer) 1:
#line 575 "optimize.m"
              {
#line 575 "optimize.m"
                MR_Word ll_backend__optimize__GC_Method_34;
#line 575 "optimize.m"
                MR_Word ll_backend__optimize__OptPeepMkword_35;
#line 586 "optimize.m"
                MR_Word ll_backend__optimize__V_265_265;
#line 586 "optimize.m"
                MR_Word ll_backend__optimize__V_266_266;
#line 586 "optimize.m"
                MR_Word ll_backend__optimize__V_267_267;
#line 586 "optimize.m"
                MR_Word ll_backend__optimize__V_268_268;
#line 586 "optimize.m"
                MR_Integer ll_backend__optimize__V_269_269;
#line 586 "optimize.m"
                MR_Word ll_backend__optimize__V_270_270;
#line 586 "optimize.m"
                MR_Word ll_backend__optimize__V_271_271;
#line 586 "optimize.m"
                MR_Word ll_backend__optimize__V_272_272;
#line 586 "optimize.m"
                MR_Word ll_backend__optimize__V_273_273;
#line 586 "optimize.m"
                MR_Word ll_backend__optimize__V_274_274;
#line 586 "optimize.m"
                MR_Word ll_backend__optimize__V_275_275;
#line 586 "optimize.m"
                MR_Word ll_backend__optimize__V_276_276;
#line 586 "optimize.m"
                MR_Word ll_backend__optimize__V_277_277;
#line 586 "optimize.m"
                MR_Word ll_backend__optimize__V_279_279;
#line 586 "optimize.m"
                MR_Word ll_backend__optimize__V_280_280;
#line 586 "optimize.m"
                MR_Word ll_backend__optimize__V_281_281;
#line 586 "optimize.m"
                MR_Word ll_backend__optimize__V_282_282;
#line 586 "optimize.m"
                MR_Integer ll_backend__optimize__V_283_283;
#line 586 "optimize.m"
                MR_Integer ll_backend__optimize__V_284_284;
#line 586 "optimize.m"
                MR_Word ll_backend__optimize__V_285_285;
#line 586 "optimize.m"
                MR_Word ll_backend__optimize__V_286_286;
#line 586 "optimize.m"
                MR_Word ll_backend__optimize__V_287_287;
#line 588 "optimize.m"
                MR_Word ll_backend__optimize___Mod_36;

#line 583 "optimize.m"
#line 583 "optimize.m"
                switch (ll_backend__optimize__VeryVerbose_22) {
#line 583 "optimize.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 583 "optimize.m"
                  case (MR_Integer) 0:
#line 584 "optimize.m"
                    {
#line 584 "optimize.m"
                    }
#line 583 "optimize.m"
                    break;
#line 583 "optimize.m"
                  case (MR_Integer) 1:
#line 578 "optimize.m"
                    {
#line 579 "optimize.m"
                      {
#line 579 "optimize.m"
                        mercury__io__write_string_3_p_0((MR_String) "% Optimizing locally for ");
                      }
#line 580 "optimize.m"
                      {
#line 580 "optimize.m"
                        mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
                      }
#line 581 "optimize.m"
                      {
#line 581 "optimize.m"
                        mercury__io__write_string_3_p_0((MR_String) "\n");
                      }
#line 578 "optimize.m"
                    }
#line 583 "optimize.m"
                    break;
#line 583 "optimize.m"
                }
#line 586 "optimize.m"
                ll_backend__optimize__V_265_265 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 586 "optimize.m"
                ll_backend__optimize__V_266_266 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 586 "optimize.m"
                ll_backend__optimize__V_267_267 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 586 "optimize.m"
                ll_backend__optimize__V_268_268 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 586 "optimize.m"
                ll_backend__optimize__V_269_269 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 1)));
#line 586 "optimize.m"
                ll_backend__optimize__GC_Method_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 586 "optimize.m"
                ll_backend__optimize__V_270_270 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 586 "optimize.m"
                ll_backend__optimize__V_271_271 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 586 "optimize.m"
                ll_backend__optimize__V_272_272 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 586 "optimize.m"
                ll_backend__optimize__V_273_273 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 586 "optimize.m"
                ll_backend__optimize__V_274_274 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 586 "optimize.m"
                ll_backend__optimize__V_275_275 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 586 "optimize.m"
                ll_backend__optimize__V_276_276 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 586 "optimize.m"
                ll_backend__optimize__V_277_277 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 586 "optimize.m"
                ll_backend__optimize__OptPeepMkword_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 586 "optimize.m"
                ll_backend__optimize__V_279_279 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 586 "optimize.m"
                ll_backend__optimize__V_280_280 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 586 "optimize.m"
                ll_backend__optimize__V_281_281 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 586 "optimize.m"
                ll_backend__optimize__V_282_282 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 586 "optimize.m"
                ll_backend__optimize__V_283_283 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 3)));
#line 586 "optimize.m"
                ll_backend__optimize__V_284_284 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 4)));
#line 586 "optimize.m"
                ll_backend__optimize__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 5)));
#line 586 "optimize.m"
                ll_backend__optimize__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 6)));
#line 586 "optimize.m"
                ll_backend__optimize__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 7)));
#line 588 "optimize.m"
                {
#line 588 "optimize.m"
                  ll_backend__peephole__peephole_optimize_5_p_0(ll_backend__optimize__GC_Method_34, ll_backend__optimize__OptPeepMkword_35, ll_backend__optimize__STATE_VARIABLE_Instrs_79_79, &ll_backend__optimize__STATE_VARIABLE_Instrs_89_89, &ll_backend__optimize___Mod_36);
                }
#line 589 "optimize.m"
                {
#line 589 "optimize.m"
                  ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, ll_backend__optimize__STATE_VARIABLE_Instrs_89_89, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_68_68, (MR_String) "peep", (MR_String) "after peephole", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_82_82, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_92_92);
                }
#line 575 "optimize.m"
              }
#line 591 "optimize.m"
              break;
#line 591 "optimize.m"
          }
#line 500 "optimize.m"
        }
#line 594 "optimize.m"
        break;
#line 594 "optimize.m"
    }
#line 617 "optimize.m"
#line 617 "optimize.m"
    switch (ll_backend__optimize__UseLocalVars_37) {
#line 617 "optimize.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 617 "optimize.m"
      case (MR_Integer) 0:
#line 618 "optimize.m"
        {
#line 618 "optimize.m"
          *ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_42 = ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_68_68;
#line 618 "optimize.m"
          *ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_44 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_92_92;
#line 618 "optimize.m"
          *ll_backend__optimize__STATE_VARIABLE_Instrs_46 = ll_backend__optimize__STATE_VARIABLE_Instrs_89_89;
#line 618 "optimize.m"
        }
#line 617 "optimize.m"
        break;
#line 617 "optimize.m"
      case (MR_Integer) 1:
#line 599 "optimize.m"
        {
#line 607 "optimize.m"
#line 607 "optimize.m"
          switch (ll_backend__optimize__VeryVerbose_22) {
#line 607 "optimize.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 607 "optimize.m"
            case (MR_Integer) 0:
#line 608 "optimize.m"
              {
#line 608 "optimize.m"
              }
#line 607 "optimize.m"
              break;
#line 607 "optimize.m"
            case (MR_Integer) 1:
#line 602 "optimize.m"
              {
#line 603 "optimize.m"
                {
#line 603 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "% Optimizing local vars for ");
                }
#line 604 "optimize.m"
                {
#line 604 "optimize.m"
                  mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
                }
#line 605 "optimize.m"
                {
#line 605 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 602 "optimize.m"
              }
#line 607 "optimize.m"
              break;
#line 607 "optimize.m"
          }
#line 613 "optimize.m"
          {
#line 613 "optimize.m"
            ll_backend__use_local_vars__use_local_vars_proc_8_p_0(ll_backend__optimize__STATE_VARIABLE_Instrs_89_89, ll_backend__optimize__STATE_VARIABLE_Instrs_46, ll_backend__optimize__V_131_131, ll_backend__optimize__V_145_145, ll_backend__optimize__V_127_127, ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_68_68, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_42);
          }
#line 615 "optimize.m"
          {
#line 615 "optimize.m"
            ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, *ll_backend__optimize__STATE_VARIABLE_Instrs_46, *ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_42, (MR_String) "use_local", (MR_String) "after use_local_vars", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_92_92, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_44);
          }
#line 599 "optimize.m"
        }
#line 617 "optimize.m"
        break;
#line 617 "optimize.m"
    }
#line 494 "optimize.m"
  }
#line 488 "optimize.m"
}

#line 382 "optimize.m"
static void MR_CALL 
ll_backend__optimize__optimize_repeated_12_p_0(
#line 382 "optimize.m"
  MR_Word ll_backend__optimize__Info_13,
#line 382 "optimize.m"
  MR_Word ll_backend__optimize__Final_14,
#line 382 "optimize.m"
  MR_Word ll_backend__optimize__LayoutLabelSet_15,
#line 382 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_16,
#line 382 "optimize.m"
  MR_Word ll_backend__optimize__MayAlterRtti_17,
#line 382 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_39,
#line 382 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_40,
#line 382 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_41,
#line 382 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_42,
#line 382 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_43,
#line 382 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_44,
#line 382 "optimize.m"
  MR_Word * ll_backend__optimize__Mod_21)
#line 382 "optimize.m"
{
#line 388 "optimize.m"
  {
#line 388 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 388 "optimize.m"
    MR_String ll_backend__optimize__LabelStr_23;
#line 388 "optimize.m"
    MR_Word ll_backend__optimize__VeryVerbose_24;
#line 388 "optimize.m"
    MR_Word ll_backend__optimize__OptJump_25;
#line 388 "optimize.m"
    MR_Word ll_backend__optimize__OptFullJump_26;
#line 388 "optimize.m"
    MR_Word ll_backend__optimize__PessimizeTailCalls_27;
#line 388 "optimize.m"
    MR_Word ll_backend__optimize__CheckedNondetTailCalls_28;
#line 388 "optimize.m"
    MR_Word ll_backend__optimize__Mod1_30;
#line 388 "optimize.m"
    MR_Word ll_backend__optimize__Peephole_31;
#line 388 "optimize.m"
    MR_Word ll_backend__optimize__Mod2_34;
#line 388 "optimize.m"
    MR_Word ll_backend__optimize__OptLabels_35;
#line 388 "optimize.m"
    MR_Word ll_backend__optimize__Mod3_36;
#line 388 "optimize.m"
    MR_Word ll_backend__optimize__DupElim_37;
#line 388 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_51_51;
#line 388 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_52_52;
#line 388 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_55_55;
#line 388 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_62_62;
#line 388 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_65_65;
#line 388 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_72_72;
#line 388 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_75_75;
#line 388 "optimize.m"
    MR_Word ll_backend__optimize__V_93_93;
#line 388 "optimize.m"
    MR_Word ll_backend__optimize__V_102_102;
#line 391 "optimize.m"
    MR_Word ll_backend__optimize__V_89_89;
#line 391 "optimize.m"
    MR_Word ll_backend__optimize__V_90_90;
#line 391 "optimize.m"
    MR_Integer ll_backend__optimize__V_92_92;
#line 391 "optimize.m"
    MR_Word ll_backend__optimize__V_94_94;
#line 391 "optimize.m"
    MR_Word ll_backend__optimize__V_96_96;
#line 391 "optimize.m"
    MR_Word ll_backend__optimize__V_97_97;
#line 391 "optimize.m"
    MR_Word ll_backend__optimize__V_103_103;
#line 391 "optimize.m"
    MR_Word ll_backend__optimize__V_105_105;
#line 391 "optimize.m"
    MR_Word ll_backend__optimize__V_106_106;
#line 391 "optimize.m"
    MR_Integer ll_backend__optimize__V_107_107;
#line 391 "optimize.m"
    MR_Integer ll_backend__optimize__V_108_108;
#line 391 "optimize.m"
    MR_Word ll_backend__optimize__V_109_109;
#line 391 "optimize.m"
    MR_Word ll_backend__optimize__V_110_110;
#line 391 "optimize.m"
    MR_Word ll_backend__optimize__V_111_111;
#line 478 "optimize.m"
    MR_Word ll_backend__optimize__TypeInfo_342_342;
#line 483 "optimize.m"
    MR_Word ll_backend__optimize__Statistics_38;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_319_319;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_320_320;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_321_321;
#line 484 "optimize.m"
    MR_Integer ll_backend__optimize__V_322_322;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_323_323;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_324_324;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_325_325;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_326_326;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_327_327;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_328_328;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_329_329;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_330_330;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_331_331;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_332_332;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_333_333;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_334_334;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_335_335;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_336_336;
#line 484 "optimize.m"
    MR_Integer ll_backend__optimize__V_337_337;
#line 484 "optimize.m"
    MR_Integer ll_backend__optimize__V_338_338;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_339_339;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_340_340;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_341_341;

#line 390 "optimize.m"
    {
#line 390 "optimize.m"
      ll_backend__optimize__LabelStr_23 = ll_backend__opt_util__format_proc_label_1_f_0(ll_backend__optimize__ProcLabel_16);
    }
#line 391 "optimize.m"
    ll_backend__optimize__V_89_89 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 391 "optimize.m"
    ll_backend__optimize__V_90_90 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 391 "optimize.m"
    ll_backend__optimize__VeryVerbose_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 391 "optimize.m"
    ll_backend__optimize__CheckedNondetTailCalls_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 391 "optimize.m"
    ll_backend__optimize__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 1)));
#line 391 "optimize.m"
    ll_backend__optimize__V_93_93 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 391 "optimize.m"
    ll_backend__optimize__V_94_94 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 391 "optimize.m"
    ll_backend__optimize__DupElim_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 391 "optimize.m"
    ll_backend__optimize__V_96_96 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 391 "optimize.m"
    ll_backend__optimize__V_97_97 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 391 "optimize.m"
    ll_backend__optimize__OptJump_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 391 "optimize.m"
    ll_backend__optimize__OptFullJump_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 391 "optimize.m"
    ll_backend__optimize__OptLabels_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 391 "optimize.m"
    ll_backend__optimize__Peephole_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 391 "optimize.m"
    ll_backend__optimize__V_102_102 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 391 "optimize.m"
    ll_backend__optimize__V_103_103 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 391 "optimize.m"
    ll_backend__optimize__PessimizeTailCalls_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 391 "optimize.m"
    ll_backend__optimize__V_105_105 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 391 "optimize.m"
    ll_backend__optimize__V_106_106 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 391 "optimize.m"
    ll_backend__optimize__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 3)));
#line 391 "optimize.m"
    ll_backend__optimize__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 4)));
#line 391 "optimize.m"
    ll_backend__optimize__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 5)));
#line 391 "optimize.m"
    ll_backend__optimize__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 6)));
#line 391 "optimize.m"
    ll_backend__optimize__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 7)));
#line 413 "optimize.m"
#line 413 "optimize.m"
    switch (ll_backend__optimize__OptJump_25) {
#line 413 "optimize.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 413 "optimize.m"
      case (MR_Integer) 0:
#line 414 "optimize.m"
        {
#line 415 "optimize.m"
          ll_backend__optimize__Mod1_30 = (MR_Integer) 0;
#line 414 "optimize.m"
          ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_51_51 = ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_39;
#line 414 "optimize.m"
          ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_55_55 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_41;
#line 414 "optimize.m"
          ll_backend__optimize__STATE_VARIABLE_Instrs_52_52 = ll_backend__optimize__STATE_VARIABLE_Instrs_0_43;
#line 414 "optimize.m"
        }
#line 413 "optimize.m"
        break;
#line 413 "optimize.m"
      case (MR_Integer) 1:
#line 397 "optimize.m"
        {
#line 405 "optimize.m"
#line 405 "optimize.m"
          switch (ll_backend__optimize__VeryVerbose_24) {
#line 405 "optimize.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 405 "optimize.m"
            case (MR_Integer) 0:
#line 406 "optimize.m"
              {
#line 406 "optimize.m"
              }
#line 405 "optimize.m"
              break;
#line 405 "optimize.m"
            case (MR_Integer) 1:
#line 400 "optimize.m"
              {
#line 401 "optimize.m"
                {
#line 401 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "% Optimizing jumps for ");
                }
#line 402 "optimize.m"
                {
#line 402 "optimize.m"
                  mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
                }
#line 403 "optimize.m"
                {
#line 403 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 400 "optimize.m"
              }
#line 405 "optimize.m"
              break;
#line 405 "optimize.m"
          }
#line 408 "optimize.m"
          {
#line 408 "optimize.m"
            ll_backend__jumpopt__optimize_jumps_in_proc_12_p_0(ll_backend__optimize__LayoutLabelSet_15, ll_backend__optimize__MayAlterRtti_17, ll_backend__optimize__ProcLabel_16, ll_backend__optimize__OptFullJump_26, ll_backend__optimize__Final_14, ll_backend__optimize__PessimizeTailCalls_27, ll_backend__optimize__CheckedNondetTailCalls_28, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_39, &ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_51_51, ll_backend__optimize__STATE_VARIABLE_Instrs_0_43, &ll_backend__optimize__STATE_VARIABLE_Instrs_52_52, &ll_backend__optimize__Mod1_30);
          }
#line 411 "optimize.m"
          {
#line 411 "optimize.m"
            ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, ll_backend__optimize__STATE_VARIABLE_Instrs_52_52, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_51_51, (MR_String) "jump", (MR_String) "after jump opt", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_41, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_55_55);
          }
#line 397 "optimize.m"
        }
#line 413 "optimize.m"
        break;
#line 413 "optimize.m"
    }
#line 435 "optimize.m"
#line 435 "optimize.m"
    switch (ll_backend__optimize__Peephole_31) {
#line 435 "optimize.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 435 "optimize.m"
      case (MR_Integer) 0:
#line 436 "optimize.m"
        {
#line 437 "optimize.m"
          ll_backend__optimize__Mod2_34 = (MR_Integer) 0;
#line 436 "optimize.m"
          ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_65_65 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_55_55;
#line 436 "optimize.m"
          ll_backend__optimize__STATE_VARIABLE_Instrs_62_62 = ll_backend__optimize__STATE_VARIABLE_Instrs_52_52;
#line 436 "optimize.m"
        }
#line 435 "optimize.m"
        break;
#line 435 "optimize.m"
      case (MR_Integer) 1:
#line 419 "optimize.m"
        {
#line 427 "optimize.m"
#line 427 "optimize.m"
          switch (ll_backend__optimize__VeryVerbose_24) {
#line 427 "optimize.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 427 "optimize.m"
            case (MR_Integer) 0:
#line 428 "optimize.m"
              {
#line 428 "optimize.m"
              }
#line 427 "optimize.m"
              break;
#line 427 "optimize.m"
            case (MR_Integer) 1:
#line 422 "optimize.m"
              {
#line 423 "optimize.m"
                {
#line 423 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "% Optimizing locally for ");
                }
#line 424 "optimize.m"
                {
#line 424 "optimize.m"
                  mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
                }
#line 425 "optimize.m"
                {
#line 425 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 422 "optimize.m"
              }
#line 427 "optimize.m"
              break;
#line 427 "optimize.m"
          }
#line 432 "optimize.m"
          {
#line 432 "optimize.m"
            ll_backend__peephole__peephole_optimize_5_p_0(ll_backend__optimize__V_93_93, ll_backend__optimize__V_102_102, ll_backend__optimize__STATE_VARIABLE_Instrs_52_52, &ll_backend__optimize__STATE_VARIABLE_Instrs_62_62, &ll_backend__optimize__Mod2_34);
          }
#line 433 "optimize.m"
          {
#line 433 "optimize.m"
            ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, ll_backend__optimize__STATE_VARIABLE_Instrs_62_62, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_51_51, (MR_String) "peep", (MR_String) "after peephole", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_55_55, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_65_65);
          }
#line 419 "optimize.m"
        }
#line 435 "optimize.m"
        break;
#line 435 "optimize.m"
    }
#line 455 "optimize.m"
#line 455 "optimize.m"
    switch (ll_backend__optimize__OptLabels_35) {
#line 455 "optimize.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 455 "optimize.m"
      case (MR_Integer) 0:
#line 456 "optimize.m"
        {
#line 457 "optimize.m"
          ll_backend__optimize__Mod3_36 = (MR_Integer) 0;
#line 456 "optimize.m"
          ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_75_75 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_65_65;
#line 456 "optimize.m"
          ll_backend__optimize__STATE_VARIABLE_Instrs_72_72 = ll_backend__optimize__STATE_VARIABLE_Instrs_62_62;
#line 456 "optimize.m"
        }
#line 455 "optimize.m"
        break;
#line 455 "optimize.m"
      case (MR_Integer) 1:
#line 441 "optimize.m"
        {
#line 449 "optimize.m"
#line 449 "optimize.m"
          switch (ll_backend__optimize__VeryVerbose_24) {
#line 449 "optimize.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 449 "optimize.m"
            case (MR_Integer) 0:
#line 450 "optimize.m"
              {
#line 450 "optimize.m"
              }
#line 449 "optimize.m"
              break;
#line 449 "optimize.m"
            case (MR_Integer) 1:
#line 444 "optimize.m"
              {
#line 445 "optimize.m"
                {
#line 445 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "% Optimizing labels for ");
                }
#line 446 "optimize.m"
                {
#line 446 "optimize.m"
                  mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
                }
#line 447 "optimize.m"
                {
#line 447 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 444 "optimize.m"
              }
#line 449 "optimize.m"
              break;
#line 449 "optimize.m"
          }
#line 452 "optimize.m"
          {
#line 452 "optimize.m"
            ll_backend__labelopt__labelopt_main_5_p_0(ll_backend__optimize__Final_14, ll_backend__optimize__LayoutLabelSet_15, ll_backend__optimize__STATE_VARIABLE_Instrs_62_62, &ll_backend__optimize__STATE_VARIABLE_Instrs_72_72, &ll_backend__optimize__Mod3_36);
          }
#line 453 "optimize.m"
          {
#line 453 "optimize.m"
            ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, ll_backend__optimize__STATE_VARIABLE_Instrs_72_72, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_51_51, (MR_String) "label", (MR_String) "after label opt", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_65_65, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_75_75);
          }
#line 441 "optimize.m"
        }
#line 455 "optimize.m"
        break;
#line 455 "optimize.m"
    }
#line 475 "optimize.m"
#line 475 "optimize.m"
    switch (ll_backend__optimize__DupElim_37) {
#line 475 "optimize.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 475 "optimize.m"
      case (MR_Integer) 0:
#line 476 "optimize.m"
        {
#line 476 "optimize.m"
          *ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_40 = ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_51_51;
#line 476 "optimize.m"
          *ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_42 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_75_75;
#line 476 "optimize.m"
          *ll_backend__optimize__STATE_VARIABLE_Instrs_44 = ll_backend__optimize__STATE_VARIABLE_Instrs_72_72;
#line 476 "optimize.m"
        }
#line 475 "optimize.m"
        break;
#line 475 "optimize.m"
      case (MR_Integer) 1:
#line 461 "optimize.m"
        {
#line 469 "optimize.m"
#line 469 "optimize.m"
          switch (ll_backend__optimize__VeryVerbose_24) {
#line 469 "optimize.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 469 "optimize.m"
            case (MR_Integer) 0:
#line 470 "optimize.m"
              {
#line 470 "optimize.m"
              }
#line 469 "optimize.m"
              break;
#line 469 "optimize.m"
            case (MR_Integer) 1:
#line 464 "optimize.m"
              {
#line 465 "optimize.m"
                {
#line 465 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "% Optimizing duplicates for ");
                }
#line 466 "optimize.m"
                {
#line 466 "optimize.m"
                  mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
                }
#line 467 "optimize.m"
                {
#line 467 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 464 "optimize.m"
              }
#line 469 "optimize.m"
              break;
#line 469 "optimize.m"
          }
#line 472 "optimize.m"
          {
#line 472 "optimize.m"
            ll_backend__dupelim__dupelim_main_5_p_0(ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_51_51, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_40, ll_backend__optimize__STATE_VARIABLE_Instrs_72_72, ll_backend__optimize__STATE_VARIABLE_Instrs_44);
          }
#line 473 "optimize.m"
          {
#line 473 "optimize.m"
            ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, *ll_backend__optimize__STATE_VARIABLE_Instrs_44, *ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_40, (MR_String) "dup", (MR_String) "after duplicates", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_75_75, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_42);
          }
#line 461 "optimize.m"
        }
#line 475 "optimize.m"
        break;
#line 475 "optimize.m"
    }
#line 478 "optimize.m"
    ll_backend__optimize__succeeded = (ll_backend__optimize__Mod1_30 == (MR_Integer) 0);
#line 478 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 478 "optimize.m"
      {
#line 478 "optimize.m"
        ll_backend__optimize__succeeded = (ll_backend__optimize__Mod2_34 == (MR_Integer) 0);
#line 478 "optimize.m"
        if (ll_backend__optimize__succeeded)
#line 478 "optimize.m"
          {
#line 478 "optimize.m"
            ll_backend__optimize__succeeded = (ll_backend__optimize__Mod3_36 == (MR_Integer) 0);
#line 478 "optimize.m"
            if (ll_backend__optimize__succeeded)
#line 478 "optimize.m"
              {
#line 4856 "ll_backend.optimize.c"
                ll_backend__optimize__TypeInfo_342_342 = (MR_Word) &ll_backend__optimize_scalar_common_1[1];
#line 478 "optimize.m"
                {
#line 478 "optimize.m"
                  ll_backend__optimize__succeeded = mercury__builtin__unify_2_p_0(ll_backend__optimize__TypeInfo_342_342, ((MR_Box) (*ll_backend__optimize__STATE_VARIABLE_Instrs_44)), ((MR_Box) (ll_backend__optimize__STATE_VARIABLE_Instrs_0_43)));
                }
#line 478 "optimize.m"
              }
#line 478 "optimize.m"
          }
#line 478 "optimize.m"
      }
#line 478 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 479 "optimize.m"
      *ll_backend__optimize__Mod_21 = (MR_Integer) 0;
#line 478 "optimize.m"
    else
#line 481 "optimize.m"
      *ll_backend__optimize__Mod_21 = (MR_Integer) 1;
#line 484 "optimize.m"
    ll_backend__optimize__V_319_319 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__Statistics_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_320_320 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_321_321 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_322_322 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 1)));
#line 484 "optimize.m"
    ll_backend__optimize__V_323_323 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 484 "optimize.m"
    ll_backend__optimize__V_324_324 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_325_325 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_326_326 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_327_327 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_328_328 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_329_329 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_330_330 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_331_331 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_332_332 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_333_333 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_334_334 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_335_335 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_336_336 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_337_337 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 3)));
#line 484 "optimize.m"
    ll_backend__optimize__V_338_338 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 4)));
#line 484 "optimize.m"
    ll_backend__optimize__V_339_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 5)));
#line 484 "optimize.m"
    ll_backend__optimize__V_340_340 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 6)));
#line 484 "optimize.m"
    ll_backend__optimize__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 7)));
#line 485 "optimize.m"
    {
#line 485 "optimize.m"
      libs__file_util__maybe_report_stats_3_p_0(ll_backend__optimize__Statistics_38);
    }
#line 388 "optimize.m"
  }
#line 382 "optimize.m"
}

#line 352 "optimize.m"
static void MR_CALL 
ll_backend__optimize__optimize_repeat_11_p_0(
#line 352 "optimize.m"
  MR_Word ll_backend__optimize__Info_12,
#line 352 "optimize.m"
  MR_Integer ll_backend__optimize__CurIter_13,
#line 352 "optimize.m"
  MR_Word ll_backend__optimize__LayoutLabelSet_14,
#line 352 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_15,
#line 352 "optimize.m"
  MR_Word ll_backend__optimize__MayAlterRtti_16,
#line 352 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_23,
#line 352 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_24,
#line 352 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_25,
#line 352 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_26,
#line 352 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_27,
#line 352 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_28)
#line 352 "optimize.m"
{
#line 359 "optimize.m"
  while (MR_TRUE)
#line 359 "optimize.m"
    {
#line 359 "optimize.m"
      /* tailcall optimized into a loop */
#line 359 "optimize.m"
      {
#line 359 "optimize.m"
        MR_bool ll_backend__optimize__succeeded = (ll_backend__optimize__CurIter_13 > (MR_Integer) 0);

#line 359 "optimize.m"
        if (ll_backend__optimize__succeeded)
#line 360 "optimize.m"
          {
#line 360 "optimize.m"
            MR_Integer ll_backend__optimize__NextIter_20 = (ll_backend__optimize__CurIter_13 - (MR_Integer) 1);
#line 360 "optimize.m"
            MR_Word ll_backend__optimize__Final_21;
#line 360 "optimize.m"
            MR_Word ll_backend__optimize__Mod_22;
#line 360 "optimize.m"
            MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_31_31;
#line 360 "optimize.m"
            MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_32_32;
#line 360 "optimize.m"
            MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_33_33;

#line 361 "optimize.m"
            ll_backend__optimize__succeeded = (ll_backend__optimize__NextIter_20 == (MR_Integer) 0);
#line 361 "optimize.m"
            if (ll_backend__optimize__succeeded)
#line 362 "optimize.m"
              ll_backend__optimize__Final_21 = (MR_Integer) 1;
#line 361 "optimize.m"
            else
#line 364 "optimize.m"
              ll_backend__optimize__Final_21 = (MR_Integer) 0;
#line 366 "optimize.m"
            {
#line 366 "optimize.m"
              ll_backend__optimize__optimize_repeated_12_p_0(ll_backend__optimize__Info_12, ll_backend__optimize__Final_21, ll_backend__optimize__LayoutLabelSet_14, ll_backend__optimize__ProcLabel_15, ll_backend__optimize__MayAlterRtti_16, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_23, &ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_31_31, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_25, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_32_32, ll_backend__optimize__STATE_VARIABLE_Instrs_0_27, &ll_backend__optimize__STATE_VARIABLE_Instrs_33_33, &ll_backend__optimize__Mod_22);
            }
#line 372 "optimize.m"
#line 372 "optimize.m"
            switch (ll_backend__optimize__Mod_22) {
#line 372 "optimize.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 372 "optimize.m"
              case (MR_Integer) 0:
#line 373 "optimize.m"
                {
#line 373 "optimize.m"
                  *ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_24 = ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_31_31;
#line 373 "optimize.m"
                  *ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_26 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_32_32;
#line 373 "optimize.m"
                  *ll_backend__optimize__STATE_VARIABLE_Instrs_28 = ll_backend__optimize__STATE_VARIABLE_Instrs_33_33;
#line 373 "optimize.m"
                }
#line 372 "optimize.m"
                break;
#line 372 "optimize.m"
              case (MR_Integer) 1:
#line 370 "optimize.m"
                {
#line 370 "optimize.m"
                  /* direct tailcall eliminated */
#line 370 "optimize.m"
                  {
#line 370 "optimize.m"
                    MR_Integer ll_backend__optimize__CurIter__tmp_copy_13 = ll_backend__optimize__NextIter_20;
#line 370 "optimize.m"
                    MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0__tmp_copy_23 = ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_31_31;
#line 370 "optimize.m"
                    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0__tmp_copy_25 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_32_32;
#line 370 "optimize.m"
                    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0__tmp_copy_27 = ll_backend__optimize__STATE_VARIABLE_Instrs_33_33;

#line 370 "optimize.m"
                    ll_backend__optimize__STATE_VARIABLE_Instrs_0_27 = ll_backend__optimize__STATE_VARIABLE_Instrs_0__tmp_copy_27;
#line 370 "optimize.m"
                    ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_25 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0__tmp_copy_25;
#line 370 "optimize.m"
                    ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_23 = ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0__tmp_copy_23;
#line 370 "optimize.m"
                    ll_backend__optimize__CurIter_13 = ll_backend__optimize__CurIter__tmp_copy_13;
#line 370 "optimize.m"
                  }
#line 370 "optimize.m"
                  continue;
#line 370 "optimize.m"
                }
#line 372 "optimize.m"
                break;
#line 372 "optimize.m"
            }
#line 360 "optimize.m"
          }
#line 359 "optimize.m"
        else
#line 376 "optimize.m"
          {
#line 376 "optimize.m"
            *ll_backend__optimize__STATE_VARIABLE_Instrs_28 = ll_backend__optimize__STATE_VARIABLE_Instrs_0_27;
#line 376 "optimize.m"
            *ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_26 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_25;
#line 376 "optimize.m"
            *ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_24 = ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_23;
#line 376 "optimize.m"
          }
#line 359 "optimize.m"
      }
#line 359 "optimize.m"
      break;
#line 359 "optimize.m"
    }
#line 352 "optimize.m"
}

#line 317 "optimize.m"
static void MR_CALL 
ll_backend__optimize__optimize_initial_11_p_0(
#line 317 "optimize.m"
  MR_Word ll_backend__optimize__Info_12,
#line 317 "optimize.m"
  MR_Word ll_backend__optimize__LayoutLabelSet_13,
#line 317 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_14,
#line 317 "optimize.m"
  MR_Word ll_backend__optimize__CodeModel_15,
#line 317 "optimize.m"
  MR_Word ll_backend__optimize__MayAlterRtti_16,
#line 317 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_25,
#line 317 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_26,
#line 317 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_27,
#line 317 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_28,
#line 317 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_29,
#line 317 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_30)
#line 317 "optimize.m"
{
#line 323 "optimize.m"
  {
#line 323 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 323 "optimize.m"
    MR_String ll_backend__optimize__LabelStr_20;
#line 323 "optimize.m"
    MR_Word ll_backend__optimize__OptFrames_21;
#line 325 "optimize.m"
    MR_Word ll_backend__optimize__V_42_42;
#line 325 "optimize.m"
    MR_Word ll_backend__optimize__V_43_43;
#line 325 "optimize.m"
    MR_Word ll_backend__optimize__V_44_44;
#line 325 "optimize.m"
    MR_Word ll_backend__optimize__V_45_45;
#line 325 "optimize.m"
    MR_Integer ll_backend__optimize__V_46_46;
#line 325 "optimize.m"
    MR_Word ll_backend__optimize__V_47_47;
#line 325 "optimize.m"
    MR_Word ll_backend__optimize__V_48_48;
#line 325 "optimize.m"
    MR_Word ll_backend__optimize__V_49_49;
#line 325 "optimize.m"
    MR_Word ll_backend__optimize__V_50_50;
#line 325 "optimize.m"
    MR_Word ll_backend__optimize__V_51_51;
#line 325 "optimize.m"
    MR_Word ll_backend__optimize__V_52_52;
#line 325 "optimize.m"
    MR_Word ll_backend__optimize__V_53_53;
#line 325 "optimize.m"
    MR_Word ll_backend__optimize__V_54_54;
#line 325 "optimize.m"
    MR_Word ll_backend__optimize__V_55_55;
#line 325 "optimize.m"
    MR_Word ll_backend__optimize__V_56_56;
#line 325 "optimize.m"
    MR_Word ll_backend__optimize__V_57_57;
#line 325 "optimize.m"
    MR_Word ll_backend__optimize__V_58_58;
#line 325 "optimize.m"
    MR_Word ll_backend__optimize__V_59_59;
#line 325 "optimize.m"
    MR_Integer ll_backend__optimize__V_60_60;
#line 325 "optimize.m"
    MR_Integer ll_backend__optimize__V_61_61;
#line 325 "optimize.m"
    MR_Word ll_backend__optimize__V_62_62;
#line 325 "optimize.m"
    MR_Word ll_backend__optimize__V_63_63;
#line 325 "optimize.m"
    MR_Word ll_backend__optimize__V_64_64;

#line 324 "optimize.m"
    {
#line 324 "optimize.m"
      ll_backend__optimize__LabelStr_20 = ll_backend__opt_util__format_proc_label_1_f_0(ll_backend__optimize__ProcLabel_14);
    }
#line 325 "optimize.m"
    ll_backend__optimize__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 325 "optimize.m"
    ll_backend__optimize__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 325 "optimize.m"
    ll_backend__optimize__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 325 "optimize.m"
    ll_backend__optimize__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 325 "optimize.m"
    ll_backend__optimize__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 1)));
#line 325 "optimize.m"
    ll_backend__optimize__V_47_47 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 325 "optimize.m"
    ll_backend__optimize__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 325 "optimize.m"
    ll_backend__optimize__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 325 "optimize.m"
    ll_backend__optimize__OptFrames_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 325 "optimize.m"
    ll_backend__optimize__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 325 "optimize.m"
    ll_backend__optimize__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 325 "optimize.m"
    ll_backend__optimize__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 325 "optimize.m"
    ll_backend__optimize__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 325 "optimize.m"
    ll_backend__optimize__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 325 "optimize.m"
    ll_backend__optimize__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 325 "optimize.m"
    ll_backend__optimize__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 325 "optimize.m"
    ll_backend__optimize__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 325 "optimize.m"
    ll_backend__optimize__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 325 "optimize.m"
    ll_backend__optimize__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 325 "optimize.m"
    ll_backend__optimize__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 3)));
#line 325 "optimize.m"
    ll_backend__optimize__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 4)));
#line 325 "optimize.m"
    ll_backend__optimize__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 5)));
#line 325 "optimize.m"
    ll_backend__optimize__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 6)));
#line 325 "optimize.m"
    ll_backend__optimize__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 7)));
#line 327 "optimize.m"
    ll_backend__optimize__succeeded = (ll_backend__optimize__OptFrames_21 == (MR_Integer) 1);
#line 327 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 327 "optimize.m"
      {
#line 328 "optimize.m"
        ll_backend__optimize__succeeded = (ll_backend__optimize__MayAlterRtti_16 == (MR_Integer) 0);
#line 327 "optimize.m"
        if (ll_backend__optimize__succeeded)
#line 329 "optimize.m"
          ll_backend__optimize__succeeded = (ll_backend__optimize__CodeModel_15 == (MR_Integer) 2);
#line 327 "optimize.m"
      }
#line 326 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 331 "optimize.m"
      {
#line 331 "optimize.m"
        MR_Word ll_backend__optimize__VeryVerbose_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 331 "optimize.m"
        MR_Word ll_backend__optimize__V_65_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 331 "optimize.m"
        MR_Word ll_backend__optimize__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 331 "optimize.m"
        MR_Word ll_backend__optimize__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 331 "optimize.m"
        MR_Integer ll_backend__optimize__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 1)));
#line 331 "optimize.m"
        MR_Word ll_backend__optimize__V_69_69 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 331 "optimize.m"
        MR_Word ll_backend__optimize__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 331 "optimize.m"
        MR_Word ll_backend__optimize__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 331 "optimize.m"
        MR_Word ll_backend__optimize__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 331 "optimize.m"
        MR_Word ll_backend__optimize__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 331 "optimize.m"
        MR_Word ll_backend__optimize__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 331 "optimize.m"
        MR_Word ll_backend__optimize__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 331 "optimize.m"
        MR_Word ll_backend__optimize__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 331 "optimize.m"
        MR_Word ll_backend__optimize__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 331 "optimize.m"
        MR_Word ll_backend__optimize__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 331 "optimize.m"
        MR_Word ll_backend__optimize__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 331 "optimize.m"
        MR_Word ll_backend__optimize__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 331 "optimize.m"
        MR_Word ll_backend__optimize__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 331 "optimize.m"
        MR_Word ll_backend__optimize__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 331 "optimize.m"
        MR_Integer ll_backend__optimize__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 3)));
#line 331 "optimize.m"
        MR_Integer ll_backend__optimize__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 4)));
#line 331 "optimize.m"
        MR_Word ll_backend__optimize__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 5)));
#line 331 "optimize.m"
        MR_Word ll_backend__optimize__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 6)));
#line 331 "optimize.m"
        MR_Word ll_backend__optimize__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 7)));
#line 342 "optimize.m"
        MR_Word ll_backend__optimize___Mod_24;

#line 339 "optimize.m"
#line 339 "optimize.m"
        switch (ll_backend__optimize__VeryVerbose_22) {
#line 339 "optimize.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 339 "optimize.m"
          case (MR_Integer) 0:
#line 340 "optimize.m"
            {
#line 340 "optimize.m"
            }
#line 339 "optimize.m"
            break;
#line 339 "optimize.m"
          case (MR_Integer) 1:
#line 334 "optimize.m"
            {
#line 335 "optimize.m"
              {
#line 335 "optimize.m"
                mercury__io__write_string_3_p_0((MR_String) "% Optimizing nondet frames for ");
              }
#line 336 "optimize.m"
              {
#line 336 "optimize.m"
                mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_20);
              }
#line 337 "optimize.m"
              {
#line 337 "optimize.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
#line 334 "optimize.m"
            }
#line 339 "optimize.m"
            break;
#line 339 "optimize.m"
        }
#line 342 "optimize.m"
        {
#line 342 "optimize.m"
          ll_backend__frameopt__frameopt_keep_nondet_frame_7_p_0(ll_backend__optimize__ProcLabel_14, ll_backend__optimize__LayoutLabelSet_13, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_25, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_26, ll_backend__optimize__STATE_VARIABLE_Instrs_0_29, ll_backend__optimize__STATE_VARIABLE_Instrs_30, &ll_backend__optimize___Mod_24);
        }
#line 344 "optimize.m"
        {
#line 344 "optimize.m"
          ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_12, *ll_backend__optimize__STATE_VARIABLE_Instrs_30, *ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_26, (MR_String) "ndframeopt", (MR_String) "after nondet frame opt", ll_backend__optimize__ProcLabel_14, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_27, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_28);
        }
#line 331 "optimize.m"
      }
#line 326 "optimize.m"
    else
#line 347 "optimize.m"
      {
#line 347 "optimize.m"
        *ll_backend__optimize__STATE_VARIABLE_Instrs_30 = ll_backend__optimize__STATE_VARIABLE_Instrs_0_29;
#line 347 "optimize.m"
        *ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_28 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_27;
#line 347 "optimize.m"
        *ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_26 = ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_0_25;
#line 347 "optimize.m"
      }
#line 323 "optimize.m"
  }
#line 317 "optimize.m"
}

#line 254 "optimize.m"
static void MR_CALL 
ll_backend__optimize__maybe_opt_debug_8_p_0(
#line 254 "optimize.m"
  MR_Word ll_backend__optimize__Info_9,
#line 254 "optimize.m"
  MR_Word ll_backend__optimize__Instrs_10,
#line 254 "optimize.m"
  MR_Word ll_backend__optimize__Counter_11,
#line 254 "optimize.m"
  MR_String ll_backend__optimize__Suffix_12,
#line 254 "optimize.m"
  MR_String ll_backend__optimize__Msg_13,
#line 254 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_14,
#line 254 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37,
#line 254 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_38)
#line 254 "optimize.m"
{
#line 262 "optimize.m"
  {
#line 262 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;

#line 262 "optimize.m"
    if ((ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 312 "optimize.m"
      *ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_38 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37;
#line 262 "optimize.m"
    else
#line 262 "optimize.m"
      {
#line 262 "optimize.m"
        MR_String ll_backend__optimize__BaseName_16 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37, (MR_Integer) 0)));
#line 262 "optimize.m"
        MR_Integer ll_backend__optimize__OptNum0_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37, (MR_Integer) 1)));
#line 262 "optimize.m"
        MR_Integer ll_backend__optimize__PrevNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37, (MR_Integer) 3)));
#line 262 "optimize.m"
        MR_String ll_backend__optimize__PrevFileName_20 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37, (MR_Integer) 4)));
#line 262 "optimize.m"
        MR_Word ll_backend__optimize__PrevInstrs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37, (MR_Integer) 5)));
#line 262 "optimize.m"
        MR_Integer ll_backend__optimize__OptNum_22 = (ll_backend__optimize__OptNum0_17 + (MR_Integer) 1);
#line 262 "optimize.m"
        MR_String ll_backend__optimize__OptFileName_23;
#line 262 "optimize.m"
        MR_String ll_backend__optimize__DiffFileName_24;
#line 262 "optimize.m"
        MR_Word ll_backend__optimize__Same_25;
#line 262 "optimize.m"
        MR_String ll_backend__optimize__V_40_40;
#line 262 "optimize.m"
        MR_String ll_backend__optimize__V_42_42;
#line 262 "optimize.m"
        MR_String ll_backend__optimize__V_43_43;
#line 262 "optimize.m"
        MR_String ll_backend__optimize__V_44_44;
#line 262 "optimize.m"
        MR_String ll_backend__optimize__V_46_46;
#line 262 "optimize.m"
        MR_String ll_backend__optimize__V_48_48;
#line 262 "optimize.m"
        MR_String ll_backend__optimize__V_49_49;
#line 262 "optimize.m"
        MR_String ll_backend__optimize__V_50_50;
#line 261 "optimize.m"
        MR_String ll_backend__optimize___OptFileName0_18 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37, (MR_Integer) 2)));
#line 277 "optimize.m"
        MR_Word ll_backend__optimize__Res_27;

#line 264 "optimize.m"
        {
#line 264 "optimize.m"
          ll_backend__optimize__V_43_43 = ll_backend__optimize__num_to_str_1_f_0(ll_backend__optimize__OptNum_22);
        }
#line 265 "optimize.m"
        {
#line 265 "optimize.m"
          ll_backend__optimize__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) ".", ll_backend__optimize__Suffix_12);
        }
#line 265 "optimize.m"
        {
#line 265 "optimize.m"
          ll_backend__optimize__V_42_42 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__V_43_43, ll_backend__optimize__V_44_44);
        }
#line 264 "optimize.m"
        {
#line 264 "optimize.m"
          ll_backend__optimize__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) ".opt", ll_backend__optimize__V_42_42);
        }
#line 264 "optimize.m"
        {
#line 264 "optimize.m"
          ll_backend__optimize__OptFileName_23 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__BaseName_16, ll_backend__optimize__V_40_40);
        }
#line 266 "optimize.m"
        {
#line 266 "optimize.m"
          ll_backend__optimize__V_49_49 = ll_backend__optimize__num_to_str_1_f_0(ll_backend__optimize__OptNum_22);
        }
#line 267 "optimize.m"
        {
#line 267 "optimize.m"
          ll_backend__optimize__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) ".", ll_backend__optimize__Suffix_12);
        }
#line 267 "optimize.m"
        {
#line 267 "optimize.m"
          ll_backend__optimize__V_48_48 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__V_49_49, ll_backend__optimize__V_50_50);
        }
#line 266 "optimize.m"
        {
#line 266 "optimize.m"
          ll_backend__optimize__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) ".diff", ll_backend__optimize__V_48_48);
        }
#line 266 "optimize.m"
        {
#line 266 "optimize.m"
          ll_backend__optimize__DiffFileName_24 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__BaseName_16, ll_backend__optimize__V_46_46);
        }
#line 268 "optimize.m"
        {
#line 268 "optimize.m"
          ll_backend__optimize__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__optimize_scalar_common_1[1], ((MR_Box) (ll_backend__optimize__Instrs_10)), ((MR_Box) (ll_backend__optimize__PrevInstrs_21)));
        }
#line 268 "optimize.m"
        if (ll_backend__optimize__succeeded)
#line 269 "optimize.m"
          {
#line 269 "optimize.m"
            ll_backend__optimize__Same_25 = (MR_Integer) 1;
#line 270 "optimize.m"
            {
#line 270 "optimize.m"
              MR_Word base;
#line 270 "optimize.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 270 "optimize.m"
              *ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_38 = base;
#line 270 "optimize.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__optimize__BaseName_16));
#line 270 "optimize.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__optimize__OptNum_22));
#line 270 "optimize.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ll_backend__optimize__OptFileName_23));
#line 270 "optimize.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ll_backend__optimize__PrevNum_19));
#line 270 "optimize.m"
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (ll_backend__optimize__PrevFileName_20));
#line 270 "optimize.m"
              MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (ll_backend__optimize__Instrs_10));
#line 270 "optimize.m"
            }
#line 269 "optimize.m"
          }
#line 268 "optimize.m"
        else
#line 273 "optimize.m"
          {
#line 273 "optimize.m"
            ll_backend__optimize__Same_25 = (MR_Integer) 0;
#line 274 "optimize.m"
            {
#line 274 "optimize.m"
              MR_Word base;
#line 274 "optimize.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 274 "optimize.m"
              *ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_38 = base;
#line 274 "optimize.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__optimize__BaseName_16));
#line 274 "optimize.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__optimize__OptNum_22));
#line 274 "optimize.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ll_backend__optimize__OptFileName_23));
#line 274 "optimize.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ll_backend__optimize__OptNum_22));
#line 274 "optimize.m"
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (ll_backend__optimize__OptFileName_23));
#line 274 "optimize.m"
              MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (ll_backend__optimize__Instrs_10));
#line 274 "optimize.m"
            }
#line 273 "optimize.m"
          }
#line 278 "optimize.m"
        {
#line 278 "optimize.m"
          mercury__io__open_output_4_p_0(ll_backend__optimize__OptFileName_23, &ll_backend__optimize__Res_27);
        }
#line 5546 "ll_backend.optimize.c"
        if (((MR_tag((MR_Word) ll_backend__optimize__Res_27)) == (MR_mktag((MR_Integer) 1))))
#line 5548 "ll_backend.optimize.c"
          {
#line 5550 "ll_backend.optimize.c"
            MR_String ll_backend__optimize__V_60_60;

#line 297 "optimize.m"
            {
#line 297 "optimize.m"
              ll_backend__optimize__V_60_60 = mercury__string__f_43_43_2_f_0((MR_String) "cannot open ", ll_backend__optimize__OptFileName_23);
            }
#line 297 "optimize.m"
            {
#line 297 "optimize.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.optimize", (MR_String) "predicate \140ll_backend.optimize.maybe_opt_debug\'/8", ll_backend__optimize__V_60_60);
#line 297 "optimize.m"
              return;
            }
#line 5565 "ll_backend.optimize.c"
          }
#line 5567 "ll_backend.optimize.c"
        else
#line 5569 "ll_backend.optimize.c"
          {
#line 5571 "ll_backend.optimize.c"
            MR_Word ll_backend__optimize__FileStream_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Res_27, (MR_Integer) 0)));
#line 5573 "ll_backend.optimize.c"
            MR_Word ll_backend__optimize__OutputStream_29;
#line 5575 "ll_backend.optimize.c"
            MR_Integer ll_backend__optimize__NextLabel_30;
#line 282 "optimize.m"
            MR_Word ll_backend__optimize__V_31_31;

#line 281 "optimize.m"
            {
#line 281 "optimize.m"
              mercury__io__set_output_stream_4_p_0(ll_backend__optimize__FileStream_28, &ll_backend__optimize__OutputStream_29);
            }
#line 282 "optimize.m"
            {
#line 282 "optimize.m"
              mercury__counter__allocate_3_p_0(&ll_backend__optimize__NextLabel_30, ll_backend__optimize__Counter_11, &ll_backend__optimize__V_31_31);
            }
#line 283 "optimize.m"
            {
#line 283 "optimize.m"
              ll_backend__opt_debug__msg_5_p_0((MR_Integer) 1, ll_backend__optimize__NextLabel_30, ll_backend__optimize__Msg_13);
            }
#line 5595 "ll_backend.optimize.c"
#line 5596 "ll_backend.optimize.c"
            switch (ll_backend__optimize__Same_25) {
#line 5598 "ll_backend.optimize.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 5600 "ll_backend.optimize.c"
              case (MR_Integer) 0:
#line 5602 "ll_backend.optimize.c"
                {
#line 5604 "ll_backend.optimize.c"
                  MR_Word ll_backend__optimize__AutoComments_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 5606 "ll_backend.optimize.c"
                  MR_String ll_backend__optimize__DiffCommand_35;
#line 5608 "ll_backend.optimize.c"
                  MR_Word ll_backend__optimize__V_66_66;
#line 5610 "ll_backend.optimize.c"
                  MR_String ll_backend__optimize__V_73_73;
#line 5612 "ll_backend.optimize.c"
                  MR_String ll_backend__optimize__V_74_74;
#line 5614 "ll_backend.optimize.c"
                  MR_String ll_backend__optimize__V_76_76;
#line 5616 "ll_backend.optimize.c"
                  MR_String ll_backend__optimize__V_77_77;
#line 5618 "ll_backend.optimize.c"
                  MR_String ll_backend__optimize__V_79_79;
#line 289 "optimize.m"
                  MR_Word ll_backend__optimize__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 289 "optimize.m"
                  MR_Word ll_backend__optimize__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 289 "optimize.m"
                  MR_Word ll_backend__optimize__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 289 "optimize.m"
                  MR_Integer ll_backend__optimize__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 1)));
#line 289 "optimize.m"
                  MR_Word ll_backend__optimize__V_86_86 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 289 "optimize.m"
                  MR_Word ll_backend__optimize__V_87_87 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 289 "optimize.m"
                  MR_Word ll_backend__optimize__V_88_88 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 289 "optimize.m"
                  MR_Word ll_backend__optimize__V_89_89 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 289 "optimize.m"
                  MR_Word ll_backend__optimize__V_90_90 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 289 "optimize.m"
                  MR_Word ll_backend__optimize__V_91_91 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 289 "optimize.m"
                  MR_Word ll_backend__optimize__V_92_92 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 289 "optimize.m"
                  MR_Word ll_backend__optimize__V_93_93 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 289 "optimize.m"
                  MR_Word ll_backend__optimize__V_94_94 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 289 "optimize.m"
                  MR_Word ll_backend__optimize__V_95_95 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 289 "optimize.m"
                  MR_Word ll_backend__optimize__V_96_96 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 289 "optimize.m"
                  MR_Word ll_backend__optimize__V_97_97 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 289 "optimize.m"
                  MR_Word ll_backend__optimize__V_98_98 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 289 "optimize.m"
                  MR_Word ll_backend__optimize__V_99_99 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 289 "optimize.m"
                  MR_Integer ll_backend__optimize__V_100_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 3)));
#line 289 "optimize.m"
                  MR_Integer ll_backend__optimize__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 4)));
#line 289 "optimize.m"
                  MR_Word ll_backend__optimize__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 5)));
#line 289 "optimize.m"
                  MR_Word ll_backend__optimize__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 6)));
#line 289 "optimize.m"
                  MR_Word ll_backend__optimize__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 7)));
#line 293 "optimize.m"
                  MR_Word ll_backend__optimize__V_33_33;
#line 308 "optimize.m"
                  MR_Word ll_backend__optimize__V_36_36;

#line 291 "optimize.m"
                  {
#line 291 "optimize.m"
                    ll_backend__optimize__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 291 "optimize.m"
                    MR_hl_field(MR_mktag(1), ll_backend__optimize__V_66_66, 0) = ((MR_Box) (ll_backend__optimize__ProcLabel_14));
#line 291 "optimize.m"
                  }
#line 290 "optimize.m"
                  {
#line 290 "optimize.m"
                    ll_backend__opt_debug__maybe_write_instrs_6_p_0((MR_Integer) 1, ll_backend__optimize__AutoComments_32, ll_backend__optimize__V_66_66, ll_backend__optimize__Instrs_10);
                  }
#line 293 "optimize.m"
                  {
#line 293 "optimize.m"
                    mercury__io__set_output_stream_4_p_0(ll_backend__optimize__OutputStream_29, &ll_backend__optimize__V_33_33);
                  }
#line 294 "optimize.m"
                  {
#line 294 "optimize.m"
                    mercury__io__close_output_3_p_0(ll_backend__optimize__FileStream_28);
                  }
#line 307 "optimize.m"
                  {
#line 307 "optimize.m"
                    ll_backend__optimize__V_79_79 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__DiffFileName_24, (MR_String) "\'");
                  }
#line 307 "optimize.m"
                  {
#line 307 "optimize.m"
                    ll_backend__optimize__V_77_77 = mercury__string__f_43_43_2_f_0((MR_String) "\' > \'", ll_backend__optimize__V_79_79);
                  }
#line 307 "optimize.m"
                  {
#line 307 "optimize.m"
                    ll_backend__optimize__V_76_76 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__OptFileName_23, ll_backend__optimize__V_77_77);
                  }
#line 306 "optimize.m"
                  {
#line 306 "optimize.m"
                    ll_backend__optimize__V_74_74 = mercury__string__f_43_43_2_f_0((MR_String) "\' \'", ll_backend__optimize__V_76_76);
                  }
#line 306 "optimize.m"
                  {
#line 306 "optimize.m"
                    ll_backend__optimize__V_73_73 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__PrevFileName_20, ll_backend__optimize__V_74_74);
                  }
#line 306 "optimize.m"
                  {
#line 306 "optimize.m"
                    ll_backend__optimize__DiffCommand_35 = mercury__string__f_43_43_2_f_0((MR_String) "diff -u \'", ll_backend__optimize__V_73_73);
                  }
#line 308 "optimize.m"
                  {
#line 308 "optimize.m"
                    mercury__io__call_system_4_p_0(ll_backend__optimize__DiffCommand_35, &ll_backend__optimize__V_36_36);
                  }
#line 5729 "ll_backend.optimize.c"
                }
#line 5731 "ll_backend.optimize.c"
                break;
#line 5733 "ll_backend.optimize.c"
              case (MR_Integer) 1:
#line 5735 "ll_backend.optimize.c"
                {
#line 293 "optimize.m"
                  MR_Word ll_backend__optimize__V_106_106;

#line 286 "optimize.m"
                  {
#line 286 "optimize.m"
                    mercury__io__write_string_3_p_0((MR_String) "same as previous version\n");
                  }
#line 293 "optimize.m"
                  {
#line 293 "optimize.m"
                    mercury__io__set_output_stream_4_p_0(ll_backend__optimize__OutputStream_29, &ll_backend__optimize__V_106_106);
                  }
#line 294 "optimize.m"
                  {
#line 294 "optimize.m"
                    mercury__io__close_output_3_p_0(ll_backend__optimize__FileStream_28);
                  }
#line 5755 "ll_backend.optimize.c"
                }
#line 5757 "ll_backend.optimize.c"
                break;
#line 5759 "ll_backend.optimize.c"
            }
#line 5761 "ll_backend.optimize.c"
          }
#line 262 "optimize.m"
      }
#line 262 "optimize.m"
  }
#line 254 "optimize.m"
}

#line 245 "optimize.m"
static MR_String MR_CALL 
ll_backend__optimize__num_to_str_1_f_0(
#line 245 "optimize.m"
  MR_Integer ll_backend__optimize__N_3)
#line 245 "optimize.m"
{
#line 247 "optimize.m"
  {
#line 247 "optimize.m"
    MR_bool ll_backend__optimize__succeeded = (ll_backend__optimize__N_3 < (MR_Integer) 10);
#line 247 "optimize.m"
    MR_String ll_backend__optimize__HeadVar__2_2;

#line 247 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 249 "optimize.m"
      {
#line 249 "optimize.m"
        MR_String ll_backend__optimize__V_6_6;

#line 249 "optimize.m"
        {
#line 249 "optimize.m"
          ll_backend__optimize__V_6_6 = mercury__string__int_to_string_1_f_0(ll_backend__optimize__N_3);
        }
#line 249 "optimize.m"
        {
#line 249 "optimize.m"
          ll_backend__optimize__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "0", ll_backend__optimize__V_6_6);
        }
#line 249 "optimize.m"
      }
#line 247 "optimize.m"
    else
#line 251 "optimize.m"
      {
#line 251 "optimize.m"
        ll_backend__optimize__HeadVar__2_2 = mercury__string__int_to_string_1_f_0(ll_backend__optimize__N_3);
      }
#line 247 "optimize.m"
    return ll_backend__optimize__HeadVar__2_2;
#line 247 "optimize.m"
  }
#line 245 "optimize.m"
}

#line 241 "optimize.m"
static MR_String MR_CALL 
ll_backend__optimize__opt_subdir_name_0_f_0(void)
#line 241 "optimize.m"
{
#line 243 "optimize.m"
  {
#line 243 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;

#line 243 "optimize.m"
    return (MR_String) "OptSubdir";
#line 243 "optimize.m"
  }
#line 241 "optimize.m"
}

#line 216 "optimize.m"
static void MR_CALL 
ll_backend__optimize__output_first_opt_debug_7_p_0(
#line 216 "optimize.m"
  MR_Word ll_backend__optimize__Info_8,
#line 216 "optimize.m"
  MR_String ll_backend__optimize__FileName_9,
#line 216 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_10,
#line 216 "optimize.m"
  MR_Word ll_backend__optimize__Instrs0_11,
#line 216 "optimize.m"
  MR_Word ll_backend__optimize__Counter_12)
#line 216 "optimize.m"
{
#line 219 "optimize.m"
  {
#line 219 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 219 "optimize.m"
    MR_Word ll_backend__optimize__MkdirRes_14;
#line 221 "optimize.m"
    MR_Integer ll_backend__optimize__V_29_29;

#line 220 "optimize.m"
    {
#line 220 "optimize.m"
      mercury__io__call_system_4_p_0((MR_String) "mkdir -p OptSubdir", &ll_backend__optimize__MkdirRes_14);
    }
#line 221 "optimize.m"
    ll_backend__optimize__succeeded = ((MR_tag((MR_Word) ll_backend__optimize__MkdirRes_14)) == (MR_mktag((MR_Integer) 0)));
#line 221 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 221 "optimize.m"
      {
#line 221 "optimize.m"
        ll_backend__optimize__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__MkdirRes_14, (MR_Integer) 0)));
#line 221 "optimize.m"
        ll_backend__optimize__succeeded = (ll_backend__optimize__V_29_29 == (MR_Integer) 0);
#line 221 "optimize.m"
      }
#line 221 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 222 "optimize.m"
      {
#line 222 "optimize.m"
        MR_Word ll_backend__optimize__Res_15;

#line 222 "optimize.m"
        {
#line 222 "optimize.m"
          mercury__io__open_output_4_p_0(ll_backend__optimize__FileName_9, &ll_backend__optimize__Res_15);
        }
#line 233 "optimize.m"
        if (((MR_tag((MR_Word) ll_backend__optimize__Res_15)) == (MR_mktag((MR_Integer) 1))))
#line 234 "optimize.m"
          {
#line 234 "optimize.m"
            MR_String ll_backend__optimize__V_33_33;

#line 235 "optimize.m"
            {
#line 235 "optimize.m"
              ll_backend__optimize__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "cannot open ", ll_backend__optimize__FileName_9);
            }
#line 235 "optimize.m"
            {
#line 235 "optimize.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.optimize", (MR_String) "predicate \140ll_backend.optimize.output_first_opt_debug\'/7", ll_backend__optimize__V_33_33);
#line 235 "optimize.m"
              return;
            }
#line 234 "optimize.m"
          }
#line 233 "optimize.m"
        else
#line 224 "optimize.m"
          {
#line 224 "optimize.m"
            MR_Word ll_backend__optimize__FileStream_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Res_15, (MR_Integer) 0)));
#line 224 "optimize.m"
            MR_Word ll_backend__optimize__OutputStream_17;
#line 224 "optimize.m"
            MR_Integer ll_backend__optimize__NextLabel_18;
#line 224 "optimize.m"
            MR_Word ll_backend__optimize__AutoComments_20;
#line 224 "optimize.m"
            MR_Word ll_backend__optimize__V_40_40;
#line 226 "optimize.m"
            MR_Word ll_backend__optimize__V_19_19;
#line 228 "optimize.m"
            MR_Word ll_backend__optimize__V_49_49;
#line 228 "optimize.m"
            MR_Word ll_backend__optimize__V_50_50;
#line 228 "optimize.m"
            MR_Word ll_backend__optimize__V_51_51;
#line 228 "optimize.m"
            MR_Integer ll_backend__optimize__V_52_52;
#line 228 "optimize.m"
            MR_Word ll_backend__optimize__V_53_53;
#line 228 "optimize.m"
            MR_Word ll_backend__optimize__V_54_54;
#line 228 "optimize.m"
            MR_Word ll_backend__optimize__V_55_55;
#line 228 "optimize.m"
            MR_Word ll_backend__optimize__V_56_56;
#line 228 "optimize.m"
            MR_Word ll_backend__optimize__V_57_57;
#line 228 "optimize.m"
            MR_Word ll_backend__optimize__V_58_58;
#line 228 "optimize.m"
            MR_Word ll_backend__optimize__V_59_59;
#line 228 "optimize.m"
            MR_Word ll_backend__optimize__V_60_60;
#line 228 "optimize.m"
            MR_Word ll_backend__optimize__V_61_61;
#line 228 "optimize.m"
            MR_Word ll_backend__optimize__V_62_62;
#line 228 "optimize.m"
            MR_Word ll_backend__optimize__V_63_63;
#line 228 "optimize.m"
            MR_Word ll_backend__optimize__V_64_64;
#line 228 "optimize.m"
            MR_Word ll_backend__optimize__V_65_65;
#line 228 "optimize.m"
            MR_Word ll_backend__optimize__V_66_66;
#line 228 "optimize.m"
            MR_Integer ll_backend__optimize__V_67_67;
#line 228 "optimize.m"
            MR_Integer ll_backend__optimize__V_68_68;
#line 228 "optimize.m"
            MR_Word ll_backend__optimize__V_69_69;
#line 228 "optimize.m"
            MR_Word ll_backend__optimize__V_70_70;
#line 228 "optimize.m"
            MR_Word ll_backend__optimize__V_71_71;
#line 231 "optimize.m"
            MR_Word ll_backend__optimize__V_21_21;

#line 225 "optimize.m"
            {
#line 225 "optimize.m"
              mercury__io__set_output_stream_4_p_0(ll_backend__optimize__FileStream_16, &ll_backend__optimize__OutputStream_17);
            }
#line 226 "optimize.m"
            {
#line 226 "optimize.m"
              mercury__counter__allocate_3_p_0(&ll_backend__optimize__NextLabel_18, ll_backend__optimize__Counter_12, &ll_backend__optimize__V_19_19);
            }
#line 227 "optimize.m"
            {
#line 227 "optimize.m"
              ll_backend__opt_debug__msg_5_p_0((MR_Integer) 1, ll_backend__optimize__NextLabel_18, (MR_String) "before optimization");
            }
#line 228 "optimize.m"
            ll_backend__optimize__AutoComments_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 228 "optimize.m"
            ll_backend__optimize__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 228 "optimize.m"
            ll_backend__optimize__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 228 "optimize.m"
            ll_backend__optimize__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 228 "optimize.m"
            ll_backend__optimize__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 1)));
#line 228 "optimize.m"
            ll_backend__optimize__V_53_53 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 228 "optimize.m"
            ll_backend__optimize__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 228 "optimize.m"
            ll_backend__optimize__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 228 "optimize.m"
            ll_backend__optimize__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 228 "optimize.m"
            ll_backend__optimize__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 228 "optimize.m"
            ll_backend__optimize__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 228 "optimize.m"
            ll_backend__optimize__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 228 "optimize.m"
            ll_backend__optimize__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 228 "optimize.m"
            ll_backend__optimize__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 228 "optimize.m"
            ll_backend__optimize__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 228 "optimize.m"
            ll_backend__optimize__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 228 "optimize.m"
            ll_backend__optimize__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 228 "optimize.m"
            ll_backend__optimize__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 228 "optimize.m"
            ll_backend__optimize__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 228 "optimize.m"
            ll_backend__optimize__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 3)));
#line 228 "optimize.m"
            ll_backend__optimize__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 4)));
#line 228 "optimize.m"
            ll_backend__optimize__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 5)));
#line 228 "optimize.m"
            ll_backend__optimize__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 6)));
#line 228 "optimize.m"
            ll_backend__optimize__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 7)));
#line 230 "optimize.m"
            {
#line 230 "optimize.m"
              ll_backend__optimize__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 230 "optimize.m"
              MR_hl_field(MR_mktag(1), ll_backend__optimize__V_40_40, 0) = ((MR_Box) (ll_backend__optimize__ProcLabel_10));
#line 230 "optimize.m"
            }
#line 229 "optimize.m"
            {
#line 229 "optimize.m"
              ll_backend__opt_debug__maybe_write_instrs_6_p_0((MR_Integer) 1, ll_backend__optimize__AutoComments_20, ll_backend__optimize__V_40_40, ll_backend__optimize__Instrs0_11);
            }
#line 231 "optimize.m"
            {
#line 231 "optimize.m"
              mercury__io__set_output_stream_4_p_0(ll_backend__optimize__OutputStream_17, &ll_backend__optimize__V_21_21);
            }
#line 232 "optimize.m"
            {
#line 232 "optimize.m"
              mercury__io__close_output_3_p_0(ll_backend__optimize__FileStream_16);
            }
#line 224 "optimize.m"
          }
#line 222 "optimize.m"
      }
#line 221 "optimize.m"
    else
#line 238 "optimize.m"
      {
#line 238 "optimize.m"
        {
#line 238 "optimize.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.optimize", (MR_String) "predicate \140ll_backend.optimize.output_first_opt_debug\'/7", (MR_String) "cannot make OptSubdir");
#line 238 "optimize.m"
          return;
        }
#line 238 "optimize.m"
      }
#line 219 "optimize.m"
  }
#line 216 "optimize.m"
}

#line 194 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_1(
#line 194 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg)
#line 194 "optimize.m"
{
#line 194 "optimize.m"
  {
#line 194 "optimize.m"
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * ll_backend__optimize__env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) ll_backend__optimize__env_ptr_arg;

#line 194 "optimize.m"
    MR_builtin_longjmp((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__commit_0, 1);
#line 194 "optimize.m"
  }
#line 194 "optimize.m"
}

#line 194 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_3(
#line 194 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg)
#line 194 "optimize.m"
{
#line 194 "optimize.m"
  {
#line 194 "optimize.m"
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * ll_backend__optimize__env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) ll_backend__optimize__env_ptr_arg;

#line 194 "optimize.m"
    (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStr_47 = ((MR_String) (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__conv0_DebugOptPredIdStr_47);
#line 194 "optimize.m"
    {
#line 194 "optimize.m"
      ll_backend__optimize__need_opt_debug_info_5_p_0_2(ll_backend__optimize__env_ptr);
    }
#line 194 "optimize.m"
  }
#line 194 "optimize.m"
}

#line 194 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_2(
#line 194 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg)
#line 194 "optimize.m"
{
#line 194 "optimize.m"
  {
#line 194 "optimize.m"
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * ll_backend__optimize__env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) ll_backend__optimize__env_ptr_arg;

#line 195 "optimize.m"
    {
#line 195 "optimize.m"
      (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = mercury__string__to_int_2_p_0((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStr_47, &(ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredId_48);
    }
#line 194 "optimize.m"
    if ((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded)
#line 194 "optimize.m"
      {
#line 196 "optimize.m"
        (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = ((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredId_48 == (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__PredIdInt_16);
#line 196 "optimize.m"
        if ((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded)
#line 196 "optimize.m"
          {
#line 196 "optimize.m"
            ll_backend__optimize__need_opt_debug_info_5_p_0_1(ll_backend__optimize__env_ptr);
          }
#line 194 "optimize.m"
      }
#line 194 "optimize.m"
  }
#line 194 "optimize.m"
}

#line 194 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_4(
#line 194 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg)
#line 194 "optimize.m"
{
#line 194 "optimize.m"
  {
#line 194 "optimize.m"
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * ll_backend__optimize__env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) ll_backend__optimize__env_ptr_arg;

#line 194 "optimize.m"
    if (MR_builtin_setjmp((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__commit_0) == 0)
#line 194 "optimize.m"
      {
#line 194 "optimize.m"
        {
#line 194 "optimize.m"
          {
#line 194 "optimize.m"
            mercury__list__member_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &(ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__conv0_DebugOptPredIdStr_47, (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStrs_12, ll_backend__optimize__need_opt_debug_info_5_p_0_3, ll_backend__optimize__env_ptr);
          }
#line 194 "optimize.m"
        }
#line 194 "optimize.m"
        (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = MR_FALSE;
#line 194 "optimize.m"
      }
#line 194 "optimize.m"
    else
#line 194 "optimize.m"
      (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = MR_TRUE;
#line 194 "optimize.m"
  }
#line 194 "optimize.m"
}

#line 183 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_5(
#line 183 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg)
#line 183 "optimize.m"
{
#line 183 "optimize.m"
  {
#line 183 "optimize.m"
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * ll_backend__optimize__env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) ll_backend__optimize__env_ptr_arg;

#line 183 "optimize.m"
    MR_builtin_longjmp((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__commit_1, 1);
#line 183 "optimize.m"
  }
#line 183 "optimize.m"
}

#line 183 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_7(
#line 183 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg)
#line 183 "optimize.m"
{
#line 183 "optimize.m"
  {
#line 183 "optimize.m"
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * ll_backend__optimize__env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) ll_backend__optimize__env_ptr_arg;

#line 183 "optimize.m"
    (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStr_45 = ((MR_String) (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__conv1_DebugOptPredIdStr_45);
#line 183 "optimize.m"
    {
#line 183 "optimize.m"
      ll_backend__optimize__need_opt_debug_info_5_p_0_6(ll_backend__optimize__env_ptr);
    }
#line 183 "optimize.m"
  }
#line 183 "optimize.m"
}

#line 183 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_6(
#line 183 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg)
#line 183 "optimize.m"
{
#line 183 "optimize.m"
  {
#line 183 "optimize.m"
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * ll_backend__optimize__env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) ll_backend__optimize__env_ptr_arg;

#line 184 "optimize.m"
    {
#line 184 "optimize.m"
      (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = mercury__string__to_int_2_p_0((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStr_45, &(ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredId_46);
    }
#line 183 "optimize.m"
    if ((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded)
#line 183 "optimize.m"
      {
#line 185 "optimize.m"
        (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = ((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredId_46 == (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__PredIdInt_16);
#line 185 "optimize.m"
        if ((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded)
#line 185 "optimize.m"
          {
#line 185 "optimize.m"
            ll_backend__optimize__need_opt_debug_info_5_p_0_5(ll_backend__optimize__env_ptr);
          }
#line 183 "optimize.m"
      }
#line 183 "optimize.m"
  }
#line 183 "optimize.m"
}

#line 183 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_8(
#line 183 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg)
#line 183 "optimize.m"
{
#line 183 "optimize.m"
  {
#line 183 "optimize.m"
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * ll_backend__optimize__env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) ll_backend__optimize__env_ptr_arg;

#line 183 "optimize.m"
    if (MR_builtin_setjmp((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__commit_1) == 0)
#line 183 "optimize.m"
      {
#line 183 "optimize.m"
        {
#line 183 "optimize.m"
          {
#line 183 "optimize.m"
            mercury__list__member_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &(ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__conv1_DebugOptPredIdStr_45, (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStrs_12, ll_backend__optimize__need_opt_debug_info_5_p_0_7, ll_backend__optimize__env_ptr);
          }
#line 183 "optimize.m"
        }
#line 183 "optimize.m"
        (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = MR_FALSE;
#line 183 "optimize.m"
      }
#line 183 "optimize.m"
    else
#line 183 "optimize.m"
      (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = MR_TRUE;
#line 183 "optimize.m"
  }
#line 183 "optimize.m"
}

#line 166 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0(
#line 166 "optimize.m"
  MR_Word ll_backend__optimize__Info_6,
#line 166 "optimize.m"
  MR_String ll_backend__optimize__Name_7,
#line 166 "optimize.m"
  MR_Integer ll_backend__optimize__Arity_8,
#line 166 "optimize.m"
  MR_Word ll_backend__optimize__PredProcId_9,
#line 166 "optimize.m"
  MR_Word * ll_backend__optimize__MaybeBaseName_10)
#line 166 "optimize.m"
{
#line 166 "optimize.m"
  {
#line 166 "optimize.m"
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s ll_backend__optimize__env;

#line 169 "optimize.m"
    {
#line 169 "optimize.m"
      MR_Word ll_backend__optimize__DebugOpt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 5)));
#line 169 "optimize.m"
      MR_Word ll_backend__optimize__DebugOptPredNames_13;
#line 169 "optimize.m"
      MR_Word ll_backend__optimize__PredId_14;
#line 169 "optimize.m"
      MR_Integer ll_backend__optimize__ProcId_15;
#line 169 "optimize.m"
      MR_Integer ll_backend__optimize__ProcIdInt_17;
#line 170 "optimize.m"
      MR_Word ll_backend__optimize__V_49_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 170 "optimize.m"
      MR_Word ll_backend__optimize__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 170 "optimize.m"
      MR_Word ll_backend__optimize__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 170 "optimize.m"
      MR_Word ll_backend__optimize__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 170 "optimize.m"
      MR_Integer ll_backend__optimize__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 1)));
#line 170 "optimize.m"
      MR_Word ll_backend__optimize__V_54_54 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 170 "optimize.m"
      MR_Word ll_backend__optimize__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 170 "optimize.m"
      MR_Word ll_backend__optimize__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 170 "optimize.m"
      MR_Word ll_backend__optimize__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 170 "optimize.m"
      MR_Word ll_backend__optimize__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 170 "optimize.m"
      MR_Word ll_backend__optimize__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 170 "optimize.m"
      MR_Word ll_backend__optimize__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 170 "optimize.m"
      MR_Word ll_backend__optimize__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 170 "optimize.m"
      MR_Word ll_backend__optimize__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 170 "optimize.m"
      MR_Word ll_backend__optimize__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 170 "optimize.m"
      MR_Word ll_backend__optimize__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 170 "optimize.m"
      MR_Word ll_backend__optimize__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 170 "optimize.m"
      MR_Word ll_backend__optimize__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 170 "optimize.m"
      MR_Word ll_backend__optimize__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 170 "optimize.m"
      MR_Integer ll_backend__optimize__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 3)));
#line 170 "optimize.m"
      MR_Integer ll_backend__optimize__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 4)));

#line 170 "optimize.m"
      (ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStrs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 6)));
#line 170 "optimize.m"
      ll_backend__optimize__DebugOptPredNames_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 7)));
#line 173 "optimize.m"
      ll_backend__optimize__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__PredProcId_9, (MR_Integer) 0)));
#line 173 "optimize.m"
      ll_backend__optimize__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__PredProcId_9, (MR_Integer) 1)));
#line 174 "optimize.m"
      {
#line 174 "optimize.m"
        hlds__hlds_pred__pred_id_to_int_2_p_0(ll_backend__optimize__PredId_14, &(ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__PredIdInt_16);
      }
#line 175 "optimize.m"
      {
#line 175 "optimize.m"
        hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__optimize__ProcId_15, &ll_backend__optimize__ProcIdInt_17);
      }
#line 177 "optimize.m"
      (ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = (ll_backend__optimize__DebugOpt_11 == (MR_Integer) 1);
#line 177 "optimize.m"
      if ((ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded)
#line 190 "optimize.m"
        {
#line 190 "optimize.m"
          if (((ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStrs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 190 "optimize.m"
            if ((ll_backend__optimize__DebugOptPredNames_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 203 "optimize.m"
              (ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = MR_TRUE;
#line 190 "optimize.m"
            else
#line 199 "optimize.m"
              {
#line 201 "optimize.m"
                {
#line 201 "optimize.m"
                  (ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (ll_backend__optimize__Name_7)), ll_backend__optimize__DebugOptPredNames_13);
                }
#line 199 "optimize.m"
              }
#line 190 "optimize.m"
          else
#line 190 "optimize.m"
          if ((ll_backend__optimize__DebugOptPredNames_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 194 "optimize.m"
            {
#line 194 "optimize.m"
              {
#line 194 "optimize.m"
                ll_backend__optimize__need_opt_debug_info_5_p_0_4(&ll_backend__optimize__env);
              }
#line 194 "optimize.m"
            }
#line 190 "optimize.m"
          else
#line 187 "optimize.m"
            {
#line 183 "optimize.m"
              {
#line 183 "optimize.m"
                ll_backend__optimize__need_opt_debug_info_5_p_0_8(&ll_backend__optimize__env);
              }
#line 187 "optimize.m"
              if (!((ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded))
#line 188 "optimize.m"
                {
#line 188 "optimize.m"
                  {
#line 188 "optimize.m"
                    (ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (ll_backend__optimize__Name_7)), ll_backend__optimize__DebugOptPredNames_13);
                  }
#line 188 "optimize.m"
                }
#line 187 "optimize.m"
            }
#line 190 "optimize.m"
        }
#line 176 "optimize.m"
      if ((ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded)
#line 210 "optimize.m"
        {
#line 210 "optimize.m"
          MR_String ll_backend__optimize__BaseName_28;
#line 210 "optimize.m"
          MR_String ll_backend__optimize__V_29_29;
#line 210 "optimize.m"
          MR_String ll_backend__optimize__V_30_30;
#line 210 "optimize.m"
          MR_String ll_backend__optimize__V_32_32;
#line 210 "optimize.m"
          MR_String ll_backend__optimize__V_33_33;
#line 210 "optimize.m"
          MR_String ll_backend__optimize__V_34_34;
#line 210 "optimize.m"
          MR_String ll_backend__optimize__V_36_36;
#line 210 "optimize.m"
          MR_String ll_backend__optimize__V_37_37;
#line 210 "optimize.m"
          MR_String ll_backend__optimize__V_38_38;
#line 210 "optimize.m"
          MR_String ll_backend__optimize__V_40_40;
#line 210 "optimize.m"
          MR_String ll_backend__optimize__V_41_41;
#line 210 "optimize.m"
          MR_String ll_backend__optimize__V_42_42;
#line 210 "optimize.m"
          MR_String ll_backend__optimize__V_44_44;

#line 207 "optimize.m"
          {
#line 207 "optimize.m"
            ll_backend__optimize__V_29_29 = ll_backend__optimize__opt_subdir_name_0_f_0();
          }
#line 208 "optimize.m"
          {
#line 208 "optimize.m"
            ll_backend__optimize__V_33_33 = ll_backend__optimize__mangle_name_as_filename_1_f_0(ll_backend__optimize__Name_7);
          }
#line 208 "optimize.m"
          {
#line 208 "optimize.m"
            ll_backend__optimize__V_37_37 = mercury__string__int_to_string_1_f_0(ll_backend__optimize__Arity_8);
          }
#line 209 "optimize.m"
          {
#line 209 "optimize.m"
            ll_backend__optimize__V_41_41 = mercury__string__int_to_string_1_f_0((ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__PredIdInt_16);
          }
#line 210 "optimize.m"
          {
#line 210 "optimize.m"
            ll_backend__optimize__V_44_44 = mercury__string__int_to_string_1_f_0(ll_backend__optimize__ProcIdInt_17);
          }
#line 210 "optimize.m"
          {
#line 210 "optimize.m"
            ll_backend__optimize__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) ".proc", ll_backend__optimize__V_44_44);
          }
#line 210 "optimize.m"
          {
#line 210 "optimize.m"
            ll_backend__optimize__V_40_40 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__V_41_41, ll_backend__optimize__V_42_42);
          }
#line 209 "optimize.m"
          {
#line 209 "optimize.m"
            ll_backend__optimize__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) ".pred", ll_backend__optimize__V_40_40);
          }
#line 209 "optimize.m"
          {
#line 209 "optimize.m"
            ll_backend__optimize__V_36_36 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__V_37_37, ll_backend__optimize__V_38_38);
          }
#line 208 "optimize.m"
          {
#line 208 "optimize.m"
            ll_backend__optimize__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__optimize__V_36_36);
          }
#line 208 "optimize.m"
          {
#line 208 "optimize.m"
            ll_backend__optimize__V_32_32 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__V_33_33, ll_backend__optimize__V_34_34);
          }
#line 208 "optimize.m"
          {
#line 208 "optimize.m"
            ll_backend__optimize__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "/", ll_backend__optimize__V_32_32);
          }
#line 207 "optimize.m"
          {
#line 207 "optimize.m"
            ll_backend__optimize__BaseName_28 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__V_29_29, ll_backend__optimize__V_30_30);
          }
#line 211 "optimize.m"
          {
#line 211 "optimize.m"
            MR_Word base;
#line 211 "optimize.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 211 "optimize.m"
            *ll_backend__optimize__MaybeBaseName_10 = base;
#line 211 "optimize.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__optimize__BaseName_28));
#line 211 "optimize.m"
          }
#line 210 "optimize.m"
        }
#line 176 "optimize.m"
      else
#line 213 "optimize.m"
        *ll_backend__optimize__MaybeBaseName_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 169 "optimize.m"
    }
#line 166 "optimize.m"
  }
#line 166 "optimize.m"
}

#line 134 "optimize.m"
static MR_Word MR_CALL 
ll_backend__optimize__make_internal_label_for_proc_label_2_f_0(
#line 134 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_4,
#line 134 "optimize.m"
  MR_Integer ll_backend__optimize__LabelNum_5)
#line 134 "optimize.m"
{
#line 137 "optimize.m"
  {
#line 137 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 137 "optimize.m"
    MR_Word ll_backend__optimize__HeadVar__3_3;

#line 137 "optimize.m"
    {
#line 137 "optimize.m"
      ll_backend__optimize__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 137 "optimize.m"
      MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, 0) = ((MR_Box) (ll_backend__optimize__LabelNum_5));
#line 137 "optimize.m"
      MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, 1) = ((MR_Box) (ll_backend__optimize__ProcLabel_4));
#line 137 "optimize.m"
    }
#line 137 "optimize.m"
    return ll_backend__optimize__HeadVar__3_3;
#line 137 "optimize.m"
  }
#line 134 "optimize.m"
}

#line 106 "optimize.m"
static MR_Box MR_CALL 
ll_backend__optimize__optimize_proc_4_p_0_1(
#line 106 "optimize.m"
  MR_Box ll_backend__optimize__closure_arg,
#line 106 "optimize.m"
  MR_Box ll_backend__optimize__wrapper_arg_1)
#line 106 "optimize.m"
{
#line 106 "optimize.m"
  {
#line 106 "optimize.m"
    MR_Box ll_backend__optimize__wrapper_arg_2;
#line 106 "optimize.m"
    MR_Box ll_backend__optimize__closure = ll_backend__optimize__closure_arg;
#line 106 "optimize.m"
    MR_Word ll_backend__optimize__conv0_HeadVar__3_3;

#line 106 "optimize.m"
    {
#line 106 "optimize.m"
      ll_backend__optimize__conv0_HeadVar__3_3 = ll_backend__optimize__make_internal_label_for_proc_label_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__closure, (MR_Integer) 3))), ((MR_Integer) ll_backend__optimize__wrapper_arg_1));
    }
#line 106 "optimize.m"
    ll_backend__optimize__wrapper_arg_2 = ((MR_Box) (ll_backend__optimize__conv0_HeadVar__3_3));
#line 106 "optimize.m"
    return ll_backend__optimize__wrapper_arg_2;
#line 106 "optimize.m"
  }
#line 106 "optimize.m"
}

#line 31 "optimize.m"
void MR_CALL 
ll_backend__optimize__optimize_proc_4_p_0(
#line 31 "optimize.m"
  MR_Word ll_backend__optimize__Globals_5,
#line 31 "optimize.m"
  MR_Word ll_backend__optimize__GlobalData_6,
#line 31 "optimize.m"
  MR_Word ll_backend__optimize__CProc0_7,
#line 31 "optimize.m"
  MR_Word * ll_backend__optimize__CProc_8)
#line 31 "optimize.m"
{
#line 79 "optimize.m"
  {
#line 79 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 79 "optimize.m"
    MR_Word ll_backend__optimize__Info_9;
#line 79 "optimize.m"
    MR_String ll_backend__optimize__Name_13;
#line 79 "optimize.m"
    MR_Integer ll_backend__optimize__Arity_14;
#line 79 "optimize.m"
    MR_Word ll_backend__optimize__PredProcId_15;
#line 79 "optimize.m"
    MR_Word ll_backend__optimize__ProcLabel_16;
#line 79 "optimize.m"
    MR_Word ll_backend__optimize__CodeModel_17;
#line 79 "optimize.m"
    MR_Word ll_backend__optimize__MayAlterRtti_18;
#line 79 "optimize.m"
    MR_Word ll_backend__optimize__CGlobalVars_19;
#line 79 "optimize.m"
    MR_Word ll_backend__optimize__MaybeBaseName_20;
#line 79 "optimize.m"
    MR_Integer ll_backend__optimize__Repeat_24;
#line 79 "optimize.m"
    MR_Word ll_backend__optimize__LayoutLabelSet_29;
#line 79 "optimize.m"
    MR_Word ll_backend__optimize__Statistics_30;
#line 79 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_31_31;
#line 79 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_32_32;
#line 79 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43;
#line 79 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_45_45;
#line 79 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_46_46;
#line 79 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_47_47;
#line 79 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_48_48;
#line 79 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_49_49;
#line 79 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_50_50;
#line 79 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_54_54;
#line 79 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_55_55;
#line 79 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_56_56;
#line 79 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_59_59;
#line 79 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_60_60;
#line 98 "optimize.m"
    MR_Word ll_backend__optimize__V_63_63;
#line 98 "optimize.m"
    MR_Word ll_backend__optimize__V_64_64;
#line 98 "optimize.m"
    MR_Word ll_backend__optimize__V_65_65;
#line 98 "optimize.m"
    MR_Word ll_backend__optimize__V_66_66;
#line 98 "optimize.m"
    MR_Integer ll_backend__optimize__V_67_67;
#line 98 "optimize.m"
    MR_Word ll_backend__optimize__V_68_68;
#line 98 "optimize.m"
    MR_Word ll_backend__optimize__V_69_69;
#line 98 "optimize.m"
    MR_Word ll_backend__optimize__V_70_70;
#line 98 "optimize.m"
    MR_Word ll_backend__optimize__V_71_71;
#line 98 "optimize.m"
    MR_Word ll_backend__optimize__V_72_72;
#line 98 "optimize.m"
    MR_Word ll_backend__optimize__V_73_73;
#line 98 "optimize.m"
    MR_Word ll_backend__optimize__V_74_74;
#line 98 "optimize.m"
    MR_Word ll_backend__optimize__V_75_75;
#line 98 "optimize.m"
    MR_Word ll_backend__optimize__V_76_76;
#line 98 "optimize.m"
    MR_Word ll_backend__optimize__V_77_77;
#line 98 "optimize.m"
    MR_Word ll_backend__optimize__V_78_78;
#line 98 "optimize.m"
    MR_Word ll_backend__optimize__V_79_79;
#line 98 "optimize.m"
    MR_Word ll_backend__optimize__V_80_80;
#line 98 "optimize.m"
    MR_Word ll_backend__optimize__V_81_81;
#line 98 "optimize.m"
    MR_Integer ll_backend__optimize__V_82_82;
#line 98 "optimize.m"
    MR_Word ll_backend__optimize__V_83_83;
#line 98 "optimize.m"
    MR_Word ll_backend__optimize__V_84_84;
#line 98 "optimize.m"
    MR_Word ll_backend__optimize__V_85_85;
#line 99 "optimize.m"
    MR_Word ll_backend__optimize__ProcLayout_25;
#line 112 "optimize.m"
    MR_Word ll_backend__optimize__V_109_109;
#line 112 "optimize.m"
    MR_Word ll_backend__optimize__V_110_110;
#line 112 "optimize.m"
    MR_Word ll_backend__optimize__V_111_111;
#line 112 "optimize.m"
    MR_Integer ll_backend__optimize__V_112_112;
#line 112 "optimize.m"
    MR_Word ll_backend__optimize__V_113_113;
#line 112 "optimize.m"
    MR_Word ll_backend__optimize__V_114_114;
#line 112 "optimize.m"
    MR_Word ll_backend__optimize__V_115_115;
#line 112 "optimize.m"
    MR_Word ll_backend__optimize__V_116_116;
#line 112 "optimize.m"
    MR_Word ll_backend__optimize__V_117_117;
#line 112 "optimize.m"
    MR_Word ll_backend__optimize__V_118_118;
#line 112 "optimize.m"
    MR_Word ll_backend__optimize__V_119_119;
#line 112 "optimize.m"
    MR_Word ll_backend__optimize__V_120_120;
#line 112 "optimize.m"
    MR_Word ll_backend__optimize__V_121_121;
#line 112 "optimize.m"
    MR_Word ll_backend__optimize__V_122_122;
#line 112 "optimize.m"
    MR_Word ll_backend__optimize__V_123_123;
#line 112 "optimize.m"
    MR_Word ll_backend__optimize__V_124_124;
#line 112 "optimize.m"
    MR_Word ll_backend__optimize__V_125_125;
#line 112 "optimize.m"
    MR_Word ll_backend__optimize__V_126_126;
#line 112 "optimize.m"
    MR_Integer ll_backend__optimize__V_127_127;
#line 112 "optimize.m"
    MR_Integer ll_backend__optimize__V_128_128;
#line 112 "optimize.m"
    MR_Word ll_backend__optimize__V_129_129;
#line 112 "optimize.m"
    MR_Word ll_backend__optimize__V_130_130;
#line 112 "optimize.m"
    MR_Word ll_backend__optimize__V_131_131;

#line 80 "optimize.m"
    {
#line 80 "optimize.m"
      ll_backend__optimize__Info_9 = ll_backend__optimize__init_llds_opt_info_1_f_0(ll_backend__optimize__Globals_5);
    }
#line 82 "optimize.m"
    ll_backend__optimize__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 0)));
#line 82 "optimize.m"
    ll_backend__optimize__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 1)));
#line 82 "optimize.m"
    ll_backend__optimize__PredProcId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 2)));
#line 82 "optimize.m"
    ll_backend__optimize__ProcLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 3)));
#line 82 "optimize.m"
    ll_backend__optimize__CodeModel_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 4)));
#line 82 "optimize.m"
    ll_backend__optimize__STATE_VARIABLE_Instrs_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 5)));
#line 82 "optimize.m"
    ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 6)));
#line 82 "optimize.m"
    ll_backend__optimize__MayAlterRtti_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 7)));
#line 82 "optimize.m"
    ll_backend__optimize__CGlobalVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 8)));
#line 84 "optimize.m"
    {
#line 84 "optimize.m"
      ll_backend__optimize__need_opt_debug_info_5_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__Name_13, ll_backend__optimize__Arity_14, ll_backend__optimize__PredProcId_15, &ll_backend__optimize__MaybeBaseName_20);
    }
#line 88 "optimize.m"
    if ((ll_backend__optimize__MaybeBaseName_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 87 "optimize.m"
      ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 88 "optimize.m"
    else
#line 89 "optimize.m"
      {
#line 89 "optimize.m"
        MR_String ll_backend__optimize__BaseName_21 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__MaybeBaseName_20, (MR_Integer) 0)));
#line 89 "optimize.m"
        MR_String ll_backend__optimize__FirstFileName_22;
#line 89 "optimize.m"
        MR_String ll_backend__optimize__V_33_33;
#line 89 "optimize.m"
        MR_String ll_backend__optimize__V_35_35;

#line 90 "optimize.m"
        {
#line 90 "optimize.m"
          ll_backend__optimize__V_35_35 = ll_backend__optimize__num_to_str_1_f_0((MR_Integer) 0);
        }
#line 90 "optimize.m"
        {
#line 90 "optimize.m"
          ll_backend__optimize__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) ".opt", ll_backend__optimize__V_35_35);
        }
#line 90 "optimize.m"
        {
#line 90 "optimize.m"
          ll_backend__optimize__FirstFileName_22 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__BaseName_21, ll_backend__optimize__V_33_33);
        }
#line 92 "optimize.m"
        {
#line 92 "optimize.m"
          ll_backend__optimize__output_first_opt_debug_7_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__FirstFileName_22, ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_Instrs_31_31, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_32_32);
        }
#line 95 "optimize.m"
        {
#line 95 "optimize.m"
          ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 95 "optimize.m"
          MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43, 0) = ((MR_Box) (ll_backend__optimize__BaseName_21));
#line 95 "optimize.m"
          MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43, 1) = ((MR_Box) ((MR_Integer) 0));
#line 95 "optimize.m"
          MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43, 2) = ((MR_Box) (ll_backend__optimize__FirstFileName_22));
#line 95 "optimize.m"
          MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43, 3) = ((MR_Box) ((MR_Integer) 0));
#line 95 "optimize.m"
          MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43, 4) = ((MR_Box) (ll_backend__optimize__FirstFileName_22));
#line 95 "optimize.m"
          MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43, 5) = ((MR_Box) (ll_backend__optimize__STATE_VARIABLE_Instrs_31_31));
#line 95 "optimize.m"
        }
#line 89 "optimize.m"
      }
#line 98 "optimize.m"
    ll_backend__optimize__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 98 "optimize.m"
    ll_backend__optimize__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 98 "optimize.m"
    ll_backend__optimize__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 98 "optimize.m"
    ll_backend__optimize__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 98 "optimize.m"
    ll_backend__optimize__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 1)));
#line 98 "optimize.m"
    ll_backend__optimize__V_68_68 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 98 "optimize.m"
    ll_backend__optimize__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 98 "optimize.m"
    ll_backend__optimize__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 98 "optimize.m"
    ll_backend__optimize__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 98 "optimize.m"
    ll_backend__optimize__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 98 "optimize.m"
    ll_backend__optimize__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 98 "optimize.m"
    ll_backend__optimize__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 98 "optimize.m"
    ll_backend__optimize__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 98 "optimize.m"
    ll_backend__optimize__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 98 "optimize.m"
    ll_backend__optimize__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 98 "optimize.m"
    ll_backend__optimize__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 98 "optimize.m"
    ll_backend__optimize__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 98 "optimize.m"
    ll_backend__optimize__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 98 "optimize.m"
    ll_backend__optimize__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 98 "optimize.m"
    ll_backend__optimize__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 3)));
#line 98 "optimize.m"
    ll_backend__optimize__Repeat_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 4)));
#line 98 "optimize.m"
    ll_backend__optimize__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 5)));
#line 98 "optimize.m"
    ll_backend__optimize__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 6)));
#line 98 "optimize.m"
    ll_backend__optimize__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 7)));
#line 100 "optimize.m"
    {
#line 100 "optimize.m"
      ll_backend__optimize__succeeded = ll_backend__global_data__global_data_maybe_get_proc_layout_3_p_0(ll_backend__optimize__GlobalData_6, ll_backend__optimize__PredProcId_15, &ll_backend__optimize__ProcLayout_25);
    }
#line 99 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 103 "optimize.m"
      {
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__TypeCtorInfo_132_132 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__TypeCtorInfo_134_134;
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__LabelMap_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 19)));
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__LayoutLabelNums_27;
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__LayoutLabels_28;
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__V_44_44;
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 0)));
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 1)));
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 2)));
#line 103 "optimize.m"
        MR_Integer ll_backend__optimize__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 3)));
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 4)));
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 5)));
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 6)));
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 7)));
#line 103 "optimize.m"
        MR_Integer ll_backend__optimize__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 8)));
#line 103 "optimize.m"
        MR_Integer ll_backend__optimize__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 9)));
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 10)));
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 11)));
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 12)));
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 13)));
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 14)));
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 15)));
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 16)));
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 17)));
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 18)));
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 20)));
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 21)));
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 22)));
#line 103 "optimize.m"
        MR_Word ll_backend__optimize__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 23)));

#line 104 "optimize.m"
        {
#line 104 "optimize.m"
          mercury__map__sorted_keys_2_p_0(ll_backend__optimize__TypeCtorInfo_132_132, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__optimize__LabelMap_26, &ll_backend__optimize__LayoutLabelNums_27);
        }
#line 7026 "ll_backend.optimize.c"
        ll_backend__optimize__TypeCtorInfo_134_134 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 106 "optimize.m"
        {
#line 106 "optimize.m"
          ll_backend__optimize__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 106 "optimize.m"
          MR_hl_field(MR_mktag(0), ll_backend__optimize__V_44_44, 0) = ((MR_Box) (&ll_backend__optimize_scalar_common_2[0]));
#line 106 "optimize.m"
          MR_hl_field(MR_mktag(0), ll_backend__optimize__V_44_44, 1) = ((MR_Box) (ll_backend__optimize__optimize_proc_4_p_0_1));
#line 106 "optimize.m"
          MR_hl_field(MR_mktag(0), ll_backend__optimize__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "optimize.m"
          MR_hl_field(MR_mktag(0), ll_backend__optimize__V_44_44, 3) = ((MR_Box) (ll_backend__optimize__ProcLabel_16));
#line 106 "optimize.m"
        }
#line 105 "optimize.m"
        {
#line 105 "optimize.m"
          ll_backend__optimize__LayoutLabels_28 = mercury__list__map_2_f_0(ll_backend__optimize__TypeCtorInfo_132_132, ll_backend__optimize__TypeCtorInfo_134_134, ll_backend__optimize__V_44_44, ll_backend__optimize__LayoutLabelNums_27);
        }
#line 108 "optimize.m"
        {
#line 108 "optimize.m"
          mercury__set_tree234__sorted_list_to_set_2_p_0(ll_backend__optimize__TypeCtorInfo_134_134, ll_backend__optimize__LayoutLabels_28, &ll_backend__optimize__LayoutLabelSet_29);
        }
#line 103 "optimize.m"
      }
#line 99 "optimize.m"
    else
#line 110 "optimize.m"
      {
#line 110 "optimize.m"
        {
#line 110 "optimize.m"
          ll_backend__optimize__LayoutLabelSet_29 = mercury__set_tree234__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0);
        }
#line 110 "optimize.m"
      }
#line 112 "optimize.m"
    ll_backend__optimize__V_109_109 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 112 "optimize.m"
    ll_backend__optimize__Statistics_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 112 "optimize.m"
    ll_backend__optimize__V_110_110 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 112 "optimize.m"
    ll_backend__optimize__V_111_111 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 112 "optimize.m"
    ll_backend__optimize__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 1)));
#line 112 "optimize.m"
    ll_backend__optimize__V_113_113 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 112 "optimize.m"
    ll_backend__optimize__V_114_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 112 "optimize.m"
    ll_backend__optimize__V_115_115 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 112 "optimize.m"
    ll_backend__optimize__V_116_116 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 112 "optimize.m"
    ll_backend__optimize__V_117_117 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 112 "optimize.m"
    ll_backend__optimize__V_118_118 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 112 "optimize.m"
    ll_backend__optimize__V_119_119 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 112 "optimize.m"
    ll_backend__optimize__V_120_120 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 112 "optimize.m"
    ll_backend__optimize__V_121_121 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 112 "optimize.m"
    ll_backend__optimize__V_122_122 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 112 "optimize.m"
    ll_backend__optimize__V_123_123 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 112 "optimize.m"
    ll_backend__optimize__V_124_124 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 112 "optimize.m"
    ll_backend__optimize__V_125_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 112 "optimize.m"
    ll_backend__optimize__V_126_126 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 112 "optimize.m"
    ll_backend__optimize__V_127_127 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 3)));
#line 112 "optimize.m"
    ll_backend__optimize__V_128_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 4)));
#line 112 "optimize.m"
    ll_backend__optimize__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 5)));
#line 112 "optimize.m"
    ll_backend__optimize__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 6)));
#line 112 "optimize.m"
    ll_backend__optimize__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 7)));
#line 113 "optimize.m"
    {
#line 113 "optimize.m"
      ll_backend__optimize__optimize_initial_11_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__LayoutLabelSet_29, ll_backend__optimize__ProcLabel_16, ll_backend__optimize__CodeModel_17, ll_backend__optimize__MayAlterRtti_18, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_32_32, &ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_45_45, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_46_46, ll_backend__optimize__STATE_VARIABLE_Instrs_31_31, &ll_backend__optimize__STATE_VARIABLE_Instrs_47_47);
    }
#line 115 "optimize.m"
    {
#line 115 "optimize.m"
      ll_backend__optimize__optimize_repeat_11_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__Repeat_24, ll_backend__optimize__LayoutLabelSet_29, ll_backend__optimize__ProcLabel_16, ll_backend__optimize__MayAlterRtti_18, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_45_45, &ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_48_48, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_46_46, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_49_49, ll_backend__optimize__STATE_VARIABLE_Instrs_47_47, &ll_backend__optimize__STATE_VARIABLE_Instrs_50_50);
    }
#line 118 "optimize.m"
    {
#line 118 "optimize.m"
      libs__file_util__maybe_report_stats_3_p_0(ll_backend__optimize__Statistics_30);
    }
#line 120 "optimize.m"
    {
#line 120 "optimize.m"
      ll_backend__optimize__optimize_middle_12_p_0(ll_backend__optimize__Info_9, (MR_Integer) 1, ll_backend__optimize__LayoutLabelSet_29, ll_backend__optimize__ProcLabel_16, ll_backend__optimize__CodeModel_17, ll_backend__optimize__MayAlterRtti_18, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_48_48, &ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_54_54, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_49_49, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_55_55, ll_backend__optimize__STATE_VARIABLE_Instrs_50_50, &ll_backend__optimize__STATE_VARIABLE_Instrs_56_56);
    }
#line 123 "optimize.m"
    {
#line 123 "optimize.m"
      libs__file_util__maybe_report_stats_3_p_0(ll_backend__optimize__Statistics_30);
    }
#line 125 "optimize.m"
    {
#line 125 "optimize.m"
      ll_backend__optimize__optimize_last_8_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__LayoutLabelSet_29, ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_54_54, &ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_59_59, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_55_55, ll_backend__optimize__STATE_VARIABLE_Instrs_56_56, &ll_backend__optimize__STATE_VARIABLE_Instrs_60_60);
    }
#line 128 "optimize.m"
    {
#line 128 "optimize.m"
      libs__file_util__maybe_report_stats_3_p_0(ll_backend__optimize__Statistics_30);
    }
#line 130 "optimize.m"
    {
#line 130 "optimize.m"
      MR_Word base;
#line 130 "optimize.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 130 "optimize.m"
      *ll_backend__optimize__CProc_8 = base;
#line 130 "optimize.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__optimize__Name_13));
#line 130 "optimize.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__optimize__Arity_14));
#line 130 "optimize.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__optimize__PredProcId_15));
#line 130 "optimize.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__optimize__ProcLabel_16));
#line 130 "optimize.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__optimize__CodeModel_17));
#line 130 "optimize.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__optimize__STATE_VARIABLE_Instrs_60_60));
#line 130 "optimize.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__optimize__STATE_VARIABLE_LabelNumCounter_59_59));
#line 130 "optimize.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__optimize__MayAlterRtti_18));
#line 130 "optimize.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__optimize__CGlobalVars_19));
#line 130 "optimize.m"
    }
#line 79 "optimize.m"
  }
#line 31 "optimize.m"
}

#line 28 "optimize.m"
void MR_CALL 
ll_backend__optimize__optimize_procs_4_p_0(
#line 28 "optimize.m"
  MR_Word ll_backend__optimize__Globals_1,
#line 28 "optimize.m"
  MR_Word ll_backend__optimize__GlobalData_2,
#line 28 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__3_3,
#line 28 "optimize.m"
  MR_Word * ll_backend__optimize__HeadVar__4_4)
#line 28 "optimize.m"
{
#line 74 "optimize.m"
  {
#line 74 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;

#line 74 "optimize.m"
    if ((ll_backend__optimize__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 74 "optimize.m"
      *ll_backend__optimize__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 74 "optimize.m"
    else
#line 75 "optimize.m"
      {
#line 75 "optimize.m"
        MR_Word ll_backend__optimize__Proc0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 0)));
#line 75 "optimize.m"
        MR_Word ll_backend__optimize__Procs0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "optimize.m"
        MR_Word ll_backend__optimize__Proc_11;
#line 75 "optimize.m"
        MR_Word ll_backend__optimize__Procs_12;

#line 76 "optimize.m"
        {
#line 76 "optimize.m"
          ll_backend__optimize__optimize_proc_4_p_0(ll_backend__optimize__Globals_1, ll_backend__optimize__GlobalData_2, ll_backend__optimize__Proc0_9, &ll_backend__optimize__Proc_11);
        }
#line 77 "optimize.m"
        {
#line 77 "optimize.m"
          ll_backend__optimize__optimize_procs_4_p_0(ll_backend__optimize__Globals_1, ll_backend__optimize__GlobalData_2, ll_backend__optimize__Procs0_10, &ll_backend__optimize__Procs_12);
        }
#line 75 "optimize.m"
        {
#line 75 "optimize.m"
          MR_Word base;
#line 75 "optimize.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 75 "optimize.m"
          *ll_backend__optimize__HeadVar__4_4 = base;
#line 75 "optimize.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__optimize__Proc_11));
#line 75 "optimize.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__optimize__Procs_12));
#line 75 "optimize.m"
        }
#line 75 "optimize.m"
      }
#line 74 "optimize.m"
  }
#line 28 "optimize.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.optimize. */
