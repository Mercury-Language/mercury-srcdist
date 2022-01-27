/*
** Automatically generated from `proc_gen.m'
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


/* :- module ll_backend.proc_gen. */
/* :- implementation. */

/*
INIT mercury__ll_backend__proc_gen__init
ENDINIT
*/

#include "ll_backend.proc_gen.mih"


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
#include "backend_libs.proc_label.mih"
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
#include "hlds.goal_path.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
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
#include "ll_backend.code_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.middle_rec.mih"
#include "ll_backend.prog_rep.mih"
#include "ll_backend.prog_rep_tables.mih"
#include "ll_backend.stack_layout.mih"
#include "ll_backend.trace_gen.mih"
#include "ll_backend.unify_gen.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 173 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0;

#line 176 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_c_procedure_0;

#line 179 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__proc_gen__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0;

#line 182 "ll_backend.proc_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__proc_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0;

#line 185 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__maybe__pti_maybe_1__plain_pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0;

#line 188 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 191 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0;

#line 194 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0;

#line 197 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_special_proc_return_0;

#line 200 "ll_backend.proc_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__proc_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 203 "ll_backend.proc_gen.c"
static const MR_PseudoTypeInfo ll_backend__proc_gen__ll_backend__proc_gen__field_types_proc_frame_slots_0_0[2];

#line 206 "ll_backend.proc_gen.c"
static const MR_DuFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__du_functor_desc_proc_frame_slots_0_0;

#line 209 "ll_backend.proc_gen.c"
static const MR_DuFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__du_stag_ordered_proc_frame_slots_0_0[1];

#line 212 "ll_backend.proc_gen.c"
static const MR_DuPtagLayout ll_backend__proc_gen__ll_backend__proc_gen__du_ptag_ordered_proc_frame_slots_0[1];

#line 215 "ll_backend.proc_gen.c"
static const MR_DuFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__du_name_ordered_proc_frame_slots_0[1];

#line 218 "ll_backend.proc_gen.c"
static const MR_Integer ll_backend__proc_gen__ll_backend__proc_gen__functor_number_map_proc_frame_slots_0[1];

#line 221 "ll_backend.proc_gen.c"
static const MR_EnumFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_0;

#line 224 "ll_backend.proc_gen.c"
static const MR_EnumFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_1;

#line 227 "ll_backend.proc_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__enum_value_ordered_type_giving_arg_0[2];

#line 230 "ll_backend.proc_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__enum_name_ordered_type_giving_arg_0[2];

#line 233 "ll_backend.proc_gen.c"
static const MR_Integer ll_backend__proc_gen__ll_backend__proc_gen__functor_number_map_type_giving_arg_0[2];

#line 236 "ll_backend.proc_gen.c"
static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____proc_frame_slots_0_0_10001(
#line 239 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 241 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_2);

#line 244 "ll_backend.proc_gen.c"
static void MR_CALL 
ll_backend__proc_gen____Compare____proc_frame_slots_0_0_10001(
#line 247 "ll_backend.proc_gen.c"
  MR_Box * ll_backend__proc_gen__wrapper_arg_1,
#line 249 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 251 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_3);

#line 254 "ll_backend.proc_gen.c"
static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____type_giving_arg_0_0_10001(
#line 257 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 259 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_2);

#line 262 "ll_backend.proc_gen.c"
static void MR_CALL 
ll_backend__proc_gen____Compare____type_giving_arg_0_0_10001(
#line 265 "ll_backend.proc_gen.c"
  MR_Box * ll_backend__proc_gen__wrapper_arg_1,
#line 267 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 269 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_3);

#line 1236 "proc_gen.m"
static MR_Box MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_105_110_102_111_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0_1(
#line 1236 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 1236 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1);

#line 1232 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_105_110_102_111_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0(
#line 1232 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TypeInfoLocnSets_6,
#line 1232 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_0_9,
#line 1232 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_10);

#line 222 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_108_101_97_118_101_95_50_95_95_91_49_93_95_48_5_p_0(
#line 222 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 222 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2,
#line 222 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__3_3,
#line 222 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__4_4,
#line 222 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__5_5);

#line 1402 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__add_tabling_info_struct__1402__1_2_p_0(
#line 1402 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__NumPTIs_19,
#line 1402 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__NumArgs_23);

#line 1187 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1187__1_2_p_0(
#line 1187 "proc_gen.m"
  MR_Word ll_backend__proc_gen__MaybeSpecialReturn_51,
#line 1187 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_176);

#line 1178 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1178__1_2_p_0(
#line 1178 "proc_gen.m"
  MR_Word ll_backend__proc_gen__MaybeSpecialReturn_51,
#line 1178 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_204);

#line 811 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_category_code__811__1_2_p_0(
#line 811 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_77,
#line 811 "proc_gen.m"
  MR_Word ll_backend__proc_gen__MaybeTailRecInfo_250);

#line 437 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__437__1_2_p_0(
#line 437 "proc_gen.m"
  MR_Word ll_backend__proc_gen__NeedsMaxfrSlot_62,
#line 437 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_126);

#line 354 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__354__1_2_p_0(
#line 354 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Parallel_23,
#line 354 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_116);

#line 1347 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen____Compare____type_giving_arg_0_0(
#line 1347 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__1_1,
#line 1347 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2,
#line 1347 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__3_3);

#line 1347 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____type_giving_arg_0_0(
#line 1347 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_1,
#line 1347 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2);

#line 321 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen____Compare____proc_frame_slots_0_0(
#line 321 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__1_1,
#line 321 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2,
#line 321 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__3_3);

#line 321 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____proc_frame_slots_0_0(
#line 321 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 321 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2);

#line 1402 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__add_tabling_info_struct_3_p_0_1(
#line 1402 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg);

#line 1388 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__add_tabling_info_struct_3_p_0(
#line 1388 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 1388 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_28,
#line 1388 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_29);

#line 1280 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__bytecode_stub_4_p_0(
#line 1280 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_5,
#line 1280 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_6,
#line 1280 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__ProcId_7,
#line 1280 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__BytecodeInstructions_8);

#line 1250 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__add_saved_succip_3_p_0(
#line 1250 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 1250 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__HeadVar__2_2,
#line 1250 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__3_3);

#line 1239 "proc_gen.m"
static MR_Word MR_CALL 
ll_backend__proc_gen__project_layout_locn_lval_1_f_0(
#line 1239 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1);

#line 1232 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__add_type_info_lvals_4_p_0(
#line 1232 "proc_gen.m"
  MR_Word ll_backend__proc_gen___TVar_5,
#line 1232 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TypeInfoLocnSets_6,
#line 1232 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_0_9,
#line 1232 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_10);

#line 1187 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0_3(
#line 1187 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg);

#line 1178 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0_2(
#line 1178 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg);

#line 1162 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0_1(
#line 1162 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 1162 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 1162 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 1162 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_3,
#line 1162 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_4);

#line 1056 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0(
#line 1056 "proc_gen.m"
  MR_Word ll_backend__proc_gen__CodeModel_10,
#line 1056 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcFrameSlots_11,
#line 1056 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TraceSlotInfo_12,
#line 1056 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcContext_13,
#line 1056 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__RestoreDeallocCode_14,
#line 1056 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__ExitCode_15,
#line 1056 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_0_64,
#line 1056 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CI_65,
#line 1056 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_0_66);

#line 927 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_entry_6_p_0(
#line 927 "proc_gen.m"
  MR_Word ll_backend__proc_gen__CI_7,
#line 927 "proc_gen.m"
  MR_Word ll_backend__proc_gen__CodeModel_8,
#line 927 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Goal_9,
#line 927 "proc_gen.m"
  MR_Word ll_backend__proc_gen__OutsideResumePoint_10,
#line 927 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__ProcFrameSlots_11,
#line 927 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__EntryCode_12);

#line 885 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_call_event_8_p_0(
#line 885 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TraceInfo_9,
#line 885 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcContext_10,
#line 885 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__MaybeTraceCallLabel_11,
#line 885 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__TraceCallCode_12,
#line 885 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_0_19,
#line 885 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CI_20,
#line 885 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_0_21,
#line 885 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CLD_22);

#line 811 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_category_code_11_p_0_1(
#line 811 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg);

#line 687 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_category_code_11_p_0(
#line 687 "proc_gen.m"
  MR_Word ll_backend__proc_gen__CodeModel_12,
#line 687 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcContext_13,
#line 687 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Goal_14,
#line 687 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ResumePoint_15,
#line 687 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TraceSlotInfo_16,
#line 687 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__Code_17,
#line 687 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__MaybeTraceCallLabel_18,
#line 687 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__ProcFrameSlots_19,
#line 687 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_0_61,
#line 687 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CI_62,
#line 687 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_0_63);

#line 602 "proc_gen.m"
static MR_Word MR_CALL 
ll_backend__proc_gen__maybe_generate_deep_prof_info_2_f_0(
#line 602 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcInfo_4,
#line 602 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HLDSDeepInfo_5);

#line 574 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__maybe_set_trace_level_3_p_0(
#line 574 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredInfo_4,
#line 574 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_15,
#line 574 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_16);

#line 297 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_proc_list_code_9_p_0(
#line 297 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_1,
#line 297 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_2,
#line 297 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_3,
#line 297 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredInfo_4,
#line 297 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__5_5,
#line 297 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_6,
#line 297 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_7,
#line 297 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_8,
#line 297 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_9);

#line 271 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_pred_code_par_7_p_0(
#line 271 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_8,
#line 271 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_9,
#line 271 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_10,
#line 271 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_16,
#line 271 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_17,
#line 271 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_18,
#line 271 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_19);

#line 234 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_pred_code_seq_9_p_0(
#line 234 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_10,
#line 234 "proc_gen.m"
  MR_Word ll_backend__proc_gen__VeryVerbose_11,
#line 234 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Statistics_12,
#line 234 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_13,
#line 234 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_14,
#line 234 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_23,
#line 234 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_24,
#line 234 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_25,
#line 234 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_26);

#line 171 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_module_code_seq_8_p_0_1(
#line 171 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 171 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 171 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 171 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_3,
#line 171 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_4,
#line 171 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_5);

#line 164 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_module_code_seq_8_p_0(
#line 164 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_9,
#line 164 "proc_gen.m"
  MR_Word ll_backend__proc_gen__VeryVerbose_10,
#line 164 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Statistics_11,
#line 164 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_12,
#line 164 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredIds_13,
#line 164 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__CProcsCord_14,
#line 164 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_16,
#line 164 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_17);

#line 1386 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__add_all_tabling_info_structs_3_p_0_1(
#line 1386 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 1386 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 1386 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 1386 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_3);

#line 437 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_proc_code_9_p_0_2(
#line 437 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg);

#line 354 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_proc_code_9_p_0_1(
#line 354 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg);

#line 209 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_module_code_4_p_0_2(
#line 209 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 209 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 209 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_2);

#line 199 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_module_code_4_p_0_1(
#line 199 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 199 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 199 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 199 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_3,
#line 199 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_4,
#line 199 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_5);


static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_1[40][2];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_2[7][3];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_3[1][10];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_4[2][6];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_5[6][5];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_6[1][12];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_7[5][1];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_8[1][7];




static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_1[40][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__proc_gen_scalar_common_2[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_special_proc_return_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__proc_gen_scalar_common_2[2]))),
    ((MR_Box) ((MR_String) "Fail"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__proc_gen_scalar_common_1[12]))),
    ((MR_Box) ((MR_String) "Return from procedure call"))
  },
  /* row 14 */
  {
    ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[13])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__proc_gen_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__proc_gen_scalar_common_1[16]))),
    ((MR_Box) ((MR_String) "Return from procedure call"))
  },
  /* row 18 */
  {
    ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[17])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__proc_gen_scalar_common_2[3]))),
    ((MR_Box) ((MR_String) "Succeed"))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "\t\t};\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "\t\tMR_GOTO(return_addr);\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "\t\tMR_restore_registers();\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) ");\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[24])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) ((MR_String) "discard retry ticket"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__proc_gen_scalar_common_1[28]))),
    ((MR_Box) ((MR_String) "fail after fail trace port"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_7[0]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_7[2]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_7[3]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_7[4]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) ((MR_String) "prune retry ticket"))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) "bytecode_call_info")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[25])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "&")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_String) "\t\treturn_addr = MB_bytecode_call_entry(")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_String) "\t\tMR_save_registers();\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_String) "\t\tMB_Native_Addr return_addr;\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[38])))
  },
};

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__proc_gen_scalar_common_1[9])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__proc_gen_scalar_common_1[19])))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__proc_gen_scalar_common_4[1])),
    ((MR_Box) (ll_backend__proc_gen__add_all_tabling_info_structs_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__proc_gen_scalar_common_8[0])),
    ((MR_Box) (ll_backend__proc_gen__generate_exit_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__proc_gen_scalar_common_5[5])),
    ((MR_Box) (ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_105_110_102_111_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_3[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ll_backend__proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&ll_backend__proc_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_c_procedure_0)),
    ((MR_Box) (&ll_backend__proc_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_c_procedure_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0))
  },
};

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_4[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_remapping_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__proc_gen__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0))
  },
};

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_5[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_needs_maxfr_slot_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_needs_maxfr_slot_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__proc_gen__maybe__pti_maybe_1__plain_pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__proc_gen__maybe__pti_maybe_1__plain_pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__proc_gen__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_special_proc_return_0)),
    ((MR_Box) (&ll_backend__proc_gen__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_special_proc_return_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_6[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&ll_backend__proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&ll_backend__proc_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_c_procedure_0)),
    ((MR_Box) (&ll_backend__proc_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_c_procedure_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0))
  },
};

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_7[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "Start of procedure prologue"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "End of procedure prologue"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "Start of procedure epilogue"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "End of procedure epilogue"))
  },
};

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_8[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&ll_backend__proc_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0)),
    ((MR_Box) (&ll_backend__proc_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__proc_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



#line 1146 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0
  }
};

#line 1155 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_c_procedure_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0
  }
};

#line 1163 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__proc_gen__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0
  }
};

#line 1172 "ll_backend.proc_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__proc_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1181 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__maybe__pti_maybe_1__plain_pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__proc_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1189 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1197 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 1205 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 1213 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_special_proc_return_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_special_proc_return_0
  }
};

#line 1221 "ll_backend.proc_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__proc_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1229 "ll_backend.proc_gen.c"
static const MR_PseudoTypeInfo ll_backend__proc_gen__ll_backend__proc_gen__field_types_proc_frame_slots_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__proc_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 1235 "ll_backend.proc_gen.c"
static const MR_DuFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__du_functor_desc_proc_frame_slots_0_0 = {
  (MR_String) "proc_frame_slots",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__proc_gen__ll_backend__proc_gen__field_types_proc_frame_slots_0_0,
  NULL,
  NULL,
  NULL
};

#line 1250 "ll_backend.proc_gen.c"
static const MR_DuFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__du_stag_ordered_proc_frame_slots_0_0[1] = {
  &ll_backend__proc_gen__ll_backend__proc_gen__du_functor_desc_proc_frame_slots_0_0
};

#line 1255 "ll_backend.proc_gen.c"
static const MR_DuPtagLayout ll_backend__proc_gen__ll_backend__proc_gen__du_ptag_ordered_proc_frame_slots_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__proc_gen__ll_backend__proc_gen__du_stag_ordered_proc_frame_slots_0_0
  }
};

#line 1264 "ll_backend.proc_gen.c"
static const MR_DuFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__du_name_ordered_proc_frame_slots_0[1] = {
  &ll_backend__proc_gen__ll_backend__proc_gen__du_functor_desc_proc_frame_slots_0_0
};

#line 1269 "ll_backend.proc_gen.c"
static const MR_Integer ll_backend__proc_gen__ll_backend__proc_gen__functor_number_map_proc_frame_slots_0[1] = {
  (MR_Integer) 0
};

#line 1274 "ll_backend.proc_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__proc_gen__ll_backend__proc_gen__type_ctor_info_proc_frame_slots_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__proc_gen____Unify____proc_frame_slots_0_0_10001)),
  ((MR_Box) (ll_backend__proc_gen____Compare____proc_frame_slots_0_0_10001)),
  (MR_String) "ll_backend.proc_gen",
  (MR_String) "proc_frame_slots",
  {     ll_backend__proc_gen__ll_backend__proc_gen__du_name_ordered_proc_frame_slots_0 },
  {     ll_backend__proc_gen__ll_backend__proc_gen__du_ptag_ordered_proc_frame_slots_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__proc_gen__ll_backend__proc_gen__functor_number_map_proc_frame_slots_0
};

#line 1291 "ll_backend.proc_gen.c"
static const MR_EnumFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_0 = {
  (MR_String) "last_arg",
  (MR_Integer) 0
};

#line 1297 "ll_backend.proc_gen.c"
static const MR_EnumFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_1 = {
  (MR_String) "last_but_one_arg",
  (MR_Integer) 1
};

#line 1303 "ll_backend.proc_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__enum_value_ordered_type_giving_arg_0[2] = {
  &ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_0,
  &ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_1
};

#line 1309 "ll_backend.proc_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__enum_name_ordered_type_giving_arg_0[2] = {
  &ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_0,
  &ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_1
};

#line 1315 "ll_backend.proc_gen.c"
static const MR_Integer ll_backend__proc_gen__ll_backend__proc_gen__functor_number_map_type_giving_arg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1321 "ll_backend.proc_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__proc_gen__ll_backend__proc_gen__type_ctor_info_type_giving_arg_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__proc_gen____Unify____type_giving_arg_0_0_10001)),
  ((MR_Box) (ll_backend__proc_gen____Compare____type_giving_arg_0_0_10001)),
  (MR_String) "ll_backend.proc_gen",
  (MR_String) "type_giving_arg",
  {     ll_backend__proc_gen__ll_backend__proc_gen__enum_name_ordered_type_giving_arg_0 },
  {     ll_backend__proc_gen__ll_backend__proc_gen__enum_value_ordered_type_giving_arg_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__proc_gen__ll_backend__proc_gen__functor_number_map_type_giving_arg_0
};

#line 1338 "ll_backend.proc_gen.c"
static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____proc_frame_slots_0_0_10001(
#line 1341 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 1343 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_2)
#line 1345 "ll_backend.proc_gen.c"
{
#line 1347 "ll_backend.proc_gen.c"
  {
#line 1349 "ll_backend.proc_gen.c"
    MR_bool ll_backend__proc_gen__succeeded;

#line 1352 "ll_backend.proc_gen.c"
    {
#line 1354 "ll_backend.proc_gen.c"
      ll_backend__proc_gen__succeeded = ll_backend__proc_gen____Unify____proc_frame_slots_0_0(((MR_Word) ll_backend__proc_gen__wrapper_arg_1), ((MR_Word) ll_backend__proc_gen__wrapper_arg_2));
    }
#line 1357 "ll_backend.proc_gen.c"
    return ll_backend__proc_gen__succeeded;
#line 1359 "ll_backend.proc_gen.c"
  }
#line 1361 "ll_backend.proc_gen.c"
}

#line 1364 "ll_backend.proc_gen.c"
static void MR_CALL 
ll_backend__proc_gen____Compare____proc_frame_slots_0_0_10001(
#line 1367 "ll_backend.proc_gen.c"
  MR_Box * ll_backend__proc_gen__wrapper_arg_1,
#line 1369 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 1371 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_3)
#line 1373 "ll_backend.proc_gen.c"
{
#line 1375 "ll_backend.proc_gen.c"
  {
#line 1377 "ll_backend.proc_gen.c"
    MR_Word ll_backend__proc_gen__conv0_HeadVar__1_1;

#line 1380 "ll_backend.proc_gen.c"
    {
#line 1382 "ll_backend.proc_gen.c"
      ll_backend__proc_gen____Compare____proc_frame_slots_0_0(&ll_backend__proc_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__proc_gen__wrapper_arg_2), ((MR_Word) ll_backend__proc_gen__wrapper_arg_3));
    }
#line 1385 "ll_backend.proc_gen.c"
    *ll_backend__proc_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__proc_gen__conv0_HeadVar__1_1));
#line 1387 "ll_backend.proc_gen.c"
  }
#line 1389 "ll_backend.proc_gen.c"
}

#line 1392 "ll_backend.proc_gen.c"
static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____type_giving_arg_0_0_10001(
#line 1395 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 1397 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_2)
#line 1399 "ll_backend.proc_gen.c"
{
#line 1401 "ll_backend.proc_gen.c"
  {
#line 1403 "ll_backend.proc_gen.c"
    MR_bool ll_backend__proc_gen__succeeded;

#line 1406 "ll_backend.proc_gen.c"
    {
#line 1408 "ll_backend.proc_gen.c"
      ll_backend__proc_gen__succeeded = ll_backend__proc_gen____Unify____type_giving_arg_0_0(((MR_Word) ll_backend__proc_gen__wrapper_arg_1), ((MR_Word) ll_backend__proc_gen__wrapper_arg_2));
    }
#line 1411 "ll_backend.proc_gen.c"
    return ll_backend__proc_gen__succeeded;
#line 1413 "ll_backend.proc_gen.c"
  }
#line 1415 "ll_backend.proc_gen.c"
}

#line 1418 "ll_backend.proc_gen.c"
static void MR_CALL 
ll_backend__proc_gen____Compare____type_giving_arg_0_0_10001(
#line 1421 "ll_backend.proc_gen.c"
  MR_Box * ll_backend__proc_gen__wrapper_arg_1,
#line 1423 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 1425 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_3)
#line 1427 "ll_backend.proc_gen.c"
{
#line 1429 "ll_backend.proc_gen.c"
  {
#line 1431 "ll_backend.proc_gen.c"
    MR_Word ll_backend__proc_gen__conv0_HeadVar__1_1;

#line 1434 "ll_backend.proc_gen.c"
    {
#line 1436 "ll_backend.proc_gen.c"
      ll_backend__proc_gen____Compare____type_giving_arg_0_0(&ll_backend__proc_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__proc_gen__wrapper_arg_2), ((MR_Word) ll_backend__proc_gen__wrapper_arg_3));
    }
#line 1439 "ll_backend.proc_gen.c"
    *ll_backend__proc_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__proc_gen__conv0_HeadVar__1_1));
#line 1441 "ll_backend.proc_gen.c"
  }
#line 1443 "ll_backend.proc_gen.c"
}

#line 1236 "proc_gen.m"
static MR_Box MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_105_110_102_111_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0_1(
#line 1236 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 1236 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1)
#line 1236 "proc_gen.m"
{
#line 1236 "proc_gen.m"
  {
#line 1236 "proc_gen.m"
    MR_Box ll_backend__proc_gen__wrapper_arg_2;
#line 1236 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;
#line 1236 "proc_gen.m"
    MR_Word ll_backend__proc_gen__conv0_Lval_2;

#line 1236 "proc_gen.m"
    {
#line 1236 "proc_gen.m"
      ll_backend__proc_gen__conv0_Lval_2 = ll_backend__proc_gen__project_layout_locn_lval_1_f_0(((MR_Word) ll_backend__proc_gen__wrapper_arg_1));
    }
#line 1236 "proc_gen.m"
    ll_backend__proc_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__proc_gen__conv0_Lval_2));
#line 1236 "proc_gen.m"
    return ll_backend__proc_gen__wrapper_arg_2;
#line 1236 "proc_gen.m"
  }
#line 1236 "proc_gen.m"
}

#line 1232 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_105_110_102_111_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0(
#line 1232 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TypeInfoLocnSets_6,
#line 1232 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_0_9,
#line 1232 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_10)
#line 1232 "proc_gen.m"
{
#line 1235 "proc_gen.m"
  {
#line 1235 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1235 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TypeCtorInfo_14_14 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 1235 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TypeInfoLvals_8;

#line 1236 "proc_gen.m"
    {
#line 1236 "proc_gen.m"
      ll_backend__proc_gen__TypeInfoLvals_8 = mercury__set__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0, ll_backend__proc_gen__TypeCtorInfo_14_14, (MR_Word) &ll_backend__proc_gen_scalar_common_2[6], ll_backend__proc_gen__TypeInfoLocnSets_6);
    }
#line 1237 "proc_gen.m"
    {
#line 1237 "proc_gen.m"
      mercury__set__union_3_p_0(ll_backend__proc_gen__TypeCtorInfo_14_14, ll_backend__proc_gen__TypeInfoLvals_8, ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_0_9, ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_10);
    }
#line 1235 "proc_gen.m"
  }
#line 1232 "proc_gen.m"
}

#line 222 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_108_101_97_118_101_95_50_95_95_91_49_93_95_48_5_p_0(
#line 222 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 222 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2,
#line 222 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__3_3,
#line 222 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__4_4,
#line 222 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__5_5)
#line 222 "proc_gen.m"
{
#line 228 "proc_gen.m"
  while (MR_TRUE)
#line 228 "proc_gen.m"
    {
#line 228 "proc_gen.m"
      /* tailcall optimized into a loop */
#line 228 "proc_gen.m"
      {
#line 228 "proc_gen.m"
        MR_bool ll_backend__proc_gen__succeeded;

#line 228 "proc_gen.m"
        if ((ll_backend__proc_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "proc_gen.m"
          {
#line 228 "proc_gen.m"
            *ll_backend__proc_gen__HeadVar__5_5 = ll_backend__proc_gen__HeadVar__4_4;
#line 228 "proc_gen.m"
            *ll_backend__proc_gen__HeadVar__3_3 = ll_backend__proc_gen__HeadVar__2_2;
#line 228 "proc_gen.m"
          }
#line 228 "proc_gen.m"
        else
#line 229 "proc_gen.m"
          {
#line 229 "proc_gen.m"
            MR_Box ll_backend__proc_gen__H_12 = (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 0));
#line 229 "proc_gen.m"
            MR_Word ll_backend__proc_gen__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 229 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_18_18;

#line 230 "proc_gen.m"
            {
#line 230 "proc_gen.m"
              ll_backend__proc_gen__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "proc_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_18_18, 0) = ll_backend__proc_gen__H_12;
#line 230 "proc_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_18_18, 1) = ((MR_Box) (ll_backend__proc_gen__HeadVar__2_2));
#line 230 "proc_gen.m"
            }
#line 230 "proc_gen.m"
            /* direct tailcall eliminated */
#line 230 "proc_gen.m"
            {
#line 230 "proc_gen.m"
              MR_Word ll_backend__proc_gen__HeadVar__1__tmp_copy_1 = ll_backend__proc_gen__T_13;
#line 230 "proc_gen.m"
              MR_Word ll_backend__proc_gen__HeadVar__2__tmp_copy_2 = ll_backend__proc_gen__HeadVar__4_4;
#line 230 "proc_gen.m"
              MR_Word * ll_backend__proc_gen__HeadVar__3__tmp_copy_3 = ll_backend__proc_gen__HeadVar__5_5;
#line 230 "proc_gen.m"
              MR_Word ll_backend__proc_gen__HeadVar__4__tmp_copy_4 = ll_backend__proc_gen__V_18_18;
#line 230 "proc_gen.m"
              MR_Word * ll_backend__proc_gen__HeadVar__5__tmp_copy_5 = ll_backend__proc_gen__HeadVar__3_3;

#line 230 "proc_gen.m"
              ll_backend__proc_gen__HeadVar__5_5 = ll_backend__proc_gen__HeadVar__5__tmp_copy_5;
#line 230 "proc_gen.m"
              ll_backend__proc_gen__HeadVar__4_4 = ll_backend__proc_gen__HeadVar__4__tmp_copy_4;
#line 230 "proc_gen.m"
              ll_backend__proc_gen__HeadVar__3_3 = ll_backend__proc_gen__HeadVar__3__tmp_copy_3;
#line 230 "proc_gen.m"
              ll_backend__proc_gen__HeadVar__2_2 = ll_backend__proc_gen__HeadVar__2__tmp_copy_2;
#line 230 "proc_gen.m"
              ll_backend__proc_gen__HeadVar__1_1 = ll_backend__proc_gen__HeadVar__1__tmp_copy_1;
#line 230 "proc_gen.m"
            }
#line 230 "proc_gen.m"
            continue;
#line 229 "proc_gen.m"
          }
#line 228 "proc_gen.m"
      }
#line 228 "proc_gen.m"
      break;
#line 228 "proc_gen.m"
    }
#line 222 "proc_gen.m"
}

#line 1402 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__add_tabling_info_struct__1402__1_2_p_0(
#line 1402 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__NumPTIs_19,
#line 1402 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__NumArgs_23)
#line 1402 "proc_gen.m"
{
#line 1402 "proc_gen.m"
  {
#line 1402 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__NumArgs_23 == ll_backend__proc_gen__NumPTIs_19);

#line 1402 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 1402 "proc_gen.m"
  }
#line 1402 "proc_gen.m"
}

#line 1187 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1187__1_2_p_0(
#line 1187 "proc_gen.m"
  MR_Word ll_backend__proc_gen__MaybeSpecialReturn_51,
#line 1187 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_176)
#line 1187 "proc_gen.m"
{
#line 1187 "proc_gen.m"
  {
#line 1187 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;

#line 1187 "proc_gen.m"
    {
#line 1187 "proc_gen.m"
      ll_backend__proc_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[7], ((MR_Box) (ll_backend__proc_gen__MaybeSpecialReturn_51)), ((MR_Box) (ll_backend__proc_gen__HeadVar__2_176)));
    }
#line 1187 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 1187 "proc_gen.m"
  }
#line 1187 "proc_gen.m"
}

#line 1178 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1178__1_2_p_0(
#line 1178 "proc_gen.m"
  MR_Word ll_backend__proc_gen__MaybeSpecialReturn_51,
#line 1178 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_204)
#line 1178 "proc_gen.m"
{
#line 1178 "proc_gen.m"
  {
#line 1178 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;

#line 1178 "proc_gen.m"
    {
#line 1178 "proc_gen.m"
      ll_backend__proc_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[7], ((MR_Box) (ll_backend__proc_gen__MaybeSpecialReturn_51)), ((MR_Box) (ll_backend__proc_gen__HeadVar__2_204)));
    }
#line 1178 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 1178 "proc_gen.m"
  }
#line 1178 "proc_gen.m"
}

#line 811 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_category_code__811__1_2_p_0(
#line 811 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_77,
#line 811 "proc_gen.m"
  MR_Word ll_backend__proc_gen__MaybeTailRecInfo_250)
#line 811 "proc_gen.m"
{
#line 811 "proc_gen.m"
  {
#line 811 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;

#line 811 "proc_gen.m"
    {
#line 811 "proc_gen.m"
      ll_backend__proc_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[3], ((MR_Box) (ll_backend__proc_gen__MaybeTailRecInfo_250)), ((MR_Box) (ll_backend__proc_gen__HeadVar__1_77)));
    }
#line 811 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 811 "proc_gen.m"
  }
#line 811 "proc_gen.m"
}

#line 437 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__437__1_2_p_0(
#line 437 "proc_gen.m"
  MR_Word ll_backend__proc_gen__NeedsMaxfrSlot_62,
#line 437 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_126)
#line 437 "proc_gen.m"
{
#line 437 "proc_gen.m"
  {
#line 437 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__NeedsMaxfrSlot_62 == ll_backend__proc_gen__HeadVar__2_126);

#line 437 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 437 "proc_gen.m"
  }
#line 437 "proc_gen.m"
}

#line 354 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__354__1_2_p_0(
#line 354 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Parallel_23,
#line 354 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_116)
#line 354 "proc_gen.m"
{
#line 354 "proc_gen.m"
  {
#line 354 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__Parallel_23 == ll_backend__proc_gen__HeadVar__2_116);

#line 354 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 354 "proc_gen.m"
  }
#line 354 "proc_gen.m"
}

#line 1347 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen____Compare____type_giving_arg_0_0(
#line 1347 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__1_1,
#line 1347 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2,
#line 1347 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__3_3)
#line 1347 "proc_gen.m"
{
#line 1347 "proc_gen.m"
  {
#line 1347 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1347 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__Cast_HeadVar1_4 = (MR_Integer) ll_backend__proc_gen__HeadVar__2_2;
#line 1347 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__Cast_HeadVar2_5 = (MR_Integer) ll_backend__proc_gen__HeadVar__3_3;

#line 1347 "proc_gen.m"
    {
#line 1347 "proc_gen.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__proc_gen__HeadVar__1_1, ll_backend__proc_gen__Cast_HeadVar1_4, ll_backend__proc_gen__Cast_HeadVar2_5);
    }
#line 1347 "proc_gen.m"
  }
#line 1347 "proc_gen.m"
}

#line 1347 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____type_giving_arg_0_0(
#line 1347 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_1,
#line 1347 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2)
#line 1347 "proc_gen.m"
{
#line 1790 "ll_backend.proc_gen.c"
  {
#line 1792 "ll_backend.proc_gen.c"
    MR_bool ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__HeadVar__2_1 == ll_backend__proc_gen__HeadVar__2_2);

#line 1795 "ll_backend.proc_gen.c"
    return ll_backend__proc_gen__succeeded;
#line 1797 "ll_backend.proc_gen.c"
  }
#line 1347 "proc_gen.m"
}

#line 321 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen____Compare____proc_frame_slots_0_0(
#line 321 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__1_1,
#line 321 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2,
#line 321 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__3_3)
#line 321 "proc_gen.m"
{
#line 321 "proc_gen.m"
  {
#line 321 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 321 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__CastX_9 = (MR_Integer) ll_backend__proc_gen__HeadVar__2_2;
#line 321 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__CastY_10 = (MR_Integer) ll_backend__proc_gen__HeadVar__3_3;

#line 321 "proc_gen.m"
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CastX_9 == ll_backend__proc_gen__CastY_10);
#line 321 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 1826 "ll_backend.proc_gen.c"
      *ll_backend__proc_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 321 "proc_gen.m"
    else
#line 321 "proc_gen.m"
      {
#line 321 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 321 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 321 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 321 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 321 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_8_8;

#line 321 "proc_gen.m"
        {
#line 321 "proc_gen.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__proc_gen__V_8_8, ll_backend__proc_gen__V_4_4, ll_backend__proc_gen__V_6_6);
        }
#line 1848 "ll_backend.proc_gen.c"
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__V_8_8 == (MR_Integer) 0);
#line 321 "proc_gen.m"
        ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
#line 321 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 321 "proc_gen.m"
          *ll_backend__proc_gen__HeadVar__1_1 = ll_backend__proc_gen__V_8_8;
#line 321 "proc_gen.m"
        else
#line 321 "proc_gen.m"
          {
#line 321 "proc_gen.m"
            {
#line 321 "proc_gen.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[8], ll_backend__proc_gen__HeadVar__1_1, ((MR_Box) (ll_backend__proc_gen__V_5_5)), ((MR_Box) (ll_backend__proc_gen__V_7_7)));
            }
#line 321 "proc_gen.m"
          }
#line 321 "proc_gen.m"
      }
#line 321 "proc_gen.m"
  }
#line 321 "proc_gen.m"
}

#line 321 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____proc_frame_slots_0_0(
#line 321 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 321 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2)
#line 321 "proc_gen.m"
{
#line 321 "proc_gen.m"
  {
#line 321 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 321 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__CastX_7 = (MR_Integer) ll_backend__proc_gen__HeadVar__1_1;
#line 321 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__CastY_8 = (MR_Integer) ll_backend__proc_gen__HeadVar__2_2;

#line 321 "proc_gen.m"
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CastX_7 == ll_backend__proc_gen__CastY_8);
#line 321 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 321 "proc_gen.m"
      ll_backend__proc_gen__succeeded = MR_TRUE;
#line 321 "proc_gen.m"
    else
#line 321 "proc_gen.m"
      {
#line 321 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TypeInfo_9_9;
#line 321 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 321 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 321 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 321 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__2_2, (MR_Integer) 1)));

#line 1913 "ll_backend.proc_gen.c"
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__V_3_3 == ll_backend__proc_gen__V_5_5);
#line 321 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 321 "proc_gen.m"
          {
#line 1919 "ll_backend.proc_gen.c"
            ll_backend__proc_gen__TypeInfo_9_9 = (MR_Word) &ll_backend__proc_gen_scalar_common_1[8];
#line 1921 "ll_backend.proc_gen.c"
            {
#line 1923 "ll_backend.proc_gen.c"
              ll_backend__proc_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__proc_gen__TypeInfo_9_9, ((MR_Box) (ll_backend__proc_gen__V_4_4)), ((MR_Box) (ll_backend__proc_gen__V_6_6)));
            }
#line 321 "proc_gen.m"
          }
#line 321 "proc_gen.m"
      }
#line 321 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 321 "proc_gen.m"
  }
#line 321 "proc_gen.m"
}

#line 1402 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__add_tabling_info_struct_3_p_0_1(
#line 1402 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg)
#line 1402 "proc_gen.m"
{
#line 1402 "proc_gen.m"
  {
#line 1402 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1402 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;

#line 1402 "proc_gen.m"
    {
#line 1402 "proc_gen.m"
      ll_backend__proc_gen__succeeded = ll_backend__proc_gen__IntroducedFrom__pred__add_tabling_info_struct__1402__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))));
    }
#line 1402 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 1402 "proc_gen.m"
  }
#line 1402 "proc_gen.m"
}

#line 1388 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__add_tabling_info_struct_3_p_0(
#line 1388 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 1388 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_28,
#line 1388 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_29)
#line 1388 "proc_gen.m"
{
#line 1391 "proc_gen.m"
  {
#line 1391 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1391 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredProcId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1391 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TableStructInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1391 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcTableStructInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableStructInfo_5, (MR_Integer) 0)));
#line 1391 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TableAttributes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableStructInfo_5, (MR_Integer) 1)));
#line 1391 "proc_gen.m"
    MR_Word ll_backend__proc_gen__RttiProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 0)));
#line 1391 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__NumInputs_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 3)));
#line 1391 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__NumOutputs_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 4)));
#line 1391 "proc_gen.m"
    MR_Word ll_backend__proc_gen__InputSteps_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 5)));
#line 1391 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeOutputSteps_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 6)));
#line 1391 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ArgInfos_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 7)));
#line 1391 "proc_gen.m"
    MR_Word ll_backend__proc_gen__EvalMethod_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 8)));
#line 1391 "proc_gen.m"
    MR_Word ll_backend__proc_gen__StaticCellInfo0_18;
#line 1391 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__NumPTIs_19;
#line 1391 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PTIVectorRval_20;
#line 1391 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TVarVectorRval_21;
#line 1391 "proc_gen.m"
    MR_Word ll_backend__proc_gen__StaticCellInfo_22;
#line 1391 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__NumArgs_23;
#line 1391 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeSizeLimit_24;
#line 1391 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Statistics_25;
#line 1391 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcLabel_26;
#line 1391 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Var_27;
#line 1391 "proc_gen.m"
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_30_30;
#line 1391 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_31_31;
#line 1393 "proc_gen.m"
    MR_Word ll_backend__proc_gen___TVarSet_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 1)));
#line 1393 "proc_gen.m"
    MR_Word ll_backend__proc_gen___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 2)));
#line 1404 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_36_36;
#line 1404 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_38_38;

#line 1397 "proc_gen.m"
    {
#line 1397 "proc_gen.m"
      ll_backend__global_data__global_data_get_static_cell_info_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_28, &ll_backend__proc_gen__StaticCellInfo0_18);
    }
#line 1398 "proc_gen.m"
    {
#line 1398 "proc_gen.m"
      ll_backend__stack_layout__convert_table_arg_info_6_p_0(ll_backend__proc_gen__ArgInfos_16, &ll_backend__proc_gen__NumPTIs_19, &ll_backend__proc_gen__PTIVectorRval_20, &ll_backend__proc_gen__TVarVectorRval_21, ll_backend__proc_gen__StaticCellInfo0_18, &ll_backend__proc_gen__StaticCellInfo_22);
    }
#line 1400 "proc_gen.m"
    {
#line 1400 "proc_gen.m"
      ll_backend__global_data__global_data_set_static_cell_info_3_p_0(ll_backend__proc_gen__StaticCellInfo_22, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_28, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_30_30);
    }
#line 1401 "proc_gen.m"
    ll_backend__proc_gen__NumArgs_23 = (ll_backend__proc_gen__NumInputs_12 + ll_backend__proc_gen__NumOutputs_13);
#line 1402 "proc_gen.m"
    {
#line 1402 "proc_gen.m"
      ll_backend__proc_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1402 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_31_31, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_5[4]));
#line 1402 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_31_31, 1) = ((MR_Box) (ll_backend__proc_gen__add_tabling_info_struct_3_p_0_1));
#line 1402 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1402 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_31_31, 3) = ((MR_Box) (ll_backend__proc_gen__NumPTIs_19));
#line 1402 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_31_31, 4) = ((MR_Box) (ll_backend__proc_gen__NumArgs_23));
#line 1402 "proc_gen.m"
    }
#line 1402 "proc_gen.m"
    {
#line 1402 "proc_gen.m"
      mercury__require__expect_4_p_0(ll_backend__proc_gen__V_31_31, (MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.add_tabling_info_struct\'/3", (MR_String) "args mismatch");
    }
#line 1404 "proc_gen.m"
    ll_backend__proc_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableAttributes_8, (MR_Integer) 0)));
#line 1404 "proc_gen.m"
    ll_backend__proc_gen__MaybeSizeLimit_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableAttributes_8, (MR_Integer) 1)));
#line 1404 "proc_gen.m"
    ll_backend__proc_gen__Statistics_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableAttributes_8, (MR_Integer) 2)));
#line 1404 "proc_gen.m"
    ll_backend__proc_gen__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableAttributes_8, (MR_Integer) 3)));
#line 1406 "proc_gen.m"
    {
#line 1406 "proc_gen.m"
      ll_backend__proc_gen__ProcLabel_26 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(ll_backend__proc_gen__RttiProcLabel_9);
    }
#line 1407 "proc_gen.m"
    {
#line 1407 "proc_gen.m"
      ll_backend__proc_gen__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 1407 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 0) = ((MR_Box) (ll_backend__proc_gen__ProcLabel_26));
#line 1407 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 1) = ((MR_Box) (ll_backend__proc_gen__EvalMethod_17));
#line 1407 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 2) = ((MR_Box) (ll_backend__proc_gen__NumInputs_12));
#line 1407 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 3) = ((MR_Box) (ll_backend__proc_gen__NumOutputs_13));
#line 1407 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 4) = ((MR_Box) (ll_backend__proc_gen__InputSteps_14));
#line 1407 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 5) = ((MR_Box) (ll_backend__proc_gen__MaybeOutputSteps_15));
#line 1407 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 6) = ((MR_Box) (ll_backend__proc_gen__PTIVectorRval_20));
#line 1407 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 7) = ((MR_Box) (ll_backend__proc_gen__TVarVectorRval_21));
#line 1407 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 8) = ((MR_Box) (ll_backend__proc_gen__MaybeSizeLimit_24));
#line 1407 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 9) = ((MR_Box) (ll_backend__proc_gen__Statistics_25));
#line 1407 "proc_gen.m"
    }
#line 1410 "proc_gen.m"
    {
#line 1410 "proc_gen.m"
      ll_backend__global_data__global_data_add_new_proc_var_4_p_0(ll_backend__proc_gen__PredProcId_4, ll_backend__proc_gen__Var_27, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_30_30, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_29);
    }
#line 1391 "proc_gen.m"
  }
#line 1388 "proc_gen.m"
}

#line 1280 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__bytecode_stub_4_p_0(
#line 1280 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_5,
#line 1280 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_6,
#line 1280 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__ProcId_7,
#line 1280 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__BytecodeInstructions_8)
#line 1280 "proc_gen.m"
{
#line 1283 "proc_gen.m"
  {
#line 1283 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TypeCtorInfo_119_119;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredInfo_9;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ModuleSymName_10;
#line 1283 "proc_gen.m"
    MR_String ll_backend__proc_gen__ModuleName_11;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__EntryLabel_12;
#line 1283 "proc_gen.m"
    MR_String ll_backend__proc_gen__PredName_13;
#line 1283 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__ProcNum_14;
#line 1283 "proc_gen.m"
    MR_String ll_backend__proc_gen__ProcStr_15;
#line 1283 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__Arity_16;
#line 1283 "proc_gen.m"
    MR_String ll_backend__proc_gen__ArityStr_17;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredOrFunc_18;
#line 1283 "proc_gen.m"
    MR_String ll_backend__proc_gen__IsFuncStr_20;
#line 1283 "proc_gen.m"
    MR_String ll_backend__proc_gen__CallStruct_21;
#line 1283 "proc_gen.m"
    MR_String ll_backend__proc_gen__BytecodeCall_22;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__BytecodeInstructionsComponents_23;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_27_27;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_29_29;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_30_30;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_32_32;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_34_34;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_36_36;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_37_37;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_39_39;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_41_41;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_42_42;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_44_44;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_46_46;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_47_47;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_49_49;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_51_51;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_52_52;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_54_54;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_56_56;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_78_78;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_81_81;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_82_82;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_84_84;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_85_85;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_88_88;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_89_89;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_90_90;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_91_91;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_95_95;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_96_96;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_99_99;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_100_100;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_103_103;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_104_104;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_106_106;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_107_107;
#line 1283 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_108_108;

#line 1284 "proc_gen.m"
    {
#line 1284 "proc_gen.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__proc_gen__ModuleInfo_5, ll_backend__proc_gen__PredId_6, &ll_backend__proc_gen__PredInfo_9);
    }
#line 1285 "proc_gen.m"
    {
#line 1285 "proc_gen.m"
      ll_backend__proc_gen__ModuleSymName_10 = hlds__hlds_pred__pred_info_module_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
#line 1287 "proc_gen.m"
    {
#line 1287 "proc_gen.m"
      ll_backend__proc_gen__ModuleName_11 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ll_backend__proc_gen__ModuleSymName_10, (MR_String) "__");
    }
#line 1289 "proc_gen.m"
    {
#line 1289 "proc_gen.m"
      ll_backend__proc_gen__EntryLabel_12 = ll_backend__code_util__make_local_entry_label_4_f_0(ll_backend__proc_gen__ModuleInfo_5, ll_backend__proc_gen__PredId_6, ll_backend__proc_gen__ProcId_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 1291 "proc_gen.m"
    {
#line 1291 "proc_gen.m"
      ll_backend__proc_gen__PredName_13 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
#line 1292 "proc_gen.m"
    {
#line 1292 "proc_gen.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__proc_gen__ProcId_7, &ll_backend__proc_gen__ProcNum_14);
    }
#line 1293 "proc_gen.m"
    {
#line 1293 "proc_gen.m"
      mercury__string__int_to_string_2_p_0(ll_backend__proc_gen__ProcNum_14, &ll_backend__proc_gen__ProcStr_15);
    }
#line 1294 "proc_gen.m"
    {
#line 1294 "proc_gen.m"
      ll_backend__proc_gen__Arity_16 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
#line 1295 "proc_gen.m"
    {
#line 1295 "proc_gen.m"
      mercury__string__int_to_string_2_p_0(ll_backend__proc_gen__Arity_16, &ll_backend__proc_gen__ArityStr_17);
    }
#line 1296 "proc_gen.m"
    {
#line 1296 "proc_gen.m"
      ll_backend__proc_gen__PredOrFunc_18 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
#line 1303 "proc_gen.m"
#line 1303 "proc_gen.m"
    switch (ll_backend__proc_gen__PredOrFunc_18) {
#line 1303 "proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1303 "proc_gen.m"
      case (MR_Integer) 1:
#line 1302 "proc_gen.m"
        ll_backend__proc_gen__IsFuncStr_20 = (MR_String) "MR_TRUE";
#line 1303 "proc_gen.m"
        break;
#line 1303 "proc_gen.m"
      case (MR_Integer) 0:
#line 1305 "proc_gen.m"
        ll_backend__proc_gen__IsFuncStr_20 = (MR_String) "MR_FALSE";
#line 1303 "proc_gen.m"
        break;
#line 1303 "proc_gen.m"
    }
#line 1314 "proc_gen.m"
    {
#line 1314 "proc_gen.m"
      ll_backend__proc_gen__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1314 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_56_56, 0) = ((MR_Box) (ll_backend__proc_gen__IsFuncStr_20));
#line 1314 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[22])));
#line 1314 "proc_gen.m"
    }
#line 1314 "proc_gen.m"
    {
#line 1314 "proc_gen.m"
      ll_backend__proc_gen__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1314 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_54_54, 0) = ((MR_Box) ((MR_String) "\t\t\t"));
#line 1314 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_54_54, 1) = ((MR_Box) (ll_backend__proc_gen__V_56_56));
#line 1314 "proc_gen.m"
    }
#line 1313 "proc_gen.m"
    {
#line 1313 "proc_gen.m"
      ll_backend__proc_gen__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1313 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_52_52, 0) = ((MR_Box) ((MR_String) ",\n"));
#line 1313 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_52_52, 1) = ((MR_Box) (ll_backend__proc_gen__V_54_54));
#line 1313 "proc_gen.m"
    }
#line 1313 "proc_gen.m"
    {
#line 1313 "proc_gen.m"
      ll_backend__proc_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1313 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_51_51, 0) = ((MR_Box) (ll_backend__proc_gen__ArityStr_17));
#line 1313 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_51_51, 1) = ((MR_Box) (ll_backend__proc_gen__V_52_52));
#line 1313 "proc_gen.m"
    }
#line 1313 "proc_gen.m"
    {
#line 1313 "proc_gen.m"
      ll_backend__proc_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1313 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_49_49, 0) = ((MR_Box) ((MR_String) "\t\t\t"));
#line 1313 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_49_49, 1) = ((MR_Box) (ll_backend__proc_gen__V_51_51));
#line 1313 "proc_gen.m"
    }
#line 1312 "proc_gen.m"
    {
#line 1312 "proc_gen.m"
      ll_backend__proc_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1312 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_47_47, 0) = ((MR_Box) ((MR_String) ",\n"));
#line 1312 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_47_47, 1) = ((MR_Box) (ll_backend__proc_gen__V_49_49));
#line 1312 "proc_gen.m"
    }
#line 1312 "proc_gen.m"
    {
#line 1312 "proc_gen.m"
      ll_backend__proc_gen__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1312 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_46_46, 0) = ((MR_Box) (ll_backend__proc_gen__ProcStr_15));
#line 1312 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_46_46, 1) = ((MR_Box) (ll_backend__proc_gen__V_47_47));
#line 1312 "proc_gen.m"
    }
#line 1312 "proc_gen.m"
    {
#line 1312 "proc_gen.m"
      ll_backend__proc_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1312 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_44_44, 0) = ((MR_Box) ((MR_String) "\t\t\t"));
#line 1312 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_44_44, 1) = ((MR_Box) (ll_backend__proc_gen__V_46_46));
#line 1312 "proc_gen.m"
    }
#line 1311 "proc_gen.m"
    {
#line 1311 "proc_gen.m"
      ll_backend__proc_gen__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1311 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_42_42, 0) = ((MR_Box) ((MR_String) "\",\n"));
#line 1311 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_42_42, 1) = ((MR_Box) (ll_backend__proc_gen__V_44_44));
#line 1311 "proc_gen.m"
    }
#line 1311 "proc_gen.m"
    {
#line 1311 "proc_gen.m"
      ll_backend__proc_gen__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1311 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_41_41, 0) = ((MR_Box) (ll_backend__proc_gen__PredName_13));
#line 1311 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_41_41, 1) = ((MR_Box) (ll_backend__proc_gen__V_42_42));
#line 1311 "proc_gen.m"
    }
#line 1311 "proc_gen.m"
    {
#line 1311 "proc_gen.m"
      ll_backend__proc_gen__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1311 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_39_39, 0) = ((MR_Box) ((MR_String) "\t\t\t\""));
#line 1311 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_39_39, 1) = ((MR_Box) (ll_backend__proc_gen__V_41_41));
#line 1311 "proc_gen.m"
    }
#line 1310 "proc_gen.m"
    {
#line 1310 "proc_gen.m"
      ll_backend__proc_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1310 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_37_37, 0) = ((MR_Box) ((MR_String) "\",\n"));
#line 1310 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_37_37, 1) = ((MR_Box) (ll_backend__proc_gen__V_39_39));
#line 1310 "proc_gen.m"
    }
#line 1310 "proc_gen.m"
    {
#line 1310 "proc_gen.m"
      ll_backend__proc_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1310 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_36_36, 0) = ((MR_Box) (ll_backend__proc_gen__ModuleName_11));
#line 1310 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_36_36, 1) = ((MR_Box) (ll_backend__proc_gen__V_37_37));
#line 1310 "proc_gen.m"
    }
#line 1310 "proc_gen.m"
    {
#line 1310 "proc_gen.m"
      ll_backend__proc_gen__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1310 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_34_34, 0) = ((MR_Box) ((MR_String) "\t\t\t\""));
#line 1310 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_34_34, 1) = ((MR_Box) (ll_backend__proc_gen__V_36_36));
#line 1310 "proc_gen.m"
    }
#line 1309 "proc_gen.m"
    {
#line 1309 "proc_gen.m"
      ll_backend__proc_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1309 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_32_32, 0) = ((MR_Box) ((MR_String) "\t\t\t(MB_Word)NULL,\n"));
#line 1309 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_32_32, 1) = ((MR_Box) (ll_backend__proc_gen__V_34_34));
#line 1309 "proc_gen.m"
    }
#line 1308 "proc_gen.m"
    {
#line 1308 "proc_gen.m"
      ll_backend__proc_gen__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1308 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_30_30, 0) = ((MR_Box) ((MR_String) " = {\n"));
#line 1308 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_30_30, 1) = ((MR_Box) (ll_backend__proc_gen__V_32_32));
#line 1308 "proc_gen.m"
    }
#line 1308 "proc_gen.m"
    {
#line 1308 "proc_gen.m"
      ll_backend__proc_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1308 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_29_29, 0) = ((MR_Box) ((MR_String) "bytecode_call_info"));
#line 1308 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_29_29, 1) = ((MR_Box) (ll_backend__proc_gen__V_30_30));
#line 1308 "proc_gen.m"
    }
#line 1308 "proc_gen.m"
    {
#line 1308 "proc_gen.m"
      ll_backend__proc_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1308 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_27_27, 0) = ((MR_Box) ((MR_String) "\t\tstatic MB_Call "));
#line 1308 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_27_27, 1) = ((MR_Box) (ll_backend__proc_gen__V_29_29));
#line 1308 "proc_gen.m"
    }
#line 1307 "proc_gen.m"
    {
#line 1307 "proc_gen.m"
      mercury__string__append_list_2_p_0(ll_backend__proc_gen__V_27_27, &ll_backend__proc_gen__CallStruct_21);
    }
#line 1318 "proc_gen.m"
    {
#line 1318 "proc_gen.m"
      mercury__string__append_list_2_p_0((MR_Word) MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[39]), &ll_backend__proc_gen__BytecodeCall_22);
    }
#line 2499 "ll_backend.proc_gen.c"
    ll_backend__proc_gen__TypeCtorInfo_119_119 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 1328 "proc_gen.m"
    {
#line 1328 "proc_gen.m"
      ll_backend__proc_gen__V_82_82 = mercury__set__init_0_f_0(ll_backend__proc_gen__TypeCtorInfo_119_119);
    }
#line 1328 "proc_gen.m"
    {
#line 1328 "proc_gen.m"
      ll_backend__proc_gen__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1328 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_81_81, 0) = ((MR_Box) (ll_backend__proc_gen__V_82_82));
#line 1328 "proc_gen.m"
    }
#line 1327 "proc_gen.m"
    {
#line 1327 "proc_gen.m"
      ll_backend__proc_gen__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1327 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1327 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_78_78, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1327 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_78_78, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1327 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_78_78, 3) = ((MR_Box) (ll_backend__proc_gen__V_81_81));
#line 1327 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_78_78, 4) = ((MR_Box) ((MR_String) "\t{\n"));
#line 1327 "proc_gen.m"
    }
#line 1330 "proc_gen.m"
    {
#line 1330 "proc_gen.m"
      ll_backend__proc_gen__V_89_89 = mercury__set__init_0_f_0(ll_backend__proc_gen__TypeCtorInfo_119_119);
    }
#line 1330 "proc_gen.m"
    {
#line 1330 "proc_gen.m"
      ll_backend__proc_gen__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_88_88, 0) = ((MR_Box) (ll_backend__proc_gen__V_89_89));
#line 1330 "proc_gen.m"
    }
#line 1329 "proc_gen.m"
    {
#line 1329 "proc_gen.m"
      ll_backend__proc_gen__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1329 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1329 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_85_85, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1329 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_85_85, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1329 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_85_85, 3) = ((MR_Box) (ll_backend__proc_gen__V_88_88));
#line 1329 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_85_85, 4) = ((MR_Box) (ll_backend__proc_gen__CallStruct_21));
#line 1329 "proc_gen.m"
    }
#line 1332 "proc_gen.m"
    {
#line 1332 "proc_gen.m"
      ll_backend__proc_gen__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1332 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_91_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1332 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_91_91, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1332 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_91_91, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1332 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_91_91, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1332 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_91_91, 4) = ((MR_Box) (ll_backend__proc_gen__BytecodeCall_22));
#line 1332 "proc_gen.m"
    }
#line 1335 "proc_gen.m"
    {
#line 1335 "proc_gen.m"
      ll_backend__proc_gen__V_100_100 = mercury__set__init_0_f_0(ll_backend__proc_gen__TypeCtorInfo_119_119);
    }
#line 1335 "proc_gen.m"
    {
#line 1335 "proc_gen.m"
      ll_backend__proc_gen__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1335 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_99_99, 0) = ((MR_Box) (ll_backend__proc_gen__V_100_100));
#line 1335 "proc_gen.m"
    }
#line 1334 "proc_gen.m"
    {
#line 1334 "proc_gen.m"
      ll_backend__proc_gen__V_96_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1334 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_96_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1334 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_96_96, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1334 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_96_96, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1334 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_96_96, 3) = ((MR_Box) (ll_backend__proc_gen__V_99_99));
#line 1334 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_96_96, 4) = ((MR_Box) ((MR_String) "\t}\n"));
#line 1334 "proc_gen.m"
    }
#line 1336 "proc_gen.m"
    {
#line 1336 "proc_gen.m"
      ll_backend__proc_gen__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1336 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_95_95, 0) = ((MR_Box) (ll_backend__proc_gen__V_96_96));
#line 1336 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1336 "proc_gen.m"
    }
#line 1333 "proc_gen.m"
    {
#line 1333 "proc_gen.m"
      ll_backend__proc_gen__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1333 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_90_90, 0) = ((MR_Box) (ll_backend__proc_gen__V_91_91));
#line 1333 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_90_90, 1) = ((MR_Box) (ll_backend__proc_gen__V_95_95));
#line 1333 "proc_gen.m"
    }
#line 1331 "proc_gen.m"
    {
#line 1331 "proc_gen.m"
      ll_backend__proc_gen__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1331 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_84_84, 0) = ((MR_Box) (ll_backend__proc_gen__V_85_85));
#line 1331 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_84_84, 1) = ((MR_Box) (ll_backend__proc_gen__V_90_90));
#line 1331 "proc_gen.m"
    }
#line 1328 "proc_gen.m"
    {
#line 1328 "proc_gen.m"
      ll_backend__proc_gen__BytecodeInstructionsComponents_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1328 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__BytecodeInstructionsComponents_23, 0) = ((MR_Box) (ll_backend__proc_gen__V_78_78));
#line 1328 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__BytecodeInstructionsComponents_23, 1) = ((MR_Box) (ll_backend__proc_gen__V_84_84));
#line 1328 "proc_gen.m"
    }
#line 1340 "proc_gen.m"
    {
#line 1340 "proc_gen.m"
      ll_backend__proc_gen__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1340 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1340 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_104_104, 1) = ((MR_Box) (ll_backend__proc_gen__EntryLabel_12));
#line 1340 "proc_gen.m"
    }
#line 1340 "proc_gen.m"
    {
#line 1340 "proc_gen.m"
      ll_backend__proc_gen__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1340 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_103_103, 0) = ((MR_Box) (ll_backend__proc_gen__V_104_104));
#line 1340 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_103_103, 1) = ((MR_Box) ((MR_String) "Procedure entry point"));
#line 1340 "proc_gen.m"
    }
#line 1341 "proc_gen.m"
    {
#line 1341 "proc_gen.m"
      ll_backend__proc_gen__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 1341 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 1341 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1341 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 2) = ((MR_Box) (ll_backend__proc_gen__BytecodeInstructionsComponents_23));
#line 1341 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1341 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1341 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1341 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1341 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1341 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1341 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 9) = ((MR_Box) ((MR_Integer) 0));
#line 1341 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 10) = ((MR_Box) ((MR_Integer) 1));
#line 1341 "proc_gen.m"
    }
#line 1341 "proc_gen.m"
    {
#line 1341 "proc_gen.m"
      ll_backend__proc_gen__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1341 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_107_107, 0) = ((MR_Box) (ll_backend__proc_gen__V_108_108));
#line 1341 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_107_107, 1) = ((MR_Box) ((MR_String) "Entry stub"));
#line 1341 "proc_gen.m"
    }
#line 1343 "proc_gen.m"
    {
#line 1343 "proc_gen.m"
      ll_backend__proc_gen__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_106_106, 0) = ((MR_Box) (ll_backend__proc_gen__V_107_107));
#line 1343 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1343 "proc_gen.m"
    }
#line 1340 "proc_gen.m"
    {
#line 1340 "proc_gen.m"
      MR_Word base;
#line 1340 "proc_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1340 "proc_gen.m"
      *ll_backend__proc_gen__BytecodeInstructions_8 = base;
#line 1340 "proc_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__proc_gen__V_103_103));
#line 1340 "proc_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__proc_gen__V_106_106));
#line 1340 "proc_gen.m"
    }
#line 1283 "proc_gen.m"
  }
#line 1280 "proc_gen.m"
}

#line 1250 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__add_saved_succip_3_p_0(
#line 1250 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 1250 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__HeadVar__2_2,
#line 1250 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__3_3)
#line 1250 "proc_gen.m"
{
#line 1253 "proc_gen.m"
  {
#line 1253 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;

#line 1253 "proc_gen.m"
    if ((ll_backend__proc_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1253 "proc_gen.m"
      *ll_backend__proc_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1253 "proc_gen.m"
    else
#line 1254 "proc_gen.m"
      {
#line 1254 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Instr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1254 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Instrs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1254 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Instr_8;
#line 1254 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Instrs_9;
#line 1254 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Uinstr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Instr0_5, (MR_Integer) 0)));
#line 1254 "proc_gen.m"
        MR_String ll_backend__proc_gen__Comment_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Instr0_5, (MR_Integer) 1)));
#line 1256 "proc_gen.m"
        MR_Word ll_backend__proc_gen__LiveVals0_12;
#line 1258 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_24_24;
#line 1258 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_25_25;
#line 1258 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_26_26;
#line 1258 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_14_14;
#line 1258 "proc_gen.m"
        MR_String ll_backend__proc_gen__V_13_13;

#line 1258 "proc_gen.m"
        ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__Instrs0_6)) == (MR_mktag((MR_Integer) 1)));
#line 1258 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 1258 "proc_gen.m"
          {
#line 1258 "proc_gen.m"
            ll_backend__proc_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Instrs0_6, (MR_Integer) 0)));
#line 1258 "proc_gen.m"
            ll_backend__proc_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Instrs0_6, (MR_Integer) 1)));
#line 1258 "proc_gen.m"
            ll_backend__proc_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_24_24, (MR_Integer) 0)));
#line 1258 "proc_gen.m"
            ll_backend__proc_gen__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_24_24, (MR_Integer) 1)));
#line 1258 "proc_gen.m"
            ll_backend__proc_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__proc_gen__V_25_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_25_25, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1258 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 1258 "proc_gen.m"
              {
#line 1258 "proc_gen.m"
                ll_backend__proc_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_25_25, (MR_Integer) 1)));
#line 1258 "proc_gen.m"
                ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1258 "proc_gen.m"
              }
#line 1258 "proc_gen.m"
          }
#line 1258 "proc_gen.m"
        ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
#line 1257 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 1257 "proc_gen.m"
          {
#line 1257 "proc_gen.m"
            ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__Uinstr0_10)) == (MR_mktag((MR_Integer) 2)));
#line 1257 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 1257 "proc_gen.m"
              ll_backend__proc_gen__LiveVals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 0)));
#line 1257 "proc_gen.m"
          }
#line 1256 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 1262 "proc_gen.m"
          {
#line 1262 "proc_gen.m"
            MR_Word ll_backend__proc_gen__LiveVals1_15;
#line 1262 "proc_gen.m"
            MR_Word ll_backend__proc_gen__Uinstr_16;
#line 1262 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_27_27;

#line 1262 "proc_gen.m"
            {
#line 1262 "proc_gen.m"
              ll_backend__proc_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1262 "proc_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1262 "proc_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_27_27, 1) = ((MR_Box) (ll_backend__proc_gen__HeadVar__2_2));
#line 1262 "proc_gen.m"
            }
#line 1262 "proc_gen.m"
            {
#line 1262 "proc_gen.m"
              mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__proc_gen__V_27_27)), ll_backend__proc_gen__LiveVals0_12, &ll_backend__proc_gen__LiveVals1_15);
            }
#line 1263 "proc_gen.m"
            {
#line 1263 "proc_gen.m"
              ll_backend__proc_gen__Uinstr_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1263 "proc_gen.m"
              MR_hl_field(MR_mktag(2), ll_backend__proc_gen__Uinstr_16, 0) = ((MR_Box) (ll_backend__proc_gen__LiveVals1_15));
#line 1263 "proc_gen.m"
            }
#line 1264 "proc_gen.m"
            {
#line 1264 "proc_gen.m"
              ll_backend__proc_gen__Instr_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1264 "proc_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Instr_8, 0) = ((MR_Box) (ll_backend__proc_gen__Uinstr_16));
#line 1264 "proc_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Instr_8, 1) = ((MR_Box) (ll_backend__proc_gen__Comment_11));
#line 1264 "proc_gen.m"
            }
#line 1262 "proc_gen.m"
          }
#line 1256 "proc_gen.m"
        else
#line 1265 "proc_gen.m"
          {
#line 1265 "proc_gen.m"
            MR_Word ll_backend__proc_gen__Target_17;
#line 1265 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ReturnLabel_18;
#line 1265 "proc_gen.m"
            MR_Word ll_backend__proc_gen__Context_19;
#line 1265 "proc_gen.m"
            MR_Word ll_backend__proc_gen__GP_20;
#line 1265 "proc_gen.m"
            MR_Word ll_backend__proc_gen__CM_21;
#line 1265 "proc_gen.m"
            MR_Word ll_backend__proc_gen__LiveVals0_33;

#line 1266 "proc_gen.m"
            ll_backend__proc_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__proc_gen__Uinstr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1266 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 1266 "proc_gen.m"
              {
#line 1266 "proc_gen.m"
                ll_backend__proc_gen__Target_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 1)));
#line 1266 "proc_gen.m"
                ll_backend__proc_gen__ReturnLabel_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 2)));
#line 1266 "proc_gen.m"
                ll_backend__proc_gen__LiveVals0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 3)));
#line 1266 "proc_gen.m"
                ll_backend__proc_gen__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 4)));
#line 1266 "proc_gen.m"
                ll_backend__proc_gen__GP_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 5)));
#line 1266 "proc_gen.m"
                ll_backend__proc_gen__CM_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 6)));
#line 1268 "proc_gen.m"
                {
#line 1268 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__Empty_22;
#line 1268 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__LiveVals_23;
#line 1268 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_28_28;
#line 1268 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_29_29;
#line 1268 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_30_30;
#line 1268 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__Uinstr_32;

#line 1268 "proc_gen.m"
                  {
#line 1268 "proc_gen.m"
                    mercury__map__init_1_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[4], (MR_Word) &ll_backend__proc_gen_scalar_common_1[5], &ll_backend__proc_gen__Empty_22);
                  }
#line 1269 "proc_gen.m"
                  {
#line 1269 "proc_gen.m"
                    ll_backend__proc_gen__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1269 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1269 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_30_30, 1) = ((MR_Box) (ll_backend__proc_gen__HeadVar__2_2));
#line 1269 "proc_gen.m"
                  }
#line 1269 "proc_gen.m"
                  {
#line 1269 "proc_gen.m"
                    ll_backend__proc_gen__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1269 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_29_29, 0) = ((MR_Box) (ll_backend__proc_gen__V_30_30));
#line 1269 "proc_gen.m"
                  }
#line 1269 "proc_gen.m"
                  {
#line 1269 "proc_gen.m"
                    ll_backend__proc_gen__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1269 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_28_28, 0) = ((MR_Box) (ll_backend__proc_gen__V_29_29));
#line 1269 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1269 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_28_28, 2) = ((MR_Box) (ll_backend__proc_gen__Empty_22));
#line 1269 "proc_gen.m"
                  }
#line 1270 "proc_gen.m"
                  {
#line 1270 "proc_gen.m"
                    ll_backend__proc_gen__LiveVals_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1270 "proc_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__LiveVals_23, 0) = ((MR_Box) (ll_backend__proc_gen__V_28_28));
#line 1270 "proc_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__LiveVals_23, 1) = ((MR_Box) (ll_backend__proc_gen__LiveVals0_33));
#line 1270 "proc_gen.m"
                  }
#line 1271 "proc_gen.m"
                  {
#line 1271 "proc_gen.m"
                    ll_backend__proc_gen__Uinstr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1271 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1271 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 1) = ((MR_Box) (ll_backend__proc_gen__Target_17));
#line 1271 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 2) = ((MR_Box) (ll_backend__proc_gen__ReturnLabel_18));
#line 1271 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 3) = ((MR_Box) (ll_backend__proc_gen__LiveVals_23));
#line 1271 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 4) = ((MR_Box) (ll_backend__proc_gen__Context_19));
#line 1271 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 5) = ((MR_Box) (ll_backend__proc_gen__GP_20));
#line 1271 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 6) = ((MR_Box) (ll_backend__proc_gen__CM_21));
#line 1271 "proc_gen.m"
                  }
#line 1272 "proc_gen.m"
                  {
#line 1272 "proc_gen.m"
                    ll_backend__proc_gen__Instr_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1272 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Instr_8, 0) = ((MR_Box) (ll_backend__proc_gen__Uinstr_32));
#line 1272 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Instr_8, 1) = ((MR_Box) (ll_backend__proc_gen__Comment_11));
#line 1272 "proc_gen.m"
                  }
#line 1268 "proc_gen.m"
                }
#line 1266 "proc_gen.m"
              }
#line 1266 "proc_gen.m"
            else
#line 1274 "proc_gen.m"
              ll_backend__proc_gen__Instr_8 = ll_backend__proc_gen__Instr0_5;
#line 1265 "proc_gen.m"
          }
#line 1276 "proc_gen.m"
        {
#line 1276 "proc_gen.m"
          ll_backend__proc_gen__add_saved_succip_3_p_0(ll_backend__proc_gen__Instrs0_6, ll_backend__proc_gen__HeadVar__2_2, &ll_backend__proc_gen__Instrs_9);
        }
#line 1254 "proc_gen.m"
        {
#line 1254 "proc_gen.m"
          MR_Word base;
#line 1254 "proc_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1254 "proc_gen.m"
          *ll_backend__proc_gen__HeadVar__3_3 = base;
#line 1254 "proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__proc_gen__Instr_8));
#line 1254 "proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__proc_gen__Instrs_9));
#line 1254 "proc_gen.m"
        }
#line 1254 "proc_gen.m"
      }
#line 1253 "proc_gen.m"
  }
#line 1250 "proc_gen.m"
}

#line 1239 "proc_gen.m"
static MR_Word MR_CALL 
ll_backend__proc_gen__project_layout_locn_lval_1_f_0(
#line 1239 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1)
#line 1239 "proc_gen.m"
{
#line 1241 "proc_gen.m"
  {
#line 1241 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1241 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Lval_2;

#line 1241 "proc_gen.m"
    if (((MR_tag((MR_Word) ll_backend__proc_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1241 "proc_gen.m"
      ll_backend__proc_gen__Lval_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1241 "proc_gen.m"
    else
#line 1242 "proc_gen.m"
      {
#line 1242 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__V_5_5;

#line 1242 "proc_gen.m"
        ll_backend__proc_gen__Lval_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1242 "proc_gen.m"
        ll_backend__proc_gen__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1242 "proc_gen.m"
      }
#line 1241 "proc_gen.m"
    return ll_backend__proc_gen__Lval_2;
#line 1241 "proc_gen.m"
  }
#line 1239 "proc_gen.m"
}

#line 1232 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__add_type_info_lvals_4_p_0(
#line 1232 "proc_gen.m"
  MR_Word ll_backend__proc_gen___TVar_5,
#line 1232 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TypeInfoLocnSets_6,
#line 1232 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_0_9,
#line 1232 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_10)
#line 1232 "proc_gen.m"
{
#line 1235 "proc_gen.m"
  {
#line 1235 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;

#line 1235 "proc_gen.m"
    {
#line 1235 "proc_gen.m"
      ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_105_110_102_111_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0(ll_backend__proc_gen__TypeInfoLocnSets_6, ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_0_9, ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_10);
    }
#line 1235 "proc_gen.m"
  }
#line 1232 "proc_gen.m"
}

#line 1187 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0_3(
#line 1187 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg)
#line 1187 "proc_gen.m"
{
#line 1187 "proc_gen.m"
  {
#line 1187 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1187 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;

#line 1187 "proc_gen.m"
    {
#line 1187 "proc_gen.m"
      ll_backend__proc_gen__succeeded = ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1187__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))));
    }
#line 1187 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 1187 "proc_gen.m"
  }
#line 1187 "proc_gen.m"
}

#line 1178 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0_2(
#line 1178 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg)
#line 1178 "proc_gen.m"
{
#line 1178 "proc_gen.m"
  {
#line 1178 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1178 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;

#line 1178 "proc_gen.m"
    {
#line 1178 "proc_gen.m"
      ll_backend__proc_gen__succeeded = ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1178__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))));
    }
#line 1178 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 1178 "proc_gen.m"
  }
#line 1178 "proc_gen.m"
}

#line 1162 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0_1(
#line 1162 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 1162 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 1162 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 1162 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_3,
#line 1162 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_4)
#line 1162 "proc_gen.m"
{
#line 1162 "proc_gen.m"
  {
#line 1162 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;
#line 1162 "proc_gen.m"
    MR_Word ll_backend__proc_gen__conv0_STATE_VARIABLE_LiveLvals_10;

#line 1162 "proc_gen.m"
    {
#line 1162 "proc_gen.m"
      ll_backend__proc_gen__add_type_info_lvals_4_p_0(((MR_Word) ll_backend__proc_gen__wrapper_arg_1), ((MR_Word) ll_backend__proc_gen__wrapper_arg_2), ((MR_Word) ll_backend__proc_gen__wrapper_arg_3), &ll_backend__proc_gen__conv0_STATE_VARIABLE_LiveLvals_10);
    }
#line 1162 "proc_gen.m"
    *ll_backend__proc_gen__wrapper_arg_4 = ((MR_Box) (ll_backend__proc_gen__conv0_STATE_VARIABLE_LiveLvals_10));
#line 1162 "proc_gen.m"
  }
#line 1162 "proc_gen.m"
}

#line 1056 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0(
#line 1056 "proc_gen.m"
  MR_Word ll_backend__proc_gen__CodeModel_10,
#line 1056 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcFrameSlots_11,
#line 1056 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TraceSlotInfo_12,
#line 1056 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcContext_13,
#line 1056 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__RestoreDeallocCode_14,
#line 1056 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__ExitCode_15,
#line 1056 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_0_64,
#line 1056 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CI_65,
#line 1056 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_0_66)
#line 1056 "proc_gen.m"
{
#line 1061 "proc_gen.m"
  {
#line 1061 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TypeCtorInfo_230_230 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__StartComment_18;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__EndComment_19;
#line 1061 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__TotalSlots_20;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeSuccipSlot_21;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__InstMap_22;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ArgModes_23;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__HeadVars_24;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Args_25;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__OutLvals_26;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__FlushCode_27;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__RestoreSuccipCode_29;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__DeallocCode_30;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PruneTraceTicketCode_38;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PruneTraceTicketCodeCopy_39;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__RestoreDeallocCodeCopy_40;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeTraceInfo_41;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TraceExitCode_48;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__LiveLvals_49;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcInfo_50;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeSpecialReturn_51;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__AllSuccessCode_53;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_75_75;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_90_90;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_125_125;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_126_126;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_216_216;
#line 1061 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_217_217;
#line 1100 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_220_220;
#line 1101 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_85_85;
#line 1101 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_221_221;
#line 1101 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_222_222;
#line 1101 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_223_223;
#line 1101 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_224_224;
#line 1101 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__V_31_31;

#line 1062 "proc_gen.m"
    {
#line 1062 "proc_gen.m"
      ll_backend__proc_gen__StartComment_18 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[32])));
    }
#line 1065 "proc_gen.m"
    {
#line 1065 "proc_gen.m"
      ll_backend__proc_gen__EndComment_19 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[33])));
    }
#line 1068 "proc_gen.m"
    ll_backend__proc_gen__TotalSlots_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcFrameSlots_11, (MR_Integer) 0)));
#line 1068 "proc_gen.m"
    ll_backend__proc_gen__MaybeSuccipSlot_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcFrameSlots_11, (MR_Integer) 1)));
#line 1069 "proc_gen.m"
    {
#line 1069 "proc_gen.m"
      ll_backend__code_loc_dep__get_instmap_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CLD_0_66, &ll_backend__proc_gen__InstMap_22);
    }
#line 1070 "proc_gen.m"
    {
#line 1070 "proc_gen.m"
      ll_backend__proc_gen__ArgModes_23 = ll_backend__code_info__get_arginfo_1_f_0(ll_backend__proc_gen__STATE_VARIABLE_CI_0_64);
    }
#line 1071 "proc_gen.m"
    {
#line 1071 "proc_gen.m"
      ll_backend__proc_gen__HeadVars_24 = ll_backend__code_info__get_headvars_1_f_0(ll_backend__proc_gen__STATE_VARIABLE_CI_0_64);
    }
#line 1072 "proc_gen.m"
    {
#line 1072 "proc_gen.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, ll_backend__proc_gen__HeadVars_24, ll_backend__proc_gen__ArgModes_23, &ll_backend__proc_gen__Args_25);
    }
#line 1073 "proc_gen.m"
    {
#line 1073 "proc_gen.m"
      ll_backend__proc_gen__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(ll_backend__proc_gen__InstMap_22);
    }
#line 1073 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 1074 "proc_gen.m"
      {
#line 1074 "proc_gen.m"
        {
#line 1074 "proc_gen.m"
          ll_backend__proc_gen__OutLvals_26 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        }
#line 1075 "proc_gen.m"
        {
#line 1075 "proc_gen.m"
          ll_backend__proc_gen__FlushCode_27 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230);
        }
#line 1074 "proc_gen.m"
        ll_backend__proc_gen__STATE_VARIABLE_CLD_75_75 = ll_backend__proc_gen__STATE_VARIABLE_CLD_0_66;
#line 1074 "proc_gen.m"
      }
#line 1073 "proc_gen.m"
    else
#line 1077 "proc_gen.m"
      {
#line 1077 "proc_gen.m"
        ll_backend__code_loc_dep__setup_return_6_p_0(ll_backend__proc_gen__Args_25, &ll_backend__proc_gen__OutLvals_26, &ll_backend__proc_gen__FlushCode_27, ll_backend__proc_gen__STATE_VARIABLE_CI_0_64, ll_backend__proc_gen__STATE_VARIABLE_CLD_0_66, &ll_backend__proc_gen__STATE_VARIABLE_CLD_75_75);
      }
#line 1085 "proc_gen.m"
    if ((ll_backend__proc_gen__MaybeSuccipSlot_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1087 "proc_gen.m"
      {
#line 1087 "proc_gen.m"
        ll_backend__proc_gen__RestoreSuccipCode_29 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230);
      }
#line 1085 "proc_gen.m"
    else
#line 1080 "proc_gen.m"
      {
#line 1080 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__SuccipSlot_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeSuccipSlot_21, (MR_Integer) 0)));
#line 1080 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_76_76;
#line 1080 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_77_77;
#line 1080 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_79_79;
#line 1080 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_80_80;

#line 1082 "proc_gen.m"
        {
#line 1082 "proc_gen.m"
          ll_backend__proc_gen__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1082 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_80_80, 1) = ((MR_Box) (ll_backend__proc_gen__SuccipSlot_28));
#line 1082 "proc_gen.m"
        }
#line 1082 "proc_gen.m"
        {
#line 1082 "proc_gen.m"
          ll_backend__proc_gen__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1082 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_79_79, 0) = ((MR_Box) (ll_backend__proc_gen__V_80_80));
#line 1082 "proc_gen.m"
        }
#line 1082 "proc_gen.m"
        {
#line 1082 "proc_gen.m"
          ll_backend__proc_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1082 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1082 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_77_77, 2) = ((MR_Box) (ll_backend__proc_gen__V_79_79));
#line 1082 "proc_gen.m"
        }
#line 1082 "proc_gen.m"
        {
#line 1082 "proc_gen.m"
          ll_backend__proc_gen__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1082 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_76_76, 0) = ((MR_Box) (ll_backend__proc_gen__V_77_77));
#line 1082 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_76_76, 1) = ((MR_Box) ((MR_String) "restore the success ip"));
#line 1082 "proc_gen.m"
        }
#line 1081 "proc_gen.m"
        {
#line 1081 "proc_gen.m"
          ll_backend__proc_gen__RestoreSuccipCode_29 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ((MR_Box) (ll_backend__proc_gen__V_76_76)));
        }
#line 1080 "proc_gen.m"
      }
#line 1090 "proc_gen.m"
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__TotalSlots_20 == (MR_Integer) 0);
#line 1091 "proc_gen.m"
    if (!(ll_backend__proc_gen__succeeded))
#line 1091 "proc_gen.m"
      ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CodeModel_10 == (MR_Integer) 2);
#line 1089 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 1094 "proc_gen.m"
      {
#line 1094 "proc_gen.m"
        ll_backend__proc_gen__DeallocCode_30 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230);
      }
#line 1089 "proc_gen.m"
    else
#line 1096 "proc_gen.m"
      {
#line 1096 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_82_82;
#line 1096 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_83_83;

#line 1097 "proc_gen.m"
        {
#line 1097 "proc_gen.m"
          ll_backend__proc_gen__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 25));
#line 1097 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_83_83, 1) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_20));
#line 1097 "proc_gen.m"
        }
#line 1097 "proc_gen.m"
        {
#line 1097 "proc_gen.m"
          ll_backend__proc_gen__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1097 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_82_82, 0) = ((MR_Box) (ll_backend__proc_gen__V_83_83));
#line 1097 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_82_82, 1) = ((MR_Box) ((MR_String) "Deallocate stack frame"));
#line 1097 "proc_gen.m"
        }
#line 1096 "proc_gen.m"
        {
#line 1096 "proc_gen.m"
          ll_backend__proc_gen__DeallocCode_30 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ((MR_Box) (ll_backend__proc_gen__V_82_82)));
        }
#line 1096 "proc_gen.m"
      }
#line 1102 "proc_gen.m"
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CodeModel_10 == (MR_Integer) 2);
#line 1102 "proc_gen.m"
    ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
#line 1101 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 1101 "proc_gen.m"
      {
#line 1101 "proc_gen.m"
        ll_backend__proc_gen__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_12, (MR_Integer) 0)));
#line 1101 "proc_gen.m"
        ll_backend__proc_gen__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_12, (MR_Integer) 1)));
#line 1101 "proc_gen.m"
        ll_backend__proc_gen__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_12, (MR_Integer) 2)));
#line 1101 "proc_gen.m"
        ll_backend__proc_gen__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_12, (MR_Integer) 3)));
#line 1101 "proc_gen.m"
        ll_backend__proc_gen__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_12, (MR_Integer) 4)));
#line 1101 "proc_gen.m"
        ll_backend__proc_gen__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_12, (MR_Integer) 5)));
#line 1101 "proc_gen.m"
        ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__V_85_85)) == (MR_mktag((MR_Integer) 1)));
#line 1101 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 1101 "proc_gen.m"
          ll_backend__proc_gen__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_85_85, (MR_Integer) 0)));
#line 1101 "proc_gen.m"
      }
#line 1100 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 1134 "proc_gen.m"
      if ((ll_backend__proc_gen__V_220_220 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1135 "proc_gen.m"
        {
#line 1136 "proc_gen.m"
          {
#line 1136 "proc_gen.m"
            ll_backend__proc_gen__PruneTraceTicketCode_38 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[34])));
          }
#line 1139 "proc_gen.m"
          ll_backend__proc_gen__PruneTraceTicketCodeCopy_39 = ll_backend__proc_gen__PruneTraceTicketCode_38;
#line 1135 "proc_gen.m"
          ll_backend__proc_gen__STATE_VARIABLE_CI_90_90 = ll_backend__proc_gen__STATE_VARIABLE_CI_0_64;
#line 1135 "proc_gen.m"
        }
#line 1134 "proc_gen.m"
      else
#line 1106 "proc_gen.m"
        {
#line 1106 "proc_gen.m"
          MR_Integer ll_backend__proc_gen__FromFullSlot_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_220_220, (MR_Integer) 0)));
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__StackId_34;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__FromFullSlotLval_35;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__SkipLabel_36;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__SkipLabelCopy_37;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_89_89;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_91_91;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_92_92;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_93_93;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_94_94;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_96_96;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_97_97;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_99_99;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_100_100;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_103_103;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_104_104;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_105_105;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_108_108;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_109_109;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_110_110;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_114_114;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_116_116;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_120_120;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_121_121;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_122_122;

#line 1115 "proc_gen.m"
          {
#line 1115 "proc_gen.m"
            ll_backend__proc_gen__StackId_34 = ll_backend__llds__code_model_to_main_stack_1_f_0(ll_backend__proc_gen__CodeModel_10);
          }
#line 1116 "proc_gen.m"
          {
#line 1116 "proc_gen.m"
            ll_backend__proc_gen__FromFullSlotLval_35 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__proc_gen__StackId_34, ll_backend__proc_gen__FromFullSlot_33);
          }
#line 1118 "proc_gen.m"
          {
#line 1118 "proc_gen.m"
            ll_backend__code_info__get_next_label_3_p_0(&ll_backend__proc_gen__SkipLabel_36, ll_backend__proc_gen__STATE_VARIABLE_CI_0_64, &ll_backend__proc_gen__STATE_VARIABLE_CI_89_89);
          }
#line 1119 "proc_gen.m"
          {
#line 1119 "proc_gen.m"
            ll_backend__code_info__get_next_label_3_p_0(&ll_backend__proc_gen__SkipLabelCopy_37, ll_backend__proc_gen__STATE_VARIABLE_CI_89_89, &ll_backend__proc_gen__STATE_VARIABLE_CI_90_90);
          }
#line 1122 "proc_gen.m"
          {
#line 1122 "proc_gen.m"
            ll_backend__proc_gen__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1122 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_96_96, 0) = ((MR_Box) (ll_backend__proc_gen__FromFullSlotLval_35));
#line 1122 "proc_gen.m"
          }
#line 1122 "proc_gen.m"
          {
#line 1122 "proc_gen.m"
            ll_backend__proc_gen__V_94_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_94_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1122 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_94_94, 1) = ((MR_Box) ((MR_Integer) 7));
#line 1122 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_94_94, 2) = ((MR_Box) (ll_backend__proc_gen__V_96_96));
#line 1122 "proc_gen.m"
          }
#line 1123 "proc_gen.m"
          {
#line 1123 "proc_gen.m"
            ll_backend__proc_gen__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1123 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_97_97, 0) = ((MR_Box) (ll_backend__proc_gen__SkipLabel_36));
#line 1123 "proc_gen.m"
          }
#line 1122 "proc_gen.m"
          {
#line 1122 "proc_gen.m"
            ll_backend__proc_gen__V_93_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_93_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1122 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_93_93, 1) = ((MR_Box) (ll_backend__proc_gen__V_94_94));
#line 1122 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_93_93, 2) = ((MR_Box) (ll_backend__proc_gen__V_97_97));
#line 1122 "proc_gen.m"
          }
#line 1121 "proc_gen.m"
          {
#line 1121 "proc_gen.m"
            ll_backend__proc_gen__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1121 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_92_92, 0) = ((MR_Box) (ll_backend__proc_gen__V_93_93));
#line 1121 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_92_92, 1) = ((MR_Box) ((MR_String) ""));
#line 1121 "proc_gen.m"
          }
#line 1124 "proc_gen.m"
          ll_backend__proc_gen__V_100_100 = (MR_Word) &ll_backend__proc_gen_scalar_common_1[34];
#line 1125 "proc_gen.m"
          {
#line 1125 "proc_gen.m"
            ll_backend__proc_gen__V_105_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1125 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_105_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1125 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_105_105, 1) = ((MR_Box) (ll_backend__proc_gen__SkipLabel_36));
#line 1125 "proc_gen.m"
          }
#line 1125 "proc_gen.m"
          {
#line 1125 "proc_gen.m"
            ll_backend__proc_gen__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1125 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_104_104, 0) = ((MR_Box) (ll_backend__proc_gen__V_105_105));
#line 1125 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_104_104, 1) = ((MR_Box) ((MR_String) ""));
#line 1125 "proc_gen.m"
          }
#line 1126 "proc_gen.m"
          {
#line 1126 "proc_gen.m"
            ll_backend__proc_gen__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1126 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_103_103, 0) = ((MR_Box) (ll_backend__proc_gen__V_104_104));
#line 1126 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1126 "proc_gen.m"
          }
#line 1124 "proc_gen.m"
          {
#line 1124 "proc_gen.m"
            ll_backend__proc_gen__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_99_99, 0) = ((MR_Box) (ll_backend__proc_gen__V_100_100));
#line 1124 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_99_99, 1) = ((MR_Box) (ll_backend__proc_gen__V_103_103));
#line 1124 "proc_gen.m"
          }
#line 1123 "proc_gen.m"
          {
#line 1123 "proc_gen.m"
            ll_backend__proc_gen__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1123 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_91_91, 0) = ((MR_Box) (ll_backend__proc_gen__V_92_92));
#line 1123 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_91_91, 1) = ((MR_Box) (ll_backend__proc_gen__V_99_99));
#line 1123 "proc_gen.m"
          }
#line 1120 "proc_gen.m"
          {
#line 1120 "proc_gen.m"
            ll_backend__proc_gen__PruneTraceTicketCode_38 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__V_91_91);
          }
#line 1130 "proc_gen.m"
          {
#line 1130 "proc_gen.m"
            ll_backend__proc_gen__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_114_114, 0) = ((MR_Box) (ll_backend__proc_gen__SkipLabelCopy_37));
#line 1130 "proc_gen.m"
          }
#line 1129 "proc_gen.m"
          {
#line 1129 "proc_gen.m"
            ll_backend__proc_gen__V_110_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1129 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_110_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1129 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_110_110, 1) = ((MR_Box) (ll_backend__proc_gen__V_94_94));
#line 1129 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_110_110, 2) = ((MR_Box) (ll_backend__proc_gen__V_114_114));
#line 1129 "proc_gen.m"
          }
#line 1128 "proc_gen.m"
          {
#line 1128 "proc_gen.m"
            ll_backend__proc_gen__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1128 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_109_109, 0) = ((MR_Box) (ll_backend__proc_gen__V_110_110));
#line 1128 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_109_109, 1) = ((MR_Box) ((MR_String) ""));
#line 1128 "proc_gen.m"
          }
#line 1132 "proc_gen.m"
          {
#line 1132 "proc_gen.m"
            ll_backend__proc_gen__V_122_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1132 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_122_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1132 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_122_122, 1) = ((MR_Box) (ll_backend__proc_gen__SkipLabelCopy_37));
#line 1132 "proc_gen.m"
          }
#line 1132 "proc_gen.m"
          {
#line 1132 "proc_gen.m"
            ll_backend__proc_gen__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1132 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_121_121, 0) = ((MR_Box) (ll_backend__proc_gen__V_122_122));
#line 1132 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_121_121, 1) = ((MR_Box) ((MR_String) ""));
#line 1132 "proc_gen.m"
          }
#line 1133 "proc_gen.m"
          {
#line 1133 "proc_gen.m"
            ll_backend__proc_gen__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1133 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_120_120, 0) = ((MR_Box) (ll_backend__proc_gen__V_121_121));
#line 1133 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1133 "proc_gen.m"
          }
#line 1131 "proc_gen.m"
          {
#line 1131 "proc_gen.m"
            ll_backend__proc_gen__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_116_116, 0) = ((MR_Box) (ll_backend__proc_gen__V_100_100));
#line 1131 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_116_116, 1) = ((MR_Box) (ll_backend__proc_gen__V_120_120));
#line 1131 "proc_gen.m"
          }
#line 1130 "proc_gen.m"
          {
#line 1130 "proc_gen.m"
            ll_backend__proc_gen__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_108_108, 0) = ((MR_Box) (ll_backend__proc_gen__V_109_109));
#line 1130 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_108_108, 1) = ((MR_Box) (ll_backend__proc_gen__V_116_116));
#line 1130 "proc_gen.m"
          }
#line 1127 "proc_gen.m"
          {
#line 1127 "proc_gen.m"
            ll_backend__proc_gen__PruneTraceTicketCodeCopy_39 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__V_108_108);
          }
#line 1106 "proc_gen.m"
        }
#line 1100 "proc_gen.m"
    else
#line 1142 "proc_gen.m"
      {
#line 1142 "proc_gen.m"
        {
#line 1142 "proc_gen.m"
          ll_backend__proc_gen__PruneTraceTicketCode_38 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230);
        }
#line 1143 "proc_gen.m"
        {
#line 1143 "proc_gen.m"
          ll_backend__proc_gen__PruneTraceTicketCodeCopy_39 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230);
        }
#line 1142 "proc_gen.m"
        ll_backend__proc_gen__STATE_VARIABLE_CI_90_90 = ll_backend__proc_gen__STATE_VARIABLE_CI_0_64;
#line 1142 "proc_gen.m"
      }
#line 1147 "proc_gen.m"
    {
#line 1147 "proc_gen.m"
      ll_backend__proc_gen__V_125_125 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__PruneTraceTicketCode_38, ll_backend__proc_gen__DeallocCode_30);
    }
#line 1146 "proc_gen.m"
    {
#line 1146 "proc_gen.m"
      *ll_backend__proc_gen__RestoreDeallocCode_14 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__RestoreSuccipCode_29, ll_backend__proc_gen__V_125_125);
    }
#line 1149 "proc_gen.m"
    {
#line 1149 "proc_gen.m"
      ll_backend__proc_gen__V_126_126 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__PruneTraceTicketCodeCopy_39, ll_backend__proc_gen__DeallocCode_30);
    }
#line 1148 "proc_gen.m"
    {
#line 1148 "proc_gen.m"
      ll_backend__proc_gen__RestoreDeallocCodeCopy_40 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__RestoreSuccipCode_29, ll_backend__proc_gen__V_126_126);
    }
#line 1151 "proc_gen.m"
    {
#line 1151 "proc_gen.m"
      ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_90_90, &ll_backend__proc_gen__MaybeTraceInfo_41);
    }
#line 1168 "proc_gen.m"
    if ((ll_backend__proc_gen__MaybeTraceInfo_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1169 "proc_gen.m"
      {
#line 1170 "proc_gen.m"
        {
#line 1170 "proc_gen.m"
          ll_backend__proc_gen__TraceExitCode_48 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230);
        }
#line 1171 "proc_gen.m"
        ll_backend__proc_gen__LiveLvals_49 = ll_backend__proc_gen__OutLvals_26;
#line 1169 "proc_gen.m"
        *ll_backend__proc_gen__STATE_VARIABLE_CI_65 = ll_backend__proc_gen__STATE_VARIABLE_CI_90_90;
#line 1169 "proc_gen.m"
      }
#line 1168 "proc_gen.m"
    else
#line 1153 "proc_gen.m"
      {
#line 1153 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TraceInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTraceInfo_41, (MR_Integer) 0)));
#line 1153 "proc_gen.m"
        MR_Word ll_backend__proc_gen__MaybeExitExternalInfo_43;
#line 1156 "proc_gen.m"
        MR_Word ll_backend__proc_gen___CLDAfterExit_44;

#line 1156 "proc_gen.m"
        {
#line 1156 "proc_gen.m"
          ll_backend__trace_gen__generate_external_event_code_8_p_0((MR_Integer) 1, ll_backend__proc_gen__TraceInfo_42, ll_backend__proc_gen__ProcContext_13, &ll_backend__proc_gen__MaybeExitExternalInfo_43, ll_backend__proc_gen__STATE_VARIABLE_CI_90_90, ll_backend__proc_gen__STATE_VARIABLE_CI_65, ll_backend__proc_gen__STATE_VARIABLE_CLD_75_75, &ll_backend__proc_gen___CLDAfterExit_44);
        }
#line 1163 "proc_gen.m"
        if ((ll_backend__proc_gen__MaybeExitExternalInfo_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1164 "proc_gen.m"
          {
#line 1165 "proc_gen.m"
            ll_backend__proc_gen__LiveLvals_49 = ll_backend__proc_gen__OutLvals_26;
#line 1166 "proc_gen.m"
            {
#line 1166 "proc_gen.m"
              ll_backend__proc_gen__TraceExitCode_48 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230);
            }
#line 1164 "proc_gen.m"
          }
#line 1163 "proc_gen.m"
        else
#line 1159 "proc_gen.m"
          {
#line 1159 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ExitExternalInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeExitExternalInfo_43, (MR_Integer) 0)));
#line 1159 "proc_gen.m"
            MR_Word ll_backend__proc_gen__TypeInfoDatas_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ExitExternalInfo_45, (MR_Integer) 1)));
#line 1160 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ExitExternalInfo_45, (MR_Integer) 0)));
#line 1162 "proc_gen.m"
            MR_Box ll_backend__proc_gen__conv1_LiveLvals_49;

#line 1160 "proc_gen.m"
            ll_backend__proc_gen__TraceExitCode_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ExitExternalInfo_45, (MR_Integer) 2)));
#line 1162 "proc_gen.m"
            {
#line 1162 "proc_gen.m"
              mercury__map__foldl_4_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[4], (MR_Word) &ll_backend__proc_gen_scalar_common_1[5], (MR_Word) &ll_backend__proc_gen_scalar_common_1[6], (MR_Word) &ll_backend__proc_gen_scalar_common_2[5], ll_backend__proc_gen__TypeInfoDatas_47, ((MR_Box) (ll_backend__proc_gen__OutLvals_26)), &ll_backend__proc_gen__conv1_LiveLvals_49);
            }
#line 1162 "proc_gen.m"
            ll_backend__proc_gen__LiveLvals_49 = ((MR_Word) ll_backend__proc_gen__conv1_LiveLvals_49);
#line 1159 "proc_gen.m"
          }
#line 1153 "proc_gen.m"
      }
#line 1174 "proc_gen.m"
    {
#line 1174 "proc_gen.m"
      ll_backend__code_info__get_proc_info_2_p_0(*ll_backend__proc_gen__STATE_VARIABLE_CI_65, &ll_backend__proc_gen__ProcInfo_50);
    }
#line 1175 "proc_gen.m"
    {
#line 1175 "proc_gen.m"
      hlds__hlds_pred__proc_info_get_maybe_special_return_2_p_0(ll_backend__proc_gen__ProcInfo_50, &ll_backend__proc_gen__MaybeSpecialReturn_51);
    }
#line 1185 "proc_gen.m"
#line 1185 "proc_gen.m"
    switch (ll_backend__proc_gen__CodeModel_10) {
#line 1185 "proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1185 "proc_gen.m"
      case (MR_Integer) 0:
#line 1177 "proc_gen.m"
        {
#line 1177 "proc_gen.m"
          MR_Word ll_backend__proc_gen__SuccessCode_52;
#line 1177 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_200_200;
#line 1177 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_205_205;
#line 1177 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_206_206;
#line 1177 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_207_207;
#line 1177 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_215_215;

#line 1178 "proc_gen.m"
          {
#line 1178 "proc_gen.m"
            ll_backend__proc_gen__V_200_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1178 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_200_200, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_5[3]));
#line 1178 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_200_200, 1) = ((MR_Box) (ll_backend__proc_gen__generate_exit_9_p_0_2));
#line 1178 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_200_200, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1178 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_200_200, 3) = ((MR_Box) (ll_backend__proc_gen__MaybeSpecialReturn_51));
#line 1178 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_200_200, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1178 "proc_gen.m"
          }
#line 1178 "proc_gen.m"
          {
#line 1178 "proc_gen.m"
            mercury__require__expect_4_p_0(ll_backend__proc_gen__V_200_200, (MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.generate_exit\'/9", (MR_String) "det special_return");
          }
#line 1181 "proc_gen.m"
          {
#line 1181 "proc_gen.m"
            ll_backend__proc_gen__V_207_207 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1181 "proc_gen.m"
            MR_hl_field(MR_mktag(2), ll_backend__proc_gen__V_207_207, 0) = ((MR_Box) (ll_backend__proc_gen__LiveLvals_49));
#line 1181 "proc_gen.m"
          }
#line 1181 "proc_gen.m"
          {
#line 1181 "proc_gen.m"
            ll_backend__proc_gen__V_206_206 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1181 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_206_206, 0) = ((MR_Box) (ll_backend__proc_gen__V_207_207));
#line 1181 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_206_206, 1) = ((MR_Box) ((MR_String) ""));
#line 1181 "proc_gen.m"
          }
#line 1181 "proc_gen.m"
          {
#line 1181 "proc_gen.m"
            ll_backend__proc_gen__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1181 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_205_205, 0) = ((MR_Box) (ll_backend__proc_gen__V_206_206));
#line 1181 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_205_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[14])));
#line 1181 "proc_gen.m"
          }
#line 1180 "proc_gen.m"
          {
#line 1180 "proc_gen.m"
            ll_backend__proc_gen__SuccessCode_52 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__V_205_205);
          }
#line 1184 "proc_gen.m"
          {
#line 1184 "proc_gen.m"
            ll_backend__proc_gen__V_215_215 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__RestoreDeallocCodeCopy_40, ll_backend__proc_gen__SuccessCode_52);
          }
#line 1184 "proc_gen.m"
          {
#line 1184 "proc_gen.m"
            ll_backend__proc_gen__AllSuccessCode_53 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__TraceExitCode_48, ll_backend__proc_gen__V_215_215);
          }
#line 1177 "proc_gen.m"
        }
#line 1185 "proc_gen.m"
        break;
#line 1185 "proc_gen.m"
      case (MR_Integer) 2:
#line 1198 "proc_gen.m"
        {
#line 1198 "proc_gen.m"
          MR_Word ll_backend__proc_gen__SetupRedoCode_56;
#line 1198 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_171_171;
#line 1198 "proc_gen.m"
          MR_Word ll_backend__proc_gen__SuccessCode_219;

#line 1202 "proc_gen.m"
          if ((ll_backend__proc_gen__MaybeTraceInfo_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1204 "proc_gen.m"
            {
#line 1204 "proc_gen.m"
              ll_backend__proc_gen__SetupRedoCode_56 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230);
            }
#line 1202 "proc_gen.m"
          else
#line 1200 "proc_gen.m"
            {
#line 1200 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TraceInfo2_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTraceInfo_41, (MR_Integer) 0)));

#line 1201 "proc_gen.m"
              {
#line 1201 "proc_gen.m"
                ll_backend__trace_gen__maybe_setup_redo_event_2_p_0(ll_backend__proc_gen__TraceInfo2_55, &ll_backend__proc_gen__SetupRedoCode_56);
              }
#line 1200 "proc_gen.m"
            }
#line 1220 "proc_gen.m"
          if ((ll_backend__proc_gen__MaybeSpecialReturn_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1221 "proc_gen.m"
            {
#line 1221 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_130_130;
#line 1221 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_131_131;
#line 1221 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_132_132;

#line 1223 "proc_gen.m"
              {
#line 1223 "proc_gen.m"
                ll_backend__proc_gen__V_132_132 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "proc_gen.m"
                MR_hl_field(MR_mktag(2), ll_backend__proc_gen__V_132_132, 0) = ((MR_Box) (ll_backend__proc_gen__LiveLvals_49));
#line 1223 "proc_gen.m"
              }
#line 1223 "proc_gen.m"
              {
#line 1223 "proc_gen.m"
                ll_backend__proc_gen__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1223 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_131_131, 0) = ((MR_Box) (ll_backend__proc_gen__V_132_132));
#line 1223 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_131_131, 1) = ((MR_Box) ((MR_String) ""));
#line 1223 "proc_gen.m"
              }
#line 1223 "proc_gen.m"
              {
#line 1223 "proc_gen.m"
                ll_backend__proc_gen__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_130_130, 0) = ((MR_Box) (ll_backend__proc_gen__V_131_131));
#line 1223 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[18])));
#line 1223 "proc_gen.m"
              }
#line 1222 "proc_gen.m"
              {
#line 1222 "proc_gen.m"
                ll_backend__proc_gen__SuccessCode_219 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__V_130_130);
              }
#line 1221 "proc_gen.m"
            }
#line 1220 "proc_gen.m"
          else
#line 1207 "proc_gen.m"
            {
#line 1207 "proc_gen.m"
              MR_Word ll_backend__proc_gen__SpecialReturn_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeSpecialReturn_51, (MR_Integer) 0)));
#line 1207 "proc_gen.m"
              MR_String ll_backend__proc_gen__GeneratorLocnStr_58 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__SpecialReturn_57, (MR_Integer) 0)));
#line 1207 "proc_gen.m"
              MR_String ll_backend__proc_gen__DebugStr_59 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__SpecialReturn_57, (MR_Integer) 1)));
#line 1207 "proc_gen.m"
              MR_String ll_backend__proc_gen__ReturnCodeStr_61;
#line 1207 "proc_gen.m"
              MR_Word ll_backend__proc_gen__Component_62;
#line 1207 "proc_gen.m"
              MR_String ll_backend__proc_gen__V_142_142;
#line 1207 "proc_gen.m"
              MR_String ll_backend__proc_gen__V_143_143;
#line 1207 "proc_gen.m"
              MR_String ll_backend__proc_gen__V_145_145;
#line 1207 "proc_gen.m"
              MR_String ll_backend__proc_gen__V_146_146;
#line 1207 "proc_gen.m"
              MR_String ll_backend__proc_gen__V_148_148;
#line 1207 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_152_152;
#line 1207 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_153_153;
#line 1207 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_154_154;
#line 1207 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_156_156;
#line 1207 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_157_157;
#line 1207 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_158_158;
#line 1207 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_160_160;

#line 1211 "proc_gen.m"
              {
#line 1211 "proc_gen.m"
                ll_backend__proc_gen__V_148_148 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__GeneratorLocnStr_58, (MR_String) ");\n");
              }
#line 1211 "proc_gen.m"
              {
#line 1211 "proc_gen.m"
                ll_backend__proc_gen__V_146_146 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__proc_gen__V_148_148);
              }
#line 1211 "proc_gen.m"
              {
#line 1211 "proc_gen.m"
                ll_backend__proc_gen__V_145_145 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__DebugStr_59, ll_backend__proc_gen__V_146_146);
              }
#line 1210 "proc_gen.m"
              {
#line 1210 "proc_gen.m"
                ll_backend__proc_gen__V_143_143 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__proc_gen__V_145_145);
              }
#line 1210 "proc_gen.m"
              {
#line 1210 "proc_gen.m"
                ll_backend__proc_gen__V_142_142 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_mmos_return_answer", ll_backend__proc_gen__V_143_143);
              }
#line 1210 "proc_gen.m"
              {
#line 1210 "proc_gen.m"
                ll_backend__proc_gen__ReturnCodeStr_61 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ll_backend__proc_gen__V_142_142);
              }
#line 1212 "proc_gen.m"
              {
#line 1212 "proc_gen.m"
                ll_backend__proc_gen__Component_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Component_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1212 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Component_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1212 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Component_62, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1212 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Component_62, 3) = ((MR_Box) (ll_backend__proc_gen__ReturnCodeStr_61));
#line 1212 "proc_gen.m"
              }
#line 1216 "proc_gen.m"
              {
#line 1216 "proc_gen.m"
                ll_backend__proc_gen__V_154_154 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1216 "proc_gen.m"
                MR_hl_field(MR_mktag(2), ll_backend__proc_gen__V_154_154, 0) = ((MR_Box) (ll_backend__proc_gen__LiveLvals_49));
#line 1216 "proc_gen.m"
              }
#line 1216 "proc_gen.m"
              {
#line 1216 "proc_gen.m"
                ll_backend__proc_gen__V_153_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1216 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_153_153, 0) = ((MR_Box) (ll_backend__proc_gen__V_154_154));
#line 1216 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_153_153, 1) = ((MR_Box) ((MR_String) ""));
#line 1216 "proc_gen.m"
              }
#line 1217 "proc_gen.m"
              {
#line 1217 "proc_gen.m"
                ll_backend__proc_gen__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1217 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_160_160, 0) = ((MR_Box) (ll_backend__proc_gen__Component_62));
#line 1217 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_160_160, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1217 "proc_gen.m"
              }
#line 1217 "proc_gen.m"
              {
#line 1217 "proc_gen.m"
                ll_backend__proc_gen__V_158_158 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 1217 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_158_158, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 1217 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_158_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1217 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_158_158, 2) = ((MR_Box) (ll_backend__proc_gen__V_160_160));
#line 1217 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_158_158, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1217 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_158_158, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1217 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_158_158, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1217 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_158_158, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1217 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_158_158, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1217 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_158_158, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1217 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_158_158, 9) = ((MR_Box) ((MR_Integer) 0));
#line 1217 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_158_158, 10) = ((MR_Box) ((MR_Integer) 1));
#line 1217 "proc_gen.m"
              }
#line 1217 "proc_gen.m"
              {
#line 1217 "proc_gen.m"
                ll_backend__proc_gen__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1217 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_157_157, 0) = ((MR_Box) (ll_backend__proc_gen__V_158_158));
#line 1217 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_157_157, 1) = ((MR_Box) ((MR_String) ""));
#line 1217 "proc_gen.m"
              }
#line 1219 "proc_gen.m"
              {
#line 1219 "proc_gen.m"
                ll_backend__proc_gen__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1219 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_156_156, 0) = ((MR_Box) (ll_backend__proc_gen__V_157_157));
#line 1219 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_156_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1219 "proc_gen.m"
              }
#line 1216 "proc_gen.m"
              {
#line 1216 "proc_gen.m"
                ll_backend__proc_gen__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1216 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_152_152, 0) = ((MR_Box) (ll_backend__proc_gen__V_153_153));
#line 1216 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_152_152, 1) = ((MR_Box) (ll_backend__proc_gen__V_156_156));
#line 1216 "proc_gen.m"
              }
#line 1215 "proc_gen.m"
              {
#line 1215 "proc_gen.m"
                ll_backend__proc_gen__SuccessCode_219 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__V_152_152);
              }
#line 1207 "proc_gen.m"
            }
#line 1228 "proc_gen.m"
          {
#line 1228 "proc_gen.m"
            ll_backend__proc_gen__V_171_171 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__TraceExitCode_48, ll_backend__proc_gen__SuccessCode_219);
          }
#line 1228 "proc_gen.m"
          {
#line 1228 "proc_gen.m"
            ll_backend__proc_gen__AllSuccessCode_53 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__SetupRedoCode_56, ll_backend__proc_gen__V_171_171);
          }
#line 1198 "proc_gen.m"
        }
#line 1185 "proc_gen.m"
        break;
#line 1185 "proc_gen.m"
      case (MR_Integer) 1:
#line 1186 "proc_gen.m"
        {
#line 1186 "proc_gen.m"
          MR_Word ll_backend__proc_gen__SuccessLiveRegs_54;
#line 1186 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_172_172;
#line 1186 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_180_180;
#line 1186 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_189_189;
#line 1186 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_190_190;
#line 1186 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_191_191;
#line 1186 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_199_199;
#line 1186 "proc_gen.m"
          MR_Word ll_backend__proc_gen__SuccessCode_218;

#line 1187 "proc_gen.m"
          {
#line 1187 "proc_gen.m"
            ll_backend__proc_gen__V_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1187 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_172_172, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_5[3]));
#line 1187 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_172_172, 1) = ((MR_Box) (ll_backend__proc_gen__generate_exit_9_p_0_3));
#line 1187 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_172_172, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1187 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_172_172, 3) = ((MR_Box) (ll_backend__proc_gen__MaybeSpecialReturn_51));
#line 1187 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_172_172, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1187 "proc_gen.m"
          }
#line 1187 "proc_gen.m"
          {
#line 1187 "proc_gen.m"
            mercury__require__expect_4_p_0(ll_backend__proc_gen__V_172_172, (MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.generate_exit\'/9", (MR_String) "semi special_return");
          }
#line 1189 "proc_gen.m"
          {
#line 1189 "proc_gen.m"
            mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[10]))), ll_backend__proc_gen__LiveLvals_49, &ll_backend__proc_gen__SuccessLiveRegs_54);
          }
#line 1193 "proc_gen.m"
          {
#line 1193 "proc_gen.m"
            ll_backend__proc_gen__V_191_191 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1193 "proc_gen.m"
            MR_hl_field(MR_mktag(2), ll_backend__proc_gen__V_191_191, 0) = ((MR_Box) (ll_backend__proc_gen__SuccessLiveRegs_54));
#line 1193 "proc_gen.m"
          }
#line 1193 "proc_gen.m"
          {
#line 1193 "proc_gen.m"
            ll_backend__proc_gen__V_190_190 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1193 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_190_190, 0) = ((MR_Box) (ll_backend__proc_gen__V_191_191));
#line 1193 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_190_190, 1) = ((MR_Box) ((MR_String) ""));
#line 1193 "proc_gen.m"
          }
#line 1193 "proc_gen.m"
          {
#line 1193 "proc_gen.m"
            ll_backend__proc_gen__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1193 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_189_189, 0) = ((MR_Box) (ll_backend__proc_gen__V_190_190));
#line 1193 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_189_189, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[14])));
#line 1193 "proc_gen.m"
          }
#line 1192 "proc_gen.m"
          {
#line 1192 "proc_gen.m"
            ll_backend__proc_gen__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_180_180, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[20]));
#line 1192 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_180_180, 1) = ((MR_Box) (ll_backend__proc_gen__V_189_189));
#line 1192 "proc_gen.m"
          }
#line 1190 "proc_gen.m"
          {
#line 1190 "proc_gen.m"
            ll_backend__proc_gen__SuccessCode_218 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__V_180_180);
          }
#line 1196 "proc_gen.m"
          {
#line 1196 "proc_gen.m"
            ll_backend__proc_gen__V_199_199 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__RestoreDeallocCodeCopy_40, ll_backend__proc_gen__SuccessCode_218);
          }
#line 1196 "proc_gen.m"
          {
#line 1196 "proc_gen.m"
            ll_backend__proc_gen__AllSuccessCode_53 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__TraceExitCode_48, ll_backend__proc_gen__V_199_199);
          }
#line 1186 "proc_gen.m"
        }
#line 1185 "proc_gen.m"
        break;
#line 1185 "proc_gen.m"
    }
#line 1230 "proc_gen.m"
    {
#line 1230 "proc_gen.m"
      ll_backend__proc_gen__V_217_217 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__AllSuccessCode_53, ll_backend__proc_gen__EndComment_19);
    }
#line 1230 "proc_gen.m"
    {
#line 1230 "proc_gen.m"
      ll_backend__proc_gen__V_216_216 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__FlushCode_27, ll_backend__proc_gen__V_217_217);
    }
#line 1230 "proc_gen.m"
    {
#line 1230 "proc_gen.m"
      *ll_backend__proc_gen__ExitCode_15 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__StartComment_18, ll_backend__proc_gen__V_216_216);
    }
#line 1061 "proc_gen.m"
  }
#line 1056 "proc_gen.m"
}

#line 927 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_entry_6_p_0(
#line 927 "proc_gen.m"
  MR_Word ll_backend__proc_gen__CI_7,
#line 927 "proc_gen.m"
  MR_Word ll_backend__proc_gen__CodeModel_8,
#line 927 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Goal_9,
#line 927 "proc_gen.m"
  MR_Word ll_backend__proc_gen__OutsideResumePoint_10,
#line 927 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__ProcFrameSlots_11,
#line 927 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__EntryCode_12)
#line 927 "proc_gen.m"
{
#line 931 "proc_gen.m"
  {
#line 931 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 931 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TypeCtorInfo_76_76;
#line 931 "proc_gen.m"
    MR_Word ll_backend__proc_gen__StackSlots_13;
#line 931 "proc_gen.m"
    MR_Word ll_backend__proc_gen__VarSet_14;
#line 931 "proc_gen.m"
    MR_String ll_backend__proc_gen__SlotsComment_15;
#line 931 "proc_gen.m"
    MR_Word ll_backend__proc_gen__StartComment_16;
#line 931 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__MainSlots_17;
#line 931 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredId_18;
#line 931 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__ProcId_19;
#line 931 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ModuleInfo_20;
#line 931 "proc_gen.m"
    MR_Word ll_backend__proc_gen__EntryLabel_21;
#line 931 "proc_gen.m"
    MR_Word ll_backend__proc_gen__LabelCode_22;
#line 931 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Used_23;
#line 931 "proc_gen.m"
    MR_Word ll_backend__proc_gen__SaveSuccipCode_25;
#line 931 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__TotalSlots_26;
#line 931 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeSuccipSlot_27;
#line 931 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeTraceInfo_28;
#line 931 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TraceFillCode_30;
#line 931 "proc_gen.m"
    MR_String ll_backend__proc_gen__PushMsg_31;
#line 931 "proc_gen.m"
    MR_Word ll_backend__proc_gen__AllocCode_34;
#line 931 "proc_gen.m"
    MR_Word ll_backend__proc_gen__EndComment_37;
#line 931 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_38_38;
#line 931 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_43_43;
#line 931 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_44_44;
#line 931 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_45_45;
#line 931 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_49_49;
#line 931 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_50_50;
#line 931 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_72_72;
#line 931 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_73_73;
#line 931 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_74_74;
#line 931 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_75_75;

#line 932 "proc_gen.m"
    {
#line 932 "proc_gen.m"
      ll_backend__code_info__get_stack_slots_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__StackSlots_13);
    }
#line 933 "proc_gen.m"
    {
#line 933 "proc_gen.m"
      ll_backend__code_info__get_varset_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__VarSet_14);
    }
#line 934 "proc_gen.m"
    {
#line 934 "proc_gen.m"
      ll_backend__proc_gen__SlotsComment_15 = hlds__hlds_llds__explain_stack_slots_2_f_0(ll_backend__proc_gen__StackSlots_13, ll_backend__proc_gen__VarSet_14);
    }
#line 4479 "ll_backend.proc_gen.c"
    ll_backend__proc_gen__TypeCtorInfo_76_76 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 937 "proc_gen.m"
    {
#line 937 "proc_gen.m"
      ll_backend__proc_gen__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 937 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_45_45, 0) = ((MR_Box) (ll_backend__proc_gen__SlotsComment_15));
#line 937 "proc_gen.m"
    }
#line 937 "proc_gen.m"
    {
#line 937 "proc_gen.m"
      ll_backend__proc_gen__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 937 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_44_44, 0) = ((MR_Box) (ll_backend__proc_gen__V_45_45));
#line 937 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_44_44, 1) = ((MR_Box) ((MR_String) ""));
#line 937 "proc_gen.m"
    }
#line 938 "proc_gen.m"
    {
#line 938 "proc_gen.m"
      ll_backend__proc_gen__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 938 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_43_43, 0) = ((MR_Box) (ll_backend__proc_gen__V_44_44));
#line 938 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 938 "proc_gen.m"
    }
#line 936 "proc_gen.m"
    {
#line 936 "proc_gen.m"
      ll_backend__proc_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_38_38, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[30]));
#line 936 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_38_38, 1) = ((MR_Box) (ll_backend__proc_gen__V_43_43));
#line 936 "proc_gen.m"
    }
#line 935 "proc_gen.m"
    {
#line 935 "proc_gen.m"
      ll_backend__proc_gen__StartComment_16 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76, ll_backend__proc_gen__V_38_38);
    }
#line 939 "proc_gen.m"
    {
#line 939 "proc_gen.m"
      ll_backend__code_info__get_total_stackslot_count_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__MainSlots_17);
    }
#line 940 "proc_gen.m"
    {
#line 940 "proc_gen.m"
      ll_backend__code_info__get_pred_id_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__PredId_18);
    }
#line 941 "proc_gen.m"
    {
#line 941 "proc_gen.m"
      ll_backend__code_info__get_proc_id_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__ProcId_19);
    }
#line 942 "proc_gen.m"
    {
#line 942 "proc_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__ModuleInfo_20);
    }
#line 943 "proc_gen.m"
    {
#line 943 "proc_gen.m"
      ll_backend__proc_gen__EntryLabel_21 = ll_backend__code_util__make_local_entry_label_4_f_0(ll_backend__proc_gen__ModuleInfo_20, ll_backend__proc_gen__PredId_18, ll_backend__proc_gen__ProcId_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 945 "proc_gen.m"
    {
#line 945 "proc_gen.m"
      ll_backend__proc_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 945 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 945 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_50_50, 1) = ((MR_Box) (ll_backend__proc_gen__EntryLabel_21));
#line 945 "proc_gen.m"
    }
#line 945 "proc_gen.m"
    {
#line 945 "proc_gen.m"
      ll_backend__proc_gen__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 945 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_49_49, 0) = ((MR_Box) (ll_backend__proc_gen__V_50_50));
#line 945 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_49_49, 1) = ((MR_Box) ((MR_String) "Procedure entry point"));
#line 945 "proc_gen.m"
    }
#line 944 "proc_gen.m"
    {
#line 944 "proc_gen.m"
      ll_backend__proc_gen__LabelCode_22 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76, ((MR_Box) (ll_backend__proc_gen__V_49_49)));
    }
#line 947 "proc_gen.m"
    {
#line 947 "proc_gen.m"
      ll_backend__code_info__get_succip_used_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__Used_23);
    }
#line 950 "proc_gen.m"
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__Used_23 == (MR_Integer) 1);
#line 950 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 950 "proc_gen.m"
      {
#line 952 "proc_gen.m"
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CodeModel_8 == (MR_Integer) 2);
#line 952 "proc_gen.m"
        ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
#line 950 "proc_gen.m"
      }
#line 948 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 954 "proc_gen.m"
      {
#line 954 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__V_52_52 = (ll_backend__proc_gen__MainSlots_17 + (MR_Integer) 1);
#line 954 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_54_54;
#line 954 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_55_55;
#line 954 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_56_56;

#line 1018 "proc_gen.m"
#line 1018 "proc_gen.m"
        switch (ll_backend__proc_gen__CodeModel_8) {
#line 1018 "proc_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1018 "proc_gen.m"
          case (MR_Integer) 0:
#line 1018 "proc_gen.m"
          case (MR_Integer) 1:
#line 1019 "proc_gen.m"
            {
#line 1019 "proc_gen.m"
              ll_backend__proc_gen__TotalSlots_26 = ll_backend__code_info__round_det_stack_frame_size_2_f_0(ll_backend__proc_gen__CI_7, ll_backend__proc_gen__V_52_52);
            }
#line 1018 "proc_gen.m"
            break;
#line 1018 "proc_gen.m"
          case (MR_Integer) 2:
#line 1022 "proc_gen.m"
            ll_backend__proc_gen__TotalSlots_26 = ll_backend__proc_gen__V_52_52;
#line 1018 "proc_gen.m"
            break;
#line 1018 "proc_gen.m"
        }
#line 956 "proc_gen.m"
        {
#line 956 "proc_gen.m"
          ll_backend__proc_gen__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 956 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 956 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_56_56, 1) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_26));
#line 956 "proc_gen.m"
        }
#line 956 "proc_gen.m"
        {
#line 956 "proc_gen.m"
          ll_backend__proc_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 956 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 956 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_55_55, 1) = ((MR_Box) (ll_backend__proc_gen__V_56_56));
#line 956 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_55_55, 2) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_7[1]));
#line 956 "proc_gen.m"
        }
#line 956 "proc_gen.m"
        {
#line 956 "proc_gen.m"
          ll_backend__proc_gen__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 956 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_54_54, 0) = ((MR_Box) (ll_backend__proc_gen__V_55_55));
#line 956 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_54_54, 1) = ((MR_Box) ((MR_String) "Save the success ip"));
#line 956 "proc_gen.m"
        }
#line 955 "proc_gen.m"
        {
#line 955 "proc_gen.m"
          ll_backend__proc_gen__SaveSuccipCode_25 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76, ((MR_Box) (ll_backend__proc_gen__V_54_54)));
        }
#line 960 "proc_gen.m"
        {
#line 960 "proc_gen.m"
          ll_backend__proc_gen__MaybeSuccipSlot_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 960 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeSuccipSlot_27, 0) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_26));
#line 960 "proc_gen.m"
        }
#line 954 "proc_gen.m"
      }
#line 948 "proc_gen.m"
    else
#line 962 "proc_gen.m"
      {
#line 962 "proc_gen.m"
        {
#line 962 "proc_gen.m"
          ll_backend__proc_gen__SaveSuccipCode_25 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76);
        }
#line 1018 "proc_gen.m"
#line 1018 "proc_gen.m"
        switch (ll_backend__proc_gen__CodeModel_8) {
#line 1018 "proc_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1018 "proc_gen.m"
          case (MR_Integer) 0:
#line 1018 "proc_gen.m"
          case (MR_Integer) 1:
#line 1019 "proc_gen.m"
            {
#line 1019 "proc_gen.m"
              ll_backend__proc_gen__TotalSlots_26 = ll_backend__code_info__round_det_stack_frame_size_2_f_0(ll_backend__proc_gen__CI_7, ll_backend__proc_gen__MainSlots_17);
            }
#line 1018 "proc_gen.m"
            break;
#line 1018 "proc_gen.m"
          case (MR_Integer) 2:
#line 1022 "proc_gen.m"
            ll_backend__proc_gen__TotalSlots_26 = ll_backend__proc_gen__MainSlots_17;
#line 1018 "proc_gen.m"
            break;
#line 1018 "proc_gen.m"
        }
#line 964 "proc_gen.m"
        ll_backend__proc_gen__MaybeSuccipSlot_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 962 "proc_gen.m"
      }
#line 966 "proc_gen.m"
    {
#line 966 "proc_gen.m"
      ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__MaybeTraceInfo_28);
    }
#line 970 "proc_gen.m"
    if ((ll_backend__proc_gen__MaybeTraceInfo_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 972 "proc_gen.m"
      {
#line 972 "proc_gen.m"
        ll_backend__proc_gen__TraceFillCode_30 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76);
      }
#line 970 "proc_gen.m"
    else
#line 968 "proc_gen.m"
      {
#line 968 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TraceInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTraceInfo_28, (MR_Integer) 0)));

#line 969 "proc_gen.m"
        {
#line 969 "proc_gen.m"
          ll_backend__trace_gen__generate_slot_fill_code_3_p_0(ll_backend__proc_gen__CI_7, ll_backend__proc_gen__TraceInfo_29, &ll_backend__proc_gen__TraceFillCode_30);
        }
#line 968 "proc_gen.m"
      }
#line 975 "proc_gen.m"
    {
#line 975 "proc_gen.m"
      ll_backend__proc_gen__PushMsg_31 = ll_backend__proc_gen__push_msg_3_f_0(ll_backend__proc_gen__ModuleInfo_20, ll_backend__proc_gen__PredId_18, ll_backend__proc_gen__ProcId_19);
    }
#line 984 "proc_gen.m"
#line 984 "proc_gen.m"
    switch (ll_backend__proc_gen__CodeModel_8) {
#line 984 "proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 984 "proc_gen.m"
      case (MR_Integer) 0:
#line 984 "proc_gen.m"
      case (MR_Integer) 1:
#line 987 "proc_gen.m"
        {
#line 987 "proc_gen.m"
          MR_Word ll_backend__proc_gen__IsLeaf_35;
#line 987 "proc_gen.m"
          MR_Word ll_backend__proc_gen__StackIncrKind_36;

#line 988 "proc_gen.m"
          {
#line 988 "proc_gen.m"
            ll_backend__proc_gen__IsLeaf_35 = hlds__goal_util__proc_body_is_leaf_1_f_0(ll_backend__proc_gen__Goal_9);
          }
#line 992 "proc_gen.m"
#line 992 "proc_gen.m"
          switch (ll_backend__proc_gen__IsLeaf_35) {
#line 992 "proc_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 992 "proc_gen.m"
            case (MR_Integer) 0:
#line 994 "proc_gen.m"
              ll_backend__proc_gen__StackIncrKind_36 = (MR_Integer) 0;
#line 992 "proc_gen.m"
              break;
#line 992 "proc_gen.m"
            case (MR_Integer) 1:
#line 991 "proc_gen.m"
              ll_backend__proc_gen__StackIncrKind_36 = (MR_Integer) 1;
#line 992 "proc_gen.m"
              break;
#line 992 "proc_gen.m"
          }
#line 996 "proc_gen.m"
          ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__TotalSlots_26 > (MR_Integer) 0);
#line 996 "proc_gen.m"
          if (ll_backend__proc_gen__succeeded)
#line 997 "proc_gen.m"
            {
#line 997 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_61_61;
#line 997 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_62_62;

#line 998 "proc_gen.m"
              {
#line 998 "proc_gen.m"
                ll_backend__proc_gen__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 998 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 24));
#line 998 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_62_62, 1) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_26));
#line 998 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_62_62, 2) = ((MR_Box) (ll_backend__proc_gen__PushMsg_31));
#line 998 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_62_62, 3) = ((MR_Box) (ll_backend__proc_gen__StackIncrKind_36));
#line 998 "proc_gen.m"
              }
#line 998 "proc_gen.m"
              {
#line 998 "proc_gen.m"
                ll_backend__proc_gen__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 998 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_61_61, 0) = ((MR_Box) (ll_backend__proc_gen__V_62_62));
#line 998 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_61_61, 1) = ((MR_Box) ((MR_String) "Allocate stack frame"));
#line 998 "proc_gen.m"
              }
#line 997 "proc_gen.m"
              {
#line 997 "proc_gen.m"
                ll_backend__proc_gen__AllocCode_34 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76, ((MR_Box) (ll_backend__proc_gen__V_61_61)));
              }
#line 997 "proc_gen.m"
            }
#line 996 "proc_gen.m"
          else
#line 1002 "proc_gen.m"
            {
#line 1002 "proc_gen.m"
              ll_backend__proc_gen__AllocCode_34 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76);
            }
#line 987 "proc_gen.m"
        }
#line 984 "proc_gen.m"
        break;
#line 984 "proc_gen.m"
      case (MR_Integer) 2:
#line 977 "proc_gen.m"
        {
#line 977 "proc_gen.m"
          MR_Word ll_backend__proc_gen__OutsideResumeAddress_32;
#line 977 "proc_gen.m"
          MR_Word ll_backend__proc_gen__NondetFrameInfo_33;
#line 977 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_64_64;
#line 977 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_65_65;
#line 977 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_66_66;

#line 978 "proc_gen.m"
          {
#line 978 "proc_gen.m"
            ll_backend__code_loc_dep__resume_point_stack_addr_2_p_0(ll_backend__proc_gen__OutsideResumePoint_10, &ll_backend__proc_gen__OutsideResumeAddress_32);
          }
#line 979 "proc_gen.m"
          {
#line 979 "proc_gen.m"
            ll_backend__proc_gen__NondetFrameInfo_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 979 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__NondetFrameInfo_33, 0) = ((MR_Box) (ll_backend__proc_gen__PushMsg_31));
#line 979 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__NondetFrameInfo_33, 1) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_26));
#line 979 "proc_gen.m"
          }
#line 981 "proc_gen.m"
          {
#line 981 "proc_gen.m"
            ll_backend__proc_gen__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 981 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_66_66, 0) = ((MR_Box) (ll_backend__proc_gen__OutsideResumeAddress_32));
#line 981 "proc_gen.m"
          }
#line 981 "proc_gen.m"
          {
#line 981 "proc_gen.m"
            ll_backend__proc_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 981 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 981 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_65_65, 1) = ((MR_Box) (ll_backend__proc_gen__NondetFrameInfo_33));
#line 981 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_65_65, 2) = ((MR_Box) (ll_backend__proc_gen__V_66_66));
#line 981 "proc_gen.m"
          }
#line 981 "proc_gen.m"
          {
#line 981 "proc_gen.m"
            ll_backend__proc_gen__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 981 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_64_64, 0) = ((MR_Box) (ll_backend__proc_gen__V_65_65));
#line 981 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_64_64, 1) = ((MR_Box) ((MR_String) "Allocate stack frame"));
#line 981 "proc_gen.m"
          }
#line 980 "proc_gen.m"
          {
#line 980 "proc_gen.m"
            ll_backend__proc_gen__AllocCode_34 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76, ((MR_Box) (ll_backend__proc_gen__V_64_64)));
          }
#line 977 "proc_gen.m"
        }
#line 984 "proc_gen.m"
        break;
#line 984 "proc_gen.m"
    }
#line 1005 "proc_gen.m"
    {
#line 1005 "proc_gen.m"
      MR_Word base;
#line 1005 "proc_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1005 "proc_gen.m"
      *ll_backend__proc_gen__ProcFrameSlots_11 = base;
#line 1005 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_26));
#line 1005 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__proc_gen__MaybeSuccipSlot_27));
#line 1005 "proc_gen.m"
    }
#line 1006 "proc_gen.m"
    {
#line 1006 "proc_gen.m"
      ll_backend__proc_gen__EndComment_37 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76, ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[31])));
    }
#line 1010 "proc_gen.m"
    {
#line 1010 "proc_gen.m"
      ll_backend__proc_gen__V_75_75 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76, ll_backend__proc_gen__TraceFillCode_30, ll_backend__proc_gen__EndComment_37);
    }
#line 1010 "proc_gen.m"
    {
#line 1010 "proc_gen.m"
      ll_backend__proc_gen__V_74_74 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76, ll_backend__proc_gen__SaveSuccipCode_25, ll_backend__proc_gen__V_75_75);
    }
#line 1009 "proc_gen.m"
    {
#line 1009 "proc_gen.m"
      ll_backend__proc_gen__V_73_73 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76, ll_backend__proc_gen__AllocCode_34, ll_backend__proc_gen__V_74_74);
    }
#line 1009 "proc_gen.m"
    {
#line 1009 "proc_gen.m"
      ll_backend__proc_gen__V_72_72 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76, ll_backend__proc_gen__LabelCode_22, ll_backend__proc_gen__V_73_73);
    }
#line 1009 "proc_gen.m"
    {
#line 1009 "proc_gen.m"
      *ll_backend__proc_gen__EntryCode_12 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76, ll_backend__proc_gen__StartComment_16, ll_backend__proc_gen__V_72_72);
    }
#line 931 "proc_gen.m"
  }
#line 927 "proc_gen.m"
}

#line 885 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_call_event_8_p_0(
#line 885 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TraceInfo_9,
#line 885 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcContext_10,
#line 885 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__MaybeTraceCallLabel_11,
#line 885 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__TraceCallCode_12,
#line 885 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_0_19,
#line 885 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CI_20,
#line 885 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_0_21,
#line 885 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CLD_22)
#line 885 "proc_gen.m"
{
#line 890 "proc_gen.m"
  {
#line 890 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 890 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeCallExternalInfo_15;

#line 891 "proc_gen.m"
    {
#line 891 "proc_gen.m"
      ll_backend__trace_gen__generate_external_event_code_8_p_0((MR_Integer) 0, ll_backend__proc_gen__TraceInfo_9, ll_backend__proc_gen__ProcContext_10, &ll_backend__proc_gen__MaybeCallExternalInfo_15, ll_backend__proc_gen__STATE_VARIABLE_CI_0_19, ll_backend__proc_gen__STATE_VARIABLE_CI_20, ll_backend__proc_gen__STATE_VARIABLE_CLD_0_21, ll_backend__proc_gen__STATE_VARIABLE_CLD_22);
    }
#line 898 "proc_gen.m"
    if ((ll_backend__proc_gen__MaybeCallExternalInfo_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 899 "proc_gen.m"
      {
#line 902 "proc_gen.m"
        {
#line 902 "proc_gen.m"
          *ll_backend__proc_gen__TraceCallCode_12 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 903 "proc_gen.m"
        *ll_backend__proc_gen__MaybeTraceCallLabel_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 899 "proc_gen.m"
      }
#line 898 "proc_gen.m"
    else
#line 894 "proc_gen.m"
      {
#line 894 "proc_gen.m"
        MR_Word ll_backend__proc_gen__CallExternalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeCallExternalInfo_15, (MR_Integer) 0)));
#line 894 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TraceCallLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__CallExternalInfo_16, (MR_Integer) 0)));
#line 895 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__CallExternalInfo_16, (MR_Integer) 1)));

#line 895 "proc_gen.m"
        *ll_backend__proc_gen__TraceCallCode_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__CallExternalInfo_16, (MR_Integer) 2)));
#line 897 "proc_gen.m"
        {
#line 897 "proc_gen.m"
          MR_Word base;
#line 897 "proc_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 897 "proc_gen.m"
          *ll_backend__proc_gen__MaybeTraceCallLabel_11 = base;
#line 897 "proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__proc_gen__TraceCallLabel_17));
#line 897 "proc_gen.m"
        }
#line 894 "proc_gen.m"
      }
#line 890 "proc_gen.m"
  }
#line 885 "proc_gen.m"
}

#line 811 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_category_code_11_p_0_1(
#line 811 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg)
#line 811 "proc_gen.m"
{
#line 811 "proc_gen.m"
  {
#line 811 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 811 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;

#line 811 "proc_gen.m"
    {
#line 811 "proc_gen.m"
      ll_backend__proc_gen__succeeded = ll_backend__proc_gen__IntroducedFrom__pred__generate_category_code__811__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))));
    }
#line 811 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 811 "proc_gen.m"
  }
#line 811 "proc_gen.m"
}

#line 687 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_category_code_11_p_0(
#line 687 "proc_gen.m"
  MR_Word ll_backend__proc_gen__CodeModel_12,
#line 687 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcContext_13,
#line 687 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Goal_14,
#line 687 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ResumePoint_15,
#line 687 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TraceSlotInfo_16,
#line 687 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__Code_17,
#line 687 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__MaybeTraceCallLabel_18,
#line 687 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__ProcFrameSlots_19,
#line 687 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_0_61,
#line 687 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CI_62,
#line 687 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_0_63)
#line 687 "proc_gen.m"
{
#line 696 "proc_gen.m"
  {
#line 696 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;

#line 696 "proc_gen.m"
#line 696 "proc_gen.m"
    switch (ll_backend__proc_gen__CodeModel_12) {
#line 696 "proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 696 "proc_gen.m"
      case (MR_Integer) 0:
#line 696 "proc_gen.m"
        {
#line 696 "proc_gen.m"
          MR_Word ll_backend__proc_gen__Globals_22;
#line 696 "proc_gen.m"
          MR_Word ll_backend__proc_gen__MiddleRec_23;
#line 700 "proc_gen.m"
          MR_Word ll_backend__proc_gen__MiddleRecCode_24;
#line 700 "proc_gen.m"
          MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_182_182;
#line 702 "proc_gen.m"
          MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_183_183;

#line 698 "proc_gen.m"
          {
#line 698 "proc_gen.m"
            ll_backend__code_info__get_globals_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_0_61, &ll_backend__proc_gen__Globals_22);
          }
#line 699 "proc_gen.m"
          {
#line 699 "proc_gen.m"
            libs__globals__lookup_bool_option_3_p_0(ll_backend__proc_gen__Globals_22, (MR_Integer) 447, &ll_backend__proc_gen__MiddleRec_23);
          }
#line 701 "proc_gen.m"
          ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__MiddleRec_23 == (MR_Integer) 1);
#line 701 "proc_gen.m"
          if (ll_backend__proc_gen__succeeded)
#line 702 "proc_gen.m"
            {
#line 702 "proc_gen.m"
              ll_backend__proc_gen__succeeded = ll_backend__middle_rec__match_and_generate_6_p_0(ll_backend__proc_gen__Goal_14, &ll_backend__proc_gen__MiddleRecCode_24, ll_backend__proc_gen__STATE_VARIABLE_CI_0_61, &ll_backend__proc_gen__STATE_VARIABLE_CI_182_182, ll_backend__proc_gen__STATE_VARIABLE_CLD_0_63, &ll_backend__proc_gen__STATE_VARIABLE_CLD_183_183);
            }
#line 700 "proc_gen.m"
          if (ll_backend__proc_gen__succeeded)
#line 704 "proc_gen.m"
            {
#line 704 "proc_gen.m"
              *ll_backend__proc_gen__STATE_VARIABLE_CI_62 = ll_backend__proc_gen__STATE_VARIABLE_CI_182_182;
#line 704 "proc_gen.m"
              *ll_backend__proc_gen__Code_17 = ll_backend__proc_gen__MiddleRecCode_24;
#line 705 "proc_gen.m"
              *ll_backend__proc_gen__MaybeTraceCallLabel_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 706 "proc_gen.m"
              *ll_backend__proc_gen__ProcFrameSlots_19 = (MR_Word) &ll_backend__proc_gen_scalar_common_1[26];
#line 704 "proc_gen.m"
            }
#line 700 "proc_gen.m"
          else
#line 708 "proc_gen.m"
            {
#line 708 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TypeCtorInfo_314_314;
#line 708 "proc_gen.m"
              MR_Word ll_backend__proc_gen__MaybeTraceInfo_25;
#line 708 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TraceCallCode_27;
#line 708 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TailRecLabelCode_31;
#line 708 "proc_gen.m"
              MR_Word ll_backend__proc_gen__BodyCode_32;
#line 708 "proc_gen.m"
              MR_Word ll_backend__proc_gen__EntryCode_33;
#line 708 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ExitCode_35;
#line 708 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_186_186;
#line 708 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_187_187;
#line 708 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_193_193;
#line 708 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_198_198;
#line 708 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_199_199;
#line 708 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_200_200;
#line 708 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_194_201;
#line 733 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_34_34;

#line 708 "proc_gen.m"
              {
#line 708 "proc_gen.m"
                ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_0_61, &ll_backend__proc_gen__MaybeTraceInfo_25);
              }
#line 724 "proc_gen.m"
              if ((ll_backend__proc_gen__MaybeTraceInfo_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 725 "proc_gen.m"
                {
#line 725 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__TypeCtorInfo_313_313;

#line 726 "proc_gen.m"
                  *ll_backend__proc_gen__MaybeTraceCallLabel_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5194 "ll_backend.proc_gen.c"
                  ll_backend__proc_gen__TypeCtorInfo_313_313 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 727 "proc_gen.m"
                  {
#line 727 "proc_gen.m"
                    ll_backend__proc_gen__TraceCallCode_27 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_313_313);
                  }
#line 728 "proc_gen.m"
                  {
#line 728 "proc_gen.m"
                    ll_backend__proc_gen__TailRecLabelCode_31 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_313_313);
                  }
#line 725 "proc_gen.m"
                  ll_backend__proc_gen__STATE_VARIABLE_CI_186_186 = ll_backend__proc_gen__STATE_VARIABLE_CI_0_61;
#line 725 "proc_gen.m"
                  ll_backend__proc_gen__STATE_VARIABLE_CLD_187_187 = ll_backend__proc_gen__STATE_VARIABLE_CLD_0_63;
#line 725 "proc_gen.m"
                }
#line 724 "proc_gen.m"
              else
#line 710 "proc_gen.m"
                {
#line 710 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__TraceInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTraceInfo_25, (MR_Integer) 0)));
#line 710 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__MaybeTailRecInfo_28;

#line 711 "proc_gen.m"
                  {
#line 711 "proc_gen.m"
                    ll_backend__proc_gen__generate_call_event_8_p_0(ll_backend__proc_gen__TraceInfo_26, ll_backend__proc_gen__ProcContext_13, ll_backend__proc_gen__MaybeTraceCallLabel_18, &ll_backend__proc_gen__TraceCallCode_27, ll_backend__proc_gen__STATE_VARIABLE_CI_0_61, &ll_backend__proc_gen__STATE_VARIABLE_CI_186_186, ll_backend__proc_gen__STATE_VARIABLE_CLD_0_63, &ll_backend__proc_gen__STATE_VARIABLE_CLD_187_187);
                  }
#line 713 "proc_gen.m"
                  {
#line 713 "proc_gen.m"
                    ll_backend__trace_gen__get_trace_maybe_tail_rec_info_2_p_0(ll_backend__proc_gen__TraceInfo_26, &ll_backend__proc_gen__MaybeTailRecInfo_28);
                  }
#line 720 "proc_gen.m"
                  if ((ll_backend__proc_gen__MaybeTailRecInfo_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 721 "proc_gen.m"
                    {
#line 722 "proc_gen.m"
                      {
#line 722 "proc_gen.m"
                        ll_backend__proc_gen__TailRecLabelCode_31 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                      }
#line 721 "proc_gen.m"
                    }
#line 720 "proc_gen.m"
                  else
#line 715 "proc_gen.m"
                    {
#line 715 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__TailRecLabel_30;
#line 715 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTailRecInfo_28, (MR_Integer) 0)));
#line 715 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_189_189;
#line 715 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_190_190;
#line 715 "proc_gen.m"
                      MR_Word ll_backend__proc_gen___TailRecLval_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_188_188, (MR_Integer) 0)));

#line 715 "proc_gen.m"
                      ll_backend__proc_gen__TailRecLabel_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_188_188, (MR_Integer) 1)));
#line 717 "proc_gen.m"
                      {
#line 717 "proc_gen.m"
                        ll_backend__proc_gen__V_190_190 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 717 "proc_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_190_190, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 717 "proc_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_190_190, 1) = ((MR_Box) (ll_backend__proc_gen__TailRecLabel_30));
#line 717 "proc_gen.m"
                      }
#line 717 "proc_gen.m"
                      {
#line 717 "proc_gen.m"
                        ll_backend__proc_gen__V_189_189 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 717 "proc_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_189_189, 0) = ((MR_Box) (ll_backend__proc_gen__V_190_190));
#line 717 "proc_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_189_189, 1) = ((MR_Box) ((MR_String) "tail recursion label, nofulljump"));
#line 717 "proc_gen.m"
                      }
#line 716 "proc_gen.m"
                      {
#line 716 "proc_gen.m"
                        ll_backend__proc_gen__TailRecLabelCode_31 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__proc_gen__V_189_189)));
                      }
#line 715 "proc_gen.m"
                    }
#line 710 "proc_gen.m"
                }
#line 730 "proc_gen.m"
              {
#line 730 "proc_gen.m"
                ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 0, ll_backend__proc_gen__Goal_14, &ll_backend__proc_gen__BodyCode_32, ll_backend__proc_gen__STATE_VARIABLE_CI_186_186, &ll_backend__proc_gen__STATE_VARIABLE_CI_193_193, ll_backend__proc_gen__STATE_VARIABLE_CLD_187_187, &ll_backend__proc_gen__STATE_VARIABLE_CLD_194_201);
              }
#line 731 "proc_gen.m"
              {
#line 731 "proc_gen.m"
                ll_backend__proc_gen__generate_entry_6_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_193_193, (MR_Integer) 0, ll_backend__proc_gen__Goal_14, ll_backend__proc_gen__ResumePoint_15, ll_backend__proc_gen__ProcFrameSlots_19, &ll_backend__proc_gen__EntryCode_33);
              }
#line 733 "proc_gen.m"
              {
#line 733 "proc_gen.m"
                ll_backend__proc_gen__generate_exit_9_p_0((MR_Integer) 0, *ll_backend__proc_gen__ProcFrameSlots_19, ll_backend__proc_gen__TraceSlotInfo_16, ll_backend__proc_gen__ProcContext_13, &ll_backend__proc_gen__V_34_34, &ll_backend__proc_gen__ExitCode_35, ll_backend__proc_gen__STATE_VARIABLE_CI_193_193, ll_backend__proc_gen__STATE_VARIABLE_CI_62, ll_backend__proc_gen__STATE_VARIABLE_CLD_194_201);
              }
#line 5303 "ll_backend.proc_gen.c"
              ll_backend__proc_gen__TypeCtorInfo_314_314 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 736 "proc_gen.m"
              {
#line 736 "proc_gen.m"
                ll_backend__proc_gen__V_200_200 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_314_314, ll_backend__proc_gen__BodyCode_32, ll_backend__proc_gen__ExitCode_35);
              }
#line 735 "proc_gen.m"
              {
#line 735 "proc_gen.m"
                ll_backend__proc_gen__V_199_199 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_314_314, ll_backend__proc_gen__TailRecLabelCode_31, ll_backend__proc_gen__V_200_200);
              }
#line 735 "proc_gen.m"
              {
#line 735 "proc_gen.m"
                ll_backend__proc_gen__V_198_198 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_314_314, ll_backend__proc_gen__TraceCallCode_27, ll_backend__proc_gen__V_199_199);
              }
#line 735 "proc_gen.m"
              {
#line 735 "proc_gen.m"
                *ll_backend__proc_gen__Code_17 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_314_314, ll_backend__proc_gen__EntryCode_33, ll_backend__proc_gen__V_198_198);
              }
#line 708 "proc_gen.m"
            }
#line 696 "proc_gen.m"
        }
#line 696 "proc_gen.m"
        break;
#line 696 "proc_gen.m"
      case (MR_Integer) 2:
#line 804 "proc_gen.m"
        {
#line 804 "proc_gen.m"
          MR_Word ll_backend__proc_gen__MaybeTraceInfo_284;

#line 805 "proc_gen.m"
          {
#line 805 "proc_gen.m"
            ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_0_61, &ll_backend__proc_gen__MaybeTraceInfo_284);
          }
#line 873 "proc_gen.m"
          if ((ll_backend__proc_gen__MaybeTraceInfo_284 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 874 "proc_gen.m"
            {
#line 874 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TypeCtorInfo_325_325;
#line 874 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_65_65;
#line 874 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_70_70;
#line 874 "proc_gen.m"
              MR_Word ll_backend__proc_gen__BodyCode_264;
#line 874 "proc_gen.m"
              MR_Word ll_backend__proc_gen__EntryCode_265;
#line 874 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ExitCode_266;
#line 874 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_194_267;
#line 879 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_60_60;

#line 875 "proc_gen.m"
              *ll_backend__proc_gen__MaybeTraceCallLabel_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 876 "proc_gen.m"
              {
#line 876 "proc_gen.m"
                ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 2, ll_backend__proc_gen__Goal_14, &ll_backend__proc_gen__BodyCode_264, ll_backend__proc_gen__STATE_VARIABLE_CI_0_61, &ll_backend__proc_gen__STATE_VARIABLE_CI_65_65, ll_backend__proc_gen__STATE_VARIABLE_CLD_0_63, &ll_backend__proc_gen__STATE_VARIABLE_CLD_194_267);
              }
#line 877 "proc_gen.m"
              {
#line 877 "proc_gen.m"
                ll_backend__proc_gen__generate_entry_6_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_65_65, (MR_Integer) 2, ll_backend__proc_gen__Goal_14, ll_backend__proc_gen__ResumePoint_15, ll_backend__proc_gen__ProcFrameSlots_19, &ll_backend__proc_gen__EntryCode_265);
              }
#line 879 "proc_gen.m"
              {
#line 879 "proc_gen.m"
                ll_backend__proc_gen__generate_exit_9_p_0((MR_Integer) 2, *ll_backend__proc_gen__ProcFrameSlots_19, ll_backend__proc_gen__TraceSlotInfo_16, ll_backend__proc_gen__ProcContext_13, &ll_backend__proc_gen__V_60_60, &ll_backend__proc_gen__ExitCode_266, ll_backend__proc_gen__STATE_VARIABLE_CI_65_65, ll_backend__proc_gen__STATE_VARIABLE_CI_62, ll_backend__proc_gen__STATE_VARIABLE_CLD_194_267);
              }
#line 5381 "ll_backend.proc_gen.c"
              ll_backend__proc_gen__TypeCtorInfo_325_325 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 881 "proc_gen.m"
              {
#line 881 "proc_gen.m"
                ll_backend__proc_gen__V_70_70 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_325_325, ll_backend__proc_gen__BodyCode_264, ll_backend__proc_gen__ExitCode_266);
              }
#line 881 "proc_gen.m"
              {
#line 881 "proc_gen.m"
                *ll_backend__proc_gen__Code_17 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_325_325, ll_backend__proc_gen__EntryCode_265, ll_backend__proc_gen__V_70_70);
              }
#line 874 "proc_gen.m"
            }
#line 873 "proc_gen.m"
          else
#line 807 "proc_gen.m"
            {
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TypeCtorInfo_324_324;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__MaybeTrailSlot_53;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__DiscardTraceTicketCode_59;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_71_71;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_72_72;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_73_73;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_79_79;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_80_80;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_83_83;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_84_84;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_85_85;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_86_86;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_89_89;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_116_116;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_117_117;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_118_118;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_119_119;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_120_120;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_121_121;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TraceInfo_248 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTraceInfo_284, (MR_Integer) 0)));
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TraceCallCode_249;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__MaybeTailRecInfo_250;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__BodyCode_251;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__EntryCode_252;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ExitCode_253;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__FailCode_254;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__BeforeBody_255;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ResumeCode_256;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ResumeVarList_257;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ResumeVars_258;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__MaybeFailExternalInfo_259;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TraceFailCode_262;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_194_263;
#line 807 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_301_301;
#line 817 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_50_50;
#line 827 "proc_gen.m"
              MR_Word ll_backend__proc_gen___CLDAfterEvent_245;
#line 837 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_302_302;
#line 837 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_303_303;
#line 837 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_304_304;
#line 837 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_305_305;

#line 808 "proc_gen.m"
              {
#line 808 "proc_gen.m"
                ll_backend__proc_gen__generate_call_event_8_p_0(ll_backend__proc_gen__TraceInfo_248, ll_backend__proc_gen__ProcContext_13, ll_backend__proc_gen__MaybeTraceCallLabel_18, &ll_backend__proc_gen__TraceCallCode_249, ll_backend__proc_gen__STATE_VARIABLE_CI_0_61, &ll_backend__proc_gen__STATE_VARIABLE_CI_71_71, ll_backend__proc_gen__STATE_VARIABLE_CLD_0_63, &ll_backend__proc_gen__STATE_VARIABLE_CLD_72_72);
              }
#line 810 "proc_gen.m"
              {
#line 810 "proc_gen.m"
                ll_backend__trace_gen__get_trace_maybe_tail_rec_info_2_p_0(ll_backend__proc_gen__TraceInfo_248, &ll_backend__proc_gen__MaybeTailRecInfo_250);
              }
#line 811 "proc_gen.m"
              {
#line 811 "proc_gen.m"
                ll_backend__proc_gen__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 811 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_73_73, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_5[2]));
#line 811 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_73_73, 1) = ((MR_Box) (ll_backend__proc_gen__generate_category_code_11_p_0_1));
#line 811 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_73_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 811 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_73_73, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 811 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_73_73, 4) = ((MR_Box) (ll_backend__proc_gen__MaybeTailRecInfo_250));
#line 811 "proc_gen.m"
              }
#line 811 "proc_gen.m"
              {
#line 811 "proc_gen.m"
                mercury__require__expect_4_p_0(ll_backend__proc_gen__V_73_73, (MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.generate_category_code\'/11", (MR_String) "tail recursive call in model_non code");
              }
#line 813 "proc_gen.m"
              {
#line 813 "proc_gen.m"
                ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CLD_72_72, &ll_backend__proc_gen__BeforeBody_255);
              }
#line 814 "proc_gen.m"
              {
#line 814 "proc_gen.m"
                ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 2, ll_backend__proc_gen__Goal_14, &ll_backend__proc_gen__BodyCode_251, ll_backend__proc_gen__STATE_VARIABLE_CI_71_71, &ll_backend__proc_gen__STATE_VARIABLE_CI_79_79, ll_backend__proc_gen__STATE_VARIABLE_CLD_72_72, &ll_backend__proc_gen__STATE_VARIABLE_CLD_80_80);
              }
#line 815 "proc_gen.m"
              {
#line 815 "proc_gen.m"
                ll_backend__proc_gen__generate_entry_6_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_79_79, (MR_Integer) 2, ll_backend__proc_gen__Goal_14, ll_backend__proc_gen__ResumePoint_15, ll_backend__proc_gen__ProcFrameSlots_19, &ll_backend__proc_gen__EntryCode_252);
              }
#line 817 "proc_gen.m"
              {
#line 817 "proc_gen.m"
                ll_backend__proc_gen__generate_exit_9_p_0((MR_Integer) 2, *ll_backend__proc_gen__ProcFrameSlots_19, ll_backend__proc_gen__TraceSlotInfo_16, ll_backend__proc_gen__ProcContext_13, &ll_backend__proc_gen__V_50_50, &ll_backend__proc_gen__ExitCode_253, ll_backend__proc_gen__STATE_VARIABLE_CI_79_79, &ll_backend__proc_gen__STATE_VARIABLE_CI_83_83, ll_backend__proc_gen__STATE_VARIABLE_CLD_80_80);
              }
#line 820 "proc_gen.m"
              {
#line 820 "proc_gen.m"
                ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__proc_gen__BeforeBody_255, ll_backend__proc_gen__STATE_VARIABLE_CI_83_83, &ll_backend__proc_gen__STATE_VARIABLE_CLD_84_84);
              }
#line 821 "proc_gen.m"
              {
#line 821 "proc_gen.m"
                ll_backend__code_loc_dep__generate_resume_point_6_p_0(ll_backend__proc_gen__ResumePoint_15, &ll_backend__proc_gen__ResumeCode_256, ll_backend__proc_gen__STATE_VARIABLE_CI_83_83, &ll_backend__proc_gen__STATE_VARIABLE_CI_85_85, ll_backend__proc_gen__STATE_VARIABLE_CLD_84_84, &ll_backend__proc_gen__STATE_VARIABLE_CLD_86_86);
              }
#line 822 "proc_gen.m"
              {
#line 822 "proc_gen.m"
                ll_backend__code_loc_dep__resume_point_vars_2_p_0(ll_backend__proc_gen__ResumePoint_15, &ll_backend__proc_gen__ResumeVarList_257);
              }
#line 823 "proc_gen.m"
              {
#line 823 "proc_gen.m"
                ll_backend__proc_gen__ResumeVars_258 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__proc_gen__ResumeVarList_257);
              }
#line 824 "proc_gen.m"
              {
#line 824 "proc_gen.m"
                ll_backend__code_loc_dep__set_forward_live_vars_3_p_0(ll_backend__proc_gen__ResumeVars_258, ll_backend__proc_gen__STATE_VARIABLE_CLD_86_86, &ll_backend__proc_gen__STATE_VARIABLE_CLD_194_263);
              }
#line 827 "proc_gen.m"
              {
#line 827 "proc_gen.m"
                ll_backend__trace_gen__generate_external_event_code_8_p_0((MR_Integer) 2, ll_backend__proc_gen__TraceInfo_248, ll_backend__proc_gen__ProcContext_13, &ll_backend__proc_gen__MaybeFailExternalInfo_259, ll_backend__proc_gen__STATE_VARIABLE_CI_85_85, &ll_backend__proc_gen__STATE_VARIABLE_CI_89_89, ll_backend__proc_gen__STATE_VARIABLE_CLD_194_263, &ll_backend__proc_gen___CLDAfterEvent_245);
              }
#line 833 "proc_gen.m"
              if ((ll_backend__proc_gen__MaybeFailExternalInfo_259 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 834 "proc_gen.m"
                {
#line 835 "proc_gen.m"
                  {
#line 835 "proc_gen.m"
                    ll_backend__proc_gen__TraceFailCode_262 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
#line 834 "proc_gen.m"
                }
#line 833 "proc_gen.m"
              else
#line 831 "proc_gen.m"
                {
#line 831 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__FailExternalInfo_246 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeFailExternalInfo_259, (MR_Integer) 0)));
#line 832 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FailExternalInfo_246, (MR_Integer) 0)));
#line 832 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FailExternalInfo_246, (MR_Integer) 1)));

#line 832 "proc_gen.m"
                  ll_backend__proc_gen__TraceFailCode_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FailExternalInfo_246, (MR_Integer) 2)));
#line 831 "proc_gen.m"
                }
#line 837 "proc_gen.m"
              ll_backend__proc_gen__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_16, (MR_Integer) 0)));
#line 837 "proc_gen.m"
              ll_backend__proc_gen__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_16, (MR_Integer) 1)));
#line 837 "proc_gen.m"
              ll_backend__proc_gen__MaybeTrailSlot_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_16, (MR_Integer) 2)));
#line 837 "proc_gen.m"
              ll_backend__proc_gen__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_16, (MR_Integer) 3)));
#line 837 "proc_gen.m"
              ll_backend__proc_gen__V_304_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_16, (MR_Integer) 4)));
#line 837 "proc_gen.m"
              ll_backend__proc_gen__V_305_305 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_16, (MR_Integer) 5)));
#line 863 "proc_gen.m"
              if ((ll_backend__proc_gen__MaybeTrailSlot_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 864 "proc_gen.m"
                {
#line 865 "proc_gen.m"
                  {
#line 865 "proc_gen.m"
                    ll_backend__proc_gen__DiscardTraceTicketCode_59 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
#line 864 "proc_gen.m"
                  *ll_backend__proc_gen__STATE_VARIABLE_CI_62 = ll_backend__proc_gen__STATE_VARIABLE_CI_89_89;
#line 864 "proc_gen.m"
                }
#line 863 "proc_gen.m"
              else
#line 857 "proc_gen.m"
              if ((ll_backend__proc_gen__V_301_301 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 858 "proc_gen.m"
                {
#line 859 "proc_gen.m"
                  {
#line 859 "proc_gen.m"
                    ll_backend__proc_gen__DiscardTraceTicketCode_59 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[27])));
                  }
#line 858 "proc_gen.m"
                  *ll_backend__proc_gen__STATE_VARIABLE_CI_62 = ll_backend__proc_gen__STATE_VARIABLE_CI_89_89;
#line 858 "proc_gen.m"
                }
#line 857 "proc_gen.m"
              else
#line 842 "proc_gen.m"
                {
#line 842 "proc_gen.m"
                  MR_Integer ll_backend__proc_gen__FromFullSlot_56 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_301_301, (MR_Integer) 0)));
#line 842 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__FromFullSlotLval_57;
#line 842 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__SkipLabel_58;
#line 842 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_95_95;
#line 842 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_96_96;
#line 842 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_97_97;
#line 842 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_98_98;
#line 842 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_100_100;
#line 842 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_101_101;
#line 842 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_103_103;
#line 842 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_107_107;
#line 842 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_108_108;
#line 842 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_109_109;

#line 847 "proc_gen.m"
                  {
#line 847 "proc_gen.m"
                    ll_backend__proc_gen__FromFullSlotLval_57 = ll_backend__llds__stack_slot_num_to_lval_2_f_0((MR_Integer) 1, ll_backend__proc_gen__FromFullSlot_56);
                  }
#line 849 "proc_gen.m"
                  {
#line 849 "proc_gen.m"
                    ll_backend__code_info__get_next_label_3_p_0(&ll_backend__proc_gen__SkipLabel_58, ll_backend__proc_gen__STATE_VARIABLE_CI_89_89, ll_backend__proc_gen__STATE_VARIABLE_CI_62);
                  }
#line 852 "proc_gen.m"
                  {
#line 852 "proc_gen.m"
                    ll_backend__proc_gen__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 852 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_100_100, 0) = ((MR_Box) (ll_backend__proc_gen__FromFullSlotLval_57));
#line 852 "proc_gen.m"
                  }
#line 852 "proc_gen.m"
                  {
#line 852 "proc_gen.m"
                    ll_backend__proc_gen__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 852 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 852 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_98_98, 1) = ((MR_Box) ((MR_Integer) 7));
#line 852 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_98_98, 2) = ((MR_Box) (ll_backend__proc_gen__V_100_100));
#line 852 "proc_gen.m"
                  }
#line 853 "proc_gen.m"
                  {
#line 853 "proc_gen.m"
                    ll_backend__proc_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 853 "proc_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_101_101, 0) = ((MR_Box) (ll_backend__proc_gen__SkipLabel_58));
#line 853 "proc_gen.m"
                  }
#line 852 "proc_gen.m"
                  {
#line 852 "proc_gen.m"
                    ll_backend__proc_gen__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 852 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 852 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_97_97, 1) = ((MR_Box) (ll_backend__proc_gen__V_98_98));
#line 852 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_97_97, 2) = ((MR_Box) (ll_backend__proc_gen__V_101_101));
#line 852 "proc_gen.m"
                  }
#line 851 "proc_gen.m"
                  {
#line 851 "proc_gen.m"
                    ll_backend__proc_gen__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 851 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_96_96, 0) = ((MR_Box) (ll_backend__proc_gen__V_97_97));
#line 851 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_96_96, 1) = ((MR_Box) ((MR_String) ""));
#line 851 "proc_gen.m"
                  }
#line 855 "proc_gen.m"
                  {
#line 855 "proc_gen.m"
                    ll_backend__proc_gen__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 855 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 855 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_109_109, 1) = ((MR_Box) (ll_backend__proc_gen__SkipLabel_58));
#line 855 "proc_gen.m"
                  }
#line 855 "proc_gen.m"
                  {
#line 855 "proc_gen.m"
                    ll_backend__proc_gen__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 855 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_108_108, 0) = ((MR_Box) (ll_backend__proc_gen__V_109_109));
#line 855 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_108_108, 1) = ((MR_Box) ((MR_String) ""));
#line 855 "proc_gen.m"
                  }
#line 856 "proc_gen.m"
                  {
#line 856 "proc_gen.m"
                    ll_backend__proc_gen__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 856 "proc_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_107_107, 0) = ((MR_Box) (ll_backend__proc_gen__V_108_108));
#line 856 "proc_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 856 "proc_gen.m"
                  }
#line 854 "proc_gen.m"
                  {
#line 854 "proc_gen.m"
                    ll_backend__proc_gen__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "proc_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_103_103, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[27]));
#line 854 "proc_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_103_103, 1) = ((MR_Box) (ll_backend__proc_gen__V_107_107));
#line 854 "proc_gen.m"
                  }
#line 853 "proc_gen.m"
                  {
#line 853 "proc_gen.m"
                    ll_backend__proc_gen__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 853 "proc_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_95_95, 0) = ((MR_Box) (ll_backend__proc_gen__V_96_96));
#line 853 "proc_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_95_95, 1) = ((MR_Box) (ll_backend__proc_gen__V_103_103));
#line 853 "proc_gen.m"
                  }
#line 850 "proc_gen.m"
                  {
#line 850 "proc_gen.m"
                    ll_backend__proc_gen__DiscardTraceTicketCode_59 = mercury__cord__from_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__proc_gen__V_95_95);
                  }
#line 842 "proc_gen.m"
                }
#line 5775 "ll_backend.proc_gen.c"
              ll_backend__proc_gen__TypeCtorInfo_324_324 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 867 "proc_gen.m"
              {
#line 867 "proc_gen.m"
                ll_backend__proc_gen__FailCode_254 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_324_324, ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[29])));
              }
#line 871 "proc_gen.m"
              {
#line 871 "proc_gen.m"
                ll_backend__proc_gen__V_121_121 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_324_324, ll_backend__proc_gen__DiscardTraceTicketCode_59, ll_backend__proc_gen__FailCode_254);
              }
#line 871 "proc_gen.m"
              {
#line 871 "proc_gen.m"
                ll_backend__proc_gen__V_120_120 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_324_324, ll_backend__proc_gen__TraceFailCode_262, ll_backend__proc_gen__V_121_121);
              }
#line 871 "proc_gen.m"
              {
#line 871 "proc_gen.m"
                ll_backend__proc_gen__V_119_119 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_324_324, ll_backend__proc_gen__ResumeCode_256, ll_backend__proc_gen__V_120_120);
              }
#line 870 "proc_gen.m"
              {
#line 870 "proc_gen.m"
                ll_backend__proc_gen__V_118_118 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_324_324, ll_backend__proc_gen__ExitCode_253, ll_backend__proc_gen__V_119_119);
              }
#line 870 "proc_gen.m"
              {
#line 870 "proc_gen.m"
                ll_backend__proc_gen__V_117_117 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_324_324, ll_backend__proc_gen__BodyCode_251, ll_backend__proc_gen__V_118_118);
              }
#line 870 "proc_gen.m"
              {
#line 870 "proc_gen.m"
                ll_backend__proc_gen__V_116_116 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_324_324, ll_backend__proc_gen__TraceCallCode_249, ll_backend__proc_gen__V_117_117);
              }
#line 870 "proc_gen.m"
              {
#line 870 "proc_gen.m"
                *ll_backend__proc_gen__Code_17 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_324_324, ll_backend__proc_gen__EntryCode_252, ll_backend__proc_gen__V_116_116);
              }
#line 807 "proc_gen.m"
            }
#line 804 "proc_gen.m"
        }
#line 696 "proc_gen.m"
        break;
#line 696 "proc_gen.m"
      case (MR_Integer) 1:
#line 739 "proc_gen.m"
        {
#line 739 "proc_gen.m"
          MR_Word ll_backend__proc_gen__TypeCtorInfo_316_316;
#line 739 "proc_gen.m"
          MR_Word ll_backend__proc_gen__FailureLiveRegs_36;
#line 739 "proc_gen.m"
          MR_Word ll_backend__proc_gen__FailCode_37;
#line 739 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_125_125;
#line 739 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_134_134;
#line 739 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_135_135;
#line 739 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_136_136;
#line 739 "proc_gen.m"
          MR_Word ll_backend__proc_gen__MaybeTraceInfo_234;

#line 740 "proc_gen.m"
          {
#line 740 "proc_gen.m"
            ll_backend__proc_gen__FailureLiveRegs_36 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[10]))));
          }
#line 5849 "ll_backend.proc_gen.c"
          ll_backend__proc_gen__TypeCtorInfo_316_316 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 743 "proc_gen.m"
          {
#line 743 "proc_gen.m"
            ll_backend__proc_gen__V_136_136 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 743 "proc_gen.m"
            MR_hl_field(MR_mktag(2), ll_backend__proc_gen__V_136_136, 0) = ((MR_Box) (ll_backend__proc_gen__FailureLiveRegs_36));
#line 743 "proc_gen.m"
          }
#line 743 "proc_gen.m"
          {
#line 743 "proc_gen.m"
            ll_backend__proc_gen__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 743 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_135_135, 0) = ((MR_Box) (ll_backend__proc_gen__V_136_136));
#line 743 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_135_135, 1) = ((MR_Box) ((MR_String) ""));
#line 743 "proc_gen.m"
          }
#line 743 "proc_gen.m"
          {
#line 743 "proc_gen.m"
            ll_backend__proc_gen__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_134_134, 0) = ((MR_Box) (ll_backend__proc_gen__V_135_135));
#line 743 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[14])));
#line 743 "proc_gen.m"
          }
#line 742 "proc_gen.m"
          {
#line 742 "proc_gen.m"
            ll_backend__proc_gen__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_125_125, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[11]));
#line 742 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_125_125, 1) = ((MR_Box) (ll_backend__proc_gen__V_134_134));
#line 742 "proc_gen.m"
          }
#line 741 "proc_gen.m"
          {
#line 741 "proc_gen.m"
            ll_backend__proc_gen__FailCode_37 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__V_125_125);
          }
#line 746 "proc_gen.m"
          {
#line 746 "proc_gen.m"
            ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_0_61, &ll_backend__proc_gen__MaybeTraceInfo_234);
          }
#line 788 "proc_gen.m"
          if ((ll_backend__proc_gen__MaybeTraceInfo_234 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 789 "proc_gen.m"
            {
#line 789 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_145_145;
#line 789 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_146_146;
#line 789 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_149_149;
#line 789 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_152_152;
#line 789 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_153_153;
#line 789 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_154_154;
#line 789 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_155_155;
#line 789 "proc_gen.m"
              MR_Word ll_backend__proc_gen__BodyCode_217;
#line 789 "proc_gen.m"
              MR_Word ll_backend__proc_gen__EntryCode_218;
#line 789 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ExitCode_219;
#line 789 "proc_gen.m"
              MR_Word ll_backend__proc_gen__BeforeBody_220;
#line 789 "proc_gen.m"
              MR_Word ll_backend__proc_gen__RestoreDeallocCode_221;
#line 789 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ResumeCode_222;
#line 789 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_194_223;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen___CLDAfterResume_49;

#line 790 "proc_gen.m"
              *ll_backend__proc_gen__MaybeTraceCallLabel_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 791 "proc_gen.m"
              {
#line 791 "proc_gen.m"
                ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CLD_0_63, &ll_backend__proc_gen__BeforeBody_220);
              }
#line 792 "proc_gen.m"
              {
#line 792 "proc_gen.m"
                ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 1, ll_backend__proc_gen__Goal_14, &ll_backend__proc_gen__BodyCode_217, ll_backend__proc_gen__STATE_VARIABLE_CI_0_61, &ll_backend__proc_gen__STATE_VARIABLE_CI_145_145, ll_backend__proc_gen__STATE_VARIABLE_CLD_0_63, &ll_backend__proc_gen__STATE_VARIABLE_CLD_146_146);
              }
#line 793 "proc_gen.m"
              {
#line 793 "proc_gen.m"
                ll_backend__proc_gen__generate_entry_6_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_145_145, (MR_Integer) 1, ll_backend__proc_gen__Goal_14, ll_backend__proc_gen__ResumePoint_15, ll_backend__proc_gen__ProcFrameSlots_19, &ll_backend__proc_gen__EntryCode_218);
              }
#line 795 "proc_gen.m"
              {
#line 795 "proc_gen.m"
                ll_backend__proc_gen__generate_exit_9_p_0((MR_Integer) 1, *ll_backend__proc_gen__ProcFrameSlots_19, ll_backend__proc_gen__TraceSlotInfo_16, ll_backend__proc_gen__ProcContext_13, &ll_backend__proc_gen__RestoreDeallocCode_221, &ll_backend__proc_gen__ExitCode_219, ll_backend__proc_gen__STATE_VARIABLE_CI_145_145, &ll_backend__proc_gen__STATE_VARIABLE_CI_149_149, ll_backend__proc_gen__STATE_VARIABLE_CLD_146_146);
              }
#line 797 "proc_gen.m"
              {
#line 797 "proc_gen.m"
                ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__proc_gen__BeforeBody_220, ll_backend__proc_gen__STATE_VARIABLE_CI_149_149, &ll_backend__proc_gen__STATE_VARIABLE_CLD_194_223);
              }
#line 798 "proc_gen.m"
              {
#line 798 "proc_gen.m"
                ll_backend__code_loc_dep__generate_resume_point_6_p_0(ll_backend__proc_gen__ResumePoint_15, &ll_backend__proc_gen__ResumeCode_222, ll_backend__proc_gen__STATE_VARIABLE_CI_149_149, ll_backend__proc_gen__STATE_VARIABLE_CI_62, ll_backend__proc_gen__STATE_VARIABLE_CLD_194_223, &ll_backend__proc_gen___CLDAfterResume_49);
              }
#line 801 "proc_gen.m"
              {
#line 801 "proc_gen.m"
                ll_backend__proc_gen__V_155_155 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__RestoreDeallocCode_221, ll_backend__proc_gen__FailCode_37);
              }
#line 800 "proc_gen.m"
              {
#line 800 "proc_gen.m"
                ll_backend__proc_gen__V_154_154 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__ResumeCode_222, ll_backend__proc_gen__V_155_155);
              }
#line 800 "proc_gen.m"
              {
#line 800 "proc_gen.m"
                ll_backend__proc_gen__V_153_153 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__ExitCode_219, ll_backend__proc_gen__V_154_154);
              }
#line 800 "proc_gen.m"
              {
#line 800 "proc_gen.m"
                ll_backend__proc_gen__V_152_152 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__BodyCode_217, ll_backend__proc_gen__V_153_153);
              }
#line 800 "proc_gen.m"
              {
#line 800 "proc_gen.m"
                *ll_backend__proc_gen__Code_17 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__EntryCode_218, ll_backend__proc_gen__V_152_152);
              }
#line 789 "proc_gen.m"
            }
#line 788 "proc_gen.m"
          else
#line 748 "proc_gen.m"
            {
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__BeforeBody_38;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__RestoreDeallocCode_39;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ResumeCode_40;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ResumeVarList_41;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ResumeVars_42;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__MaybeFailExternalInfo_43;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TraceFailCode_48;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_156_156;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_157_157;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_163_163;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_164_164;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_167_167;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_168_168;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_169_169;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_170_170;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_174_174;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_175_175;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_176_176;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_177_177;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_178_178;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_179_179;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_180_180;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TraceInfo_207 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTraceInfo_234, (MR_Integer) 0)));
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TraceCallCode_208;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__MaybeTailRecInfo_209;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TailRecLabelCode_212;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__BodyCode_213;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__EntryCode_214;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ExitCode_215;
#line 748 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_194_216;
#line 775 "proc_gen.m"
              MR_Word ll_backend__proc_gen___CLDAfterEvent_44;

#line 749 "proc_gen.m"
              {
#line 749 "proc_gen.m"
                ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CLD_0_63, &ll_backend__proc_gen__BeforeBody_38);
              }
#line 750 "proc_gen.m"
              {
#line 750 "proc_gen.m"
                ll_backend__proc_gen__generate_call_event_8_p_0(ll_backend__proc_gen__TraceInfo_207, ll_backend__proc_gen__ProcContext_13, ll_backend__proc_gen__MaybeTraceCallLabel_18, &ll_backend__proc_gen__TraceCallCode_208, ll_backend__proc_gen__STATE_VARIABLE_CI_0_61, &ll_backend__proc_gen__STATE_VARIABLE_CI_156_156, ll_backend__proc_gen__STATE_VARIABLE_CLD_0_63, &ll_backend__proc_gen__STATE_VARIABLE_CLD_157_157);
              }
#line 752 "proc_gen.m"
              {
#line 752 "proc_gen.m"
                ll_backend__trace_gen__get_trace_maybe_tail_rec_info_2_p_0(ll_backend__proc_gen__TraceInfo_207, &ll_backend__proc_gen__MaybeTailRecInfo_209);
              }
#line 758 "proc_gen.m"
              if ((ll_backend__proc_gen__MaybeTailRecInfo_209 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 760 "proc_gen.m"
                {
#line 760 "proc_gen.m"
                  ll_backend__proc_gen__TailRecLabelCode_212 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316);
                }
#line 758 "proc_gen.m"
              else
#line 754 "proc_gen.m"
                {
#line 754 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTailRecInfo_209, (MR_Integer) 0)));
#line 754 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_159_159;
#line 754 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_160_160;
#line 754 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__TailRecLabel_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_158_158, (MR_Integer) 1)));
#line 754 "proc_gen.m"
                  MR_Word ll_backend__proc_gen___TailRecLval_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_158_158, (MR_Integer) 0)));

#line 756 "proc_gen.m"
                  {
#line 756 "proc_gen.m"
                    ll_backend__proc_gen__V_160_160 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 756 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_160_160, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 756 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_160_160, 1) = ((MR_Box) (ll_backend__proc_gen__TailRecLabel_204));
#line 756 "proc_gen.m"
                  }
#line 756 "proc_gen.m"
                  {
#line 756 "proc_gen.m"
                    ll_backend__proc_gen__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 756 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_159_159, 0) = ((MR_Box) (ll_backend__proc_gen__V_160_160));
#line 756 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_159_159, 1) = ((MR_Box) ((MR_String) "tail recursion label"));
#line 756 "proc_gen.m"
                  }
#line 755 "proc_gen.m"
                  {
#line 755 "proc_gen.m"
                    ll_backend__proc_gen__TailRecLabelCode_212 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ((MR_Box) (ll_backend__proc_gen__V_159_159)));
                  }
#line 754 "proc_gen.m"
                }
#line 762 "proc_gen.m"
              {
#line 762 "proc_gen.m"
                ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 1, ll_backend__proc_gen__Goal_14, &ll_backend__proc_gen__BodyCode_213, ll_backend__proc_gen__STATE_VARIABLE_CI_156_156, &ll_backend__proc_gen__STATE_VARIABLE_CI_163_163, ll_backend__proc_gen__STATE_VARIABLE_CLD_157_157, &ll_backend__proc_gen__STATE_VARIABLE_CLD_164_164);
              }
#line 763 "proc_gen.m"
              {
#line 763 "proc_gen.m"
                ll_backend__proc_gen__generate_entry_6_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_163_163, (MR_Integer) 1, ll_backend__proc_gen__Goal_14, ll_backend__proc_gen__ResumePoint_15, ll_backend__proc_gen__ProcFrameSlots_19, &ll_backend__proc_gen__EntryCode_214);
              }
#line 765 "proc_gen.m"
              {
#line 765 "proc_gen.m"
                ll_backend__proc_gen__generate_exit_9_p_0((MR_Integer) 1, *ll_backend__proc_gen__ProcFrameSlots_19, ll_backend__proc_gen__TraceSlotInfo_16, ll_backend__proc_gen__ProcContext_13, &ll_backend__proc_gen__RestoreDeallocCode_39, &ll_backend__proc_gen__ExitCode_215, ll_backend__proc_gen__STATE_VARIABLE_CI_163_163, &ll_backend__proc_gen__STATE_VARIABLE_CI_167_167, ll_backend__proc_gen__STATE_VARIABLE_CLD_164_164);
              }
#line 768 "proc_gen.m"
              {
#line 768 "proc_gen.m"
                ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__proc_gen__BeforeBody_38, ll_backend__proc_gen__STATE_VARIABLE_CI_167_167, &ll_backend__proc_gen__STATE_VARIABLE_CLD_168_168);
              }
#line 769 "proc_gen.m"
              {
#line 769 "proc_gen.m"
                ll_backend__code_loc_dep__generate_resume_point_6_p_0(ll_backend__proc_gen__ResumePoint_15, &ll_backend__proc_gen__ResumeCode_40, ll_backend__proc_gen__STATE_VARIABLE_CI_167_167, &ll_backend__proc_gen__STATE_VARIABLE_CI_169_169, ll_backend__proc_gen__STATE_VARIABLE_CLD_168_168, &ll_backend__proc_gen__STATE_VARIABLE_CLD_170_170);
              }
#line 770 "proc_gen.m"
              {
#line 770 "proc_gen.m"
                ll_backend__code_loc_dep__resume_point_vars_2_p_0(ll_backend__proc_gen__ResumePoint_15, &ll_backend__proc_gen__ResumeVarList_41);
              }
#line 771 "proc_gen.m"
              {
#line 771 "proc_gen.m"
                ll_backend__proc_gen__ResumeVars_42 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__proc_gen__ResumeVarList_41);
              }
#line 772 "proc_gen.m"
              {
#line 772 "proc_gen.m"
                ll_backend__code_loc_dep__set_forward_live_vars_3_p_0(ll_backend__proc_gen__ResumeVars_42, ll_backend__proc_gen__STATE_VARIABLE_CLD_170_170, &ll_backend__proc_gen__STATE_VARIABLE_CLD_194_216);
              }
#line 775 "proc_gen.m"
              {
#line 775 "proc_gen.m"
                ll_backend__trace_gen__generate_external_event_code_8_p_0((MR_Integer) 2, ll_backend__proc_gen__TraceInfo_207, ll_backend__proc_gen__ProcContext_13, &ll_backend__proc_gen__MaybeFailExternalInfo_43, ll_backend__proc_gen__STATE_VARIABLE_CI_169_169, ll_backend__proc_gen__STATE_VARIABLE_CI_62, ll_backend__proc_gen__STATE_VARIABLE_CLD_194_216, &ll_backend__proc_gen___CLDAfterEvent_44);
              }
#line 781 "proc_gen.m"
              if ((ll_backend__proc_gen__MaybeFailExternalInfo_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 783 "proc_gen.m"
                {
#line 783 "proc_gen.m"
                  ll_backend__proc_gen__TraceFailCode_48 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316);
                }
#line 781 "proc_gen.m"
              else
#line 779 "proc_gen.m"
                {
#line 779 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__FailExternalInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeFailExternalInfo_43, (MR_Integer) 0)));
#line 780 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FailExternalInfo_45, (MR_Integer) 0)));
#line 780 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FailExternalInfo_45, (MR_Integer) 1)));

#line 780 "proc_gen.m"
                  ll_backend__proc_gen__TraceFailCode_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FailExternalInfo_45, (MR_Integer) 2)));
#line 779 "proc_gen.m"
                }
#line 787 "proc_gen.m"
              {
#line 787 "proc_gen.m"
                ll_backend__proc_gen__V_180_180 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__RestoreDeallocCode_39, ll_backend__proc_gen__FailCode_37);
              }
#line 786 "proc_gen.m"
              {
#line 786 "proc_gen.m"
                ll_backend__proc_gen__V_179_179 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__TraceFailCode_48, ll_backend__proc_gen__V_180_180);
              }
#line 786 "proc_gen.m"
              {
#line 786 "proc_gen.m"
                ll_backend__proc_gen__V_178_178 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__ResumeCode_40, ll_backend__proc_gen__V_179_179);
              }
#line 786 "proc_gen.m"
              {
#line 786 "proc_gen.m"
                ll_backend__proc_gen__V_177_177 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__ExitCode_215, ll_backend__proc_gen__V_178_178);
              }
#line 786 "proc_gen.m"
              {
#line 786 "proc_gen.m"
                ll_backend__proc_gen__V_176_176 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__BodyCode_213, ll_backend__proc_gen__V_177_177);
              }
#line 785 "proc_gen.m"
              {
#line 785 "proc_gen.m"
                ll_backend__proc_gen__V_175_175 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__TailRecLabelCode_212, ll_backend__proc_gen__V_176_176);
              }
#line 785 "proc_gen.m"
              {
#line 785 "proc_gen.m"
                ll_backend__proc_gen__V_174_174 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__TraceCallCode_208, ll_backend__proc_gen__V_175_175);
              }
#line 785 "proc_gen.m"
              {
#line 785 "proc_gen.m"
                *ll_backend__proc_gen__Code_17 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__EntryCode_214, ll_backend__proc_gen__V_174_174);
              }
#line 748 "proc_gen.m"
            }
#line 739 "proc_gen.m"
        }
#line 696 "proc_gen.m"
        break;
#line 696 "proc_gen.m"
    }
#line 696 "proc_gen.m"
  }
#line 687 "proc_gen.m"
}

#line 602 "proc_gen.m"
static MR_Word MR_CALL 
ll_backend__proc_gen__maybe_generate_deep_prof_info_2_f_0(
#line 602 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcInfo_4,
#line 602 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HLDSDeepInfo_5)
#line 602 "proc_gen.m"
{
#line 605 "proc_gen.m"
  {
#line 605 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 605 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeDeepProfInfo_6;
#line 605 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeHLDSDeepLayout_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSDeepInfo_5, (MR_Integer) 1)));
#line 605 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSDeepInfo_5, (MR_Integer) 2)));
#line 606 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSDeepInfo_5, (MR_Integer) 0)));

#line 636 "proc_gen.m"
    if ((ll_backend__proc_gen__MaybeHLDSDeepLayout_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 638 "proc_gen.m"
      ll_backend__proc_gen__MaybeDeepProfInfo_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 636 "proc_gen.m"
    else
#line 608 "proc_gen.m"
      {
#line 608 "proc_gen.m"
        MR_Word ll_backend__proc_gen__HLDSDeepLayout_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeHLDSDeepLayout_7, (MR_Integer) 0)));
#line 608 "proc_gen.m"
        MR_Word ll_backend__proc_gen__HLDSProcStatic_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSDeepLayout_8, (MR_Integer) 0)));
#line 608 "proc_gen.m"
        MR_Word ll_backend__proc_gen__HLDSExcpVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSDeepLayout_8, (MR_Integer) 1)));
#line 608 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TopCSDVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSExcpVars_10, (MR_Integer) 0)));
#line 608 "proc_gen.m"
        MR_Word ll_backend__proc_gen__MiddleCSDVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSExcpVars_10, (MR_Integer) 1)));
#line 608 "proc_gen.m"
        MR_Word ll_backend__proc_gen__MaybeOldOutermostVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSExcpVars_10, (MR_Integer) 2)));
#line 608 "proc_gen.m"
        MR_Word ll_backend__proc_gen__StackSlots_15;
#line 608 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__TopCSDSlotNum_17;
#line 608 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__MiddleCSDSlotNum_19;
#line 608 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__OldOutermostSlotNum_22;
#line 608 "proc_gen.m"
        MR_Word ll_backend__proc_gen__DeepExcpSlots_23;
#line 608 "proc_gen.m"
        MR_Word ll_backend__proc_gen__DeepProfInfo_24;
#line 614 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TopCSDSlot_16;
#line 614 "proc_gen.m"
        MR_Box ll_backend__proc_gen__conv0_TopCSDSlot_16;

#line 613 "proc_gen.m"
        {
#line 613 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ll_backend__proc_gen__ProcInfo_4, &ll_backend__proc_gen__StackSlots_15);
        }
#line 614 "proc_gen.m"
        {
#line 614 "proc_gen.m"
          ll_backend__proc_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ll_backend__proc_gen__StackSlots_15, ((MR_Box) (ll_backend__proc_gen__TopCSDVar_12)), &ll_backend__proc_gen__conv0_TopCSDSlot_16);
        }
#line 614 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 614 "proc_gen.m"
          {
#line 614 "proc_gen.m"
            ll_backend__proc_gen__TopCSDSlot_16 = ((MR_Word) ll_backend__proc_gen__conv0_TopCSDSlot_16);
#line 614 "proc_gen.m"
            ll_backend__proc_gen__succeeded = MR_TRUE;
#line 614 "proc_gen.m"
          }
#line 614 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 615 "proc_gen.m"
          {
#line 615 "proc_gen.m"
            MR_Word ll_backend__proc_gen__TypeInfo_31_31;
#line 615 "proc_gen.m"
            MR_Word ll_backend__proc_gen__TypeCtorInfo_32_32;
#line 615 "proc_gen.m"
            MR_Word ll_backend__proc_gen__MiddleCSDSlot_18;
#line 616 "proc_gen.m"
            MR_Box ll_backend__proc_gen__conv1_MiddleCSDSlot_18;

#line 615 "proc_gen.m"
            {
#line 615 "proc_gen.m"
              ll_backend__proc_gen__TopCSDSlotNum_17 = hlds__hlds_llds__stack_slot_num_1_f_0(ll_backend__proc_gen__TopCSDSlot_16);
            }
#line 6341 "ll_backend.proc_gen.c"
            ll_backend__proc_gen__TypeInfo_31_31 = (MR_Word) &ll_backend__proc_gen_scalar_common_1[0];
#line 6343 "ll_backend.proc_gen.c"
            ll_backend__proc_gen__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0;
#line 616 "proc_gen.m"
            {
#line 616 "proc_gen.m"
              mercury__map__lookup_3_p_0(ll_backend__proc_gen__TypeInfo_31_31, ll_backend__proc_gen__TypeCtorInfo_32_32, ll_backend__proc_gen__StackSlots_15, ((MR_Box) (ll_backend__proc_gen__MiddleCSDVar_13)), &ll_backend__proc_gen__conv1_MiddleCSDSlot_18);
            }
#line 616 "proc_gen.m"
            ll_backend__proc_gen__MiddleCSDSlot_18 = ((MR_Word) ll_backend__proc_gen__conv1_MiddleCSDSlot_18);
#line 617 "proc_gen.m"
            {
#line 617 "proc_gen.m"
              ll_backend__proc_gen__MiddleCSDSlotNum_19 = hlds__hlds_llds__stack_slot_num_1_f_0(ll_backend__proc_gen__MiddleCSDSlot_18);
            }
#line 622 "proc_gen.m"
            if ((ll_backend__proc_gen__MaybeOldOutermostVar_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 624 "proc_gen.m"
              ll_backend__proc_gen__OldOutermostSlotNum_22 = (MR_Integer) -1;
#line 622 "proc_gen.m"
            else
#line 619 "proc_gen.m"
              {
#line 619 "proc_gen.m"
                MR_Word ll_backend__proc_gen__OldOutermostVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeOldOutermostVar_14, (MR_Integer) 0)));
#line 619 "proc_gen.m"
                MR_Word ll_backend__proc_gen__OldOutermostSlot_21;
#line 620 "proc_gen.m"
                MR_Box ll_backend__proc_gen__conv2_OldOutermostSlot_21;

#line 620 "proc_gen.m"
                {
#line 620 "proc_gen.m"
                  mercury__map__lookup_3_p_0(ll_backend__proc_gen__TypeInfo_31_31, ll_backend__proc_gen__TypeCtorInfo_32_32, ll_backend__proc_gen__StackSlots_15, ((MR_Box) (ll_backend__proc_gen__OldOutermostVar_20)), &ll_backend__proc_gen__conv2_OldOutermostSlot_21);
                }
#line 620 "proc_gen.m"
                ll_backend__proc_gen__OldOutermostSlot_21 = ((MR_Word) ll_backend__proc_gen__conv2_OldOutermostSlot_21);
#line 621 "proc_gen.m"
                {
#line 621 "proc_gen.m"
                  ll_backend__proc_gen__OldOutermostSlotNum_22 = hlds__hlds_llds__stack_slot_num_1_f_0(ll_backend__proc_gen__OldOutermostSlot_21);
                }
#line 619 "proc_gen.m"
              }
#line 615 "proc_gen.m"
          }
#line 614 "proc_gen.m"
        else
#line 627 "proc_gen.m"
          {
#line 627 "proc_gen.m"
            ll_backend__proc_gen__TopCSDSlotNum_17 = (MR_Integer) -1;
#line 628 "proc_gen.m"
            ll_backend__proc_gen__MiddleCSDSlotNum_19 = (MR_Integer) -1;
#line 629 "proc_gen.m"
            ll_backend__proc_gen__OldOutermostSlotNum_22 = (MR_Integer) -1;
#line 627 "proc_gen.m"
          }
#line 631 "proc_gen.m"
        {
#line 631 "proc_gen.m"
          ll_backend__proc_gen__DeepExcpSlots_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 631 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__DeepExcpSlots_23, 0) = ((MR_Box) (ll_backend__proc_gen__TopCSDSlotNum_17));
#line 631 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__DeepExcpSlots_23, 1) = ((MR_Box) (ll_backend__proc_gen__MiddleCSDSlotNum_19));
#line 631 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__DeepExcpSlots_23, 2) = ((MR_Box) (ll_backend__proc_gen__OldOutermostSlotNum_22));
#line 631 "proc_gen.m"
        }
#line 633 "proc_gen.m"
        {
#line 633 "proc_gen.m"
          ll_backend__proc_gen__DeepProfInfo_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 633 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__DeepProfInfo_24, 0) = ((MR_Box) (ll_backend__proc_gen__HLDSProcStatic_9));
#line 633 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__DeepProfInfo_24, 1) = ((MR_Box) (ll_backend__proc_gen__DeepExcpSlots_23));
#line 633 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__DeepProfInfo_24, 2) = ((MR_Box) (ll_backend__proc_gen__V_26_26));
#line 633 "proc_gen.m"
        }
#line 635 "proc_gen.m"
        {
#line 635 "proc_gen.m"
          ll_backend__proc_gen__MaybeDeepProfInfo_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 635 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeDeepProfInfo_6, 0) = ((MR_Box) (ll_backend__proc_gen__DeepProfInfo_24));
#line 635 "proc_gen.m"
        }
#line 608 "proc_gen.m"
      }
#line 605 "proc_gen.m"
    return ll_backend__proc_gen__MaybeDeepProfInfo_6;
#line 605 "proc_gen.m"
  }
#line 602 "proc_gen.m"
}

#line 574 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__maybe_set_trace_level_3_p_0(
#line 574 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredInfo_4,
#line 574 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_15,
#line 574 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_16)
#line 574 "proc_gen.m"
{
#line 577 "proc_gen.m"
  {
#line 577 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 577 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Globals0_6;
#line 580 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredModule_7;
#line 580 "proc_gen.m"
    MR_String ll_backend__proc_gen__PredName_8;
#line 580 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__PredArity_9;

#line 578 "proc_gen.m"
    {
#line 578 "proc_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_15, &ll_backend__proc_gen__Globals0_6);
    }
#line 580 "proc_gen.m"
    {
#line 580 "proc_gen.m"
      ll_backend__proc_gen__PredModule_7 = hlds__hlds_pred__pred_info_module_1_f_0(ll_backend__proc_gen__PredInfo_4);
    }
#line 581 "proc_gen.m"
    {
#line 581 "proc_gen.m"
      ll_backend__proc_gen__PredName_8 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__proc_gen__PredInfo_4);
    }
#line 582 "proc_gen.m"
    {
#line 582 "proc_gen.m"
      ll_backend__proc_gen__PredArity_9 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(ll_backend__proc_gen__PredInfo_4);
    }
#line 583 "proc_gen.m"
    {
#line 583 "proc_gen.m"
      ll_backend__proc_gen__succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(ll_backend__proc_gen__PredModule_7, ll_backend__proc_gen__PredName_8, ll_backend__proc_gen__PredArity_9);
    }
#line 579 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 589 "proc_gen.m"
      {
#line 589 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Globals1_10;

#line 589 "proc_gen.m"
        {
#line 589 "proc_gen.m"
          libs__globals__set_trace_level_none_2_p_0(ll_backend__proc_gen__Globals0_6, &ll_backend__proc_gen__Globals1_10);
        }
#line 590 "proc_gen.m"
        {
#line 590 "proc_gen.m"
          hlds__hlds_module__module_info_set_globals_3_p_0(ll_backend__proc_gen__Globals1_10, ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_15, ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_16);
        }
#line 589 "proc_gen.m"
      }
#line 579 "proc_gen.m"
    else
#line 591 "proc_gen.m"
      {
#line 592 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_22_22;
#line 592 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_25_25;
#line 592 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_26_26;

#line 592 "proc_gen.m"
        {
#line 592 "proc_gen.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(ll_backend__proc_gen__PredInfo_4, &ll_backend__proc_gen__V_22_22);
        }
#line 592 "proc_gen.m"
        ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__V_22_22)) == (MR_mktag((MR_Integer) 0)));
#line 592 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 592 "proc_gen.m"
          {
#line 592 "proc_gen.m"
            ll_backend__proc_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_22_22, (MR_Integer) 0)));
#line 592 "proc_gen.m"
            ll_backend__proc_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_22_22, (MR_Integer) 1)));
#line 594 "proc_gen.m"
            {
#line 594 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TraceLevel_13;
#line 594 "proc_gen.m"
              MR_Word ll_backend__proc_gen__UC_TraceLevel_14;
#line 594 "proc_gen.m"
              MR_Word ll_backend__proc_gen__Globals1_20;

#line 594 "proc_gen.m"
              {
#line 594 "proc_gen.m"
                libs__globals__get_trace_level_2_p_0(ll_backend__proc_gen__Globals0_6, &ll_backend__proc_gen__TraceLevel_13);
              }
#line 595 "proc_gen.m"
              {
#line 595 "proc_gen.m"
                ll_backend__proc_gen__UC_TraceLevel_14 = libs__trace_params__trace_level_for_unify_compare_1_f_0(ll_backend__proc_gen__TraceLevel_13);
              }
#line 596 "proc_gen.m"
              {
#line 596 "proc_gen.m"
                libs__globals__set_trace_level_3_p_0(ll_backend__proc_gen__UC_TraceLevel_14, ll_backend__proc_gen__Globals0_6, &ll_backend__proc_gen__Globals1_20);
              }
#line 597 "proc_gen.m"
              {
#line 597 "proc_gen.m"
                hlds__hlds_module__module_info_set_globals_3_p_0(ll_backend__proc_gen__Globals1_20, ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_15, ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_16);
              }
#line 594 "proc_gen.m"
            }
#line 592 "proc_gen.m"
          }
#line 592 "proc_gen.m"
        else
#line 591 "proc_gen.m"
          *ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_16 = ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_15;
#line 591 "proc_gen.m"
      }
#line 577 "proc_gen.m"
  }
#line 574 "proc_gen.m"
}

#line 297 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_proc_list_code_9_p_0(
#line 297 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_1,
#line 297 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_2,
#line 297 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_3,
#line 297 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredInfo_4,
#line 297 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__5_5,
#line 297 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_6,
#line 297 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_7,
#line 297 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_8,
#line 297 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_9)
#line 297 "proc_gen.m"
{
#line 302 "proc_gen.m"
  while (MR_TRUE)
#line 302 "proc_gen.m"
    {
#line 302 "proc_gen.m"
      /* tailcall optimized into a loop */
#line 302 "proc_gen.m"
      {
#line 302 "proc_gen.m"
        MR_bool ll_backend__proc_gen__succeeded;

#line 302 "proc_gen.m"
        if ((ll_backend__proc_gen__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 302 "proc_gen.m"
          {
#line 302 "proc_gen.m"
            *ll_backend__proc_gen__STATE_VARIABLE_GlobalData_9 = ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_8;
#line 302 "proc_gen.m"
            *ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_7 = ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_6;
#line 302 "proc_gen.m"
          }
#line 302 "proc_gen.m"
        else
#line 304 "proc_gen.m"
          {
#line 304 "proc_gen.m"
            MR_Integer ll_backend__proc_gen__ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__5_5, (MR_Integer) 0)));
#line 304 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ProcIds_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__5_5, (MR_Integer) 1)));
#line 304 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ProcInfos_28;
#line 304 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ProcInfo_29;
#line 304 "proc_gen.m"
            MR_Word ll_backend__proc_gen__CProc_30;
#line 304 "proc_gen.m"
            MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_35;
#line 304 "proc_gen.m"
            MR_Word ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_36_36;
#line 306 "proc_gen.m"
            MR_Box ll_backend__proc_gen__conv0_ProcInfo_29;

#line 305 "proc_gen.m"
            {
#line 305 "proc_gen.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(ll_backend__proc_gen__PredInfo_4, &ll_backend__proc_gen__ProcInfos_28);
            }
#line 306 "proc_gen.m"
            {
#line 306 "proc_gen.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ll_backend__proc_gen__ProcInfos_28, ll_backend__proc_gen__ProcId_24, &ll_backend__proc_gen__conv0_ProcInfo_29);
            }
#line 306 "proc_gen.m"
            ll_backend__proc_gen__ProcInfo_29 = ((MR_Word) ll_backend__proc_gen__conv0_ProcInfo_29);
#line 307 "proc_gen.m"
            {
#line 307 "proc_gen.m"
              ll_backend__proc_gen__generate_proc_code_9_p_0(ll_backend__proc_gen__ModuleInfo_1, ll_backend__proc_gen__ConstStructMap_2, ll_backend__proc_gen__PredId_3, ll_backend__proc_gen__PredInfo_4, ll_backend__proc_gen__ProcId_24, ll_backend__proc_gen__ProcInfo_29, &ll_backend__proc_gen__CProc_30, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_8, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_35);
            }
#line 309 "proc_gen.m"
            {
#line 309 "proc_gen.m"
              ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_36_36 = mercury__cord__snoc_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0, ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_6, ((MR_Box) (ll_backend__proc_gen__CProc_30)));
            }
#line 310 "proc_gen.m"
            /* direct tailcall eliminated */
#line 310 "proc_gen.m"
            {
#line 310 "proc_gen.m"
              MR_Word ll_backend__proc_gen__HeadVar__5__tmp_copy_5 = ll_backend__proc_gen__ProcIds_25;
#line 310 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0__tmp_copy_6 = ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_36_36;
#line 310 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0__tmp_copy_8 = ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_35;

#line 310 "proc_gen.m"
              ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_8 = ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0__tmp_copy_8;
#line 310 "proc_gen.m"
              ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_6 = ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0__tmp_copy_6;
#line 310 "proc_gen.m"
              ll_backend__proc_gen__HeadVar__5_5 = ll_backend__proc_gen__HeadVar__5__tmp_copy_5;
#line 310 "proc_gen.m"
            }
#line 310 "proc_gen.m"
            continue;
#line 304 "proc_gen.m"
          }
#line 302 "proc_gen.m"
      }
#line 302 "proc_gen.m"
      break;
#line 302 "proc_gen.m"
    }
#line 297 "proc_gen.m"
}

#line 271 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_pred_code_par_7_p_0(
#line 271 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_8,
#line 271 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_9,
#line 271 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_10,
#line 271 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_16,
#line 271 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_17,
#line 271 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_18,
#line 271 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_19)
#line 271 "proc_gen.m"
{
#line 276 "proc_gen.m"
  {
#line 276 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 276 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredInfos_13;
#line 276 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredInfo_14;
#line 276 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcIds_15;
#line 278 "proc_gen.m"
    MR_Box ll_backend__proc_gen__conv0_PredInfo_14;

#line 277 "proc_gen.m"
    {
#line 277 "proc_gen.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(ll_backend__proc_gen__ModuleInfo_8, &ll_backend__proc_gen__PredInfos_13);
    }
#line 278 "proc_gen.m"
    {
#line 278 "proc_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ll_backend__proc_gen__PredInfos_13, ((MR_Box) (ll_backend__proc_gen__PredId_10)), &ll_backend__proc_gen__conv0_PredInfo_14);
    }
#line 278 "proc_gen.m"
    ll_backend__proc_gen__PredInfo_14 = ((MR_Word) ll_backend__proc_gen__conv0_PredInfo_14);
#line 279 "proc_gen.m"
    {
#line 279 "proc_gen.m"
      ll_backend__proc_gen__ProcIds_15 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(ll_backend__proc_gen__PredInfo_14);
    }
#line 292 "proc_gen.m"
    {
#line 292 "proc_gen.m"
      ll_backend__proc_gen__generate_proc_list_code_9_p_0(ll_backend__proc_gen__ModuleInfo_8, ll_backend__proc_gen__ConstStructMap_9, ll_backend__proc_gen__PredId_10, ll_backend__proc_gen__PredInfo_14, ll_backend__proc_gen__ProcIds_15, ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_16, ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_17, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_18, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_19);
    }
#line 276 "proc_gen.m"
  }
#line 271 "proc_gen.m"
}

#line 234 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_pred_code_seq_9_p_0(
#line 234 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_10,
#line 234 "proc_gen.m"
  MR_Word ll_backend__proc_gen__VeryVerbose_11,
#line 234 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Statistics_12,
#line 234 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_13,
#line 234 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_14,
#line 234 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_23,
#line 234 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_24,
#line 234 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_25,
#line 234 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_26)
#line 234 "proc_gen.m"
{
#line 240 "proc_gen.m"
  {
#line 240 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 240 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredInfos_17;
#line 240 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredInfo_18;
#line 240 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcIds_19;
#line 246 "proc_gen.m"
    MR_Box ll_backend__proc_gen__conv0_PredInfo_18;

#line 245 "proc_gen.m"
    {
#line 245 "proc_gen.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(ll_backend__proc_gen__ModuleInfo_10, &ll_backend__proc_gen__PredInfos_17);
    }
#line 246 "proc_gen.m"
    {
#line 246 "proc_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ll_backend__proc_gen__PredInfos_17, ((MR_Box) (ll_backend__proc_gen__PredId_14)), &ll_backend__proc_gen__conv0_PredInfo_18);
    }
#line 246 "proc_gen.m"
    ll_backend__proc_gen__PredInfo_18 = ((MR_Word) ll_backend__proc_gen__conv0_PredInfo_18);
#line 247 "proc_gen.m"
    {
#line 247 "proc_gen.m"
      ll_backend__proc_gen__ProcIds_19 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(ll_backend__proc_gen__PredInfo_18);
    }
#line 250 "proc_gen.m"
    if ((ll_backend__proc_gen__ProcIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 249 "proc_gen.m"
      {
#line 249 "proc_gen.m"
        *ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_24 = ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_23;
#line 249 "proc_gen.m"
        *ll_backend__proc_gen__STATE_VARIABLE_GlobalData_26 = ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_25;
#line 249 "proc_gen.m"
      }
#line 250 "proc_gen.m"
    else
#line 264 "proc_gen.m"
#line 264 "proc_gen.m"
      switch (ll_backend__proc_gen__VeryVerbose_11) {
#line 264 "proc_gen.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 264 "proc_gen.m"
        case (MR_Integer) 0:
#line 304 "proc_gen.m"
          {
#line 304 "proc_gen.m"
            MR_Integer ll_backend__proc_gen__ProcId_81 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__ProcIds_19, (MR_Integer) 0)));
#line 304 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ProcIds_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__ProcIds_19, (MR_Integer) 1)));
#line 304 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ProcInfos_85;
#line 304 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ProcInfo_86;
#line 304 "proc_gen.m"
            MR_Word ll_backend__proc_gen__CProc_87;
#line 304 "proc_gen.m"
            MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_92;
#line 304 "proc_gen.m"
            MR_Word ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_36_93;
#line 306 "proc_gen.m"
            MR_Box ll_backend__proc_gen__conv1_ProcInfo_86;

#line 305 "proc_gen.m"
            {
#line 305 "proc_gen.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(ll_backend__proc_gen__PredInfo_18, &ll_backend__proc_gen__ProcInfos_85);
            }
#line 306 "proc_gen.m"
            {
#line 306 "proc_gen.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ll_backend__proc_gen__ProcInfos_85, ll_backend__proc_gen__ProcId_81, &ll_backend__proc_gen__conv1_ProcInfo_86);
            }
#line 306 "proc_gen.m"
            ll_backend__proc_gen__ProcInfo_86 = ((MR_Word) ll_backend__proc_gen__conv1_ProcInfo_86);
#line 307 "proc_gen.m"
            {
#line 307 "proc_gen.m"
              ll_backend__proc_gen__generate_proc_code_9_p_0(ll_backend__proc_gen__ModuleInfo_10, ll_backend__proc_gen__ConstStructMap_13, ll_backend__proc_gen__PredId_14, ll_backend__proc_gen__PredInfo_18, ll_backend__proc_gen__ProcId_81, ll_backend__proc_gen__ProcInfo_86, &ll_backend__proc_gen__CProc_87, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_25, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_92);
            }
#line 309 "proc_gen.m"
            {
#line 309 "proc_gen.m"
              ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_36_93 = mercury__cord__snoc_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0, ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_23, ((MR_Box) (ll_backend__proc_gen__CProc_87)));
            }
#line 310 "proc_gen.m"
            {
#line 310 "proc_gen.m"
              ll_backend__proc_gen__generate_proc_list_code_9_p_0(ll_backend__proc_gen__ModuleInfo_10, ll_backend__proc_gen__ConstStructMap_13, ll_backend__proc_gen__PredId_14, ll_backend__proc_gen__PredInfo_18, ll_backend__proc_gen__ProcIds_82, ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_36_93, ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_24, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_92, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_26);
            }
#line 304 "proc_gen.m"
          }
#line 264 "proc_gen.m"
          break;
#line 264 "proc_gen.m"
        case (MR_Integer) 1:
#line 253 "proc_gen.m"
          {
#line 253 "proc_gen.m"
            MR_Integer ll_backend__proc_gen__ProcId_113;
#line 253 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ProcIds_114;
#line 253 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ProcInfos_117;
#line 253 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ProcInfo_118;
#line 253 "proc_gen.m"
            MR_Word ll_backend__proc_gen__CProc_119;
#line 253 "proc_gen.m"
            MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_124;
#line 253 "proc_gen.m"
            MR_Word ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_36_125;
#line 306 "proc_gen.m"
            MR_Box ll_backend__proc_gen__conv2_ProcInfo_118;

#line 255 "proc_gen.m"
            {
#line 255 "proc_gen.m"
              mercury__io__write_string_3_p_0((MR_String) "% Generating code for ");
            }
#line 256 "proc_gen.m"
            {
#line 256 "proc_gen.m"
              hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(ll_backend__proc_gen__ModuleInfo_10, ll_backend__proc_gen__PredId_14);
            }
#line 257 "proc_gen.m"
            {
#line 257 "proc_gen.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 304 "proc_gen.m"
            ll_backend__proc_gen__ProcId_113 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__ProcIds_19, (MR_Integer) 0)));
#line 304 "proc_gen.m"
            ll_backend__proc_gen__ProcIds_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__ProcIds_19, (MR_Integer) 1)));
#line 305 "proc_gen.m"
            {
#line 305 "proc_gen.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(ll_backend__proc_gen__PredInfo_18, &ll_backend__proc_gen__ProcInfos_117);
            }
#line 306 "proc_gen.m"
            {
#line 306 "proc_gen.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ll_backend__proc_gen__ProcInfos_117, ll_backend__proc_gen__ProcId_113, &ll_backend__proc_gen__conv2_ProcInfo_118);
            }
#line 306 "proc_gen.m"
            ll_backend__proc_gen__ProcInfo_118 = ((MR_Word) ll_backend__proc_gen__conv2_ProcInfo_118);
#line 307 "proc_gen.m"
            {
#line 307 "proc_gen.m"
              ll_backend__proc_gen__generate_proc_code_9_p_0(ll_backend__proc_gen__ModuleInfo_10, ll_backend__proc_gen__ConstStructMap_13, ll_backend__proc_gen__PredId_14, ll_backend__proc_gen__PredInfo_18, ll_backend__proc_gen__ProcId_113, ll_backend__proc_gen__ProcInfo_118, &ll_backend__proc_gen__CProc_119, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_25, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_124);
            }
#line 309 "proc_gen.m"
            {
#line 309 "proc_gen.m"
              ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_36_125 = mercury__cord__snoc_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0, ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_23, ((MR_Box) (ll_backend__proc_gen__CProc_119)));
            }
#line 310 "proc_gen.m"
            {
#line 310 "proc_gen.m"
              ll_backend__proc_gen__generate_proc_list_code_9_p_0(ll_backend__proc_gen__ModuleInfo_10, ll_backend__proc_gen__ConstStructMap_13, ll_backend__proc_gen__PredId_14, ll_backend__proc_gen__PredInfo_18, ll_backend__proc_gen__ProcIds_114, ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_36_125, ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_24, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_124, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_26);
            }
#line 262 "proc_gen.m"
            {
#line 262 "proc_gen.m"
              libs__file_util__maybe_report_stats_3_p_0(ll_backend__proc_gen__Statistics_12);
            }
#line 253 "proc_gen.m"
          }
#line 264 "proc_gen.m"
          break;
#line 264 "proc_gen.m"
      }
#line 240 "proc_gen.m"
  }
#line 234 "proc_gen.m"
}

#line 171 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_module_code_seq_8_p_0_1(
#line 171 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 171 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 171 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 171 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_3,
#line 171 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_4,
#line 171 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_5)
#line 171 "proc_gen.m"
{
#line 171 "proc_gen.m"
  {
#line 171 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;
#line 171 "proc_gen.m"
    MR_Word ll_backend__proc_gen__conv1_STATE_VARIABLE_CProcsCord_24;
#line 171 "proc_gen.m"
    MR_Word ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_26;

#line 171 "proc_gen.m"
    {
#line 171 "proc_gen.m"
      ll_backend__proc_gen__generate_pred_code_seq_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 6))), ((MR_Word) ll_backend__proc_gen__wrapper_arg_1), ((MR_Word) ll_backend__proc_gen__wrapper_arg_2), &ll_backend__proc_gen__conv1_STATE_VARIABLE_CProcsCord_24, ((MR_Word) ll_backend__proc_gen__wrapper_arg_4), &ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_26);
    }
#line 171 "proc_gen.m"
    *ll_backend__proc_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__proc_gen__conv1_STATE_VARIABLE_CProcsCord_24));
#line 171 "proc_gen.m"
    *ll_backend__proc_gen__wrapper_arg_5 = ((MR_Box) (ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_26));
#line 171 "proc_gen.m"
  }
#line 171 "proc_gen.m"
}

#line 164 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_module_code_seq_8_p_0(
#line 164 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_9,
#line 164 "proc_gen.m"
  MR_Word ll_backend__proc_gen__VeryVerbose_10,
#line 164 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Statistics_11,
#line 164 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_12,
#line 164 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredIds_13,
#line 164 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__CProcsCord_14,
#line 164 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_16,
#line 164 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_17)
#line 164 "proc_gen.m"
{
#line 169 "proc_gen.m"
  {
#line 169 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 169 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_18_18;
#line 169 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_19_19;
#line 170 "proc_gen.m"
    MR_Box ll_backend__proc_gen__conv3_CProcsCord_14;
#line 170 "proc_gen.m"
    MR_Box ll_backend__proc_gen__conv2_STATE_VARIABLE_GlobalData_17;

#line 171 "proc_gen.m"
    {
#line 171 "proc_gen.m"
      ll_backend__proc_gen__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 171 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_18_18, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_6[0]));
#line 171 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_18_18, 1) = ((MR_Box) (ll_backend__proc_gen__generate_module_code_seq_8_p_0_1));
#line 171 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 171 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_18_18, 3) = ((MR_Box) (ll_backend__proc_gen__ModuleInfo_9));
#line 171 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_18_18, 4) = ((MR_Box) (ll_backend__proc_gen__VeryVerbose_10));
#line 171 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_18_18, 5) = ((MR_Box) (ll_backend__proc_gen__Statistics_11));
#line 171 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_18_18, 6) = ((MR_Box) (ll_backend__proc_gen__ConstStructMap_12));
#line 171 "proc_gen.m"
    }
#line 173 "proc_gen.m"
    {
#line 173 "proc_gen.m"
      ll_backend__proc_gen__V_19_19 = mercury__cord__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0);
    }
#line 170 "proc_gen.m"
    {
#line 170 "proc_gen.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &ll_backend__proc_gen_scalar_common_1[1], (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0, ll_backend__proc_gen__V_18_18, ll_backend__proc_gen__PredIds_13, ((MR_Box) (ll_backend__proc_gen__V_19_19)), &ll_backend__proc_gen__conv3_CProcsCord_14, ((MR_Box) (ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_16)), &ll_backend__proc_gen__conv2_STATE_VARIABLE_GlobalData_17);
    }
#line 170 "proc_gen.m"
    *ll_backend__proc_gen__CProcsCord_14 = ((MR_Word) ll_backend__proc_gen__conv3_CProcsCord_14);
#line 170 "proc_gen.m"
    *ll_backend__proc_gen__STATE_VARIABLE_GlobalData_17 = ((MR_Word) ll_backend__proc_gen__conv2_STATE_VARIABLE_GlobalData_17);
#line 169 "proc_gen.m"
  }
#line 164 "proc_gen.m"
}

#line 1386 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__add_all_tabling_info_structs_3_p_0_1(
#line 1386 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 1386 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 1386 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 1386 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_3)
#line 1386 "proc_gen.m"
{
#line 1386 "proc_gen.m"
  {
#line 1386 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;
#line 1386 "proc_gen.m"
    MR_Word ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_29;

#line 1386 "proc_gen.m"
    {
#line 1386 "proc_gen.m"
      ll_backend__proc_gen__add_tabling_info_struct_3_p_0(((MR_Word) ll_backend__proc_gen__wrapper_arg_1), ((MR_Word) ll_backend__proc_gen__wrapper_arg_2), &ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_29);
    }
#line 1386 "proc_gen.m"
    *ll_backend__proc_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_29));
#line 1386 "proc_gen.m"
  }
#line 1386 "proc_gen.m"
}

#line 65 "proc_gen.m"
void MR_CALL 
ll_backend__proc_gen__add_all_tabling_info_structs_3_p_0(
#line 65 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_4,
#line 65 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_8,
#line 65 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_9)
#line 65 "proc_gen.m"
{
#line 1383 "proc_gen.m"
  {
#line 1383 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1383 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TableStructMap_6;
#line 1383 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TableStructs_7;
#line 1386 "proc_gen.m"
    MR_Box ll_backend__proc_gen__conv1_STATE_VARIABLE_GlobalData_9;

#line 1384 "proc_gen.m"
    {
#line 1384 "proc_gen.m"
      hlds__hlds_module__module_info_get_table_struct_map_2_p_0(ll_backend__proc_gen__ModuleInfo_4, &ll_backend__proc_gen__TableStructMap_6);
    }
#line 1385 "proc_gen.m"
    {
#line 1385 "proc_gen.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0, ll_backend__proc_gen__TableStructMap_6, &ll_backend__proc_gen__TableStructs_7);
    }
#line 1386 "proc_gen.m"
    {
#line 1386 "proc_gen.m"
      mercury__list__foldl_4_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_2[0], (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0, (MR_Word) &ll_backend__proc_gen_scalar_common_2[4], ll_backend__proc_gen__TableStructs_7, ((MR_Box) (ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_8)), &ll_backend__proc_gen__conv1_STATE_VARIABLE_GlobalData_9);
    }
#line 1386 "proc_gen.m"
    *ll_backend__proc_gen__STATE_VARIABLE_GlobalData_9 = ((MR_Word) ll_backend__proc_gen__conv1_STATE_VARIABLE_GlobalData_9);
#line 1383 "proc_gen.m"
  }
#line 65 "proc_gen.m"
}

#line 60 "proc_gen.m"
MR_String MR_CALL 
ll_backend__proc_gen__push_msg_3_f_0(
#line 60 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_5,
#line 60 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_6,
#line 60 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__ProcId_7)
#line 60 "proc_gen.m"
{
#line 1351 "proc_gen.m"
  {
#line 1351 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1351 "proc_gen.m"
    MR_String ll_backend__proc_gen__PushMsg_8;
#line 1351 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredInfo_9;
#line 1351 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredOrFunc_10;
#line 1351 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ModuleName_11;
#line 1351 "proc_gen.m"
    MR_String ll_backend__proc_gen__PredName_12;
#line 1351 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__Arity_13;
#line 1351 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Origin_14;
#line 1351 "proc_gen.m"
    MR_String ll_backend__proc_gen__FullPredName_19;
#line 1351 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_22_22;
#line 1351 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_23_23;
#line 1351 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_25_25;
#line 1351 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_26_26;
#line 1351 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_27_27;
#line 1351 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_29_29;
#line 1351 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_30_30;
#line 1351 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_32_32;
#line 1351 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_33_33;
#line 1351 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_34_34;
#line 1351 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_36_36;
#line 1351 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__V_37_37;
#line 1358 "proc_gen.m"
    MR_Word ll_backend__proc_gen__SpecialId_15;
#line 1358 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TypeCtor_16;

#line 1352 "proc_gen.m"
    {
#line 1352 "proc_gen.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__proc_gen__ModuleInfo_5, ll_backend__proc_gen__PredId_6, &ll_backend__proc_gen__PredInfo_9);
    }
#line 1353 "proc_gen.m"
    {
#line 1353 "proc_gen.m"
      ll_backend__proc_gen__PredOrFunc_10 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
#line 1354 "proc_gen.m"
    {
#line 1354 "proc_gen.m"
      ll_backend__proc_gen__ModuleName_11 = hlds__hlds_pred__pred_info_module_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
#line 1355 "proc_gen.m"
    {
#line 1355 "proc_gen.m"
      ll_backend__proc_gen__PredName_12 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
#line 1356 "proc_gen.m"
    {
#line 1356 "proc_gen.m"
      ll_backend__proc_gen__Arity_13 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
#line 1357 "proc_gen.m"
    {
#line 1357 "proc_gen.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(ll_backend__proc_gen__PredInfo_9, &ll_backend__proc_gen__Origin_14);
    }
#line 1358 "proc_gen.m"
    ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__Origin_14)) == (MR_mktag((MR_Integer) 0)));
#line 1358 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 1358 "proc_gen.m"
      {
#line 1358 "proc_gen.m"
        ll_backend__proc_gen__SpecialId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Origin_14, (MR_Integer) 0)));
#line 1358 "proc_gen.m"
        ll_backend__proc_gen__TypeCtor_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Origin_14, (MR_Integer) 1)));
#line 1359 "proc_gen.m"
        {
#line 1359 "proc_gen.m"
          MR_String ll_backend__proc_gen__TypeName_17;
#line 1359 "proc_gen.m"
          MR_String ll_backend__proc_gen__SpecialPredName_18;
#line 1359 "proc_gen.m"
          MR_String ll_backend__proc_gen__V_20_20;
#line 1359 "proc_gen.m"
          MR_Word ll_backend__proc_gen__TypeCtorSymName_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TypeCtor_16, (MR_Integer) 0)));
#line 1359 "proc_gen.m"
          MR_Integer ll_backend__proc_gen__TypeCtorArity_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TypeCtor_16, (MR_Integer) 1)));
#line 1359 "proc_gen.m"
          MR_String ll_backend__proc_gen__TypeCtorName_42;
#line 1359 "proc_gen.m"
          MR_String ll_backend__proc_gen__ArityStr_43;
#line 1359 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_44_44;
#line 1359 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_45_45;
#line 1359 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_47_47;

#line 1376 "proc_gen.m"
          {
#line 1376 "proc_gen.m"
            ll_backend__proc_gen__TypeCtorName_42 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__proc_gen__TypeCtorSymName_40);
          }
#line 1377 "proc_gen.m"
          {
#line 1377 "proc_gen.m"
            mercury__string__int_to_string_2_p_0(ll_backend__proc_gen__TypeCtorArity_41, &ll_backend__proc_gen__ArityStr_43);
          }
#line 1378 "proc_gen.m"
          {
#line 1378 "proc_gen.m"
            ll_backend__proc_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1378 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_47_47, 0) = ((MR_Box) (ll_backend__proc_gen__ArityStr_43));
#line 1378 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1378 "proc_gen.m"
          }
#line 1378 "proc_gen.m"
          {
#line 1378 "proc_gen.m"
            ll_backend__proc_gen__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1378 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_45_45, 0) = ((MR_Box) ((MR_String) "_"));
#line 1378 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_45_45, 1) = ((MR_Box) (ll_backend__proc_gen__V_47_47));
#line 1378 "proc_gen.m"
          }
#line 1378 "proc_gen.m"
          {
#line 1378 "proc_gen.m"
            ll_backend__proc_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1378 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_44_44, 0) = ((MR_Box) (ll_backend__proc_gen__TypeCtorName_42));
#line 1378 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_44_44, 1) = ((MR_Box) (ll_backend__proc_gen__V_45_45));
#line 1378 "proc_gen.m"
          }
#line 1378 "proc_gen.m"
          {
#line 1378 "proc_gen.m"
            mercury__string__append_list_2_p_0(ll_backend__proc_gen__V_44_44, &ll_backend__proc_gen__TypeName_17);
          }
#line 1360 "proc_gen.m"
          {
#line 1360 "proc_gen.m"
            ll_backend__proc_gen__SpecialPredName_18 = mdbcomp__prim_data__get_special_pred_id_generic_name_1_f_0(ll_backend__proc_gen__SpecialId_15);
          }
#line 1361 "proc_gen.m"
          {
#line 1361 "proc_gen.m"
            ll_backend__proc_gen__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "_for_", ll_backend__proc_gen__TypeName_17);
          }
#line 1361 "proc_gen.m"
          {
#line 1361 "proc_gen.m"
            ll_backend__proc_gen__FullPredName_19 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__SpecialPredName_18, ll_backend__proc_gen__V_20_20);
          }
#line 1359 "proc_gen.m"
        }
#line 1358 "proc_gen.m"
      }
#line 1358 "proc_gen.m"
    else
#line 1363 "proc_gen.m"
      ll_backend__proc_gen__FullPredName_19 = ll_backend__proc_gen__PredName_12;
#line 1367 "proc_gen.m"
    {
#line 1367 "proc_gen.m"
      ll_backend__proc_gen__V_22_22 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(ll_backend__proc_gen__PredOrFunc_10);
    }
#line 1368 "proc_gen.m"
    {
#line 1368 "proc_gen.m"
      ll_backend__proc_gen__V_26_26 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__proc_gen__ModuleName_11);
    }
#line 1369 "proc_gen.m"
    {
#line 1369 "proc_gen.m"
      ll_backend__proc_gen__V_33_33 = mercury__string__int_to_string_1_f_0(ll_backend__proc_gen__Arity_13);
    }
#line 1370 "proc_gen.m"
    {
#line 1370 "proc_gen.m"
      ll_backend__proc_gen__V_37_37 = hlds__hlds_pred__proc_id_to_int_1_f_0(ll_backend__proc_gen__ProcId_7);
    }
#line 1370 "proc_gen.m"
    {
#line 1370 "proc_gen.m"
      ll_backend__proc_gen__V_36_36 = mercury__string__int_to_string_1_f_0(ll_backend__proc_gen__V_37_37);
    }
#line 1369 "proc_gen.m"
    {
#line 1369 "proc_gen.m"
      ll_backend__proc_gen__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) "-", ll_backend__proc_gen__V_36_36);
    }
#line 1369 "proc_gen.m"
    {
#line 1369 "proc_gen.m"
      ll_backend__proc_gen__V_32_32 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__V_33_33, ll_backend__proc_gen__V_34_34);
    }
#line 1369 "proc_gen.m"
    {
#line 1369 "proc_gen.m"
      ll_backend__proc_gen__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "/", ll_backend__proc_gen__V_32_32);
    }
#line 1369 "proc_gen.m"
    {
#line 1369 "proc_gen.m"
      ll_backend__proc_gen__V_29_29 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__FullPredName_19, ll_backend__proc_gen__V_30_30);
    }
#line 1368 "proc_gen.m"
    {
#line 1368 "proc_gen.m"
      ll_backend__proc_gen__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) ".", ll_backend__proc_gen__V_29_29);
    }
#line 1368 "proc_gen.m"
    {
#line 1368 "proc_gen.m"
      ll_backend__proc_gen__V_25_25 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__V_26_26, ll_backend__proc_gen__V_27_27);
    }
#line 1367 "proc_gen.m"
    {
#line 1367 "proc_gen.m"
      ll_backend__proc_gen__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__proc_gen__V_25_25);
    }
#line 1367 "proc_gen.m"
    {
#line 1367 "proc_gen.m"
      ll_backend__proc_gen__PushMsg_8 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__V_22_22, ll_backend__proc_gen__V_23_23);
    }
#line 1351 "proc_gen.m"
    return ll_backend__proc_gen__PushMsg_8;
#line 1351 "proc_gen.m"
  }
#line 60 "proc_gen.m"
}

#line 437 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_proc_code_9_p_0_2(
#line 437 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg)
#line 437 "proc_gen.m"
{
#line 437 "proc_gen.m"
  {
#line 437 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 437 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;

#line 437 "proc_gen.m"
    {
#line 437 "proc_gen.m"
      ll_backend__proc_gen__succeeded = ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__437__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))));
    }
#line 437 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 437 "proc_gen.m"
  }
#line 437 "proc_gen.m"
}

#line 354 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_proc_code_9_p_0_1(
#line 354 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg)
#line 354 "proc_gen.m"
{
#line 354 "proc_gen.m"
  {
#line 354 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 354 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;

#line 354 "proc_gen.m"
    {
#line 354 "proc_gen.m"
      ll_backend__proc_gen__succeeded = ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__354__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))));
    }
#line 354 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 354 "proc_gen.m"
  }
#line 354 "proc_gen.m"
}

#line 53 "proc_gen.m"
void MR_CALL 
ll_backend__proc_gen__generate_proc_code_9_p_0(
#line 53 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo0_10,
#line 53 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_11,
#line 53 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_12,
#line 53 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredInfo_13,
#line 53 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__ProcId_14,
#line 53 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcInfo0_15,
#line 53 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__CProc_16,
#line 53 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_108,
#line 53 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_109)
#line 53 "proc_gen.m"
{
#line 333 "proc_gen.m"
  {
#line 333 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TypeCtorInfo_157_157;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ModuleInfo_18;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcInfo1_19;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Globals_20;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TraceLevel_21;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__HasParConj_22;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Parallel_23;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcInfo_25;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeContainingGoalMap_26;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ClausesInfo_27;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcContext_29;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__GoalInfo_30;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Detism_31;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__CodeModel_32;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Goal_33;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeFollowVars_35;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__FollowVars_36;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ForceProcId_39;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__SaveSuccip_40;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__StaticCellInfo0_41;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TSRevStringTable0_42;
#line 333 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__TSStringTableSize0_43;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TraceSlotInfo_44;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__CodeInfo0_45;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__OutsideResumePoint_46;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__CodeInfo1_47;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__CodeLocDep0_48;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__CodeTree0_49;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeTraceCallLabel_50;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcFrameSlots_51;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__CodeInfo_52;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__OutOfLineCode_53;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__CodeTree_54;
#line 333 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__MaxTraceRegR_55;
#line 333 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__MaxTraceRegF_56;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__StaticCellInfo_57;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TSRevStringTable_58;
#line 333 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__TSStringTableSize_59;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__CreatedTempFrame_60;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcTraceEvents_61;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Instructions0_63;
#line 333 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__TotalSlots_64;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeSuccipSlot_65;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Instructions_67;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeTableIOInfo_68;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ClosureLayouts_97;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcLabel_98;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__AllocSites_99;
#line 333 "proc_gen.m"
    MR_String ll_backend__proc_gen__Name_100;
#line 333 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__Arity_101;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__LabelCounter_102;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MayAlterRtti_103;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__GenBytecode_104;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcInstructions_105;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcLabelCounter_106;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__UsedEnvVars_107;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_120_120;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_121_121;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_134_134;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_135_135;
#line 333 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_140_140;
#line 380 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_34_34;
#line 369 "proc_gen.m"
    MR_Word ll_backend__proc_gen__FirstClause_28;
#line 369 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_117_117;
#line 369 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_141_141;
#line 369 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_142_142;
#line 369 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_143_143;
#line 369 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_144_144;
#line 369 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_145_145;
#line 369 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_146_146;
#line 369 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_147_147;
#line 369 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_148_148;
#line 369 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_149_149;
#line 553 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_138_138;

#line 336 "proc_gen.m"
    {
#line 336 "proc_gen.m"
      ll_backend__proc_gen__maybe_set_trace_level_3_p_0(ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__ModuleInfo0_10, &ll_backend__proc_gen__ModuleInfo_18);
    }
#line 337 "proc_gen.m"
    {
#line 337 "proc_gen.m"
      hlds__hlds_pred__ensure_all_headvars_are_named_2_p_0(ll_backend__proc_gen__ProcInfo0_15, &ll_backend__proc_gen__ProcInfo1_19);
    }
#line 339 "proc_gen.m"
    {
#line 339 "proc_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__proc_gen__ModuleInfo_18, &ll_backend__proc_gen__Globals_20);
    }
#line 340 "proc_gen.m"
    {
#line 340 "proc_gen.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__proc_gen__Globals_20, &ll_backend__proc_gen__TraceLevel_21);
    }
#line 341 "proc_gen.m"
    {
#line 341 "proc_gen.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ll_backend__proc_gen__ProcInfo1_19, &ll_backend__proc_gen__HasParConj_22);
    }
#line 342 "proc_gen.m"
    {
#line 342 "proc_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__proc_gen__Globals_20, (MR_Integer) 214, &ll_backend__proc_gen__Parallel_23);
    }
#line 346 "proc_gen.m"
    {
#line 346 "proc_gen.m"
      MR_Word ll_backend__proc_gen__V_111_111;

#line 346 "proc_gen.m"
      {
#line 346 "proc_gen.m"
        ll_backend__proc_gen__V_111_111 = libs__trace_params__given_trace_level_is_none_1_f_0(ll_backend__proc_gen__TraceLevel_21);
      }
#line 346 "proc_gen.m"
      ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__V_111_111 == (MR_Integer) 0);
#line 346 "proc_gen.m"
    }
#line 347 "proc_gen.m"
    if (!(ll_backend__proc_gen__succeeded))
#line 347 "proc_gen.m"
      ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__HasParConj_22 == (MR_Integer) 0);
#line 343 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 358 "proc_gen.m"
      {
#line 358 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ContainingGoalMap_24;

#line 356 "proc_gen.m"
#line 356 "proc_gen.m"
        switch (ll_backend__proc_gen__HasParConj_22) {
#line 356 "proc_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 356 "proc_gen.m"
          case (MR_Integer) 1:
#line 357 "proc_gen.m"
            {
#line 357 "proc_gen.m"
            }
#line 356 "proc_gen.m"
            break;
#line 356 "proc_gen.m"
          case (MR_Integer) 0:
#line 351 "proc_gen.m"
            {
#line 351 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_112_112;

#line 354 "proc_gen.m"
              {
#line 354 "proc_gen.m"
                ll_backend__proc_gen__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 354 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_112_112, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_5[0]));
#line 354 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_112_112, 1) = ((MR_Box) (ll_backend__proc_gen__generate_proc_code_9_p_0_1));
#line 354 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_112_112, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 354 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_112_112, 3) = ((MR_Box) (ll_backend__proc_gen__Parallel_23));
#line 354 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_112_112, 4) = ((MR_Box) ((MR_Integer) 1));
#line 354 "proc_gen.m"
              }
#line 354 "proc_gen.m"
              {
#line 354 "proc_gen.m"
                mercury__require__expect_4_p_0(ll_backend__proc_gen__V_112_112, (MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.generate_proc_code\'/9", (MR_String) "found parallel conjunction in non-parallel grade");
              }
#line 351 "proc_gen.m"
            }
#line 356 "proc_gen.m"
            break;
#line 356 "proc_gen.m"
        }
#line 359 "proc_gen.m"
        {
#line 359 "proc_gen.m"
          hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(ll_backend__proc_gen__ModuleInfo_18, &ll_backend__proc_gen__ContainingGoalMap_24, ll_backend__proc_gen__ProcInfo1_19, &ll_backend__proc_gen__ProcInfo_25);
        }
#line 361 "proc_gen.m"
        {
#line 361 "proc_gen.m"
          ll_backend__proc_gen__MaybeContainingGoalMap_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 361 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeContainingGoalMap_26, 0) = ((MR_Box) (ll_backend__proc_gen__ContainingGoalMap_24));
#line 361 "proc_gen.m"
        }
#line 358 "proc_gen.m"
      }
#line 343 "proc_gen.m"
    else
#line 363 "proc_gen.m"
      {
#line 363 "proc_gen.m"
        ll_backend__proc_gen__MaybeContainingGoalMap_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 364 "proc_gen.m"
        ll_backend__proc_gen__ProcInfo_25 = ll_backend__proc_gen__ProcInfo1_19;
#line 363 "proc_gen.m"
      }
#line 368 "proc_gen.m"
    {
#line 368 "proc_gen.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(ll_backend__proc_gen__PredInfo_13, &ll_backend__proc_gen__ClausesInfo_27);
    }
#line 377 "proc_gen.m"
    {
#line 377 "proc_gen.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__Detism_31);
    }
#line 378 "proc_gen.m"
    {
#line 378 "proc_gen.m"
      ll_backend__proc_gen__CodeModel_32 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__proc_gen__ProcInfo_25);
    }
#line 379 "proc_gen.m"
    {
#line 379 "proc_gen.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__Goal_33);
    }
#line 380 "proc_gen.m"
    ll_backend__proc_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Goal_33, (MR_Integer) 0)));
#line 380 "proc_gen.m"
    ll_backend__proc_gen__GoalInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Goal_33, (MR_Integer) 1)));
#line 369 "proc_gen.m"
    ll_backend__proc_gen__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_27, (MR_Integer) 0)));
#line 369 "proc_gen.m"
    ll_backend__proc_gen__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_27, (MR_Integer) 1)));
#line 369 "proc_gen.m"
    ll_backend__proc_gen__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_27, (MR_Integer) 2)));
#line 369 "proc_gen.m"
    ll_backend__proc_gen__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_27, (MR_Integer) 3)));
#line 369 "proc_gen.m"
    ll_backend__proc_gen__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_27, (MR_Integer) 4)));
#line 369 "proc_gen.m"
    ll_backend__proc_gen__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_27, (MR_Integer) 5)));
#line 369 "proc_gen.m"
    ll_backend__proc_gen__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_27, (MR_Integer) 6)));
#line 369 "proc_gen.m"
    ll_backend__proc_gen__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_27, (MR_Integer) 7)));
#line 369 "proc_gen.m"
    ll_backend__proc_gen__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_27, (MR_Integer) 8)));
#line 369 "proc_gen.m"
    ll_backend__proc_gen__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_27, (MR_Integer) 9)));
#line 369 "proc_gen.m"
    {
#line 369 "proc_gen.m"
      ll_backend__proc_gen__succeeded = hlds__hlds_clauses__get_first_clause_2_p_0(ll_backend__proc_gen__V_117_117, &ll_backend__proc_gen__FirstClause_28);
    }
#line 369 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 370 "proc_gen.m"
      {
#line 370 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FirstClause_28, (MR_Integer) 0)));
#line 370 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FirstClause_28, (MR_Integer) 1)));
#line 370 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FirstClause_28, (MR_Integer) 2)));
#line 370 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_153_153;

#line 370 "proc_gen.m"
        ll_backend__proc_gen__ProcContext_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FirstClause_28, (MR_Integer) 3)));
#line 370 "proc_gen.m"
        ll_backend__proc_gen__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FirstClause_28, (MR_Integer) 4)));
#line 370 "proc_gen.m"
      }
#line 369 "proc_gen.m"
    else
#line 374 "proc_gen.m"
      {
#line 374 "proc_gen.m"
        ll_backend__proc_gen__ProcContext_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__proc_gen__GoalInfo_30);
      }
#line 381 "proc_gen.m"
    {
#line 381 "proc_gen.m"
      hlds__hlds_llds__goal_info_get_follow_vars_2_p_0(ll_backend__proc_gen__GoalInfo_30, &ll_backend__proc_gen__MaybeFollowVars_35);
    }
#line 384 "proc_gen.m"
    if ((ll_backend__proc_gen__MaybeFollowVars_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 385 "proc_gen.m"
      {
#line 385 "proc_gen.m"
        MR_Word ll_backend__proc_gen__FollowVarsMap_37;

#line 386 "proc_gen.m"
        {
#line 386 "proc_gen.m"
          mercury__map__init_1_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, &ll_backend__proc_gen__FollowVarsMap_37);
        }
#line 387 "proc_gen.m"
        {
#line 387 "proc_gen.m"
          ll_backend__proc_gen__FollowVars_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 387 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FollowVars_36, 0) = ((MR_Box) (ll_backend__proc_gen__FollowVarsMap_37));
#line 387 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FollowVars_36, 1) = ((MR_Box) ((MR_Integer) 1));
#line 387 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FollowVars_36, 2) = ((MR_Box) ((MR_Integer) 1));
#line 387 "proc_gen.m"
        }
#line 385 "proc_gen.m"
      }
#line 384 "proc_gen.m"
    else
#line 383 "proc_gen.m"
      ll_backend__proc_gen__FollowVars_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeFollowVars_35, (MR_Integer) 0)));
#line 389 "proc_gen.m"
    {
#line 389 "proc_gen.m"
      ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0(ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__Globals_20, &ll_backend__proc_gen__SaveSuccip_40, &ll_backend__proc_gen__ForceProcId_39);
    }
#line 398 "proc_gen.m"
    {
#line 398 "proc_gen.m"
      ll_backend__global_data__global_data_get_static_cell_info_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_108, &ll_backend__proc_gen__StaticCellInfo0_41);
    }
#line 399 "proc_gen.m"
    {
#line 399 "proc_gen.m"
      ll_backend__global_data__global_data_get_threadscope_rev_string_table_3_p_0(ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_108, &ll_backend__proc_gen__TSRevStringTable0_42, &ll_backend__proc_gen__TSStringTableSize0_43);
    }
#line 402 "proc_gen.m"
    {
#line 402 "proc_gen.m"
      ll_backend__code_info__code_info_init_13_p_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredId_12, ll_backend__proc_gen__ProcId_14, ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__ProcInfo_25, ll_backend__proc_gen__SaveSuccip_40, ll_backend__proc_gen__StaticCellInfo0_41, ll_backend__proc_gen__ConstStructMap_11, ll_backend__proc_gen__MaybeContainingGoalMap_26, ll_backend__proc_gen__TSRevStringTable0_42, ll_backend__proc_gen__TSStringTableSize0_43, &ll_backend__proc_gen__TraceSlotInfo_44, &ll_backend__proc_gen__CodeInfo0_45);
    }
#line 405 "proc_gen.m"
    {
#line 405 "proc_gen.m"
      ll_backend__code_loc_dep__code_loc_dep_init_5_p_0(ll_backend__proc_gen__FollowVars_36, &ll_backend__proc_gen__OutsideResumePoint_46, ll_backend__proc_gen__CodeInfo0_45, &ll_backend__proc_gen__CodeInfo1_47, &ll_backend__proc_gen__CodeLocDep0_48);
    }
#line 409 "proc_gen.m"
    {
#line 409 "proc_gen.m"
      ll_backend__proc_gen__generate_category_code_11_p_0(ll_backend__proc_gen__CodeModel_32, ll_backend__proc_gen__ProcContext_29, ll_backend__proc_gen__Goal_33, ll_backend__proc_gen__OutsideResumePoint_46, ll_backend__proc_gen__TraceSlotInfo_44, &ll_backend__proc_gen__CodeTree0_49, &ll_backend__proc_gen__MaybeTraceCallLabel_50, &ll_backend__proc_gen__ProcFrameSlots_51, ll_backend__proc_gen__CodeInfo1_47, &ll_backend__proc_gen__CodeInfo_52, ll_backend__proc_gen__CodeLocDep0_48);
    }
#line 412 "proc_gen.m"
    {
#line 412 "proc_gen.m"
      ll_backend__code_info__get_out_of_line_code_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__OutOfLineCode_53);
    }
#line 7914 "ll_backend.proc_gen.c"
    ll_backend__proc_gen__TypeCtorInfo_157_157 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 413 "proc_gen.m"
    {
#line 413 "proc_gen.m"
      ll_backend__proc_gen__CodeTree_54 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_157_157, ll_backend__proc_gen__CodeTree0_49, ll_backend__proc_gen__OutOfLineCode_53);
    }
#line 414 "proc_gen.m"
    {
#line 414 "proc_gen.m"
      ll_backend__code_info__get_max_regs_in_use_at_trace_3_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__MaxTraceRegR_55, &ll_backend__proc_gen__MaxTraceRegF_56);
    }
#line 415 "proc_gen.m"
    {
#line 415 "proc_gen.m"
      ll_backend__code_info__get_static_cell_info_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__StaticCellInfo_57);
    }
#line 416 "proc_gen.m"
    {
#line 416 "proc_gen.m"
      ll_backend__global_data__global_data_set_static_cell_info_3_p_0(ll_backend__proc_gen__StaticCellInfo_57, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_108, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_120_120);
    }
#line 418 "proc_gen.m"
    {
#line 418 "proc_gen.m"
      ll_backend__code_info__get_threadscope_rev_string_table_3_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__TSRevStringTable_58, &ll_backend__proc_gen__TSStringTableSize_59);
    }
#line 420 "proc_gen.m"
    {
#line 420 "proc_gen.m"
      ll_backend__global_data__global_data_set_threadscope_rev_string_table_4_p_0(ll_backend__proc_gen__TSRevStringTable_58, ll_backend__proc_gen__TSStringTableSize_59, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_120_120, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_121_121);
    }
#line 423 "proc_gen.m"
    {
#line 423 "proc_gen.m"
      ll_backend__code_info__get_created_temp_frame_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__CreatedTempFrame_60);
    }
#line 424 "proc_gen.m"
    {
#line 424 "proc_gen.m"
      ll_backend__code_info__get_proc_trace_events_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__ProcTraceEvents_61);
    }
#line 443 "proc_gen.m"
    {
#line 443 "proc_gen.m"
      ll_backend__proc_gen__Instructions0_63 = mercury__cord__list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_157_157, ll_backend__proc_gen__CodeTree_54);
    }
#line 444 "proc_gen.m"
    ll_backend__proc_gen__TotalSlots_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcFrameSlots_51, (MR_Integer) 0)));
#line 444 "proc_gen.m"
    ll_backend__proc_gen__MaybeSuccipSlot_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcFrameSlots_51, (MR_Integer) 1)));
#line 451 "proc_gen.m"
    if ((ll_backend__proc_gen__MaybeSuccipSlot_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "proc_gen.m"
      ll_backend__proc_gen__Instructions_67 = ll_backend__proc_gen__Instructions0_63;
#line 451 "proc_gen.m"
    else
#line 446 "proc_gen.m"
      {
#line 446 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__SuccipSlot_66 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeSuccipSlot_65, (MR_Integer) 0)));

#line 450 "proc_gen.m"
        {
#line 450 "proc_gen.m"
          ll_backend__proc_gen__add_saved_succip_3_p_0(ll_backend__proc_gen__Instructions0_63, ll_backend__proc_gen__SuccipSlot_66, &ll_backend__proc_gen__Instructions_67);
        }
#line 446 "proc_gen.m"
      }
#line 456 "proc_gen.m"
    {
#line 456 "proc_gen.m"
      hlds__hlds_pred__proc_info_get_maybe_proc_table_io_info_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__MaybeTableIOInfo_68);
    }
#line 458 "proc_gen.m"
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__SaveSuccip_40 == (MR_Integer) 1);
#line 459 "proc_gen.m"
    if (!(ll_backend__proc_gen__succeeded))
#line 459 "proc_gen.m"
      {
#line 459 "proc_gen.m"
        MR_Word ll_backend__proc_gen___TableIODeclInfo_69;

#line 459 "proc_gen.m"
        ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__MaybeTableIOInfo_68)) == (MR_mktag((MR_Integer) 1)));
#line 459 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 459 "proc_gen.m"
          ll_backend__proc_gen___TableIODeclInfo_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTableIOInfo_68, (MR_Integer) 0)));
#line 459 "proc_gen.m"
      }
#line 457 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 463 "proc_gen.m"
      {
#line 463 "proc_gen.m"
        MR_Word ll_backend__proc_gen__RttiProcLabel_70;
#line 463 "proc_gen.m"
        MR_Word ll_backend__proc_gen__InternalMap_71;
#line 463 "proc_gen.m"
        MR_Word ll_backend__proc_gen__EntryLabel_72;
#line 463 "proc_gen.m"
        MR_Word ll_backend__proc_gen__EvalMethod_73;
#line 463 "proc_gen.m"
        MR_Word ll_backend__proc_gen__InstMap0_74;
#line 463 "proc_gen.m"
        MR_Word ll_backend__proc_gen__HeadVars_75;
#line 463 "proc_gen.m"
        MR_Word ll_backend__proc_gen__VarSet_76;
#line 463 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ArgModes_77;
#line 463 "proc_gen.m"
        MR_Word ll_backend__proc_gen__VarTypes_78;
#line 463 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TraceSuppress_79;
#line 463 "proc_gen.m"
        MR_Word ll_backend__proc_gen__NeedBodyReps_80;
#line 463 "proc_gen.m"
        MR_Word ll_backend__proc_gen__NeedGoalRep_81;
#line 463 "proc_gen.m"
        MR_Word ll_backend__proc_gen__NeedsAllNames_82;
#line 463 "proc_gen.m"
        MR_Word ll_backend__proc_gen__MaybeHLDSDeepInfo_83;
#line 463 "proc_gen.m"
        MR_Word ll_backend__proc_gen__MaybeDeepProfInfo_85;
#line 463 "proc_gen.m"
        MR_Word ll_backend__proc_gen__EffTraceLevel_86;
#line 463 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TableStructMap_87;
#line 463 "proc_gen.m"
        MR_Word ll_backend__proc_gen__PredProcId_88;
#line 463 "proc_gen.m"
        MR_Word ll_backend__proc_gen__MaybeTableInfo_92;
#line 463 "proc_gen.m"
        MR_Word ll_backend__proc_gen__OISUKindFors_95;
#line 463 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ProcLayout_96;

#line 463 "proc_gen.m"
        {
#line 463 "proc_gen.m"
          ll_backend__proc_gen__RttiProcLabel_70 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredId_12, ll_backend__proc_gen__ProcId_14);
        }
#line 464 "proc_gen.m"
        {
#line 464 "proc_gen.m"
          ll_backend__code_info__get_layout_info_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__InternalMap_71);
        }
#line 465 "proc_gen.m"
        {
#line 465 "proc_gen.m"
          ll_backend__proc_gen__EntryLabel_72 = ll_backend__code_util__make_local_entry_label_4_f_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredId_12, ll_backend__proc_gen__ProcId_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 466 "proc_gen.m"
        {
#line 466 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__EvalMethod_73);
        }
#line 467 "proc_gen.m"
        {
#line 467 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ll_backend__proc_gen__ProcInfo_25, ll_backend__proc_gen__ModuleInfo_18, &ll_backend__proc_gen__InstMap0_74);
        }
#line 468 "proc_gen.m"
        {
#line 468 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__HeadVars_75);
        }
#line 469 "proc_gen.m"
        {
#line 469 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__VarSet_76);
        }
#line 470 "proc_gen.m"
        {
#line 470 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__ArgModes_77);
        }
#line 471 "proc_gen.m"
        {
#line 471 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__VarTypes_78);
        }
#line 472 "proc_gen.m"
        {
#line 472 "proc_gen.m"
          libs__globals__get_trace_suppress_2_p_0(ll_backend__proc_gen__Globals_20, &ll_backend__proc_gen__TraceSuppress_79);
        }
#line 473 "proc_gen.m"
        {
#line 473 "proc_gen.m"
          ll_backend__proc_gen__NeedBodyReps_80 = libs__trace_params__eff_trace_needs_proc_body_reps_5_f_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__ProcInfo_25, ll_backend__proc_gen__TraceLevel_21, ll_backend__proc_gen__TraceSuppress_79);
        }
#line 478 "proc_gen.m"
#line 478 "proc_gen.m"
        switch (ll_backend__proc_gen__NeedBodyReps_80) {
#line 478 "proc_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 478 "proc_gen.m"
          case (MR_Integer) 0:
#line 480 "proc_gen.m"
            ll_backend__proc_gen__NeedGoalRep_81 = (MR_Integer) 1;
#line 478 "proc_gen.m"
            break;
#line 478 "proc_gen.m"
          case (MR_Integer) 1:
#line 477 "proc_gen.m"
            ll_backend__proc_gen__NeedGoalRep_81 = (MR_Integer) 0;
#line 478 "proc_gen.m"
            break;
#line 478 "proc_gen.m"
        }
#line 482 "proc_gen.m"
        {
#line 482 "proc_gen.m"
          ll_backend__proc_gen__NeedsAllNames_82 = libs__trace_params__eff_trace_needs_all_var_names_5_f_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__ProcInfo_25, ll_backend__proc_gen__TraceLevel_21, ll_backend__proc_gen__TraceSuppress_79);
        }
#line 484 "proc_gen.m"
        {
#line 484 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__MaybeHLDSDeepInfo_83);
        }
#line 489 "proc_gen.m"
        if ((ll_backend__proc_gen__MaybeHLDSDeepInfo_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 491 "proc_gen.m"
          ll_backend__proc_gen__MaybeDeepProfInfo_85 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 489 "proc_gen.m"
        else
#line 486 "proc_gen.m"
          {
#line 486 "proc_gen.m"
            MR_Word ll_backend__proc_gen__HLDSDeepInfo_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeHLDSDeepInfo_83, (MR_Integer) 0)));

#line 487 "proc_gen.m"
            {
#line 487 "proc_gen.m"
              ll_backend__proc_gen__MaybeDeepProfInfo_85 = ll_backend__proc_gen__maybe_generate_deep_prof_info_2_f_0(ll_backend__proc_gen__ProcInfo_25, ll_backend__proc_gen__HLDSDeepInfo_84);
            }
#line 486 "proc_gen.m"
          }
#line 493 "proc_gen.m"
        {
#line 493 "proc_gen.m"
          ll_backend__proc_gen__EffTraceLevel_86 = libs__trace_params__eff_trace_level_4_f_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__ProcInfo_25, ll_backend__proc_gen__TraceLevel_21);
        }
#line 495 "proc_gen.m"
        {
#line 495 "proc_gen.m"
          hlds__hlds_module__module_info_get_table_struct_map_2_p_0(ll_backend__proc_gen__ModuleInfo_18, &ll_backend__proc_gen__TableStructMap_87);
        }
#line 496 "proc_gen.m"
        {
#line 496 "proc_gen.m"
          ll_backend__proc_gen__PredProcId_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 496 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__PredProcId_88, 0) = ((MR_Box) (ll_backend__proc_gen__PredId_12));
#line 496 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__PredProcId_88, 1) = ((MR_Box) (ll_backend__proc_gen__ProcId_14));
#line 496 "proc_gen.m"
        }
#line 506 "proc_gen.m"
        if ((ll_backend__proc_gen__MaybeTableIOInfo_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 499 "proc_gen.m"
          {
#line 499 "proc_gen.m"
            MR_Word ll_backend__proc_gen__TableStructInfo_89;
#line 499 "proc_gen.m"
            MR_Box ll_backend__proc_gen__conv0_TableStructInfo_89;

#line 499 "proc_gen.m"
            {
#line 499 "proc_gen.m"
              ll_backend__proc_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0, ll_backend__proc_gen__TableStructMap_87, ((MR_Box) (ll_backend__proc_gen__PredProcId_88)), &ll_backend__proc_gen__conv0_TableStructInfo_89);
            }
#line 499 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 499 "proc_gen.m"
              {
#line 499 "proc_gen.m"
                ll_backend__proc_gen__TableStructInfo_89 = ((MR_Word) ll_backend__proc_gen__conv0_TableStructInfo_89);
#line 499 "proc_gen.m"
                ll_backend__proc_gen__succeeded = MR_TRUE;
#line 499 "proc_gen.m"
              }
#line 499 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 501 "proc_gen.m"
              {
#line 501 "proc_gen.m"
                MR_Word ll_backend__proc_gen__ProcTableStructInfo_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableStructInfo_89, (MR_Integer) 0)));
#line 501 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_132_132;
#line 500 "proc_gen.m"
                MR_Word ll_backend__proc_gen___Attributes_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableStructInfo_89, (MR_Integer) 1)));

#line 502 "proc_gen.m"
                {
#line 502 "proc_gen.m"
                  ll_backend__proc_gen__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 502 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_132_132, 0) = ((MR_Box) (ll_backend__proc_gen__ProcTableStructInfo_90));
#line 502 "proc_gen.m"
                }
#line 502 "proc_gen.m"
                {
#line 502 "proc_gen.m"
                  ll_backend__proc_gen__MaybeTableInfo_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 502 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTableInfo_92, 0) = ((MR_Box) (ll_backend__proc_gen__V_132_132));
#line 502 "proc_gen.m"
                }
#line 501 "proc_gen.m"
              }
#line 499 "proc_gen.m"
            else
#line 504 "proc_gen.m"
              ll_backend__proc_gen__MaybeTableInfo_92 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 499 "proc_gen.m"
          }
#line 506 "proc_gen.m"
        else
#line 507 "proc_gen.m"
          {
#line 507 "proc_gen.m"
            MR_Word ll_backend__proc_gen__TableIOInfo_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTableIOInfo_68, (MR_Integer) 0)));
#line 508 "proc_gen.m"
            MR_Word ll_backend__proc_gen___TableStructInfo_94;
#line 508 "proc_gen.m"
            MR_Box ll_backend__proc_gen__conv1__TableStructInfo_94;

#line 508 "proc_gen.m"
            {
#line 508 "proc_gen.m"
              ll_backend__proc_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0, ll_backend__proc_gen__TableStructMap_87, ((MR_Box) (ll_backend__proc_gen__PredProcId_88)), &ll_backend__proc_gen__conv1__TableStructInfo_94);
            }
#line 508 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 508 "proc_gen.m"
              {
#line 508 "proc_gen.m"
                ll_backend__proc_gen___TableStructInfo_94 = ((MR_Word) ll_backend__proc_gen__conv1__TableStructInfo_94);
#line 508 "proc_gen.m"
                ll_backend__proc_gen__succeeded = MR_TRUE;
#line 508 "proc_gen.m"
              }
#line 508 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 509 "proc_gen.m"
              {
#line 509 "proc_gen.m"
                {
#line 509 "proc_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.generate_proc_code\'/9", (MR_String) "conflicting kinds of tabling");
#line 509 "proc_gen.m"
                  return;
                }
#line 509 "proc_gen.m"
              }
#line 508 "proc_gen.m"
            else
#line 511 "proc_gen.m"
              {
#line 511 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_131_131;

#line 511 "proc_gen.m"
                {
#line 511 "proc_gen.m"
                  ll_backend__proc_gen__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 511 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_131_131, 0) = ((MR_Box) (ll_backend__proc_gen__TableIOInfo_93));
#line 511 "proc_gen.m"
                }
#line 511 "proc_gen.m"
                {
#line 511 "proc_gen.m"
                  ll_backend__proc_gen__MaybeTableInfo_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 511 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTableInfo_92, 0) = ((MR_Box) (ll_backend__proc_gen__V_131_131));
#line 511 "proc_gen.m"
                }
#line 511 "proc_gen.m"
              }
#line 507 "proc_gen.m"
          }
#line 514 "proc_gen.m"
        {
#line 514 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_oisu_kind_fors_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__OISUKindFors_95);
        }
#line 515 "proc_gen.m"
        {
#line 515 "proc_gen.m"
          ll_backend__proc_gen__ProcLayout_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 24 * sizeof(MR_Word)), NULL, NULL);
#line 515 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 0) = ((MR_Box) (ll_backend__proc_gen__RttiProcLabel_70));
#line 515 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 1) = ((MR_Box) (ll_backend__proc_gen__EntryLabel_72));
#line 515 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 2) = ((MR_Box) (ll_backend__proc_gen__Detism_31));
#line 515 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 3) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_64));
#line 515 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 4) = ((MR_Box) (ll_backend__proc_gen__MaybeSuccipSlot_65));
#line 515 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 5) = ((MR_Box) (ll_backend__proc_gen__EvalMethod_73));
#line 515 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 6) = ((MR_Box) (ll_backend__proc_gen__EffTraceLevel_86));
#line 515 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 7) = ((MR_Box) (ll_backend__proc_gen__MaybeTraceCallLabel_50));
#line 515 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 8) = ((MR_Box) (ll_backend__proc_gen__MaxTraceRegR_55));
#line 515 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 9) = ((MR_Box) (ll_backend__proc_gen__MaxTraceRegF_56));
#line 515 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 10) = ((MR_Box) (ll_backend__proc_gen__HeadVars_75));
#line 515 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 11) = ((MR_Box) (ll_backend__proc_gen__ArgModes_77));
#line 515 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 12) = ((MR_Box) (ll_backend__proc_gen__Goal_33));
#line 515 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 13) = ((MR_Box) (ll_backend__proc_gen__NeedGoalRep_81));
#line 515 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 14) = ((MR_Box) (ll_backend__proc_gen__InstMap0_74));
#line 515 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 15) = ((MR_Box) (ll_backend__proc_gen__TraceSlotInfo_44));
#line 515 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 16) = ((MR_Box) (ll_backend__proc_gen__ForceProcId_39));
#line 515 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 17) = ((MR_Box) (ll_backend__proc_gen__VarSet_76));
#line 515 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 18) = ((MR_Box) (ll_backend__proc_gen__VarTypes_78));
#line 515 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 19) = ((MR_Box) (ll_backend__proc_gen__InternalMap_71));
#line 515 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 20) = ((MR_Box) (ll_backend__proc_gen__MaybeTableInfo_92));
#line 515 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 21) = ((MR_Box) (ll_backend__proc_gen__NeedsAllNames_82));
#line 515 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 22) = ((MR_Box) (ll_backend__proc_gen__OISUKindFors_95));
#line 515 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 23) = ((MR_Box) (ll_backend__proc_gen__MaybeDeepProfInfo_85));
#line 515 "proc_gen.m"
        }
#line 522 "proc_gen.m"
        {
#line 522 "proc_gen.m"
          ll_backend__global_data__global_data_add_new_proc_layout_4_p_0(ll_backend__proc_gen__PredProcId_88, ll_backend__proc_gen__ProcLayout_96, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_121_121, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_134_134);
        }
#line 463 "proc_gen.m"
      }
#line 457 "proc_gen.m"
    else
#line 457 "proc_gen.m"
      ll_backend__proc_gen__STATE_VARIABLE_GlobalData_134_134 = ll_backend__proc_gen__STATE_VARIABLE_GlobalData_121_121;
#line 528 "proc_gen.m"
    {
#line 528 "proc_gen.m"
      ll_backend__code_info__get_closure_layouts_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__ClosureLayouts_97);
    }
#line 529 "proc_gen.m"
    {
#line 529 "proc_gen.m"
      ll_backend__global_data__global_data_add_new_closure_layouts_3_p_0(ll_backend__proc_gen__ClosureLayouts_97, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_134_134, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_135_135);
    }
#line 530 "proc_gen.m"
    {
#line 530 "proc_gen.m"
      ll_backend__proc_gen__ProcLabel_98 = backend_libs__proc_label__make_proc_label_3_f_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredId_12, ll_backend__proc_gen__ProcId_14);
    }
#line 532 "proc_gen.m"
    {
#line 532 "proc_gen.m"
      ll_backend__code_info__get_alloc_sites_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__AllocSites_99);
    }
#line 533 "proc_gen.m"
    {
#line 533 "proc_gen.m"
      ll_backend__global_data__global_data_add_new_alloc_sites_3_p_0(ll_backend__proc_gen__AllocSites_99, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_135_135, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_109);
    }
#line 535 "proc_gen.m"
    {
#line 535 "proc_gen.m"
      ll_backend__proc_gen__Name_100 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__proc_gen__PredInfo_13);
    }
#line 536 "proc_gen.m"
    {
#line 536 "proc_gen.m"
      ll_backend__proc_gen__Arity_101 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(ll_backend__proc_gen__PredInfo_13);
    }
#line 538 "proc_gen.m"
    {
#line 538 "proc_gen.m"
      ll_backend__code_info__get_label_counter_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__LabelCounter_102);
    }
#line 427 "proc_gen.m"
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__ProcTraceEvents_61 == (MR_Integer) 1);
#line 427 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 427 "proc_gen.m"
      {
#line 428 "proc_gen.m"
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CreatedTempFrame_60 == (MR_Integer) 1);
#line 427 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 427 "proc_gen.m"
          {
#line 429 "proc_gen.m"
            ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CodeModel_32 == (MR_Integer) 2);
#line 429 "proc_gen.m"
            ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
#line 427 "proc_gen.m"
          }
#line 427 "proc_gen.m"
      }
#line 8429 "ll_backend.proc_gen.c"
    if (ll_backend__proc_gen__succeeded)
#line 8431 "ll_backend.proc_gen.c"
      {
#line 8433 "ll_backend.proc_gen.c"
        MR_Word ll_backend__proc_gen__NeedsMaxfrSlot_62;
#line 8435 "ll_backend.proc_gen.c"
        MR_Word ll_backend__proc_gen__V_122_122;

#line 436 "proc_gen.m"
        {
#line 436 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_needs_maxfr_slot_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__NeedsMaxfrSlot_62);
        }
#line 437 "proc_gen.m"
        {
#line 437 "proc_gen.m"
          ll_backend__proc_gen__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 437 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_122_122, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_5[1]));
#line 437 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_122_122, 1) = ((MR_Box) (ll_backend__proc_gen__generate_proc_code_9_p_0_2));
#line 437 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_122_122, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 437 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_122_122, 3) = ((MR_Box) (ll_backend__proc_gen__NeedsMaxfrSlot_62));
#line 437 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_122_122, 4) = ((MR_Box) ((MR_Integer) 0));
#line 437 "proc_gen.m"
        }
#line 437 "proc_gen.m"
        {
#line 437 "proc_gen.m"
          mercury__require__expect_4_p_0(ll_backend__proc_gen__V_122_122, (MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.generate_proc_code\'/9", (MR_String) "should have reserved a slot for maxfr, but didn\'t");
        }
#line 545 "proc_gen.m"
        ll_backend__proc_gen__MayAlterRtti_103 = (MR_Integer) 1;
#line 8466 "ll_backend.proc_gen.c"
      }
#line 8468 "ll_backend.proc_gen.c"
    else
#line 543 "proc_gen.m"
#line 543 "proc_gen.m"
      switch (ll_backend__proc_gen__ProcTraceEvents_61) {
#line 543 "proc_gen.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 543 "proc_gen.m"
        case (MR_Integer) 0:
#line 542 "proc_gen.m"
          ll_backend__proc_gen__MayAlterRtti_103 = (MR_Integer) 0;
#line 543 "proc_gen.m"
          break;
#line 543 "proc_gen.m"
        case (MR_Integer) 1:
#line 545 "proc_gen.m"
          ll_backend__proc_gen__MayAlterRtti_103 = (MR_Integer) 1;
#line 543 "proc_gen.m"
          break;
#line 543 "proc_gen.m"
      }
#line 548 "proc_gen.m"
    {
#line 548 "proc_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__proc_gen__Globals_20, (MR_Integer) 137, &ll_backend__proc_gen__GenBytecode_104);
    }
#line 553 "proc_gen.m"
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__GenBytecode_104 == (MR_Integer) 1);
#line 553 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 553 "proc_gen.m"
      {
#line 559 "proc_gen.m"
        {
#line 559 "proc_gen.m"
          ll_backend__proc_gen__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(ll_backend__proc_gen__PredInfo_13);
        }
#line 559 "proc_gen.m"
        ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
#line 553 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 553 "proc_gen.m"
          {
#line 561 "proc_gen.m"
            {
#line 561 "proc_gen.m"
              ll_backend__proc_gen__V_138_138 = hlds__goal_form__goal_has_foreign_1_f_0(ll_backend__proc_gen__Goal_33);
            }
#line 561 "proc_gen.m"
            ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__V_138_138 == (MR_Integer) 0);
#line 553 "proc_gen.m"
          }
#line 553 "proc_gen.m"
      }
#line 549 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 563 "proc_gen.m"
      {
#line 563 "proc_gen.m"
        {
#line 563 "proc_gen.m"
          ll_backend__proc_gen__bytecode_stub_4_p_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredId_12, ll_backend__proc_gen__ProcId_14, &ll_backend__proc_gen__ProcInstructions_105);
        }
#line 564 "proc_gen.m"
        {
#line 564 "proc_gen.m"
          ll_backend__proc_gen__ProcLabelCounter_106 = mercury__counter__init_1_f_0((MR_Integer) 0);
        }
#line 563 "proc_gen.m"
      }
#line 549 "proc_gen.m"
    else
#line 566 "proc_gen.m"
      {
#line 566 "proc_gen.m"
        ll_backend__proc_gen__ProcInstructions_105 = ll_backend__proc_gen__Instructions_67;
#line 567 "proc_gen.m"
        ll_backend__proc_gen__ProcLabelCounter_106 = ll_backend__proc_gen__LabelCounter_102;
#line 566 "proc_gen.m"
      }
#line 569 "proc_gen.m"
    {
#line 569 "proc_gen.m"
      ll_backend__code_info__get_used_env_vars_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__UsedEnvVars_107);
    }
#line 570 "proc_gen.m"
    {
#line 570 "proc_gen.m"
      ll_backend__proc_gen__V_140_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 570 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_140_140, 0) = ((MR_Box) (ll_backend__proc_gen__PredId_12));
#line 570 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_140_140, 1) = ((MR_Box) (ll_backend__proc_gen__ProcId_14));
#line 570 "proc_gen.m"
    }
#line 570 "proc_gen.m"
    {
#line 570 "proc_gen.m"
      MR_Word base;
#line 570 "proc_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 570 "proc_gen.m"
      *ll_backend__proc_gen__CProc_16 = base;
#line 570 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__proc_gen__Name_100));
#line 570 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__proc_gen__Arity_101));
#line 570 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__proc_gen__V_140_140));
#line 570 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__proc_gen__ProcLabel_98));
#line 570 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__proc_gen__CodeModel_32));
#line 570 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__proc_gen__ProcInstructions_105));
#line 570 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__proc_gen__ProcLabelCounter_106));
#line 570 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__proc_gen__MayAlterRtti_103));
#line 570 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__proc_gen__UsedEnvVars_107));
#line 570 "proc_gen.m"
    }
#line 333 "proc_gen.m"
  }
#line 53 "proc_gen.m"
}

#line 209 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_module_code_4_p_0_2(
#line 209 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 209 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 209 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_2)
#line 209 "proc_gen.m"
{
#line 209 "proc_gen.m"
  {
#line 209 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;
#line 209 "proc_gen.m"
    MR_Word ll_backend__proc_gen__conv6_HeadVar__3_3;

#line 209 "proc_gen.m"
    {
#line 209 "proc_gen.m"
      ll_backend__global_data__remap_references_to_global_data_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__proc_gen__wrapper_arg_1), &ll_backend__proc_gen__conv6_HeadVar__3_3);
    }
#line 209 "proc_gen.m"
    *ll_backend__proc_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__proc_gen__conv6_HeadVar__3_3));
#line 209 "proc_gen.m"
  }
#line 209 "proc_gen.m"
}

#line 199 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_module_code_4_p_0_1(
#line 199 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 199 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 199 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 199 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_3,
#line 199 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_4,
#line 199 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_5)
#line 199 "proc_gen.m"
{
#line 199 "proc_gen.m"
  {
#line 199 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;
#line 199 "proc_gen.m"
    MR_Word ll_backend__proc_gen__conv1_STATE_VARIABLE_CProcsCord_17;
#line 199 "proc_gen.m"
    MR_Word ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_19;

#line 199 "proc_gen.m"
    {
#line 199 "proc_gen.m"
      ll_backend__proc_gen__generate_pred_code_par_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__proc_gen__wrapper_arg_1), ((MR_Word) ll_backend__proc_gen__wrapper_arg_2), &ll_backend__proc_gen__conv1_STATE_VARIABLE_CProcsCord_17, ((MR_Word) ll_backend__proc_gen__wrapper_arg_4), &ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_19);
    }
#line 199 "proc_gen.m"
    *ll_backend__proc_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__proc_gen__conv1_STATE_VARIABLE_CProcsCord_17));
#line 199 "proc_gen.m"
    *ll_backend__proc_gen__wrapper_arg_5 = ((MR_Box) (ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_19));
#line 199 "proc_gen.m"
  }
#line 199 "proc_gen.m"
}

#line 47 "proc_gen.m"
void MR_CALL 
ll_backend__proc_gen__generate_module_code_4_p_0(
#line 47 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_5,
#line 47 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__CProcs_6,
#line 47 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_16,
#line 47 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_17)
#line 47 "proc_gen.m"
{
#line 127 "proc_gen.m"
  {
#line 127 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 127 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredIds_8;
#line 127 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Globals_9;
#line 127 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ParallelCodeGen_10;
#line 127 "proc_gen.m"
    MR_Word ll_backend__proc_gen__VeryVerbose_11;
#line 127 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Statistics_12;
#line 127 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ConstStructMap_14;
#line 127 "proc_gen.m"
    MR_Word ll_backend__proc_gen__CProcsCord_15;
#line 127 "proc_gen.m"
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_25_25;

#line 129 "proc_gen.m"
    {
#line 129 "proc_gen.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ll_backend__proc_gen__ModuleInfo_5, &ll_backend__proc_gen__PredIds_8);
    }
#line 131 "proc_gen.m"
    {
#line 131 "proc_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__proc_gen__ModuleInfo_5, &ll_backend__proc_gen__Globals_9);
    }
#line 132 "proc_gen.m"
    {
#line 132 "proc_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__proc_gen__Globals_9, (MR_Integer) 299, &ll_backend__proc_gen__ParallelCodeGen_10);
    }
#line 133 "proc_gen.m"
    {
#line 133 "proc_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__proc_gen__Globals_9, (MR_Integer) 47, &ll_backend__proc_gen__VeryVerbose_11);
    }
#line 134 "proc_gen.m"
    {
#line 134 "proc_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__proc_gen__Globals_9, (MR_Integer) 57, &ll_backend__proc_gen__Statistics_12);
    }
#line 145 "proc_gen.m"
#line 145 "proc_gen.m"
    switch (ll_backend__proc_gen__VeryVerbose_11) {
#line 145 "proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 145 "proc_gen.m"
      case (MR_Integer) 0:
#line 147 "proc_gen.m"
        {
#line 147 "proc_gen.m"
          ll_backend__unify_gen__generate_const_structs_4_p_0(ll_backend__proc_gen__ModuleInfo_5, &ll_backend__proc_gen__ConstStructMap_14, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_16, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_25_25);
        }
#line 145 "proc_gen.m"
        break;
#line 145 "proc_gen.m"
      case (MR_Integer) 1:
#line 137 "proc_gen.m"
        {
#line 139 "proc_gen.m"
          {
#line 139 "proc_gen.m"
            mercury__io__write_string_3_p_0((MR_String) "% Generating constant structures\n");
          }
#line 141 "proc_gen.m"
          {
#line 141 "proc_gen.m"
            ll_backend__unify_gen__generate_const_structs_4_p_0(ll_backend__proc_gen__ModuleInfo_5, &ll_backend__proc_gen__ConstStructMap_14, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_16, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_25_25);
          }
#line 143 "proc_gen.m"
          {
#line 143 "proc_gen.m"
            libs__file_util__maybe_report_stats_3_p_0(ll_backend__proc_gen__Statistics_12);
          }
#line 137 "proc_gen.m"
        }
#line 145 "proc_gen.m"
        break;
#line 145 "proc_gen.m"
    }
#line 151 "proc_gen.m"
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__ParallelCodeGen_10 == (MR_Integer) 1);
#line 151 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 151 "proc_gen.m"
      {
#line 153 "proc_gen.m"
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__VeryVerbose_11 == (MR_Integer) 0);
#line 151 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 154 "proc_gen.m"
          ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__Statistics_12 == (MR_Integer) 0);
#line 151 "proc_gen.m"
      }
#line 150 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 182 "proc_gen.m"
      {
#line 182 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TypeCtorInfo_35_59 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 182 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TypeInfo_36_60;
#line 182 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TypeCtorInfo_42_66;
#line 182 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TypeInfo_43_67;
#line 182 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TypeCtorInfo_44_68;
#line 182 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ListsOfPredIds_38;
#line 182 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ListsOfPredIdsA_39;
#line 182 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ListsOfPredIdsB_40;
#line 182 "proc_gen.m"
        MR_Word ll_backend__proc_gen__PredIdsA_42;
#line 182 "proc_gen.m"
        MR_Word ll_backend__proc_gen__CProcsCordA_43;
#line 182 "proc_gen.m"
        MR_Word ll_backend__proc_gen__GlobalDataA_44;
#line 182 "proc_gen.m"
        MR_Word ll_backend__proc_gen__PredIdsB_45;
#line 182 "proc_gen.m"
        MR_Word ll_backend__proc_gen__GlobalData1_46;
#line 182 "proc_gen.m"
        MR_Word ll_backend__proc_gen__CProcsCordB0_47;
#line 182 "proc_gen.m"
        MR_Word ll_backend__proc_gen__GlobalDataB_48;
#line 182 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Remap_49;
#line 182 "proc_gen.m"
        MR_Word ll_backend__proc_gen__CProcsCordB_50;
#line 182 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_52_52;
#line 182 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_53_53;
#line 182 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_56_56;
#line 182 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_58_58;
#line 182 "proc_gen.m"
        MR_Word ll_backend__proc_gen__As_77;
#line 182 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Bs_78;
#line 199 "proc_gen.m"
        MR_Box ll_backend__proc_gen__conv3_CProcsCordA_43;
#line 199 "proc_gen.m"
        MR_Box ll_backend__proc_gen__conv2_GlobalDataA_44;
#line 205 "proc_gen.m"
        MR_Box ll_backend__proc_gen__conv5_CProcsCordB0_47;
#line 205 "proc_gen.m"
        MR_Box ll_backend__proc_gen__conv4_GlobalDataB_48;

#line 194 "proc_gen.m"
        {
#line 194 "proc_gen.m"
          mercury__list__chunk_3_p_0(ll_backend__proc_gen__TypeCtorInfo_35_59, ll_backend__proc_gen__PredIds_8, (MR_Integer) 50, &ll_backend__proc_gen__ListsOfPredIds_38);
        }
#line 8842 "ll_backend.proc_gen.c"
        ll_backend__proc_gen__TypeInfo_36_60 = (MR_Word) &ll_backend__proc_gen_scalar_common_1[2];
#line 226 "proc_gen.m"
        {
#line 226 "proc_gen.m"
          ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_108_101_97_118_101_95_50_95_95_91_49_93_95_48_5_p_0(ll_backend__proc_gen__ListsOfPredIds_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__proc_gen__As_77, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__proc_gen__Bs_78);
        }
#line 225 "proc_gen.m"
        {
#line 225 "proc_gen.m"
          ll_backend__proc_gen__ListsOfPredIdsA_39 = mercury__list__reverse_1_f_0(ll_backend__proc_gen__TypeInfo_36_60, ll_backend__proc_gen__As_77);
        }
#line 225 "proc_gen.m"
        {
#line 225 "proc_gen.m"
          ll_backend__proc_gen__ListsOfPredIdsB_40 = mercury__list__reverse_1_f_0(ll_backend__proc_gen__TypeInfo_36_60, ll_backend__proc_gen__Bs_78);
        }
#line 198 "proc_gen.m"
        {
#line 198 "proc_gen.m"
          mercury__list__condense_2_p_0(ll_backend__proc_gen__TypeCtorInfo_35_59, ll_backend__proc_gen__ListsOfPredIdsA_39, &ll_backend__proc_gen__PredIdsA_42);
        }
#line 199 "proc_gen.m"
        {
#line 199 "proc_gen.m"
          ll_backend__proc_gen__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 199 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_52_52, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_3[0]));
#line 199 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_52_52, 1) = ((MR_Box) (ll_backend__proc_gen__generate_module_code_4_p_0_1));
#line 199 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 199 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_52_52, 3) = ((MR_Box) (ll_backend__proc_gen__ModuleInfo_5));
#line 199 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_52_52, 4) = ((MR_Box) (ll_backend__proc_gen__ConstStructMap_14));
#line 199 "proc_gen.m"
        }
#line 8880 "ll_backend.proc_gen.c"
        ll_backend__proc_gen__TypeCtorInfo_42_66 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0;
#line 200 "proc_gen.m"
        {
#line 200 "proc_gen.m"
          ll_backend__proc_gen__V_53_53 = mercury__cord__init_0_f_0(ll_backend__proc_gen__TypeCtorInfo_42_66);
        }
#line 8887 "ll_backend.proc_gen.c"
        ll_backend__proc_gen__TypeInfo_43_67 = (MR_Word) &ll_backend__proc_gen_scalar_common_1[1];
#line 8889 "ll_backend.proc_gen.c"
        ll_backend__proc_gen__TypeCtorInfo_44_68 = (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0;
#line 199 "proc_gen.m"
        {
#line 199 "proc_gen.m"
          mercury__list__foldl2_6_p_0(ll_backend__proc_gen__TypeCtorInfo_35_59, ll_backend__proc_gen__TypeInfo_43_67, ll_backend__proc_gen__TypeCtorInfo_44_68, ll_backend__proc_gen__V_52_52, ll_backend__proc_gen__PredIdsA_42, ((MR_Box) (ll_backend__proc_gen__V_53_53)), &ll_backend__proc_gen__conv3_CProcsCordA_43, ((MR_Box) (ll_backend__proc_gen__STATE_VARIABLE_GlobalData_25_25)), &ll_backend__proc_gen__conv2_GlobalDataA_44);
        }
#line 199 "proc_gen.m"
        ll_backend__proc_gen__CProcsCordA_43 = ((MR_Word) ll_backend__proc_gen__conv3_CProcsCordA_43);
#line 199 "proc_gen.m"
        ll_backend__proc_gen__GlobalDataA_44 = ((MR_Word) ll_backend__proc_gen__conv2_GlobalDataA_44);
#line 203 "proc_gen.m"
        {
#line 203 "proc_gen.m"
          mercury__list__condense_2_p_0(ll_backend__proc_gen__TypeCtorInfo_35_59, ll_backend__proc_gen__ListsOfPredIdsB_40, &ll_backend__proc_gen__PredIdsB_45);
        }
#line 204 "proc_gen.m"
        {
#line 204 "proc_gen.m"
          ll_backend__global_data__bump_type_num_counter_3_p_0((MR_Integer) 10000, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_25_25, &ll_backend__proc_gen__GlobalData1_46);
        }
#line 206 "proc_gen.m"
        {
#line 206 "proc_gen.m"
          ll_backend__proc_gen__V_56_56 = mercury__cord__init_0_f_0(ll_backend__proc_gen__TypeCtorInfo_42_66);
        }
#line 205 "proc_gen.m"
        {
#line 205 "proc_gen.m"
          mercury__list__foldl2_6_p_0(ll_backend__proc_gen__TypeCtorInfo_35_59, ll_backend__proc_gen__TypeInfo_43_67, ll_backend__proc_gen__TypeCtorInfo_44_68, ll_backend__proc_gen__V_52_52, ll_backend__proc_gen__PredIdsB_45, ((MR_Box) (ll_backend__proc_gen__V_56_56)), &ll_backend__proc_gen__conv5_CProcsCordB0_47, ((MR_Box) (ll_backend__proc_gen__GlobalData1_46)), &ll_backend__proc_gen__conv4_GlobalDataB_48);
        }
#line 205 "proc_gen.m"
        ll_backend__proc_gen__CProcsCordB0_47 = ((MR_Word) ll_backend__proc_gen__conv5_CProcsCordB0_47);
#line 205 "proc_gen.m"
        ll_backend__proc_gen__GlobalDataB_48 = ((MR_Word) ll_backend__proc_gen__conv4_GlobalDataB_48);
#line 208 "proc_gen.m"
        {
#line 208 "proc_gen.m"
          ll_backend__global_data__merge_global_datas_4_p_0(ll_backend__proc_gen__GlobalDataA_44, ll_backend__proc_gen__GlobalDataB_48, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_17, &ll_backend__proc_gen__Remap_49);
        }
#line 209 "proc_gen.m"
        {
#line 209 "proc_gen.m"
          ll_backend__proc_gen__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 209 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_58_58, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_4[0]));
#line 209 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_58_58, 1) = ((MR_Box) (ll_backend__proc_gen__generate_module_code_4_p_0_2));
#line 209 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 209 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_58_58, 3) = ((MR_Box) (ll_backend__proc_gen__Remap_49));
#line 209 "proc_gen.m"
        }
#line 209 "proc_gen.m"
        {
#line 209 "proc_gen.m"
          mercury__cord__map_pred_3_p_0(ll_backend__proc_gen__TypeCtorInfo_42_66, ll_backend__proc_gen__TypeCtorInfo_42_66, ll_backend__proc_gen__V_58_58, ll_backend__proc_gen__CProcsCordB0_47, &ll_backend__proc_gen__CProcsCordB_50);
        }
#line 211 "proc_gen.m"
        {
#line 211 "proc_gen.m"
          ll_backend__proc_gen__CProcsCord_15 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_42_66, ll_backend__proc_gen__CProcsCordA_43, ll_backend__proc_gen__CProcsCordB_50);
        }
#line 182 "proc_gen.m"
      }
#line 150 "proc_gen.m"
    else
#line 159 "proc_gen.m"
      {
#line 159 "proc_gen.m"
        ll_backend__proc_gen__generate_module_code_seq_8_p_0(ll_backend__proc_gen__ModuleInfo_5, ll_backend__proc_gen__VeryVerbose_11, ll_backend__proc_gen__Statistics_12, ll_backend__proc_gen__ConstStructMap_14, ll_backend__proc_gen__PredIds_8, &ll_backend__proc_gen__CProcsCord_15, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_25_25, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_17);
      }
#line 162 "proc_gen.m"
    {
#line 162 "proc_gen.m"
      *ll_backend__proc_gen__CProcs_6 = mercury__cord__list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0, ll_backend__proc_gen__CProcsCord_15);
    }
#line 127 "proc_gen.m"
  }
#line 47 "proc_gen.m"
}

void mercury__ll_backend__proc_gen__init(void)
{
}

void mercury__ll_backend__proc_gen__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__proc_gen__ll_backend__proc_gen__type_ctor_info_proc_frame_slots_0);
	MR_register_type_ctor_info(&ll_backend__proc_gen__ll_backend__proc_gen__type_ctor_info_type_giving_arg_0);
}

void mercury__ll_backend__proc_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.proc_gen. */
