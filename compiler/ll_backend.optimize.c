/*
** Automatically generated from `optimize.m'
** by the Mercury compiler,
** version rotd-2015-01-28
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
#include "dir.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_info.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 152 "optimize.m"
struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s {
#line 155 "optimize.m"
  MR_bool ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded;
#line 155 "optimize.m"
  MR_Word ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStrs_12;
#line 155 "optimize.m"
  MR_Integer ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__PredIdInt_16;
#line 180 "optimize.m"
  jmp_buf ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__commit_0;
#line 180 "optimize.m"
  MR_String ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStr_47;
#line 180 "optimize.m"
  MR_Integer ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredId_48;
#line 180 "optimize.m"
  MR_Box ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__conv0_DebugOptPredIdStr_47;
#line 169 "optimize.m"
  jmp_buf ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__commit_1;
#line 169 "optimize.m"
  MR_String ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStr_45;
#line 169 "optimize.m"
  MR_Integer ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredId_46;
#line 169 "optimize.m"
  MR_Box ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__conv1_DebugOptPredIdStr_45;
#line 152 "optimize.m"
};


#line 191 "ll_backend.optimize.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__optimize__list__ti_list_1builtin__type_ctor_info_string_0;

#line 194 "ll_backend.optimize.c"
static const MR_PseudoTypeInfo ll_backend__optimize__ll_backend__optimize__field_types_llds_opt_info_0_0[24];

#line 197 "ll_backend.optimize.c"
static const MR_ConstString ll_backend__optimize__ll_backend__optimize__field_names_llds_opt_info_0_0[24];

#line 200 "ll_backend.optimize.c"
static const MR_DuArgLocn ll_backend__optimize__ll_backend__optimize__field_locns_llds_opt_info_0_0[24];

#line 203 "ll_backend.optimize.c"
static const MR_DuFunctorDesc ll_backend__optimize__ll_backend__optimize__du_functor_desc_llds_opt_info_0_0;

#line 206 "ll_backend.optimize.c"
static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_stag_ordered_llds_opt_info_0_0[1];

#line 209 "ll_backend.optimize.c"
static const MR_DuPtagLayout ll_backend__optimize__ll_backend__optimize__du_ptag_ordered_llds_opt_info_0[1];

#line 212 "ll_backend.optimize.c"
static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_name_ordered_llds_opt_info_0[1];

#line 215 "ll_backend.optimize.c"
static const MR_Integer ll_backend__optimize__ll_backend__optimize__functor_number_map_llds_opt_info_0[1];

#line 218 "ll_backend.optimize.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__optimize__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0;

#line 221 "ll_backend.optimize.c"
static const MR_PseudoTypeInfo ll_backend__optimize__ll_backend__optimize__field_types_opt_debug_info_0_0[6];

#line 224 "ll_backend.optimize.c"
static const MR_DuFunctorDesc ll_backend__optimize__ll_backend__optimize__du_functor_desc_opt_debug_info_0_0;

#line 227 "ll_backend.optimize.c"
static const MR_DuFunctorDesc ll_backend__optimize__ll_backend__optimize__du_functor_desc_opt_debug_info_0_1;

#line 230 "ll_backend.optimize.c"
static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_stag_ordered_opt_debug_info_0_0[1];

#line 233 "ll_backend.optimize.c"
static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_stag_ordered_opt_debug_info_0_1[1];

#line 236 "ll_backend.optimize.c"
static const MR_DuPtagLayout ll_backend__optimize__ll_backend__optimize__du_ptag_ordered_opt_debug_info_0[2];

#line 239 "ll_backend.optimize.c"
static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_name_ordered_opt_debug_info_0[2];

#line 242 "ll_backend.optimize.c"
static const MR_Integer ll_backend__optimize__ll_backend__optimize__functor_number_map_opt_debug_info_0[2];

#line 245 "ll_backend.optimize.c"
static MR_bool MR_CALL 
ll_backend__optimize____Unify____llds_opt_info_0_0_10001(
#line 248 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_1,
#line 250 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_2);

#line 253 "ll_backend.optimize.c"
static void MR_CALL 
ll_backend__optimize____Compare____llds_opt_info_0_0_10001(
#line 256 "ll_backend.optimize.c"
  MR_Box * ll_backend__optimize__wrapper_arg_1,
#line 258 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_2,
#line 260 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_3);

#line 263 "ll_backend.optimize.c"
static MR_bool MR_CALL 
ll_backend__optimize____Unify____opt_debug_info_0_0_10001(
#line 266 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_1,
#line 268 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_2);

#line 271 "ll_backend.optimize.c"
static void MR_CALL 
ll_backend__optimize____Compare____opt_debug_info_0_0_10001(
#line 274 "ll_backend.optimize.c"
  MR_Box * ll_backend__optimize__wrapper_arg_1,
#line 276 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_2,
#line 278 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_3);

#line 138 "optimize.m"
static void MR_CALL 
ll_backend__optimize____Compare____opt_debug_info_0_0(
#line 138 "optimize.m"
  MR_Word * ll_backend__optimize__HeadVar__1_1,
#line 138 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__2_2,
#line 138 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__3_3);

#line 138 "optimize.m"
static MR_bool MR_CALL 
ll_backend__optimize____Unify____opt_debug_info_0_0(
#line 138 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__1_1,
#line 138 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__2_2);

#line 751 "optimize.m"
static void MR_CALL 
ll_backend__optimize____Compare____llds_opt_info_0_0(
#line 751 "optimize.m"
  MR_Word * ll_backend__optimize__HeadVar__1_1,
#line 751 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__2_2,
#line 751 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__3_3);

#line 751 "optimize.m"
static MR_bool MR_CALL 
ll_backend__optimize____Unify____llds_opt_info_0_0(
#line 751 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__1_1,
#line 751 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__2_2);

#line 783 "optimize.m"
static MR_Word MR_CALL 
ll_backend__optimize__init_llds_opt_info_1_f_0(
#line 783 "optimize.m"
  MR_Word ll_backend__optimize__Globals_3);

#line 740 "optimize.m"
static void MR_CALL 
ll_backend__optimize__escape_dir_char_3_p_0(
#line 740 "optimize.m"
  MR_Char ll_backend__optimize__Char_4,
#line 740 "optimize.m"
  MR_String ll_backend__optimize__STATE_VARIABLE_Str_0_6,
#line 740 "optimize.m"
  MR_String * ll_backend__optimize__STATE_VARIABLE_Str_7);

#line 738 "optimize.m"
static void MR_CALL 
ll_backend__optimize__mangle_name_as_filename_1_f_0_1(
#line 738 "optimize.m"
  MR_Box ll_backend__optimize__closure_arg,
#line 738 "optimize.m"
  MR_Box ll_backend__optimize__wrapper_arg_1,
#line 738 "optimize.m"
  MR_Box ll_backend__optimize__wrapper_arg_2,
#line 738 "optimize.m"
  MR_Box * ll_backend__optimize__wrapper_arg_3);

#line 735 "optimize.m"
static MR_String MR_CALL 
ll_backend__optimize__mangle_name_as_filename_1_f_0(
#line 735 "optimize.m"
  MR_String ll_backend__optimize__Str0_3);

#line 607 "optimize.m"
static void MR_CALL 
ll_backend__optimize__optimize_last_8_p_0(
#line 607 "optimize.m"
  MR_Word ll_backend__optimize__Info_9,
#line 607 "optimize.m"
  MR_Word ll_backend__optimize__LayoutLabelSet_10,
#line 607 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_11,
#line 607 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_C_0_24,
#line 607 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_C_25,
#line 607 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_26,
#line 607 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_27,
#line 607 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_28);

#line 474 "optimize.m"
static void MR_CALL 
ll_backend__optimize__optimize_middle_12_p_0(
#line 474 "optimize.m"
  MR_Word ll_backend__optimize__Info_13,
#line 474 "optimize.m"
  MR_Word ll_backend__optimize__Final_14,
#line 474 "optimize.m"
  MR_Word ll_backend__optimize__LayoutLabelSet_15,
#line 474 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_16,
#line 474 "optimize.m"
  MR_Word ll_backend__optimize__CodeModel_17,
#line 474 "optimize.m"
  MR_Word ll_backend__optimize__MayAlterRtti_18,
#line 474 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_C_0_41,
#line 474 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_C_42,
#line 474 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_43,
#line 474 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_44,
#line 474 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_45,
#line 474 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_46);

#line 368 "optimize.m"
static void MR_CALL 
ll_backend__optimize__optimize_repeated_12_p_0(
#line 368 "optimize.m"
  MR_Word ll_backend__optimize__Info_13,
#line 368 "optimize.m"
  MR_Word ll_backend__optimize__Final_14,
#line 368 "optimize.m"
  MR_Word ll_backend__optimize__LayoutLabelSet_15,
#line 368 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_16,
#line 368 "optimize.m"
  MR_Word ll_backend__optimize__MayAlterRtti_17,
#line 368 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_C_0_39,
#line 368 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_C_40,
#line 368 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_41,
#line 368 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_42,
#line 368 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_43,
#line 368 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_44,
#line 368 "optimize.m"
  MR_Word * ll_backend__optimize__Mod_21);

#line 338 "optimize.m"
static void MR_CALL 
ll_backend__optimize__optimize_repeat_11_p_0(
#line 338 "optimize.m"
  MR_Word ll_backend__optimize__Info_12,
#line 338 "optimize.m"
  MR_Integer ll_backend__optimize__CurIter_13,
#line 338 "optimize.m"
  MR_Word ll_backend__optimize__LayoutLabelSet_14,
#line 338 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_15,
#line 338 "optimize.m"
  MR_Word ll_backend__optimize__MayAlterRtti_16,
#line 338 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_C_0_23,
#line 338 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_C_24,
#line 338 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_25,
#line 338 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_26,
#line 338 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_27,
#line 338 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_28);

#line 303 "optimize.m"
static void MR_CALL 
ll_backend__optimize__optimize_initial_11_p_0(
#line 303 "optimize.m"
  MR_Word ll_backend__optimize__Info_12,
#line 303 "optimize.m"
  MR_Word ll_backend__optimize__LayoutLabelSet_13,
#line 303 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_14,
#line 303 "optimize.m"
  MR_Word ll_backend__optimize__CodeModel_15,
#line 303 "optimize.m"
  MR_Word ll_backend__optimize__MayAlterRtti_16,
#line 303 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_C_0_25,
#line 303 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_C_26,
#line 303 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_27,
#line 303 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_28,
#line 303 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_29,
#line 303 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_30);

#line 240 "optimize.m"
static void MR_CALL 
ll_backend__optimize__maybe_opt_debug_8_p_0(
#line 240 "optimize.m"
  MR_Word ll_backend__optimize__Info_9,
#line 240 "optimize.m"
  MR_Word ll_backend__optimize__Instrs_10,
#line 240 "optimize.m"
  MR_Word ll_backend__optimize__Counter_11,
#line 240 "optimize.m"
  MR_String ll_backend__optimize__Suffix_12,
#line 240 "optimize.m"
  MR_String ll_backend__optimize__Msg_13,
#line 240 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_14,
#line 240 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37,
#line 240 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_38);

#line 231 "optimize.m"
static MR_String MR_CALL 
ll_backend__optimize__num_to_str_1_f_0(
#line 231 "optimize.m"
  MR_Integer ll_backend__optimize__N_3);

#line 227 "optimize.m"
static MR_String MR_CALL 
ll_backend__optimize__opt_subdir_name_0_f_0(void);

#line 202 "optimize.m"
static void MR_CALL 
ll_backend__optimize__output_first_opt_debug_7_p_0(
#line 202 "optimize.m"
  MR_Word ll_backend__optimize__Info_8,
#line 202 "optimize.m"
  MR_String ll_backend__optimize__FileName_9,
#line 202 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_10,
#line 202 "optimize.m"
  MR_Word ll_backend__optimize__Instrs0_11,
#line 202 "optimize.m"
  MR_Word ll_backend__optimize__Counter_12);

#line 180 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_1(
#line 180 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg);

#line 180 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_3(
#line 180 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg);

#line 180 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_2(
#line 180 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg);

#line 180 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_4(
#line 180 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg);

#line 169 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_5(
#line 169 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg);

#line 169 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_7(
#line 169 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg);

#line 169 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_6(
#line 169 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg);

#line 169 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_8(
#line 169 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg);

#line 152 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0(
#line 152 "optimize.m"
  MR_Word ll_backend__optimize__Info_6,
#line 152 "optimize.m"
  MR_String ll_backend__optimize__Name_7,
#line 152 "optimize.m"
  MR_Integer ll_backend__optimize__Arity_8,
#line 152 "optimize.m"
  MR_Word ll_backend__optimize__PredProcId_9,
#line 152 "optimize.m"
  MR_Word * ll_backend__optimize__MaybeBaseName_10);

#line 131 "optimize.m"
static MR_Word MR_CALL 
ll_backend__optimize__make_internal_label_for_proc_label_2_f_0(
#line 131 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_4,
#line 131 "optimize.m"
  MR_Integer ll_backend__optimize__LabelNum_5);

#line 103 "optimize.m"
static MR_Box MR_CALL 
ll_backend__optimize__optimize_proc_4_p_0_1(
#line 103 "optimize.m"
  MR_Box ll_backend__optimize__closure_arg,
#line 103 "optimize.m"
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
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "bitmap.mh"



#line 673 "ll_backend.optimize.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__optimize__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 681 "ll_backend.optimize.c"
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

#line 709 "ll_backend.optimize.c"
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

#line 737 "ll_backend.optimize.c"
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

#line 861 "ll_backend.optimize.c"
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

#line 876 "ll_backend.optimize.c"
static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_stag_ordered_llds_opt_info_0_0[1] = {
  &ll_backend__optimize__ll_backend__optimize__du_functor_desc_llds_opt_info_0_0
};

#line 881 "ll_backend.optimize.c"
static const MR_DuPtagLayout ll_backend__optimize__ll_backend__optimize__du_ptag_ordered_llds_opt_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__optimize__ll_backend__optimize__du_stag_ordered_llds_opt_info_0_0
  }
};

#line 890 "ll_backend.optimize.c"
static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_name_ordered_llds_opt_info_0[1] = {
  &ll_backend__optimize__ll_backend__optimize__du_functor_desc_llds_opt_info_0_0
};

#line 895 "ll_backend.optimize.c"
static const MR_Integer ll_backend__optimize__ll_backend__optimize__functor_number_map_llds_opt_info_0[1] = {
  (MR_Integer) 0
};

#line 900 "ll_backend.optimize.c"
const MR_TypeCtorInfo_Struct ll_backend__optimize__ll_backend__optimize__type_ctor_info_llds_opt_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__optimize____Unify____llds_opt_info_0_0_10001)),
  ((MR_Box) (ll_backend__optimize____Compare____llds_opt_info_0_0_10001)),
  (MR_String) "ll_backend.optimize",
  (MR_String) "llds_opt_info",
  {
    ll_backend__optimize__ll_backend__optimize__du_name_ordered_llds_opt_info_0
  },
  {
    ll_backend__optimize__ll_backend__optimize__du_ptag_ordered_llds_opt_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__optimize__ll_backend__optimize__functor_number_map_llds_opt_info_0
};

#line 921 "ll_backend.optimize.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__optimize__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 929 "ll_backend.optimize.c"
static const MR_PseudoTypeInfo ll_backend__optimize__ll_backend__optimize__field_types_opt_debug_info_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__optimize__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0
};

#line 939 "ll_backend.optimize.c"
static const MR_DuFunctorDesc ll_backend__optimize__ll_backend__optimize__du_functor_desc_opt_debug_info_0_0 = {
  (MR_String) "opt_debug_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__optimize__ll_backend__optimize__field_types_opt_debug_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 954 "ll_backend.optimize.c"
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

#line 969 "ll_backend.optimize.c"
static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_stag_ordered_opt_debug_info_0_0[1] = {
  &ll_backend__optimize__ll_backend__optimize__du_functor_desc_opt_debug_info_0_1
};

#line 974 "ll_backend.optimize.c"
static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_stag_ordered_opt_debug_info_0_1[1] = {
  &ll_backend__optimize__ll_backend__optimize__du_functor_desc_opt_debug_info_0_0
};

#line 979 "ll_backend.optimize.c"
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

#line 993 "ll_backend.optimize.c"
static const MR_DuFunctorDescPtr ll_backend__optimize__ll_backend__optimize__du_name_ordered_opt_debug_info_0[2] = {
  &ll_backend__optimize__ll_backend__optimize__du_functor_desc_opt_debug_info_0_1,
  &ll_backend__optimize__ll_backend__optimize__du_functor_desc_opt_debug_info_0_0
};

#line 999 "ll_backend.optimize.c"
static const MR_Integer ll_backend__optimize__ll_backend__optimize__functor_number_map_opt_debug_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1005 "ll_backend.optimize.c"
const MR_TypeCtorInfo_Struct ll_backend__optimize__ll_backend__optimize__type_ctor_info_opt_debug_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__optimize____Unify____opt_debug_info_0_0_10001)),
  ((MR_Box) (ll_backend__optimize____Compare____opt_debug_info_0_0_10001)),
  (MR_String) "ll_backend.optimize",
  (MR_String) "opt_debug_info",
  {
    ll_backend__optimize__ll_backend__optimize__du_name_ordered_opt_debug_info_0
  },
  {
    ll_backend__optimize__ll_backend__optimize__du_ptag_ordered_opt_debug_info_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__optimize__ll_backend__optimize__functor_number_map_opt_debug_info_0
};

#line 1026 "ll_backend.optimize.c"
static MR_bool MR_CALL 
ll_backend__optimize____Unify____llds_opt_info_0_0_10001(
#line 1029 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_1,
#line 1031 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_2)
#line 1033 "ll_backend.optimize.c"
{
#line 1035 "ll_backend.optimize.c"
  {
#line 1037 "ll_backend.optimize.c"
    MR_bool ll_backend__optimize__succeeded;

#line 1040 "ll_backend.optimize.c"
    {
#line 1042 "ll_backend.optimize.c"
      ll_backend__optimize__succeeded = ll_backend__optimize____Unify____llds_opt_info_0_0(((MR_Word) ll_backend__optimize__wrapper_arg_1), ((MR_Word) ll_backend__optimize__wrapper_arg_2));
    }
#line 1045 "ll_backend.optimize.c"
    return ll_backend__optimize__succeeded;
#line 1047 "ll_backend.optimize.c"
  }
#line 1049 "ll_backend.optimize.c"
}

#line 1052 "ll_backend.optimize.c"
static void MR_CALL 
ll_backend__optimize____Compare____llds_opt_info_0_0_10001(
#line 1055 "ll_backend.optimize.c"
  MR_Box * ll_backend__optimize__wrapper_arg_1,
#line 1057 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_2,
#line 1059 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_3)
#line 1061 "ll_backend.optimize.c"
{
#line 1063 "ll_backend.optimize.c"
  {
#line 1065 "ll_backend.optimize.c"
    MR_Word ll_backend__optimize__conv0_HeadVar__1_1;

#line 1068 "ll_backend.optimize.c"
    {
#line 1070 "ll_backend.optimize.c"
      ll_backend__optimize____Compare____llds_opt_info_0_0(&ll_backend__optimize__conv0_HeadVar__1_1, ((MR_Word) ll_backend__optimize__wrapper_arg_2), ((MR_Word) ll_backend__optimize__wrapper_arg_3));
    }
#line 1073 "ll_backend.optimize.c"
    *ll_backend__optimize__wrapper_arg_1 = ((MR_Box) (ll_backend__optimize__conv0_HeadVar__1_1));
#line 1075 "ll_backend.optimize.c"
  }
#line 1077 "ll_backend.optimize.c"
}

#line 1080 "ll_backend.optimize.c"
static MR_bool MR_CALL 
ll_backend__optimize____Unify____opt_debug_info_0_0_10001(
#line 1083 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_1,
#line 1085 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_2)
#line 1087 "ll_backend.optimize.c"
{
#line 1089 "ll_backend.optimize.c"
  {
#line 1091 "ll_backend.optimize.c"
    MR_bool ll_backend__optimize__succeeded;

#line 1094 "ll_backend.optimize.c"
    {
#line 1096 "ll_backend.optimize.c"
      ll_backend__optimize__succeeded = ll_backend__optimize____Unify____opt_debug_info_0_0(((MR_Word) ll_backend__optimize__wrapper_arg_1), ((MR_Word) ll_backend__optimize__wrapper_arg_2));
    }
#line 1099 "ll_backend.optimize.c"
    return ll_backend__optimize__succeeded;
#line 1101 "ll_backend.optimize.c"
  }
#line 1103 "ll_backend.optimize.c"
}

#line 1106 "ll_backend.optimize.c"
static void MR_CALL 
ll_backend__optimize____Compare____opt_debug_info_0_0_10001(
#line 1109 "ll_backend.optimize.c"
  MR_Box * ll_backend__optimize__wrapper_arg_1,
#line 1111 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_2,
#line 1113 "ll_backend.optimize.c"
  MR_Box ll_backend__optimize__wrapper_arg_3)
#line 1115 "ll_backend.optimize.c"
{
#line 1117 "ll_backend.optimize.c"
  {
#line 1119 "ll_backend.optimize.c"
    MR_Word ll_backend__optimize__conv0_HeadVar__1_1;

#line 1122 "ll_backend.optimize.c"
    {
#line 1124 "ll_backend.optimize.c"
      ll_backend__optimize____Compare____opt_debug_info_0_0(&ll_backend__optimize__conv0_HeadVar__1_1, ((MR_Word) ll_backend__optimize__wrapper_arg_2), ((MR_Word) ll_backend__optimize__wrapper_arg_3));
    }
#line 1127 "ll_backend.optimize.c"
    *ll_backend__optimize__wrapper_arg_1 = ((MR_Box) (ll_backend__optimize__conv0_HeadVar__1_1));
#line 1129 "ll_backend.optimize.c"
  }
#line 1131 "ll_backend.optimize.c"
}

#line 138 "optimize.m"
static void MR_CALL 
ll_backend__optimize____Compare____opt_debug_info_0_0(
#line 138 "optimize.m"
  MR_Word * ll_backend__optimize__HeadVar__1_1,
#line 138 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__2_2,
#line 138 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__3_3)
#line 138 "optimize.m"
{
#line 138 "optimize.m"
  {
#line 138 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 138 "optimize.m"
    MR_Integer ll_backend__optimize__CastX_33 = (MR_Integer) ll_backend__optimize__HeadVar__2_2;
#line 138 "optimize.m"
    MR_Integer ll_backend__optimize__CastY_34 = (MR_Integer) ll_backend__optimize__HeadVar__3_3;

#line 138 "optimize.m"
    ll_backend__optimize__succeeded = (ll_backend__optimize__CastX_33 == ll_backend__optimize__CastY_34);
#line 138 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 1158 "ll_backend.optimize.c"
      *ll_backend__optimize__HeadVar__1_1 = (MR_Integer) 0;
#line 138 "optimize.m"
    else
#line 138 "optimize.m"
      if ((ll_backend__optimize__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 138 "optimize.m"
        if ((ll_backend__optimize__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 138 "optimize.m"
          *ll_backend__optimize__HeadVar__1_1 = (MR_Integer) 0;
#line 138 "optimize.m"
        else
#line 1170 "ll_backend.optimize.c"
          *ll_backend__optimize__HeadVar__1_1 = (MR_Integer) 2;
#line 138 "optimize.m"
      else
#line 138 "optimize.m"
        {
#line 138 "optimize.m"
          MR_Word ll_backend__optimize__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 5)));
#line 138 "optimize.m"
          MR_String ll_backend__optimize__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 4)));
#line 138 "optimize.m"
          MR_Integer ll_backend__optimize__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 3)));
#line 138 "optimize.m"
          MR_String ll_backend__optimize__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)));
#line 138 "optimize.m"
          MR_Integer ll_backend__optimize__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 1)));
#line 138 "optimize.m"
          MR_String ll_backend__optimize__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)));

#line 138 "optimize.m"
          if ((ll_backend__optimize__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1191 "ll_backend.optimize.c"
            *ll_backend__optimize__HeadVar__1_1 = (MR_Integer) 1;
#line 138 "optimize.m"
          else
#line 138 "optimize.m"
            {
#line 138 "optimize.m"
              MR_String ll_backend__optimize__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 0)));
#line 138 "optimize.m"
              MR_Integer ll_backend__optimize__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 1)));
#line 138 "optimize.m"
              MR_String ll_backend__optimize__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)));
#line 138 "optimize.m"
              MR_Integer ll_backend__optimize__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 3)));
#line 138 "optimize.m"
              MR_String ll_backend__optimize__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 4)));
#line 138 "optimize.m"
              MR_Word ll_backend__optimize__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 5)));
#line 138 "optimize.m"
              MR_Word ll_backend__optimize__V_16_16;

#line 138 "optimize.m"
              {
#line 138 "optimize.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__optimize__V_16_16, ll_backend__optimize__V_46_46, ll_backend__optimize__V_10_10);
              }
#line 1217 "ll_backend.optimize.c"
              ll_backend__optimize__succeeded = (ll_backend__optimize__V_16_16 == (MR_Integer) 0);
#line 138 "optimize.m"
              ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 138 "optimize.m"
              if (ll_backend__optimize__succeeded)
#line 138 "optimize.m"
                *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_16_16;
#line 138 "optimize.m"
              else
#line 138 "optimize.m"
                {
#line 138 "optimize.m"
                  MR_Word ll_backend__optimize__V_17_17;

#line 138 "optimize.m"
                  {
#line 138 "optimize.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_17_17, ll_backend__optimize__V_45_45, ll_backend__optimize__V_11_11);
                  }
#line 1237 "ll_backend.optimize.c"
                  ll_backend__optimize__succeeded = (ll_backend__optimize__V_17_17 == (MR_Integer) 0);
#line 138 "optimize.m"
                  ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 138 "optimize.m"
                  if (ll_backend__optimize__succeeded)
#line 138 "optimize.m"
                    *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_17_17;
#line 138 "optimize.m"
                  else
#line 138 "optimize.m"
                    {
#line 138 "optimize.m"
                      MR_Word ll_backend__optimize__V_18_18;

#line 138 "optimize.m"
                      {
#line 138 "optimize.m"
                        mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__optimize__V_18_18, ll_backend__optimize__V_44_44, ll_backend__optimize__V_12_12);
                      }
#line 1257 "ll_backend.optimize.c"
                      ll_backend__optimize__succeeded = (ll_backend__optimize__V_18_18 == (MR_Integer) 0);
#line 138 "optimize.m"
                      ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 138 "optimize.m"
                      if (ll_backend__optimize__succeeded)
#line 138 "optimize.m"
                        *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_18_18;
#line 138 "optimize.m"
                      else
#line 138 "optimize.m"
                        {
#line 138 "optimize.m"
                          MR_Word ll_backend__optimize__V_19_19;

#line 138 "optimize.m"
                          {
#line 138 "optimize.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_19_19, ll_backend__optimize__V_43_43, ll_backend__optimize__V_13_13);
                          }
#line 1277 "ll_backend.optimize.c"
                          ll_backend__optimize__succeeded = (ll_backend__optimize__V_19_19 == (MR_Integer) 0);
#line 138 "optimize.m"
                          ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 138 "optimize.m"
                          if (ll_backend__optimize__succeeded)
#line 138 "optimize.m"
                            *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_19_19;
#line 138 "optimize.m"
                          else
#line 138 "optimize.m"
                            {
#line 138 "optimize.m"
                              MR_Word ll_backend__optimize__V_20_20;

#line 138 "optimize.m"
                              {
#line 138 "optimize.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__optimize__V_20_20, ll_backend__optimize__V_42_42, ll_backend__optimize__V_14_14);
                              }
#line 1297 "ll_backend.optimize.c"
                              ll_backend__optimize__succeeded = (ll_backend__optimize__V_20_20 == (MR_Integer) 0);
#line 138 "optimize.m"
                              ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 138 "optimize.m"
                              if (ll_backend__optimize__succeeded)
#line 138 "optimize.m"
                                *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_20_20;
#line 138 "optimize.m"
                              else
#line 138 "optimize.m"
                                {
#line 138 "optimize.m"
                                  {
#line 138 "optimize.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__optimize_scalar_common_1[1], ll_backend__optimize__HeadVar__1_1, ((MR_Box) (ll_backend__optimize__V_41_41)), ((MR_Box) (ll_backend__optimize__V_15_15)));
#line 138 "optimize.m"
                                    return;
                                  }
#line 138 "optimize.m"
                                }
#line 138 "optimize.m"
                            }
#line 138 "optimize.m"
                        }
#line 138 "optimize.m"
                    }
#line 138 "optimize.m"
                }
#line 138 "optimize.m"
            }
#line 138 "optimize.m"
        }
#line 138 "optimize.m"
  }
#line 138 "optimize.m"
}

#line 138 "optimize.m"
static MR_bool MR_CALL 
ll_backend__optimize____Unify____opt_debug_info_0_0(
#line 138 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__1_1,
#line 138 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__2_2)
#line 138 "optimize.m"
{
#line 138 "optimize.m"
  {
#line 138 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 138 "optimize.m"
    MR_Integer ll_backend__optimize__CastX_17 = (MR_Integer) ll_backend__optimize__HeadVar__1_1;
#line 138 "optimize.m"
    MR_Integer ll_backend__optimize__CastY_18 = (MR_Integer) ll_backend__optimize__HeadVar__2_2;

#line 138 "optimize.m"
    ll_backend__optimize__succeeded = (ll_backend__optimize__CastX_17 == ll_backend__optimize__CastY_18);
#line 138 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 138 "optimize.m"
      ll_backend__optimize__succeeded = MR_TRUE;
#line 138 "optimize.m"
    else
#line 138 "optimize.m"
      if ((ll_backend__optimize__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 138 "optimize.m"
        {
#line 138 "optimize.m"
          MR_Integer ll_backend__optimize__CastX_15 = (MR_Integer) ll_backend__optimize__HeadVar__1_1;
#line 138 "optimize.m"
          MR_Integer ll_backend__optimize__CastY_16 = (MR_Integer) ll_backend__optimize__HeadVar__2_2;

#line 138 "optimize.m"
          ll_backend__optimize__succeeded = (ll_backend__optimize__CastY_16 == ll_backend__optimize__CastX_15);
#line 138 "optimize.m"
        }
#line 138 "optimize.m"
      else
#line 138 "optimize.m"
        {
#line 138 "optimize.m"
          MR_Word ll_backend__optimize__TypeInfo_19_19;
#line 138 "optimize.m"
          MR_String ll_backend__optimize__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 0)));
#line 138 "optimize.m"
          MR_Integer ll_backend__optimize__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 1)));
#line 138 "optimize.m"
          MR_String ll_backend__optimize__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)));
#line 138 "optimize.m"
          MR_Integer ll_backend__optimize__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 3)));
#line 138 "optimize.m"
          MR_String ll_backend__optimize__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 4)));
#line 138 "optimize.m"
          MR_Word ll_backend__optimize__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 5)));
#line 138 "optimize.m"
          MR_String ll_backend__optimize__V_9_9;
#line 138 "optimize.m"
          MR_Integer ll_backend__optimize__V_10_10;
#line 138 "optimize.m"
          MR_String ll_backend__optimize__V_11_11;
#line 138 "optimize.m"
          MR_Integer ll_backend__optimize__V_12_12;
#line 138 "optimize.m"
          MR_String ll_backend__optimize__V_13_13;
#line 138 "optimize.m"
          MR_Word ll_backend__optimize__V_14_14;

#line 138 "optimize.m"
          ll_backend__optimize__succeeded = ((MR_tag((MR_Word) ll_backend__optimize__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 138 "optimize.m"
          if (ll_backend__optimize__succeeded)
#line 138 "optimize.m"
            {
#line 138 "optimize.m"
              ll_backend__optimize__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)));
#line 138 "optimize.m"
              ll_backend__optimize__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 1)));
#line 138 "optimize.m"
              ll_backend__optimize__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)));
#line 138 "optimize.m"
              ll_backend__optimize__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 3)));
#line 138 "optimize.m"
              ll_backend__optimize__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 4)));
#line 138 "optimize.m"
              ll_backend__optimize__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 5)));
#line 1423 "ll_backend.optimize.c"
              ll_backend__optimize__succeeded = (strcmp(ll_backend__optimize__V_3_3, ll_backend__optimize__V_9_9) == 0);
#line 138 "optimize.m"
              if (ll_backend__optimize__succeeded)
#line 138 "optimize.m"
                {
#line 1429 "ll_backend.optimize.c"
                  ll_backend__optimize__succeeded = (ll_backend__optimize__V_4_4 == ll_backend__optimize__V_10_10);
#line 138 "optimize.m"
                  if (ll_backend__optimize__succeeded)
#line 138 "optimize.m"
                    {
#line 1435 "ll_backend.optimize.c"
                      ll_backend__optimize__succeeded = (strcmp(ll_backend__optimize__V_5_5, ll_backend__optimize__V_11_11) == 0);
#line 138 "optimize.m"
                      if (ll_backend__optimize__succeeded)
#line 138 "optimize.m"
                        {
#line 1441 "ll_backend.optimize.c"
                          ll_backend__optimize__succeeded = (ll_backend__optimize__V_6_6 == ll_backend__optimize__V_12_12);
#line 138 "optimize.m"
                          if (ll_backend__optimize__succeeded)
#line 138 "optimize.m"
                            {
#line 1447 "ll_backend.optimize.c"
                              ll_backend__optimize__succeeded = (strcmp(ll_backend__optimize__V_7_7, ll_backend__optimize__V_13_13) == 0);
#line 138 "optimize.m"
                              if (ll_backend__optimize__succeeded)
#line 138 "optimize.m"
                                {
#line 1453 "ll_backend.optimize.c"
                                  ll_backend__optimize__TypeInfo_19_19 = (MR_Word) &ll_backend__optimize_scalar_common_1[1];
#line 1455 "ll_backend.optimize.c"
                                  {
#line 1457 "ll_backend.optimize.c"
                                    return ll_backend__optimize__succeeded = mercury__builtin__unify_2_p_0(ll_backend__optimize__TypeInfo_19_19, ((MR_Box) (ll_backend__optimize__V_8_8)), ((MR_Box) (ll_backend__optimize__V_14_14)));
                                  }
#line 138 "optimize.m"
                                }
#line 138 "optimize.m"
                            }
#line 138 "optimize.m"
                        }
#line 138 "optimize.m"
                    }
#line 138 "optimize.m"
                }
#line 138 "optimize.m"
            }
#line 138 "optimize.m"
        }
#line 138 "optimize.m"
    return ll_backend__optimize__succeeded;
#line 138 "optimize.m"
  }
#line 138 "optimize.m"
}

#line 751 "optimize.m"
static void MR_CALL 
ll_backend__optimize____Compare____llds_opt_info_0_0(
#line 751 "optimize.m"
  MR_Word * ll_backend__optimize__HeadVar__1_1,
#line 751 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__2_2,
#line 751 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__3_3)
#line 751 "optimize.m"
{
#line 751 "optimize.m"
  {
#line 751 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 751 "optimize.m"
    MR_Integer ll_backend__optimize__CastX_75 = (MR_Integer) ll_backend__optimize__HeadVar__2_2;
#line 751 "optimize.m"
    MR_Integer ll_backend__optimize__CastY_76 = (MR_Integer) ll_backend__optimize__HeadVar__3_3;

#line 751 "optimize.m"
    ll_backend__optimize__succeeded = (ll_backend__optimize__CastX_75 == ll_backend__optimize__CastY_76);
#line 751 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 1505 "ll_backend.optimize.c"
      *ll_backend__optimize__HeadVar__1_1 = (MR_Integer) 0;
#line 751 "optimize.m"
    else
#line 751 "optimize.m"
      {
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Integer ll_backend__optimize__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 1)));
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Integer ll_backend__optimize__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 3)));
#line 751 "optimize.m"
        MR_Integer ll_backend__optimize__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 4)));
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 5)));
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 6)));
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 7)));
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Integer ll_backend__optimize__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 1)));
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Integer ll_backend__optimize__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 3)));
#line 751 "optimize.m"
        MR_Integer ll_backend__optimize__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 4)));
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 5)));
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 6)));
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 7)));
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_52_52;
#line 751 "optimize.m"
        MR_Integer ll_backend__optimize__V_101_101 = (MR_Integer) ll_backend__optimize__V_4_4;
#line 751 "optimize.m"
        MR_Integer ll_backend__optimize__V_102_102 = (MR_Integer) ll_backend__optimize__V_28_28;

#line 751 "optimize.m"
        {
#line 751 "optimize.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_52_52, ll_backend__optimize__V_101_101, ll_backend__optimize__V_102_102);
        }
#line 1619 "ll_backend.optimize.c"
        ll_backend__optimize__succeeded = (ll_backend__optimize__V_52_52 == (MR_Integer) 0);
#line 751 "optimize.m"
        ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 751 "optimize.m"
        if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
          *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_52_52;
#line 751 "optimize.m"
        else
#line 751 "optimize.m"
          {
#line 751 "optimize.m"
            MR_Word ll_backend__optimize__V_53_53;
#line 751 "optimize.m"
            MR_Integer ll_backend__optimize__V_103_103 = (MR_Integer) ll_backend__optimize__V_5_5;
#line 751 "optimize.m"
            MR_Integer ll_backend__optimize__V_104_104 = (MR_Integer) ll_backend__optimize__V_29_29;

#line 751 "optimize.m"
            {
#line 751 "optimize.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_53_53, ll_backend__optimize__V_103_103, ll_backend__optimize__V_104_104);
            }
#line 1643 "ll_backend.optimize.c"
            ll_backend__optimize__succeeded = (ll_backend__optimize__V_53_53 == (MR_Integer) 0);
#line 751 "optimize.m"
            ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 751 "optimize.m"
            if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
              *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_53_53;
#line 751 "optimize.m"
            else
#line 751 "optimize.m"
              {
#line 751 "optimize.m"
                MR_Word ll_backend__optimize__V_54_54;
#line 751 "optimize.m"
                MR_Integer ll_backend__optimize__V_105_105 = (MR_Integer) ll_backend__optimize__V_6_6;
#line 751 "optimize.m"
                MR_Integer ll_backend__optimize__V_106_106 = (MR_Integer) ll_backend__optimize__V_30_30;

#line 751 "optimize.m"
                {
#line 751 "optimize.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_54_54, ll_backend__optimize__V_105_105, ll_backend__optimize__V_106_106);
                }
#line 1667 "ll_backend.optimize.c"
                ll_backend__optimize__succeeded = (ll_backend__optimize__V_54_54 == (MR_Integer) 0);
#line 751 "optimize.m"
                ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 751 "optimize.m"
                if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                  *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_54_54;
#line 751 "optimize.m"
                else
#line 751 "optimize.m"
                  {
#line 751 "optimize.m"
                    MR_Word ll_backend__optimize__V_55_55;
#line 751 "optimize.m"
                    MR_Integer ll_backend__optimize__V_107_107 = (MR_Integer) ll_backend__optimize__V_7_7;
#line 751 "optimize.m"
                    MR_Integer ll_backend__optimize__V_108_108 = (MR_Integer) ll_backend__optimize__V_31_31;

#line 751 "optimize.m"
                    {
#line 751 "optimize.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_55_55, ll_backend__optimize__V_107_107, ll_backend__optimize__V_108_108);
                    }
#line 1691 "ll_backend.optimize.c"
                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_55_55 == (MR_Integer) 0);
#line 751 "optimize.m"
                    ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 751 "optimize.m"
                    if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                      *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_55_55;
#line 751 "optimize.m"
                    else
#line 751 "optimize.m"
                      {
#line 751 "optimize.m"
                        MR_Word ll_backend__optimize__V_56_56;

#line 751 "optimize.m"
                        {
#line 751 "optimize.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_56_56, ll_backend__optimize__V_8_8, ll_backend__optimize__V_32_32);
                        }
#line 1711 "ll_backend.optimize.c"
                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_56_56 == (MR_Integer) 0);
#line 751 "optimize.m"
                        ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 751 "optimize.m"
                        if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                          *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_56_56;
#line 751 "optimize.m"
                        else
#line 751 "optimize.m"
                          {
#line 751 "optimize.m"
                            MR_Word ll_backend__optimize__V_57_57;
#line 751 "optimize.m"
                            MR_Integer ll_backend__optimize__V_109_109 = (MR_Integer) ll_backend__optimize__V_9_9;
#line 751 "optimize.m"
                            MR_Integer ll_backend__optimize__V_110_110 = (MR_Integer) ll_backend__optimize__V_33_33;

#line 751 "optimize.m"
                            {
#line 751 "optimize.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_57_57, ll_backend__optimize__V_109_109, ll_backend__optimize__V_110_110);
                            }
#line 1735 "ll_backend.optimize.c"
                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_57_57 == (MR_Integer) 0);
#line 751 "optimize.m"
                            ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 751 "optimize.m"
                            if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                              *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_57_57;
#line 751 "optimize.m"
                            else
#line 751 "optimize.m"
                              {
#line 751 "optimize.m"
                                MR_Word ll_backend__optimize__V_58_58;
#line 751 "optimize.m"
                                MR_Integer ll_backend__optimize__V_111_111 = (MR_Integer) ll_backend__optimize__V_10_10;
#line 751 "optimize.m"
                                MR_Integer ll_backend__optimize__V_112_112 = (MR_Integer) ll_backend__optimize__V_34_34;

#line 751 "optimize.m"
                                {
#line 751 "optimize.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_58_58, ll_backend__optimize__V_111_111, ll_backend__optimize__V_112_112);
                                }
#line 1759 "ll_backend.optimize.c"
                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_58_58 == (MR_Integer) 0);
#line 751 "optimize.m"
                                ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 751 "optimize.m"
                                if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                  *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_58_58;
#line 751 "optimize.m"
                                else
#line 751 "optimize.m"
                                  {
#line 751 "optimize.m"
                                    MR_Word ll_backend__optimize__V_59_59;
#line 751 "optimize.m"
                                    MR_Integer ll_backend__optimize__V_113_113 = (MR_Integer) ll_backend__optimize__V_11_11;
#line 751 "optimize.m"
                                    MR_Integer ll_backend__optimize__V_114_114 = (MR_Integer) ll_backend__optimize__V_35_35;

#line 751 "optimize.m"
                                    {
#line 751 "optimize.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_59_59, ll_backend__optimize__V_113_113, ll_backend__optimize__V_114_114);
                                    }
#line 1783 "ll_backend.optimize.c"
                                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_59_59 == (MR_Integer) 0);
#line 751 "optimize.m"
                                    ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 751 "optimize.m"
                                    if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                      *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_59_59;
#line 751 "optimize.m"
                                    else
#line 751 "optimize.m"
                                      {
#line 751 "optimize.m"
                                        MR_Word ll_backend__optimize__V_60_60;
#line 751 "optimize.m"
                                        MR_Integer ll_backend__optimize__V_115_115 = (MR_Integer) ll_backend__optimize__V_12_12;
#line 751 "optimize.m"
                                        MR_Integer ll_backend__optimize__V_116_116 = (MR_Integer) ll_backend__optimize__V_36_36;

#line 751 "optimize.m"
                                        {
#line 751 "optimize.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_60_60, ll_backend__optimize__V_115_115, ll_backend__optimize__V_116_116);
                                        }
#line 1807 "ll_backend.optimize.c"
                                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_60_60 == (MR_Integer) 0);
#line 751 "optimize.m"
                                        ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 751 "optimize.m"
                                        if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                          *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_60_60;
#line 751 "optimize.m"
                                        else
#line 751 "optimize.m"
                                          {
#line 751 "optimize.m"
                                            MR_Word ll_backend__optimize__V_61_61;
#line 751 "optimize.m"
                                            MR_Integer ll_backend__optimize__V_117_117 = (MR_Integer) ll_backend__optimize__V_13_13;
#line 751 "optimize.m"
                                            MR_Integer ll_backend__optimize__V_118_118 = (MR_Integer) ll_backend__optimize__V_37_37;

#line 751 "optimize.m"
                                            {
#line 751 "optimize.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_61_61, ll_backend__optimize__V_117_117, ll_backend__optimize__V_118_118);
                                            }
#line 1831 "ll_backend.optimize.c"
                                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_61_61 == (MR_Integer) 0);
#line 751 "optimize.m"
                                            ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 751 "optimize.m"
                                            if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                              *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_61_61;
#line 751 "optimize.m"
                                            else
#line 751 "optimize.m"
                                              {
#line 751 "optimize.m"
                                                MR_Word ll_backend__optimize__V_62_62;
#line 751 "optimize.m"
                                                MR_Integer ll_backend__optimize__V_119_119 = (MR_Integer) ll_backend__optimize__V_14_14;
#line 751 "optimize.m"
                                                MR_Integer ll_backend__optimize__V_120_120 = (MR_Integer) ll_backend__optimize__V_38_38;

#line 751 "optimize.m"
                                                {
#line 751 "optimize.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_62_62, ll_backend__optimize__V_119_119, ll_backend__optimize__V_120_120);
                                                }
#line 1855 "ll_backend.optimize.c"
                                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_62_62 == (MR_Integer) 0);
#line 751 "optimize.m"
                                                ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 751 "optimize.m"
                                                if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                  *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_62_62;
#line 751 "optimize.m"
                                                else
#line 751 "optimize.m"
                                                  {
#line 751 "optimize.m"
                                                    MR_Word ll_backend__optimize__V_63_63;
#line 751 "optimize.m"
                                                    MR_Integer ll_backend__optimize__V_121_121 = (MR_Integer) ll_backend__optimize__V_15_15;
#line 751 "optimize.m"
                                                    MR_Integer ll_backend__optimize__V_122_122 = (MR_Integer) ll_backend__optimize__V_39_39;

#line 751 "optimize.m"
                                                    {
#line 751 "optimize.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_63_63, ll_backend__optimize__V_121_121, ll_backend__optimize__V_122_122);
                                                    }
#line 1879 "ll_backend.optimize.c"
                                                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_63_63 == (MR_Integer) 0);
#line 751 "optimize.m"
                                                    ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 751 "optimize.m"
                                                    if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                      *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_63_63;
#line 751 "optimize.m"
                                                    else
#line 751 "optimize.m"
                                                      {
#line 751 "optimize.m"
                                                        MR_Word ll_backend__optimize__V_64_64;
#line 751 "optimize.m"
                                                        MR_Integer ll_backend__optimize__V_123_123 = (MR_Integer) ll_backend__optimize__V_16_16;
#line 751 "optimize.m"
                                                        MR_Integer ll_backend__optimize__V_124_124 = (MR_Integer) ll_backend__optimize__V_40_40;

#line 751 "optimize.m"
                                                        {
#line 751 "optimize.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_64_64, ll_backend__optimize__V_123_123, ll_backend__optimize__V_124_124);
                                                        }
#line 1903 "ll_backend.optimize.c"
                                                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_64_64 == (MR_Integer) 0);
#line 751 "optimize.m"
                                                        ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 751 "optimize.m"
                                                        if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                          *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_64_64;
#line 751 "optimize.m"
                                                        else
#line 751 "optimize.m"
                                                          {
#line 751 "optimize.m"
                                                            MR_Word ll_backend__optimize__V_65_65;
#line 751 "optimize.m"
                                                            MR_Integer ll_backend__optimize__V_125_125 = (MR_Integer) ll_backend__optimize__V_17_17;
#line 751 "optimize.m"
                                                            MR_Integer ll_backend__optimize__V_126_126 = (MR_Integer) ll_backend__optimize__V_41_41;

#line 751 "optimize.m"
                                                            {
#line 751 "optimize.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_65_65, ll_backend__optimize__V_125_125, ll_backend__optimize__V_126_126);
                                                            }
#line 1927 "ll_backend.optimize.c"
                                                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_65_65 == (MR_Integer) 0);
#line 751 "optimize.m"
                                                            ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 751 "optimize.m"
                                                            if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                              *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_65_65;
#line 751 "optimize.m"
                                                            else
#line 751 "optimize.m"
                                                              {
#line 751 "optimize.m"
                                                                MR_Word ll_backend__optimize__V_66_66;
#line 751 "optimize.m"
                                                                MR_Integer ll_backend__optimize__V_127_127 = (MR_Integer) ll_backend__optimize__V_18_18;
#line 751 "optimize.m"
                                                                MR_Integer ll_backend__optimize__V_128_128 = (MR_Integer) ll_backend__optimize__V_42_42;

#line 751 "optimize.m"
                                                                {
#line 751 "optimize.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_66_66, ll_backend__optimize__V_127_127, ll_backend__optimize__V_128_128);
                                                                }
#line 1951 "ll_backend.optimize.c"
                                                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_66_66 == (MR_Integer) 0);
#line 751 "optimize.m"
                                                                ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 751 "optimize.m"
                                                                if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                                  *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_66_66;
#line 751 "optimize.m"
                                                                else
#line 751 "optimize.m"
                                                                  {
#line 751 "optimize.m"
                                                                    MR_Word ll_backend__optimize__V_67_67;
#line 751 "optimize.m"
                                                                    MR_Integer ll_backend__optimize__V_129_129 = (MR_Integer) ll_backend__optimize__V_19_19;
#line 751 "optimize.m"
                                                                    MR_Integer ll_backend__optimize__V_130_130 = (MR_Integer) ll_backend__optimize__V_43_43;

#line 751 "optimize.m"
                                                                    {
#line 751 "optimize.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_67_67, ll_backend__optimize__V_129_129, ll_backend__optimize__V_130_130);
                                                                    }
#line 1975 "ll_backend.optimize.c"
                                                                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_67_67 == (MR_Integer) 0);
#line 751 "optimize.m"
                                                                    ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 751 "optimize.m"
                                                                    if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                                      *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_67_67;
#line 751 "optimize.m"
                                                                    else
#line 751 "optimize.m"
                                                                      {
#line 751 "optimize.m"
                                                                        MR_Word ll_backend__optimize__V_68_68;
#line 751 "optimize.m"
                                                                        MR_Integer ll_backend__optimize__V_131_131 = (MR_Integer) ll_backend__optimize__V_20_20;
#line 751 "optimize.m"
                                                                        MR_Integer ll_backend__optimize__V_132_132 = (MR_Integer) ll_backend__optimize__V_44_44;

#line 751 "optimize.m"
                                                                        {
#line 751 "optimize.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_68_68, ll_backend__optimize__V_131_131, ll_backend__optimize__V_132_132);
                                                                        }
#line 1999 "ll_backend.optimize.c"
                                                                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_68_68 == (MR_Integer) 0);
#line 751 "optimize.m"
                                                                        ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 751 "optimize.m"
                                                                        if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                                          *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_68_68;
#line 751 "optimize.m"
                                                                        else
#line 751 "optimize.m"
                                                                          {
#line 751 "optimize.m"
                                                                            MR_Word ll_backend__optimize__V_69_69;
#line 751 "optimize.m"
                                                                            MR_Integer ll_backend__optimize__V_133_133 = (MR_Integer) ll_backend__optimize__V_21_21;
#line 751 "optimize.m"
                                                                            MR_Integer ll_backend__optimize__V_134_134 = (MR_Integer) ll_backend__optimize__V_45_45;

#line 751 "optimize.m"
                                                                            {
#line 751 "optimize.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_69_69, ll_backend__optimize__V_133_133, ll_backend__optimize__V_134_134);
                                                                            }
#line 2023 "ll_backend.optimize.c"
                                                                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_69_69 == (MR_Integer) 0);
#line 751 "optimize.m"
                                                                            ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 751 "optimize.m"
                                                                            if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                                              *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_69_69;
#line 751 "optimize.m"
                                                                            else
#line 751 "optimize.m"
                                                                              {
#line 751 "optimize.m"
                                                                                MR_Word ll_backend__optimize__V_70_70;
#line 751 "optimize.m"
                                                                                MR_Integer ll_backend__optimize__V_135_135 = (MR_Integer) ll_backend__optimize__V_22_22;
#line 751 "optimize.m"
                                                                                MR_Integer ll_backend__optimize__V_136_136 = (MR_Integer) ll_backend__optimize__V_46_46;

#line 751 "optimize.m"
                                                                                {
#line 751 "optimize.m"
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_70_70, ll_backend__optimize__V_135_135, ll_backend__optimize__V_136_136);
                                                                                }
#line 2047 "ll_backend.optimize.c"
                                                                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_70_70 == (MR_Integer) 0);
#line 751 "optimize.m"
                                                                                ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 751 "optimize.m"
                                                                                if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                                                  *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_70_70;
#line 751 "optimize.m"
                                                                                else
#line 751 "optimize.m"
                                                                                  {
#line 751 "optimize.m"
                                                                                    MR_Word ll_backend__optimize__V_71_71;

#line 751 "optimize.m"
                                                                                    {
#line 751 "optimize.m"
                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_71_71, ll_backend__optimize__V_23_23, ll_backend__optimize__V_47_47);
                                                                                    }
#line 2067 "ll_backend.optimize.c"
                                                                                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_71_71 == (MR_Integer) 0);
#line 751 "optimize.m"
                                                                                    ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 751 "optimize.m"
                                                                                    if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                                                      *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_71_71;
#line 751 "optimize.m"
                                                                                    else
#line 751 "optimize.m"
                                                                                      {
#line 751 "optimize.m"
                                                                                        MR_Word ll_backend__optimize__V_72_72;

#line 751 "optimize.m"
                                                                                        {
#line 751 "optimize.m"
                                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_72_72, ll_backend__optimize__V_24_24, ll_backend__optimize__V_48_48);
                                                                                        }
#line 2087 "ll_backend.optimize.c"
                                                                                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_72_72 == (MR_Integer) 0);
#line 751 "optimize.m"
                                                                                        ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 751 "optimize.m"
                                                                                        if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                                                          *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_72_72;
#line 751 "optimize.m"
                                                                                        else
#line 751 "optimize.m"
                                                                                          {
#line 751 "optimize.m"
                                                                                            MR_Word ll_backend__optimize__V_73_73;
#line 751 "optimize.m"
                                                                                            MR_Integer ll_backend__optimize__V_137_137 = (MR_Integer) ll_backend__optimize__V_25_25;
#line 751 "optimize.m"
                                                                                            MR_Integer ll_backend__optimize__V_138_138 = (MR_Integer) ll_backend__optimize__V_49_49;

#line 751 "optimize.m"
                                                                                            {
#line 751 "optimize.m"
                                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__optimize__V_73_73, ll_backend__optimize__V_137_137, ll_backend__optimize__V_138_138);
                                                                                            }
#line 2111 "ll_backend.optimize.c"
                                                                                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_73_73 == (MR_Integer) 0);
#line 751 "optimize.m"
                                                                                            ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 751 "optimize.m"
                                                                                            if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                                                              *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_73_73;
#line 751 "optimize.m"
                                                                                            else
#line 751 "optimize.m"
                                                                                              {
#line 751 "optimize.m"
                                                                                                MR_Word ll_backend__optimize__V_74_74;

#line 751 "optimize.m"
                                                                                                {
#line 751 "optimize.m"
                                                                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__optimize_scalar_common_1[0], &ll_backend__optimize__V_74_74, ((MR_Box) (ll_backend__optimize__V_26_26)), ((MR_Box) (ll_backend__optimize__V_50_50)));
                                                                                                }
#line 2131 "ll_backend.optimize.c"
                                                                                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_74_74 == (MR_Integer) 0);
#line 751 "optimize.m"
                                                                                                ll_backend__optimize__succeeded = !(ll_backend__optimize__succeeded);
#line 751 "optimize.m"
                                                                                                if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                                                                  *ll_backend__optimize__HeadVar__1_1 = ll_backend__optimize__V_74_74;
#line 751 "optimize.m"
                                                                                                else
#line 751 "optimize.m"
                                                                                                  {
#line 751 "optimize.m"
                                                                                                    {
#line 751 "optimize.m"
                                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__optimize_scalar_common_1[0], ll_backend__optimize__HeadVar__1_1, ((MR_Box) (ll_backend__optimize__V_27_27)), ((MR_Box) (ll_backend__optimize__V_51_51)));
#line 751 "optimize.m"
                                                                                                      return;
                                                                                                    }
#line 751 "optimize.m"
                                                                                                  }
#line 751 "optimize.m"
                                                                                              }
#line 751 "optimize.m"
                                                                                          }
#line 751 "optimize.m"
                                                                                      }
#line 751 "optimize.m"
                                                                                  }
#line 751 "optimize.m"
                                                                              }
#line 751 "optimize.m"
                                                                          }
#line 751 "optimize.m"
                                                                      }
#line 751 "optimize.m"
                                                                  }
#line 751 "optimize.m"
                                                              }
#line 751 "optimize.m"
                                                          }
#line 751 "optimize.m"
                                                      }
#line 751 "optimize.m"
                                                  }
#line 751 "optimize.m"
                                              }
#line 751 "optimize.m"
                                          }
#line 751 "optimize.m"
                                      }
#line 751 "optimize.m"
                                  }
#line 751 "optimize.m"
                              }
#line 751 "optimize.m"
                          }
#line 751 "optimize.m"
                      }
#line 751 "optimize.m"
                  }
#line 751 "optimize.m"
              }
#line 751 "optimize.m"
          }
#line 751 "optimize.m"
      }
#line 751 "optimize.m"
  }
#line 751 "optimize.m"
}

#line 751 "optimize.m"
static MR_bool MR_CALL 
ll_backend__optimize____Unify____llds_opt_info_0_0(
#line 751 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__1_1,
#line 751 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__2_2)
#line 751 "optimize.m"
{
#line 751 "optimize.m"
  {
#line 751 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 751 "optimize.m"
    MR_Integer ll_backend__optimize__CastX_51 = (MR_Integer) ll_backend__optimize__HeadVar__1_1;
#line 751 "optimize.m"
    MR_Integer ll_backend__optimize__CastY_52 = (MR_Integer) ll_backend__optimize__HeadVar__2_2;

#line 751 "optimize.m"
    ll_backend__optimize__succeeded = (ll_backend__optimize__CastX_51 == ll_backend__optimize__CastY_52);
#line 751 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
      ll_backend__optimize__succeeded = MR_TRUE;
#line 751 "optimize.m"
    else
#line 751 "optimize.m"
      {
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__TypeInfo_53_53;
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__TypeInfo_54_54;
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Integer ll_backend__optimize__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 1)));
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Integer ll_backend__optimize__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 3)));
#line 751 "optimize.m"
        MR_Integer ll_backend__optimize__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 4)));
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 5)));
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 6)));
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__1_1, (MR_Integer) 7)));
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Integer ll_backend__optimize__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 1)));
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 751 "optimize.m"
        MR_Integer ll_backend__optimize__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 3)));
#line 751 "optimize.m"
        MR_Integer ll_backend__optimize__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 4)));
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 5)));
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 6)));
#line 751 "optimize.m"
        MR_Word ll_backend__optimize__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__2_2, (MR_Integer) 7)));

#line 2332 "ll_backend.optimize.c"
        ll_backend__optimize__succeeded = (ll_backend__optimize__V_3_3 == ll_backend__optimize__V_27_27);
#line 751 "optimize.m"
        if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
          {
#line 2338 "ll_backend.optimize.c"
            ll_backend__optimize__succeeded = (ll_backend__optimize__V_4_4 == ll_backend__optimize__V_28_28);
#line 751 "optimize.m"
            if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
              {
#line 2344 "ll_backend.optimize.c"
                ll_backend__optimize__succeeded = (ll_backend__optimize__V_5_5 == ll_backend__optimize__V_29_29);
#line 751 "optimize.m"
                if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                  {
#line 2350 "ll_backend.optimize.c"
                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_6_6 == ll_backend__optimize__V_30_30);
#line 751 "optimize.m"
                    if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                      {
#line 2356 "ll_backend.optimize.c"
                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_7_7 == ll_backend__optimize__V_31_31);
#line 751 "optimize.m"
                        if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                          {
#line 2362 "ll_backend.optimize.c"
                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_8_8 == ll_backend__optimize__V_32_32);
#line 751 "optimize.m"
                            if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                              {
#line 2368 "ll_backend.optimize.c"
                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_9_9 == ll_backend__optimize__V_33_33);
#line 751 "optimize.m"
                                if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                  {
#line 2374 "ll_backend.optimize.c"
                                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_10_10 == ll_backend__optimize__V_34_34);
#line 751 "optimize.m"
                                    if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                      {
#line 2380 "ll_backend.optimize.c"
                                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_11_11 == ll_backend__optimize__V_35_35);
#line 751 "optimize.m"
                                        if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                          {
#line 2386 "ll_backend.optimize.c"
                                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_12_12 == ll_backend__optimize__V_36_36);
#line 751 "optimize.m"
                                            if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                              {
#line 2392 "ll_backend.optimize.c"
                                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_13_13 == ll_backend__optimize__V_37_37);
#line 751 "optimize.m"
                                                if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                  {
#line 2398 "ll_backend.optimize.c"
                                                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_14_14 == ll_backend__optimize__V_38_38);
#line 751 "optimize.m"
                                                    if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                      {
#line 2404 "ll_backend.optimize.c"
                                                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_15_15 == ll_backend__optimize__V_39_39);
#line 751 "optimize.m"
                                                        if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                          {
#line 2410 "ll_backend.optimize.c"
                                                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_16_16 == ll_backend__optimize__V_40_40);
#line 751 "optimize.m"
                                                            if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                              {
#line 2416 "ll_backend.optimize.c"
                                                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_17_17 == ll_backend__optimize__V_41_41);
#line 751 "optimize.m"
                                                                if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                                  {
#line 2422 "ll_backend.optimize.c"
                                                                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_18_18 == ll_backend__optimize__V_42_42);
#line 751 "optimize.m"
                                                                    if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                                      {
#line 2428 "ll_backend.optimize.c"
                                                                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_19_19 == ll_backend__optimize__V_43_43);
#line 751 "optimize.m"
                                                                        if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                                          {
#line 2434 "ll_backend.optimize.c"
                                                                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_20_20 == ll_backend__optimize__V_44_44);
#line 751 "optimize.m"
                                                                            if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                                              {
#line 2440 "ll_backend.optimize.c"
                                                                                ll_backend__optimize__succeeded = (ll_backend__optimize__V_21_21 == ll_backend__optimize__V_45_45);
#line 751 "optimize.m"
                                                                                if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                                                  {
#line 2446 "ll_backend.optimize.c"
                                                                                    ll_backend__optimize__succeeded = (ll_backend__optimize__V_22_22 == ll_backend__optimize__V_46_46);
#line 751 "optimize.m"
                                                                                    if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                                                      {
#line 2452 "ll_backend.optimize.c"
                                                                                        ll_backend__optimize__succeeded = (ll_backend__optimize__V_23_23 == ll_backend__optimize__V_47_47);
#line 751 "optimize.m"
                                                                                        if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                                                          {
#line 2458 "ll_backend.optimize.c"
                                                                                            ll_backend__optimize__succeeded = (ll_backend__optimize__V_24_24 == ll_backend__optimize__V_48_48);
#line 751 "optimize.m"
                                                                                            if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                                                              {
#line 2464 "ll_backend.optimize.c"
                                                                                                ll_backend__optimize__TypeInfo_53_53 = (MR_Word) &ll_backend__optimize_scalar_common_1[0];
#line 2466 "ll_backend.optimize.c"
                                                                                                {
#line 2468 "ll_backend.optimize.c"
                                                                                                  ll_backend__optimize__succeeded = mercury__builtin__unify_2_p_0(ll_backend__optimize__TypeInfo_53_53, ((MR_Box) (ll_backend__optimize__V_25_25)), ((MR_Box) (ll_backend__optimize__V_49_49)));
                                                                                                }
#line 751 "optimize.m"
                                                                                                if (ll_backend__optimize__succeeded)
#line 751 "optimize.m"
                                                                                                  {
#line 2475 "ll_backend.optimize.c"
                                                                                                    ll_backend__optimize__TypeInfo_54_54 = (MR_Word) &ll_backend__optimize_scalar_common_1[0];
#line 2477 "ll_backend.optimize.c"
                                                                                                    {
#line 2479 "ll_backend.optimize.c"
                                                                                                      return ll_backend__optimize__succeeded = mercury__builtin__unify_2_p_0(ll_backend__optimize__TypeInfo_54_54, ((MR_Box) (ll_backend__optimize__V_26_26)), ((MR_Box) (ll_backend__optimize__V_50_50)));
                                                                                                    }
#line 751 "optimize.m"
                                                                                                  }
#line 751 "optimize.m"
                                                                                              }
#line 751 "optimize.m"
                                                                                          }
#line 751 "optimize.m"
                                                                                      }
#line 751 "optimize.m"
                                                                                  }
#line 751 "optimize.m"
                                                                              }
#line 751 "optimize.m"
                                                                          }
#line 751 "optimize.m"
                                                                      }
#line 751 "optimize.m"
                                                                  }
#line 751 "optimize.m"
                                                              }
#line 751 "optimize.m"
                                                          }
#line 751 "optimize.m"
                                                      }
#line 751 "optimize.m"
                                                  }
#line 751 "optimize.m"
                                              }
#line 751 "optimize.m"
                                          }
#line 751 "optimize.m"
                                      }
#line 751 "optimize.m"
                                  }
#line 751 "optimize.m"
                              }
#line 751 "optimize.m"
                          }
#line 751 "optimize.m"
                      }
#line 751 "optimize.m"
                  }
#line 751 "optimize.m"
              }
#line 751 "optimize.m"
          }
#line 751 "optimize.m"
      }
#line 751 "optimize.m"
    return ll_backend__optimize__succeeded;
#line 751 "optimize.m"
  }
#line 751 "optimize.m"
}

#line 783 "optimize.m"
static MR_Word MR_CALL 
ll_backend__optimize__init_llds_opt_info_1_f_0(
#line 783 "optimize.m"
  MR_Word ll_backend__optimize__Globals_3)
#line 783 "optimize.m"
{
#line 785 "optimize.m"
  {
#line 785 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 785 "optimize.m"
    MR_Word ll_backend__optimize__Info_4;
#line 785 "optimize.m"
    MR_Word ll_backend__optimize__AutoComments_5;
#line 785 "optimize.m"
    MR_Word ll_backend__optimize__DetailedStatistics_6;
#line 785 "optimize.m"
    MR_Word ll_backend__optimize__VeryVerbose_7;
#line 785 "optimize.m"
    MR_Word ll_backend__optimize__CheckedNondetTailCalls_8;
#line 785 "optimize.m"
    MR_Integer ll_backend__optimize__NumRealRRegs_9;
#line 785 "optimize.m"
    MR_Word ll_backend__optimize__GCMethod_10;
#line 785 "optimize.m"
    MR_Word ll_backend__optimize__OptDelaySlots_11;
#line 785 "optimize.m"
    MR_Word ll_backend__optimize__OptDups_12;
#line 785 "optimize.m"
    MR_Word ll_backend__optimize__OptFrames_13;
#line 785 "optimize.m"
    MR_Word ll_backend__optimize__FrameOptComments_14;
#line 785 "optimize.m"
    MR_Word ll_backend__optimize__OptJumps_15;
#line 785 "optimize.m"
    MR_Word ll_backend__optimize__OptFullJumps_16;
#line 785 "optimize.m"
    MR_Word ll_backend__optimize__OptLabels_17;
#line 785 "optimize.m"
    MR_Word ll_backend__optimize__OptPeep_18;
#line 785 "optimize.m"
    MR_Word ll_backend__optimize__OptPeepMkword_19;
#line 785 "optimize.m"
    MR_Word ll_backend__optimize__OptReassign_20;
#line 785 "optimize.m"
    MR_Word ll_backend__optimize__PessimizeTailCalls_21;
#line 785 "optimize.m"
    MR_Word ll_backend__optimize__StdLabels_22;
#line 785 "optimize.m"
    MR_Word ll_backend__optimize__UseLocalVars_23;
#line 785 "optimize.m"
    MR_Integer ll_backend__optimize__LocalVarAccessThreshold_24;
#line 785 "optimize.m"
    MR_Integer ll_backend__optimize__OptRepeat_25;
#line 785 "optimize.m"
    MR_Word ll_backend__optimize__DebugOpt_26;
#line 785 "optimize.m"
    MR_Word ll_backend__optimize__DebugOptPredIdStrs_27;
#line 785 "optimize.m"
    MR_Word ll_backend__optimize__DebugOptPredNames_28;

#line 786 "optimize.m"
    {
#line 786 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 138, &ll_backend__optimize__AutoComments_5);
    }
#line 787 "optimize.m"
    {
#line 787 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 56, &ll_backend__optimize__DetailedStatistics_6);
    }
#line 789 "optimize.m"
    {
#line 789 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 46, &ll_backend__optimize__VeryVerbose_7);
    }
#line 791 "optimize.m"
    {
#line 791 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 466, &ll_backend__optimize__CheckedNondetTailCalls_8);
    }
#line 793 "optimize.m"
    {
#line 793 "optimize.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 309, &ll_backend__optimize__NumRealRRegs_9);
    }
#line 794 "optimize.m"
    {
#line 794 "optimize.m"
      libs__globals__get_gc_method_2_p_0(ll_backend__optimize__Globals_3, &ll_backend__optimize__GCMethod_10);
    }
#line 796 "optimize.m"
    {
#line 796 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 474, &ll_backend__optimize__OptDelaySlots_11);
    }
#line 797 "optimize.m"
    {
#line 797 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 471, &ll_backend__optimize__OptDups_12);
    }
#line 798 "optimize.m"
    {
#line 798 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 473, &ll_backend__optimize__OptFrames_13);
    }
#line 799 "optimize.m"
    {
#line 799 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 139, &ll_backend__optimize__FrameOptComments_14);
    }
#line 800 "optimize.m"
    {
#line 800 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 463, &ll_backend__optimize__OptJumps_15);
    }
#line 801 "optimize.m"
    {
#line 801 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 464, &ll_backend__optimize__OptFullJumps_16);
    }
#line 802 "optimize.m"
    {
#line 802 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 470, &ll_backend__optimize__OptLabels_17);
    }
#line 803 "optimize.m"
    {
#line 803 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 461, &ll_backend__optimize__OptPeep_18);
    }
#line 804 "optimize.m"
    {
#line 804 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 462, &ll_backend__optimize__OptPeepMkword_19);
    }
#line 805 "optimize.m"
    {
#line 805 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 475, &ll_backend__optimize__OptReassign_20);
    }
#line 806 "optimize.m"
    {
#line 806 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 465, &ll_backend__optimize__PessimizeTailCalls_21);
    }
#line 808 "optimize.m"
    {
#line 808 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 469, &ll_backend__optimize__StdLabels_22);
    }
#line 809 "optimize.m"
    {
#line 809 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 467, &ll_backend__optimize__UseLocalVars_23);
    }
#line 810 "optimize.m"
    {
#line 810 "optimize.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 468, &ll_backend__optimize__LocalVarAccessThreshold_24);
    }
#line 812 "optimize.m"
    {
#line 812 "optimize.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 476, &ll_backend__optimize__OptRepeat_25);
    }
#line 814 "optimize.m"
    {
#line 814 "optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 67, &ll_backend__optimize__DebugOpt_26);
    }
#line 815 "optimize.m"
    {
#line 815 "optimize.m"
      libs__globals__lookup_accumulating_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 69, &ll_backend__optimize__DebugOptPredIdStrs_27);
    }
#line 817 "optimize.m"
    {
#line 817 "optimize.m"
      libs__globals__lookup_accumulating_option_3_p_0(ll_backend__optimize__Globals_3, (MR_Integer) 70, &ll_backend__optimize__DebugOptPredNames_28);
    }
#line 820 "optimize.m"
    {
#line 820 "optimize.m"
      ll_backend__optimize__Info_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 820 "optimize.m"
      MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_4, 0) = ((MR_Box) ((ll_backend__optimize__AutoComments_5 | ((((ll_backend__optimize__DetailedStatistics_6 << (MR_Integer) 1)) | ((((ll_backend__optimize__VeryVerbose_7 << (MR_Integer) 2)) | ((ll_backend__optimize__CheckedNondetTailCalls_8 << (MR_Integer) 3)))))))));
#line 820 "optimize.m"
      MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_4, 1) = ((MR_Box) (ll_backend__optimize__NumRealRRegs_9));
#line 820 "optimize.m"
      MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_4, 2) = ((MR_Box) ((ll_backend__optimize__GCMethod_10 | ((((ll_backend__optimize__OptDelaySlots_11 << (MR_Integer) 3)) | ((((ll_backend__optimize__OptDups_12 << (MR_Integer) 4)) | ((((ll_backend__optimize__OptFrames_13 << (MR_Integer) 5)) | ((((ll_backend__optimize__FrameOptComments_14 << (MR_Integer) 6)) | ((((ll_backend__optimize__OptJumps_15 << (MR_Integer) 7)) | ((((ll_backend__optimize__OptFullJumps_16 << (MR_Integer) 8)) | ((((ll_backend__optimize__OptLabels_17 << (MR_Integer) 9)) | ((((ll_backend__optimize__OptPeep_18 << (MR_Integer) 10)) | ((((ll_backend__optimize__OptPeepMkword_19 << (MR_Integer) 11)) | ((((ll_backend__optimize__OptReassign_20 << (MR_Integer) 12)) | ((((ll_backend__optimize__PessimizeTailCalls_21 << (MR_Integer) 13)) | ((((ll_backend__optimize__StdLabels_22 << (MR_Integer) 14)) | ((ll_backend__optimize__UseLocalVars_23 << (MR_Integer) 15)))))))))))))))))))))))))))));
#line 820 "optimize.m"
      MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_4, 3) = ((MR_Box) (ll_backend__optimize__LocalVarAccessThreshold_24));
#line 820 "optimize.m"
      MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_4, 4) = ((MR_Box) (ll_backend__optimize__OptRepeat_25));
#line 820 "optimize.m"
      MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_4, 5) = ((MR_Box) (ll_backend__optimize__DebugOpt_26));
#line 820 "optimize.m"
      MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_4, 6) = ((MR_Box) (ll_backend__optimize__DebugOptPredIdStrs_27));
#line 820 "optimize.m"
      MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_4, 7) = ((MR_Box) (ll_backend__optimize__DebugOptPredNames_28));
#line 820 "optimize.m"
    }
#line 785 "optimize.m"
    return ll_backend__optimize__Info_4;
#line 785 "optimize.m"
  }
#line 783 "optimize.m"
}

#line 740 "optimize.m"
static void MR_CALL 
ll_backend__optimize__escape_dir_char_3_p_0(
#line 740 "optimize.m"
  MR_Char ll_backend__optimize__Char_4,
#line 740 "optimize.m"
  MR_String ll_backend__optimize__STATE_VARIABLE_Str_0_6,
#line 740 "optimize.m"
  MR_String * ll_backend__optimize__STATE_VARIABLE_Str_7)
#line 740 "optimize.m"
{
#line 745 "optimize.m"
  {
#line 745 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;

#line 743 "optimize.m"
    {
#line 743 "optimize.m"
      ll_backend__optimize__succeeded = mercury__dir__is_directory_separator_1_p_0(ll_backend__optimize__Char_4);
    }
#line 745 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 744 "optimize.m"
      {
#line 744 "optimize.m"
        {
#line 744 "optimize.m"
          *ll_backend__optimize__STATE_VARIABLE_Str_7 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__STATE_VARIABLE_Str_0_6, (MR_String) "_slash_");
        }
#line 744 "optimize.m"
      }
#line 745 "optimize.m"
    else
#line 746 "optimize.m"
      {
#line 746 "optimize.m"
        MR_String ll_backend__optimize__V_11_11;

#line 746 "optimize.m"
        {
#line 746 "optimize.m"
          ll_backend__optimize__V_11_11 = mercury__string__char_to_string_1_f_0(ll_backend__optimize__Char_4);
        }
#line 746 "optimize.m"
        {
#line 746 "optimize.m"
          *ll_backend__optimize__STATE_VARIABLE_Str_7 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__STATE_VARIABLE_Str_0_6, ll_backend__optimize__V_11_11);
        }
#line 746 "optimize.m"
      }
#line 745 "optimize.m"
  }
#line 740 "optimize.m"
}

#line 738 "optimize.m"
static void MR_CALL 
ll_backend__optimize__mangle_name_as_filename_1_f_0_1(
#line 738 "optimize.m"
  MR_Box ll_backend__optimize__closure_arg,
#line 738 "optimize.m"
  MR_Box ll_backend__optimize__wrapper_arg_1,
#line 738 "optimize.m"
  MR_Box ll_backend__optimize__wrapper_arg_2,
#line 738 "optimize.m"
  MR_Box * ll_backend__optimize__wrapper_arg_3)
#line 738 "optimize.m"
{
#line 738 "optimize.m"
  {
#line 738 "optimize.m"
    MR_Box ll_backend__optimize__closure = ll_backend__optimize__closure_arg;
#line 738 "optimize.m"
    MR_String ll_backend__optimize__conv0_STATE_VARIABLE_Str_7;

#line 738 "optimize.m"
    {
#line 738 "optimize.m"
      ll_backend__optimize__escape_dir_char_3_p_0(((MR_Char) (MR_Word) ll_backend__optimize__wrapper_arg_1), ((MR_String) ll_backend__optimize__wrapper_arg_2), &ll_backend__optimize__conv0_STATE_VARIABLE_Str_7);
    }
#line 738 "optimize.m"
    *ll_backend__optimize__wrapper_arg_3 = ((MR_Box) (ll_backend__optimize__conv0_STATE_VARIABLE_Str_7));
#line 738 "optimize.m"
  }
#line 738 "optimize.m"
}

#line 735 "optimize.m"
static MR_String MR_CALL 
ll_backend__optimize__mangle_name_as_filename_1_f_0(
#line 735 "optimize.m"
  MR_String ll_backend__optimize__Str0_3)
#line 735 "optimize.m"
{
#line 737 "optimize.m"
  {
#line 737 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 737 "optimize.m"
    MR_String ll_backend__optimize__Str_4;
#line 738 "optimize.m"
    MR_Box ll_backend__optimize__conv1_Str_4;

#line 738 "optimize.m"
    {
#line 738 "optimize.m"
      mercury__string__foldl_4_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__optimize_scalar_common_3[0], ll_backend__optimize__Str0_3, ((MR_Box) ((MR_String) "")), &ll_backend__optimize__conv1_Str_4);
    }
#line 738 "optimize.m"
    ll_backend__optimize__Str_4 = ((MR_String) ll_backend__optimize__conv1_Str_4);
#line 737 "optimize.m"
    return ll_backend__optimize__Str_4;
#line 737 "optimize.m"
  }
#line 735 "optimize.m"
}

#line 607 "optimize.m"
static void MR_CALL 
ll_backend__optimize__optimize_last_8_p_0(
#line 607 "optimize.m"
  MR_Word ll_backend__optimize__Info_9,
#line 607 "optimize.m"
  MR_Word ll_backend__optimize__LayoutLabelSet_10,
#line 607 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_11,
#line 607 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_C_0_24,
#line 607 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_C_25,
#line 607 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_26,
#line 607 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_27,
#line 607 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_28)
#line 607 "optimize.m"
{
#line 611 "optimize.m"
  {
#line 611 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 611 "optimize.m"
    MR_Word ll_backend__optimize__VeryVerbose_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 611 "optimize.m"
    MR_String ll_backend__optimize__LabelStr_16;
#line 611 "optimize.m"
    MR_Word ll_backend__optimize__Reassign_17;
#line 611 "optimize.m"
    MR_Word ll_backend__optimize__DelaySlot_18;
#line 611 "optimize.m"
    MR_Word ll_backend__optimize__UseLocalVars_19;
#line 611 "optimize.m"
    MR_Word ll_backend__optimize__StdLabels_20;
#line 611 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_36_36;
#line 611 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_39_39;
#line 611 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_46_46;
#line 611 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_49_49;
#line 611 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_56_56;
#line 611 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_59_59;
#line 611 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_66_66;
#line 611 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_69_69;
#line 611 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_76_76;
#line 611 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_80_80;
#line 612 "optimize.m"
    MR_Word ll_backend__optimize__V_90_90 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 612 "optimize.m"
    MR_Word ll_backend__optimize__V_91_91 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 612 "optimize.m"
    MR_Word ll_backend__optimize__V_92_92 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 612 "optimize.m"
    MR_Integer ll_backend__optimize__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 1)));
#line 612 "optimize.m"
    MR_Word ll_backend__optimize__V_94_94 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 612 "optimize.m"
    MR_Word ll_backend__optimize__V_95_95 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 612 "optimize.m"
    MR_Word ll_backend__optimize__V_96_96 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 612 "optimize.m"
    MR_Word ll_backend__optimize__V_97_97 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 612 "optimize.m"
    MR_Word ll_backend__optimize__V_98_98 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 612 "optimize.m"
    MR_Word ll_backend__optimize__V_99_99 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 612 "optimize.m"
    MR_Word ll_backend__optimize__V_100_100 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 612 "optimize.m"
    MR_Word ll_backend__optimize__V_101_101 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 612 "optimize.m"
    MR_Word ll_backend__optimize__V_102_102 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 612 "optimize.m"
    MR_Word ll_backend__optimize__V_103_103 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 612 "optimize.m"
    MR_Word ll_backend__optimize__V_104_104 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 612 "optimize.m"
    MR_Word ll_backend__optimize__V_105_105 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 612 "optimize.m"
    MR_Word ll_backend__optimize__V_106_106 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 612 "optimize.m"
    MR_Word ll_backend__optimize__V_107_107 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 612 "optimize.m"
    MR_Integer ll_backend__optimize__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 3)));
#line 612 "optimize.m"
    MR_Integer ll_backend__optimize__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 4)));
#line 612 "optimize.m"
    MR_Word ll_backend__optimize__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 5)));
#line 612 "optimize.m"
    MR_Word ll_backend__optimize__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 6)));
#line 612 "optimize.m"
    MR_Word ll_backend__optimize__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 7)));
#line 615 "optimize.m"
    MR_Word ll_backend__optimize__V_113_113;
#line 615 "optimize.m"
    MR_Word ll_backend__optimize__V_114_114;
#line 615 "optimize.m"
    MR_Word ll_backend__optimize__V_115_115;
#line 615 "optimize.m"
    MR_Word ll_backend__optimize__V_116_116;
#line 615 "optimize.m"
    MR_Integer ll_backend__optimize__V_117_117;
#line 615 "optimize.m"
    MR_Word ll_backend__optimize__V_118_118;
#line 615 "optimize.m"
    MR_Word ll_backend__optimize__V_120_120;
#line 615 "optimize.m"
    MR_Word ll_backend__optimize__V_121_121;
#line 615 "optimize.m"
    MR_Word ll_backend__optimize__V_122_122;
#line 615 "optimize.m"
    MR_Word ll_backend__optimize__V_123_123;
#line 615 "optimize.m"
    MR_Word ll_backend__optimize__V_124_124;
#line 615 "optimize.m"
    MR_Word ll_backend__optimize__V_125_125;
#line 615 "optimize.m"
    MR_Word ll_backend__optimize__V_126_126;
#line 615 "optimize.m"
    MR_Word ll_backend__optimize__V_127_127;
#line 615 "optimize.m"
    MR_Word ll_backend__optimize__V_128_128;
#line 615 "optimize.m"
    MR_Integer ll_backend__optimize__V_131_131;
#line 615 "optimize.m"
    MR_Integer ll_backend__optimize__V_132_132;
#line 615 "optimize.m"
    MR_Word ll_backend__optimize__V_133_133;
#line 615 "optimize.m"
    MR_Word ll_backend__optimize__V_134_134;
#line 615 "optimize.m"
    MR_Word ll_backend__optimize__V_135_135;

#line 613 "optimize.m"
    {
#line 613 "optimize.m"
      ll_backend__optimize__LabelStr_16 = ll_backend__opt_util__format_proc_label_1_f_0(ll_backend__optimize__ProcLabel_11);
    }
#line 615 "optimize.m"
    ll_backend__optimize__V_113_113 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 615 "optimize.m"
    ll_backend__optimize__V_114_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 615 "optimize.m"
    ll_backend__optimize__V_115_115 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 615 "optimize.m"
    ll_backend__optimize__V_116_116 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 615 "optimize.m"
    ll_backend__optimize__V_117_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 1)));
#line 615 "optimize.m"
    ll_backend__optimize__V_118_118 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 615 "optimize.m"
    ll_backend__optimize__DelaySlot_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 615 "optimize.m"
    ll_backend__optimize__V_120_120 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 615 "optimize.m"
    ll_backend__optimize__V_121_121 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 615 "optimize.m"
    ll_backend__optimize__V_122_122 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 615 "optimize.m"
    ll_backend__optimize__V_123_123 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 615 "optimize.m"
    ll_backend__optimize__V_124_124 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 615 "optimize.m"
    ll_backend__optimize__V_125_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 615 "optimize.m"
    ll_backend__optimize__V_126_126 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 615 "optimize.m"
    ll_backend__optimize__V_127_127 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 615 "optimize.m"
    ll_backend__optimize__Reassign_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 615 "optimize.m"
    ll_backend__optimize__V_128_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 615 "optimize.m"
    ll_backend__optimize__StdLabels_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 615 "optimize.m"
    ll_backend__optimize__UseLocalVars_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 615 "optimize.m"
    ll_backend__optimize__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 3)));
#line 615 "optimize.m"
    ll_backend__optimize__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 4)));
#line 615 "optimize.m"
    ll_backend__optimize__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 5)));
#line 615 "optimize.m"
    ll_backend__optimize__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 6)));
#line 615 "optimize.m"
    ll_backend__optimize__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 7)));
#line 620 "optimize.m"
    ll_backend__optimize__succeeded = (ll_backend__optimize__Reassign_17 == (MR_Integer) 1);
#line 621 "optimize.m"
    if (!(ll_backend__optimize__succeeded))
#line 621 "optimize.m"
      {
#line 621 "optimize.m"
        ll_backend__optimize__succeeded = (ll_backend__optimize__DelaySlot_18 == (MR_Integer) 1);
#line 621 "optimize.m"
        if (!(ll_backend__optimize__succeeded))
#line 621 "optimize.m"
          {
#line 622 "optimize.m"
            ll_backend__optimize__succeeded = (ll_backend__optimize__UseLocalVars_19 == (MR_Integer) 1);
#line 621 "optimize.m"
            if (!(ll_backend__optimize__succeeded))
#line 623 "optimize.m"
              ll_backend__optimize__succeeded = (ll_backend__optimize__StdLabels_20 == (MR_Integer) 1);
#line 621 "optimize.m"
          }
#line 621 "optimize.m"
      }
#line 641 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 637 "optimize.m"
      {
#line 638 "optimize.m"
        MR_Word ll_backend__optimize___Mod1_22;

#line 635 "optimize.m"
        if ((ll_backend__optimize__VeryVerbose_15 == (MR_Integer) 0))
#line 636 "optimize.m"
          {
#line 636 "optimize.m"
          }
#line 635 "optimize.m"
        else
#line 630 "optimize.m"
          {
#line 631 "optimize.m"
            {
#line 631 "optimize.m"
              mercury__io__write_string_3_p_0((MR_String) "% Optimizing labels for ");
            }
#line 632 "optimize.m"
            {
#line 632 "optimize.m"
              mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_16);
            }
#line 633 "optimize.m"
            {
#line 633 "optimize.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 630 "optimize.m"
          }
#line 638 "optimize.m"
        {
#line 638 "optimize.m"
          ll_backend__labelopt__labelopt_main_5_p_0((MR_Integer) 0, ll_backend__optimize__LayoutLabelSet_10, ll_backend__optimize__STATE_VARIABLE_Instrs_0_27, &ll_backend__optimize__STATE_VARIABLE_Instrs_36_36, &ll_backend__optimize___Mod1_22);
        }
#line 639 "optimize.m"
        {
#line 639 "optimize.m"
          ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__STATE_VARIABLE_Instrs_36_36, ll_backend__optimize__STATE_VARIABLE_C_0_24, (MR_String) "label", (MR_String) "after label opt", ll_backend__optimize__ProcLabel_11, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_26, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_39_39);
        }
#line 637 "optimize.m"
      }
#line 641 "optimize.m"
    else
#line 642 "optimize.m"
      {
#line 642 "optimize.m"
        ll_backend__optimize__STATE_VARIABLE_Instrs_36_36 = ll_backend__optimize__STATE_VARIABLE_Instrs_0_27;
#line 642 "optimize.m"
        ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_39_39 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_26;
#line 642 "optimize.m"
      }
#line 659 "optimize.m"
    if ((ll_backend__optimize__Reassign_17 == (MR_Integer) 0))
#line 660 "optimize.m"
      {
#line 660 "optimize.m"
        ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_49_49 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_39_39;
#line 660 "optimize.m"
        ll_backend__optimize__STATE_VARIABLE_Instrs_46_46 = ll_backend__optimize__STATE_VARIABLE_Instrs_36_36;
#line 660 "optimize.m"
      }
#line 659 "optimize.m"
    else
#line 645 "optimize.m"
      {
#line 653 "optimize.m"
        if ((ll_backend__optimize__VeryVerbose_15 == (MR_Integer) 0))
#line 654 "optimize.m"
          {
#line 654 "optimize.m"
          }
#line 653 "optimize.m"
        else
#line 648 "optimize.m"
          {
#line 649 "optimize.m"
            {
#line 649 "optimize.m"
              mercury__io__write_string_3_p_0((MR_String) "% Optimizing reassign for ");
            }
#line 650 "optimize.m"
            {
#line 650 "optimize.m"
              mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_16);
            }
#line 651 "optimize.m"
            {
#line 651 "optimize.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 648 "optimize.m"
          }
#line 656 "optimize.m"
        {
#line 656 "optimize.m"
          ll_backend__reassign__remove_reassign_2_p_0(ll_backend__optimize__STATE_VARIABLE_Instrs_36_36, &ll_backend__optimize__STATE_VARIABLE_Instrs_46_46);
        }
#line 657 "optimize.m"
        {
#line 657 "optimize.m"
          ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__STATE_VARIABLE_Instrs_46_46, ll_backend__optimize__STATE_VARIABLE_C_0_24, (MR_String) "reassign", (MR_String) "after reassign", ll_backend__optimize__ProcLabel_11, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_39_39, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_49_49);
        }
#line 645 "optimize.m"
      }
#line 677 "optimize.m"
    if ((ll_backend__optimize__DelaySlot_18 == (MR_Integer) 0))
#line 678 "optimize.m"
      {
#line 678 "optimize.m"
        ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_59_59 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_49_49;
#line 678 "optimize.m"
        ll_backend__optimize__STATE_VARIABLE_Instrs_56_56 = ll_backend__optimize__STATE_VARIABLE_Instrs_46_46;
#line 678 "optimize.m"
      }
#line 677 "optimize.m"
    else
#line 663 "optimize.m"
      {
#line 671 "optimize.m"
        if ((ll_backend__optimize__VeryVerbose_15 == (MR_Integer) 0))
#line 672 "optimize.m"
          {
#line 672 "optimize.m"
          }
#line 671 "optimize.m"
        else
#line 666 "optimize.m"
          {
#line 667 "optimize.m"
            {
#line 667 "optimize.m"
              mercury__io__write_string_3_p_0((MR_String) "% Optimizing delay slot for ");
            }
#line 668 "optimize.m"
            {
#line 668 "optimize.m"
              mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_16);
            }
#line 669 "optimize.m"
            {
#line 669 "optimize.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 666 "optimize.m"
          }
#line 674 "optimize.m"
        {
#line 674 "optimize.m"
          ll_backend__delay_slot__fill_branch_delay_slot_2_p_0(ll_backend__optimize__STATE_VARIABLE_Instrs_46_46, &ll_backend__optimize__STATE_VARIABLE_Instrs_56_56);
        }
#line 675 "optimize.m"
        {
#line 675 "optimize.m"
          ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__STATE_VARIABLE_Instrs_56_56, ll_backend__optimize__STATE_VARIABLE_C_0_24, (MR_String) "delay_slot", (MR_String) "after delay slots", ll_backend__optimize__ProcLabel_11, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_49_49, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_59_59);
        }
#line 663 "optimize.m"
      }
#line 687 "optimize.m"
    if ((ll_backend__optimize__VeryVerbose_15 == (MR_Integer) 0))
#line 688 "optimize.m"
      {
#line 688 "optimize.m"
      }
#line 687 "optimize.m"
    else
#line 682 "optimize.m"
      {
#line 683 "optimize.m"
        {
#line 683 "optimize.m"
          mercury__io__write_string_3_p_0((MR_String) "% Optimizing returns for ");
        }
#line 684 "optimize.m"
        {
#line 684 "optimize.m"
          mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_16);
        }
#line 685 "optimize.m"
        {
#line 685 "optimize.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 682 "optimize.m"
      }
#line 690 "optimize.m"
    {
#line 690 "optimize.m"
      ll_backend__peephole__combine_decr_sp_2_p_0(ll_backend__optimize__STATE_VARIABLE_Instrs_56_56, &ll_backend__optimize__STATE_VARIABLE_Instrs_66_66);
    }
#line 691 "optimize.m"
    {
#line 691 "optimize.m"
      ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__STATE_VARIABLE_Instrs_66_66, ll_backend__optimize__STATE_VARIABLE_C_0_24, (MR_String) "decr_sp", (MR_String) "after combine decr_sp", ll_backend__optimize__ProcLabel_11, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_59_59, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_69_69);
    }
#line 708 "optimize.m"
    if ((ll_backend__optimize__StdLabels_20 == (MR_Integer) 0))
#line 709 "optimize.m"
      {
#line 709 "optimize.m"
        *ll_backend__optimize__STATE_VARIABLE_C_25 = ll_backend__optimize__STATE_VARIABLE_C_0_24;
#line 709 "optimize.m"
        ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_80_80 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_69_69;
#line 709 "optimize.m"
        ll_backend__optimize__STATE_VARIABLE_Instrs_76_76 = ll_backend__optimize__STATE_VARIABLE_Instrs_66_66;
#line 709 "optimize.m"
      }
#line 708 "optimize.m"
    else
#line 694 "optimize.m"
      {
#line 702 "optimize.m"
        if ((ll_backend__optimize__VeryVerbose_15 == (MR_Integer) 0))
#line 703 "optimize.m"
          {
#line 703 "optimize.m"
          }
#line 702 "optimize.m"
        else
#line 697 "optimize.m"
          {
#line 698 "optimize.m"
            {
#line 698 "optimize.m"
              mercury__io__write_string_3_p_0((MR_String) "% Standardizing labels for ");
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
#line 705 "optimize.m"
        {
#line 705 "optimize.m"
          ll_backend__stdlabel__standardize_labels_4_p_0(ll_backend__optimize__STATE_VARIABLE_Instrs_66_66, &ll_backend__optimize__STATE_VARIABLE_Instrs_76_76, ll_backend__optimize__STATE_VARIABLE_C_0_24, ll_backend__optimize__STATE_VARIABLE_C_25);
        }
#line 706 "optimize.m"
        {
#line 706 "optimize.m"
          ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__STATE_VARIABLE_Instrs_76_76, *ll_backend__optimize__STATE_VARIABLE_C_25, (MR_String) "stdlabel", (MR_String) "after standard labels", ll_backend__optimize__ProcLabel_11, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_69_69, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_80_80);
        }
#line 694 "optimize.m"
      }
#line 726 "optimize.m"
    if ((ll_backend__optimize__UseLocalVars_19 == (MR_Integer) 0))
#line 727 "optimize.m"
      *ll_backend__optimize__STATE_VARIABLE_Instrs_28 = ll_backend__optimize__STATE_VARIABLE_Instrs_76_76;
#line 726 "optimize.m"
    else
#line 712 "optimize.m"
      {
#line 724 "optimize.m"
        MR_Word ll_backend__optimize___OptDebugInfo_23;

#line 720 "optimize.m"
        if ((ll_backend__optimize__VeryVerbose_15 == (MR_Integer) 0))
#line 721 "optimize.m"
          {
#line 721 "optimize.m"
          }
#line 720 "optimize.m"
        else
#line 715 "optimize.m"
          {
#line 716 "optimize.m"
            {
#line 716 "optimize.m"
              mercury__io__write_string_3_p_0((MR_String) "% Wrapping blocks for ");
            }
#line 717 "optimize.m"
            {
#line 717 "optimize.m"
              mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_16);
            }
#line 718 "optimize.m"
            {
#line 718 "optimize.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 715 "optimize.m"
          }
#line 723 "optimize.m"
        {
#line 723 "optimize.m"
          ll_backend__wrap_blocks__wrap_blocks_2_p_0(ll_backend__optimize__STATE_VARIABLE_Instrs_76_76, ll_backend__optimize__STATE_VARIABLE_Instrs_28);
        }
#line 724 "optimize.m"
        {
#line 724 "optimize.m"
          ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_9, *ll_backend__optimize__STATE_VARIABLE_Instrs_28, *ll_backend__optimize__STATE_VARIABLE_C_25, (MR_String) "wrapblocks", (MR_String) "after wrap blocks", ll_backend__optimize__ProcLabel_11, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_80_80, &ll_backend__optimize___OptDebugInfo_23);
        }
#line 712 "optimize.m"
      }
#line 611 "optimize.m"
  }
#line 607 "optimize.m"
}

#line 474 "optimize.m"
static void MR_CALL 
ll_backend__optimize__optimize_middle_12_p_0(
#line 474 "optimize.m"
  MR_Word ll_backend__optimize__Info_13,
#line 474 "optimize.m"
  MR_Word ll_backend__optimize__Final_14,
#line 474 "optimize.m"
  MR_Word ll_backend__optimize__LayoutLabelSet_15,
#line 474 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_16,
#line 474 "optimize.m"
  MR_Word ll_backend__optimize__CodeModel_17,
#line 474 "optimize.m"
  MR_Word ll_backend__optimize__MayAlterRtti_18,
#line 474 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_C_0_41,
#line 474 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_C_42,
#line 474 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_43,
#line 474 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_44,
#line 474 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_45,
#line 474 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_46)
#line 474 "optimize.m"
{
#line 480 "optimize.m"
  {
#line 480 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 480 "optimize.m"
    MR_Word ll_backend__optimize__VeryVerbose_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 480 "optimize.m"
    MR_String ll_backend__optimize__LabelStr_23;
#line 480 "optimize.m"
    MR_Word ll_backend__optimize__OptFrames_24;
#line 480 "optimize.m"
    MR_Word ll_backend__optimize__UseLocalVars_37;
#line 480 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_C_68_68;
#line 480 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_89_89;
#line 480 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_92_92;
#line 480 "optimize.m"
    MR_Word ll_backend__optimize__V_127_127;
#line 480 "optimize.m"
    MR_Integer ll_backend__optimize__V_131_131;
#line 480 "optimize.m"
    MR_Word ll_backend__optimize__V_135_135;
#line 480 "optimize.m"
    MR_Integer ll_backend__optimize__V_145_145;
#line 481 "optimize.m"
    MR_Word ll_backend__optimize__V_104_104 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 481 "optimize.m"
    MR_Word ll_backend__optimize__V_105_105 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 481 "optimize.m"
    MR_Word ll_backend__optimize__V_106_106 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 481 "optimize.m"
    MR_Integer ll_backend__optimize__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 1)));
#line 481 "optimize.m"
    MR_Word ll_backend__optimize__V_108_108 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 481 "optimize.m"
    MR_Word ll_backend__optimize__V_109_109 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 481 "optimize.m"
    MR_Word ll_backend__optimize__V_110_110 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 481 "optimize.m"
    MR_Word ll_backend__optimize__V_111_111 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 481 "optimize.m"
    MR_Word ll_backend__optimize__V_112_112 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 481 "optimize.m"
    MR_Word ll_backend__optimize__V_113_113 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 481 "optimize.m"
    MR_Word ll_backend__optimize__V_114_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 481 "optimize.m"
    MR_Word ll_backend__optimize__V_115_115 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 481 "optimize.m"
    MR_Word ll_backend__optimize__V_116_116 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 481 "optimize.m"
    MR_Word ll_backend__optimize__V_117_117 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 481 "optimize.m"
    MR_Word ll_backend__optimize__V_118_118 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 481 "optimize.m"
    MR_Word ll_backend__optimize__V_119_119 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 481 "optimize.m"
    MR_Word ll_backend__optimize__V_120_120 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 481 "optimize.m"
    MR_Word ll_backend__optimize__V_121_121 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 481 "optimize.m"
    MR_Integer ll_backend__optimize__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 3)));
#line 481 "optimize.m"
    MR_Integer ll_backend__optimize__V_123_123 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 4)));
#line 481 "optimize.m"
    MR_Word ll_backend__optimize__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 5)));
#line 481 "optimize.m"
    MR_Word ll_backend__optimize__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 6)));
#line 481 "optimize.m"
    MR_Word ll_backend__optimize__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 7)));
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_128_128;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_129_129;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_130_130;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_132_132;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_133_133;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_134_134;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_136_136;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_137_137;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_138_138;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_139_139;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_140_140;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_141_141;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_142_142;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_143_143;
#line 484 "optimize.m"
    MR_Integer ll_backend__optimize__V_146_146;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_147_147;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_148_148;
#line 484 "optimize.m"
    MR_Word ll_backend__optimize__V_149_149;

#line 482 "optimize.m"
    {
#line 482 "optimize.m"
      ll_backend__optimize__LabelStr_23 = ll_backend__opt_util__format_proc_label_1_f_0(ll_backend__optimize__ProcLabel_16);
    }
#line 484 "optimize.m"
    ll_backend__optimize__V_127_127 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_128_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_129_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_130_130 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 1)));
#line 484 "optimize.m"
    ll_backend__optimize__V_132_132 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 484 "optimize.m"
    ll_backend__optimize__V_133_133 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_134_134 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__OptFrames_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_135_135 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_136_136 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_137_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_138_138 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_139_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_140_140 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_141_141 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_142_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_143_143 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__UseLocalVars_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 484 "optimize.m"
    ll_backend__optimize__V_145_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 3)));
#line 484 "optimize.m"
    ll_backend__optimize__V_146_146 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 4)));
#line 484 "optimize.m"
    ll_backend__optimize__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 5)));
#line 484 "optimize.m"
    ll_backend__optimize__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 6)));
#line 484 "optimize.m"
    ll_backend__optimize__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 7)));
#line 580 "optimize.m"
    if ((ll_backend__optimize__OptFrames_24 == (MR_Integer) 0))
#line 581 "optimize.m"
      {
#line 581 "optimize.m"
        ll_backend__optimize__STATE_VARIABLE_C_68_68 = ll_backend__optimize__STATE_VARIABLE_C_0_41;
#line 581 "optimize.m"
        ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_92_92 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_43;
#line 581 "optimize.m"
        ll_backend__optimize__STATE_VARIABLE_Instrs_89_89 = ll_backend__optimize__STATE_VARIABLE_Instrs_0_45;
#line 581 "optimize.m"
      }
#line 580 "optimize.m"
    else
#line 486 "optimize.m"
      {
#line 486 "optimize.m"
        MR_Word ll_backend__optimize__Mod1_27;
#line 486 "optimize.m"
        MR_Word ll_backend__optimize__Statistics_28;
#line 486 "optimize.m"
        MR_Word ll_backend__optimize__OptFullJump_29;
#line 486 "optimize.m"
        MR_Word ll_backend__optimize__PessimizeTailCalls_30;
#line 486 "optimize.m"
        MR_Word ll_backend__optimize__CheckedNondetTailCalls_31;
#line 486 "optimize.m"
        MR_Word ll_backend__optimize__STATE_VARIABLE_C_55_55;
#line 486 "optimize.m"
        MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_56_56;
#line 486 "optimize.m"
        MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_59_59;
#line 486 "optimize.m"
        MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_69_69;
#line 486 "optimize.m"
        MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_72_72;
#line 486 "optimize.m"
        MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_79_79;
#line 486 "optimize.m"
        MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_82_82;
#line 511 "optimize.m"
        MR_Word ll_backend__optimize__V_173_173;
#line 511 "optimize.m"
        MR_Word ll_backend__optimize__V_174_174;
#line 511 "optimize.m"
        MR_Integer ll_backend__optimize__V_176_176;
#line 511 "optimize.m"
        MR_Word ll_backend__optimize__V_177_177;
#line 511 "optimize.m"
        MR_Word ll_backend__optimize__V_178_178;
#line 511 "optimize.m"
        MR_Word ll_backend__optimize__V_179_179;
#line 511 "optimize.m"
        MR_Word ll_backend__optimize__V_180_180;
#line 511 "optimize.m"
        MR_Word ll_backend__optimize__V_181_181;
#line 511 "optimize.m"
        MR_Word ll_backend__optimize__V_182_182;
#line 511 "optimize.m"
        MR_Word ll_backend__optimize__V_184_184;
#line 511 "optimize.m"
        MR_Word ll_backend__optimize__V_185_185;
#line 511 "optimize.m"
        MR_Word ll_backend__optimize__V_186_186;
#line 511 "optimize.m"
        MR_Word ll_backend__optimize__V_187_187;
#line 511 "optimize.m"
        MR_Word ll_backend__optimize__V_189_189;
#line 511 "optimize.m"
        MR_Word ll_backend__optimize__V_190_190;
#line 511 "optimize.m"
        MR_Integer ll_backend__optimize__V_191_191;
#line 511 "optimize.m"
        MR_Integer ll_backend__optimize__V_192_192;
#line 511 "optimize.m"
        MR_Word ll_backend__optimize__V_193_193;
#line 511 "optimize.m"
        MR_Word ll_backend__optimize__V_194_194;
#line 511 "optimize.m"
        MR_Word ll_backend__optimize__V_195_195;

#line 494 "optimize.m"
        if ((ll_backend__optimize__VeryVerbose_22 == (MR_Integer) 0))
#line 495 "optimize.m"
          {
#line 495 "optimize.m"
          }
#line 494 "optimize.m"
        else
#line 489 "optimize.m"
          {
#line 490 "optimize.m"
            {
#line 490 "optimize.m"
              mercury__io__write_string_3_p_0((MR_String) "% Optimizing frames for ");
            }
#line 491 "optimize.m"
            {
#line 491 "optimize.m"
              mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
            }
#line 492 "optimize.m"
            {
#line 492 "optimize.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 489 "optimize.m"
          }
#line 504 "optimize.m"
        if ((ll_backend__optimize__CodeModel_17 == (MR_Integer) 2))
#line 506 "optimize.m"
          {
#line 506 "optimize.m"
            ll_backend__frameopt__frameopt_main_nondet_stack_7_p_0(ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_C_0_41, &ll_backend__optimize__STATE_VARIABLE_C_55_55, ll_backend__optimize__STATE_VARIABLE_Instrs_0_45, &ll_backend__optimize__STATE_VARIABLE_Instrs_56_56, ll_backend__optimize__V_135_135, &ll_backend__optimize__Mod1_27);
          }
#line 504 "optimize.m"
        else
#line 502 "optimize.m"
          {
#line 502 "optimize.m"
            ll_backend__frameopt__frameopt_main_det_stack_7_p_0(ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_C_0_41, &ll_backend__optimize__STATE_VARIABLE_C_55_55, ll_backend__optimize__STATE_VARIABLE_Instrs_0_45, &ll_backend__optimize__STATE_VARIABLE_Instrs_56_56, ll_backend__optimize__V_135_135, &ll_backend__optimize__Mod1_27);
          }
#line 509 "optimize.m"
        {
#line 509 "optimize.m"
          ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, ll_backend__optimize__STATE_VARIABLE_Instrs_56_56, ll_backend__optimize__STATE_VARIABLE_C_55_55, (MR_String) "frame", (MR_String) "after frame opt", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_43, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_59_59);
        }
#line 511 "optimize.m"
        ll_backend__optimize__V_173_173 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 511 "optimize.m"
        ll_backend__optimize__Statistics_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 511 "optimize.m"
        ll_backend__optimize__V_174_174 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 511 "optimize.m"
        ll_backend__optimize__CheckedNondetTailCalls_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 511 "optimize.m"
        ll_backend__optimize__V_176_176 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 1)));
#line 511 "optimize.m"
        ll_backend__optimize__V_177_177 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 511 "optimize.m"
        ll_backend__optimize__V_178_178 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 511 "optimize.m"
        ll_backend__optimize__V_179_179 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 511 "optimize.m"
        ll_backend__optimize__V_180_180 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 511 "optimize.m"
        ll_backend__optimize__V_181_181 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 511 "optimize.m"
        ll_backend__optimize__V_182_182 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 511 "optimize.m"
        ll_backend__optimize__OptFullJump_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 511 "optimize.m"
        ll_backend__optimize__V_184_184 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 511 "optimize.m"
        ll_backend__optimize__V_185_185 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 511 "optimize.m"
        ll_backend__optimize__V_186_186 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 511 "optimize.m"
        ll_backend__optimize__V_187_187 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 511 "optimize.m"
        ll_backend__optimize__PessimizeTailCalls_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 511 "optimize.m"
        ll_backend__optimize__V_189_189 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 511 "optimize.m"
        ll_backend__optimize__V_190_190 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 511 "optimize.m"
        ll_backend__optimize__V_191_191 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 3)));
#line 511 "optimize.m"
        ll_backend__optimize__V_192_192 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 4)));
#line 511 "optimize.m"
        ll_backend__optimize__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 5)));
#line 511 "optimize.m"
        ll_backend__optimize__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 6)));
#line 511 "optimize.m"
        ll_backend__optimize__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 7)));
#line 513 "optimize.m"
        {
#line 513 "optimize.m"
          libs__file_util__maybe_report_stats_3_p_0(ll_backend__optimize__Statistics_28);
        }
#line 520 "optimize.m"
        ll_backend__optimize__succeeded = (ll_backend__optimize__OptFullJump_29 == (MR_Integer) 1);
#line 521 "optimize.m"
        if (!(ll_backend__optimize__succeeded))
#line 521 "optimize.m"
          ll_backend__optimize__succeeded = (ll_backend__optimize__Mod1_27 == (MR_Integer) 1);
#line 539 "optimize.m"
        if (ll_backend__optimize__succeeded)
#line 533 "optimize.m"
          {
#line 534 "optimize.m"
            MR_Word ll_backend__optimize___Mod2_32;

#line 531 "optimize.m"
            if ((ll_backend__optimize__VeryVerbose_22 == (MR_Integer) 0))
#line 532 "optimize.m"
              {
#line 532 "optimize.m"
              }
#line 531 "optimize.m"
            else
#line 526 "optimize.m"
              {
#line 527 "optimize.m"
                {
#line 527 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "% Optimizing jumps for ");
                }
#line 528 "optimize.m"
                {
#line 528 "optimize.m"
                  mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
                }
#line 529 "optimize.m"
                {
#line 529 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 526 "optimize.m"
              }
#line 534 "optimize.m"
            {
#line 534 "optimize.m"
              ll_backend__jumpopt__optimize_jumps_in_proc_12_p_0(ll_backend__optimize__LayoutLabelSet_15, ll_backend__optimize__MayAlterRtti_18, ll_backend__optimize__ProcLabel_16, ll_backend__optimize__OptFullJump_29, ll_backend__optimize__Final_14, ll_backend__optimize__PessimizeTailCalls_30, ll_backend__optimize__CheckedNondetTailCalls_31, ll_backend__optimize__STATE_VARIABLE_C_55_55, &ll_backend__optimize__STATE_VARIABLE_C_68_68, ll_backend__optimize__STATE_VARIABLE_Instrs_56_56, &ll_backend__optimize__STATE_VARIABLE_Instrs_69_69, &ll_backend__optimize___Mod2_32);
            }
#line 537 "optimize.m"
            {
#line 537 "optimize.m"
              ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, ll_backend__optimize__STATE_VARIABLE_Instrs_69_69, ll_backend__optimize__STATE_VARIABLE_C_68_68, (MR_String) "jump", (MR_String) "after jumps", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_59_59, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_72_72);
            }
#line 533 "optimize.m"
          }
#line 539 "optimize.m"
        else
#line 540 "optimize.m"
          {
#line 540 "optimize.m"
            ll_backend__optimize__STATE_VARIABLE_Instrs_69_69 = ll_backend__optimize__STATE_VARIABLE_Instrs_56_56;
#line 540 "optimize.m"
            ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_72_72 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_59_59;
#line 540 "optimize.m"
            ll_backend__optimize__STATE_VARIABLE_C_68_68 = ll_backend__optimize__STATE_VARIABLE_C_55_55;
#line 540 "optimize.m"
          }
#line 557 "optimize.m"
        if ((ll_backend__optimize__Mod1_27 == (MR_Integer) 0))
#line 558 "optimize.m"
          {
#line 558 "optimize.m"
            ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_82_82 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_72_72;
#line 558 "optimize.m"
            ll_backend__optimize__STATE_VARIABLE_Instrs_79_79 = ll_backend__optimize__STATE_VARIABLE_Instrs_69_69;
#line 558 "optimize.m"
          }
#line 557 "optimize.m"
        else
#line 543 "optimize.m"
          {
#line 554 "optimize.m"
            MR_Word ll_backend__optimize___Mod3_33;

#line 551 "optimize.m"
            if ((ll_backend__optimize__VeryVerbose_22 == (MR_Integer) 0))
#line 552 "optimize.m"
              {
#line 552 "optimize.m"
              }
#line 551 "optimize.m"
            else
#line 546 "optimize.m"
              {
#line 547 "optimize.m"
                {
#line 547 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "% Optimizing labels for ");
                }
#line 548 "optimize.m"
                {
#line 548 "optimize.m"
                  mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
                }
#line 549 "optimize.m"
                {
#line 549 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 546 "optimize.m"
              }
#line 554 "optimize.m"
            {
#line 554 "optimize.m"
              ll_backend__labelopt__labelopt_main_5_p_0(ll_backend__optimize__Final_14, ll_backend__optimize__LayoutLabelSet_15, ll_backend__optimize__STATE_VARIABLE_Instrs_69_69, &ll_backend__optimize__STATE_VARIABLE_Instrs_79_79, &ll_backend__optimize___Mod3_33);
            }
#line 555 "optimize.m"
            {
#line 555 "optimize.m"
              ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, ll_backend__optimize__STATE_VARIABLE_Instrs_79_79, ll_backend__optimize__STATE_VARIABLE_C_68_68, (MR_String) "label", (MR_String) "after labels", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_72_72, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_82_82);
            }
#line 543 "optimize.m"
          }
#line 577 "optimize.m"
        if ((ll_backend__optimize__Mod1_27 == (MR_Integer) 0))
#line 578 "optimize.m"
          {
#line 578 "optimize.m"
            ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_92_92 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_82_82;
#line 578 "optimize.m"
            ll_backend__optimize__STATE_VARIABLE_Instrs_89_89 = ll_backend__optimize__STATE_VARIABLE_Instrs_79_79;
#line 578 "optimize.m"
          }
#line 577 "optimize.m"
        else
#line 561 "optimize.m"
          {
#line 561 "optimize.m"
            MR_Word ll_backend__optimize__GC_Method_34;
#line 561 "optimize.m"
            MR_Word ll_backend__optimize__OptPeepMkword_35;
#line 572 "optimize.m"
            MR_Word ll_backend__optimize__V_265_265;
#line 572 "optimize.m"
            MR_Word ll_backend__optimize__V_266_266;
#line 572 "optimize.m"
            MR_Word ll_backend__optimize__V_267_267;
#line 572 "optimize.m"
            MR_Word ll_backend__optimize__V_268_268;
#line 572 "optimize.m"
            MR_Integer ll_backend__optimize__V_269_269;
#line 572 "optimize.m"
            MR_Word ll_backend__optimize__V_270_270;
#line 572 "optimize.m"
            MR_Word ll_backend__optimize__V_271_271;
#line 572 "optimize.m"
            MR_Word ll_backend__optimize__V_272_272;
#line 572 "optimize.m"
            MR_Word ll_backend__optimize__V_273_273;
#line 572 "optimize.m"
            MR_Word ll_backend__optimize__V_274_274;
#line 572 "optimize.m"
            MR_Word ll_backend__optimize__V_275_275;
#line 572 "optimize.m"
            MR_Word ll_backend__optimize__V_276_276;
#line 572 "optimize.m"
            MR_Word ll_backend__optimize__V_277_277;
#line 572 "optimize.m"
            MR_Word ll_backend__optimize__V_279_279;
#line 572 "optimize.m"
            MR_Word ll_backend__optimize__V_280_280;
#line 572 "optimize.m"
            MR_Word ll_backend__optimize__V_281_281;
#line 572 "optimize.m"
            MR_Word ll_backend__optimize__V_282_282;
#line 572 "optimize.m"
            MR_Integer ll_backend__optimize__V_283_283;
#line 572 "optimize.m"
            MR_Integer ll_backend__optimize__V_284_284;
#line 572 "optimize.m"
            MR_Word ll_backend__optimize__V_285_285;
#line 572 "optimize.m"
            MR_Word ll_backend__optimize__V_286_286;
#line 572 "optimize.m"
            MR_Word ll_backend__optimize__V_287_287;
#line 574 "optimize.m"
            MR_Word ll_backend__optimize___Mod_36;

#line 569 "optimize.m"
            if ((ll_backend__optimize__VeryVerbose_22 == (MR_Integer) 0))
#line 570 "optimize.m"
              {
#line 570 "optimize.m"
              }
#line 569 "optimize.m"
            else
#line 564 "optimize.m"
              {
#line 565 "optimize.m"
                {
#line 565 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "% Optimizing locally for ");
                }
#line 566 "optimize.m"
                {
#line 566 "optimize.m"
                  mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
                }
#line 567 "optimize.m"
                {
#line 567 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 564 "optimize.m"
              }
#line 572 "optimize.m"
            ll_backend__optimize__V_265_265 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 572 "optimize.m"
            ll_backend__optimize__V_266_266 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "optimize.m"
            ll_backend__optimize__V_267_267 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 572 "optimize.m"
            ll_backend__optimize__V_268_268 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 572 "optimize.m"
            ll_backend__optimize__V_269_269 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 1)));
#line 572 "optimize.m"
            ll_backend__optimize__GC_Method_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 572 "optimize.m"
            ll_backend__optimize__V_270_270 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 572 "optimize.m"
            ll_backend__optimize__V_271_271 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 572 "optimize.m"
            ll_backend__optimize__V_272_272 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 572 "optimize.m"
            ll_backend__optimize__V_273_273 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 572 "optimize.m"
            ll_backend__optimize__V_274_274 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 572 "optimize.m"
            ll_backend__optimize__V_275_275 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 572 "optimize.m"
            ll_backend__optimize__V_276_276 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 572 "optimize.m"
            ll_backend__optimize__V_277_277 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 572 "optimize.m"
            ll_backend__optimize__OptPeepMkword_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 572 "optimize.m"
            ll_backend__optimize__V_279_279 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 572 "optimize.m"
            ll_backend__optimize__V_280_280 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 572 "optimize.m"
            ll_backend__optimize__V_281_281 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 572 "optimize.m"
            ll_backend__optimize__V_282_282 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 572 "optimize.m"
            ll_backend__optimize__V_283_283 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 3)));
#line 572 "optimize.m"
            ll_backend__optimize__V_284_284 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 4)));
#line 572 "optimize.m"
            ll_backend__optimize__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 5)));
#line 572 "optimize.m"
            ll_backend__optimize__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 6)));
#line 572 "optimize.m"
            ll_backend__optimize__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 7)));
#line 574 "optimize.m"
            {
#line 574 "optimize.m"
              ll_backend__peephole__peephole_optimize_5_p_0(ll_backend__optimize__GC_Method_34, ll_backend__optimize__OptPeepMkword_35, ll_backend__optimize__STATE_VARIABLE_Instrs_79_79, &ll_backend__optimize__STATE_VARIABLE_Instrs_89_89, &ll_backend__optimize___Mod_36);
            }
#line 575 "optimize.m"
            {
#line 575 "optimize.m"
              ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, ll_backend__optimize__STATE_VARIABLE_Instrs_89_89, ll_backend__optimize__STATE_VARIABLE_C_68_68, (MR_String) "peep", (MR_String) "after peephole", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_82_82, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_92_92);
            }
#line 561 "optimize.m"
          }
#line 486 "optimize.m"
      }
#line 603 "optimize.m"
    if ((ll_backend__optimize__UseLocalVars_37 == (MR_Integer) 0))
#line 604 "optimize.m"
      {
#line 604 "optimize.m"
        *ll_backend__optimize__STATE_VARIABLE_C_42 = ll_backend__optimize__STATE_VARIABLE_C_68_68;
#line 604 "optimize.m"
        *ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_44 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_92_92;
#line 604 "optimize.m"
        *ll_backend__optimize__STATE_VARIABLE_Instrs_46 = ll_backend__optimize__STATE_VARIABLE_Instrs_89_89;
#line 604 "optimize.m"
      }
#line 603 "optimize.m"
    else
#line 585 "optimize.m"
      {
#line 593 "optimize.m"
        if ((ll_backend__optimize__VeryVerbose_22 == (MR_Integer) 0))
#line 594 "optimize.m"
          {
#line 594 "optimize.m"
          }
#line 593 "optimize.m"
        else
#line 588 "optimize.m"
          {
#line 589 "optimize.m"
            {
#line 589 "optimize.m"
              mercury__io__write_string_3_p_0((MR_String) "% Optimizing local vars for ");
            }
#line 590 "optimize.m"
            {
#line 590 "optimize.m"
              mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
            }
#line 591 "optimize.m"
            {
#line 591 "optimize.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 588 "optimize.m"
          }
#line 599 "optimize.m"
        {
#line 599 "optimize.m"
          ll_backend__use_local_vars__use_local_vars_proc_8_p_0(ll_backend__optimize__STATE_VARIABLE_Instrs_89_89, ll_backend__optimize__STATE_VARIABLE_Instrs_46, ll_backend__optimize__V_131_131, ll_backend__optimize__V_145_145, ll_backend__optimize__V_127_127, ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_C_68_68, ll_backend__optimize__STATE_VARIABLE_C_42);
        }
#line 601 "optimize.m"
        {
#line 601 "optimize.m"
          ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, *ll_backend__optimize__STATE_VARIABLE_Instrs_46, *ll_backend__optimize__STATE_VARIABLE_C_42, (MR_String) "use_local", (MR_String) "after use_local_vars", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_92_92, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_44);
#line 601 "optimize.m"
          return;
        }
#line 585 "optimize.m"
      }
#line 480 "optimize.m"
  }
#line 474 "optimize.m"
}

#line 368 "optimize.m"
static void MR_CALL 
ll_backend__optimize__optimize_repeated_12_p_0(
#line 368 "optimize.m"
  MR_Word ll_backend__optimize__Info_13,
#line 368 "optimize.m"
  MR_Word ll_backend__optimize__Final_14,
#line 368 "optimize.m"
  MR_Word ll_backend__optimize__LayoutLabelSet_15,
#line 368 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_16,
#line 368 "optimize.m"
  MR_Word ll_backend__optimize__MayAlterRtti_17,
#line 368 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_C_0_39,
#line 368 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_C_40,
#line 368 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_41,
#line 368 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_42,
#line 368 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_43,
#line 368 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_44,
#line 368 "optimize.m"
  MR_Word * ll_backend__optimize__Mod_21)
#line 368 "optimize.m"
{
#line 374 "optimize.m"
  {
#line 374 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 374 "optimize.m"
    MR_String ll_backend__optimize__LabelStr_23;
#line 374 "optimize.m"
    MR_Word ll_backend__optimize__VeryVerbose_24;
#line 374 "optimize.m"
    MR_Word ll_backend__optimize__OptJump_25;
#line 374 "optimize.m"
    MR_Word ll_backend__optimize__OptFullJump_26;
#line 374 "optimize.m"
    MR_Word ll_backend__optimize__PessimizeTailCalls_27;
#line 374 "optimize.m"
    MR_Word ll_backend__optimize__CheckedNondetTailCalls_28;
#line 374 "optimize.m"
    MR_Word ll_backend__optimize__Mod1_30;
#line 374 "optimize.m"
    MR_Word ll_backend__optimize__Peephole_31;
#line 374 "optimize.m"
    MR_Word ll_backend__optimize__Mod2_34;
#line 374 "optimize.m"
    MR_Word ll_backend__optimize__OptLabels_35;
#line 374 "optimize.m"
    MR_Word ll_backend__optimize__Mod3_36;
#line 374 "optimize.m"
    MR_Word ll_backend__optimize__DupElim_37;
#line 374 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_C_51_51;
#line 374 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_52_52;
#line 374 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_55_55;
#line 374 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_62_62;
#line 374 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_65_65;
#line 374 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_72_72;
#line 374 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_75_75;
#line 374 "optimize.m"
    MR_Word ll_backend__optimize__V_93_93;
#line 374 "optimize.m"
    MR_Word ll_backend__optimize__V_102_102;
#line 377 "optimize.m"
    MR_Word ll_backend__optimize__V_89_89;
#line 377 "optimize.m"
    MR_Word ll_backend__optimize__V_90_90;
#line 377 "optimize.m"
    MR_Integer ll_backend__optimize__V_92_92;
#line 377 "optimize.m"
    MR_Word ll_backend__optimize__V_94_94;
#line 377 "optimize.m"
    MR_Word ll_backend__optimize__V_96_96;
#line 377 "optimize.m"
    MR_Word ll_backend__optimize__V_97_97;
#line 377 "optimize.m"
    MR_Word ll_backend__optimize__V_103_103;
#line 377 "optimize.m"
    MR_Word ll_backend__optimize__V_105_105;
#line 377 "optimize.m"
    MR_Word ll_backend__optimize__V_106_106;
#line 377 "optimize.m"
    MR_Integer ll_backend__optimize__V_107_107;
#line 377 "optimize.m"
    MR_Integer ll_backend__optimize__V_108_108;
#line 377 "optimize.m"
    MR_Word ll_backend__optimize__V_109_109;
#line 377 "optimize.m"
    MR_Word ll_backend__optimize__V_110_110;
#line 377 "optimize.m"
    MR_Word ll_backend__optimize__V_111_111;
#line 464 "optimize.m"
    MR_Word ll_backend__optimize__TypeInfo_342_342;
#line 469 "optimize.m"
    MR_Word ll_backend__optimize__Statistics_38;
#line 470 "optimize.m"
    MR_Word ll_backend__optimize__V_319_319;
#line 470 "optimize.m"
    MR_Word ll_backend__optimize__V_320_320;
#line 470 "optimize.m"
    MR_Word ll_backend__optimize__V_321_321;
#line 470 "optimize.m"
    MR_Integer ll_backend__optimize__V_322_322;
#line 470 "optimize.m"
    MR_Word ll_backend__optimize__V_323_323;
#line 470 "optimize.m"
    MR_Word ll_backend__optimize__V_324_324;
#line 470 "optimize.m"
    MR_Word ll_backend__optimize__V_325_325;
#line 470 "optimize.m"
    MR_Word ll_backend__optimize__V_326_326;
#line 470 "optimize.m"
    MR_Word ll_backend__optimize__V_327_327;
#line 470 "optimize.m"
    MR_Word ll_backend__optimize__V_328_328;
#line 470 "optimize.m"
    MR_Word ll_backend__optimize__V_329_329;
#line 470 "optimize.m"
    MR_Word ll_backend__optimize__V_330_330;
#line 470 "optimize.m"
    MR_Word ll_backend__optimize__V_331_331;
#line 470 "optimize.m"
    MR_Word ll_backend__optimize__V_332_332;
#line 470 "optimize.m"
    MR_Word ll_backend__optimize__V_333_333;
#line 470 "optimize.m"
    MR_Word ll_backend__optimize__V_334_334;
#line 470 "optimize.m"
    MR_Word ll_backend__optimize__V_335_335;
#line 470 "optimize.m"
    MR_Word ll_backend__optimize__V_336_336;
#line 470 "optimize.m"
    MR_Integer ll_backend__optimize__V_337_337;
#line 470 "optimize.m"
    MR_Integer ll_backend__optimize__V_338_338;
#line 470 "optimize.m"
    MR_Word ll_backend__optimize__V_339_339;
#line 470 "optimize.m"
    MR_Word ll_backend__optimize__V_340_340;
#line 470 "optimize.m"
    MR_Word ll_backend__optimize__V_341_341;

#line 376 "optimize.m"
    {
#line 376 "optimize.m"
      ll_backend__optimize__LabelStr_23 = ll_backend__opt_util__format_proc_label_1_f_0(ll_backend__optimize__ProcLabel_16);
    }
#line 377 "optimize.m"
    ll_backend__optimize__V_89_89 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 377 "optimize.m"
    ll_backend__optimize__V_90_90 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 377 "optimize.m"
    ll_backend__optimize__VeryVerbose_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 377 "optimize.m"
    ll_backend__optimize__CheckedNondetTailCalls_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 377 "optimize.m"
    ll_backend__optimize__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 1)));
#line 377 "optimize.m"
    ll_backend__optimize__V_93_93 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 377 "optimize.m"
    ll_backend__optimize__V_94_94 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 377 "optimize.m"
    ll_backend__optimize__DupElim_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 377 "optimize.m"
    ll_backend__optimize__V_96_96 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 377 "optimize.m"
    ll_backend__optimize__V_97_97 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 377 "optimize.m"
    ll_backend__optimize__OptJump_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 377 "optimize.m"
    ll_backend__optimize__OptFullJump_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 377 "optimize.m"
    ll_backend__optimize__OptLabels_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 377 "optimize.m"
    ll_backend__optimize__Peephole_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 377 "optimize.m"
    ll_backend__optimize__V_102_102 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 377 "optimize.m"
    ll_backend__optimize__V_103_103 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 377 "optimize.m"
    ll_backend__optimize__PessimizeTailCalls_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 377 "optimize.m"
    ll_backend__optimize__V_105_105 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 377 "optimize.m"
    ll_backend__optimize__V_106_106 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 377 "optimize.m"
    ll_backend__optimize__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 3)));
#line 377 "optimize.m"
    ll_backend__optimize__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 4)));
#line 377 "optimize.m"
    ll_backend__optimize__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 5)));
#line 377 "optimize.m"
    ll_backend__optimize__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 6)));
#line 377 "optimize.m"
    ll_backend__optimize__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 7)));
#line 399 "optimize.m"
    if ((ll_backend__optimize__OptJump_25 == (MR_Integer) 0))
#line 400 "optimize.m"
      {
#line 401 "optimize.m"
        ll_backend__optimize__Mod1_30 = (MR_Integer) 0;
#line 400 "optimize.m"
        ll_backend__optimize__STATE_VARIABLE_C_51_51 = ll_backend__optimize__STATE_VARIABLE_C_0_39;
#line 400 "optimize.m"
        ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_55_55 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_41;
#line 400 "optimize.m"
        ll_backend__optimize__STATE_VARIABLE_Instrs_52_52 = ll_backend__optimize__STATE_VARIABLE_Instrs_0_43;
#line 400 "optimize.m"
      }
#line 399 "optimize.m"
    else
#line 383 "optimize.m"
      {
#line 391 "optimize.m"
        if ((ll_backend__optimize__VeryVerbose_24 == (MR_Integer) 0))
#line 392 "optimize.m"
          {
#line 392 "optimize.m"
          }
#line 391 "optimize.m"
        else
#line 386 "optimize.m"
          {
#line 387 "optimize.m"
            {
#line 387 "optimize.m"
              mercury__io__write_string_3_p_0((MR_String) "% Optimizing jumps for ");
            }
#line 388 "optimize.m"
            {
#line 388 "optimize.m"
              mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
            }
#line 389 "optimize.m"
            {
#line 389 "optimize.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 386 "optimize.m"
          }
#line 394 "optimize.m"
        {
#line 394 "optimize.m"
          ll_backend__jumpopt__optimize_jumps_in_proc_12_p_0(ll_backend__optimize__LayoutLabelSet_15, ll_backend__optimize__MayAlterRtti_17, ll_backend__optimize__ProcLabel_16, ll_backend__optimize__OptFullJump_26, ll_backend__optimize__Final_14, ll_backend__optimize__PessimizeTailCalls_27, ll_backend__optimize__CheckedNondetTailCalls_28, ll_backend__optimize__STATE_VARIABLE_C_0_39, &ll_backend__optimize__STATE_VARIABLE_C_51_51, ll_backend__optimize__STATE_VARIABLE_Instrs_0_43, &ll_backend__optimize__STATE_VARIABLE_Instrs_52_52, &ll_backend__optimize__Mod1_30);
        }
#line 397 "optimize.m"
        {
#line 397 "optimize.m"
          ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, ll_backend__optimize__STATE_VARIABLE_Instrs_52_52, ll_backend__optimize__STATE_VARIABLE_C_51_51, (MR_String) "jump", (MR_String) "after jump opt", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_41, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_55_55);
        }
#line 383 "optimize.m"
      }
#line 421 "optimize.m"
    if ((ll_backend__optimize__Peephole_31 == (MR_Integer) 0))
#line 422 "optimize.m"
      {
#line 423 "optimize.m"
        ll_backend__optimize__Mod2_34 = (MR_Integer) 0;
#line 422 "optimize.m"
        ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_65_65 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_55_55;
#line 422 "optimize.m"
        ll_backend__optimize__STATE_VARIABLE_Instrs_62_62 = ll_backend__optimize__STATE_VARIABLE_Instrs_52_52;
#line 422 "optimize.m"
      }
#line 421 "optimize.m"
    else
#line 405 "optimize.m"
      {
#line 413 "optimize.m"
        if ((ll_backend__optimize__VeryVerbose_24 == (MR_Integer) 0))
#line 414 "optimize.m"
          {
#line 414 "optimize.m"
          }
#line 413 "optimize.m"
        else
#line 408 "optimize.m"
          {
#line 409 "optimize.m"
            {
#line 409 "optimize.m"
              mercury__io__write_string_3_p_0((MR_String) "% Optimizing locally for ");
            }
#line 410 "optimize.m"
            {
#line 410 "optimize.m"
              mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
            }
#line 411 "optimize.m"
            {
#line 411 "optimize.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 408 "optimize.m"
          }
#line 418 "optimize.m"
        {
#line 418 "optimize.m"
          ll_backend__peephole__peephole_optimize_5_p_0(ll_backend__optimize__V_93_93, ll_backend__optimize__V_102_102, ll_backend__optimize__STATE_VARIABLE_Instrs_52_52, &ll_backend__optimize__STATE_VARIABLE_Instrs_62_62, &ll_backend__optimize__Mod2_34);
        }
#line 419 "optimize.m"
        {
#line 419 "optimize.m"
          ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, ll_backend__optimize__STATE_VARIABLE_Instrs_62_62, ll_backend__optimize__STATE_VARIABLE_C_51_51, (MR_String) "peep", (MR_String) "after peephole", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_55_55, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_65_65);
        }
#line 405 "optimize.m"
      }
#line 441 "optimize.m"
    if ((ll_backend__optimize__OptLabels_35 == (MR_Integer) 0))
#line 442 "optimize.m"
      {
#line 443 "optimize.m"
        ll_backend__optimize__Mod3_36 = (MR_Integer) 0;
#line 442 "optimize.m"
        ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_75_75 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_65_65;
#line 442 "optimize.m"
        ll_backend__optimize__STATE_VARIABLE_Instrs_72_72 = ll_backend__optimize__STATE_VARIABLE_Instrs_62_62;
#line 442 "optimize.m"
      }
#line 441 "optimize.m"
    else
#line 427 "optimize.m"
      {
#line 435 "optimize.m"
        if ((ll_backend__optimize__VeryVerbose_24 == (MR_Integer) 0))
#line 436 "optimize.m"
          {
#line 436 "optimize.m"
          }
#line 435 "optimize.m"
        else
#line 430 "optimize.m"
          {
#line 431 "optimize.m"
            {
#line 431 "optimize.m"
              mercury__io__write_string_3_p_0((MR_String) "% Optimizing labels for ");
            }
#line 432 "optimize.m"
            {
#line 432 "optimize.m"
              mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
            }
#line 433 "optimize.m"
            {
#line 433 "optimize.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 430 "optimize.m"
          }
#line 438 "optimize.m"
        {
#line 438 "optimize.m"
          ll_backend__labelopt__labelopt_main_5_p_0(ll_backend__optimize__Final_14, ll_backend__optimize__LayoutLabelSet_15, ll_backend__optimize__STATE_VARIABLE_Instrs_62_62, &ll_backend__optimize__STATE_VARIABLE_Instrs_72_72, &ll_backend__optimize__Mod3_36);
        }
#line 439 "optimize.m"
        {
#line 439 "optimize.m"
          ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, ll_backend__optimize__STATE_VARIABLE_Instrs_72_72, ll_backend__optimize__STATE_VARIABLE_C_51_51, (MR_String) "label", (MR_String) "after label opt", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_65_65, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_75_75);
        }
#line 427 "optimize.m"
      }
#line 461 "optimize.m"
    if ((ll_backend__optimize__DupElim_37 == (MR_Integer) 0))
#line 462 "optimize.m"
      {
#line 462 "optimize.m"
        *ll_backend__optimize__STATE_VARIABLE_C_40 = ll_backend__optimize__STATE_VARIABLE_C_51_51;
#line 462 "optimize.m"
        *ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_42 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_75_75;
#line 462 "optimize.m"
        *ll_backend__optimize__STATE_VARIABLE_Instrs_44 = ll_backend__optimize__STATE_VARIABLE_Instrs_72_72;
#line 462 "optimize.m"
      }
#line 461 "optimize.m"
    else
#line 447 "optimize.m"
      {
#line 455 "optimize.m"
        if ((ll_backend__optimize__VeryVerbose_24 == (MR_Integer) 0))
#line 456 "optimize.m"
          {
#line 456 "optimize.m"
          }
#line 455 "optimize.m"
        else
#line 450 "optimize.m"
          {
#line 451 "optimize.m"
            {
#line 451 "optimize.m"
              mercury__io__write_string_3_p_0((MR_String) "% Optimizing duplicates for ");
            }
#line 452 "optimize.m"
            {
#line 452 "optimize.m"
              mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_23);
            }
#line 453 "optimize.m"
            {
#line 453 "optimize.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 450 "optimize.m"
          }
#line 458 "optimize.m"
        {
#line 458 "optimize.m"
          ll_backend__dupelim__dupelim_main_5_p_0(ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_C_51_51, ll_backend__optimize__STATE_VARIABLE_C_40, ll_backend__optimize__STATE_VARIABLE_Instrs_72_72, ll_backend__optimize__STATE_VARIABLE_Instrs_44);
        }
#line 459 "optimize.m"
        {
#line 459 "optimize.m"
          ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_13, *ll_backend__optimize__STATE_VARIABLE_Instrs_44, *ll_backend__optimize__STATE_VARIABLE_C_40, (MR_String) "dup", (MR_String) "after duplicates", ll_backend__optimize__ProcLabel_16, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_75_75, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_42);
        }
#line 447 "optimize.m"
      }
#line 464 "optimize.m"
    ll_backend__optimize__succeeded = (ll_backend__optimize__Mod1_30 == (MR_Integer) 0);
#line 464 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 464 "optimize.m"
      {
#line 464 "optimize.m"
        ll_backend__optimize__succeeded = (ll_backend__optimize__Mod2_34 == (MR_Integer) 0);
#line 464 "optimize.m"
        if (ll_backend__optimize__succeeded)
#line 464 "optimize.m"
          {
#line 464 "optimize.m"
            ll_backend__optimize__succeeded = (ll_backend__optimize__Mod3_36 == (MR_Integer) 0);
#line 464 "optimize.m"
            if (ll_backend__optimize__succeeded)
#line 464 "optimize.m"
              {
#line 4548 "ll_backend.optimize.c"
                ll_backend__optimize__TypeInfo_342_342 = (MR_Word) &ll_backend__optimize_scalar_common_1[1];
#line 464 "optimize.m"
                {
#line 464 "optimize.m"
                  ll_backend__optimize__succeeded = mercury__builtin__unify_2_p_0(ll_backend__optimize__TypeInfo_342_342, ((MR_Box) (*ll_backend__optimize__STATE_VARIABLE_Instrs_44)), ((MR_Box) (ll_backend__optimize__STATE_VARIABLE_Instrs_0_43)));
                }
#line 464 "optimize.m"
              }
#line 464 "optimize.m"
          }
#line 464 "optimize.m"
      }
#line 466 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 465 "optimize.m"
      *ll_backend__optimize__Mod_21 = (MR_Integer) 0;
#line 466 "optimize.m"
    else
#line 467 "optimize.m"
      *ll_backend__optimize__Mod_21 = (MR_Integer) 1;
#line 470 "optimize.m"
    ll_backend__optimize__V_319_319 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 470 "optimize.m"
    ll_backend__optimize__Statistics_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 470 "optimize.m"
    ll_backend__optimize__V_320_320 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 470 "optimize.m"
    ll_backend__optimize__V_321_321 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 470 "optimize.m"
    ll_backend__optimize__V_322_322 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 1)));
#line 470 "optimize.m"
    ll_backend__optimize__V_323_323 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 470 "optimize.m"
    ll_backend__optimize__V_324_324 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 470 "optimize.m"
    ll_backend__optimize__V_325_325 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 470 "optimize.m"
    ll_backend__optimize__V_326_326 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 470 "optimize.m"
    ll_backend__optimize__V_327_327 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 470 "optimize.m"
    ll_backend__optimize__V_328_328 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 470 "optimize.m"
    ll_backend__optimize__V_329_329 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 470 "optimize.m"
    ll_backend__optimize__V_330_330 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 470 "optimize.m"
    ll_backend__optimize__V_331_331 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 470 "optimize.m"
    ll_backend__optimize__V_332_332 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 470 "optimize.m"
    ll_backend__optimize__V_333_333 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 470 "optimize.m"
    ll_backend__optimize__V_334_334 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 470 "optimize.m"
    ll_backend__optimize__V_335_335 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 470 "optimize.m"
    ll_backend__optimize__V_336_336 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 470 "optimize.m"
    ll_backend__optimize__V_337_337 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 3)));
#line 470 "optimize.m"
    ll_backend__optimize__V_338_338 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 4)));
#line 470 "optimize.m"
    ll_backend__optimize__V_339_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 5)));
#line 470 "optimize.m"
    ll_backend__optimize__V_340_340 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 6)));
#line 470 "optimize.m"
    ll_backend__optimize__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_13, (MR_Integer) 7)));
#line 471 "optimize.m"
    {
#line 471 "optimize.m"
      libs__file_util__maybe_report_stats_3_p_0(ll_backend__optimize__Statistics_38);
#line 471 "optimize.m"
      return;
    }
#line 374 "optimize.m"
  }
#line 368 "optimize.m"
}

#line 338 "optimize.m"
static void MR_CALL 
ll_backend__optimize__optimize_repeat_11_p_0(
#line 338 "optimize.m"
  MR_Word ll_backend__optimize__Info_12,
#line 338 "optimize.m"
  MR_Integer ll_backend__optimize__CurIter_13,
#line 338 "optimize.m"
  MR_Word ll_backend__optimize__LayoutLabelSet_14,
#line 338 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_15,
#line 338 "optimize.m"
  MR_Word ll_backend__optimize__MayAlterRtti_16,
#line 338 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_C_0_23,
#line 338 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_C_24,
#line 338 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_25,
#line 338 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_26,
#line 338 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_27,
#line 338 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_28)
#line 338 "optimize.m"
{
#line 361 "optimize.m"
  while (MR_TRUE)
#line 361 "optimize.m"
    {
#line 361 "optimize.m"
      /* tailcall optimized into a loop */
#line 361 "optimize.m"
      {
#line 361 "optimize.m"
        MR_bool ll_backend__optimize__succeeded = (ll_backend__optimize__CurIter_13 > (MR_Integer) 0);

#line 361 "optimize.m"
        if (ll_backend__optimize__succeeded)
#line 346 "optimize.m"
          {
#line 346 "optimize.m"
            MR_Integer ll_backend__optimize__NextIter_20 = (ll_backend__optimize__CurIter_13 - (MR_Integer) 1);
#line 346 "optimize.m"
            MR_Word ll_backend__optimize__Final_21;
#line 346 "optimize.m"
            MR_Word ll_backend__optimize__Mod_22;
#line 346 "optimize.m"
            MR_Word ll_backend__optimize__STATE_VARIABLE_C_31_31;
#line 346 "optimize.m"
            MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_32_32;
#line 346 "optimize.m"
            MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_33_33;

#line 347 "optimize.m"
            ll_backend__optimize__succeeded = (ll_backend__optimize__NextIter_20 == (MR_Integer) 0);
#line 349 "optimize.m"
            if (ll_backend__optimize__succeeded)
#line 348 "optimize.m"
              ll_backend__optimize__Final_21 = (MR_Integer) 1;
#line 349 "optimize.m"
            else
#line 350 "optimize.m"
              ll_backend__optimize__Final_21 = (MR_Integer) 0;
#line 352 "optimize.m"
            {
#line 352 "optimize.m"
              ll_backend__optimize__optimize_repeated_12_p_0(ll_backend__optimize__Info_12, ll_backend__optimize__Final_21, ll_backend__optimize__LayoutLabelSet_14, ll_backend__optimize__ProcLabel_15, ll_backend__optimize__MayAlterRtti_16, ll_backend__optimize__STATE_VARIABLE_C_0_23, &ll_backend__optimize__STATE_VARIABLE_C_31_31, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_25, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_32_32, ll_backend__optimize__STATE_VARIABLE_Instrs_0_27, &ll_backend__optimize__STATE_VARIABLE_Instrs_33_33, &ll_backend__optimize__Mod_22);
            }
#line 358 "optimize.m"
            if ((ll_backend__optimize__Mod_22 == (MR_Integer) 0))
#line 359 "optimize.m"
              {
#line 359 "optimize.m"
                *ll_backend__optimize__STATE_VARIABLE_C_24 = ll_backend__optimize__STATE_VARIABLE_C_31_31;
#line 359 "optimize.m"
                *ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_26 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_32_32;
#line 359 "optimize.m"
                *ll_backend__optimize__STATE_VARIABLE_Instrs_28 = ll_backend__optimize__STATE_VARIABLE_Instrs_33_33;
#line 359 "optimize.m"
              }
#line 358 "optimize.m"
            else
#line 356 "optimize.m"
              {
#line 356 "optimize.m"
                /* direct tailcall eliminated */
#line 356 "optimize.m"
                {
#line 356 "optimize.m"
                  MR_Integer ll_backend__optimize__CurIter__tmp_copy_13 = ll_backend__optimize__NextIter_20;
#line 356 "optimize.m"
                  MR_Word ll_backend__optimize__STATE_VARIABLE_C_0__tmp_copy_23 = ll_backend__optimize__STATE_VARIABLE_C_31_31;
#line 356 "optimize.m"
                  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0__tmp_copy_25 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_32_32;
#line 356 "optimize.m"
                  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0__tmp_copy_27 = ll_backend__optimize__STATE_VARIABLE_Instrs_33_33;

#line 356 "optimize.m"
                  ll_backend__optimize__STATE_VARIABLE_Instrs_0_27 = ll_backend__optimize__STATE_VARIABLE_Instrs_0__tmp_copy_27;
#line 356 "optimize.m"
                  ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_25 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0__tmp_copy_25;
#line 356 "optimize.m"
                  ll_backend__optimize__STATE_VARIABLE_C_0_23 = ll_backend__optimize__STATE_VARIABLE_C_0__tmp_copy_23;
#line 356 "optimize.m"
                  ll_backend__optimize__CurIter_13 = ll_backend__optimize__CurIter__tmp_copy_13;
#line 356 "optimize.m"
                }
#line 356 "optimize.m"
                continue;
#line 356 "optimize.m"
              }
#line 346 "optimize.m"
          }
#line 361 "optimize.m"
        else
#line 362 "optimize.m"
          {
#line 362 "optimize.m"
            *ll_backend__optimize__STATE_VARIABLE_Instrs_28 = ll_backend__optimize__STATE_VARIABLE_Instrs_0_27;
#line 362 "optimize.m"
            *ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_26 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_25;
#line 362 "optimize.m"
            *ll_backend__optimize__STATE_VARIABLE_C_24 = ll_backend__optimize__STATE_VARIABLE_C_0_23;
#line 362 "optimize.m"
          }
#line 361 "optimize.m"
      }
#line 361 "optimize.m"
      break;
#line 361 "optimize.m"
    }
#line 338 "optimize.m"
}

#line 303 "optimize.m"
static void MR_CALL 
ll_backend__optimize__optimize_initial_11_p_0(
#line 303 "optimize.m"
  MR_Word ll_backend__optimize__Info_12,
#line 303 "optimize.m"
  MR_Word ll_backend__optimize__LayoutLabelSet_13,
#line 303 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_14,
#line 303 "optimize.m"
  MR_Word ll_backend__optimize__CodeModel_15,
#line 303 "optimize.m"
  MR_Word ll_backend__optimize__MayAlterRtti_16,
#line 303 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_C_0_25,
#line 303 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_C_26,
#line 303 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_27,
#line 303 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_28,
#line 303 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_0_29,
#line 303 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_Instrs_30)
#line 303 "optimize.m"
{
#line 309 "optimize.m"
  {
#line 309 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 309 "optimize.m"
    MR_String ll_backend__optimize__LabelStr_20;
#line 309 "optimize.m"
    MR_Word ll_backend__optimize__OptFrames_21;
#line 311 "optimize.m"
    MR_Word ll_backend__optimize__V_42_42;
#line 311 "optimize.m"
    MR_Word ll_backend__optimize__V_43_43;
#line 311 "optimize.m"
    MR_Word ll_backend__optimize__V_44_44;
#line 311 "optimize.m"
    MR_Word ll_backend__optimize__V_45_45;
#line 311 "optimize.m"
    MR_Integer ll_backend__optimize__V_46_46;
#line 311 "optimize.m"
    MR_Word ll_backend__optimize__V_47_47;
#line 311 "optimize.m"
    MR_Word ll_backend__optimize__V_48_48;
#line 311 "optimize.m"
    MR_Word ll_backend__optimize__V_49_49;
#line 311 "optimize.m"
    MR_Word ll_backend__optimize__V_50_50;
#line 311 "optimize.m"
    MR_Word ll_backend__optimize__V_51_51;
#line 311 "optimize.m"
    MR_Word ll_backend__optimize__V_52_52;
#line 311 "optimize.m"
    MR_Word ll_backend__optimize__V_53_53;
#line 311 "optimize.m"
    MR_Word ll_backend__optimize__V_54_54;
#line 311 "optimize.m"
    MR_Word ll_backend__optimize__V_55_55;
#line 311 "optimize.m"
    MR_Word ll_backend__optimize__V_56_56;
#line 311 "optimize.m"
    MR_Word ll_backend__optimize__V_57_57;
#line 311 "optimize.m"
    MR_Word ll_backend__optimize__V_58_58;
#line 311 "optimize.m"
    MR_Word ll_backend__optimize__V_59_59;
#line 311 "optimize.m"
    MR_Integer ll_backend__optimize__V_60_60;
#line 311 "optimize.m"
    MR_Integer ll_backend__optimize__V_61_61;
#line 311 "optimize.m"
    MR_Word ll_backend__optimize__V_62_62;
#line 311 "optimize.m"
    MR_Word ll_backend__optimize__V_63_63;
#line 311 "optimize.m"
    MR_Word ll_backend__optimize__V_64_64;

#line 310 "optimize.m"
    {
#line 310 "optimize.m"
      ll_backend__optimize__LabelStr_20 = ll_backend__opt_util__format_proc_label_1_f_0(ll_backend__optimize__ProcLabel_14);
    }
#line 311 "optimize.m"
    ll_backend__optimize__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 311 "optimize.m"
    ll_backend__optimize__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 311 "optimize.m"
    ll_backend__optimize__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 311 "optimize.m"
    ll_backend__optimize__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 311 "optimize.m"
    ll_backend__optimize__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 1)));
#line 311 "optimize.m"
    ll_backend__optimize__V_47_47 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 311 "optimize.m"
    ll_backend__optimize__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 311 "optimize.m"
    ll_backend__optimize__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 311 "optimize.m"
    ll_backend__optimize__OptFrames_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 311 "optimize.m"
    ll_backend__optimize__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 311 "optimize.m"
    ll_backend__optimize__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 311 "optimize.m"
    ll_backend__optimize__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 311 "optimize.m"
    ll_backend__optimize__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 311 "optimize.m"
    ll_backend__optimize__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 311 "optimize.m"
    ll_backend__optimize__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 311 "optimize.m"
    ll_backend__optimize__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 311 "optimize.m"
    ll_backend__optimize__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 311 "optimize.m"
    ll_backend__optimize__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 311 "optimize.m"
    ll_backend__optimize__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 311 "optimize.m"
    ll_backend__optimize__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 3)));
#line 311 "optimize.m"
    ll_backend__optimize__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 4)));
#line 311 "optimize.m"
    ll_backend__optimize__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 5)));
#line 311 "optimize.m"
    ll_backend__optimize__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 6)));
#line 311 "optimize.m"
    ll_backend__optimize__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 7)));
#line 313 "optimize.m"
    ll_backend__optimize__succeeded = (ll_backend__optimize__OptFrames_21 == (MR_Integer) 1);
#line 313 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 313 "optimize.m"
      {
#line 314 "optimize.m"
        ll_backend__optimize__succeeded = (ll_backend__optimize__MayAlterRtti_16 == (MR_Integer) 0);
#line 313 "optimize.m"
        if (ll_backend__optimize__succeeded)
#line 315 "optimize.m"
          ll_backend__optimize__succeeded = (ll_backend__optimize__CodeModel_15 == (MR_Integer) 2);
#line 313 "optimize.m"
      }
#line 332 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 317 "optimize.m"
      {
#line 317 "optimize.m"
        MR_Word ll_backend__optimize__VeryVerbose_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 317 "optimize.m"
        MR_Word ll_backend__optimize__V_65_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 317 "optimize.m"
        MR_Word ll_backend__optimize__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 317 "optimize.m"
        MR_Word ll_backend__optimize__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 317 "optimize.m"
        MR_Integer ll_backend__optimize__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 1)));
#line 317 "optimize.m"
        MR_Word ll_backend__optimize__V_69_69 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 317 "optimize.m"
        MR_Word ll_backend__optimize__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 317 "optimize.m"
        MR_Word ll_backend__optimize__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 317 "optimize.m"
        MR_Word ll_backend__optimize__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 317 "optimize.m"
        MR_Word ll_backend__optimize__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 317 "optimize.m"
        MR_Word ll_backend__optimize__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 317 "optimize.m"
        MR_Word ll_backend__optimize__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 317 "optimize.m"
        MR_Word ll_backend__optimize__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 317 "optimize.m"
        MR_Word ll_backend__optimize__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 317 "optimize.m"
        MR_Word ll_backend__optimize__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 317 "optimize.m"
        MR_Word ll_backend__optimize__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 317 "optimize.m"
        MR_Word ll_backend__optimize__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 317 "optimize.m"
        MR_Word ll_backend__optimize__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 317 "optimize.m"
        MR_Word ll_backend__optimize__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 317 "optimize.m"
        MR_Integer ll_backend__optimize__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 3)));
#line 317 "optimize.m"
        MR_Integer ll_backend__optimize__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 4)));
#line 317 "optimize.m"
        MR_Word ll_backend__optimize__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 5)));
#line 317 "optimize.m"
        MR_Word ll_backend__optimize__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 6)));
#line 317 "optimize.m"
        MR_Word ll_backend__optimize__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_12, (MR_Integer) 7)));
#line 328 "optimize.m"
        MR_Word ll_backend__optimize___Mod_24;

#line 325 "optimize.m"
        if ((ll_backend__optimize__VeryVerbose_22 == (MR_Integer) 0))
#line 326 "optimize.m"
          {
#line 326 "optimize.m"
          }
#line 325 "optimize.m"
        else
#line 320 "optimize.m"
          {
#line 321 "optimize.m"
            {
#line 321 "optimize.m"
              mercury__io__write_string_3_p_0((MR_String) "% Optimizing nondet frames for ");
            }
#line 322 "optimize.m"
            {
#line 322 "optimize.m"
              mercury__io__write_string_3_p_0(ll_backend__optimize__LabelStr_20);
            }
#line 323 "optimize.m"
            {
#line 323 "optimize.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 320 "optimize.m"
          }
#line 328 "optimize.m"
        {
#line 328 "optimize.m"
          ll_backend__frameopt__frameopt_keep_nondet_frame_7_p_0(ll_backend__optimize__ProcLabel_14, ll_backend__optimize__LayoutLabelSet_13, ll_backend__optimize__STATE_VARIABLE_C_0_25, ll_backend__optimize__STATE_VARIABLE_C_26, ll_backend__optimize__STATE_VARIABLE_Instrs_0_29, ll_backend__optimize__STATE_VARIABLE_Instrs_30, &ll_backend__optimize___Mod_24);
        }
#line 330 "optimize.m"
        {
#line 330 "optimize.m"
          ll_backend__optimize__maybe_opt_debug_8_p_0(ll_backend__optimize__Info_12, *ll_backend__optimize__STATE_VARIABLE_Instrs_30, *ll_backend__optimize__STATE_VARIABLE_C_26, (MR_String) "ndframeopt", (MR_String) "after nondet frame opt", ll_backend__optimize__ProcLabel_14, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_27, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_28);
#line 330 "optimize.m"
          return;
        }
#line 317 "optimize.m"
      }
#line 332 "optimize.m"
    else
#line 333 "optimize.m"
      {
#line 333 "optimize.m"
        *ll_backend__optimize__STATE_VARIABLE_Instrs_30 = ll_backend__optimize__STATE_VARIABLE_Instrs_0_29;
#line 333 "optimize.m"
        *ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_28 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_27;
#line 333 "optimize.m"
        *ll_backend__optimize__STATE_VARIABLE_C_26 = ll_backend__optimize__STATE_VARIABLE_C_0_25;
#line 333 "optimize.m"
      }
#line 309 "optimize.m"
  }
#line 303 "optimize.m"
}

#line 240 "optimize.m"
static void MR_CALL 
ll_backend__optimize__maybe_opt_debug_8_p_0(
#line 240 "optimize.m"
  MR_Word ll_backend__optimize__Info_9,
#line 240 "optimize.m"
  MR_Word ll_backend__optimize__Instrs_10,
#line 240 "optimize.m"
  MR_Word ll_backend__optimize__Counter_11,
#line 240 "optimize.m"
  MR_String ll_backend__optimize__Suffix_12,
#line 240 "optimize.m"
  MR_String ll_backend__optimize__Msg_13,
#line 240 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_14,
#line 240 "optimize.m"
  MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37,
#line 240 "optimize.m"
  MR_Word * ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_38)
#line 240 "optimize.m"
{
#line 248 "optimize.m"
  {
#line 248 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;

#line 248 "optimize.m"
    if ((ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 298 "optimize.m"
      *ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_38 = ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37;
#line 248 "optimize.m"
    else
#line 248 "optimize.m"
      {
#line 248 "optimize.m"
        MR_String ll_backend__optimize__BaseName_16 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37, (MR_Integer) 0)));
#line 248 "optimize.m"
        MR_Integer ll_backend__optimize__OptNum0_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37, (MR_Integer) 1)));
#line 248 "optimize.m"
        MR_Integer ll_backend__optimize__PrevNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37, (MR_Integer) 3)));
#line 248 "optimize.m"
        MR_String ll_backend__optimize__PrevFileName_20 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37, (MR_Integer) 4)));
#line 248 "optimize.m"
        MR_Word ll_backend__optimize__PrevInstrs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37, (MR_Integer) 5)));
#line 248 "optimize.m"
        MR_Integer ll_backend__optimize__OptNum_22 = (ll_backend__optimize__OptNum0_17 + (MR_Integer) 1);
#line 248 "optimize.m"
        MR_String ll_backend__optimize__OptFileName_23;
#line 248 "optimize.m"
        MR_String ll_backend__optimize__DiffFileName_24;
#line 248 "optimize.m"
        MR_Word ll_backend__optimize__Same_25;
#line 248 "optimize.m"
        MR_String ll_backend__optimize__V_40_40;
#line 248 "optimize.m"
        MR_String ll_backend__optimize__V_42_42;
#line 248 "optimize.m"
        MR_String ll_backend__optimize__V_43_43;
#line 248 "optimize.m"
        MR_String ll_backend__optimize__V_44_44;
#line 248 "optimize.m"
        MR_String ll_backend__optimize__V_46_46;
#line 248 "optimize.m"
        MR_String ll_backend__optimize__V_48_48;
#line 248 "optimize.m"
        MR_String ll_backend__optimize__V_49_49;
#line 248 "optimize.m"
        MR_String ll_backend__optimize__V_50_50;
#line 247 "optimize.m"
        MR_String ll_backend__optimize___OptFileName0_18 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_0_37, (MR_Integer) 2)));
#line 263 "optimize.m"
        MR_Word ll_backend__optimize__Res_27;

#line 250 "optimize.m"
        {
#line 250 "optimize.m"
          ll_backend__optimize__V_43_43 = ll_backend__optimize__num_to_str_1_f_0(ll_backend__optimize__OptNum_22);
        }
#line 251 "optimize.m"
        {
#line 251 "optimize.m"
          ll_backend__optimize__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) ".", ll_backend__optimize__Suffix_12);
        }
#line 251 "optimize.m"
        {
#line 251 "optimize.m"
          ll_backend__optimize__V_42_42 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__V_43_43, ll_backend__optimize__V_44_44);
        }
#line 250 "optimize.m"
        {
#line 250 "optimize.m"
          ll_backend__optimize__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) ".opt", ll_backend__optimize__V_42_42);
        }
#line 250 "optimize.m"
        {
#line 250 "optimize.m"
          ll_backend__optimize__OptFileName_23 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__BaseName_16, ll_backend__optimize__V_40_40);
        }
#line 252 "optimize.m"
        {
#line 252 "optimize.m"
          ll_backend__optimize__V_49_49 = ll_backend__optimize__num_to_str_1_f_0(ll_backend__optimize__OptNum_22);
        }
#line 253 "optimize.m"
        {
#line 253 "optimize.m"
          ll_backend__optimize__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) ".", ll_backend__optimize__Suffix_12);
        }
#line 253 "optimize.m"
        {
#line 253 "optimize.m"
          ll_backend__optimize__V_48_48 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__V_49_49, ll_backend__optimize__V_50_50);
        }
#line 252 "optimize.m"
        {
#line 252 "optimize.m"
          ll_backend__optimize__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) ".diff", ll_backend__optimize__V_48_48);
        }
#line 252 "optimize.m"
        {
#line 252 "optimize.m"
          ll_backend__optimize__DiffFileName_24 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__BaseName_16, ll_backend__optimize__V_46_46);
        }
#line 254 "optimize.m"
        {
#line 254 "optimize.m"
          ll_backend__optimize__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__optimize_scalar_common_1[1], ((MR_Box) (ll_backend__optimize__Instrs_10)), ((MR_Box) (ll_backend__optimize__PrevInstrs_21)));
        }
#line 258 "optimize.m"
        if (ll_backend__optimize__succeeded)
#line 255 "optimize.m"
          {
#line 255 "optimize.m"
            ll_backend__optimize__Same_25 = (MR_Integer) 1;
#line 256 "optimize.m"
            {
#line 256 "optimize.m"
              MR_Word base;
#line 256 "optimize.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 256 "optimize.m"
              *ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_38 = base;
#line 256 "optimize.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__optimize__BaseName_16));
#line 256 "optimize.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__optimize__OptNum_22));
#line 256 "optimize.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ll_backend__optimize__OptFileName_23));
#line 256 "optimize.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ll_backend__optimize__PrevNum_19));
#line 256 "optimize.m"
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (ll_backend__optimize__PrevFileName_20));
#line 256 "optimize.m"
              MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (ll_backend__optimize__Instrs_10));
#line 256 "optimize.m"
            }
#line 255 "optimize.m"
          }
#line 258 "optimize.m"
        else
#line 259 "optimize.m"
          {
#line 259 "optimize.m"
            ll_backend__optimize__Same_25 = (MR_Integer) 0;
#line 260 "optimize.m"
            {
#line 260 "optimize.m"
              MR_Word base;
#line 260 "optimize.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 260 "optimize.m"
              *ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_38 = base;
#line 260 "optimize.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__optimize__BaseName_16));
#line 260 "optimize.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__optimize__OptNum_22));
#line 260 "optimize.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ll_backend__optimize__OptFileName_23));
#line 260 "optimize.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ll_backend__optimize__OptNum_22));
#line 260 "optimize.m"
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (ll_backend__optimize__OptFileName_23));
#line 260 "optimize.m"
              MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (ll_backend__optimize__Instrs_10));
#line 260 "optimize.m"
            }
#line 259 "optimize.m"
          }
#line 264 "optimize.m"
        {
#line 264 "optimize.m"
          mercury__io__open_output_4_p_0(ll_backend__optimize__OptFileName_23, &ll_backend__optimize__Res_27);
        }
#line 5220 "ll_backend.optimize.c"
        if (((MR_tag((MR_Word) ll_backend__optimize__Res_27)) == (MR_mktag((MR_Integer) 1))))
#line 5222 "ll_backend.optimize.c"
          {
#line 5224 "ll_backend.optimize.c"
            MR_String ll_backend__optimize__V_60_60;

#line 283 "optimize.m"
            {
#line 283 "optimize.m"
              ll_backend__optimize__V_60_60 = mercury__string__f_43_43_2_f_0((MR_String) "cannot open ", ll_backend__optimize__OptFileName_23);
            }
#line 283 "optimize.m"
            {
#line 283 "optimize.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.optimize", (MR_String) "predicate \140ll_backend.optimize.maybe_opt_debug\'/8", ll_backend__optimize__V_60_60);
#line 283 "optimize.m"
              return;
            }
#line 5239 "ll_backend.optimize.c"
          }
#line 5241 "ll_backend.optimize.c"
        else
#line 5243 "ll_backend.optimize.c"
          {
#line 5245 "ll_backend.optimize.c"
            MR_Word ll_backend__optimize__FileStream_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Res_27, (MR_Integer) 0)));
#line 5247 "ll_backend.optimize.c"
            MR_Word ll_backend__optimize__OutputStream_29;
#line 5249 "ll_backend.optimize.c"
            MR_Integer ll_backend__optimize__NextLabel_30;
#line 268 "optimize.m"
            MR_Word ll_backend__optimize__V_31_31;

#line 267 "optimize.m"
            {
#line 267 "optimize.m"
              mercury__io__set_output_stream_4_p_0(ll_backend__optimize__FileStream_28, &ll_backend__optimize__OutputStream_29);
            }
#line 268 "optimize.m"
            {
#line 268 "optimize.m"
              mercury__counter__allocate_3_p_0(&ll_backend__optimize__NextLabel_30, ll_backend__optimize__Counter_11, &ll_backend__optimize__V_31_31);
            }
#line 269 "optimize.m"
            {
#line 269 "optimize.m"
              ll_backend__opt_debug__msg_5_p_0((MR_Integer) 1, ll_backend__optimize__NextLabel_30, ll_backend__optimize__Msg_13);
            }
#line 5269 "ll_backend.optimize.c"
            if ((ll_backend__optimize__Same_25 == (MR_Integer) 0))
#line 5271 "ll_backend.optimize.c"
              {
#line 5273 "ll_backend.optimize.c"
                MR_Word ll_backend__optimize__AutoComments_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 5275 "ll_backend.optimize.c"
                MR_String ll_backend__optimize__DiffCommand_35;
#line 5277 "ll_backend.optimize.c"
                MR_Word ll_backend__optimize__V_66_66;
#line 5279 "ll_backend.optimize.c"
                MR_String ll_backend__optimize__V_73_73;
#line 5281 "ll_backend.optimize.c"
                MR_String ll_backend__optimize__V_74_74;
#line 5283 "ll_backend.optimize.c"
                MR_String ll_backend__optimize__V_76_76;
#line 5285 "ll_backend.optimize.c"
                MR_String ll_backend__optimize__V_77_77;
#line 5287 "ll_backend.optimize.c"
                MR_String ll_backend__optimize__V_79_79;
#line 275 "optimize.m"
                MR_Word ll_backend__optimize__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 275 "optimize.m"
                MR_Word ll_backend__optimize__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 275 "optimize.m"
                MR_Word ll_backend__optimize__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 275 "optimize.m"
                MR_Integer ll_backend__optimize__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 1)));
#line 275 "optimize.m"
                MR_Word ll_backend__optimize__V_86_86 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 275 "optimize.m"
                MR_Word ll_backend__optimize__V_87_87 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 275 "optimize.m"
                MR_Word ll_backend__optimize__V_88_88 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 275 "optimize.m"
                MR_Word ll_backend__optimize__V_89_89 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 275 "optimize.m"
                MR_Word ll_backend__optimize__V_90_90 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 275 "optimize.m"
                MR_Word ll_backend__optimize__V_91_91 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 275 "optimize.m"
                MR_Word ll_backend__optimize__V_92_92 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 275 "optimize.m"
                MR_Word ll_backend__optimize__V_93_93 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 275 "optimize.m"
                MR_Word ll_backend__optimize__V_94_94 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 275 "optimize.m"
                MR_Word ll_backend__optimize__V_95_95 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 275 "optimize.m"
                MR_Word ll_backend__optimize__V_96_96 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 275 "optimize.m"
                MR_Word ll_backend__optimize__V_97_97 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 275 "optimize.m"
                MR_Word ll_backend__optimize__V_98_98 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 275 "optimize.m"
                MR_Word ll_backend__optimize__V_99_99 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 275 "optimize.m"
                MR_Integer ll_backend__optimize__V_100_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 3)));
#line 275 "optimize.m"
                MR_Integer ll_backend__optimize__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 4)));
#line 275 "optimize.m"
                MR_Word ll_backend__optimize__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 5)));
#line 275 "optimize.m"
                MR_Word ll_backend__optimize__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 6)));
#line 275 "optimize.m"
                MR_Word ll_backend__optimize__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 7)));
#line 279 "optimize.m"
                MR_Word ll_backend__optimize__V_33_33;
#line 294 "optimize.m"
                MR_Word ll_backend__optimize__V_36_36;

#line 277 "optimize.m"
                {
#line 277 "optimize.m"
                  ll_backend__optimize__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 277 "optimize.m"
                  MR_hl_field(MR_mktag(1), ll_backend__optimize__V_66_66, 0) = ((MR_Box) (ll_backend__optimize__ProcLabel_14));
#line 277 "optimize.m"
                }
#line 276 "optimize.m"
                {
#line 276 "optimize.m"
                  ll_backend__opt_debug__maybe_write_instrs_6_p_0((MR_Integer) 1, ll_backend__optimize__AutoComments_32, ll_backend__optimize__V_66_66, ll_backend__optimize__Instrs_10);
                }
#line 279 "optimize.m"
                {
#line 279 "optimize.m"
                  mercury__io__set_output_stream_4_p_0(ll_backend__optimize__OutputStream_29, &ll_backend__optimize__V_33_33);
                }
#line 280 "optimize.m"
                {
#line 280 "optimize.m"
                  mercury__io__close_output_3_p_0(ll_backend__optimize__FileStream_28);
                }
#line 293 "optimize.m"
                {
#line 293 "optimize.m"
                  ll_backend__optimize__V_79_79 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__DiffFileName_24, (MR_String) "\'");
                }
#line 293 "optimize.m"
                {
#line 293 "optimize.m"
                  ll_backend__optimize__V_77_77 = mercury__string__f_43_43_2_f_0((MR_String) "\' > \'", ll_backend__optimize__V_79_79);
                }
#line 293 "optimize.m"
                {
#line 293 "optimize.m"
                  ll_backend__optimize__V_76_76 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__OptFileName_23, ll_backend__optimize__V_77_77);
                }
#line 292 "optimize.m"
                {
#line 292 "optimize.m"
                  ll_backend__optimize__V_74_74 = mercury__string__f_43_43_2_f_0((MR_String) "\' \'", ll_backend__optimize__V_76_76);
                }
#line 292 "optimize.m"
                {
#line 292 "optimize.m"
                  ll_backend__optimize__V_73_73 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__PrevFileName_20, ll_backend__optimize__V_74_74);
                }
#line 292 "optimize.m"
                {
#line 292 "optimize.m"
                  ll_backend__optimize__DiffCommand_35 = mercury__string__f_43_43_2_f_0((MR_String) "diff -u \'", ll_backend__optimize__V_73_73);
                }
#line 294 "optimize.m"
                {
#line 294 "optimize.m"
                  mercury__io__call_system_4_p_0(ll_backend__optimize__DiffCommand_35, &ll_backend__optimize__V_36_36);
                }
#line 5398 "ll_backend.optimize.c"
              }
#line 5400 "ll_backend.optimize.c"
            else
#line 5402 "ll_backend.optimize.c"
              {
#line 279 "optimize.m"
                MR_Word ll_backend__optimize__V_106_106;

#line 272 "optimize.m"
                {
#line 272 "optimize.m"
                  mercury__io__write_string_3_p_0((MR_String) "same as previous version\n");
                }
#line 279 "optimize.m"
                {
#line 279 "optimize.m"
                  mercury__io__set_output_stream_4_p_0(ll_backend__optimize__OutputStream_29, &ll_backend__optimize__V_106_106);
                }
#line 280 "optimize.m"
                {
#line 280 "optimize.m"
                  mercury__io__close_output_3_p_0(ll_backend__optimize__FileStream_28);
#line 280 "optimize.m"
                  return;
                }
#line 5424 "ll_backend.optimize.c"
              }
#line 5426 "ll_backend.optimize.c"
          }
#line 248 "optimize.m"
      }
#line 248 "optimize.m"
  }
#line 240 "optimize.m"
}

#line 231 "optimize.m"
static MR_String MR_CALL 
ll_backend__optimize__num_to_str_1_f_0(
#line 231 "optimize.m"
  MR_Integer ll_backend__optimize__N_3)
#line 231 "optimize.m"
{
#line 233 "optimize.m"
  {
#line 233 "optimize.m"
    MR_bool ll_backend__optimize__succeeded = (ll_backend__optimize__N_3 < (MR_Integer) 10);
#line 233 "optimize.m"
    MR_String ll_backend__optimize__HeadVar__2_2;

#line 233 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 235 "optimize.m"
      {
#line 235 "optimize.m"
        MR_String ll_backend__optimize__V_6_6;

#line 235 "optimize.m"
        {
#line 235 "optimize.m"
          ll_backend__optimize__V_6_6 = mercury__string__int_to_string_1_f_0(ll_backend__optimize__N_3);
        }
#line 235 "optimize.m"
        {
#line 235 "optimize.m"
          return ll_backend__optimize__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "0", ll_backend__optimize__V_6_6);
        }
#line 235 "optimize.m"
      }
#line 233 "optimize.m"
    else
#line 237 "optimize.m"
      {
#line 237 "optimize.m"
        return ll_backend__optimize__HeadVar__2_2 = mercury__string__int_to_string_1_f_0(ll_backend__optimize__N_3);
      }
#line 233 "optimize.m"
    return ll_backend__optimize__HeadVar__2_2;
#line 233 "optimize.m"
  }
#line 231 "optimize.m"
}

#line 227 "optimize.m"
static MR_String MR_CALL 
ll_backend__optimize__opt_subdir_name_0_f_0(void)
#line 227 "optimize.m"
{
#line 229 "optimize.m"
  {
#line 229 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;

#line 229 "optimize.m"
    return (MR_String) "OptSubdir";
#line 229 "optimize.m"
  }
#line 227 "optimize.m"
}

#line 202 "optimize.m"
static void MR_CALL 
ll_backend__optimize__output_first_opt_debug_7_p_0(
#line 202 "optimize.m"
  MR_Word ll_backend__optimize__Info_8,
#line 202 "optimize.m"
  MR_String ll_backend__optimize__FileName_9,
#line 202 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_10,
#line 202 "optimize.m"
  MR_Word ll_backend__optimize__Instrs0_11,
#line 202 "optimize.m"
  MR_Word ll_backend__optimize__Counter_12)
#line 202 "optimize.m"
{
#line 205 "optimize.m"
  {
#line 205 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 205 "optimize.m"
    MR_Word ll_backend__optimize__MkdirRes_14;
#line 207 "optimize.m"
    MR_Integer ll_backend__optimize__V_29_29;

#line 206 "optimize.m"
    {
#line 206 "optimize.m"
      mercury__io__call_system_4_p_0((MR_String) "mkdir -p OptSubdir", &ll_backend__optimize__MkdirRes_14);
    }
#line 207 "optimize.m"
    ll_backend__optimize__succeeded = ((MR_tag((MR_Word) ll_backend__optimize__MkdirRes_14)) == (MR_mktag((MR_Integer) 0)));
#line 207 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 207 "optimize.m"
      {
#line 207 "optimize.m"
        ll_backend__optimize__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__MkdirRes_14, (MR_Integer) 0)));
#line 207 "optimize.m"
        ll_backend__optimize__succeeded = (ll_backend__optimize__V_29_29 == (MR_Integer) 0);
#line 207 "optimize.m"
      }
#line 223 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 208 "optimize.m"
      {
#line 208 "optimize.m"
        MR_Word ll_backend__optimize__Res_15;

#line 208 "optimize.m"
        {
#line 208 "optimize.m"
          mercury__io__open_output_4_p_0(ll_backend__optimize__FileName_9, &ll_backend__optimize__Res_15);
        }
#line 219 "optimize.m"
        if (((MR_tag((MR_Word) ll_backend__optimize__Res_15)) == (MR_mktag((MR_Integer) 1))))
#line 220 "optimize.m"
          {
#line 220 "optimize.m"
            MR_String ll_backend__optimize__V_33_33;

#line 221 "optimize.m"
            {
#line 221 "optimize.m"
              ll_backend__optimize__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "cannot open ", ll_backend__optimize__FileName_9);
            }
#line 221 "optimize.m"
            {
#line 221 "optimize.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.optimize", (MR_String) "predicate \140ll_backend.optimize.output_first_opt_debug\'/7", ll_backend__optimize__V_33_33);
#line 221 "optimize.m"
              return;
            }
#line 220 "optimize.m"
          }
#line 219 "optimize.m"
        else
#line 210 "optimize.m"
          {
#line 210 "optimize.m"
            MR_Word ll_backend__optimize__FileStream_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Res_15, (MR_Integer) 0)));
#line 210 "optimize.m"
            MR_Word ll_backend__optimize__OutputStream_17;
#line 210 "optimize.m"
            MR_Integer ll_backend__optimize__NextLabel_18;
#line 210 "optimize.m"
            MR_Word ll_backend__optimize__AutoComments_20;
#line 210 "optimize.m"
            MR_Word ll_backend__optimize__V_40_40;
#line 212 "optimize.m"
            MR_Word ll_backend__optimize__V_19_19;
#line 214 "optimize.m"
            MR_Word ll_backend__optimize__V_49_49;
#line 214 "optimize.m"
            MR_Word ll_backend__optimize__V_50_50;
#line 214 "optimize.m"
            MR_Word ll_backend__optimize__V_51_51;
#line 214 "optimize.m"
            MR_Integer ll_backend__optimize__V_52_52;
#line 214 "optimize.m"
            MR_Word ll_backend__optimize__V_53_53;
#line 214 "optimize.m"
            MR_Word ll_backend__optimize__V_54_54;
#line 214 "optimize.m"
            MR_Word ll_backend__optimize__V_55_55;
#line 214 "optimize.m"
            MR_Word ll_backend__optimize__V_56_56;
#line 214 "optimize.m"
            MR_Word ll_backend__optimize__V_57_57;
#line 214 "optimize.m"
            MR_Word ll_backend__optimize__V_58_58;
#line 214 "optimize.m"
            MR_Word ll_backend__optimize__V_59_59;
#line 214 "optimize.m"
            MR_Word ll_backend__optimize__V_60_60;
#line 214 "optimize.m"
            MR_Word ll_backend__optimize__V_61_61;
#line 214 "optimize.m"
            MR_Word ll_backend__optimize__V_62_62;
#line 214 "optimize.m"
            MR_Word ll_backend__optimize__V_63_63;
#line 214 "optimize.m"
            MR_Word ll_backend__optimize__V_64_64;
#line 214 "optimize.m"
            MR_Word ll_backend__optimize__V_65_65;
#line 214 "optimize.m"
            MR_Word ll_backend__optimize__V_66_66;
#line 214 "optimize.m"
            MR_Integer ll_backend__optimize__V_67_67;
#line 214 "optimize.m"
            MR_Integer ll_backend__optimize__V_68_68;
#line 214 "optimize.m"
            MR_Word ll_backend__optimize__V_69_69;
#line 214 "optimize.m"
            MR_Word ll_backend__optimize__V_70_70;
#line 214 "optimize.m"
            MR_Word ll_backend__optimize__V_71_71;
#line 217 "optimize.m"
            MR_Word ll_backend__optimize__V_21_21;

#line 211 "optimize.m"
            {
#line 211 "optimize.m"
              mercury__io__set_output_stream_4_p_0(ll_backend__optimize__FileStream_16, &ll_backend__optimize__OutputStream_17);
            }
#line 212 "optimize.m"
            {
#line 212 "optimize.m"
              mercury__counter__allocate_3_p_0(&ll_backend__optimize__NextLabel_18, ll_backend__optimize__Counter_12, &ll_backend__optimize__V_19_19);
            }
#line 213 "optimize.m"
            {
#line 213 "optimize.m"
              ll_backend__opt_debug__msg_5_p_0((MR_Integer) 1, ll_backend__optimize__NextLabel_18, (MR_String) "before optimization");
            }
#line 214 "optimize.m"
            ll_backend__optimize__AutoComments_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 214 "optimize.m"
            ll_backend__optimize__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 214 "optimize.m"
            ll_backend__optimize__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 214 "optimize.m"
            ll_backend__optimize__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 214 "optimize.m"
            ll_backend__optimize__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 1)));
#line 214 "optimize.m"
            ll_backend__optimize__V_53_53 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 214 "optimize.m"
            ll_backend__optimize__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 214 "optimize.m"
            ll_backend__optimize__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 214 "optimize.m"
            ll_backend__optimize__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 214 "optimize.m"
            ll_backend__optimize__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 214 "optimize.m"
            ll_backend__optimize__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 214 "optimize.m"
            ll_backend__optimize__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 214 "optimize.m"
            ll_backend__optimize__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 214 "optimize.m"
            ll_backend__optimize__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 214 "optimize.m"
            ll_backend__optimize__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 214 "optimize.m"
            ll_backend__optimize__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 214 "optimize.m"
            ll_backend__optimize__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 214 "optimize.m"
            ll_backend__optimize__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 214 "optimize.m"
            ll_backend__optimize__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 214 "optimize.m"
            ll_backend__optimize__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 3)));
#line 214 "optimize.m"
            ll_backend__optimize__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 4)));
#line 214 "optimize.m"
            ll_backend__optimize__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 5)));
#line 214 "optimize.m"
            ll_backend__optimize__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 6)));
#line 214 "optimize.m"
            ll_backend__optimize__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_8, (MR_Integer) 7)));
#line 216 "optimize.m"
            {
#line 216 "optimize.m"
              ll_backend__optimize__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 216 "optimize.m"
              MR_hl_field(MR_mktag(1), ll_backend__optimize__V_40_40, 0) = ((MR_Box) (ll_backend__optimize__ProcLabel_10));
#line 216 "optimize.m"
            }
#line 215 "optimize.m"
            {
#line 215 "optimize.m"
              ll_backend__opt_debug__maybe_write_instrs_6_p_0((MR_Integer) 1, ll_backend__optimize__AutoComments_20, ll_backend__optimize__V_40_40, ll_backend__optimize__Instrs0_11);
            }
#line 217 "optimize.m"
            {
#line 217 "optimize.m"
              mercury__io__set_output_stream_4_p_0(ll_backend__optimize__OutputStream_17, &ll_backend__optimize__V_21_21);
            }
#line 218 "optimize.m"
            {
#line 218 "optimize.m"
              mercury__io__close_output_3_p_0(ll_backend__optimize__FileStream_16);
#line 218 "optimize.m"
              return;
            }
#line 210 "optimize.m"
          }
#line 208 "optimize.m"
      }
#line 223 "optimize.m"
    else
#line 224 "optimize.m"
      {
#line 224 "optimize.m"
        {
#line 224 "optimize.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.optimize", (MR_String) "predicate \140ll_backend.optimize.output_first_opt_debug\'/7", (MR_String) "cannot make OptSubdir");
#line 224 "optimize.m"
          return;
        }
#line 224 "optimize.m"
      }
#line 205 "optimize.m"
  }
#line 202 "optimize.m"
}

#line 180 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_1(
#line 180 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg)
#line 180 "optimize.m"
{
#line 180 "optimize.m"
  {
#line 180 "optimize.m"
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * ll_backend__optimize__env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) ll_backend__optimize__env_ptr_arg;

#line 180 "optimize.m"
    MR_builtin_longjmp((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__commit_0, 1);
#line 180 "optimize.m"
  }
#line 180 "optimize.m"
}

#line 180 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_3(
#line 180 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg)
#line 180 "optimize.m"
{
#line 180 "optimize.m"
  {
#line 180 "optimize.m"
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * ll_backend__optimize__env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) ll_backend__optimize__env_ptr_arg;

#line 180 "optimize.m"
    (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStr_47 = ((MR_String) (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__conv0_DebugOptPredIdStr_47);
#line 180 "optimize.m"
    {
#line 180 "optimize.m"
      ll_backend__optimize__need_opt_debug_info_5_p_0_2(ll_backend__optimize__env_ptr);
#line 180 "optimize.m"
      return;
    }
#line 180 "optimize.m"
  }
#line 180 "optimize.m"
}

#line 180 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_2(
#line 180 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg)
#line 180 "optimize.m"
{
#line 180 "optimize.m"
  {
#line 180 "optimize.m"
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * ll_backend__optimize__env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) ll_backend__optimize__env_ptr_arg;

#line 181 "optimize.m"
    {
#line 181 "optimize.m"
      (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = mercury__string__to_int_2_p_0((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStr_47, &(ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredId_48);
    }
#line 180 "optimize.m"
    if ((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded)
#line 180 "optimize.m"
      {
#line 182 "optimize.m"
        (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = ((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredId_48 == (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__PredIdInt_16);
#line 182 "optimize.m"
        if ((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded)
#line 182 "optimize.m"
          {
#line 182 "optimize.m"
            ll_backend__optimize__need_opt_debug_info_5_p_0_1(ll_backend__optimize__env_ptr);
#line 182 "optimize.m"
            return;
          }
#line 180 "optimize.m"
      }
#line 180 "optimize.m"
  }
#line 180 "optimize.m"
}

#line 180 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_4(
#line 180 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg)
#line 180 "optimize.m"
{
#line 180 "optimize.m"
  {
#line 180 "optimize.m"
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * ll_backend__optimize__env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) ll_backend__optimize__env_ptr_arg;

#line 180 "optimize.m"
    if (MR_builtin_setjmp((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__commit_0) == 0)
#line 180 "optimize.m"
      {
#line 180 "optimize.m"
        {
#line 180 "optimize.m"
          {
#line 180 "optimize.m"
            mercury__list__member_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &(ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__conv0_DebugOptPredIdStr_47, (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStrs_12, ll_backend__optimize__need_opt_debug_info_5_p_0_3, ll_backend__optimize__env_ptr);
          }
#line 180 "optimize.m"
        }
#line 180 "optimize.m"
        (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = MR_FALSE;
#line 180 "optimize.m"
      }
#line 180 "optimize.m"
    else
#line 180 "optimize.m"
      (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = MR_TRUE;
#line 180 "optimize.m"
  }
#line 180 "optimize.m"
}

#line 169 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_5(
#line 169 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg)
#line 169 "optimize.m"
{
#line 169 "optimize.m"
  {
#line 169 "optimize.m"
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * ll_backend__optimize__env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) ll_backend__optimize__env_ptr_arg;

#line 169 "optimize.m"
    MR_builtin_longjmp((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__commit_1, 1);
#line 169 "optimize.m"
  }
#line 169 "optimize.m"
}

#line 169 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_7(
#line 169 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg)
#line 169 "optimize.m"
{
#line 169 "optimize.m"
  {
#line 169 "optimize.m"
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * ll_backend__optimize__env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) ll_backend__optimize__env_ptr_arg;

#line 169 "optimize.m"
    (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStr_45 = ((MR_String) (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__conv1_DebugOptPredIdStr_45);
#line 169 "optimize.m"
    {
#line 169 "optimize.m"
      ll_backend__optimize__need_opt_debug_info_5_p_0_6(ll_backend__optimize__env_ptr);
#line 169 "optimize.m"
      return;
    }
#line 169 "optimize.m"
  }
#line 169 "optimize.m"
}

#line 169 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_6(
#line 169 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg)
#line 169 "optimize.m"
{
#line 169 "optimize.m"
  {
#line 169 "optimize.m"
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * ll_backend__optimize__env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) ll_backend__optimize__env_ptr_arg;

#line 170 "optimize.m"
    {
#line 170 "optimize.m"
      (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = mercury__string__to_int_2_p_0((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStr_45, &(ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredId_46);
    }
#line 169 "optimize.m"
    if ((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded)
#line 169 "optimize.m"
      {
#line 171 "optimize.m"
        (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = ((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredId_46 == (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__PredIdInt_16);
#line 171 "optimize.m"
        if ((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded)
#line 171 "optimize.m"
          {
#line 171 "optimize.m"
            ll_backend__optimize__need_opt_debug_info_5_p_0_5(ll_backend__optimize__env_ptr);
#line 171 "optimize.m"
            return;
          }
#line 169 "optimize.m"
      }
#line 169 "optimize.m"
  }
#line 169 "optimize.m"
}

#line 169 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0_8(
#line 169 "optimize.m"
  void * ll_backend__optimize__env_ptr_arg)
#line 169 "optimize.m"
{
#line 169 "optimize.m"
  {
#line 169 "optimize.m"
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s * ll_backend__optimize__env_ptr = (struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s *) ll_backend__optimize__env_ptr_arg;

#line 169 "optimize.m"
    if (MR_builtin_setjmp((ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__commit_1) == 0)
#line 169 "optimize.m"
      {
#line 169 "optimize.m"
        {
#line 169 "optimize.m"
          {
#line 169 "optimize.m"
            mercury__list__member_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &(ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__conv1_DebugOptPredIdStr_45, (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStrs_12, ll_backend__optimize__need_opt_debug_info_5_p_0_7, ll_backend__optimize__env_ptr);
          }
#line 169 "optimize.m"
        }
#line 169 "optimize.m"
        (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = MR_FALSE;
#line 169 "optimize.m"
      }
#line 169 "optimize.m"
    else
#line 169 "optimize.m"
      (ll_backend__optimize__env_ptr)->ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = MR_TRUE;
#line 169 "optimize.m"
  }
#line 169 "optimize.m"
}

#line 152 "optimize.m"
static void MR_CALL 
ll_backend__optimize__need_opt_debug_info_5_p_0(
#line 152 "optimize.m"
  MR_Word ll_backend__optimize__Info_6,
#line 152 "optimize.m"
  MR_String ll_backend__optimize__Name_7,
#line 152 "optimize.m"
  MR_Integer ll_backend__optimize__Arity_8,
#line 152 "optimize.m"
  MR_Word ll_backend__optimize__PredProcId_9,
#line 152 "optimize.m"
  MR_Word * ll_backend__optimize__MaybeBaseName_10)
#line 152 "optimize.m"
{
#line 152 "optimize.m"
  {
#line 152 "optimize.m"
    struct ll_backend__optimize__need_opt_debug_info_5_p_0_env_0_s ll_backend__optimize__env;

#line 155 "optimize.m"
    {
#line 155 "optimize.m"
      MR_Word ll_backend__optimize__DebugOpt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 5)));
#line 155 "optimize.m"
      MR_Word ll_backend__optimize__DebugOptPredNames_13;
#line 155 "optimize.m"
      MR_Word ll_backend__optimize__PredId_14;
#line 155 "optimize.m"
      MR_Integer ll_backend__optimize__ProcId_15;
#line 155 "optimize.m"
      MR_Integer ll_backend__optimize__ProcIdInt_17;
#line 156 "optimize.m"
      MR_Word ll_backend__optimize__V_49_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 156 "optimize.m"
      MR_Word ll_backend__optimize__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 156 "optimize.m"
      MR_Word ll_backend__optimize__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 156 "optimize.m"
      MR_Word ll_backend__optimize__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 156 "optimize.m"
      MR_Integer ll_backend__optimize__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 1)));
#line 156 "optimize.m"
      MR_Word ll_backend__optimize__V_54_54 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 156 "optimize.m"
      MR_Word ll_backend__optimize__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 156 "optimize.m"
      MR_Word ll_backend__optimize__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 156 "optimize.m"
      MR_Word ll_backend__optimize__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 156 "optimize.m"
      MR_Word ll_backend__optimize__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 156 "optimize.m"
      MR_Word ll_backend__optimize__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 156 "optimize.m"
      MR_Word ll_backend__optimize__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 156 "optimize.m"
      MR_Word ll_backend__optimize__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 156 "optimize.m"
      MR_Word ll_backend__optimize__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 156 "optimize.m"
      MR_Word ll_backend__optimize__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 156 "optimize.m"
      MR_Word ll_backend__optimize__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 156 "optimize.m"
      MR_Word ll_backend__optimize__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 156 "optimize.m"
      MR_Word ll_backend__optimize__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 156 "optimize.m"
      MR_Word ll_backend__optimize__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 156 "optimize.m"
      MR_Integer ll_backend__optimize__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 3)));
#line 156 "optimize.m"
      MR_Integer ll_backend__optimize__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 4)));

#line 156 "optimize.m"
      (ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStrs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 6)));
#line 156 "optimize.m"
      ll_backend__optimize__DebugOptPredNames_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_6, (MR_Integer) 7)));
#line 159 "optimize.m"
      ll_backend__optimize__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__PredProcId_9, (MR_Integer) 0)));
#line 159 "optimize.m"
      ll_backend__optimize__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__PredProcId_9, (MR_Integer) 1)));
#line 160 "optimize.m"
      {
#line 160 "optimize.m"
        hlds__hlds_pred__pred_id_to_int_2_p_0(ll_backend__optimize__PredId_14, &(ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__PredIdInt_16);
      }
#line 161 "optimize.m"
      {
#line 161 "optimize.m"
        hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__optimize__ProcId_15, &ll_backend__optimize__ProcIdInt_17);
      }
#line 163 "optimize.m"
      (ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = (ll_backend__optimize__DebugOpt_11 == (MR_Integer) 1);
#line 163 "optimize.m"
      if ((ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded)
#line 176 "optimize.m"
        {
#line 176 "optimize.m"
          if (((ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__DebugOptPredIdStrs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 176 "optimize.m"
            if ((ll_backend__optimize__DebugOptPredNames_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 189 "optimize.m"
              (ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = MR_TRUE;
#line 176 "optimize.m"
            else
#line 185 "optimize.m"
              {
#line 187 "optimize.m"
                {
#line 187 "optimize.m"
                  (ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (ll_backend__optimize__Name_7)), ll_backend__optimize__DebugOptPredNames_13);
                }
#line 185 "optimize.m"
              }
#line 176 "optimize.m"
          else
#line 176 "optimize.m"
            if ((ll_backend__optimize__DebugOptPredNames_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 180 "optimize.m"
              {
#line 180 "optimize.m"
                {
#line 180 "optimize.m"
                  ll_backend__optimize__need_opt_debug_info_5_p_0_4(&ll_backend__optimize__env);
                }
#line 180 "optimize.m"
              }
#line 176 "optimize.m"
            else
#line 173 "optimize.m"
              {
#line 169 "optimize.m"
                {
#line 169 "optimize.m"
                  ll_backend__optimize__need_opt_debug_info_5_p_0_8(&ll_backend__optimize__env);
                }
#line 173 "optimize.m"
                if (!((ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded))
#line 174 "optimize.m"
                  {
#line 174 "optimize.m"
                    {
#line 174 "optimize.m"
                      (ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (ll_backend__optimize__Name_7)), ll_backend__optimize__DebugOptPredNames_13);
                    }
#line 174 "optimize.m"
                  }
#line 173 "optimize.m"
              }
#line 176 "optimize.m"
        }
#line 198 "optimize.m"
      if ((ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__succeeded)
#line 196 "optimize.m"
        {
#line 196 "optimize.m"
          MR_String ll_backend__optimize__BaseName_28;
#line 196 "optimize.m"
          MR_String ll_backend__optimize__V_29_29;
#line 196 "optimize.m"
          MR_String ll_backend__optimize__V_30_30;
#line 196 "optimize.m"
          MR_String ll_backend__optimize__V_32_32;
#line 196 "optimize.m"
          MR_String ll_backend__optimize__V_33_33;
#line 196 "optimize.m"
          MR_String ll_backend__optimize__V_34_34;
#line 196 "optimize.m"
          MR_String ll_backend__optimize__V_36_36;
#line 196 "optimize.m"
          MR_String ll_backend__optimize__V_37_37;
#line 196 "optimize.m"
          MR_String ll_backend__optimize__V_38_38;
#line 196 "optimize.m"
          MR_String ll_backend__optimize__V_40_40;
#line 196 "optimize.m"
          MR_String ll_backend__optimize__V_41_41;
#line 196 "optimize.m"
          MR_String ll_backend__optimize__V_42_42;
#line 196 "optimize.m"
          MR_String ll_backend__optimize__V_44_44;

#line 193 "optimize.m"
          {
#line 193 "optimize.m"
            ll_backend__optimize__V_29_29 = ll_backend__optimize__opt_subdir_name_0_f_0();
          }
#line 194 "optimize.m"
          {
#line 194 "optimize.m"
            ll_backend__optimize__V_33_33 = ll_backend__optimize__mangle_name_as_filename_1_f_0(ll_backend__optimize__Name_7);
          }
#line 194 "optimize.m"
          {
#line 194 "optimize.m"
            ll_backend__optimize__V_37_37 = mercury__string__int_to_string_1_f_0(ll_backend__optimize__Arity_8);
          }
#line 195 "optimize.m"
          {
#line 195 "optimize.m"
            ll_backend__optimize__V_41_41 = mercury__string__int_to_string_1_f_0((ll_backend__optimize__env).ll_backend__optimize__need_opt_debug_info_5_p_0_env_0__PredIdInt_16);
          }
#line 196 "optimize.m"
          {
#line 196 "optimize.m"
            ll_backend__optimize__V_44_44 = mercury__string__int_to_string_1_f_0(ll_backend__optimize__ProcIdInt_17);
          }
#line 196 "optimize.m"
          {
#line 196 "optimize.m"
            ll_backend__optimize__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) ".proc", ll_backend__optimize__V_44_44);
          }
#line 196 "optimize.m"
          {
#line 196 "optimize.m"
            ll_backend__optimize__V_40_40 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__V_41_41, ll_backend__optimize__V_42_42);
          }
#line 195 "optimize.m"
          {
#line 195 "optimize.m"
            ll_backend__optimize__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) ".pred", ll_backend__optimize__V_40_40);
          }
#line 195 "optimize.m"
          {
#line 195 "optimize.m"
            ll_backend__optimize__V_36_36 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__V_37_37, ll_backend__optimize__V_38_38);
          }
#line 194 "optimize.m"
          {
#line 194 "optimize.m"
            ll_backend__optimize__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__optimize__V_36_36);
          }
#line 194 "optimize.m"
          {
#line 194 "optimize.m"
            ll_backend__optimize__V_32_32 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__V_33_33, ll_backend__optimize__V_34_34);
          }
#line 194 "optimize.m"
          {
#line 194 "optimize.m"
            ll_backend__optimize__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "/", ll_backend__optimize__V_32_32);
          }
#line 193 "optimize.m"
          {
#line 193 "optimize.m"
            ll_backend__optimize__BaseName_28 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__V_29_29, ll_backend__optimize__V_30_30);
          }
#line 197 "optimize.m"
          {
#line 197 "optimize.m"
            MR_Word base;
#line 197 "optimize.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 197 "optimize.m"
            *ll_backend__optimize__MaybeBaseName_10 = base;
#line 197 "optimize.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__optimize__BaseName_28));
#line 197 "optimize.m"
          }
#line 196 "optimize.m"
        }
#line 198 "optimize.m"
      else
#line 199 "optimize.m"
        *ll_backend__optimize__MaybeBaseName_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 155 "optimize.m"
    }
#line 152 "optimize.m"
  }
#line 152 "optimize.m"
}

#line 131 "optimize.m"
static MR_Word MR_CALL 
ll_backend__optimize__make_internal_label_for_proc_label_2_f_0(
#line 131 "optimize.m"
  MR_Word ll_backend__optimize__ProcLabel_4,
#line 131 "optimize.m"
  MR_Integer ll_backend__optimize__LabelNum_5)
#line 131 "optimize.m"
{
#line 134 "optimize.m"
  {
#line 134 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 134 "optimize.m"
    MR_Word ll_backend__optimize__HeadVar__3_3;

#line 134 "optimize.m"
    {
#line 134 "optimize.m"
      ll_backend__optimize__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 134 "optimize.m"
      MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, 0) = ((MR_Box) (ll_backend__optimize__LabelNum_5));
#line 134 "optimize.m"
      MR_hl_field(MR_mktag(0), ll_backend__optimize__HeadVar__3_3, 1) = ((MR_Box) (ll_backend__optimize__ProcLabel_4));
#line 134 "optimize.m"
    }
#line 134 "optimize.m"
    return ll_backend__optimize__HeadVar__3_3;
#line 134 "optimize.m"
  }
#line 131 "optimize.m"
}

#line 103 "optimize.m"
static MR_Box MR_CALL 
ll_backend__optimize__optimize_proc_4_p_0_1(
#line 103 "optimize.m"
  MR_Box ll_backend__optimize__closure_arg,
#line 103 "optimize.m"
  MR_Box ll_backend__optimize__wrapper_arg_1)
#line 103 "optimize.m"
{
#line 103 "optimize.m"
  {
#line 103 "optimize.m"
    MR_Box ll_backend__optimize__wrapper_arg_2;
#line 103 "optimize.m"
    MR_Box ll_backend__optimize__closure = ll_backend__optimize__closure_arg;
#line 103 "optimize.m"
    MR_Word ll_backend__optimize__conv0_HeadVar__3_3;

#line 103 "optimize.m"
    {
#line 103 "optimize.m"
      ll_backend__optimize__conv0_HeadVar__3_3 = ll_backend__optimize__make_internal_label_for_proc_label_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__closure, (MR_Integer) 3))), ((MR_Integer) ll_backend__optimize__wrapper_arg_1));
    }
#line 103 "optimize.m"
    ll_backend__optimize__wrapper_arg_2 = ((MR_Box) (ll_backend__optimize__conv0_HeadVar__3_3));
#line 103 "optimize.m"
    return ll_backend__optimize__wrapper_arg_2;
#line 103 "optimize.m"
  }
#line 103 "optimize.m"
}

#line 30 "optimize.m"
void MR_CALL 
ll_backend__optimize__optimize_proc_4_p_0(
#line 30 "optimize.m"
  MR_Word ll_backend__optimize__Globals_5,
#line 30 "optimize.m"
  MR_Word ll_backend__optimize__GlobalData_6,
#line 30 "optimize.m"
  MR_Word ll_backend__optimize__CProc0_7,
#line 30 "optimize.m"
  MR_Word * ll_backend__optimize__CProc_8)
#line 30 "optimize.m"
{
#line 76 "optimize.m"
  {
#line 76 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;
#line 76 "optimize.m"
    MR_Word ll_backend__optimize__Info_9;
#line 76 "optimize.m"
    MR_String ll_backend__optimize__Name_13;
#line 76 "optimize.m"
    MR_Integer ll_backend__optimize__Arity_14;
#line 76 "optimize.m"
    MR_Word ll_backend__optimize__PredProcId_15;
#line 76 "optimize.m"
    MR_Word ll_backend__optimize__CodeModel_16;
#line 76 "optimize.m"
    MR_Word ll_backend__optimize__ProcLabel_17;
#line 76 "optimize.m"
    MR_Word ll_backend__optimize__MayAlterRtti_18;
#line 76 "optimize.m"
    MR_Word ll_backend__optimize__CGlobalVars_19;
#line 76 "optimize.m"
    MR_Word ll_backend__optimize__MaybeBaseName_20;
#line 76 "optimize.m"
    MR_Integer ll_backend__optimize__Repeat_24;
#line 76 "optimize.m"
    MR_Word ll_backend__optimize__LayoutLabelSet_29;
#line 76 "optimize.m"
    MR_Word ll_backend__optimize__Statistics_30;
#line 76 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_31_31;
#line 76 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_C_32_32;
#line 76 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43;
#line 76 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_C_45_45;
#line 76 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_46_46;
#line 76 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_47_47;
#line 76 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_C_48_48;
#line 76 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_49_49;
#line 76 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_50_50;
#line 76 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_C_54_54;
#line 76 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_55_55;
#line 76 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_56_56;
#line 76 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_C_59_59;
#line 76 "optimize.m"
    MR_Word ll_backend__optimize__STATE_VARIABLE_Instrs_60_60;
#line 95 "optimize.m"
    MR_Word ll_backend__optimize__V_63_63;
#line 95 "optimize.m"
    MR_Word ll_backend__optimize__V_64_64;
#line 95 "optimize.m"
    MR_Word ll_backend__optimize__V_65_65;
#line 95 "optimize.m"
    MR_Word ll_backend__optimize__V_66_66;
#line 95 "optimize.m"
    MR_Integer ll_backend__optimize__V_67_67;
#line 95 "optimize.m"
    MR_Word ll_backend__optimize__V_68_68;
#line 95 "optimize.m"
    MR_Word ll_backend__optimize__V_69_69;
#line 95 "optimize.m"
    MR_Word ll_backend__optimize__V_70_70;
#line 95 "optimize.m"
    MR_Word ll_backend__optimize__V_71_71;
#line 95 "optimize.m"
    MR_Word ll_backend__optimize__V_72_72;
#line 95 "optimize.m"
    MR_Word ll_backend__optimize__V_73_73;
#line 95 "optimize.m"
    MR_Word ll_backend__optimize__V_74_74;
#line 95 "optimize.m"
    MR_Word ll_backend__optimize__V_75_75;
#line 95 "optimize.m"
    MR_Word ll_backend__optimize__V_76_76;
#line 95 "optimize.m"
    MR_Word ll_backend__optimize__V_77_77;
#line 95 "optimize.m"
    MR_Word ll_backend__optimize__V_78_78;
#line 95 "optimize.m"
    MR_Word ll_backend__optimize__V_79_79;
#line 95 "optimize.m"
    MR_Word ll_backend__optimize__V_80_80;
#line 95 "optimize.m"
    MR_Word ll_backend__optimize__V_81_81;
#line 95 "optimize.m"
    MR_Integer ll_backend__optimize__V_82_82;
#line 95 "optimize.m"
    MR_Word ll_backend__optimize__V_83_83;
#line 95 "optimize.m"
    MR_Word ll_backend__optimize__V_84_84;
#line 95 "optimize.m"
    MR_Word ll_backend__optimize__V_85_85;
#line 106 "optimize.m"
    MR_Word ll_backend__optimize__ProcLayout_25;
#line 109 "optimize.m"
    MR_Word ll_backend__optimize__V_109_109;
#line 109 "optimize.m"
    MR_Word ll_backend__optimize__V_110_110;
#line 109 "optimize.m"
    MR_Word ll_backend__optimize__V_111_111;
#line 109 "optimize.m"
    MR_Integer ll_backend__optimize__V_112_112;
#line 109 "optimize.m"
    MR_Word ll_backend__optimize__V_113_113;
#line 109 "optimize.m"
    MR_Word ll_backend__optimize__V_114_114;
#line 109 "optimize.m"
    MR_Word ll_backend__optimize__V_115_115;
#line 109 "optimize.m"
    MR_Word ll_backend__optimize__V_116_116;
#line 109 "optimize.m"
    MR_Word ll_backend__optimize__V_117_117;
#line 109 "optimize.m"
    MR_Word ll_backend__optimize__V_118_118;
#line 109 "optimize.m"
    MR_Word ll_backend__optimize__V_119_119;
#line 109 "optimize.m"
    MR_Word ll_backend__optimize__V_120_120;
#line 109 "optimize.m"
    MR_Word ll_backend__optimize__V_121_121;
#line 109 "optimize.m"
    MR_Word ll_backend__optimize__V_122_122;
#line 109 "optimize.m"
    MR_Word ll_backend__optimize__V_123_123;
#line 109 "optimize.m"
    MR_Word ll_backend__optimize__V_124_124;
#line 109 "optimize.m"
    MR_Word ll_backend__optimize__V_125_125;
#line 109 "optimize.m"
    MR_Word ll_backend__optimize__V_126_126;
#line 109 "optimize.m"
    MR_Integer ll_backend__optimize__V_127_127;
#line 109 "optimize.m"
    MR_Integer ll_backend__optimize__V_128_128;
#line 109 "optimize.m"
    MR_Word ll_backend__optimize__V_129_129;
#line 109 "optimize.m"
    MR_Word ll_backend__optimize__V_130_130;
#line 109 "optimize.m"
    MR_Word ll_backend__optimize__V_131_131;

#line 77 "optimize.m"
    {
#line 77 "optimize.m"
      ll_backend__optimize__Info_9 = ll_backend__optimize__init_llds_opt_info_1_f_0(ll_backend__optimize__Globals_5);
    }
#line 79 "optimize.m"
    ll_backend__optimize__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 0)));
#line 79 "optimize.m"
    ll_backend__optimize__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 1)));
#line 79 "optimize.m"
    ll_backend__optimize__PredProcId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 2)));
#line 79 "optimize.m"
    ll_backend__optimize__CodeModel_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 3)));
#line 79 "optimize.m"
    ll_backend__optimize__STATE_VARIABLE_Instrs_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 4)));
#line 79 "optimize.m"
    ll_backend__optimize__ProcLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 5)));
#line 79 "optimize.m"
    ll_backend__optimize__STATE_VARIABLE_C_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 6)));
#line 79 "optimize.m"
    ll_backend__optimize__MayAlterRtti_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 7)));
#line 79 "optimize.m"
    ll_backend__optimize__CGlobalVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__CProc0_7, (MR_Integer) 8)));
#line 81 "optimize.m"
    {
#line 81 "optimize.m"
      ll_backend__optimize__need_opt_debug_info_5_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__Name_13, ll_backend__optimize__Arity_14, ll_backend__optimize__PredProcId_15, &ll_backend__optimize__MaybeBaseName_20);
    }
#line 85 "optimize.m"
    if ((ll_backend__optimize__MaybeBaseName_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 84 "optimize.m"
      ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 85 "optimize.m"
    else
#line 86 "optimize.m"
      {
#line 86 "optimize.m"
        MR_String ll_backend__optimize__BaseName_21 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__optimize__MaybeBaseName_20, (MR_Integer) 0)));
#line 86 "optimize.m"
        MR_String ll_backend__optimize__FirstFileName_22;
#line 86 "optimize.m"
        MR_String ll_backend__optimize__V_33_33;
#line 86 "optimize.m"
        MR_String ll_backend__optimize__V_35_35;

#line 87 "optimize.m"
        {
#line 87 "optimize.m"
          ll_backend__optimize__V_35_35 = ll_backend__optimize__num_to_str_1_f_0((MR_Integer) 0);
        }
#line 87 "optimize.m"
        {
#line 87 "optimize.m"
          ll_backend__optimize__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) ".opt", ll_backend__optimize__V_35_35);
        }
#line 87 "optimize.m"
        {
#line 87 "optimize.m"
          ll_backend__optimize__FirstFileName_22 = mercury__string__f_43_43_2_f_0(ll_backend__optimize__BaseName_21, ll_backend__optimize__V_33_33);
        }
#line 89 "optimize.m"
        {
#line 89 "optimize.m"
          ll_backend__optimize__output_first_opt_debug_7_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__FirstFileName_22, ll_backend__optimize__ProcLabel_17, ll_backend__optimize__STATE_VARIABLE_Instrs_31_31, ll_backend__optimize__STATE_VARIABLE_C_32_32);
        }
#line 92 "optimize.m"
        {
#line 92 "optimize.m"
          ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 92 "optimize.m"
          MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43, 0) = ((MR_Box) (ll_backend__optimize__BaseName_21));
#line 92 "optimize.m"
          MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43, 1) = ((MR_Box) ((MR_Integer) 0));
#line 92 "optimize.m"
          MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43, 2) = ((MR_Box) (ll_backend__optimize__FirstFileName_22));
#line 92 "optimize.m"
          MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43, 3) = ((MR_Box) ((MR_Integer) 0));
#line 92 "optimize.m"
          MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43, 4) = ((MR_Box) (ll_backend__optimize__FirstFileName_22));
#line 92 "optimize.m"
          MR_hl_field(MR_mktag(1), ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43, 5) = ((MR_Box) (ll_backend__optimize__STATE_VARIABLE_Instrs_31_31));
#line 92 "optimize.m"
        }
#line 86 "optimize.m"
      }
#line 95 "optimize.m"
    ll_backend__optimize__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 95 "optimize.m"
    ll_backend__optimize__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 95 "optimize.m"
    ll_backend__optimize__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 95 "optimize.m"
    ll_backend__optimize__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 95 "optimize.m"
    ll_backend__optimize__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 1)));
#line 95 "optimize.m"
    ll_backend__optimize__V_68_68 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 95 "optimize.m"
    ll_backend__optimize__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 95 "optimize.m"
    ll_backend__optimize__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 95 "optimize.m"
    ll_backend__optimize__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 95 "optimize.m"
    ll_backend__optimize__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 95 "optimize.m"
    ll_backend__optimize__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 95 "optimize.m"
    ll_backend__optimize__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 95 "optimize.m"
    ll_backend__optimize__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 95 "optimize.m"
    ll_backend__optimize__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 95 "optimize.m"
    ll_backend__optimize__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 95 "optimize.m"
    ll_backend__optimize__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 95 "optimize.m"
    ll_backend__optimize__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 95 "optimize.m"
    ll_backend__optimize__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 95 "optimize.m"
    ll_backend__optimize__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 95 "optimize.m"
    ll_backend__optimize__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 3)));
#line 95 "optimize.m"
    ll_backend__optimize__Repeat_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 4)));
#line 95 "optimize.m"
    ll_backend__optimize__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 5)));
#line 95 "optimize.m"
    ll_backend__optimize__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 6)));
#line 95 "optimize.m"
    ll_backend__optimize__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 7)));
#line 97 "optimize.m"
    {
#line 97 "optimize.m"
      ll_backend__optimize__succeeded = ll_backend__global_data__global_data_maybe_get_proc_layout_3_p_0(ll_backend__optimize__GlobalData_6, ll_backend__optimize__PredProcId_15, &ll_backend__optimize__ProcLayout_25);
    }
#line 106 "optimize.m"
    if (ll_backend__optimize__succeeded)
#line 100 "optimize.m"
      {
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__TypeCtorInfo_132_132 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__TypeCtorInfo_134_134;
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__LabelMap_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 19)));
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__LayoutLabelNums_27;
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__LayoutLabels_28;
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__V_44_44;
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 0)));
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 1)));
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 2)));
#line 100 "optimize.m"
        MR_Integer ll_backend__optimize__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 3)));
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 4)));
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 5)));
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 6)));
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 7)));
#line 100 "optimize.m"
        MR_Integer ll_backend__optimize__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 8)));
#line 100 "optimize.m"
        MR_Integer ll_backend__optimize__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 9)));
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 10)));
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 11)));
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 12)));
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 13)));
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 14)));
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 15)));
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 16)));
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 17)));
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 18)));
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 20)));
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 21)));
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 22)));
#line 100 "optimize.m"
        MR_Word ll_backend__optimize__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__ProcLayout_25, (MR_Integer) 23)));

#line 101 "optimize.m"
        {
#line 101 "optimize.m"
          mercury__map__sorted_keys_2_p_0(ll_backend__optimize__TypeCtorInfo_132_132, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__optimize__LabelMap_26, &ll_backend__optimize__LayoutLabelNums_27);
        }
#line 6701 "ll_backend.optimize.c"
        ll_backend__optimize__TypeCtorInfo_134_134 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 103 "optimize.m"
        {
#line 103 "optimize.m"
          ll_backend__optimize__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 103 "optimize.m"
          MR_hl_field(MR_mktag(0), ll_backend__optimize__V_44_44, 0) = ((MR_Box) (&ll_backend__optimize_scalar_common_2[0]));
#line 103 "optimize.m"
          MR_hl_field(MR_mktag(0), ll_backend__optimize__V_44_44, 1) = ((MR_Box) (ll_backend__optimize__optimize_proc_4_p_0_1));
#line 103 "optimize.m"
          MR_hl_field(MR_mktag(0), ll_backend__optimize__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 103 "optimize.m"
          MR_hl_field(MR_mktag(0), ll_backend__optimize__V_44_44, 3) = ((MR_Box) (ll_backend__optimize__ProcLabel_17));
#line 103 "optimize.m"
        }
#line 102 "optimize.m"
        {
#line 102 "optimize.m"
          ll_backend__optimize__LayoutLabels_28 = mercury__list__map_2_f_0(ll_backend__optimize__TypeCtorInfo_132_132, ll_backend__optimize__TypeCtorInfo_134_134, ll_backend__optimize__V_44_44, ll_backend__optimize__LayoutLabelNums_27);
        }
#line 105 "optimize.m"
        {
#line 105 "optimize.m"
          mercury__set_tree234__sorted_list_to_set_2_p_0(ll_backend__optimize__TypeCtorInfo_134_134, ll_backend__optimize__LayoutLabels_28, &ll_backend__optimize__LayoutLabelSet_29);
        }
#line 100 "optimize.m"
      }
#line 106 "optimize.m"
    else
#line 107 "optimize.m"
      {
#line 107 "optimize.m"
        {
#line 107 "optimize.m"
          ll_backend__optimize__LayoutLabelSet_29 = mercury__set_tree234__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0);
        }
#line 107 "optimize.m"
      }
#line 109 "optimize.m"
    ll_backend__optimize__V_109_109 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 109 "optimize.m"
    ll_backend__optimize__Statistics_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 109 "optimize.m"
    ll_backend__optimize__V_110_110 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 109 "optimize.m"
    ll_backend__optimize__V_111_111 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 109 "optimize.m"
    ll_backend__optimize__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 1)));
#line 109 "optimize.m"
    ll_backend__optimize__V_113_113 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 109 "optimize.m"
    ll_backend__optimize__V_114_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 109 "optimize.m"
    ll_backend__optimize__V_115_115 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 109 "optimize.m"
    ll_backend__optimize__V_116_116 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 109 "optimize.m"
    ll_backend__optimize__V_117_117 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 109 "optimize.m"
    ll_backend__optimize__V_118_118 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 109 "optimize.m"
    ll_backend__optimize__V_119_119 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 109 "optimize.m"
    ll_backend__optimize__V_120_120 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 109 "optimize.m"
    ll_backend__optimize__V_121_121 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 109 "optimize.m"
    ll_backend__optimize__V_122_122 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 109 "optimize.m"
    ll_backend__optimize__V_123_123 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 109 "optimize.m"
    ll_backend__optimize__V_124_124 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
#line 109 "optimize.m"
    ll_backend__optimize__V_125_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
#line 109 "optimize.m"
    ll_backend__optimize__V_126_126 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 2)))) >> (MR_Integer) 15)) & (MR_Integer) 1);
#line 109 "optimize.m"
    ll_backend__optimize__V_127_127 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 3)));
#line 109 "optimize.m"
    ll_backend__optimize__V_128_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 4)));
#line 109 "optimize.m"
    ll_backend__optimize__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 5)));
#line 109 "optimize.m"
    ll_backend__optimize__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 6)));
#line 109 "optimize.m"
    ll_backend__optimize__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__optimize__Info_9, (MR_Integer) 7)));
#line 110 "optimize.m"
    {
#line 110 "optimize.m"
      ll_backend__optimize__optimize_initial_11_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__LayoutLabelSet_29, ll_backend__optimize__ProcLabel_17, ll_backend__optimize__CodeModel_16, ll_backend__optimize__MayAlterRtti_18, ll_backend__optimize__STATE_VARIABLE_C_32_32, &ll_backend__optimize__STATE_VARIABLE_C_45_45, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_43_43, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_46_46, ll_backend__optimize__STATE_VARIABLE_Instrs_31_31, &ll_backend__optimize__STATE_VARIABLE_Instrs_47_47);
    }
#line 112 "optimize.m"
    {
#line 112 "optimize.m"
      ll_backend__optimize__optimize_repeat_11_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__Repeat_24, ll_backend__optimize__LayoutLabelSet_29, ll_backend__optimize__ProcLabel_17, ll_backend__optimize__MayAlterRtti_18, ll_backend__optimize__STATE_VARIABLE_C_45_45, &ll_backend__optimize__STATE_VARIABLE_C_48_48, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_46_46, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_49_49, ll_backend__optimize__STATE_VARIABLE_Instrs_47_47, &ll_backend__optimize__STATE_VARIABLE_Instrs_50_50);
    }
#line 115 "optimize.m"
    {
#line 115 "optimize.m"
      libs__file_util__maybe_report_stats_3_p_0(ll_backend__optimize__Statistics_30);
    }
#line 117 "optimize.m"
    {
#line 117 "optimize.m"
      ll_backend__optimize__optimize_middle_12_p_0(ll_backend__optimize__Info_9, (MR_Integer) 1, ll_backend__optimize__LayoutLabelSet_29, ll_backend__optimize__ProcLabel_17, ll_backend__optimize__CodeModel_16, ll_backend__optimize__MayAlterRtti_18, ll_backend__optimize__STATE_VARIABLE_C_48_48, &ll_backend__optimize__STATE_VARIABLE_C_54_54, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_49_49, &ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_55_55, ll_backend__optimize__STATE_VARIABLE_Instrs_50_50, &ll_backend__optimize__STATE_VARIABLE_Instrs_56_56);
    }
#line 120 "optimize.m"
    {
#line 120 "optimize.m"
      libs__file_util__maybe_report_stats_3_p_0(ll_backend__optimize__Statistics_30);
    }
#line 122 "optimize.m"
    {
#line 122 "optimize.m"
      ll_backend__optimize__optimize_last_8_p_0(ll_backend__optimize__Info_9, ll_backend__optimize__LayoutLabelSet_29, ll_backend__optimize__ProcLabel_17, ll_backend__optimize__STATE_VARIABLE_C_54_54, &ll_backend__optimize__STATE_VARIABLE_C_59_59, ll_backend__optimize__STATE_VARIABLE_OptDebugInfo_55_55, ll_backend__optimize__STATE_VARIABLE_Instrs_56_56, &ll_backend__optimize__STATE_VARIABLE_Instrs_60_60);
    }
#line 125 "optimize.m"
    {
#line 125 "optimize.m"
      libs__file_util__maybe_report_stats_3_p_0(ll_backend__optimize__Statistics_30);
    }
#line 127 "optimize.m"
    {
#line 127 "optimize.m"
      MR_Word base;
#line 127 "optimize.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 127 "optimize.m"
      *ll_backend__optimize__CProc_8 = base;
#line 127 "optimize.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__optimize__Name_13));
#line 127 "optimize.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__optimize__Arity_14));
#line 127 "optimize.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__optimize__PredProcId_15));
#line 127 "optimize.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__optimize__CodeModel_16));
#line 127 "optimize.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__optimize__STATE_VARIABLE_Instrs_60_60));
#line 127 "optimize.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__optimize__ProcLabel_17));
#line 127 "optimize.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__optimize__STATE_VARIABLE_C_59_59));
#line 127 "optimize.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__optimize__MayAlterRtti_18));
#line 127 "optimize.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__optimize__CGlobalVars_19));
#line 127 "optimize.m"
    }
#line 76 "optimize.m"
  }
#line 30 "optimize.m"
}

#line 27 "optimize.m"
void MR_CALL 
ll_backend__optimize__optimize_procs_4_p_0(
#line 27 "optimize.m"
  MR_Word ll_backend__optimize__Globals_1,
#line 27 "optimize.m"
  MR_Word ll_backend__optimize__GlobalData_2,
#line 27 "optimize.m"
  MR_Word ll_backend__optimize__HeadVar__3_3,
#line 27 "optimize.m"
  MR_Word * ll_backend__optimize__HeadVar__4_4)
#line 27 "optimize.m"
{
#line 71 "optimize.m"
  {
#line 71 "optimize.m"
    MR_bool ll_backend__optimize__succeeded;

#line 71 "optimize.m"
    if ((ll_backend__optimize__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 71 "optimize.m"
      *ll_backend__optimize__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 71 "optimize.m"
    else
#line 72 "optimize.m"
      {
#line 72 "optimize.m"
        MR_Word ll_backend__optimize__Proc0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 0)));
#line 72 "optimize.m"
        MR_Word ll_backend__optimize__Procs0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__optimize__HeadVar__3_3, (MR_Integer) 1)));
#line 72 "optimize.m"
        MR_Word ll_backend__optimize__Proc_11;
#line 72 "optimize.m"
        MR_Word ll_backend__optimize__Procs_12;

#line 73 "optimize.m"
        {
#line 73 "optimize.m"
          ll_backend__optimize__optimize_proc_4_p_0(ll_backend__optimize__Globals_1, ll_backend__optimize__GlobalData_2, ll_backend__optimize__Proc0_9, &ll_backend__optimize__Proc_11);
        }
#line 74 "optimize.m"
        {
#line 74 "optimize.m"
          ll_backend__optimize__optimize_procs_4_p_0(ll_backend__optimize__Globals_1, ll_backend__optimize__GlobalData_2, ll_backend__optimize__Procs0_10, &ll_backend__optimize__Procs_12);
        }
#line 72 "optimize.m"
        {
#line 72 "optimize.m"
          MR_Word base;
#line 72 "optimize.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 72 "optimize.m"
          *ll_backend__optimize__HeadVar__4_4 = base;
#line 72 "optimize.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__optimize__Proc_11));
#line 72 "optimize.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__optimize__Procs_12));
#line 72 "optimize.m"
        }
#line 72 "optimize.m"
      }
#line 71 "optimize.m"
  }
#line 27 "optimize.m"
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
