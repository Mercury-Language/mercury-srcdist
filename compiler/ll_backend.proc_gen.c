/*
** Automatically generated from `proc_gen.m'
** by the Mercury compiler,
** version DEV
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
#include "integer.mih"
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
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "hlds.vartypes.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 169 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0;

#line 172 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_c_procedure_0;

#line 175 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__proc_gen__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0;

#line 178 "ll_backend.proc_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__proc_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0;

#line 181 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__maybe__pti_maybe_1__plain_pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0;

#line 184 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 187 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0;

#line 190 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0;

#line 193 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_special_proc_return_0;

#line 196 "ll_backend.proc_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__proc_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 199 "ll_backend.proc_gen.c"
static const MR_PseudoTypeInfo ll_backend__proc_gen__ll_backend__proc_gen__field_types_frame_info_0_0[3];

#line 202 "ll_backend.proc_gen.c"
static const MR_DuFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__du_functor_desc_frame_info_0_0;

#line 205 "ll_backend.proc_gen.c"
static const MR_DuFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__du_stag_ordered_frame_info_0_0[1];

#line 208 "ll_backend.proc_gen.c"
static const MR_DuPtagLayout ll_backend__proc_gen__ll_backend__proc_gen__du_ptag_ordered_frame_info_0[1];

#line 211 "ll_backend.proc_gen.c"
static const MR_DuFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__du_name_ordered_frame_info_0[1];

#line 214 "ll_backend.proc_gen.c"
static const MR_Integer ll_backend__proc_gen__ll_backend__proc_gen__functor_number_map_frame_info_0[1];

#line 217 "ll_backend.proc_gen.c"
static const MR_EnumFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_0;

#line 220 "ll_backend.proc_gen.c"
static const MR_EnumFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_1;

#line 223 "ll_backend.proc_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__enum_value_ordered_type_giving_arg_0[2];

#line 226 "ll_backend.proc_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__enum_name_ordered_type_giving_arg_0[2];

#line 229 "ll_backend.proc_gen.c"
static const MR_Integer ll_backend__proc_gen__ll_backend__proc_gen__functor_number_map_type_giving_arg_0[2];

#line 232 "ll_backend.proc_gen.c"
static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____frame_info_0_0_10001(
#line 235 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 237 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_2);

#line 240 "ll_backend.proc_gen.c"
static void MR_CALL 
ll_backend__proc_gen____Compare____frame_info_0_0_10001(
#line 243 "ll_backend.proc_gen.c"
  MR_Box * ll_backend__proc_gen__wrapper_arg_1,
#line 245 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 247 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_3);

#line 250 "ll_backend.proc_gen.c"
static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____type_giving_arg_0_0_10001(
#line 253 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 255 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_2);

#line 258 "ll_backend.proc_gen.c"
static void MR_CALL 
ll_backend__proc_gen____Compare____type_giving_arg_0_0_10001(
#line 261 "ll_backend.proc_gen.c"
  MR_Box * ll_backend__proc_gen__wrapper_arg_1,
#line 263 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 265 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_3);

#line 1246 "proc_gen.m"
static MR_Box MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_105_110_102_111_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0_1(
#line 1246 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 1246 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1);

#line 1242 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_105_110_102_111_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0(
#line 1242 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TypeInfoLocnSets_6,
#line 1242 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_0_9,
#line 1242 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_10);

#line 218 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_108_101_97_118_101_95_50_95_95_91_49_93_95_48_5_p_0(
#line 218 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 218 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2,
#line 218 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__3_3,
#line 218 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__4_4,
#line 218 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__5_5);

#line 1406 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__add_tabling_info_struct__1406__1_2_p_0(
#line 1406 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__NumPTIs_19,
#line 1406 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__NumArgs_23);

#line 1194 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1194__1_2_p_0(
#line 1194 "proc_gen.m"
  MR_Word ll_backend__proc_gen__MaybeSpecialReturn_56,
#line 1194 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_180);

#line 1184 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1184__1_2_p_0(
#line 1184 "proc_gen.m"
  MR_Word ll_backend__proc_gen__MaybeSpecialReturn_56,
#line 1184 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_208);

#line 802 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_category_code__802__1_2_p_0(
#line 802 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_76,
#line 802 "proc_gen.m"
  MR_Word ll_backend__proc_gen__MaybeTailRecInfo_251);

#line 430 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__430__1_2_p_0(
#line 430 "proc_gen.m"
  MR_Word ll_backend__proc_gen__NeedsMaxfrSlot_62,
#line 430 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_126);

#line 347 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__347__1_2_p_0(
#line 347 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Parallel_23,
#line 347 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_116);

#line 1350 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen____Compare____type_giving_arg_0_0(
#line 1350 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__1_1,
#line 1350 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2,
#line 1350 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__3_3);

#line 1350 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____type_giving_arg_0_0(
#line 1350 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_1,
#line 1350 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2);

#line 310 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen____Compare____frame_info_0_0(
#line 310 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__1_1,
#line 310 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2,
#line 310 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__3_3);

#line 310 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____frame_info_0_0(
#line 310 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 310 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2);

#line 1406 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__add_tabling_info_struct_3_p_0_1(
#line 1406 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg);

#line 1392 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__add_tabling_info_struct_3_p_0(
#line 1392 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 1392 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_28,
#line 1392 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_29);

#line 1290 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__bytecode_stub_4_p_0(
#line 1290 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_5,
#line 1290 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_6,
#line 1290 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__ProcId_7,
#line 1290 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__BytecodeInstructions_8);

#line 1260 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__add_saved_succip_3_p_0(
#line 1260 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 1260 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__HeadVar__2_2,
#line 1260 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__3_3);

#line 1249 "proc_gen.m"
static MR_Word MR_CALL 
ll_backend__proc_gen__project_layout_locn_lval_1_f_0(
#line 1249 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1);

#line 1242 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__add_type_info_lvals_4_p_0(
#line 1242 "proc_gen.m"
  MR_Word ll_backend__proc_gen___TVar_5,
#line 1242 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TypeInfoLocnSets_6,
#line 1242 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_0_9,
#line 1242 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_10);

#line 1194 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0_3(
#line 1194 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg);

#line 1184 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0_2(
#line 1184 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg);

#line 1167 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0_1(
#line 1167 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 1167 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 1167 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 1167 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_3,
#line 1167 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_4);

#line 1046 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0(
#line 1046 "proc_gen.m"
  MR_Word ll_backend__proc_gen__CodeModel_10,
#line 1046 "proc_gen.m"
  MR_Word ll_backend__proc_gen__FrameInfo_11,
#line 1046 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TraceSlotInfo_12,
#line 1046 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcContext_13,
#line 1046 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__RestoreDeallocCode_14,
#line 1046 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__ExitCode_15,
#line 1046 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_0_68,
#line 1046 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CI_69,
#line 1046 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_0_70);

#line 915 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_entry_6_p_0(
#line 915 "proc_gen.m"
  MR_Word ll_backend__proc_gen__CI_7,
#line 915 "proc_gen.m"
  MR_Word ll_backend__proc_gen__CodeModel_8,
#line 915 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Goal_9,
#line 915 "proc_gen.m"
  MR_Word ll_backend__proc_gen__OutsideResumePoint_10,
#line 915 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__FrameInfo_11,
#line 915 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__EntryCode_12);

#line 873 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_call_event_8_p_0(
#line 873 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TraceInfo_9,
#line 873 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcContext_10,
#line 873 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__MaybeTraceCallLabel_11,
#line 873 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__TraceCallCode_12,
#line 873 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_0_19,
#line 873 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CI_20,
#line 873 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_0_21,
#line 873 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CLD_22);

#line 802 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_category_code_11_p_0_1(
#line 802 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg);

#line 679 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_category_code_11_p_0(
#line 679 "proc_gen.m"
  MR_Word ll_backend__proc_gen__CodeModel_12,
#line 679 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcContext_13,
#line 679 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Goal_14,
#line 679 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ResumePoint_15,
#line 679 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TraceSlotInfo_16,
#line 679 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__Code_17,
#line 679 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__MaybeTraceCallLabel_18,
#line 679 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__FrameInfo_19,
#line 679 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_0_60,
#line 679 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CI_61,
#line 679 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_0_62);

#line 594 "proc_gen.m"
static MR_Word MR_CALL 
ll_backend__proc_gen__maybe_generate_deep_prof_info_2_f_0(
#line 594 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcInfo_4,
#line 594 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HLDSDeepInfo_5);

#line 566 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__maybe_set_trace_level_3_p_0(
#line 566 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredInfo_4,
#line 566 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_14,
#line 566 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_15);

#line 288 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_proc_list_code_9_p_0(
#line 288 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_1,
#line 288 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_2,
#line 288 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_3,
#line 288 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredInfo_4,
#line 288 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__5_5,
#line 288 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_6,
#line 288 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_7,
#line 288 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_Procs_0_8,
#line 288 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_Procs_9);

#line 263 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_pred_code_par_6_p_0(
#line 263 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_7,
#line 263 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_8,
#line 263 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_9,
#line 263 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__CProcs_10,
#line 263 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_15,
#line 263 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_16);

#line 230 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_maybe_pred_code_10_p_0(
#line 230 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_11,
#line 230 "proc_gen.m"
  MR_Word ll_backend__proc_gen__VeryVerbose_12,
#line 230 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Statistics_13,
#line 230 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_14,
#line 230 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_15,
#line 230 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__Predicates_16,
#line 230 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_24,
#line 230 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_25);

#line 162 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_code_sequential_10_p_0_1(
#line 162 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 162 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 162 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_2,
#line 162 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_3,
#line 162 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_4,
#line 162 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_5,
#line 162 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_6);

#line 155 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_code_sequential_10_p_0(
#line 155 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_11,
#line 155 "proc_gen.m"
  MR_Word ll_backend__proc_gen__VeryVerbose_12,
#line 155 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Statistics_13,
#line 155 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_14,
#line 155 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredIds_15,
#line 155 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_20,
#line 155 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_21,
#line 155 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__Procedures_17);

#line 1390 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__add_all_tabling_info_structs_3_p_0_1(
#line 1390 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 1390 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 1390 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 1390 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_3);

#line 430 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_proc_code_9_p_0_2(
#line 430 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg);

#line 347 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_proc_code_9_p_0_1(
#line 347 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg);

#line 204 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_module_code_6_p_0_2(
#line 204 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 204 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 204 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_2);

#line 191 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_module_code_6_p_0_1(
#line 191 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 191 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 191 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_2,
#line 191 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_3,
#line 191 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_4);


static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_1[39][2];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_2[8][3];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_3[1][9];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_4[2][6];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_5[6][5];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_6[1][13];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_7[5][1];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_8[1][7];




static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_1[39][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) ((MR_String) "discard retry ticket"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__proc_gen_scalar_common_1[27]))),
    ((MR_Box) ((MR_String) "fail after fail trace port"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_7[0]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_7[2]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_7[3]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_7[4]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) ((MR_String) "prune retry ticket"))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_String) "bytecode_call_info")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[25])))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) "&")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "\t\treturn_addr = MB_bytecode_call_entry(")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_String) "\t\tMR_save_registers();\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_String) "\t\tMB_Native_Addr return_addr;\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[37])))
  },
};

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_2[8][3] = {
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
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__proc_gen_scalar_common_8[0])),
    ((MR_Box) (ll_backend__proc_gen__generate_exit_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__proc_gen_scalar_common_5[5])),
    ((MR_Box) (ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_105_110_102_111_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_3[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ll_backend__proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&ll_backend__proc_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_c_procedure_0)),
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

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_6[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&ll_backend__proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&ll_backend__proc_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_c_procedure_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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



#line 1139 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0
  }
};

#line 1148 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_c_procedure_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0
  }
};

#line 1156 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__proc_gen__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0
  }
};

#line 1165 "ll_backend.proc_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__proc_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1174 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__maybe__pti_maybe_1__plain_pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__proc_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1182 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1190 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 1198 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 1206 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_special_proc_return_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_special_proc_return_0
  }
};

#line 1214 "ll_backend.proc_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__proc_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1222 "ll_backend.proc_gen.c"
static const MR_PseudoTypeInfo ll_backend__proc_gen__ll_backend__proc_gen__field_types_frame_info_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__proc_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1229 "ll_backend.proc_gen.c"
static const MR_DuFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__du_functor_desc_frame_info_0_0 = {
  (MR_String) "frame",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__proc_gen__ll_backend__proc_gen__field_types_frame_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 1244 "ll_backend.proc_gen.c"
static const MR_DuFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__du_stag_ordered_frame_info_0_0[1] = {
  &ll_backend__proc_gen__ll_backend__proc_gen__du_functor_desc_frame_info_0_0
};

#line 1249 "ll_backend.proc_gen.c"
static const MR_DuPtagLayout ll_backend__proc_gen__ll_backend__proc_gen__du_ptag_ordered_frame_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__proc_gen__ll_backend__proc_gen__du_stag_ordered_frame_info_0_0
  }
};

#line 1258 "ll_backend.proc_gen.c"
static const MR_DuFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__du_name_ordered_frame_info_0[1] = {
  &ll_backend__proc_gen__ll_backend__proc_gen__du_functor_desc_frame_info_0_0
};

#line 1263 "ll_backend.proc_gen.c"
static const MR_Integer ll_backend__proc_gen__ll_backend__proc_gen__functor_number_map_frame_info_0[1] = {
  (MR_Integer) 0
};

#line 1268 "ll_backend.proc_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__proc_gen__ll_backend__proc_gen__type_ctor_info_frame_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__proc_gen____Unify____frame_info_0_0_10001)),
  ((MR_Box) (ll_backend__proc_gen____Compare____frame_info_0_0_10001)),
  (MR_String) "ll_backend.proc_gen",
  (MR_String) "frame_info",
  {     ll_backend__proc_gen__ll_backend__proc_gen__du_name_ordered_frame_info_0 },
  {     ll_backend__proc_gen__ll_backend__proc_gen__du_ptag_ordered_frame_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__proc_gen__ll_backend__proc_gen__functor_number_map_frame_info_0
};

#line 1285 "ll_backend.proc_gen.c"
static const MR_EnumFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_0 = {
  (MR_String) "last_arg",
  (MR_Integer) 0
};

#line 1291 "ll_backend.proc_gen.c"
static const MR_EnumFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_1 = {
  (MR_String) "last_but_one_arg",
  (MR_Integer) 1
};

#line 1297 "ll_backend.proc_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__enum_value_ordered_type_giving_arg_0[2] = {
  &ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_0,
  &ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_1
};

#line 1303 "ll_backend.proc_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__enum_name_ordered_type_giving_arg_0[2] = {
  &ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_0,
  &ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_1
};

#line 1309 "ll_backend.proc_gen.c"
static const MR_Integer ll_backend__proc_gen__ll_backend__proc_gen__functor_number_map_type_giving_arg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1315 "ll_backend.proc_gen.c"
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

#line 1332 "ll_backend.proc_gen.c"
static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____frame_info_0_0_10001(
#line 1335 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 1337 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_2)
#line 1339 "ll_backend.proc_gen.c"
{
#line 1341 "ll_backend.proc_gen.c"
  {
#line 1343 "ll_backend.proc_gen.c"
    MR_bool ll_backend__proc_gen__succeeded;

#line 1346 "ll_backend.proc_gen.c"
    {
#line 1348 "ll_backend.proc_gen.c"
      ll_backend__proc_gen__succeeded = ll_backend__proc_gen____Unify____frame_info_0_0(((MR_Word) ll_backend__proc_gen__wrapper_arg_1), ((MR_Word) ll_backend__proc_gen__wrapper_arg_2));
    }
#line 1351 "ll_backend.proc_gen.c"
    return ll_backend__proc_gen__succeeded;
#line 1353 "ll_backend.proc_gen.c"
  }
#line 1355 "ll_backend.proc_gen.c"
}

#line 1358 "ll_backend.proc_gen.c"
static void MR_CALL 
ll_backend__proc_gen____Compare____frame_info_0_0_10001(
#line 1361 "ll_backend.proc_gen.c"
  MR_Box * ll_backend__proc_gen__wrapper_arg_1,
#line 1363 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 1365 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_3)
#line 1367 "ll_backend.proc_gen.c"
{
#line 1369 "ll_backend.proc_gen.c"
  {
#line 1371 "ll_backend.proc_gen.c"
    MR_Word ll_backend__proc_gen__conv0_HeadVar__1_1;

#line 1374 "ll_backend.proc_gen.c"
    {
#line 1376 "ll_backend.proc_gen.c"
      ll_backend__proc_gen____Compare____frame_info_0_0(&ll_backend__proc_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__proc_gen__wrapper_arg_2), ((MR_Word) ll_backend__proc_gen__wrapper_arg_3));
    }
#line 1379 "ll_backend.proc_gen.c"
    *ll_backend__proc_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__proc_gen__conv0_HeadVar__1_1));
#line 1381 "ll_backend.proc_gen.c"
  }
#line 1383 "ll_backend.proc_gen.c"
}

#line 1386 "ll_backend.proc_gen.c"
static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____type_giving_arg_0_0_10001(
#line 1389 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 1391 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_2)
#line 1393 "ll_backend.proc_gen.c"
{
#line 1395 "ll_backend.proc_gen.c"
  {
#line 1397 "ll_backend.proc_gen.c"
    MR_bool ll_backend__proc_gen__succeeded;

#line 1400 "ll_backend.proc_gen.c"
    {
#line 1402 "ll_backend.proc_gen.c"
      ll_backend__proc_gen__succeeded = ll_backend__proc_gen____Unify____type_giving_arg_0_0(((MR_Word) ll_backend__proc_gen__wrapper_arg_1), ((MR_Word) ll_backend__proc_gen__wrapper_arg_2));
    }
#line 1405 "ll_backend.proc_gen.c"
    return ll_backend__proc_gen__succeeded;
#line 1407 "ll_backend.proc_gen.c"
  }
#line 1409 "ll_backend.proc_gen.c"
}

#line 1412 "ll_backend.proc_gen.c"
static void MR_CALL 
ll_backend__proc_gen____Compare____type_giving_arg_0_0_10001(
#line 1415 "ll_backend.proc_gen.c"
  MR_Box * ll_backend__proc_gen__wrapper_arg_1,
#line 1417 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 1419 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_3)
#line 1421 "ll_backend.proc_gen.c"
{
#line 1423 "ll_backend.proc_gen.c"
  {
#line 1425 "ll_backend.proc_gen.c"
    MR_Word ll_backend__proc_gen__conv0_HeadVar__1_1;

#line 1428 "ll_backend.proc_gen.c"
    {
#line 1430 "ll_backend.proc_gen.c"
      ll_backend__proc_gen____Compare____type_giving_arg_0_0(&ll_backend__proc_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__proc_gen__wrapper_arg_2), ((MR_Word) ll_backend__proc_gen__wrapper_arg_3));
    }
#line 1433 "ll_backend.proc_gen.c"
    *ll_backend__proc_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__proc_gen__conv0_HeadVar__1_1));
#line 1435 "ll_backend.proc_gen.c"
  }
#line 1437 "ll_backend.proc_gen.c"
}

#line 1246 "proc_gen.m"
static MR_Box MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_105_110_102_111_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0_1(
#line 1246 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 1246 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1)
#line 1246 "proc_gen.m"
{
#line 1246 "proc_gen.m"
  {
#line 1246 "proc_gen.m"
    MR_Box ll_backend__proc_gen__wrapper_arg_2;
#line 1246 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;
#line 1246 "proc_gen.m"
    MR_Word ll_backend__proc_gen__conv0_Lval_2;

#line 1246 "proc_gen.m"
    {
#line 1246 "proc_gen.m"
      ll_backend__proc_gen__conv0_Lval_2 = ll_backend__proc_gen__project_layout_locn_lval_1_f_0(((MR_Word) ll_backend__proc_gen__wrapper_arg_1));
    }
#line 1246 "proc_gen.m"
    ll_backend__proc_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__proc_gen__conv0_Lval_2));
#line 1246 "proc_gen.m"
    return ll_backend__proc_gen__wrapper_arg_2;
#line 1246 "proc_gen.m"
  }
#line 1246 "proc_gen.m"
}

#line 1242 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_105_110_102_111_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0(
#line 1242 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TypeInfoLocnSets_6,
#line 1242 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_0_9,
#line 1242 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_10)
#line 1242 "proc_gen.m"
{
#line 1245 "proc_gen.m"
  {
#line 1245 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1245 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TypeCtorInfo_14_14 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 1245 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TypeInfoLvals_8;

#line 1246 "proc_gen.m"
    {
#line 1246 "proc_gen.m"
      ll_backend__proc_gen__TypeInfoLvals_8 = mercury__set__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0, ll_backend__proc_gen__TypeCtorInfo_14_14, (MR_Word) &ll_backend__proc_gen_scalar_common_2[7], ll_backend__proc_gen__TypeInfoLocnSets_6);
    }
#line 1247 "proc_gen.m"
    {
#line 1247 "proc_gen.m"
      mercury__set__union_3_p_0(ll_backend__proc_gen__TypeCtorInfo_14_14, ll_backend__proc_gen__TypeInfoLvals_8, ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_0_9, ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_10);
#line 1247 "proc_gen.m"
      return;
    }
#line 1245 "proc_gen.m"
  }
#line 1242 "proc_gen.m"
}

#line 218 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_108_101_97_118_101_95_50_95_95_91_49_93_95_48_5_p_0(
#line 218 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 218 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2,
#line 218 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__3_3,
#line 218 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__4_4,
#line 218 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__5_5)
#line 218 "proc_gen.m"
{
#line 224 "proc_gen.m"
  while (MR_TRUE)
#line 224 "proc_gen.m"
    {
#line 224 "proc_gen.m"
      /* tailcall optimized into a loop */
#line 224 "proc_gen.m"
      {
#line 224 "proc_gen.m"
        MR_bool ll_backend__proc_gen__succeeded;

#line 224 "proc_gen.m"
        if ((ll_backend__proc_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 224 "proc_gen.m"
          {
#line 224 "proc_gen.m"
            *ll_backend__proc_gen__HeadVar__5_5 = ll_backend__proc_gen__HeadVar__4_4;
#line 224 "proc_gen.m"
            *ll_backend__proc_gen__HeadVar__3_3 = ll_backend__proc_gen__HeadVar__2_2;
#line 224 "proc_gen.m"
          }
#line 224 "proc_gen.m"
        else
#line 225 "proc_gen.m"
          {
#line 225 "proc_gen.m"
            MR_Box ll_backend__proc_gen__H_12 = (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 0));
#line 225 "proc_gen.m"
            MR_Word ll_backend__proc_gen__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 225 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_18_18;

#line 226 "proc_gen.m"
            {
#line 226 "proc_gen.m"
              ll_backend__proc_gen__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "proc_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_18_18, 0) = ll_backend__proc_gen__H_12;
#line 226 "proc_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_18_18, 1) = ((MR_Box) (ll_backend__proc_gen__HeadVar__2_2));
#line 226 "proc_gen.m"
            }
#line 226 "proc_gen.m"
            /* direct tailcall eliminated */
#line 226 "proc_gen.m"
            {
#line 226 "proc_gen.m"
              MR_Word ll_backend__proc_gen__HeadVar__1__tmp_copy_1 = ll_backend__proc_gen__T_13;
#line 226 "proc_gen.m"
              MR_Word ll_backend__proc_gen__HeadVar__2__tmp_copy_2 = ll_backend__proc_gen__HeadVar__4_4;
#line 226 "proc_gen.m"
              MR_Word * ll_backend__proc_gen__HeadVar__3__tmp_copy_3 = ll_backend__proc_gen__HeadVar__5_5;
#line 226 "proc_gen.m"
              MR_Word ll_backend__proc_gen__HeadVar__4__tmp_copy_4 = ll_backend__proc_gen__V_18_18;
#line 226 "proc_gen.m"
              MR_Word * ll_backend__proc_gen__HeadVar__5__tmp_copy_5 = ll_backend__proc_gen__HeadVar__3_3;

#line 226 "proc_gen.m"
              ll_backend__proc_gen__HeadVar__5_5 = ll_backend__proc_gen__HeadVar__5__tmp_copy_5;
#line 226 "proc_gen.m"
              ll_backend__proc_gen__HeadVar__4_4 = ll_backend__proc_gen__HeadVar__4__tmp_copy_4;
#line 226 "proc_gen.m"
              ll_backend__proc_gen__HeadVar__3_3 = ll_backend__proc_gen__HeadVar__3__tmp_copy_3;
#line 226 "proc_gen.m"
              ll_backend__proc_gen__HeadVar__2_2 = ll_backend__proc_gen__HeadVar__2__tmp_copy_2;
#line 226 "proc_gen.m"
              ll_backend__proc_gen__HeadVar__1_1 = ll_backend__proc_gen__HeadVar__1__tmp_copy_1;
#line 226 "proc_gen.m"
            }
#line 226 "proc_gen.m"
            continue;
#line 225 "proc_gen.m"
          }
#line 224 "proc_gen.m"
      }
#line 224 "proc_gen.m"
      break;
#line 224 "proc_gen.m"
    }
#line 218 "proc_gen.m"
}

#line 1406 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__add_tabling_info_struct__1406__1_2_p_0(
#line 1406 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__NumPTIs_19,
#line 1406 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__NumArgs_23)
#line 1406 "proc_gen.m"
{
#line 1406 "proc_gen.m"
  {
#line 1406 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__NumArgs_23 == ll_backend__proc_gen__NumPTIs_19);

#line 1406 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 1406 "proc_gen.m"
  }
#line 1406 "proc_gen.m"
}

#line 1194 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1194__1_2_p_0(
#line 1194 "proc_gen.m"
  MR_Word ll_backend__proc_gen__MaybeSpecialReturn_56,
#line 1194 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_180)
#line 1194 "proc_gen.m"
{
#line 1194 "proc_gen.m"
  {
#line 1194 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;

#line 1194 "proc_gen.m"
    {
#line 1194 "proc_gen.m"
      return ll_backend__proc_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[7], ((MR_Box) (ll_backend__proc_gen__MaybeSpecialReturn_56)), ((MR_Box) (ll_backend__proc_gen__HeadVar__2_180)));
    }
#line 1194 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 1194 "proc_gen.m"
  }
#line 1194 "proc_gen.m"
}

#line 1184 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1184__1_2_p_0(
#line 1184 "proc_gen.m"
  MR_Word ll_backend__proc_gen__MaybeSpecialReturn_56,
#line 1184 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_208)
#line 1184 "proc_gen.m"
{
#line 1184 "proc_gen.m"
  {
#line 1184 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;

#line 1184 "proc_gen.m"
    {
#line 1184 "proc_gen.m"
      return ll_backend__proc_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[7], ((MR_Box) (ll_backend__proc_gen__MaybeSpecialReturn_56)), ((MR_Box) (ll_backend__proc_gen__HeadVar__2_208)));
    }
#line 1184 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 1184 "proc_gen.m"
  }
#line 1184 "proc_gen.m"
}

#line 802 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_category_code__802__1_2_p_0(
#line 802 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_76,
#line 802 "proc_gen.m"
  MR_Word ll_backend__proc_gen__MaybeTailRecInfo_251)
#line 802 "proc_gen.m"
{
#line 802 "proc_gen.m"
  {
#line 802 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;

#line 802 "proc_gen.m"
    {
#line 802 "proc_gen.m"
      return ll_backend__proc_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[3], ((MR_Box) (ll_backend__proc_gen__MaybeTailRecInfo_251)), ((MR_Box) (ll_backend__proc_gen__HeadVar__1_76)));
    }
#line 802 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 802 "proc_gen.m"
  }
#line 802 "proc_gen.m"
}

#line 430 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__430__1_2_p_0(
#line 430 "proc_gen.m"
  MR_Word ll_backend__proc_gen__NeedsMaxfrSlot_62,
#line 430 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_126)
#line 430 "proc_gen.m"
{
#line 430 "proc_gen.m"
  {
#line 430 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__NeedsMaxfrSlot_62 == ll_backend__proc_gen__HeadVar__2_126);

#line 430 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 430 "proc_gen.m"
  }
#line 430 "proc_gen.m"
}

#line 347 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__347__1_2_p_0(
#line 347 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Parallel_23,
#line 347 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_116)
#line 347 "proc_gen.m"
{
#line 347 "proc_gen.m"
  {
#line 347 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__Parallel_23 == ll_backend__proc_gen__HeadVar__2_116);

#line 347 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 347 "proc_gen.m"
  }
#line 347 "proc_gen.m"
}

#line 1350 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen____Compare____type_giving_arg_0_0(
#line 1350 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__1_1,
#line 1350 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2,
#line 1350 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__3_3)
#line 1350 "proc_gen.m"
{
#line 1350 "proc_gen.m"
  {
#line 1350 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1350 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__Cast_HeadVar1_4 = (MR_Integer) ll_backend__proc_gen__HeadVar__2_2;
#line 1350 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__Cast_HeadVar2_5 = (MR_Integer) ll_backend__proc_gen__HeadVar__3_3;

#line 1350 "proc_gen.m"
    {
#line 1350 "proc_gen.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__proc_gen__HeadVar__1_1, ll_backend__proc_gen__Cast_HeadVar1_4, ll_backend__proc_gen__Cast_HeadVar2_5);
#line 1350 "proc_gen.m"
      return;
    }
#line 1350 "proc_gen.m"
  }
#line 1350 "proc_gen.m"
}

#line 1350 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____type_giving_arg_0_0(
#line 1350 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_1,
#line 1350 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2)
#line 1350 "proc_gen.m"
{
#line 1788 "ll_backend.proc_gen.c"
  {
#line 1790 "ll_backend.proc_gen.c"
    MR_bool ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__HeadVar__2_1 == ll_backend__proc_gen__HeadVar__2_2);

#line 1793 "ll_backend.proc_gen.c"
    return ll_backend__proc_gen__succeeded;
#line 1795 "ll_backend.proc_gen.c"
  }
#line 1350 "proc_gen.m"
}

#line 310 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen____Compare____frame_info_0_0(
#line 310 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__1_1,
#line 310 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2,
#line 310 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__3_3)
#line 310 "proc_gen.m"
{
#line 310 "proc_gen.m"
  {
#line 310 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 310 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__CastX_12 = (MR_Integer) ll_backend__proc_gen__HeadVar__2_2;
#line 310 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__CastY_13 = (MR_Integer) ll_backend__proc_gen__HeadVar__3_3;

#line 310 "proc_gen.m"
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CastX_12 == ll_backend__proc_gen__CastY_13);
#line 310 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 1824 "ll_backend.proc_gen.c"
      *ll_backend__proc_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 310 "proc_gen.m"
    else
#line 310 "proc_gen.m"
      {
#line 310 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 310 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 310 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 310 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 310 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 310 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__3_3, (MR_Integer) 2)));
#line 310 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_10_10;

#line 310 "proc_gen.m"
        {
#line 310 "proc_gen.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__proc_gen__V_10_10, ll_backend__proc_gen__V_4_4, ll_backend__proc_gen__V_7_7);
        }
#line 1850 "ll_backend.proc_gen.c"
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__V_10_10 == (MR_Integer) 0);
#line 310 "proc_gen.m"
        ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
#line 310 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 310 "proc_gen.m"
          *ll_backend__proc_gen__HeadVar__1_1 = ll_backend__proc_gen__V_10_10;
#line 310 "proc_gen.m"
        else
#line 310 "proc_gen.m"
          {
#line 310 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_11_11;

#line 310 "proc_gen.m"
            {
#line 310 "proc_gen.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[8], &ll_backend__proc_gen__V_11_11, ((MR_Box) (ll_backend__proc_gen__V_5_5)), ((MR_Box) (ll_backend__proc_gen__V_8_8)));
            }
#line 1870 "ll_backend.proc_gen.c"
            ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__V_11_11 == (MR_Integer) 0);
#line 310 "proc_gen.m"
            ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
#line 310 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 310 "proc_gen.m"
              *ll_backend__proc_gen__HeadVar__1_1 = ll_backend__proc_gen__V_11_11;
#line 310 "proc_gen.m"
            else
#line 310 "proc_gen.m"
              {
#line 310 "proc_gen.m"
                MR_Integer ll_backend__proc_gen__V_17_17 = (MR_Integer) ll_backend__proc_gen__V_6_6;
#line 310 "proc_gen.m"
                MR_Integer ll_backend__proc_gen__V_18_18 = (MR_Integer) ll_backend__proc_gen__V_9_9;

#line 310 "proc_gen.m"
                {
#line 310 "proc_gen.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__proc_gen__HeadVar__1_1, ll_backend__proc_gen__V_17_17, ll_backend__proc_gen__V_18_18);
#line 310 "proc_gen.m"
                  return;
                }
#line 310 "proc_gen.m"
              }
#line 310 "proc_gen.m"
          }
#line 310 "proc_gen.m"
      }
#line 310 "proc_gen.m"
  }
#line 310 "proc_gen.m"
}

#line 310 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____frame_info_0_0(
#line 310 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 310 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2)
#line 310 "proc_gen.m"
{
#line 310 "proc_gen.m"
  {
#line 310 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 310 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__CastX_9 = (MR_Integer) ll_backend__proc_gen__HeadVar__1_1;
#line 310 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__CastY_10 = (MR_Integer) ll_backend__proc_gen__HeadVar__2_2;

#line 310 "proc_gen.m"
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CastX_9 == ll_backend__proc_gen__CastY_10);
#line 310 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 310 "proc_gen.m"
      ll_backend__proc_gen__succeeded = MR_TRUE;
#line 310 "proc_gen.m"
    else
#line 310 "proc_gen.m"
      {
#line 310 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TypeInfo_11_11;
#line 310 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 310 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 310 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 310 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 310 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 310 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__2_2, (MR_Integer) 2)));

#line 1948 "ll_backend.proc_gen.c"
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__V_3_3 == ll_backend__proc_gen__V_6_6);
#line 310 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 310 "proc_gen.m"
          {
#line 1954 "ll_backend.proc_gen.c"
            ll_backend__proc_gen__TypeInfo_11_11 = (MR_Word) &ll_backend__proc_gen_scalar_common_1[8];
#line 1956 "ll_backend.proc_gen.c"
            {
#line 1958 "ll_backend.proc_gen.c"
              ll_backend__proc_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__proc_gen__TypeInfo_11_11, ((MR_Box) (ll_backend__proc_gen__V_4_4)), ((MR_Box) (ll_backend__proc_gen__V_7_7)));
            }
#line 310 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 1963 "ll_backend.proc_gen.c"
              ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__V_5_5 == ll_backend__proc_gen__V_8_8);
#line 310 "proc_gen.m"
          }
#line 310 "proc_gen.m"
      }
#line 310 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 310 "proc_gen.m"
  }
#line 310 "proc_gen.m"
}

#line 1406 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__add_tabling_info_struct_3_p_0_1(
#line 1406 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg)
#line 1406 "proc_gen.m"
{
#line 1406 "proc_gen.m"
  {
#line 1406 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1406 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;

#line 1406 "proc_gen.m"
    {
#line 1406 "proc_gen.m"
      return ll_backend__proc_gen__succeeded = ll_backend__proc_gen__IntroducedFrom__pred__add_tabling_info_struct__1406__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))));
    }
#line 1406 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 1406 "proc_gen.m"
  }
#line 1406 "proc_gen.m"
}

#line 1392 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__add_tabling_info_struct_3_p_0(
#line 1392 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 1392 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_28,
#line 1392 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_29)
#line 1392 "proc_gen.m"
{
#line 1395 "proc_gen.m"
  {
#line 1395 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1395 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredProcId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1395 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TableStructInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1395 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcTableStructInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableStructInfo_5, (MR_Integer) 0)));
#line 1395 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TableAttributes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableStructInfo_5, (MR_Integer) 1)));
#line 1395 "proc_gen.m"
    MR_Word ll_backend__proc_gen__RttiProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 0)));
#line 1395 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__NumInputs_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 3)));
#line 1395 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__NumOutputs_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 4)));
#line 1395 "proc_gen.m"
    MR_Word ll_backend__proc_gen__InputSteps_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 5)));
#line 1395 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeOutputSteps_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 6)));
#line 1395 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ArgInfos_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 7)));
#line 1395 "proc_gen.m"
    MR_Word ll_backend__proc_gen__EvalMethod_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 8)));
#line 1395 "proc_gen.m"
    MR_Word ll_backend__proc_gen__StaticCellInfo0_18;
#line 1395 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__NumPTIs_19;
#line 1395 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PTIVectorRval_20;
#line 1395 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TVarVectorRval_21;
#line 1395 "proc_gen.m"
    MR_Word ll_backend__proc_gen__StaticCellInfo_22;
#line 1395 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__NumArgs_23;
#line 1395 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeSizeLimit_24;
#line 1395 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Statistics_25;
#line 1395 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcLabel_26;
#line 1395 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Var_27;
#line 1395 "proc_gen.m"
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_30_30;
#line 1395 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_31_31;
#line 1397 "proc_gen.m"
    MR_Word ll_backend__proc_gen___TVarSet_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 1)));
#line 1397 "proc_gen.m"
    MR_Word ll_backend__proc_gen___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 2)));
#line 1408 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_36_36;
#line 1408 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_38_38;

#line 1401 "proc_gen.m"
    {
#line 1401 "proc_gen.m"
      ll_backend__global_data__global_data_get_static_cell_info_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_28, &ll_backend__proc_gen__StaticCellInfo0_18);
    }
#line 1402 "proc_gen.m"
    {
#line 1402 "proc_gen.m"
      ll_backend__stack_layout__convert_table_arg_info_6_p_0(ll_backend__proc_gen__ArgInfos_16, &ll_backend__proc_gen__NumPTIs_19, &ll_backend__proc_gen__PTIVectorRval_20, &ll_backend__proc_gen__TVarVectorRval_21, ll_backend__proc_gen__StaticCellInfo0_18, &ll_backend__proc_gen__StaticCellInfo_22);
    }
#line 1404 "proc_gen.m"
    {
#line 1404 "proc_gen.m"
      ll_backend__global_data__global_data_set_static_cell_info_3_p_0(ll_backend__proc_gen__StaticCellInfo_22, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_28, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_30_30);
    }
#line 1405 "proc_gen.m"
    ll_backend__proc_gen__NumArgs_23 = (ll_backend__proc_gen__NumInputs_12 + ll_backend__proc_gen__NumOutputs_13);
#line 1406 "proc_gen.m"
    {
#line 1406 "proc_gen.m"
      ll_backend__proc_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1406 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_31_31, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_5[4]));
#line 1406 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_31_31, 1) = ((MR_Box) (ll_backend__proc_gen__add_tabling_info_struct_3_p_0_1));
#line 1406 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1406 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_31_31, 3) = ((MR_Box) (ll_backend__proc_gen__NumPTIs_19));
#line 1406 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_31_31, 4) = ((MR_Box) (ll_backend__proc_gen__NumArgs_23));
#line 1406 "proc_gen.m"
    }
#line 1406 "proc_gen.m"
    {
#line 1406 "proc_gen.m"
      mercury__require__expect_4_p_0(ll_backend__proc_gen__V_31_31, (MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.add_tabling_info_struct\'/3", (MR_String) "args mismatch");
    }
#line 1408 "proc_gen.m"
    ll_backend__proc_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableAttributes_8, (MR_Integer) 0)));
#line 1408 "proc_gen.m"
    ll_backend__proc_gen__MaybeSizeLimit_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableAttributes_8, (MR_Integer) 1)));
#line 1408 "proc_gen.m"
    ll_backend__proc_gen__Statistics_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableAttributes_8, (MR_Integer) 2)));
#line 1408 "proc_gen.m"
    ll_backend__proc_gen__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableAttributes_8, (MR_Integer) 3)));
#line 1410 "proc_gen.m"
    {
#line 1410 "proc_gen.m"
      ll_backend__proc_gen__ProcLabel_26 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(ll_backend__proc_gen__RttiProcLabel_9);
    }
#line 1411 "proc_gen.m"
    {
#line 1411 "proc_gen.m"
      ll_backend__proc_gen__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 1411 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 0) = ((MR_Box) (ll_backend__proc_gen__ProcLabel_26));
#line 1411 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 1) = ((MR_Box) (ll_backend__proc_gen__EvalMethod_17));
#line 1411 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 2) = ((MR_Box) (ll_backend__proc_gen__NumInputs_12));
#line 1411 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 3) = ((MR_Box) (ll_backend__proc_gen__NumOutputs_13));
#line 1411 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 4) = ((MR_Box) (ll_backend__proc_gen__InputSteps_14));
#line 1411 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 5) = ((MR_Box) (ll_backend__proc_gen__MaybeOutputSteps_15));
#line 1411 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 6) = ((MR_Box) (ll_backend__proc_gen__PTIVectorRval_20));
#line 1411 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 7) = ((MR_Box) (ll_backend__proc_gen__TVarVectorRval_21));
#line 1411 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 8) = ((MR_Box) (ll_backend__proc_gen__MaybeSizeLimit_24));
#line 1411 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 9) = ((MR_Box) (ll_backend__proc_gen__Statistics_25));
#line 1411 "proc_gen.m"
    }
#line 1414 "proc_gen.m"
    {
#line 1414 "proc_gen.m"
      ll_backend__global_data__global_data_add_new_proc_var_4_p_0(ll_backend__proc_gen__PredProcId_4, ll_backend__proc_gen__Var_27, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_30_30, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_29);
#line 1414 "proc_gen.m"
      return;
    }
#line 1395 "proc_gen.m"
  }
#line 1392 "proc_gen.m"
}

#line 1290 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__bytecode_stub_4_p_0(
#line 1290 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_5,
#line 1290 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_6,
#line 1290 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__ProcId_7,
#line 1290 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__BytecodeInstructions_8)
#line 1290 "proc_gen.m"
{
#line 1293 "proc_gen.m"
  {
#line 1293 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TypeCtorInfo_119_119;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredInfo_9;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ModuleSymName_10;
#line 1293 "proc_gen.m"
    MR_String ll_backend__proc_gen__ModuleName_11;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__EntryLabel_12;
#line 1293 "proc_gen.m"
    MR_String ll_backend__proc_gen__PredName_13;
#line 1293 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__ProcNum_14;
#line 1293 "proc_gen.m"
    MR_String ll_backend__proc_gen__ProcStr_15;
#line 1293 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__Arity_16;
#line 1293 "proc_gen.m"
    MR_String ll_backend__proc_gen__ArityStr_17;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredOrFunc_18;
#line 1293 "proc_gen.m"
    MR_String ll_backend__proc_gen__CallStruct_20;
#line 1293 "proc_gen.m"
    MR_String ll_backend__proc_gen__BytecodeCall_21;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__BytecodeInstructionsComponents_22;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_26_26;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_28_28;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_29_29;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_31_31;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_33_33;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_35_35;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_36_36;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_38_38;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_40_40;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_41_41;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_43_43;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_45_45;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_46_46;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_48_48;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_50_50;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_51_51;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_53_53;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_55_55;
#line 1293 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_56_56;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_78_78;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_81_81;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_82_82;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_84_84;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_85_85;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_88_88;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_89_89;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_90_90;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_91_91;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_95_95;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_96_96;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_99_99;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_100_100;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_103_103;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_104_104;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_106_106;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_107_107;
#line 1293 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_108_108;

#line 1294 "proc_gen.m"
    {
#line 1294 "proc_gen.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__proc_gen__ModuleInfo_5, ll_backend__proc_gen__PredId_6, &ll_backend__proc_gen__PredInfo_9);
    }
#line 1295 "proc_gen.m"
    {
#line 1295 "proc_gen.m"
      ll_backend__proc_gen__ModuleSymName_10 = hlds__hlds_pred__pred_info_module_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
#line 1297 "proc_gen.m"
    {
#line 1297 "proc_gen.m"
      ll_backend__proc_gen__ModuleName_11 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ll_backend__proc_gen__ModuleSymName_10, (MR_String) "__");
    }
#line 1299 "proc_gen.m"
    {
#line 1299 "proc_gen.m"
      ll_backend__proc_gen__EntryLabel_12 = ll_backend__code_util__make_local_entry_label_4_f_0(ll_backend__proc_gen__ModuleInfo_5, ll_backend__proc_gen__PredId_6, ll_backend__proc_gen__ProcId_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 1301 "proc_gen.m"
    {
#line 1301 "proc_gen.m"
      ll_backend__proc_gen__PredName_13 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
#line 1302 "proc_gen.m"
    {
#line 1302 "proc_gen.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__proc_gen__ProcId_7, &ll_backend__proc_gen__ProcNum_14);
    }
#line 1303 "proc_gen.m"
    {
#line 1303 "proc_gen.m"
      mercury__string__int_to_string_2_p_0(ll_backend__proc_gen__ProcNum_14, &ll_backend__proc_gen__ProcStr_15);
    }
#line 1304 "proc_gen.m"
    {
#line 1304 "proc_gen.m"
      ll_backend__proc_gen__Arity_16 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
#line 1305 "proc_gen.m"
    {
#line 1305 "proc_gen.m"
      mercury__string__int_to_string_2_p_0(ll_backend__proc_gen__Arity_16, &ll_backend__proc_gen__ArityStr_17);
    }
#line 1306 "proc_gen.m"
    {
#line 1306 "proc_gen.m"
      ll_backend__proc_gen__PredOrFunc_18 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
#line 1317 "proc_gen.m"
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__PredOrFunc_18 == (MR_Integer) 1);
#line 1317 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 1317 "proc_gen.m"
      ll_backend__proc_gen__V_56_56 = (MR_String) "MR_TRUE";
#line 1317 "proc_gen.m"
    else
#line 1317 "proc_gen.m"
      ll_backend__proc_gen__V_56_56 = (MR_String) "MR_FALSE";
#line 1317 "proc_gen.m"
    {
#line 1317 "proc_gen.m"
      ll_backend__proc_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1317 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_55_55, 0) = ((MR_Box) (ll_backend__proc_gen__V_56_56));
#line 1317 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[22])));
#line 1317 "proc_gen.m"
    }
#line 1317 "proc_gen.m"
    {
#line 1317 "proc_gen.m"
      ll_backend__proc_gen__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1317 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_53_53, 0) = ((MR_Box) ((MR_String) "\t\t\t"));
#line 1317 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_53_53, 1) = ((MR_Box) (ll_backend__proc_gen__V_55_55));
#line 1317 "proc_gen.m"
    }
#line 1316 "proc_gen.m"
    {
#line 1316 "proc_gen.m"
      ll_backend__proc_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1316 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_51_51, 0) = ((MR_Box) ((MR_String) ",\n"));
#line 1316 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_51_51, 1) = ((MR_Box) (ll_backend__proc_gen__V_53_53));
#line 1316 "proc_gen.m"
    }
#line 1316 "proc_gen.m"
    {
#line 1316 "proc_gen.m"
      ll_backend__proc_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1316 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_50_50, 0) = ((MR_Box) (ll_backend__proc_gen__ArityStr_17));
#line 1316 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_50_50, 1) = ((MR_Box) (ll_backend__proc_gen__V_51_51));
#line 1316 "proc_gen.m"
    }
#line 1316 "proc_gen.m"
    {
#line 1316 "proc_gen.m"
      ll_backend__proc_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1316 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_48_48, 0) = ((MR_Box) ((MR_String) "\t\t\t"));
#line 1316 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_48_48, 1) = ((MR_Box) (ll_backend__proc_gen__V_50_50));
#line 1316 "proc_gen.m"
    }
#line 1315 "proc_gen.m"
    {
#line 1315 "proc_gen.m"
      ll_backend__proc_gen__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1315 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_46_46, 0) = ((MR_Box) ((MR_String) ",\n"));
#line 1315 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_46_46, 1) = ((MR_Box) (ll_backend__proc_gen__V_48_48));
#line 1315 "proc_gen.m"
    }
#line 1315 "proc_gen.m"
    {
#line 1315 "proc_gen.m"
      ll_backend__proc_gen__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1315 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_45_45, 0) = ((MR_Box) (ll_backend__proc_gen__ProcStr_15));
#line 1315 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_45_45, 1) = ((MR_Box) (ll_backend__proc_gen__V_46_46));
#line 1315 "proc_gen.m"
    }
#line 1315 "proc_gen.m"
    {
#line 1315 "proc_gen.m"
      ll_backend__proc_gen__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1315 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_43_43, 0) = ((MR_Box) ((MR_String) "\t\t\t"));
#line 1315 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_43_43, 1) = ((MR_Box) (ll_backend__proc_gen__V_45_45));
#line 1315 "proc_gen.m"
    }
#line 1314 "proc_gen.m"
    {
#line 1314 "proc_gen.m"
      ll_backend__proc_gen__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1314 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_41_41, 0) = ((MR_Box) ((MR_String) "\",\n"));
#line 1314 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_41_41, 1) = ((MR_Box) (ll_backend__proc_gen__V_43_43));
#line 1314 "proc_gen.m"
    }
#line 1314 "proc_gen.m"
    {
#line 1314 "proc_gen.m"
      ll_backend__proc_gen__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1314 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_40_40, 0) = ((MR_Box) (ll_backend__proc_gen__PredName_13));
#line 1314 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_40_40, 1) = ((MR_Box) (ll_backend__proc_gen__V_41_41));
#line 1314 "proc_gen.m"
    }
#line 1314 "proc_gen.m"
    {
#line 1314 "proc_gen.m"
      ll_backend__proc_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1314 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_38_38, 0) = ((MR_Box) ((MR_String) "\t\t\t\""));
#line 1314 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_38_38, 1) = ((MR_Box) (ll_backend__proc_gen__V_40_40));
#line 1314 "proc_gen.m"
    }
#line 1313 "proc_gen.m"
    {
#line 1313 "proc_gen.m"
      ll_backend__proc_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1313 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_36_36, 0) = ((MR_Box) ((MR_String) "\",\n"));
#line 1313 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_36_36, 1) = ((MR_Box) (ll_backend__proc_gen__V_38_38));
#line 1313 "proc_gen.m"
    }
#line 1313 "proc_gen.m"
    {
#line 1313 "proc_gen.m"
      ll_backend__proc_gen__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1313 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_35_35, 0) = ((MR_Box) (ll_backend__proc_gen__ModuleName_11));
#line 1313 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_35_35, 1) = ((MR_Box) (ll_backend__proc_gen__V_36_36));
#line 1313 "proc_gen.m"
    }
#line 1313 "proc_gen.m"
    {
#line 1313 "proc_gen.m"
      ll_backend__proc_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1313 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_33_33, 0) = ((MR_Box) ((MR_String) "\t\t\t\""));
#line 1313 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_33_33, 1) = ((MR_Box) (ll_backend__proc_gen__V_35_35));
#line 1313 "proc_gen.m"
    }
#line 1312 "proc_gen.m"
    {
#line 1312 "proc_gen.m"
      ll_backend__proc_gen__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1312 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_31_31, 0) = ((MR_Box) ((MR_String) "\t\t\t(MB_Word)NULL,\n"));
#line 1312 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_31_31, 1) = ((MR_Box) (ll_backend__proc_gen__V_33_33));
#line 1312 "proc_gen.m"
    }
#line 1311 "proc_gen.m"
    {
#line 1311 "proc_gen.m"
      ll_backend__proc_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1311 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_29_29, 0) = ((MR_Box) ((MR_String) " = {\n"));
#line 1311 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_29_29, 1) = ((MR_Box) (ll_backend__proc_gen__V_31_31));
#line 1311 "proc_gen.m"
    }
#line 1311 "proc_gen.m"
    {
#line 1311 "proc_gen.m"
      ll_backend__proc_gen__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1311 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_28_28, 0) = ((MR_Box) ((MR_String) "bytecode_call_info"));
#line 1311 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_28_28, 1) = ((MR_Box) (ll_backend__proc_gen__V_29_29));
#line 1311 "proc_gen.m"
    }
#line 1311 "proc_gen.m"
    {
#line 1311 "proc_gen.m"
      ll_backend__proc_gen__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1311 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_26_26, 0) = ((MR_Box) ((MR_String) "\t\tstatic MB_Call "));
#line 1311 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_26_26, 1) = ((MR_Box) (ll_backend__proc_gen__V_28_28));
#line 1311 "proc_gen.m"
    }
#line 1310 "proc_gen.m"
    {
#line 1310 "proc_gen.m"
      mercury__string__append_list_2_p_0(ll_backend__proc_gen__V_26_26, &ll_backend__proc_gen__CallStruct_20);
    }
#line 1321 "proc_gen.m"
    {
#line 1321 "proc_gen.m"
      mercury__string__append_list_2_p_0((MR_Word) MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[38]), &ll_backend__proc_gen__BytecodeCall_21);
    }
#line 2531 "ll_backend.proc_gen.c"
    ll_backend__proc_gen__TypeCtorInfo_119_119 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 1331 "proc_gen.m"
    {
#line 1331 "proc_gen.m"
      ll_backend__proc_gen__V_82_82 = mercury__set__init_0_f_0(ll_backend__proc_gen__TypeCtorInfo_119_119);
    }
#line 1331 "proc_gen.m"
    {
#line 1331 "proc_gen.m"
      ll_backend__proc_gen__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1331 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_81_81, 0) = ((MR_Box) (ll_backend__proc_gen__V_82_82));
#line 1331 "proc_gen.m"
    }
#line 1330 "proc_gen.m"
    {
#line 1330 "proc_gen.m"
      ll_backend__proc_gen__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1330 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_78_78, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1330 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_78_78, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1330 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_78_78, 3) = ((MR_Box) (ll_backend__proc_gen__V_81_81));
#line 1330 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_78_78, 4) = ((MR_Box) ((MR_String) "\t{\n"));
#line 1330 "proc_gen.m"
    }
#line 1333 "proc_gen.m"
    {
#line 1333 "proc_gen.m"
      ll_backend__proc_gen__V_89_89 = mercury__set__init_0_f_0(ll_backend__proc_gen__TypeCtorInfo_119_119);
    }
#line 1333 "proc_gen.m"
    {
#line 1333 "proc_gen.m"
      ll_backend__proc_gen__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1333 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_88_88, 0) = ((MR_Box) (ll_backend__proc_gen__V_89_89));
#line 1333 "proc_gen.m"
    }
#line 1332 "proc_gen.m"
    {
#line 1332 "proc_gen.m"
      ll_backend__proc_gen__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1332 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1332 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_85_85, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1332 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_85_85, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1332 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_85_85, 3) = ((MR_Box) (ll_backend__proc_gen__V_88_88));
#line 1332 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_85_85, 4) = ((MR_Box) (ll_backend__proc_gen__CallStruct_20));
#line 1332 "proc_gen.m"
    }
#line 1335 "proc_gen.m"
    {
#line 1335 "proc_gen.m"
      ll_backend__proc_gen__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1335 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_91_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1335 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_91_91, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1335 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_91_91, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1335 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_91_91, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1335 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_91_91, 4) = ((MR_Box) (ll_backend__proc_gen__BytecodeCall_21));
#line 1335 "proc_gen.m"
    }
#line 1338 "proc_gen.m"
    {
#line 1338 "proc_gen.m"
      ll_backend__proc_gen__V_100_100 = mercury__set__init_0_f_0(ll_backend__proc_gen__TypeCtorInfo_119_119);
    }
#line 1338 "proc_gen.m"
    {
#line 1338 "proc_gen.m"
      ll_backend__proc_gen__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1338 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_99_99, 0) = ((MR_Box) (ll_backend__proc_gen__V_100_100));
#line 1338 "proc_gen.m"
    }
#line 1337 "proc_gen.m"
    {
#line 1337 "proc_gen.m"
      ll_backend__proc_gen__V_96_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1337 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_96_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1337 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_96_96, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1337 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_96_96, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1337 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_96_96, 3) = ((MR_Box) (ll_backend__proc_gen__V_99_99));
#line 1337 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_96_96, 4) = ((MR_Box) ((MR_String) "\t}\n"));
#line 1337 "proc_gen.m"
    }
#line 1339 "proc_gen.m"
    {
#line 1339 "proc_gen.m"
      ll_backend__proc_gen__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1339 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_95_95, 0) = ((MR_Box) (ll_backend__proc_gen__V_96_96));
#line 1339 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1339 "proc_gen.m"
    }
#line 1336 "proc_gen.m"
    {
#line 1336 "proc_gen.m"
      ll_backend__proc_gen__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1336 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_90_90, 0) = ((MR_Box) (ll_backend__proc_gen__V_91_91));
#line 1336 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_90_90, 1) = ((MR_Box) (ll_backend__proc_gen__V_95_95));
#line 1336 "proc_gen.m"
    }
#line 1334 "proc_gen.m"
    {
#line 1334 "proc_gen.m"
      ll_backend__proc_gen__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1334 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_84_84, 0) = ((MR_Box) (ll_backend__proc_gen__V_85_85));
#line 1334 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_84_84, 1) = ((MR_Box) (ll_backend__proc_gen__V_90_90));
#line 1334 "proc_gen.m"
    }
#line 1331 "proc_gen.m"
    {
#line 1331 "proc_gen.m"
      ll_backend__proc_gen__BytecodeInstructionsComponents_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1331 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__BytecodeInstructionsComponents_22, 0) = ((MR_Box) (ll_backend__proc_gen__V_78_78));
#line 1331 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__BytecodeInstructionsComponents_22, 1) = ((MR_Box) (ll_backend__proc_gen__V_84_84));
#line 1331 "proc_gen.m"
    }
#line 1343 "proc_gen.m"
    {
#line 1343 "proc_gen.m"
      ll_backend__proc_gen__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1343 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_104_104, 1) = ((MR_Box) (ll_backend__proc_gen__EntryLabel_12));
#line 1343 "proc_gen.m"
    }
#line 1343 "proc_gen.m"
    {
#line 1343 "proc_gen.m"
      ll_backend__proc_gen__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1343 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_103_103, 0) = ((MR_Box) (ll_backend__proc_gen__V_104_104));
#line 1343 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_103_103, 1) = ((MR_Box) ((MR_String) "Procedure entry point"));
#line 1343 "proc_gen.m"
    }
#line 1344 "proc_gen.m"
    {
#line 1344 "proc_gen.m"
      ll_backend__proc_gen__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 1344 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 1344 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1344 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 2) = ((MR_Box) (ll_backend__proc_gen__BytecodeInstructionsComponents_22));
#line 1344 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1344 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1344 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1344 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1344 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1344 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1344 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 9) = ((MR_Box) ((MR_Integer) 0));
#line 1344 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 10) = ((MR_Box) ((MR_Integer) 1));
#line 1344 "proc_gen.m"
    }
#line 1344 "proc_gen.m"
    {
#line 1344 "proc_gen.m"
      ll_backend__proc_gen__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1344 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_107_107, 0) = ((MR_Box) (ll_backend__proc_gen__V_108_108));
#line 1344 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_107_107, 1) = ((MR_Box) ((MR_String) "Entry stub"));
#line 1344 "proc_gen.m"
    }
#line 1346 "proc_gen.m"
    {
#line 1346 "proc_gen.m"
      ll_backend__proc_gen__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1346 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_106_106, 0) = ((MR_Box) (ll_backend__proc_gen__V_107_107));
#line 1346 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1346 "proc_gen.m"
    }
#line 1343 "proc_gen.m"
    {
#line 1343 "proc_gen.m"
      MR_Word base;
#line 1343 "proc_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "proc_gen.m"
      *ll_backend__proc_gen__BytecodeInstructions_8 = base;
#line 1343 "proc_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__proc_gen__V_103_103));
#line 1343 "proc_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__proc_gen__V_106_106));
#line 1343 "proc_gen.m"
    }
#line 1293 "proc_gen.m"
  }
#line 1290 "proc_gen.m"
}

#line 1260 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__add_saved_succip_3_p_0(
#line 1260 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 1260 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__HeadVar__2_2,
#line 1260 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__3_3)
#line 1260 "proc_gen.m"
{
#line 1263 "proc_gen.m"
  {
#line 1263 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;

#line 1263 "proc_gen.m"
    if ((ll_backend__proc_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1263 "proc_gen.m"
      *ll_backend__proc_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1263 "proc_gen.m"
    else
#line 1264 "proc_gen.m"
      {
#line 1264 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Instr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1264 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Instrs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1264 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Instr_8;
#line 1264 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Instrs_9;
#line 1264 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Uinstr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Instr0_5, (MR_Integer) 0)));
#line 1264 "proc_gen.m"
        MR_String ll_backend__proc_gen__Comment_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Instr0_5, (MR_Integer) 1)));
#line 1275 "proc_gen.m"
        MR_Word ll_backend__proc_gen__LiveVals0_12;
#line 1268 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_24_24;
#line 1268 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_25_25;
#line 1268 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_26_26;
#line 1268 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_14_14;
#line 1268 "proc_gen.m"
        MR_String ll_backend__proc_gen__V_13_13;

#line 1268 "proc_gen.m"
        ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__Instrs0_6)) == (MR_mktag((MR_Integer) 1)));
#line 1268 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 1268 "proc_gen.m"
          {
#line 1268 "proc_gen.m"
            ll_backend__proc_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Instrs0_6, (MR_Integer) 0)));
#line 1268 "proc_gen.m"
            ll_backend__proc_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Instrs0_6, (MR_Integer) 1)));
#line 1268 "proc_gen.m"
            ll_backend__proc_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_24_24, (MR_Integer) 0)));
#line 1268 "proc_gen.m"
            ll_backend__proc_gen__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_24_24, (MR_Integer) 1)));
#line 1268 "proc_gen.m"
            ll_backend__proc_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__proc_gen__V_25_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_25_25, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1268 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 1268 "proc_gen.m"
              {
#line 1268 "proc_gen.m"
                ll_backend__proc_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_25_25, (MR_Integer) 1)));
#line 1268 "proc_gen.m"
                ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1268 "proc_gen.m"
              }
#line 1268 "proc_gen.m"
          }
#line 1268 "proc_gen.m"
        ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
#line 1267 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 1267 "proc_gen.m"
          {
#line 1267 "proc_gen.m"
            ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__Uinstr0_10)) == (MR_mktag((MR_Integer) 2)));
#line 1267 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 1267 "proc_gen.m"
              ll_backend__proc_gen__LiveVals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 0)));
#line 1267 "proc_gen.m"
          }
#line 1275 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 1272 "proc_gen.m"
          {
#line 1272 "proc_gen.m"
            MR_Word ll_backend__proc_gen__LiveVals1_15;
#line 1272 "proc_gen.m"
            MR_Word ll_backend__proc_gen__Uinstr_16;
#line 1272 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_27_27;

#line 1272 "proc_gen.m"
            {
#line 1272 "proc_gen.m"
              ll_backend__proc_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1272 "proc_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1272 "proc_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_27_27, 1) = ((MR_Box) (ll_backend__proc_gen__HeadVar__2_2));
#line 1272 "proc_gen.m"
            }
#line 1272 "proc_gen.m"
            {
#line 1272 "proc_gen.m"
              mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__proc_gen__V_27_27)), ll_backend__proc_gen__LiveVals0_12, &ll_backend__proc_gen__LiveVals1_15);
            }
#line 1273 "proc_gen.m"
            {
#line 1273 "proc_gen.m"
              ll_backend__proc_gen__Uinstr_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1273 "proc_gen.m"
              MR_hl_field(MR_mktag(2), ll_backend__proc_gen__Uinstr_16, 0) = ((MR_Box) (ll_backend__proc_gen__LiveVals1_15));
#line 1273 "proc_gen.m"
            }
#line 1274 "proc_gen.m"
            {
#line 1274 "proc_gen.m"
              ll_backend__proc_gen__Instr_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1274 "proc_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Instr_8, 0) = ((MR_Box) (ll_backend__proc_gen__Uinstr_16));
#line 1274 "proc_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Instr_8, 1) = ((MR_Box) (ll_backend__proc_gen__Comment_11));
#line 1274 "proc_gen.m"
            }
#line 1272 "proc_gen.m"
          }
#line 1275 "proc_gen.m"
        else
#line 1283 "proc_gen.m"
          {
#line 1283 "proc_gen.m"
            MR_Word ll_backend__proc_gen__Target_17;
#line 1283 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ReturnLabel_18;
#line 1283 "proc_gen.m"
            MR_Word ll_backend__proc_gen__Context_19;
#line 1283 "proc_gen.m"
            MR_Word ll_backend__proc_gen__GP_20;
#line 1283 "proc_gen.m"
            MR_Word ll_backend__proc_gen__CM_21;
#line 1283 "proc_gen.m"
            MR_Word ll_backend__proc_gen__LiveVals0_33;

#line 1276 "proc_gen.m"
            ll_backend__proc_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__proc_gen__Uinstr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1276 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 1276 "proc_gen.m"
              {
#line 1276 "proc_gen.m"
                ll_backend__proc_gen__Target_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 1)));
#line 1276 "proc_gen.m"
                ll_backend__proc_gen__ReturnLabel_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 2)));
#line 1276 "proc_gen.m"
                ll_backend__proc_gen__LiveVals0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 3)));
#line 1276 "proc_gen.m"
                ll_backend__proc_gen__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 4)));
#line 1276 "proc_gen.m"
                ll_backend__proc_gen__GP_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 5)));
#line 1276 "proc_gen.m"
                ll_backend__proc_gen__CM_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 6)));
#line 1278 "proc_gen.m"
                {
#line 1278 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__Empty_22;
#line 1278 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__LiveVals_23;
#line 1278 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_28_28;
#line 1278 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_29_29;
#line 1278 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_30_30;
#line 1278 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__Uinstr_32;

#line 1278 "proc_gen.m"
                  {
#line 1278 "proc_gen.m"
                    mercury__map__init_1_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[4], (MR_Word) &ll_backend__proc_gen_scalar_common_1[5], &ll_backend__proc_gen__Empty_22);
                  }
#line 1279 "proc_gen.m"
                  {
#line 1279 "proc_gen.m"
                    ll_backend__proc_gen__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1279 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1279 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_30_30, 1) = ((MR_Box) (ll_backend__proc_gen__HeadVar__2_2));
#line 1279 "proc_gen.m"
                  }
#line 1279 "proc_gen.m"
                  {
#line 1279 "proc_gen.m"
                    ll_backend__proc_gen__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1279 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_29_29, 0) = ((MR_Box) (ll_backend__proc_gen__V_30_30));
#line 1279 "proc_gen.m"
                  }
#line 1279 "proc_gen.m"
                  {
#line 1279 "proc_gen.m"
                    ll_backend__proc_gen__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1279 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_28_28, 0) = ((MR_Box) (ll_backend__proc_gen__V_29_29));
#line 1279 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1279 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_28_28, 2) = ((MR_Box) (ll_backend__proc_gen__Empty_22));
#line 1279 "proc_gen.m"
                  }
#line 1280 "proc_gen.m"
                  {
#line 1280 "proc_gen.m"
                    ll_backend__proc_gen__LiveVals_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1280 "proc_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__LiveVals_23, 0) = ((MR_Box) (ll_backend__proc_gen__V_28_28));
#line 1280 "proc_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__LiveVals_23, 1) = ((MR_Box) (ll_backend__proc_gen__LiveVals0_33));
#line 1280 "proc_gen.m"
                  }
#line 1281 "proc_gen.m"
                  {
#line 1281 "proc_gen.m"
                    ll_backend__proc_gen__Uinstr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1281 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1281 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 1) = ((MR_Box) (ll_backend__proc_gen__Target_17));
#line 1281 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 2) = ((MR_Box) (ll_backend__proc_gen__ReturnLabel_18));
#line 1281 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 3) = ((MR_Box) (ll_backend__proc_gen__LiveVals_23));
#line 1281 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 4) = ((MR_Box) (ll_backend__proc_gen__Context_19));
#line 1281 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 5) = ((MR_Box) (ll_backend__proc_gen__GP_20));
#line 1281 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 6) = ((MR_Box) (ll_backend__proc_gen__CM_21));
#line 1281 "proc_gen.m"
                  }
#line 1282 "proc_gen.m"
                  {
#line 1282 "proc_gen.m"
                    ll_backend__proc_gen__Instr_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1282 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Instr_8, 0) = ((MR_Box) (ll_backend__proc_gen__Uinstr_32));
#line 1282 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Instr_8, 1) = ((MR_Box) (ll_backend__proc_gen__Comment_11));
#line 1282 "proc_gen.m"
                  }
#line 1278 "proc_gen.m"
                }
#line 1276 "proc_gen.m"
              }
#line 1276 "proc_gen.m"
            else
#line 1284 "proc_gen.m"
              ll_backend__proc_gen__Instr_8 = ll_backend__proc_gen__Instr0_5;
#line 1283 "proc_gen.m"
          }
#line 1286 "proc_gen.m"
        {
#line 1286 "proc_gen.m"
          ll_backend__proc_gen__add_saved_succip_3_p_0(ll_backend__proc_gen__Instrs0_6, ll_backend__proc_gen__HeadVar__2_2, &ll_backend__proc_gen__Instrs_9);
        }
#line 1264 "proc_gen.m"
        {
#line 1264 "proc_gen.m"
          MR_Word base;
#line 1264 "proc_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1264 "proc_gen.m"
          *ll_backend__proc_gen__HeadVar__3_3 = base;
#line 1264 "proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__proc_gen__Instr_8));
#line 1264 "proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__proc_gen__Instrs_9));
#line 1264 "proc_gen.m"
        }
#line 1264 "proc_gen.m"
      }
#line 1263 "proc_gen.m"
  }
#line 1260 "proc_gen.m"
}

#line 1249 "proc_gen.m"
static MR_Word MR_CALL 
ll_backend__proc_gen__project_layout_locn_lval_1_f_0(
#line 1249 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1)
#line 1249 "proc_gen.m"
{
#line 1251 "proc_gen.m"
  {
#line 1251 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1251 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Lval_2;

#line 1251 "proc_gen.m"
    if (((MR_tag((MR_Word) ll_backend__proc_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1251 "proc_gen.m"
      ll_backend__proc_gen__Lval_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1251 "proc_gen.m"
    else
#line 1252 "proc_gen.m"
      {
#line 1252 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__V_5_5;

#line 1252 "proc_gen.m"
        ll_backend__proc_gen__Lval_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1252 "proc_gen.m"
        ll_backend__proc_gen__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1252 "proc_gen.m"
      }
#line 1251 "proc_gen.m"
    return ll_backend__proc_gen__Lval_2;
#line 1251 "proc_gen.m"
  }
#line 1249 "proc_gen.m"
}

#line 1242 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__add_type_info_lvals_4_p_0(
#line 1242 "proc_gen.m"
  MR_Word ll_backend__proc_gen___TVar_5,
#line 1242 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TypeInfoLocnSets_6,
#line 1242 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_0_9,
#line 1242 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_10)
#line 1242 "proc_gen.m"
{
#line 1245 "proc_gen.m"
  {
#line 1245 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;

#line 1245 "proc_gen.m"
    {
#line 1245 "proc_gen.m"
      ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_105_110_102_111_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0(ll_backend__proc_gen__TypeInfoLocnSets_6, ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_0_9, ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_10);
#line 1245 "proc_gen.m"
      return;
    }
#line 1245 "proc_gen.m"
  }
#line 1242 "proc_gen.m"
}

#line 1194 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0_3(
#line 1194 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg)
#line 1194 "proc_gen.m"
{
#line 1194 "proc_gen.m"
  {
#line 1194 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1194 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;

#line 1194 "proc_gen.m"
    {
#line 1194 "proc_gen.m"
      return ll_backend__proc_gen__succeeded = ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1194__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))));
    }
#line 1194 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 1194 "proc_gen.m"
  }
#line 1194 "proc_gen.m"
}

#line 1184 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0_2(
#line 1184 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg)
#line 1184 "proc_gen.m"
{
#line 1184 "proc_gen.m"
  {
#line 1184 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1184 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;

#line 1184 "proc_gen.m"
    {
#line 1184 "proc_gen.m"
      return ll_backend__proc_gen__succeeded = ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1184__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))));
    }
#line 1184 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 1184 "proc_gen.m"
  }
#line 1184 "proc_gen.m"
}

#line 1167 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0_1(
#line 1167 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 1167 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 1167 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 1167 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_3,
#line 1167 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_4)
#line 1167 "proc_gen.m"
{
#line 1167 "proc_gen.m"
  {
#line 1167 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;
#line 1167 "proc_gen.m"
    MR_Word ll_backend__proc_gen__conv0_STATE_VARIABLE_LiveLvals_10;

#line 1167 "proc_gen.m"
    {
#line 1167 "proc_gen.m"
      ll_backend__proc_gen__add_type_info_lvals_4_p_0(((MR_Word) ll_backend__proc_gen__wrapper_arg_1), ((MR_Word) ll_backend__proc_gen__wrapper_arg_2), ((MR_Word) ll_backend__proc_gen__wrapper_arg_3), &ll_backend__proc_gen__conv0_STATE_VARIABLE_LiveLvals_10);
    }
#line 1167 "proc_gen.m"
    *ll_backend__proc_gen__wrapper_arg_4 = ((MR_Box) (ll_backend__proc_gen__conv0_STATE_VARIABLE_LiveLvals_10));
#line 1167 "proc_gen.m"
  }
#line 1167 "proc_gen.m"
}

#line 1046 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0(
#line 1046 "proc_gen.m"
  MR_Word ll_backend__proc_gen__CodeModel_10,
#line 1046 "proc_gen.m"
  MR_Word ll_backend__proc_gen__FrameInfo_11,
#line 1046 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TraceSlotInfo_12,
#line 1046 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcContext_13,
#line 1046 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__RestoreDeallocCode_14,
#line 1046 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__ExitCode_15,
#line 1046 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_0_68,
#line 1046 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CI_69,
#line 1046 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_0_70)
#line 1046 "proc_gen.m"
{
#line 1051 "proc_gen.m"
  {
#line 1051 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1051 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TypeCtorInfo_258_258 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1051 "proc_gen.m"
    MR_Word ll_backend__proc_gen__StartComment_18;
#line 1051 "proc_gen.m"
    MR_Word ll_backend__proc_gen__EndComment_19;
#line 1051 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__TotalSlots_20;
#line 1051 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeSuccipSlot_21;
#line 1051 "proc_gen.m"
    MR_Word ll_backend__proc_gen__NondetPragma_22;

#line 1052 "proc_gen.m"
    {
#line 1052 "proc_gen.m"
      ll_backend__proc_gen__StartComment_18 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[31])));
    }
#line 1055 "proc_gen.m"
    {
#line 1055 "proc_gen.m"
      ll_backend__proc_gen__EndComment_19 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[32])));
    }
#line 1058 "proc_gen.m"
    ll_backend__proc_gen__TotalSlots_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FrameInfo_11, (MR_Integer) 0)));
#line 1058 "proc_gen.m"
    ll_backend__proc_gen__MaybeSuccipSlot_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FrameInfo_11, (MR_Integer) 1)));
#line 1058 "proc_gen.m"
    ll_backend__proc_gen__NondetPragma_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FrameInfo_11, (MR_Integer) 2)));
#line 1072 "proc_gen.m"
#line 1072 "proc_gen.m"
    switch (ll_backend__proc_gen__NondetPragma_22) {
#line 1072 "proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1072 "proc_gen.m"
      case (MR_Integer) 0:
#line 1073 "proc_gen.m"
        {
#line 1073 "proc_gen.m"
          MR_Word ll_backend__proc_gen__InstMap_27;
#line 1073 "proc_gen.m"
          MR_Word ll_backend__proc_gen__ArgModes_28;
#line 1073 "proc_gen.m"
          MR_Word ll_backend__proc_gen__HeadVars_29;
#line 1073 "proc_gen.m"
          MR_Word ll_backend__proc_gen__Args_30;
#line 1073 "proc_gen.m"
          MR_Word ll_backend__proc_gen__OutLvals_31;
#line 1073 "proc_gen.m"
          MR_Word ll_backend__proc_gen__FlushCode_32;
#line 1073 "proc_gen.m"
          MR_Word ll_backend__proc_gen__RestoreSuccipCode_34;
#line 1073 "proc_gen.m"
          MR_Word ll_backend__proc_gen__DeallocCode_35;
#line 1073 "proc_gen.m"
          MR_Word ll_backend__proc_gen__PruneTraceTicketCode_43;
#line 1073 "proc_gen.m"
          MR_Word ll_backend__proc_gen__PruneTraceTicketCodeCopy_44;
#line 1073 "proc_gen.m"
          MR_Word ll_backend__proc_gen__RestoreDeallocCodeCopy_45;
#line 1073 "proc_gen.m"
          MR_Word ll_backend__proc_gen__MaybeTraceInfo_46;
#line 1073 "proc_gen.m"
          MR_Word ll_backend__proc_gen__TraceExitCode_53;
#line 1073 "proc_gen.m"
          MR_Word ll_backend__proc_gen__LiveLvals_54;
#line 1073 "proc_gen.m"
          MR_Word ll_backend__proc_gen__ProcInfo_55;
#line 1073 "proc_gen.m"
          MR_Word ll_backend__proc_gen__MaybeSpecialReturn_56;
#line 1073 "proc_gen.m"
          MR_Word ll_backend__proc_gen__AllSuccessCode_58;
#line 1073 "proc_gen.m"
          MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_94_94;
#line 1073 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_129_129;
#line 1073 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_130_130;
#line 1073 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_220_220;
#line 1073 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_221_221;
#line 1073 "proc_gen.m"
          MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_79_247;
#line 1146 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_248_248;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_89_89;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_249_249;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_250_250;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_251_251;
#line 1106 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_252_252;
#line 1106 "proc_gen.m"
          MR_Integer ll_backend__proc_gen__V_36_36;

#line 1074 "proc_gen.m"
          {
#line 1074 "proc_gen.m"
            ll_backend__code_loc_dep__get_instmap_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CLD_0_70, &ll_backend__proc_gen__InstMap_27);
          }
#line 1075 "proc_gen.m"
          {
#line 1075 "proc_gen.m"
            ll_backend__proc_gen__ArgModes_28 = ll_backend__code_info__get_arginfo_1_f_0(ll_backend__proc_gen__STATE_VARIABLE_CI_0_68);
          }
#line 1076 "proc_gen.m"
          {
#line 1076 "proc_gen.m"
            ll_backend__proc_gen__HeadVars_29 = ll_backend__code_info__get_headvars_1_f_0(ll_backend__proc_gen__STATE_VARIABLE_CI_0_68);
          }
#line 1077 "proc_gen.m"
          {
#line 1077 "proc_gen.m"
            mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, ll_backend__proc_gen__HeadVars_29, ll_backend__proc_gen__ArgModes_28, &ll_backend__proc_gen__Args_30);
          }
#line 1078 "proc_gen.m"
          {
#line 1078 "proc_gen.m"
            ll_backend__proc_gen__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(ll_backend__proc_gen__InstMap_27);
          }
#line 1081 "proc_gen.m"
          if (ll_backend__proc_gen__succeeded)
#line 1079 "proc_gen.m"
            {
#line 1079 "proc_gen.m"
              {
#line 1079 "proc_gen.m"
                ll_backend__proc_gen__OutLvals_31 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
              }
#line 1080 "proc_gen.m"
              {
#line 1080 "proc_gen.m"
                ll_backend__proc_gen__FlushCode_32 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258);
              }
#line 1079 "proc_gen.m"
              ll_backend__proc_gen__STATE_VARIABLE_CLD_79_247 = ll_backend__proc_gen__STATE_VARIABLE_CLD_0_70;
#line 1079 "proc_gen.m"
            }
#line 1081 "proc_gen.m"
          else
#line 1082 "proc_gen.m"
            {
#line 1082 "proc_gen.m"
              ll_backend__code_loc_dep__setup_return_6_p_0(ll_backend__proc_gen__Args_30, &ll_backend__proc_gen__OutLvals_31, &ll_backend__proc_gen__FlushCode_32, ll_backend__proc_gen__STATE_VARIABLE_CI_0_68, ll_backend__proc_gen__STATE_VARIABLE_CLD_0_70, &ll_backend__proc_gen__STATE_VARIABLE_CLD_79_247);
            }
#line 1090 "proc_gen.m"
          if ((ll_backend__proc_gen__MaybeSuccipSlot_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1092 "proc_gen.m"
            {
#line 1092 "proc_gen.m"
              ll_backend__proc_gen__RestoreSuccipCode_34 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258);
            }
#line 1090 "proc_gen.m"
          else
#line 1085 "proc_gen.m"
            {
#line 1085 "proc_gen.m"
              MR_Integer ll_backend__proc_gen__SuccipSlot_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeSuccipSlot_21, (MR_Integer) 0)));
#line 1085 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_80_80;
#line 1085 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_81_81;
#line 1085 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_83_83;
#line 1085 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_84_84;

#line 1087 "proc_gen.m"
              {
#line 1087 "proc_gen.m"
                ll_backend__proc_gen__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1087 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1087 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_84_84, 1) = ((MR_Box) (ll_backend__proc_gen__SuccipSlot_33));
#line 1087 "proc_gen.m"
              }
#line 1087 "proc_gen.m"
              {
#line 1087 "proc_gen.m"
                ll_backend__proc_gen__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1087 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_83_83, 0) = ((MR_Box) (ll_backend__proc_gen__V_84_84));
#line 1087 "proc_gen.m"
              }
#line 1087 "proc_gen.m"
              {
#line 1087 "proc_gen.m"
                ll_backend__proc_gen__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1087 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1087 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1087 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_81_81, 2) = ((MR_Box) (ll_backend__proc_gen__V_83_83));
#line 1087 "proc_gen.m"
              }
#line 1087 "proc_gen.m"
              {
#line 1087 "proc_gen.m"
                ll_backend__proc_gen__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1087 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_80_80, 0) = ((MR_Box) (ll_backend__proc_gen__V_81_81));
#line 1087 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_80_80, 1) = ((MR_Box) ((MR_String) "restore the success ip"));
#line 1087 "proc_gen.m"
              }
#line 1086 "proc_gen.m"
              {
#line 1086 "proc_gen.m"
                ll_backend__proc_gen__RestoreSuccipCode_34 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ((MR_Box) (ll_backend__proc_gen__V_80_80)));
              }
#line 1085 "proc_gen.m"
            }
#line 1095 "proc_gen.m"
          ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__TotalSlots_20 == (MR_Integer) 0);
#line 1096 "proc_gen.m"
          if (!(ll_backend__proc_gen__succeeded))
#line 1096 "proc_gen.m"
            ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CodeModel_10 == (MR_Integer) 2);
#line 1100 "proc_gen.m"
          if (ll_backend__proc_gen__succeeded)
#line 1099 "proc_gen.m"
            {
#line 1099 "proc_gen.m"
              ll_backend__proc_gen__DeallocCode_35 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258);
            }
#line 1100 "proc_gen.m"
          else
#line 1101 "proc_gen.m"
            {
#line 1101 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_86_86;
#line 1101 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_87_87;

#line 1102 "proc_gen.m"
              {
#line 1102 "proc_gen.m"
                ll_backend__proc_gen__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1102 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 25));
#line 1102 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_87_87, 1) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_20));
#line 1102 "proc_gen.m"
              }
#line 1102 "proc_gen.m"
              {
#line 1102 "proc_gen.m"
                ll_backend__proc_gen__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1102 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_86_86, 0) = ((MR_Box) (ll_backend__proc_gen__V_87_87));
#line 1102 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_86_86, 1) = ((MR_Box) ((MR_String) "Deallocate stack frame"));
#line 1102 "proc_gen.m"
              }
#line 1101 "proc_gen.m"
              {
#line 1101 "proc_gen.m"
                ll_backend__proc_gen__DeallocCode_35 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ((MR_Box) (ll_backend__proc_gen__V_86_86)));
              }
#line 1101 "proc_gen.m"
            }
#line 1107 "proc_gen.m"
          ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CodeModel_10 == (MR_Integer) 2);
#line 1107 "proc_gen.m"
          ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
#line 1106 "proc_gen.m"
          if (ll_backend__proc_gen__succeeded)
#line 1106 "proc_gen.m"
            {
#line 1106 "proc_gen.m"
              ll_backend__proc_gen__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_12, (MR_Integer) 0)));
#line 1106 "proc_gen.m"
              ll_backend__proc_gen__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_12, (MR_Integer) 1)));
#line 1106 "proc_gen.m"
              ll_backend__proc_gen__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_12, (MR_Integer) 2)));
#line 1106 "proc_gen.m"
              ll_backend__proc_gen__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_12, (MR_Integer) 3)));
#line 1106 "proc_gen.m"
              ll_backend__proc_gen__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_12, (MR_Integer) 4)));
#line 1106 "proc_gen.m"
              ll_backend__proc_gen__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_12, (MR_Integer) 5)));
#line 1106 "proc_gen.m"
              ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__V_89_89)) == (MR_mktag((MR_Integer) 1)));
#line 1106 "proc_gen.m"
              if (ll_backend__proc_gen__succeeded)
#line 1106 "proc_gen.m"
                ll_backend__proc_gen__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_89_89, (MR_Integer) 0)));
#line 1106 "proc_gen.m"
            }
#line 1146 "proc_gen.m"
          if (ll_backend__proc_gen__succeeded)
#line 1139 "proc_gen.m"
            if ((ll_backend__proc_gen__V_248_248 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1140 "proc_gen.m"
              {
#line 1141 "proc_gen.m"
                {
#line 1141 "proc_gen.m"
                  ll_backend__proc_gen__PruneTraceTicketCode_43 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[33])));
                }
#line 1144 "proc_gen.m"
                ll_backend__proc_gen__PruneTraceTicketCodeCopy_44 = ll_backend__proc_gen__PruneTraceTicketCode_43;
#line 1140 "proc_gen.m"
                ll_backend__proc_gen__STATE_VARIABLE_CI_94_94 = ll_backend__proc_gen__STATE_VARIABLE_CI_0_68;
#line 1140 "proc_gen.m"
              }
#line 1139 "proc_gen.m"
            else
#line 1111 "proc_gen.m"
              {
#line 1111 "proc_gen.m"
                MR_Integer ll_backend__proc_gen__FromFullSlot_38 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_248_248, (MR_Integer) 0)));
#line 1111 "proc_gen.m"
                MR_Word ll_backend__proc_gen__StackId_39;
#line 1111 "proc_gen.m"
                MR_Word ll_backend__proc_gen__FromFullSlotLval_40;
#line 1111 "proc_gen.m"
                MR_Word ll_backend__proc_gen__SkipLabel_41;
#line 1111 "proc_gen.m"
                MR_Word ll_backend__proc_gen__SkipLabelCopy_42;
#line 1111 "proc_gen.m"
                MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_93_93;
#line 1111 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_95_95;
#line 1111 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_96_96;
#line 1111 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_97_97;
#line 1111 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_98_98;
#line 1111 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_100_100;
#line 1111 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_101_101;
#line 1111 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_103_103;
#line 1111 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_104_104;
#line 1111 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_107_107;
#line 1111 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_108_108;
#line 1111 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_109_109;
#line 1111 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_112_112;
#line 1111 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_113_113;
#line 1111 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_114_114;
#line 1111 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_118_118;
#line 1111 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_120_120;
#line 1111 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_124_124;
#line 1111 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_125_125;
#line 1111 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_126_126;

#line 1120 "proc_gen.m"
                {
#line 1120 "proc_gen.m"
                  ll_backend__proc_gen__StackId_39 = ll_backend__llds__code_model_to_main_stack_1_f_0(ll_backend__proc_gen__CodeModel_10);
                }
#line 1121 "proc_gen.m"
                {
#line 1121 "proc_gen.m"
                  ll_backend__proc_gen__FromFullSlotLval_40 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__proc_gen__StackId_39, ll_backend__proc_gen__FromFullSlot_38);
                }
#line 1123 "proc_gen.m"
                {
#line 1123 "proc_gen.m"
                  ll_backend__code_info__get_next_label_3_p_0(&ll_backend__proc_gen__SkipLabel_41, ll_backend__proc_gen__STATE_VARIABLE_CI_0_68, &ll_backend__proc_gen__STATE_VARIABLE_CI_93_93);
                }
#line 1124 "proc_gen.m"
                {
#line 1124 "proc_gen.m"
                  ll_backend__code_info__get_next_label_3_p_0(&ll_backend__proc_gen__SkipLabelCopy_42, ll_backend__proc_gen__STATE_VARIABLE_CI_93_93, &ll_backend__proc_gen__STATE_VARIABLE_CI_94_94);
                }
#line 1127 "proc_gen.m"
                {
#line 1127 "proc_gen.m"
                  ll_backend__proc_gen__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1127 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_100_100, 0) = ((MR_Box) (ll_backend__proc_gen__FromFullSlotLval_40));
#line 1127 "proc_gen.m"
                }
#line 1127 "proc_gen.m"
                {
#line 1127 "proc_gen.m"
                  ll_backend__proc_gen__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1127 "proc_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1127 "proc_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_98_98, 1) = ((MR_Box) ((MR_Integer) 7));
#line 1127 "proc_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_98_98, 2) = ((MR_Box) (ll_backend__proc_gen__V_100_100));
#line 1127 "proc_gen.m"
                }
#line 1128 "proc_gen.m"
                {
#line 1128 "proc_gen.m"
                  ll_backend__proc_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1128 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_101_101, 0) = ((MR_Box) (ll_backend__proc_gen__SkipLabel_41));
#line 1128 "proc_gen.m"
                }
#line 1127 "proc_gen.m"
                {
#line 1127 "proc_gen.m"
                  ll_backend__proc_gen__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1127 "proc_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1127 "proc_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_97_97, 1) = ((MR_Box) (ll_backend__proc_gen__V_98_98));
#line 1127 "proc_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_97_97, 2) = ((MR_Box) (ll_backend__proc_gen__V_101_101));
#line 1127 "proc_gen.m"
                }
#line 1126 "proc_gen.m"
                {
#line 1126 "proc_gen.m"
                  ll_backend__proc_gen__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1126 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_96_96, 0) = ((MR_Box) (ll_backend__proc_gen__V_97_97));
#line 1126 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_96_96, 1) = ((MR_Box) ((MR_String) ""));
#line 1126 "proc_gen.m"
                }
#line 1129 "proc_gen.m"
                ll_backend__proc_gen__V_104_104 = (MR_Word) &ll_backend__proc_gen_scalar_common_1[33];
#line 1130 "proc_gen.m"
                {
#line 1130 "proc_gen.m"
                  ll_backend__proc_gen__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "proc_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1130 "proc_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_109_109, 1) = ((MR_Box) (ll_backend__proc_gen__SkipLabel_41));
#line 1130 "proc_gen.m"
                }
#line 1130 "proc_gen.m"
                {
#line 1130 "proc_gen.m"
                  ll_backend__proc_gen__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1130 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_108_108, 0) = ((MR_Box) (ll_backend__proc_gen__V_109_109));
#line 1130 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_108_108, 1) = ((MR_Box) ((MR_String) ""));
#line 1130 "proc_gen.m"
                }
#line 1131 "proc_gen.m"
                {
#line 1131 "proc_gen.m"
                  ll_backend__proc_gen__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_107_107, 0) = ((MR_Box) (ll_backend__proc_gen__V_108_108));
#line 1131 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1131 "proc_gen.m"
                }
#line 1129 "proc_gen.m"
                {
#line 1129 "proc_gen.m"
                  ll_backend__proc_gen__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1129 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_103_103, 0) = ((MR_Box) (ll_backend__proc_gen__V_104_104));
#line 1129 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_103_103, 1) = ((MR_Box) (ll_backend__proc_gen__V_107_107));
#line 1129 "proc_gen.m"
                }
#line 1128 "proc_gen.m"
                {
#line 1128 "proc_gen.m"
                  ll_backend__proc_gen__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1128 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_95_95, 0) = ((MR_Box) (ll_backend__proc_gen__V_96_96));
#line 1128 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_95_95, 1) = ((MR_Box) (ll_backend__proc_gen__V_103_103));
#line 1128 "proc_gen.m"
                }
#line 1125 "proc_gen.m"
                {
#line 1125 "proc_gen.m"
                  ll_backend__proc_gen__PruneTraceTicketCode_43 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ll_backend__proc_gen__V_95_95);
                }
#line 1135 "proc_gen.m"
                {
#line 1135 "proc_gen.m"
                  ll_backend__proc_gen__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_118_118, 0) = ((MR_Box) (ll_backend__proc_gen__SkipLabelCopy_42));
#line 1135 "proc_gen.m"
                }
#line 1134 "proc_gen.m"
                {
#line 1134 "proc_gen.m"
                  ll_backend__proc_gen__V_114_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1134 "proc_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_114_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1134 "proc_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_114_114, 1) = ((MR_Box) (ll_backend__proc_gen__V_98_98));
#line 1134 "proc_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_114_114, 2) = ((MR_Box) (ll_backend__proc_gen__V_118_118));
#line 1134 "proc_gen.m"
                }
#line 1133 "proc_gen.m"
                {
#line 1133 "proc_gen.m"
                  ll_backend__proc_gen__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1133 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_113_113, 0) = ((MR_Box) (ll_backend__proc_gen__V_114_114));
#line 1133 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_113_113, 1) = ((MR_Box) ((MR_String) ""));
#line 1133 "proc_gen.m"
                }
#line 1137 "proc_gen.m"
                {
#line 1137 "proc_gen.m"
                  ll_backend__proc_gen__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1137 "proc_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_126_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1137 "proc_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_126_126, 1) = ((MR_Box) (ll_backend__proc_gen__SkipLabelCopy_42));
#line 1137 "proc_gen.m"
                }
#line 1137 "proc_gen.m"
                {
#line 1137 "proc_gen.m"
                  ll_backend__proc_gen__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1137 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_125_125, 0) = ((MR_Box) (ll_backend__proc_gen__V_126_126));
#line 1137 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_125_125, 1) = ((MR_Box) ((MR_String) ""));
#line 1137 "proc_gen.m"
                }
#line 1138 "proc_gen.m"
                {
#line 1138 "proc_gen.m"
                  ll_backend__proc_gen__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_124_124, 0) = ((MR_Box) (ll_backend__proc_gen__V_125_125));
#line 1138 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1138 "proc_gen.m"
                }
#line 1136 "proc_gen.m"
                {
#line 1136 "proc_gen.m"
                  ll_backend__proc_gen__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_120_120, 0) = ((MR_Box) (ll_backend__proc_gen__V_104_104));
#line 1136 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_120_120, 1) = ((MR_Box) (ll_backend__proc_gen__V_124_124));
#line 1136 "proc_gen.m"
                }
#line 1135 "proc_gen.m"
                {
#line 1135 "proc_gen.m"
                  ll_backend__proc_gen__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_112_112, 0) = ((MR_Box) (ll_backend__proc_gen__V_113_113));
#line 1135 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_112_112, 1) = ((MR_Box) (ll_backend__proc_gen__V_120_120));
#line 1135 "proc_gen.m"
                }
#line 1132 "proc_gen.m"
                {
#line 1132 "proc_gen.m"
                  ll_backend__proc_gen__PruneTraceTicketCodeCopy_44 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ll_backend__proc_gen__V_112_112);
                }
#line 1111 "proc_gen.m"
              }
#line 1146 "proc_gen.m"
          else
#line 1147 "proc_gen.m"
            {
#line 1147 "proc_gen.m"
              {
#line 1147 "proc_gen.m"
                ll_backend__proc_gen__PruneTraceTicketCode_43 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258);
              }
#line 1148 "proc_gen.m"
              {
#line 1148 "proc_gen.m"
                ll_backend__proc_gen__PruneTraceTicketCodeCopy_44 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258);
              }
#line 1147 "proc_gen.m"
              ll_backend__proc_gen__STATE_VARIABLE_CI_94_94 = ll_backend__proc_gen__STATE_VARIABLE_CI_0_68;
#line 1147 "proc_gen.m"
            }
#line 1152 "proc_gen.m"
          {
#line 1152 "proc_gen.m"
            ll_backend__proc_gen__V_129_129 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ll_backend__proc_gen__PruneTraceTicketCode_43, ll_backend__proc_gen__DeallocCode_35);
          }
#line 1151 "proc_gen.m"
          {
#line 1151 "proc_gen.m"
            *ll_backend__proc_gen__RestoreDeallocCode_14 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ll_backend__proc_gen__RestoreSuccipCode_34, ll_backend__proc_gen__V_129_129);
          }
#line 1154 "proc_gen.m"
          {
#line 1154 "proc_gen.m"
            ll_backend__proc_gen__V_130_130 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ll_backend__proc_gen__PruneTraceTicketCodeCopy_44, ll_backend__proc_gen__DeallocCode_35);
          }
#line 1153 "proc_gen.m"
          {
#line 1153 "proc_gen.m"
            ll_backend__proc_gen__RestoreDeallocCodeCopy_45 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ll_backend__proc_gen__RestoreSuccipCode_34, ll_backend__proc_gen__V_130_130);
          }
#line 1156 "proc_gen.m"
          {
#line 1156 "proc_gen.m"
            ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_94_94, &ll_backend__proc_gen__MaybeTraceInfo_46);
          }
#line 1174 "proc_gen.m"
          if ((ll_backend__proc_gen__MaybeTraceInfo_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1175 "proc_gen.m"
            {
#line 1176 "proc_gen.m"
              {
#line 1176 "proc_gen.m"
                ll_backend__proc_gen__TraceExitCode_53 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258);
              }
#line 1177 "proc_gen.m"
              ll_backend__proc_gen__LiveLvals_54 = ll_backend__proc_gen__OutLvals_31;
#line 1175 "proc_gen.m"
              *ll_backend__proc_gen__STATE_VARIABLE_CI_69 = ll_backend__proc_gen__STATE_VARIABLE_CI_94_94;
#line 1175 "proc_gen.m"
            }
#line 1174 "proc_gen.m"
          else
#line 1158 "proc_gen.m"
            {
#line 1158 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TraceInfo_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTraceInfo_46, (MR_Integer) 0)));
#line 1158 "proc_gen.m"
              MR_Word ll_backend__proc_gen__MaybeExitExternalInfo_48;
#line 1161 "proc_gen.m"
              MR_Word ll_backend__proc_gen___CLDAfterExit_49;

#line 1161 "proc_gen.m"
              {
#line 1161 "proc_gen.m"
                ll_backend__trace_gen__generate_external_event_code_8_p_0((MR_Integer) 1, ll_backend__proc_gen__TraceInfo_47, ll_backend__proc_gen__ProcContext_13, &ll_backend__proc_gen__MaybeExitExternalInfo_48, ll_backend__proc_gen__STATE_VARIABLE_CI_94_94, ll_backend__proc_gen__STATE_VARIABLE_CI_69, ll_backend__proc_gen__STATE_VARIABLE_CLD_79_247, &ll_backend__proc_gen___CLDAfterExit_49);
              }
#line 1169 "proc_gen.m"
              if ((ll_backend__proc_gen__MaybeExitExternalInfo_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1170 "proc_gen.m"
                {
#line 1171 "proc_gen.m"
                  ll_backend__proc_gen__LiveLvals_54 = ll_backend__proc_gen__OutLvals_31;
#line 1172 "proc_gen.m"
                  {
#line 1172 "proc_gen.m"
                    ll_backend__proc_gen__TraceExitCode_53 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258);
                  }
#line 1170 "proc_gen.m"
                }
#line 1169 "proc_gen.m"
              else
#line 1164 "proc_gen.m"
                {
#line 1164 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__ExitExternalInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeExitExternalInfo_48, (MR_Integer) 0)));
#line 1164 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__TypeInfoDatas_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ExitExternalInfo_50, (MR_Integer) 1)));
#line 1165 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ExitExternalInfo_50, (MR_Integer) 0)));
#line 1167 "proc_gen.m"
                  MR_Box ll_backend__proc_gen__conv1_LiveLvals_54;

#line 1165 "proc_gen.m"
                  ll_backend__proc_gen__TraceExitCode_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ExitExternalInfo_50, (MR_Integer) 2)));
#line 1167 "proc_gen.m"
                  {
#line 1167 "proc_gen.m"
                    mercury__map__foldl_4_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[4], (MR_Word) &ll_backend__proc_gen_scalar_common_1[5], (MR_Word) &ll_backend__proc_gen_scalar_common_1[6], (MR_Word) &ll_backend__proc_gen_scalar_common_2[6], ll_backend__proc_gen__TypeInfoDatas_52, ((MR_Box) (ll_backend__proc_gen__OutLvals_31)), &ll_backend__proc_gen__conv1_LiveLvals_54);
                  }
#line 1167 "proc_gen.m"
                  ll_backend__proc_gen__LiveLvals_54 = ((MR_Word) ll_backend__proc_gen__conv1_LiveLvals_54);
#line 1164 "proc_gen.m"
                }
#line 1158 "proc_gen.m"
            }
#line 1180 "proc_gen.m"
          {
#line 1180 "proc_gen.m"
            ll_backend__code_info__get_proc_info_2_p_0(*ll_backend__proc_gen__STATE_VARIABLE_CI_69, &ll_backend__proc_gen__ProcInfo_55);
          }
#line 1181 "proc_gen.m"
          {
#line 1181 "proc_gen.m"
            hlds__hlds_pred__proc_info_get_maybe_special_return_2_p_0(ll_backend__proc_gen__ProcInfo_55, &ll_backend__proc_gen__MaybeSpecialReturn_56);
          }
#line 1192 "proc_gen.m"
#line 1192 "proc_gen.m"
          switch (ll_backend__proc_gen__CodeModel_10) {
#line 1192 "proc_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1192 "proc_gen.m"
            case (MR_Integer) 0:
#line 1183 "proc_gen.m"
              {
#line 1183 "proc_gen.m"
                MR_Word ll_backend__proc_gen__SuccessCode_57;
#line 1183 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_204_204;
#line 1183 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_209_209;
#line 1183 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_210_210;
#line 1183 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_211_211;
#line 1183 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_219_219;

#line 1184 "proc_gen.m"
                {
#line 1184 "proc_gen.m"
                  ll_backend__proc_gen__V_204_204 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1184 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_204_204, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_5[3]));
#line 1184 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_204_204, 1) = ((MR_Box) (ll_backend__proc_gen__generate_exit_9_p_0_2));
#line 1184 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_204_204, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1184 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_204_204, 3) = ((MR_Box) (ll_backend__proc_gen__MaybeSpecialReturn_56));
#line 1184 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_204_204, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1184 "proc_gen.m"
                }
#line 1184 "proc_gen.m"
                {
#line 1184 "proc_gen.m"
                  mercury__require__expect_4_p_0(ll_backend__proc_gen__V_204_204, (MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.generate_exit\'/9", (MR_String) "det special_return");
                }
#line 1187 "proc_gen.m"
                {
#line 1187 "proc_gen.m"
                  ll_backend__proc_gen__V_211_211 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "proc_gen.m"
                  MR_hl_field(MR_mktag(2), ll_backend__proc_gen__V_211_211, 0) = ((MR_Box) (ll_backend__proc_gen__LiveLvals_54));
#line 1187 "proc_gen.m"
                }
#line 1187 "proc_gen.m"
                {
#line 1187 "proc_gen.m"
                  ll_backend__proc_gen__V_210_210 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1187 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_210_210, 0) = ((MR_Box) (ll_backend__proc_gen__V_211_211));
#line 1187 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_210_210, 1) = ((MR_Box) ((MR_String) ""));
#line 1187 "proc_gen.m"
                }
#line 1187 "proc_gen.m"
                {
#line 1187 "proc_gen.m"
                  ll_backend__proc_gen__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_209_209, 0) = ((MR_Box) (ll_backend__proc_gen__V_210_210));
#line 1187 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_209_209, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[14])));
#line 1187 "proc_gen.m"
                }
#line 1186 "proc_gen.m"
                {
#line 1186 "proc_gen.m"
                  ll_backend__proc_gen__SuccessCode_57 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ll_backend__proc_gen__V_209_209);
                }
#line 1190 "proc_gen.m"
                {
#line 1190 "proc_gen.m"
                  ll_backend__proc_gen__V_219_219 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ll_backend__proc_gen__RestoreDeallocCodeCopy_45, ll_backend__proc_gen__SuccessCode_57);
                }
#line 1190 "proc_gen.m"
                {
#line 1190 "proc_gen.m"
                  ll_backend__proc_gen__AllSuccessCode_58 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ll_backend__proc_gen__TraceExitCode_53, ll_backend__proc_gen__V_219_219);
                }
#line 1183 "proc_gen.m"
              }
#line 1192 "proc_gen.m"
              break;
#line 1192 "proc_gen.m"
            case (MR_Integer) 2:
#line 1206 "proc_gen.m"
              {
#line 1206 "proc_gen.m"
                MR_Word ll_backend__proc_gen__SetupRedoCode_61;
#line 1206 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_175_175;
#line 1206 "proc_gen.m"
                MR_Word ll_backend__proc_gen__SuccessCode_244;

#line 1210 "proc_gen.m"
                if ((ll_backend__proc_gen__MaybeTraceInfo_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1212 "proc_gen.m"
                  {
#line 1212 "proc_gen.m"
                    ll_backend__proc_gen__SetupRedoCode_61 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258);
                  }
#line 1210 "proc_gen.m"
                else
#line 1208 "proc_gen.m"
                  {
#line 1208 "proc_gen.m"
                    MR_Word ll_backend__proc_gen__TraceInfo2_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTraceInfo_46, (MR_Integer) 0)));

#line 1209 "proc_gen.m"
                    {
#line 1209 "proc_gen.m"
                      ll_backend__trace_gen__maybe_setup_redo_event_2_p_0(ll_backend__proc_gen__TraceInfo2_60, &ll_backend__proc_gen__SetupRedoCode_61);
                    }
#line 1208 "proc_gen.m"
                  }
#line 1228 "proc_gen.m"
                if ((ll_backend__proc_gen__MaybeSpecialReturn_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1229 "proc_gen.m"
                  {
#line 1229 "proc_gen.m"
                    MR_Word ll_backend__proc_gen__V_134_134;
#line 1229 "proc_gen.m"
                    MR_Word ll_backend__proc_gen__V_135_135;
#line 1229 "proc_gen.m"
                    MR_Word ll_backend__proc_gen__V_136_136;

#line 1231 "proc_gen.m"
                    {
#line 1231 "proc_gen.m"
                      ll_backend__proc_gen__V_136_136 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1231 "proc_gen.m"
                      MR_hl_field(MR_mktag(2), ll_backend__proc_gen__V_136_136, 0) = ((MR_Box) (ll_backend__proc_gen__LiveLvals_54));
#line 1231 "proc_gen.m"
                    }
#line 1231 "proc_gen.m"
                    {
#line 1231 "proc_gen.m"
                      ll_backend__proc_gen__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1231 "proc_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_135_135, 0) = ((MR_Box) (ll_backend__proc_gen__V_136_136));
#line 1231 "proc_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_135_135, 1) = ((MR_Box) ((MR_String) ""));
#line 1231 "proc_gen.m"
                    }
#line 1231 "proc_gen.m"
                    {
#line 1231 "proc_gen.m"
                      ll_backend__proc_gen__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1231 "proc_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_134_134, 0) = ((MR_Box) (ll_backend__proc_gen__V_135_135));
#line 1231 "proc_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[18])));
#line 1231 "proc_gen.m"
                    }
#line 1230 "proc_gen.m"
                    {
#line 1230 "proc_gen.m"
                      ll_backend__proc_gen__SuccessCode_244 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ll_backend__proc_gen__V_134_134);
                    }
#line 1229 "proc_gen.m"
                  }
#line 1228 "proc_gen.m"
                else
#line 1215 "proc_gen.m"
                  {
#line 1215 "proc_gen.m"
                    MR_Word ll_backend__proc_gen__SpecialReturn_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeSpecialReturn_56, (MR_Integer) 0)));
#line 1215 "proc_gen.m"
                    MR_String ll_backend__proc_gen__GeneratorLocnStr_63 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__SpecialReturn_62, (MR_Integer) 0)));
#line 1215 "proc_gen.m"
                    MR_String ll_backend__proc_gen__DebugStr_64 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__SpecialReturn_62, (MR_Integer) 1)));
#line 1215 "proc_gen.m"
                    MR_String ll_backend__proc_gen__ReturnCodeStr_66;
#line 1215 "proc_gen.m"
                    MR_Word ll_backend__proc_gen__Component_67;
#line 1215 "proc_gen.m"
                    MR_String ll_backend__proc_gen__V_146_146;
#line 1215 "proc_gen.m"
                    MR_String ll_backend__proc_gen__V_147_147;
#line 1215 "proc_gen.m"
                    MR_String ll_backend__proc_gen__V_149_149;
#line 1215 "proc_gen.m"
                    MR_String ll_backend__proc_gen__V_150_150;
#line 1215 "proc_gen.m"
                    MR_String ll_backend__proc_gen__V_152_152;
#line 1215 "proc_gen.m"
                    MR_Word ll_backend__proc_gen__V_156_156;
#line 1215 "proc_gen.m"
                    MR_Word ll_backend__proc_gen__V_157_157;
#line 1215 "proc_gen.m"
                    MR_Word ll_backend__proc_gen__V_158_158;
#line 1215 "proc_gen.m"
                    MR_Word ll_backend__proc_gen__V_160_160;
#line 1215 "proc_gen.m"
                    MR_Word ll_backend__proc_gen__V_161_161;
#line 1215 "proc_gen.m"
                    MR_Word ll_backend__proc_gen__V_162_162;
#line 1215 "proc_gen.m"
                    MR_Word ll_backend__proc_gen__V_164_164;

#line 1219 "proc_gen.m"
                    {
#line 1219 "proc_gen.m"
                      ll_backend__proc_gen__V_152_152 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__GeneratorLocnStr_63, (MR_String) ");\n");
                    }
#line 1219 "proc_gen.m"
                    {
#line 1219 "proc_gen.m"
                      ll_backend__proc_gen__V_150_150 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__proc_gen__V_152_152);
                    }
#line 1219 "proc_gen.m"
                    {
#line 1219 "proc_gen.m"
                      ll_backend__proc_gen__V_149_149 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__DebugStr_64, ll_backend__proc_gen__V_150_150);
                    }
#line 1218 "proc_gen.m"
                    {
#line 1218 "proc_gen.m"
                      ll_backend__proc_gen__V_147_147 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__proc_gen__V_149_149);
                    }
#line 1218 "proc_gen.m"
                    {
#line 1218 "proc_gen.m"
                      ll_backend__proc_gen__V_146_146 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_mmos_return_answer", ll_backend__proc_gen__V_147_147);
                    }
#line 1218 "proc_gen.m"
                    {
#line 1218 "proc_gen.m"
                      ll_backend__proc_gen__ReturnCodeStr_66 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ll_backend__proc_gen__V_146_146);
                    }
#line 1220 "proc_gen.m"
                    {
#line 1220 "proc_gen.m"
                      ll_backend__proc_gen__Component_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1220 "proc_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Component_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1220 "proc_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Component_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1220 "proc_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Component_67, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1220 "proc_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Component_67, 3) = ((MR_Box) (ll_backend__proc_gen__ReturnCodeStr_66));
#line 1220 "proc_gen.m"
                    }
#line 1224 "proc_gen.m"
                    {
#line 1224 "proc_gen.m"
                      ll_backend__proc_gen__V_158_158 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1224 "proc_gen.m"
                      MR_hl_field(MR_mktag(2), ll_backend__proc_gen__V_158_158, 0) = ((MR_Box) (ll_backend__proc_gen__LiveLvals_54));
#line 1224 "proc_gen.m"
                    }
#line 1224 "proc_gen.m"
                    {
#line 1224 "proc_gen.m"
                      ll_backend__proc_gen__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1224 "proc_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_157_157, 0) = ((MR_Box) (ll_backend__proc_gen__V_158_158));
#line 1224 "proc_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_157_157, 1) = ((MR_Box) ((MR_String) ""));
#line 1224 "proc_gen.m"
                    }
#line 1225 "proc_gen.m"
                    {
#line 1225 "proc_gen.m"
                      ll_backend__proc_gen__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1225 "proc_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_164_164, 0) = ((MR_Box) (ll_backend__proc_gen__Component_67));
#line 1225 "proc_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1225 "proc_gen.m"
                    }
#line 1225 "proc_gen.m"
                    {
#line 1225 "proc_gen.m"
                      ll_backend__proc_gen__V_162_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 1225 "proc_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_162_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 1225 "proc_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_162_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1225 "proc_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_162_162, 2) = ((MR_Box) (ll_backend__proc_gen__V_164_164));
#line 1225 "proc_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_162_162, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1225 "proc_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_162_162, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1225 "proc_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_162_162, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1225 "proc_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_162_162, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1225 "proc_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_162_162, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1225 "proc_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_162_162, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1225 "proc_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_162_162, 9) = ((MR_Box) ((MR_Integer) 0));
#line 1225 "proc_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_162_162, 10) = ((MR_Box) ((MR_Integer) 1));
#line 1225 "proc_gen.m"
                    }
#line 1225 "proc_gen.m"
                    {
#line 1225 "proc_gen.m"
                      ll_backend__proc_gen__V_161_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1225 "proc_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_161_161, 0) = ((MR_Box) (ll_backend__proc_gen__V_162_162));
#line 1225 "proc_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_161_161, 1) = ((MR_Box) ((MR_String) ""));
#line 1225 "proc_gen.m"
                    }
#line 1227 "proc_gen.m"
                    {
#line 1227 "proc_gen.m"
                      ll_backend__proc_gen__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "proc_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_160_160, 0) = ((MR_Box) (ll_backend__proc_gen__V_161_161));
#line 1227 "proc_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_160_160, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1227 "proc_gen.m"
                    }
#line 1224 "proc_gen.m"
                    {
#line 1224 "proc_gen.m"
                      ll_backend__proc_gen__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1224 "proc_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_156_156, 0) = ((MR_Box) (ll_backend__proc_gen__V_157_157));
#line 1224 "proc_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_156_156, 1) = ((MR_Box) (ll_backend__proc_gen__V_160_160));
#line 1224 "proc_gen.m"
                    }
#line 1223 "proc_gen.m"
                    {
#line 1223 "proc_gen.m"
                      ll_backend__proc_gen__SuccessCode_244 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ll_backend__proc_gen__V_156_156);
                    }
#line 1215 "proc_gen.m"
                  }
#line 1236 "proc_gen.m"
                {
#line 1236 "proc_gen.m"
                  ll_backend__proc_gen__V_175_175 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ll_backend__proc_gen__TraceExitCode_53, ll_backend__proc_gen__SuccessCode_244);
                }
#line 1236 "proc_gen.m"
                {
#line 1236 "proc_gen.m"
                  ll_backend__proc_gen__AllSuccessCode_58 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ll_backend__proc_gen__SetupRedoCode_61, ll_backend__proc_gen__V_175_175);
                }
#line 1206 "proc_gen.m"
              }
#line 1192 "proc_gen.m"
              break;
#line 1192 "proc_gen.m"
            case (MR_Integer) 1:
#line 1193 "proc_gen.m"
              {
#line 1193 "proc_gen.m"
                MR_Word ll_backend__proc_gen__SuccessLiveRegs_59;
#line 1193 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_176_176;
#line 1193 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_184_184;
#line 1193 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_193_193;
#line 1193 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_194_194;
#line 1193 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_195_195;
#line 1193 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_203_203;
#line 1193 "proc_gen.m"
                MR_Word ll_backend__proc_gen__SuccessCode_240;

#line 1194 "proc_gen.m"
                {
#line 1194 "proc_gen.m"
                  ll_backend__proc_gen__V_176_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1194 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_176_176, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_5[3]));
#line 1194 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_176_176, 1) = ((MR_Box) (ll_backend__proc_gen__generate_exit_9_p_0_3));
#line 1194 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_176_176, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1194 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_176_176, 3) = ((MR_Box) (ll_backend__proc_gen__MaybeSpecialReturn_56));
#line 1194 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_176_176, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1194 "proc_gen.m"
                }
#line 1194 "proc_gen.m"
                {
#line 1194 "proc_gen.m"
                  mercury__require__expect_4_p_0(ll_backend__proc_gen__V_176_176, (MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.generate_exit\'/9", (MR_String) "semi special_return");
                }
#line 1196 "proc_gen.m"
                {
#line 1196 "proc_gen.m"
                  mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[10]))), ll_backend__proc_gen__LiveLvals_54, &ll_backend__proc_gen__SuccessLiveRegs_59);
                }
#line 1200 "proc_gen.m"
                {
#line 1200 "proc_gen.m"
                  ll_backend__proc_gen__V_195_195 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1200 "proc_gen.m"
                  MR_hl_field(MR_mktag(2), ll_backend__proc_gen__V_195_195, 0) = ((MR_Box) (ll_backend__proc_gen__SuccessLiveRegs_59));
#line 1200 "proc_gen.m"
                }
#line 1200 "proc_gen.m"
                {
#line 1200 "proc_gen.m"
                  ll_backend__proc_gen__V_194_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1200 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_194_194, 0) = ((MR_Box) (ll_backend__proc_gen__V_195_195));
#line 1200 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_194_194, 1) = ((MR_Box) ((MR_String) ""));
#line 1200 "proc_gen.m"
                }
#line 1200 "proc_gen.m"
                {
#line 1200 "proc_gen.m"
                  ll_backend__proc_gen__V_193_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1200 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_193_193, 0) = ((MR_Box) (ll_backend__proc_gen__V_194_194));
#line 1200 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_193_193, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[14])));
#line 1200 "proc_gen.m"
                }
#line 1199 "proc_gen.m"
                {
#line 1199 "proc_gen.m"
                  ll_backend__proc_gen__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1199 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_184_184, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[20]));
#line 1199 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_184_184, 1) = ((MR_Box) (ll_backend__proc_gen__V_193_193));
#line 1199 "proc_gen.m"
                }
#line 1197 "proc_gen.m"
                {
#line 1197 "proc_gen.m"
                  ll_backend__proc_gen__SuccessCode_240 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ll_backend__proc_gen__V_184_184);
                }
#line 1203 "proc_gen.m"
                {
#line 1203 "proc_gen.m"
                  ll_backend__proc_gen__V_203_203 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ll_backend__proc_gen__RestoreDeallocCodeCopy_45, ll_backend__proc_gen__SuccessCode_240);
                }
#line 1203 "proc_gen.m"
                {
#line 1203 "proc_gen.m"
                  ll_backend__proc_gen__AllSuccessCode_58 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ll_backend__proc_gen__TraceExitCode_53, ll_backend__proc_gen__V_203_203);
                }
#line 1193 "proc_gen.m"
              }
#line 1192 "proc_gen.m"
              break;
#line 1192 "proc_gen.m"
          }
#line 1239 "proc_gen.m"
          {
#line 1239 "proc_gen.m"
            ll_backend__proc_gen__V_221_221 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ll_backend__proc_gen__AllSuccessCode_58, ll_backend__proc_gen__EndComment_19);
          }
#line 1239 "proc_gen.m"
          {
#line 1239 "proc_gen.m"
            ll_backend__proc_gen__V_220_220 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ll_backend__proc_gen__FlushCode_32, ll_backend__proc_gen__V_221_221);
          }
#line 1239 "proc_gen.m"
          {
#line 1239 "proc_gen.m"
            *ll_backend__proc_gen__ExitCode_15 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ll_backend__proc_gen__StartComment_18, ll_backend__proc_gen__V_220_220);
          }
#line 1073 "proc_gen.m"
        }
#line 1072 "proc_gen.m"
        break;
#line 1072 "proc_gen.m"
      case (MR_Integer) 1:
#line 1060 "proc_gen.m"
        {
#line 1060 "proc_gen.m"
          MR_Word ll_backend__proc_gen__UndefComponents_24;
#line 1060 "proc_gen.m"
          MR_Word ll_backend__proc_gen__UndefCode_26;
#line 1060 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_222_222;
#line 1060 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_225_225;
#line 1060 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_226_226;
#line 1060 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_228_228;
#line 1060 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_229_229;
#line 1060 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_239_239;

#line 1063 "proc_gen.m"
          {
#line 1063 "proc_gen.m"
            ll_backend__proc_gen__V_226_226 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
#line 1063 "proc_gen.m"
          {
#line 1063 "proc_gen.m"
            ll_backend__proc_gen__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1063 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_225_225, 0) = ((MR_Box) (ll_backend__proc_gen__V_226_226));
#line 1063 "proc_gen.m"
          }
#line 1062 "proc_gen.m"
          {
#line 1062 "proc_gen.m"
            ll_backend__proc_gen__V_222_222 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1062 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_222_222, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1062 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_222_222, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1062 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_222_222, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1062 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_222_222, 3) = ((MR_Box) (ll_backend__proc_gen__V_225_225));
#line 1062 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_222_222, 4) = ((MR_Box) ((MR_String) "#undef\tMR_ORDINARY_SLOTS\n"));
#line 1062 "proc_gen.m"
          }
#line 1064 "proc_gen.m"
          {
#line 1064 "proc_gen.m"
            ll_backend__proc_gen__UndefComponents_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1064 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__UndefComponents_24, 0) = ((MR_Box) (ll_backend__proc_gen__V_222_222));
#line 1064 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__UndefComponents_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1064 "proc_gen.m"
          }
#line 1067 "proc_gen.m"
          {
#line 1067 "proc_gen.m"
            ll_backend__proc_gen__V_229_229 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_229_229, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 1067 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_229_229, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1067 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_229_229, 2) = ((MR_Box) (ll_backend__proc_gen__UndefComponents_24));
#line 1067 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_229_229, 3) = ((MR_Box) ((MR_Integer) 1));
#line 1067 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_229_229, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1067 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_229_229, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1067 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_229_229, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1067 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_229_229, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1067 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_229_229, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1067 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_229_229, 9) = ((MR_Box) ((MR_Integer) 0));
#line 1067 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_229_229, 10) = ((MR_Box) ((MR_Integer) 1));
#line 1067 "proc_gen.m"
          }
#line 1067 "proc_gen.m"
          {
#line 1067 "proc_gen.m"
            ll_backend__proc_gen__V_228_228 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1067 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_228_228, 0) = ((MR_Box) (ll_backend__proc_gen__V_229_229));
#line 1067 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_228_228, 1) = ((MR_Box) ((MR_String) ""));
#line 1067 "proc_gen.m"
          }
#line 1066 "proc_gen.m"
          {
#line 1066 "proc_gen.m"
            ll_backend__proc_gen__UndefCode_26 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ((MR_Box) (ll_backend__proc_gen__V_228_228)));
          }
#line 1070 "proc_gen.m"
          {
#line 1070 "proc_gen.m"
            *ll_backend__proc_gen__RestoreDeallocCode_14 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258);
          }
#line 1071 "proc_gen.m"
          {
#line 1071 "proc_gen.m"
            ll_backend__proc_gen__V_239_239 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ll_backend__proc_gen__UndefCode_26, ll_backend__proc_gen__EndComment_19);
          }
#line 1071 "proc_gen.m"
          {
#line 1071 "proc_gen.m"
            *ll_backend__proc_gen__ExitCode_15 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_258_258, ll_backend__proc_gen__StartComment_18, ll_backend__proc_gen__V_239_239);
          }
#line 1060 "proc_gen.m"
          *ll_backend__proc_gen__STATE_VARIABLE_CI_69 = ll_backend__proc_gen__STATE_VARIABLE_CI_0_68;
#line 1060 "proc_gen.m"
        }
#line 1072 "proc_gen.m"
        break;
#line 1072 "proc_gen.m"
    }
#line 1051 "proc_gen.m"
  }
#line 1046 "proc_gen.m"
}

#line 915 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_entry_6_p_0(
#line 915 "proc_gen.m"
  MR_Word ll_backend__proc_gen__CI_7,
#line 915 "proc_gen.m"
  MR_Word ll_backend__proc_gen__CodeModel_8,
#line 915 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Goal_9,
#line 915 "proc_gen.m"
  MR_Word ll_backend__proc_gen__OutsideResumePoint_10,
#line 915 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__FrameInfo_11,
#line 915 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__EntryCode_12)
#line 915 "proc_gen.m"
{
#line 919 "proc_gen.m"
  {
#line 919 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TypeCtorInfo_77_77;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__StackSlots_13;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__VarSet_14;
#line 919 "proc_gen.m"
    MR_String ll_backend__proc_gen__SlotsComment_15;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__StartComment_16;
#line 919 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__MainSlots_17;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredId_18;
#line 919 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__ProcId_19;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ModuleInfo_20;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__EntryLabel_21;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__LabelCode_22;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Used_23;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__SaveSuccipCode_25;
#line 919 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__TotalSlots_26;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeSuccipSlot_27;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeTraceInfo_28;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TraceFillCode_30;
#line 919 "proc_gen.m"
    MR_String ll_backend__proc_gen__PushMsg_31;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__AllocCode_34;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__NondetPragma_35;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__EndComment_38;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_39_39;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_44_44;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_45_45;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_46_46;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_50_50;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_51_51;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_73_73;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_74_74;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_75_75;
#line 919 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_76_76;

#line 920 "proc_gen.m"
    {
#line 920 "proc_gen.m"
      ll_backend__code_info__get_stack_slots_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__StackSlots_13);
    }
#line 921 "proc_gen.m"
    {
#line 921 "proc_gen.m"
      ll_backend__code_info__get_varset_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__VarSet_14);
    }
#line 922 "proc_gen.m"
    {
#line 922 "proc_gen.m"
      ll_backend__proc_gen__SlotsComment_15 = hlds__hlds_llds__explain_stack_slots_2_f_0(ll_backend__proc_gen__StackSlots_13, ll_backend__proc_gen__VarSet_14);
    }
#line 4659 "ll_backend.proc_gen.c"
    ll_backend__proc_gen__TypeCtorInfo_77_77 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 925 "proc_gen.m"
    {
#line 925 "proc_gen.m"
      ll_backend__proc_gen__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 925 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_46_46, 0) = ((MR_Box) (ll_backend__proc_gen__SlotsComment_15));
#line 925 "proc_gen.m"
    }
#line 925 "proc_gen.m"
    {
#line 925 "proc_gen.m"
      ll_backend__proc_gen__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 925 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_45_45, 0) = ((MR_Box) (ll_backend__proc_gen__V_46_46));
#line 925 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_45_45, 1) = ((MR_Box) ((MR_String) ""));
#line 925 "proc_gen.m"
    }
#line 926 "proc_gen.m"
    {
#line 926 "proc_gen.m"
      ll_backend__proc_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 926 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_44_44, 0) = ((MR_Box) (ll_backend__proc_gen__V_45_45));
#line 926 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 926 "proc_gen.m"
    }
#line 924 "proc_gen.m"
    {
#line 924 "proc_gen.m"
      ll_backend__proc_gen__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 924 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_39_39, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[29]));
#line 924 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_39_39, 1) = ((MR_Box) (ll_backend__proc_gen__V_44_44));
#line 924 "proc_gen.m"
    }
#line 923 "proc_gen.m"
    {
#line 923 "proc_gen.m"
      ll_backend__proc_gen__StartComment_16 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77, ll_backend__proc_gen__V_39_39);
    }
#line 927 "proc_gen.m"
    {
#line 927 "proc_gen.m"
      ll_backend__code_info__get_total_stackslot_count_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__MainSlots_17);
    }
#line 928 "proc_gen.m"
    {
#line 928 "proc_gen.m"
      ll_backend__code_info__get_pred_id_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__PredId_18);
    }
#line 929 "proc_gen.m"
    {
#line 929 "proc_gen.m"
      ll_backend__code_info__get_proc_id_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__ProcId_19);
    }
#line 930 "proc_gen.m"
    {
#line 930 "proc_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__ModuleInfo_20);
    }
#line 931 "proc_gen.m"
    {
#line 931 "proc_gen.m"
      ll_backend__proc_gen__EntryLabel_21 = ll_backend__code_util__make_local_entry_label_4_f_0(ll_backend__proc_gen__ModuleInfo_20, ll_backend__proc_gen__PredId_18, ll_backend__proc_gen__ProcId_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 933 "proc_gen.m"
    {
#line 933 "proc_gen.m"
      ll_backend__proc_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 933 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 933 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_51_51, 1) = ((MR_Box) (ll_backend__proc_gen__EntryLabel_21));
#line 933 "proc_gen.m"
    }
#line 933 "proc_gen.m"
    {
#line 933 "proc_gen.m"
      ll_backend__proc_gen__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 933 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_50_50, 0) = ((MR_Box) (ll_backend__proc_gen__V_51_51));
#line 933 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_50_50, 1) = ((MR_Box) ((MR_String) "Procedure entry point"));
#line 933 "proc_gen.m"
    }
#line 932 "proc_gen.m"
    {
#line 932 "proc_gen.m"
      ll_backend__proc_gen__LabelCode_22 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77, ((MR_Box) (ll_backend__proc_gen__V_50_50)));
    }
#line 935 "proc_gen.m"
    {
#line 935 "proc_gen.m"
      ll_backend__code_info__get_succip_used_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__Used_23);
    }
#line 938 "proc_gen.m"
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__Used_23 == (MR_Integer) 1);
#line 938 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 938 "proc_gen.m"
      {
#line 940 "proc_gen.m"
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CodeModel_8 == (MR_Integer) 2);
#line 940 "proc_gen.m"
        ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
#line 938 "proc_gen.m"
      }
#line 949 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 942 "proc_gen.m"
      {
#line 942 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__V_53_53 = (ll_backend__proc_gen__MainSlots_17 + (MR_Integer) 1);
#line 942 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_55_55;
#line 942 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_56_56;
#line 942 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_57_57;

#line 1008 "proc_gen.m"
#line 1008 "proc_gen.m"
        switch (ll_backend__proc_gen__CodeModel_8) {
#line 1008 "proc_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1008 "proc_gen.m"
          case (MR_Integer) 0:
#line 1008 "proc_gen.m"
          case (MR_Integer) 1:
#line 1009 "proc_gen.m"
            {
#line 1009 "proc_gen.m"
              ll_backend__proc_gen__TotalSlots_26 = ll_backend__code_info__round_det_stack_frame_size_2_f_0(ll_backend__proc_gen__CI_7, ll_backend__proc_gen__V_53_53);
            }
#line 1008 "proc_gen.m"
            break;
#line 1008 "proc_gen.m"
          case (MR_Integer) 2:
#line 1012 "proc_gen.m"
            ll_backend__proc_gen__TotalSlots_26 = ll_backend__proc_gen__V_53_53;
#line 1008 "proc_gen.m"
            break;
#line 1008 "proc_gen.m"
        }
#line 944 "proc_gen.m"
        {
#line 944 "proc_gen.m"
          ll_backend__proc_gen__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 944 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 944 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_57_57, 1) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_26));
#line 944 "proc_gen.m"
        }
#line 944 "proc_gen.m"
        {
#line 944 "proc_gen.m"
          ll_backend__proc_gen__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 944 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 944 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_56_56, 1) = ((MR_Box) (ll_backend__proc_gen__V_57_57));
#line 944 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_56_56, 2) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_7[1]));
#line 944 "proc_gen.m"
        }
#line 944 "proc_gen.m"
        {
#line 944 "proc_gen.m"
          ll_backend__proc_gen__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 944 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_55_55, 0) = ((MR_Box) (ll_backend__proc_gen__V_56_56));
#line 944 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_55_55, 1) = ((MR_Box) ((MR_String) "Save the success ip"));
#line 944 "proc_gen.m"
        }
#line 943 "proc_gen.m"
        {
#line 943 "proc_gen.m"
          ll_backend__proc_gen__SaveSuccipCode_25 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77, ((MR_Box) (ll_backend__proc_gen__V_55_55)));
        }
#line 948 "proc_gen.m"
        {
#line 948 "proc_gen.m"
          ll_backend__proc_gen__MaybeSuccipSlot_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 948 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeSuccipSlot_27, 0) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_26));
#line 948 "proc_gen.m"
        }
#line 942 "proc_gen.m"
      }
#line 949 "proc_gen.m"
    else
#line 950 "proc_gen.m"
      {
#line 950 "proc_gen.m"
        {
#line 950 "proc_gen.m"
          ll_backend__proc_gen__SaveSuccipCode_25 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77);
        }
#line 1008 "proc_gen.m"
#line 1008 "proc_gen.m"
        switch (ll_backend__proc_gen__CodeModel_8) {
#line 1008 "proc_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1008 "proc_gen.m"
          case (MR_Integer) 0:
#line 1008 "proc_gen.m"
          case (MR_Integer) 1:
#line 1009 "proc_gen.m"
            {
#line 1009 "proc_gen.m"
              ll_backend__proc_gen__TotalSlots_26 = ll_backend__code_info__round_det_stack_frame_size_2_f_0(ll_backend__proc_gen__CI_7, ll_backend__proc_gen__MainSlots_17);
            }
#line 1008 "proc_gen.m"
            break;
#line 1008 "proc_gen.m"
          case (MR_Integer) 2:
#line 1012 "proc_gen.m"
            ll_backend__proc_gen__TotalSlots_26 = ll_backend__proc_gen__MainSlots_17;
#line 1008 "proc_gen.m"
            break;
#line 1008 "proc_gen.m"
        }
#line 952 "proc_gen.m"
        ll_backend__proc_gen__MaybeSuccipSlot_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 950 "proc_gen.m"
      }
#line 954 "proc_gen.m"
    {
#line 954 "proc_gen.m"
      ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__MaybeTraceInfo_28);
    }
#line 958 "proc_gen.m"
    if ((ll_backend__proc_gen__MaybeTraceInfo_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 960 "proc_gen.m"
      {
#line 960 "proc_gen.m"
        ll_backend__proc_gen__TraceFillCode_30 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77);
      }
#line 958 "proc_gen.m"
    else
#line 956 "proc_gen.m"
      {
#line 956 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TraceInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTraceInfo_28, (MR_Integer) 0)));

#line 957 "proc_gen.m"
        {
#line 957 "proc_gen.m"
          ll_backend__trace_gen__generate_slot_fill_code_3_p_0(ll_backend__proc_gen__CI_7, ll_backend__proc_gen__TraceInfo_29, &ll_backend__proc_gen__TraceFillCode_30);
        }
#line 956 "proc_gen.m"
      }
#line 963 "proc_gen.m"
    {
#line 963 "proc_gen.m"
      ll_backend__proc_gen__PushMsg_31 = ll_backend__proc_gen__push_msg_3_f_0(ll_backend__proc_gen__ModuleInfo_20, ll_backend__proc_gen__PredId_18, ll_backend__proc_gen__ProcId_19);
    }
#line 973 "proc_gen.m"
#line 973 "proc_gen.m"
    switch (ll_backend__proc_gen__CodeModel_8) {
#line 973 "proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 973 "proc_gen.m"
      case (MR_Integer) 0:
#line 973 "proc_gen.m"
      case (MR_Integer) 1:
#line 976 "proc_gen.m"
        {
#line 976 "proc_gen.m"
          MR_Word ll_backend__proc_gen__IsLeaf_36;
#line 976 "proc_gen.m"
          MR_Word ll_backend__proc_gen__StackIncrKind_37;

#line 977 "proc_gen.m"
          {
#line 977 "proc_gen.m"
            ll_backend__proc_gen__IsLeaf_36 = hlds__goal_util__proc_body_is_leaf_1_f_0(ll_backend__proc_gen__Goal_9);
          }
#line 981 "proc_gen.m"
#line 981 "proc_gen.m"
          switch (ll_backend__proc_gen__IsLeaf_36) {
#line 981 "proc_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 981 "proc_gen.m"
            case (MR_Integer) 0:
#line 983 "proc_gen.m"
              ll_backend__proc_gen__StackIncrKind_37 = (MR_Integer) 0;
#line 981 "proc_gen.m"
              break;
#line 981 "proc_gen.m"
            case (MR_Integer) 1:
#line 980 "proc_gen.m"
              ll_backend__proc_gen__StackIncrKind_37 = (MR_Integer) 1;
#line 981 "proc_gen.m"
              break;
#line 981 "proc_gen.m"
          }
#line 985 "proc_gen.m"
          ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__TotalSlots_26 > (MR_Integer) 0);
#line 990 "proc_gen.m"
          if (ll_backend__proc_gen__succeeded)
#line 986 "proc_gen.m"
            {
#line 986 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_62_62;
#line 986 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_63_63;

#line 987 "proc_gen.m"
              {
#line 987 "proc_gen.m"
                ll_backend__proc_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 987 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 24));
#line 987 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_63_63, 1) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_26));
#line 987 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_63_63, 2) = ((MR_Box) (ll_backend__proc_gen__PushMsg_31));
#line 987 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_63_63, 3) = ((MR_Box) (ll_backend__proc_gen__StackIncrKind_37));
#line 987 "proc_gen.m"
              }
#line 987 "proc_gen.m"
              {
#line 987 "proc_gen.m"
                ll_backend__proc_gen__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 987 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_62_62, 0) = ((MR_Box) (ll_backend__proc_gen__V_63_63));
#line 987 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_62_62, 1) = ((MR_Box) ((MR_String) "Allocate stack frame"));
#line 987 "proc_gen.m"
              }
#line 986 "proc_gen.m"
              {
#line 986 "proc_gen.m"
                ll_backend__proc_gen__AllocCode_34 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77, ((MR_Box) (ll_backend__proc_gen__V_62_62)));
              }
#line 986 "proc_gen.m"
            }
#line 990 "proc_gen.m"
          else
#line 991 "proc_gen.m"
            {
#line 991 "proc_gen.m"
              ll_backend__proc_gen__AllocCode_34 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77);
            }
#line 993 "proc_gen.m"
          ll_backend__proc_gen__NondetPragma_35 = (MR_Integer) 0;
#line 976 "proc_gen.m"
        }
#line 973 "proc_gen.m"
        break;
#line 973 "proc_gen.m"
      case (MR_Integer) 2:
#line 965 "proc_gen.m"
        {
#line 965 "proc_gen.m"
          MR_Word ll_backend__proc_gen__OutsideResumeAddress_32;
#line 965 "proc_gen.m"
          MR_Word ll_backend__proc_gen__NondetFrameInfo_33;
#line 965 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_65_65;
#line 965 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_66_66;
#line 965 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_67_67;

#line 966 "proc_gen.m"
          {
#line 966 "proc_gen.m"
            ll_backend__code_loc_dep__resume_point_stack_addr_2_p_0(ll_backend__proc_gen__OutsideResumePoint_10, &ll_backend__proc_gen__OutsideResumeAddress_32);
          }
#line 967 "proc_gen.m"
          {
#line 967 "proc_gen.m"
            ll_backend__proc_gen__NondetFrameInfo_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 967 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__NondetFrameInfo_33, 0) = ((MR_Box) (ll_backend__proc_gen__PushMsg_31));
#line 967 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__NondetFrameInfo_33, 1) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_26));
#line 967 "proc_gen.m"
          }
#line 969 "proc_gen.m"
          {
#line 969 "proc_gen.m"
            ll_backend__proc_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 969 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_67_67, 0) = ((MR_Box) (ll_backend__proc_gen__OutsideResumeAddress_32));
#line 969 "proc_gen.m"
          }
#line 969 "proc_gen.m"
          {
#line 969 "proc_gen.m"
            ll_backend__proc_gen__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 969 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 969 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_66_66, 1) = ((MR_Box) (ll_backend__proc_gen__NondetFrameInfo_33));
#line 969 "proc_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_66_66, 2) = ((MR_Box) (ll_backend__proc_gen__V_67_67));
#line 969 "proc_gen.m"
          }
#line 969 "proc_gen.m"
          {
#line 969 "proc_gen.m"
            ll_backend__proc_gen__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 969 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_65_65, 0) = ((MR_Box) (ll_backend__proc_gen__V_66_66));
#line 969 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_65_65, 1) = ((MR_Box) ((MR_String) "Allocate stack frame"));
#line 969 "proc_gen.m"
          }
#line 968 "proc_gen.m"
          {
#line 968 "proc_gen.m"
            ll_backend__proc_gen__AllocCode_34 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77, ((MR_Box) (ll_backend__proc_gen__V_65_65)));
          }
#line 972 "proc_gen.m"
          ll_backend__proc_gen__NondetPragma_35 = (MR_Integer) 0;
#line 965 "proc_gen.m"
        }
#line 973 "proc_gen.m"
        break;
#line 973 "proc_gen.m"
    }
#line 995 "proc_gen.m"
    {
#line 995 "proc_gen.m"
      MR_Word base;
#line 995 "proc_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 995 "proc_gen.m"
      *ll_backend__proc_gen__FrameInfo_11 = base;
#line 995 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_26));
#line 995 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__proc_gen__MaybeSuccipSlot_27));
#line 995 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__proc_gen__NondetPragma_35));
#line 995 "proc_gen.m"
    }
#line 996 "proc_gen.m"
    {
#line 996 "proc_gen.m"
      ll_backend__proc_gen__EndComment_38 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77, ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[30])));
    }
#line 1000 "proc_gen.m"
    {
#line 1000 "proc_gen.m"
      ll_backend__proc_gen__V_76_76 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77, ll_backend__proc_gen__TraceFillCode_30, ll_backend__proc_gen__EndComment_38);
    }
#line 1000 "proc_gen.m"
    {
#line 1000 "proc_gen.m"
      ll_backend__proc_gen__V_75_75 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77, ll_backend__proc_gen__SaveSuccipCode_25, ll_backend__proc_gen__V_76_76);
    }
#line 999 "proc_gen.m"
    {
#line 999 "proc_gen.m"
      ll_backend__proc_gen__V_74_74 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77, ll_backend__proc_gen__AllocCode_34, ll_backend__proc_gen__V_75_75);
    }
#line 999 "proc_gen.m"
    {
#line 999 "proc_gen.m"
      ll_backend__proc_gen__V_73_73 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77, ll_backend__proc_gen__LabelCode_22, ll_backend__proc_gen__V_74_74);
    }
#line 999 "proc_gen.m"
    {
#line 999 "proc_gen.m"
      *ll_backend__proc_gen__EntryCode_12 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77, ll_backend__proc_gen__StartComment_16, ll_backend__proc_gen__V_73_73);
    }
#line 919 "proc_gen.m"
  }
#line 915 "proc_gen.m"
}

#line 873 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_call_event_8_p_0(
#line 873 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TraceInfo_9,
#line 873 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcContext_10,
#line 873 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__MaybeTraceCallLabel_11,
#line 873 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__TraceCallCode_12,
#line 873 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_0_19,
#line 873 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CI_20,
#line 873 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_0_21,
#line 873 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CLD_22)
#line 873 "proc_gen.m"
{
#line 878 "proc_gen.m"
  {
#line 878 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 878 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeCallExternalInfo_15;

#line 879 "proc_gen.m"
    {
#line 879 "proc_gen.m"
      ll_backend__trace_gen__generate_external_event_code_8_p_0((MR_Integer) 0, ll_backend__proc_gen__TraceInfo_9, ll_backend__proc_gen__ProcContext_10, &ll_backend__proc_gen__MaybeCallExternalInfo_15, ll_backend__proc_gen__STATE_VARIABLE_CI_0_19, ll_backend__proc_gen__STATE_VARIABLE_CI_20, ll_backend__proc_gen__STATE_VARIABLE_CLD_0_21, ll_backend__proc_gen__STATE_VARIABLE_CLD_22);
    }
#line 886 "proc_gen.m"
    if ((ll_backend__proc_gen__MaybeCallExternalInfo_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 887 "proc_gen.m"
      {
#line 890 "proc_gen.m"
        {
#line 890 "proc_gen.m"
          *ll_backend__proc_gen__TraceCallCode_12 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 891 "proc_gen.m"
        *ll_backend__proc_gen__MaybeTraceCallLabel_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 887 "proc_gen.m"
      }
#line 886 "proc_gen.m"
    else
#line 882 "proc_gen.m"
      {
#line 882 "proc_gen.m"
        MR_Word ll_backend__proc_gen__CallExternalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeCallExternalInfo_15, (MR_Integer) 0)));
#line 882 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TraceCallLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__CallExternalInfo_16, (MR_Integer) 0)));
#line 883 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__CallExternalInfo_16, (MR_Integer) 1)));

#line 883 "proc_gen.m"
        *ll_backend__proc_gen__TraceCallCode_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__CallExternalInfo_16, (MR_Integer) 2)));
#line 885 "proc_gen.m"
        {
#line 885 "proc_gen.m"
          MR_Word base;
#line 885 "proc_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 885 "proc_gen.m"
          *ll_backend__proc_gen__MaybeTraceCallLabel_11 = base;
#line 885 "proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__proc_gen__TraceCallLabel_17));
#line 885 "proc_gen.m"
        }
#line 882 "proc_gen.m"
      }
#line 878 "proc_gen.m"
  }
#line 873 "proc_gen.m"
}

#line 802 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_category_code_11_p_0_1(
#line 802 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg)
#line 802 "proc_gen.m"
{
#line 802 "proc_gen.m"
  {
#line 802 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 802 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;

#line 802 "proc_gen.m"
    {
#line 802 "proc_gen.m"
      return ll_backend__proc_gen__succeeded = ll_backend__proc_gen__IntroducedFrom__pred__generate_category_code__802__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))));
    }
#line 802 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 802 "proc_gen.m"
  }
#line 802 "proc_gen.m"
}

#line 679 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_category_code_11_p_0(
#line 679 "proc_gen.m"
  MR_Word ll_backend__proc_gen__CodeModel_12,
#line 679 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcContext_13,
#line 679 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Goal_14,
#line 679 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ResumePoint_15,
#line 679 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TraceSlotInfo_16,
#line 679 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__Code_17,
#line 679 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__MaybeTraceCallLabel_18,
#line 679 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__FrameInfo_19,
#line 679 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_0_60,
#line 679 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CI_61,
#line 679 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_0_62)
#line 679 "proc_gen.m"
{
#line 687 "proc_gen.m"
  {
#line 687 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;

#line 687 "proc_gen.m"
#line 687 "proc_gen.m"
    switch (ll_backend__proc_gen__CodeModel_12) {
#line 687 "proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 687 "proc_gen.m"
      case (MR_Integer) 0:
#line 687 "proc_gen.m"
        {
#line 687 "proc_gen.m"
          MR_Word ll_backend__proc_gen__Globals_22;
#line 687 "proc_gen.m"
          MR_Word ll_backend__proc_gen__MiddleRec_23;
#line 698 "proc_gen.m"
          MR_Word ll_backend__proc_gen__MiddleRecCode_24;
#line 698 "proc_gen.m"
          MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_182_182;
#line 693 "proc_gen.m"
          MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_183_183;

#line 689 "proc_gen.m"
          {
#line 689 "proc_gen.m"
            ll_backend__code_info__get_globals_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_0_60, &ll_backend__proc_gen__Globals_22);
          }
#line 690 "proc_gen.m"
          {
#line 690 "proc_gen.m"
            libs__globals__lookup_bool_option_3_p_0(ll_backend__proc_gen__Globals_22, (MR_Integer) 455, &ll_backend__proc_gen__MiddleRec_23);
          }
#line 692 "proc_gen.m"
          ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__MiddleRec_23 == (MR_Integer) 1);
#line 692 "proc_gen.m"
          if (ll_backend__proc_gen__succeeded)
#line 693 "proc_gen.m"
            {
#line 693 "proc_gen.m"
              ll_backend__proc_gen__succeeded = ll_backend__middle_rec__match_and_generate_6_p_0(ll_backend__proc_gen__Goal_14, &ll_backend__proc_gen__MiddleRecCode_24, ll_backend__proc_gen__STATE_VARIABLE_CI_0_60, &ll_backend__proc_gen__STATE_VARIABLE_CI_182_182, ll_backend__proc_gen__STATE_VARIABLE_CLD_0_62, &ll_backend__proc_gen__STATE_VARIABLE_CLD_183_183);
            }
#line 698 "proc_gen.m"
          if (ll_backend__proc_gen__succeeded)
#line 695 "proc_gen.m"
            {
#line 695 "proc_gen.m"
              *ll_backend__proc_gen__STATE_VARIABLE_CI_61 = ll_backend__proc_gen__STATE_VARIABLE_CI_182_182;
#line 695 "proc_gen.m"
              *ll_backend__proc_gen__Code_17 = ll_backend__proc_gen__MiddleRecCode_24;
#line 696 "proc_gen.m"
              *ll_backend__proc_gen__MaybeTraceCallLabel_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "proc_gen.m"
              *ll_backend__proc_gen__FrameInfo_19 = (MR_Word) &ll_backend__proc_gen_scalar_common_2[5];
#line 695 "proc_gen.m"
            }
#line 698 "proc_gen.m"
          else
#line 699 "proc_gen.m"
            {
#line 699 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TypeCtorInfo_315_315;
#line 699 "proc_gen.m"
              MR_Word ll_backend__proc_gen__MaybeTraceInfo_25;
#line 699 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TraceCallCode_27;
#line 699 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TailRecLabelCode_31;
#line 699 "proc_gen.m"
              MR_Word ll_backend__proc_gen__BodyCode_32;
#line 699 "proc_gen.m"
              MR_Word ll_backend__proc_gen__EntryCode_33;
#line 699 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ExitCode_35;
#line 699 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_187_187;
#line 699 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_188_188;
#line 699 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_194_194;
#line 699 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_199_199;
#line 699 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_200_200;
#line 699 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_201_201;
#line 699 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_195_202;
#line 724 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_34_34;

#line 699 "proc_gen.m"
              {
#line 699 "proc_gen.m"
                ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_0_60, &ll_backend__proc_gen__MaybeTraceInfo_25);
              }
#line 715 "proc_gen.m"
              if ((ll_backend__proc_gen__MaybeTraceInfo_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 716 "proc_gen.m"
                {
#line 716 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__TypeCtorInfo_314_314;

#line 717 "proc_gen.m"
                  *ll_backend__proc_gen__MaybeTraceCallLabel_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5380 "ll_backend.proc_gen.c"
                  ll_backend__proc_gen__TypeCtorInfo_314_314 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 718 "proc_gen.m"
                  {
#line 718 "proc_gen.m"
                    ll_backend__proc_gen__TraceCallCode_27 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_314_314);
                  }
#line 719 "proc_gen.m"
                  {
#line 719 "proc_gen.m"
                    ll_backend__proc_gen__TailRecLabelCode_31 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_314_314);
                  }
#line 716 "proc_gen.m"
                  ll_backend__proc_gen__STATE_VARIABLE_CI_187_187 = ll_backend__proc_gen__STATE_VARIABLE_CI_0_60;
#line 716 "proc_gen.m"
                  ll_backend__proc_gen__STATE_VARIABLE_CLD_188_188 = ll_backend__proc_gen__STATE_VARIABLE_CLD_0_62;
#line 716 "proc_gen.m"
                }
#line 715 "proc_gen.m"
              else
#line 701 "proc_gen.m"
                {
#line 701 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__TraceInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTraceInfo_25, (MR_Integer) 0)));
#line 701 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__MaybeTailRecInfo_28;

#line 702 "proc_gen.m"
                  {
#line 702 "proc_gen.m"
                    ll_backend__proc_gen__generate_call_event_8_p_0(ll_backend__proc_gen__TraceInfo_26, ll_backend__proc_gen__ProcContext_13, ll_backend__proc_gen__MaybeTraceCallLabel_18, &ll_backend__proc_gen__TraceCallCode_27, ll_backend__proc_gen__STATE_VARIABLE_CI_0_60, &ll_backend__proc_gen__STATE_VARIABLE_CI_187_187, ll_backend__proc_gen__STATE_VARIABLE_CLD_0_62, &ll_backend__proc_gen__STATE_VARIABLE_CLD_188_188);
                  }
#line 704 "proc_gen.m"
                  {
#line 704 "proc_gen.m"
                    ll_backend__trace_gen__get_trace_maybe_tail_rec_info_2_p_0(ll_backend__proc_gen__TraceInfo_26, &ll_backend__proc_gen__MaybeTailRecInfo_28);
                  }
#line 711 "proc_gen.m"
                  if ((ll_backend__proc_gen__MaybeTailRecInfo_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 712 "proc_gen.m"
                    {
#line 713 "proc_gen.m"
                      {
#line 713 "proc_gen.m"
                        ll_backend__proc_gen__TailRecLabelCode_31 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                      }
#line 712 "proc_gen.m"
                    }
#line 711 "proc_gen.m"
                  else
#line 706 "proc_gen.m"
                    {
#line 706 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__TailRecLabel_30;
#line 706 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTailRecInfo_28, (MR_Integer) 0)));
#line 706 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_190_190;
#line 706 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_191_191;
#line 706 "proc_gen.m"
                      MR_Word ll_backend__proc_gen___TailRecLval_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_189_189, (MR_Integer) 0)));

#line 706 "proc_gen.m"
                      ll_backend__proc_gen__TailRecLabel_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_189_189, (MR_Integer) 1)));
#line 708 "proc_gen.m"
                      {
#line 708 "proc_gen.m"
                        ll_backend__proc_gen__V_191_191 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "proc_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_191_191, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 708 "proc_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_191_191, 1) = ((MR_Box) (ll_backend__proc_gen__TailRecLabel_30));
#line 708 "proc_gen.m"
                      }
#line 708 "proc_gen.m"
                      {
#line 708 "proc_gen.m"
                        ll_backend__proc_gen__V_190_190 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 708 "proc_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_190_190, 0) = ((MR_Box) (ll_backend__proc_gen__V_191_191));
#line 708 "proc_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_190_190, 1) = ((MR_Box) ((MR_String) "tail recursion label, nofulljump"));
#line 708 "proc_gen.m"
                      }
#line 707 "proc_gen.m"
                      {
#line 707 "proc_gen.m"
                        ll_backend__proc_gen__TailRecLabelCode_31 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__proc_gen__V_190_190)));
                      }
#line 706 "proc_gen.m"
                    }
#line 701 "proc_gen.m"
                }
#line 721 "proc_gen.m"
              {
#line 721 "proc_gen.m"
                ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 0, ll_backend__proc_gen__Goal_14, &ll_backend__proc_gen__BodyCode_32, ll_backend__proc_gen__STATE_VARIABLE_CI_187_187, &ll_backend__proc_gen__STATE_VARIABLE_CI_194_194, ll_backend__proc_gen__STATE_VARIABLE_CLD_188_188, &ll_backend__proc_gen__STATE_VARIABLE_CLD_195_202);
              }
#line 722 "proc_gen.m"
              {
#line 722 "proc_gen.m"
                ll_backend__proc_gen__generate_entry_6_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_194_194, (MR_Integer) 0, ll_backend__proc_gen__Goal_14, ll_backend__proc_gen__ResumePoint_15, ll_backend__proc_gen__FrameInfo_19, &ll_backend__proc_gen__EntryCode_33);
              }
#line 724 "proc_gen.m"
              {
#line 724 "proc_gen.m"
                ll_backend__proc_gen__generate_exit_9_p_0((MR_Integer) 0, *ll_backend__proc_gen__FrameInfo_19, ll_backend__proc_gen__TraceSlotInfo_16, ll_backend__proc_gen__ProcContext_13, &ll_backend__proc_gen__V_34_34, &ll_backend__proc_gen__ExitCode_35, ll_backend__proc_gen__STATE_VARIABLE_CI_194_194, ll_backend__proc_gen__STATE_VARIABLE_CI_61, ll_backend__proc_gen__STATE_VARIABLE_CLD_195_202);
              }
#line 5489 "ll_backend.proc_gen.c"
              ll_backend__proc_gen__TypeCtorInfo_315_315 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 727 "proc_gen.m"
              {
#line 727 "proc_gen.m"
                ll_backend__proc_gen__V_201_201 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_315_315, ll_backend__proc_gen__BodyCode_32, ll_backend__proc_gen__ExitCode_35);
              }
#line 726 "proc_gen.m"
              {
#line 726 "proc_gen.m"
                ll_backend__proc_gen__V_200_200 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_315_315, ll_backend__proc_gen__TailRecLabelCode_31, ll_backend__proc_gen__V_201_201);
              }
#line 726 "proc_gen.m"
              {
#line 726 "proc_gen.m"
                ll_backend__proc_gen__V_199_199 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_315_315, ll_backend__proc_gen__TraceCallCode_27, ll_backend__proc_gen__V_200_200);
              }
#line 726 "proc_gen.m"
              {
#line 726 "proc_gen.m"
                *ll_backend__proc_gen__Code_17 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_315_315, ll_backend__proc_gen__EntryCode_33, ll_backend__proc_gen__V_199_199);
              }
#line 699 "proc_gen.m"
            }
#line 687 "proc_gen.m"
        }
#line 687 "proc_gen.m"
        break;
#line 687 "proc_gen.m"
      case (MR_Integer) 2:
#line 795 "proc_gen.m"
        {
#line 795 "proc_gen.m"
          MR_Word ll_backend__proc_gen__MaybeTraceInfo_285;

#line 796 "proc_gen.m"
          {
#line 796 "proc_gen.m"
            ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_0_60, &ll_backend__proc_gen__MaybeTraceInfo_285);
          }
#line 861 "proc_gen.m"
          if ((ll_backend__proc_gen__MaybeTraceInfo_285 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 862 "proc_gen.m"
            {
#line 862 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TypeCtorInfo_326_326;
#line 862 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_64_64;
#line 862 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_69_69;
#line 862 "proc_gen.m"
              MR_Word ll_backend__proc_gen__BodyCode_265;
#line 862 "proc_gen.m"
              MR_Word ll_backend__proc_gen__EntryCode_266;
#line 862 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ExitCode_267;
#line 862 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_195_268;
#line 867 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_59_59;

#line 863 "proc_gen.m"
              *ll_backend__proc_gen__MaybeTraceCallLabel_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 864 "proc_gen.m"
              {
#line 864 "proc_gen.m"
                ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 2, ll_backend__proc_gen__Goal_14, &ll_backend__proc_gen__BodyCode_265, ll_backend__proc_gen__STATE_VARIABLE_CI_0_60, &ll_backend__proc_gen__STATE_VARIABLE_CI_64_64, ll_backend__proc_gen__STATE_VARIABLE_CLD_0_62, &ll_backend__proc_gen__STATE_VARIABLE_CLD_195_268);
              }
#line 865 "proc_gen.m"
              {
#line 865 "proc_gen.m"
                ll_backend__proc_gen__generate_entry_6_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_64_64, (MR_Integer) 2, ll_backend__proc_gen__Goal_14, ll_backend__proc_gen__ResumePoint_15, ll_backend__proc_gen__FrameInfo_19, &ll_backend__proc_gen__EntryCode_266);
              }
#line 867 "proc_gen.m"
              {
#line 867 "proc_gen.m"
                ll_backend__proc_gen__generate_exit_9_p_0((MR_Integer) 2, *ll_backend__proc_gen__FrameInfo_19, ll_backend__proc_gen__TraceSlotInfo_16, ll_backend__proc_gen__ProcContext_13, &ll_backend__proc_gen__V_59_59, &ll_backend__proc_gen__ExitCode_267, ll_backend__proc_gen__STATE_VARIABLE_CI_64_64, ll_backend__proc_gen__STATE_VARIABLE_CI_61, ll_backend__proc_gen__STATE_VARIABLE_CLD_195_268);
              }
#line 5567 "ll_backend.proc_gen.c"
              ll_backend__proc_gen__TypeCtorInfo_326_326 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 869 "proc_gen.m"
              {
#line 869 "proc_gen.m"
                ll_backend__proc_gen__V_69_69 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_326_326, ll_backend__proc_gen__BodyCode_265, ll_backend__proc_gen__ExitCode_267);
              }
#line 869 "proc_gen.m"
              {
#line 869 "proc_gen.m"
                *ll_backend__proc_gen__Code_17 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_326_326, ll_backend__proc_gen__EntryCode_266, ll_backend__proc_gen__V_69_69);
              }
#line 862 "proc_gen.m"
            }
#line 861 "proc_gen.m"
          else
#line 798 "proc_gen.m"
            {
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TypeCtorInfo_325_325;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__DiscardTraceTicketCode_58;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_70_70;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_71_71;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_72_72;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_78_78;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_79_79;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_82_82;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_83_83;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_84_84;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_85_85;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_88_88;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_116_116;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_117_117;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_118_118;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_119_119;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_120_120;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_121_121;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TraceInfo_249 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTraceInfo_285, (MR_Integer) 0)));
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TraceCallCode_250;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__MaybeTailRecInfo_251;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__BodyCode_252;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__EntryCode_253;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ExitCode_254;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__FailCode_255;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__BeforeBody_256;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ResumeCode_257;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ResumeVarList_258;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ResumeVars_259;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__MaybeFailExternalInfo_260;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TraceFailCode_263;
#line 798 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_195_264;
#line 808 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_50_50;
#line 818 "proc_gen.m"
              MR_Word ll_backend__proc_gen___CLDAfterEvent_246;
#line 852 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_302_302;
#line 828 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_89_89;
#line 828 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_303_303;
#line 828 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_304_304;
#line 828 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_305_305;
#line 828 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_306_306;
#line 828 "proc_gen.m"
              MR_Integer ll_backend__proc_gen__V_53_53;

#line 799 "proc_gen.m"
              {
#line 799 "proc_gen.m"
                ll_backend__proc_gen__generate_call_event_8_p_0(ll_backend__proc_gen__TraceInfo_249, ll_backend__proc_gen__ProcContext_13, ll_backend__proc_gen__MaybeTraceCallLabel_18, &ll_backend__proc_gen__TraceCallCode_250, ll_backend__proc_gen__STATE_VARIABLE_CI_0_60, &ll_backend__proc_gen__STATE_VARIABLE_CI_70_70, ll_backend__proc_gen__STATE_VARIABLE_CLD_0_62, &ll_backend__proc_gen__STATE_VARIABLE_CLD_71_71);
              }
#line 801 "proc_gen.m"
              {
#line 801 "proc_gen.m"
                ll_backend__trace_gen__get_trace_maybe_tail_rec_info_2_p_0(ll_backend__proc_gen__TraceInfo_249, &ll_backend__proc_gen__MaybeTailRecInfo_251);
              }
#line 802 "proc_gen.m"
              {
#line 802 "proc_gen.m"
                ll_backend__proc_gen__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 802 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_72_72, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_5[2]));
#line 802 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_72_72, 1) = ((MR_Box) (ll_backend__proc_gen__generate_category_code_11_p_0_1));
#line 802 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 802 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_72_72, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 802 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_72_72, 4) = ((MR_Box) (ll_backend__proc_gen__MaybeTailRecInfo_251));
#line 802 "proc_gen.m"
              }
#line 802 "proc_gen.m"
              {
#line 802 "proc_gen.m"
                mercury__require__expect_4_p_0(ll_backend__proc_gen__V_72_72, (MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.generate_category_code\'/11", (MR_String) "tail recursive call in model_non code");
              }
#line 804 "proc_gen.m"
              {
#line 804 "proc_gen.m"
                ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CLD_71_71, &ll_backend__proc_gen__BeforeBody_256);
              }
#line 805 "proc_gen.m"
              {
#line 805 "proc_gen.m"
                ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 2, ll_backend__proc_gen__Goal_14, &ll_backend__proc_gen__BodyCode_252, ll_backend__proc_gen__STATE_VARIABLE_CI_70_70, &ll_backend__proc_gen__STATE_VARIABLE_CI_78_78, ll_backend__proc_gen__STATE_VARIABLE_CLD_71_71, &ll_backend__proc_gen__STATE_VARIABLE_CLD_79_79);
              }
#line 806 "proc_gen.m"
              {
#line 806 "proc_gen.m"
                ll_backend__proc_gen__generate_entry_6_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_78_78, (MR_Integer) 2, ll_backend__proc_gen__Goal_14, ll_backend__proc_gen__ResumePoint_15, ll_backend__proc_gen__FrameInfo_19, &ll_backend__proc_gen__EntryCode_253);
              }
#line 808 "proc_gen.m"
              {
#line 808 "proc_gen.m"
                ll_backend__proc_gen__generate_exit_9_p_0((MR_Integer) 2, *ll_backend__proc_gen__FrameInfo_19, ll_backend__proc_gen__TraceSlotInfo_16, ll_backend__proc_gen__ProcContext_13, &ll_backend__proc_gen__V_50_50, &ll_backend__proc_gen__ExitCode_254, ll_backend__proc_gen__STATE_VARIABLE_CI_78_78, &ll_backend__proc_gen__STATE_VARIABLE_CI_82_82, ll_backend__proc_gen__STATE_VARIABLE_CLD_79_79);
              }
#line 811 "proc_gen.m"
              {
#line 811 "proc_gen.m"
                ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__proc_gen__BeforeBody_256, ll_backend__proc_gen__STATE_VARIABLE_CI_82_82, &ll_backend__proc_gen__STATE_VARIABLE_CLD_83_83);
              }
#line 812 "proc_gen.m"
              {
#line 812 "proc_gen.m"
                ll_backend__code_loc_dep__generate_resume_point_6_p_0(ll_backend__proc_gen__ResumePoint_15, &ll_backend__proc_gen__ResumeCode_257, ll_backend__proc_gen__STATE_VARIABLE_CI_82_82, &ll_backend__proc_gen__STATE_VARIABLE_CI_84_84, ll_backend__proc_gen__STATE_VARIABLE_CLD_83_83, &ll_backend__proc_gen__STATE_VARIABLE_CLD_85_85);
              }
#line 813 "proc_gen.m"
              {
#line 813 "proc_gen.m"
                ll_backend__code_loc_dep__resume_point_vars_2_p_0(ll_backend__proc_gen__ResumePoint_15, &ll_backend__proc_gen__ResumeVarList_258);
              }
#line 814 "proc_gen.m"
              {
#line 814 "proc_gen.m"
                ll_backend__proc_gen__ResumeVars_259 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__proc_gen__ResumeVarList_258);
              }
#line 815 "proc_gen.m"
              {
#line 815 "proc_gen.m"
                ll_backend__code_loc_dep__set_forward_live_vars_3_p_0(ll_backend__proc_gen__ResumeVars_259, ll_backend__proc_gen__STATE_VARIABLE_CLD_85_85, &ll_backend__proc_gen__STATE_VARIABLE_CLD_195_264);
              }
#line 818 "proc_gen.m"
              {
#line 818 "proc_gen.m"
                ll_backend__trace_gen__generate_external_event_code_8_p_0((MR_Integer) 2, ll_backend__proc_gen__TraceInfo_249, ll_backend__proc_gen__ProcContext_13, &ll_backend__proc_gen__MaybeFailExternalInfo_260, ll_backend__proc_gen__STATE_VARIABLE_CI_84_84, &ll_backend__proc_gen__STATE_VARIABLE_CI_88_88, ll_backend__proc_gen__STATE_VARIABLE_CLD_195_264, &ll_backend__proc_gen___CLDAfterEvent_246);
              }
#line 824 "proc_gen.m"
              if ((ll_backend__proc_gen__MaybeFailExternalInfo_260 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 825 "proc_gen.m"
                {
#line 826 "proc_gen.m"
                  {
#line 826 "proc_gen.m"
                    ll_backend__proc_gen__TraceFailCode_263 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
#line 825 "proc_gen.m"
                }
#line 824 "proc_gen.m"
              else
#line 822 "proc_gen.m"
                {
#line 822 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__FailExternalInfo_247 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeFailExternalInfo_260, (MR_Integer) 0)));
#line 823 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FailExternalInfo_247, (MR_Integer) 0)));
#line 823 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FailExternalInfo_247, (MR_Integer) 1)));

#line 823 "proc_gen.m"
                  ll_backend__proc_gen__TraceFailCode_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FailExternalInfo_247, (MR_Integer) 2)));
#line 822 "proc_gen.m"
                }
#line 828 "proc_gen.m"
              ll_backend__proc_gen__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_16, (MR_Integer) 0)));
#line 828 "proc_gen.m"
              ll_backend__proc_gen__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_16, (MR_Integer) 1)));
#line 828 "proc_gen.m"
              ll_backend__proc_gen__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_16, (MR_Integer) 2)));
#line 828 "proc_gen.m"
              ll_backend__proc_gen__V_304_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_16, (MR_Integer) 3)));
#line 828 "proc_gen.m"
              ll_backend__proc_gen__V_305_305 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_16, (MR_Integer) 4)));
#line 828 "proc_gen.m"
              ll_backend__proc_gen__V_306_306 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_16, (MR_Integer) 5)));
#line 828 "proc_gen.m"
              ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__V_89_89)) == (MR_mktag((MR_Integer) 1)));
#line 828 "proc_gen.m"
              if (ll_backend__proc_gen__succeeded)
#line 828 "proc_gen.m"
                {
#line 828 "proc_gen.m"
                  ll_backend__proc_gen__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_89_89, (MR_Integer) 0)));
#line 846 "proc_gen.m"
                  if ((ll_backend__proc_gen__V_302_302 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 847 "proc_gen.m"
                    {
#line 848 "proc_gen.m"
                      {
#line 848 "proc_gen.m"
                        ll_backend__proc_gen__DiscardTraceTicketCode_58 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[26])));
                      }
#line 847 "proc_gen.m"
                      *ll_backend__proc_gen__STATE_VARIABLE_CI_61 = ll_backend__proc_gen__STATE_VARIABLE_CI_88_88;
#line 847 "proc_gen.m"
                    }
#line 846 "proc_gen.m"
                  else
#line 831 "proc_gen.m"
                    {
#line 831 "proc_gen.m"
                      MR_Integer ll_backend__proc_gen__FromFullSlot_55 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_302_302, (MR_Integer) 0)));
#line 831 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__FromFullSlotLval_56;
#line 831 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__SkipLabel_57;
#line 831 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_95_95;
#line 831 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_96_96;
#line 831 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_97_97;
#line 831 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_98_98;
#line 831 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_100_100;
#line 831 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_101_101;
#line 831 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_103_103;
#line 831 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_107_107;
#line 831 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_108_108;
#line 831 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_109_109;

#line 836 "proc_gen.m"
                      {
#line 836 "proc_gen.m"
                        ll_backend__proc_gen__FromFullSlotLval_56 = ll_backend__llds__stack_slot_num_to_lval_2_f_0((MR_Integer) 1, ll_backend__proc_gen__FromFullSlot_55);
                      }
#line 838 "proc_gen.m"
                      {
#line 838 "proc_gen.m"
                        ll_backend__code_info__get_next_label_3_p_0(&ll_backend__proc_gen__SkipLabel_57, ll_backend__proc_gen__STATE_VARIABLE_CI_88_88, ll_backend__proc_gen__STATE_VARIABLE_CI_61);
                      }
#line 841 "proc_gen.m"
                      {
#line 841 "proc_gen.m"
                        ll_backend__proc_gen__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 841 "proc_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_100_100, 0) = ((MR_Box) (ll_backend__proc_gen__FromFullSlotLval_56));
#line 841 "proc_gen.m"
                      }
#line 841 "proc_gen.m"
                      {
#line 841 "proc_gen.m"
                        ll_backend__proc_gen__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 841 "proc_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 841 "proc_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_98_98, 1) = ((MR_Box) ((MR_Integer) 7));
#line 841 "proc_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_98_98, 2) = ((MR_Box) (ll_backend__proc_gen__V_100_100));
#line 841 "proc_gen.m"
                      }
#line 842 "proc_gen.m"
                      {
#line 842 "proc_gen.m"
                        ll_backend__proc_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 842 "proc_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_101_101, 0) = ((MR_Box) (ll_backend__proc_gen__SkipLabel_57));
#line 842 "proc_gen.m"
                      }
#line 841 "proc_gen.m"
                      {
#line 841 "proc_gen.m"
                        ll_backend__proc_gen__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 841 "proc_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 841 "proc_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_97_97, 1) = ((MR_Box) (ll_backend__proc_gen__V_98_98));
#line 841 "proc_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_97_97, 2) = ((MR_Box) (ll_backend__proc_gen__V_101_101));
#line 841 "proc_gen.m"
                      }
#line 840 "proc_gen.m"
                      {
#line 840 "proc_gen.m"
                        ll_backend__proc_gen__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 840 "proc_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_96_96, 0) = ((MR_Box) (ll_backend__proc_gen__V_97_97));
#line 840 "proc_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_96_96, 1) = ((MR_Box) ((MR_String) ""));
#line 840 "proc_gen.m"
                      }
#line 844 "proc_gen.m"
                      {
#line 844 "proc_gen.m"
                        ll_backend__proc_gen__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "proc_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 844 "proc_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_109_109, 1) = ((MR_Box) (ll_backend__proc_gen__SkipLabel_57));
#line 844 "proc_gen.m"
                      }
#line 844 "proc_gen.m"
                      {
#line 844 "proc_gen.m"
                        ll_backend__proc_gen__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 844 "proc_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_108_108, 0) = ((MR_Box) (ll_backend__proc_gen__V_109_109));
#line 844 "proc_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_108_108, 1) = ((MR_Box) ((MR_String) ""));
#line 844 "proc_gen.m"
                      }
#line 845 "proc_gen.m"
                      {
#line 845 "proc_gen.m"
                        ll_backend__proc_gen__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 845 "proc_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_107_107, 0) = ((MR_Box) (ll_backend__proc_gen__V_108_108));
#line 845 "proc_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 845 "proc_gen.m"
                      }
#line 843 "proc_gen.m"
                      {
#line 843 "proc_gen.m"
                        ll_backend__proc_gen__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 843 "proc_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_103_103, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[26]));
#line 843 "proc_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_103_103, 1) = ((MR_Box) (ll_backend__proc_gen__V_107_107));
#line 843 "proc_gen.m"
                      }
#line 842 "proc_gen.m"
                      {
#line 842 "proc_gen.m"
                        ll_backend__proc_gen__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "proc_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_95_95, 0) = ((MR_Box) (ll_backend__proc_gen__V_96_96));
#line 842 "proc_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_95_95, 1) = ((MR_Box) (ll_backend__proc_gen__V_103_103));
#line 842 "proc_gen.m"
                      }
#line 839 "proc_gen.m"
                      {
#line 839 "proc_gen.m"
                        ll_backend__proc_gen__DiscardTraceTicketCode_58 = mercury__cord__from_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__proc_gen__V_95_95);
                      }
#line 831 "proc_gen.m"
                    }
#line 828 "proc_gen.m"
                }
#line 828 "proc_gen.m"
              else
#line 853 "proc_gen.m"
                {
#line 853 "proc_gen.m"
                  {
#line 853 "proc_gen.m"
                    ll_backend__proc_gen__DiscardTraceTicketCode_58 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
#line 853 "proc_gen.m"
                  *ll_backend__proc_gen__STATE_VARIABLE_CI_61 = ll_backend__proc_gen__STATE_VARIABLE_CI_88_88;
#line 853 "proc_gen.m"
                }
#line 5971 "ll_backend.proc_gen.c"
              ll_backend__proc_gen__TypeCtorInfo_325_325 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 855 "proc_gen.m"
              {
#line 855 "proc_gen.m"
                ll_backend__proc_gen__FailCode_255 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_325_325, ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[28])));
              }
#line 859 "proc_gen.m"
              {
#line 859 "proc_gen.m"
                ll_backend__proc_gen__V_121_121 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_325_325, ll_backend__proc_gen__DiscardTraceTicketCode_58, ll_backend__proc_gen__FailCode_255);
              }
#line 859 "proc_gen.m"
              {
#line 859 "proc_gen.m"
                ll_backend__proc_gen__V_120_120 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_325_325, ll_backend__proc_gen__TraceFailCode_263, ll_backend__proc_gen__V_121_121);
              }
#line 859 "proc_gen.m"
              {
#line 859 "proc_gen.m"
                ll_backend__proc_gen__V_119_119 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_325_325, ll_backend__proc_gen__ResumeCode_257, ll_backend__proc_gen__V_120_120);
              }
#line 858 "proc_gen.m"
              {
#line 858 "proc_gen.m"
                ll_backend__proc_gen__V_118_118 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_325_325, ll_backend__proc_gen__ExitCode_254, ll_backend__proc_gen__V_119_119);
              }
#line 858 "proc_gen.m"
              {
#line 858 "proc_gen.m"
                ll_backend__proc_gen__V_117_117 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_325_325, ll_backend__proc_gen__BodyCode_252, ll_backend__proc_gen__V_118_118);
              }
#line 858 "proc_gen.m"
              {
#line 858 "proc_gen.m"
                ll_backend__proc_gen__V_116_116 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_325_325, ll_backend__proc_gen__TraceCallCode_250, ll_backend__proc_gen__V_117_117);
              }
#line 858 "proc_gen.m"
              {
#line 858 "proc_gen.m"
                *ll_backend__proc_gen__Code_17 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_325_325, ll_backend__proc_gen__EntryCode_253, ll_backend__proc_gen__V_116_116);
              }
#line 798 "proc_gen.m"
            }
#line 795 "proc_gen.m"
        }
#line 687 "proc_gen.m"
        break;
#line 687 "proc_gen.m"
      case (MR_Integer) 1:
#line 730 "proc_gen.m"
        {
#line 730 "proc_gen.m"
          MR_Word ll_backend__proc_gen__TypeCtorInfo_317_317;
#line 730 "proc_gen.m"
          MR_Word ll_backend__proc_gen__FailureLiveRegs_36;
#line 730 "proc_gen.m"
          MR_Word ll_backend__proc_gen__FailCode_37;
#line 730 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_125_125;
#line 730 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_134_134;
#line 730 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_135_135;
#line 730 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_136_136;
#line 730 "proc_gen.m"
          MR_Word ll_backend__proc_gen__MaybeTraceInfo_235;

#line 731 "proc_gen.m"
          {
#line 731 "proc_gen.m"
            ll_backend__proc_gen__FailureLiveRegs_36 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[10]))));
          }
#line 6045 "ll_backend.proc_gen.c"
          ll_backend__proc_gen__TypeCtorInfo_317_317 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 734 "proc_gen.m"
          {
#line 734 "proc_gen.m"
            ll_backend__proc_gen__V_136_136 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 734 "proc_gen.m"
            MR_hl_field(MR_mktag(2), ll_backend__proc_gen__V_136_136, 0) = ((MR_Box) (ll_backend__proc_gen__FailureLiveRegs_36));
#line 734 "proc_gen.m"
          }
#line 734 "proc_gen.m"
          {
#line 734 "proc_gen.m"
            ll_backend__proc_gen__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 734 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_135_135, 0) = ((MR_Box) (ll_backend__proc_gen__V_136_136));
#line 734 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_135_135, 1) = ((MR_Box) ((MR_String) ""));
#line 734 "proc_gen.m"
          }
#line 734 "proc_gen.m"
          {
#line 734 "proc_gen.m"
            ll_backend__proc_gen__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 734 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_134_134, 0) = ((MR_Box) (ll_backend__proc_gen__V_135_135));
#line 734 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[14])));
#line 734 "proc_gen.m"
          }
#line 733 "proc_gen.m"
          {
#line 733 "proc_gen.m"
            ll_backend__proc_gen__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_125_125, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[11]));
#line 733 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_125_125, 1) = ((MR_Box) (ll_backend__proc_gen__V_134_134));
#line 733 "proc_gen.m"
          }
#line 732 "proc_gen.m"
          {
#line 732 "proc_gen.m"
            ll_backend__proc_gen__FailCode_37 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_317_317, ll_backend__proc_gen__V_125_125);
          }
#line 737 "proc_gen.m"
          {
#line 737 "proc_gen.m"
            ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_0_60, &ll_backend__proc_gen__MaybeTraceInfo_235);
          }
#line 779 "proc_gen.m"
          if ((ll_backend__proc_gen__MaybeTraceInfo_235 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 780 "proc_gen.m"
            {
#line 780 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_145_145;
#line 780 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_146_146;
#line 780 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_149_149;
#line 780 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_152_152;
#line 780 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_153_153;
#line 780 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_154_154;
#line 780 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_155_155;
#line 780 "proc_gen.m"
              MR_Word ll_backend__proc_gen__BodyCode_218;
#line 780 "proc_gen.m"
              MR_Word ll_backend__proc_gen__EntryCode_219;
#line 780 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ExitCode_220;
#line 780 "proc_gen.m"
              MR_Word ll_backend__proc_gen__BeforeBody_221;
#line 780 "proc_gen.m"
              MR_Word ll_backend__proc_gen__RestoreDeallocCode_222;
#line 780 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ResumeCode_223;
#line 780 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_195_224;
#line 789 "proc_gen.m"
              MR_Word ll_backend__proc_gen___CLDAfterResume_49;

#line 781 "proc_gen.m"
              *ll_backend__proc_gen__MaybeTraceCallLabel_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 782 "proc_gen.m"
              {
#line 782 "proc_gen.m"
                ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CLD_0_62, &ll_backend__proc_gen__BeforeBody_221);
              }
#line 783 "proc_gen.m"
              {
#line 783 "proc_gen.m"
                ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 1, ll_backend__proc_gen__Goal_14, &ll_backend__proc_gen__BodyCode_218, ll_backend__proc_gen__STATE_VARIABLE_CI_0_60, &ll_backend__proc_gen__STATE_VARIABLE_CI_145_145, ll_backend__proc_gen__STATE_VARIABLE_CLD_0_62, &ll_backend__proc_gen__STATE_VARIABLE_CLD_146_146);
              }
#line 784 "proc_gen.m"
              {
#line 784 "proc_gen.m"
                ll_backend__proc_gen__generate_entry_6_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_145_145, (MR_Integer) 1, ll_backend__proc_gen__Goal_14, ll_backend__proc_gen__ResumePoint_15, ll_backend__proc_gen__FrameInfo_19, &ll_backend__proc_gen__EntryCode_219);
              }
#line 786 "proc_gen.m"
              {
#line 786 "proc_gen.m"
                ll_backend__proc_gen__generate_exit_9_p_0((MR_Integer) 1, *ll_backend__proc_gen__FrameInfo_19, ll_backend__proc_gen__TraceSlotInfo_16, ll_backend__proc_gen__ProcContext_13, &ll_backend__proc_gen__RestoreDeallocCode_222, &ll_backend__proc_gen__ExitCode_220, ll_backend__proc_gen__STATE_VARIABLE_CI_145_145, &ll_backend__proc_gen__STATE_VARIABLE_CI_149_149, ll_backend__proc_gen__STATE_VARIABLE_CLD_146_146);
              }
#line 788 "proc_gen.m"
              {
#line 788 "proc_gen.m"
                ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__proc_gen__BeforeBody_221, ll_backend__proc_gen__STATE_VARIABLE_CI_149_149, &ll_backend__proc_gen__STATE_VARIABLE_CLD_195_224);
              }
#line 789 "proc_gen.m"
              {
#line 789 "proc_gen.m"
                ll_backend__code_loc_dep__generate_resume_point_6_p_0(ll_backend__proc_gen__ResumePoint_15, &ll_backend__proc_gen__ResumeCode_223, ll_backend__proc_gen__STATE_VARIABLE_CI_149_149, ll_backend__proc_gen__STATE_VARIABLE_CI_61, ll_backend__proc_gen__STATE_VARIABLE_CLD_195_224, &ll_backend__proc_gen___CLDAfterResume_49);
              }
#line 792 "proc_gen.m"
              {
#line 792 "proc_gen.m"
                ll_backend__proc_gen__V_155_155 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_317_317, ll_backend__proc_gen__RestoreDeallocCode_222, ll_backend__proc_gen__FailCode_37);
              }
#line 791 "proc_gen.m"
              {
#line 791 "proc_gen.m"
                ll_backend__proc_gen__V_154_154 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_317_317, ll_backend__proc_gen__ResumeCode_223, ll_backend__proc_gen__V_155_155);
              }
#line 791 "proc_gen.m"
              {
#line 791 "proc_gen.m"
                ll_backend__proc_gen__V_153_153 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_317_317, ll_backend__proc_gen__ExitCode_220, ll_backend__proc_gen__V_154_154);
              }
#line 791 "proc_gen.m"
              {
#line 791 "proc_gen.m"
                ll_backend__proc_gen__V_152_152 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_317_317, ll_backend__proc_gen__BodyCode_218, ll_backend__proc_gen__V_153_153);
              }
#line 791 "proc_gen.m"
              {
#line 791 "proc_gen.m"
                *ll_backend__proc_gen__Code_17 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_317_317, ll_backend__proc_gen__EntryCode_219, ll_backend__proc_gen__V_152_152);
              }
#line 780 "proc_gen.m"
            }
#line 779 "proc_gen.m"
          else
#line 739 "proc_gen.m"
            {
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__BeforeBody_38;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__RestoreDeallocCode_39;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ResumeCode_40;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ResumeVarList_41;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ResumeVars_42;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__MaybeFailExternalInfo_43;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TraceFailCode_48;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_156_156;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_157_157;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_163_163;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_164_164;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_167_167;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_168_168;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_169_169;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_170_170;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_174_174;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_175_175;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_176_176;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_177_177;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_178_178;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_179_179;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_180_180;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TraceInfo_208 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTraceInfo_235, (MR_Integer) 0)));
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TraceCallCode_209;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__MaybeTailRecInfo_210;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TailRecLabelCode_213;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__BodyCode_214;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__EntryCode_215;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ExitCode_216;
#line 739 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_195_217;
#line 766 "proc_gen.m"
              MR_Word ll_backend__proc_gen___CLDAfterEvent_44;

#line 740 "proc_gen.m"
              {
#line 740 "proc_gen.m"
                ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CLD_0_62, &ll_backend__proc_gen__BeforeBody_38);
              }
#line 741 "proc_gen.m"
              {
#line 741 "proc_gen.m"
                ll_backend__proc_gen__generate_call_event_8_p_0(ll_backend__proc_gen__TraceInfo_208, ll_backend__proc_gen__ProcContext_13, ll_backend__proc_gen__MaybeTraceCallLabel_18, &ll_backend__proc_gen__TraceCallCode_209, ll_backend__proc_gen__STATE_VARIABLE_CI_0_60, &ll_backend__proc_gen__STATE_VARIABLE_CI_156_156, ll_backend__proc_gen__STATE_VARIABLE_CLD_0_62, &ll_backend__proc_gen__STATE_VARIABLE_CLD_157_157);
              }
#line 743 "proc_gen.m"
              {
#line 743 "proc_gen.m"
                ll_backend__trace_gen__get_trace_maybe_tail_rec_info_2_p_0(ll_backend__proc_gen__TraceInfo_208, &ll_backend__proc_gen__MaybeTailRecInfo_210);
              }
#line 749 "proc_gen.m"
              if ((ll_backend__proc_gen__MaybeTailRecInfo_210 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 751 "proc_gen.m"
                {
#line 751 "proc_gen.m"
                  ll_backend__proc_gen__TailRecLabelCode_213 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_317_317);
                }
#line 749 "proc_gen.m"
              else
#line 745 "proc_gen.m"
                {
#line 745 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTailRecInfo_210, (MR_Integer) 0)));
#line 745 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_159_159;
#line 745 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_160_160;
#line 745 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__TailRecLabel_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_158_158, (MR_Integer) 1)));
#line 745 "proc_gen.m"
                  MR_Word ll_backend__proc_gen___TailRecLval_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_158_158, (MR_Integer) 0)));

#line 747 "proc_gen.m"
                  {
#line 747 "proc_gen.m"
                    ll_backend__proc_gen__V_160_160 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_160_160, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 747 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_160_160, 1) = ((MR_Box) (ll_backend__proc_gen__TailRecLabel_205));
#line 747 "proc_gen.m"
                  }
#line 747 "proc_gen.m"
                  {
#line 747 "proc_gen.m"
                    ll_backend__proc_gen__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 747 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_159_159, 0) = ((MR_Box) (ll_backend__proc_gen__V_160_160));
#line 747 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_159_159, 1) = ((MR_Box) ((MR_String) "tail recursion label"));
#line 747 "proc_gen.m"
                  }
#line 746 "proc_gen.m"
                  {
#line 746 "proc_gen.m"
                    ll_backend__proc_gen__TailRecLabelCode_213 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_317_317, ((MR_Box) (ll_backend__proc_gen__V_159_159)));
                  }
#line 745 "proc_gen.m"
                }
#line 753 "proc_gen.m"
              {
#line 753 "proc_gen.m"
                ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 1, ll_backend__proc_gen__Goal_14, &ll_backend__proc_gen__BodyCode_214, ll_backend__proc_gen__STATE_VARIABLE_CI_156_156, &ll_backend__proc_gen__STATE_VARIABLE_CI_163_163, ll_backend__proc_gen__STATE_VARIABLE_CLD_157_157, &ll_backend__proc_gen__STATE_VARIABLE_CLD_164_164);
              }
#line 754 "proc_gen.m"
              {
#line 754 "proc_gen.m"
                ll_backend__proc_gen__generate_entry_6_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_163_163, (MR_Integer) 1, ll_backend__proc_gen__Goal_14, ll_backend__proc_gen__ResumePoint_15, ll_backend__proc_gen__FrameInfo_19, &ll_backend__proc_gen__EntryCode_215);
              }
#line 756 "proc_gen.m"
              {
#line 756 "proc_gen.m"
                ll_backend__proc_gen__generate_exit_9_p_0((MR_Integer) 1, *ll_backend__proc_gen__FrameInfo_19, ll_backend__proc_gen__TraceSlotInfo_16, ll_backend__proc_gen__ProcContext_13, &ll_backend__proc_gen__RestoreDeallocCode_39, &ll_backend__proc_gen__ExitCode_216, ll_backend__proc_gen__STATE_VARIABLE_CI_163_163, &ll_backend__proc_gen__STATE_VARIABLE_CI_167_167, ll_backend__proc_gen__STATE_VARIABLE_CLD_164_164);
              }
#line 759 "proc_gen.m"
              {
#line 759 "proc_gen.m"
                ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__proc_gen__BeforeBody_38, ll_backend__proc_gen__STATE_VARIABLE_CI_167_167, &ll_backend__proc_gen__STATE_VARIABLE_CLD_168_168);
              }
#line 760 "proc_gen.m"
              {
#line 760 "proc_gen.m"
                ll_backend__code_loc_dep__generate_resume_point_6_p_0(ll_backend__proc_gen__ResumePoint_15, &ll_backend__proc_gen__ResumeCode_40, ll_backend__proc_gen__STATE_VARIABLE_CI_167_167, &ll_backend__proc_gen__STATE_VARIABLE_CI_169_169, ll_backend__proc_gen__STATE_VARIABLE_CLD_168_168, &ll_backend__proc_gen__STATE_VARIABLE_CLD_170_170);
              }
#line 761 "proc_gen.m"
              {
#line 761 "proc_gen.m"
                ll_backend__code_loc_dep__resume_point_vars_2_p_0(ll_backend__proc_gen__ResumePoint_15, &ll_backend__proc_gen__ResumeVarList_41);
              }
#line 762 "proc_gen.m"
              {
#line 762 "proc_gen.m"
                ll_backend__proc_gen__ResumeVars_42 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__proc_gen__ResumeVarList_41);
              }
#line 763 "proc_gen.m"
              {
#line 763 "proc_gen.m"
                ll_backend__code_loc_dep__set_forward_live_vars_3_p_0(ll_backend__proc_gen__ResumeVars_42, ll_backend__proc_gen__STATE_VARIABLE_CLD_170_170, &ll_backend__proc_gen__STATE_VARIABLE_CLD_195_217);
              }
#line 766 "proc_gen.m"
              {
#line 766 "proc_gen.m"
                ll_backend__trace_gen__generate_external_event_code_8_p_0((MR_Integer) 2, ll_backend__proc_gen__TraceInfo_208, ll_backend__proc_gen__ProcContext_13, &ll_backend__proc_gen__MaybeFailExternalInfo_43, ll_backend__proc_gen__STATE_VARIABLE_CI_169_169, ll_backend__proc_gen__STATE_VARIABLE_CI_61, ll_backend__proc_gen__STATE_VARIABLE_CLD_195_217, &ll_backend__proc_gen___CLDAfterEvent_44);
              }
#line 772 "proc_gen.m"
              if ((ll_backend__proc_gen__MaybeFailExternalInfo_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 774 "proc_gen.m"
                {
#line 774 "proc_gen.m"
                  ll_backend__proc_gen__TraceFailCode_48 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_317_317);
                }
#line 772 "proc_gen.m"
              else
#line 770 "proc_gen.m"
                {
#line 770 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__FailExternalInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeFailExternalInfo_43, (MR_Integer) 0)));
#line 771 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FailExternalInfo_45, (MR_Integer) 0)));
#line 771 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FailExternalInfo_45, (MR_Integer) 1)));

#line 771 "proc_gen.m"
                  ll_backend__proc_gen__TraceFailCode_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FailExternalInfo_45, (MR_Integer) 2)));
#line 770 "proc_gen.m"
                }
#line 778 "proc_gen.m"
              {
#line 778 "proc_gen.m"
                ll_backend__proc_gen__V_180_180 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_317_317, ll_backend__proc_gen__RestoreDeallocCode_39, ll_backend__proc_gen__FailCode_37);
              }
#line 777 "proc_gen.m"
              {
#line 777 "proc_gen.m"
                ll_backend__proc_gen__V_179_179 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_317_317, ll_backend__proc_gen__TraceFailCode_48, ll_backend__proc_gen__V_180_180);
              }
#line 777 "proc_gen.m"
              {
#line 777 "proc_gen.m"
                ll_backend__proc_gen__V_178_178 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_317_317, ll_backend__proc_gen__ResumeCode_40, ll_backend__proc_gen__V_179_179);
              }
#line 777 "proc_gen.m"
              {
#line 777 "proc_gen.m"
                ll_backend__proc_gen__V_177_177 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_317_317, ll_backend__proc_gen__ExitCode_216, ll_backend__proc_gen__V_178_178);
              }
#line 777 "proc_gen.m"
              {
#line 777 "proc_gen.m"
                ll_backend__proc_gen__V_176_176 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_317_317, ll_backend__proc_gen__BodyCode_214, ll_backend__proc_gen__V_177_177);
              }
#line 776 "proc_gen.m"
              {
#line 776 "proc_gen.m"
                ll_backend__proc_gen__V_175_175 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_317_317, ll_backend__proc_gen__TailRecLabelCode_213, ll_backend__proc_gen__V_176_176);
              }
#line 776 "proc_gen.m"
              {
#line 776 "proc_gen.m"
                ll_backend__proc_gen__V_174_174 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_317_317, ll_backend__proc_gen__TraceCallCode_209, ll_backend__proc_gen__V_175_175);
              }
#line 776 "proc_gen.m"
              {
#line 776 "proc_gen.m"
                *ll_backend__proc_gen__Code_17 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_317_317, ll_backend__proc_gen__EntryCode_215, ll_backend__proc_gen__V_174_174);
              }
#line 739 "proc_gen.m"
            }
#line 730 "proc_gen.m"
        }
#line 687 "proc_gen.m"
        break;
#line 687 "proc_gen.m"
    }
#line 687 "proc_gen.m"
  }
#line 679 "proc_gen.m"
}

#line 594 "proc_gen.m"
static MR_Word MR_CALL 
ll_backend__proc_gen__maybe_generate_deep_prof_info_2_f_0(
#line 594 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcInfo_4,
#line 594 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HLDSDeepInfo_5)
#line 594 "proc_gen.m"
{
#line 597 "proc_gen.m"
  {
#line 597 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 597 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeDeepProfInfo_6;
#line 597 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeHLDSDeepLayout_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSDeepInfo_5, (MR_Integer) 1)));
#line 597 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSDeepInfo_5, (MR_Integer) 2)));
#line 598 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSDeepInfo_5, (MR_Integer) 0)));

#line 628 "proc_gen.m"
    if ((ll_backend__proc_gen__MaybeHLDSDeepLayout_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 630 "proc_gen.m"
      ll_backend__proc_gen__MaybeDeepProfInfo_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 628 "proc_gen.m"
    else
#line 600 "proc_gen.m"
      {
#line 600 "proc_gen.m"
        MR_Word ll_backend__proc_gen__HLDSDeepLayout_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeHLDSDeepLayout_7, (MR_Integer) 0)));
#line 600 "proc_gen.m"
        MR_Word ll_backend__proc_gen__HLDSProcStatic_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSDeepLayout_8, (MR_Integer) 0)));
#line 600 "proc_gen.m"
        MR_Word ll_backend__proc_gen__HLDSExcpVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSDeepLayout_8, (MR_Integer) 1)));
#line 600 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TopCSDVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSExcpVars_10, (MR_Integer) 0)));
#line 600 "proc_gen.m"
        MR_Word ll_backend__proc_gen__MiddleCSDVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSExcpVars_10, (MR_Integer) 1)));
#line 600 "proc_gen.m"
        MR_Word ll_backend__proc_gen__MaybeOldOutermostVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSExcpVars_10, (MR_Integer) 2)));
#line 600 "proc_gen.m"
        MR_Word ll_backend__proc_gen__StackSlots_15;
#line 600 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__TopCSDSlotNum_17;
#line 600 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__MiddleCSDSlotNum_19;
#line 600 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__OldOutermostSlotNum_22;
#line 600 "proc_gen.m"
        MR_Word ll_backend__proc_gen__DeepExcpSlots_23;
#line 600 "proc_gen.m"
        MR_Word ll_backend__proc_gen__DeepProfInfo_24;
#line 618 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TopCSDSlot_16;
#line 606 "proc_gen.m"
        MR_Box ll_backend__proc_gen__conv0_TopCSDSlot_16;

#line 605 "proc_gen.m"
        {
#line 605 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ll_backend__proc_gen__ProcInfo_4, &ll_backend__proc_gen__StackSlots_15);
        }
#line 606 "proc_gen.m"
        {
#line 606 "proc_gen.m"
          ll_backend__proc_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ll_backend__proc_gen__StackSlots_15, ((MR_Box) (ll_backend__proc_gen__TopCSDVar_12)), &ll_backend__proc_gen__conv0_TopCSDSlot_16);
        }
#line 606 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 606 "proc_gen.m"
          {
#line 606 "proc_gen.m"
            ll_backend__proc_gen__TopCSDSlot_16 = ((MR_Word) ll_backend__proc_gen__conv0_TopCSDSlot_16);
#line 606 "proc_gen.m"
            ll_backend__proc_gen__succeeded = MR_TRUE;
#line 606 "proc_gen.m"
          }
#line 618 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 607 "proc_gen.m"
          {
#line 607 "proc_gen.m"
            MR_Word ll_backend__proc_gen__TypeInfo_31_31;
#line 607 "proc_gen.m"
            MR_Word ll_backend__proc_gen__TypeCtorInfo_32_32;
#line 607 "proc_gen.m"
            MR_Word ll_backend__proc_gen__MiddleCSDSlot_18;
#line 608 "proc_gen.m"
            MR_Box ll_backend__proc_gen__conv1_MiddleCSDSlot_18;

#line 607 "proc_gen.m"
            {
#line 607 "proc_gen.m"
              ll_backend__proc_gen__TopCSDSlotNum_17 = hlds__hlds_llds__stack_slot_num_1_f_0(ll_backend__proc_gen__TopCSDSlot_16);
            }
#line 6537 "ll_backend.proc_gen.c"
            ll_backend__proc_gen__TypeInfo_31_31 = (MR_Word) &ll_backend__proc_gen_scalar_common_1[0];
#line 6539 "ll_backend.proc_gen.c"
            ll_backend__proc_gen__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0;
#line 608 "proc_gen.m"
            {
#line 608 "proc_gen.m"
              mercury__map__lookup_3_p_0(ll_backend__proc_gen__TypeInfo_31_31, ll_backend__proc_gen__TypeCtorInfo_32_32, ll_backend__proc_gen__StackSlots_15, ((MR_Box) (ll_backend__proc_gen__MiddleCSDVar_13)), &ll_backend__proc_gen__conv1_MiddleCSDSlot_18);
            }
#line 608 "proc_gen.m"
            ll_backend__proc_gen__MiddleCSDSlot_18 = ((MR_Word) ll_backend__proc_gen__conv1_MiddleCSDSlot_18);
#line 609 "proc_gen.m"
            {
#line 609 "proc_gen.m"
              ll_backend__proc_gen__MiddleCSDSlotNum_19 = hlds__hlds_llds__stack_slot_num_1_f_0(ll_backend__proc_gen__MiddleCSDSlot_18);
            }
#line 614 "proc_gen.m"
            if ((ll_backend__proc_gen__MaybeOldOutermostVar_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 616 "proc_gen.m"
              ll_backend__proc_gen__OldOutermostSlotNum_22 = (MR_Integer) -1;
#line 614 "proc_gen.m"
            else
#line 611 "proc_gen.m"
              {
#line 611 "proc_gen.m"
                MR_Word ll_backend__proc_gen__OldOutermostVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeOldOutermostVar_14, (MR_Integer) 0)));
#line 611 "proc_gen.m"
                MR_Word ll_backend__proc_gen__OldOutermostSlot_21;
#line 612 "proc_gen.m"
                MR_Box ll_backend__proc_gen__conv2_OldOutermostSlot_21;

#line 612 "proc_gen.m"
                {
#line 612 "proc_gen.m"
                  mercury__map__lookup_3_p_0(ll_backend__proc_gen__TypeInfo_31_31, ll_backend__proc_gen__TypeCtorInfo_32_32, ll_backend__proc_gen__StackSlots_15, ((MR_Box) (ll_backend__proc_gen__OldOutermostVar_20)), &ll_backend__proc_gen__conv2_OldOutermostSlot_21);
                }
#line 612 "proc_gen.m"
                ll_backend__proc_gen__OldOutermostSlot_21 = ((MR_Word) ll_backend__proc_gen__conv2_OldOutermostSlot_21);
#line 613 "proc_gen.m"
                {
#line 613 "proc_gen.m"
                  ll_backend__proc_gen__OldOutermostSlotNum_22 = hlds__hlds_llds__stack_slot_num_1_f_0(ll_backend__proc_gen__OldOutermostSlot_21);
                }
#line 611 "proc_gen.m"
              }
#line 607 "proc_gen.m"
          }
#line 618 "proc_gen.m"
        else
#line 619 "proc_gen.m"
          {
#line 619 "proc_gen.m"
            ll_backend__proc_gen__TopCSDSlotNum_17 = (MR_Integer) -1;
#line 620 "proc_gen.m"
            ll_backend__proc_gen__MiddleCSDSlotNum_19 = (MR_Integer) -1;
#line 621 "proc_gen.m"
            ll_backend__proc_gen__OldOutermostSlotNum_22 = (MR_Integer) -1;
#line 619 "proc_gen.m"
          }
#line 623 "proc_gen.m"
        {
#line 623 "proc_gen.m"
          ll_backend__proc_gen__DeepExcpSlots_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 623 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__DeepExcpSlots_23, 0) = ((MR_Box) (ll_backend__proc_gen__TopCSDSlotNum_17));
#line 623 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__DeepExcpSlots_23, 1) = ((MR_Box) (ll_backend__proc_gen__MiddleCSDSlotNum_19));
#line 623 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__DeepExcpSlots_23, 2) = ((MR_Box) (ll_backend__proc_gen__OldOutermostSlotNum_22));
#line 623 "proc_gen.m"
        }
#line 625 "proc_gen.m"
        {
#line 625 "proc_gen.m"
          ll_backend__proc_gen__DeepProfInfo_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 625 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__DeepProfInfo_24, 0) = ((MR_Box) (ll_backend__proc_gen__HLDSProcStatic_9));
#line 625 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__DeepProfInfo_24, 1) = ((MR_Box) (ll_backend__proc_gen__DeepExcpSlots_23));
#line 625 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__DeepProfInfo_24, 2) = ((MR_Box) (ll_backend__proc_gen__V_26_26));
#line 625 "proc_gen.m"
        }
#line 627 "proc_gen.m"
        {
#line 627 "proc_gen.m"
          ll_backend__proc_gen__MaybeDeepProfInfo_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 627 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeDeepProfInfo_6, 0) = ((MR_Box) (ll_backend__proc_gen__DeepProfInfo_24));
#line 627 "proc_gen.m"
        }
#line 600 "proc_gen.m"
      }
#line 597 "proc_gen.m"
    return ll_backend__proc_gen__MaybeDeepProfInfo_6;
#line 597 "proc_gen.m"
  }
#line 594 "proc_gen.m"
}

#line 566 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__maybe_set_trace_level_3_p_0(
#line 566 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredInfo_4,
#line 566 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_14,
#line 566 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_15)
#line 566 "proc_gen.m"
{
#line 569 "proc_gen.m"
  {
#line 569 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 569 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Globals0_6;
#line 572 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredModule_7;
#line 572 "proc_gen.m"
    MR_String ll_backend__proc_gen__PredName_8;
#line 572 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__PredArity_9;

#line 570 "proc_gen.m"
    {
#line 570 "proc_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_14, &ll_backend__proc_gen__Globals0_6);
    }
#line 572 "proc_gen.m"
    {
#line 572 "proc_gen.m"
      ll_backend__proc_gen__PredModule_7 = hlds__hlds_pred__pred_info_module_1_f_0(ll_backend__proc_gen__PredInfo_4);
    }
#line 573 "proc_gen.m"
    {
#line 573 "proc_gen.m"
      ll_backend__proc_gen__PredName_8 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__proc_gen__PredInfo_4);
    }
#line 574 "proc_gen.m"
    {
#line 574 "proc_gen.m"
      ll_backend__proc_gen__PredArity_9 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(ll_backend__proc_gen__PredInfo_4);
    }
#line 575 "proc_gen.m"
    {
#line 575 "proc_gen.m"
      ll_backend__proc_gen__succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(ll_backend__proc_gen__PredModule_7, ll_backend__proc_gen__PredName_8, ll_backend__proc_gen__PredArity_9);
    }
#line 583 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 581 "proc_gen.m"
      {
#line 581 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Globals1_10;

#line 581 "proc_gen.m"
        {
#line 581 "proc_gen.m"
          libs__globals__set_trace_level_none_2_p_0(ll_backend__proc_gen__Globals0_6, &ll_backend__proc_gen__Globals1_10);
        }
#line 582 "proc_gen.m"
        {
#line 582 "proc_gen.m"
          hlds__hlds_module__module_info_set_globals_3_p_0(ll_backend__proc_gen__Globals1_10, ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_14, ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_15);
#line 582 "proc_gen.m"
          return;
        }
#line 581 "proc_gen.m"
      }
#line 583 "proc_gen.m"
    else
#line 590 "proc_gen.m"
      {
#line 590 "proc_gen.m"
        MR_Word ll_backend__proc_gen__UC_TraceLevel_13;
#line 584 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TraceLevel_12;
#line 584 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_21_21;
#line 584 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_23_23;

#line 584 "proc_gen.m"
        {
#line 584 "proc_gen.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(ll_backend__proc_gen__PredInfo_4, &ll_backend__proc_gen__V_21_21);
        }
#line 584 "proc_gen.m"
        ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 584 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 584 "proc_gen.m"
          {
#line 584 "proc_gen.m"
            ll_backend__proc_gen__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_21_21, (MR_Integer) 0)));
#line 585 "proc_gen.m"
            {
#line 585 "proc_gen.m"
              libs__globals__get_trace_level_2_p_0(ll_backend__proc_gen__Globals0_6, &ll_backend__proc_gen__TraceLevel_12);
            }
#line 586 "proc_gen.m"
            {
#line 586 "proc_gen.m"
              ll_backend__proc_gen__UC_TraceLevel_13 = libs__trace_params__trace_level_for_unify_compare_1_f_0(ll_backend__proc_gen__TraceLevel_12);
            }
#line 586 "proc_gen.m"
            ll_backend__proc_gen__succeeded = MR_TRUE;
#line 584 "proc_gen.m"
          }
#line 590 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 588 "proc_gen.m"
          {
#line 588 "proc_gen.m"
            MR_Word ll_backend__proc_gen__Globals1_19;

#line 588 "proc_gen.m"
            {
#line 588 "proc_gen.m"
              libs__globals__set_trace_level_3_p_0(ll_backend__proc_gen__UC_TraceLevel_13, ll_backend__proc_gen__Globals0_6, &ll_backend__proc_gen__Globals1_19);
            }
#line 589 "proc_gen.m"
            {
#line 589 "proc_gen.m"
              hlds__hlds_module__module_info_set_globals_3_p_0(ll_backend__proc_gen__Globals1_19, ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_14, ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_15);
#line 589 "proc_gen.m"
              return;
            }
#line 588 "proc_gen.m"
          }
#line 590 "proc_gen.m"
        else
#line 590 "proc_gen.m"
          *ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_15 = ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_14;
#line 590 "proc_gen.m"
      }
#line 569 "proc_gen.m"
  }
#line 566 "proc_gen.m"
}

#line 288 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_proc_list_code_9_p_0(
#line 288 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_1,
#line 288 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_2,
#line 288 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_3,
#line 288 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredInfo_4,
#line 288 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__5_5,
#line 288 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_6,
#line 288 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_7,
#line 288 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_Procs_0_8,
#line 288 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_Procs_9)
#line 288 "proc_gen.m"
{
#line 293 "proc_gen.m"
  while (MR_TRUE)
#line 293 "proc_gen.m"
    {
#line 293 "proc_gen.m"
      /* tailcall optimized into a loop */
#line 293 "proc_gen.m"
      {
#line 293 "proc_gen.m"
        MR_bool ll_backend__proc_gen__succeeded;

#line 293 "proc_gen.m"
        if ((ll_backend__proc_gen__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 293 "proc_gen.m"
          {
#line 293 "proc_gen.m"
            *ll_backend__proc_gen__STATE_VARIABLE_Procs_9 = ll_backend__proc_gen__STATE_VARIABLE_Procs_0_8;
#line 293 "proc_gen.m"
            *ll_backend__proc_gen__STATE_VARIABLE_GlobalData_7 = ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_6;
#line 293 "proc_gen.m"
          }
#line 293 "proc_gen.m"
        else
#line 295 "proc_gen.m"
          {
#line 295 "proc_gen.m"
            MR_Integer ll_backend__proc_gen__ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__5_5, (MR_Integer) 0)));
#line 295 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ProcIds_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__5_5, (MR_Integer) 1)));
#line 295 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ProcInfos_28;
#line 295 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ProcInfo_29;
#line 295 "proc_gen.m"
            MR_Word ll_backend__proc_gen__Proc_30;
#line 295 "proc_gen.m"
            MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_35;
#line 295 "proc_gen.m"
            MR_Word ll_backend__proc_gen__STATE_VARIABLE_Procs_36_36;
#line 297 "proc_gen.m"
            MR_Box ll_backend__proc_gen__conv0_ProcInfo_29;

#line 296 "proc_gen.m"
            {
#line 296 "proc_gen.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(ll_backend__proc_gen__PredInfo_4, &ll_backend__proc_gen__ProcInfos_28);
            }
#line 297 "proc_gen.m"
            {
#line 297 "proc_gen.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ll_backend__proc_gen__ProcInfos_28, ll_backend__proc_gen__ProcId_24, &ll_backend__proc_gen__conv0_ProcInfo_29);
            }
#line 297 "proc_gen.m"
            ll_backend__proc_gen__ProcInfo_29 = ((MR_Word) ll_backend__proc_gen__conv0_ProcInfo_29);
#line 298 "proc_gen.m"
            {
#line 298 "proc_gen.m"
              ll_backend__proc_gen__generate_proc_code_9_p_0(ll_backend__proc_gen__ModuleInfo_1, ll_backend__proc_gen__ConstStructMap_2, ll_backend__proc_gen__PredId_3, ll_backend__proc_gen__PredInfo_4, ll_backend__proc_gen__ProcId_24, ll_backend__proc_gen__ProcInfo_29, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_6, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_35, &ll_backend__proc_gen__Proc_30);
            }
#line 300 "proc_gen.m"
            {
#line 300 "proc_gen.m"
              ll_backend__proc_gen__STATE_VARIABLE_Procs_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "proc_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__proc_gen__STATE_VARIABLE_Procs_36_36, 0) = ((MR_Box) (ll_backend__proc_gen__Proc_30));
#line 300 "proc_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__proc_gen__STATE_VARIABLE_Procs_36_36, 1) = ((MR_Box) (ll_backend__proc_gen__STATE_VARIABLE_Procs_0_8));
#line 300 "proc_gen.m"
            }
#line 301 "proc_gen.m"
            /* direct tailcall eliminated */
#line 301 "proc_gen.m"
            {
#line 301 "proc_gen.m"
              MR_Word ll_backend__proc_gen__HeadVar__5__tmp_copy_5 = ll_backend__proc_gen__ProcIds_25;
#line 301 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0__tmp_copy_6 = ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_35;
#line 301 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_Procs_0__tmp_copy_8 = ll_backend__proc_gen__STATE_VARIABLE_Procs_36_36;

#line 301 "proc_gen.m"
              ll_backend__proc_gen__STATE_VARIABLE_Procs_0_8 = ll_backend__proc_gen__STATE_VARIABLE_Procs_0__tmp_copy_8;
#line 301 "proc_gen.m"
              ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_6 = ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0__tmp_copy_6;
#line 301 "proc_gen.m"
              ll_backend__proc_gen__HeadVar__5_5 = ll_backend__proc_gen__HeadVar__5__tmp_copy_5;
#line 301 "proc_gen.m"
            }
#line 301 "proc_gen.m"
            continue;
#line 295 "proc_gen.m"
          }
#line 293 "proc_gen.m"
      }
#line 293 "proc_gen.m"
      break;
#line 293 "proc_gen.m"
    }
#line 288 "proc_gen.m"
}

#line 263 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_pred_code_par_6_p_0(
#line 263 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_7,
#line 263 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_8,
#line 263 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_9,
#line 263 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__CProcs_10,
#line 263 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_15,
#line 263 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_16)
#line 263 "proc_gen.m"
{
#line 268 "proc_gen.m"
  {
#line 268 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredInfos_12;
#line 268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredInfo_13;
#line 268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcIds_14;
#line 270 "proc_gen.m"
    MR_Box ll_backend__proc_gen__conv0_PredInfo_13;

#line 269 "proc_gen.m"
    {
#line 269 "proc_gen.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(ll_backend__proc_gen__ModuleInfo_7, &ll_backend__proc_gen__PredInfos_12);
    }
#line 270 "proc_gen.m"
    {
#line 270 "proc_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ll_backend__proc_gen__PredInfos_12, ((MR_Box) (ll_backend__proc_gen__PredId_9)), &ll_backend__proc_gen__conv0_PredInfo_13);
    }
#line 270 "proc_gen.m"
    ll_backend__proc_gen__PredInfo_13 = ((MR_Word) ll_backend__proc_gen__conv0_PredInfo_13);
#line 271 "proc_gen.m"
    {
#line 271 "proc_gen.m"
      ll_backend__proc_gen__ProcIds_14 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(ll_backend__proc_gen__PredInfo_13);
    }
#line 283 "proc_gen.m"
    {
#line 283 "proc_gen.m"
      ll_backend__proc_gen__generate_proc_list_code_9_p_0(ll_backend__proc_gen__ModuleInfo_7, ll_backend__proc_gen__ConstStructMap_8, ll_backend__proc_gen__PredId_9, ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__ProcIds_14, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_15, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__proc_gen__CProcs_10);
#line 283 "proc_gen.m"
      return;
    }
#line 268 "proc_gen.m"
  }
#line 263 "proc_gen.m"
}

#line 230 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_maybe_pred_code_10_p_0(
#line 230 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_11,
#line 230 "proc_gen.m"
  MR_Word ll_backend__proc_gen__VeryVerbose_12,
#line 230 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Statistics_13,
#line 230 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_14,
#line 230 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_15,
#line 230 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__Predicates_16,
#line 230 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_24,
#line 230 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_25)
#line 230 "proc_gen.m"
{
#line 235 "proc_gen.m"
  {
#line 235 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 235 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredInfos_19;
#line 235 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredInfo_20;
#line 235 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcIds_21;
#line 241 "proc_gen.m"
    MR_Box ll_backend__proc_gen__conv0_PredInfo_20;

#line 240 "proc_gen.m"
    {
#line 240 "proc_gen.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(ll_backend__proc_gen__ModuleInfo_11, &ll_backend__proc_gen__PredInfos_19);
    }
#line 241 "proc_gen.m"
    {
#line 241 "proc_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ll_backend__proc_gen__PredInfos_19, ((MR_Box) (ll_backend__proc_gen__PredId_15)), &ll_backend__proc_gen__conv0_PredInfo_20);
    }
#line 241 "proc_gen.m"
    ll_backend__proc_gen__PredInfo_20 = ((MR_Word) ll_backend__proc_gen__conv0_PredInfo_20);
#line 242 "proc_gen.m"
    {
#line 242 "proc_gen.m"
      ll_backend__proc_gen__ProcIds_21 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(ll_backend__proc_gen__PredInfo_20);
    }
#line 246 "proc_gen.m"
    if ((ll_backend__proc_gen__ProcIds_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 244 "proc_gen.m"
      {
#line 245 "proc_gen.m"
        *ll_backend__proc_gen__Predicates_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 244 "proc_gen.m"
        *ll_backend__proc_gen__STATE_VARIABLE_GlobalData_25 = ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_24;
#line 244 "proc_gen.m"
      }
#line 246 "proc_gen.m"
    else
#line 256 "proc_gen.m"
#line 256 "proc_gen.m"
      switch (ll_backend__proc_gen__VeryVerbose_12) {
#line 256 "proc_gen.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 256 "proc_gen.m"
        case (MR_Integer) 0:
#line 257 "proc_gen.m"
          {
#line 257 "proc_gen.m"
            MR_Integer ll_backend__proc_gen__ProcId_74 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__ProcIds_21, (MR_Integer) 0)));
#line 257 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ProcIds_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__ProcIds_21, (MR_Integer) 1)));
#line 257 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ProcInfos_78;
#line 257 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ProcInfo_79;
#line 257 "proc_gen.m"
            MR_Word ll_backend__proc_gen__Proc_80;
#line 257 "proc_gen.m"
            MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_85;
#line 257 "proc_gen.m"
            MR_Word ll_backend__proc_gen__STATE_VARIABLE_Procs_36_86;
#line 297 "proc_gen.m"
            MR_Box ll_backend__proc_gen__conv1_ProcInfo_79;

#line 296 "proc_gen.m"
            {
#line 296 "proc_gen.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(ll_backend__proc_gen__PredInfo_20, &ll_backend__proc_gen__ProcInfos_78);
            }
#line 297 "proc_gen.m"
            {
#line 297 "proc_gen.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ll_backend__proc_gen__ProcInfos_78, ll_backend__proc_gen__ProcId_74, &ll_backend__proc_gen__conv1_ProcInfo_79);
            }
#line 297 "proc_gen.m"
            ll_backend__proc_gen__ProcInfo_79 = ((MR_Word) ll_backend__proc_gen__conv1_ProcInfo_79);
#line 298 "proc_gen.m"
            {
#line 298 "proc_gen.m"
              ll_backend__proc_gen__generate_proc_code_9_p_0(ll_backend__proc_gen__ModuleInfo_11, ll_backend__proc_gen__ConstStructMap_14, ll_backend__proc_gen__PredId_15, ll_backend__proc_gen__PredInfo_20, ll_backend__proc_gen__ProcId_74, ll_backend__proc_gen__ProcInfo_79, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_24, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_85, &ll_backend__proc_gen__Proc_80);
            }
#line 300 "proc_gen.m"
            {
#line 300 "proc_gen.m"
              ll_backend__proc_gen__STATE_VARIABLE_Procs_36_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "proc_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__proc_gen__STATE_VARIABLE_Procs_36_86, 0) = ((MR_Box) (ll_backend__proc_gen__Proc_80));
#line 300 "proc_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__proc_gen__STATE_VARIABLE_Procs_36_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 300 "proc_gen.m"
            }
#line 301 "proc_gen.m"
            {
#line 301 "proc_gen.m"
              ll_backend__proc_gen__generate_proc_list_code_9_p_0(ll_backend__proc_gen__ModuleInfo_11, ll_backend__proc_gen__ConstStructMap_14, ll_backend__proc_gen__PredId_15, ll_backend__proc_gen__PredInfo_20, ll_backend__proc_gen__ProcIds_75, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_85, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_25, ll_backend__proc_gen__STATE_VARIABLE_Procs_36_86, ll_backend__proc_gen__Predicates_16);
#line 301 "proc_gen.m"
              return;
            }
#line 257 "proc_gen.m"
          }
#line 256 "proc_gen.m"
          break;
#line 256 "proc_gen.m"
        case (MR_Integer) 1:
#line 249 "proc_gen.m"
          {
#line 249 "proc_gen.m"
            MR_Integer ll_backend__proc_gen__ProcId_105;
#line 249 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ProcIds_106;
#line 249 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ProcInfos_109;
#line 249 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ProcInfo_110;
#line 249 "proc_gen.m"
            MR_Word ll_backend__proc_gen__Proc_111;
#line 249 "proc_gen.m"
            MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_116;
#line 249 "proc_gen.m"
            MR_Word ll_backend__proc_gen__STATE_VARIABLE_Procs_36_117;
#line 297 "proc_gen.m"
            MR_Box ll_backend__proc_gen__conv2_ProcInfo_110;

#line 250 "proc_gen.m"
            {
#line 250 "proc_gen.m"
              mercury__io__write_string_3_p_0((MR_String) "% Generating code for ");
            }
#line 251 "proc_gen.m"
            {
#line 251 "proc_gen.m"
              hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(ll_backend__proc_gen__ModuleInfo_11, ll_backend__proc_gen__PredId_15);
            }
#line 252 "proc_gen.m"
            {
#line 252 "proc_gen.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 295 "proc_gen.m"
            ll_backend__proc_gen__ProcId_105 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__ProcIds_21, (MR_Integer) 0)));
#line 295 "proc_gen.m"
            ll_backend__proc_gen__ProcIds_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__ProcIds_21, (MR_Integer) 1)));
#line 296 "proc_gen.m"
            {
#line 296 "proc_gen.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(ll_backend__proc_gen__PredInfo_20, &ll_backend__proc_gen__ProcInfos_109);
            }
#line 297 "proc_gen.m"
            {
#line 297 "proc_gen.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ll_backend__proc_gen__ProcInfos_109, ll_backend__proc_gen__ProcId_105, &ll_backend__proc_gen__conv2_ProcInfo_110);
            }
#line 297 "proc_gen.m"
            ll_backend__proc_gen__ProcInfo_110 = ((MR_Word) ll_backend__proc_gen__conv2_ProcInfo_110);
#line 298 "proc_gen.m"
            {
#line 298 "proc_gen.m"
              ll_backend__proc_gen__generate_proc_code_9_p_0(ll_backend__proc_gen__ModuleInfo_11, ll_backend__proc_gen__ConstStructMap_14, ll_backend__proc_gen__PredId_15, ll_backend__proc_gen__PredInfo_20, ll_backend__proc_gen__ProcId_105, ll_backend__proc_gen__ProcInfo_110, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_24, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_116, &ll_backend__proc_gen__Proc_111);
            }
#line 300 "proc_gen.m"
            {
#line 300 "proc_gen.m"
              ll_backend__proc_gen__STATE_VARIABLE_Procs_36_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "proc_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__proc_gen__STATE_VARIABLE_Procs_36_117, 0) = ((MR_Box) (ll_backend__proc_gen__Proc_111));
#line 300 "proc_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__proc_gen__STATE_VARIABLE_Procs_36_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 300 "proc_gen.m"
            }
#line 301 "proc_gen.m"
            {
#line 301 "proc_gen.m"
              ll_backend__proc_gen__generate_proc_list_code_9_p_0(ll_backend__proc_gen__ModuleInfo_11, ll_backend__proc_gen__ConstStructMap_14, ll_backend__proc_gen__PredId_15, ll_backend__proc_gen__PredInfo_20, ll_backend__proc_gen__ProcIds_106, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_116, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_25, ll_backend__proc_gen__STATE_VARIABLE_Procs_36_117, ll_backend__proc_gen__Predicates_16);
            }
#line 255 "proc_gen.m"
            {
#line 255 "proc_gen.m"
              libs__file_util__maybe_report_stats_3_p_0(ll_backend__proc_gen__Statistics_13);
#line 255 "proc_gen.m"
              return;
            }
#line 249 "proc_gen.m"
          }
#line 256 "proc_gen.m"
          break;
#line 256 "proc_gen.m"
      }
#line 235 "proc_gen.m"
  }
#line 230 "proc_gen.m"
}

#line 162 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_code_sequential_10_p_0_1(
#line 162 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 162 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 162 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_2,
#line 162 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_3,
#line 162 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_4,
#line 162 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_5,
#line 162 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_6)
#line 162 "proc_gen.m"
{
#line 162 "proc_gen.m"
  {
#line 162 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;
#line 162 "proc_gen.m"
    MR_Word ll_backend__proc_gen__conv1_Predicates_16;
#line 162 "proc_gen.m"
    MR_Word ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_25;

#line 162 "proc_gen.m"
    {
#line 162 "proc_gen.m"
      ll_backend__proc_gen__generate_maybe_pred_code_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 6))), ((MR_Word) ll_backend__proc_gen__wrapper_arg_1), &ll_backend__proc_gen__conv1_Predicates_16, ((MR_Word) ll_backend__proc_gen__wrapper_arg_3), &ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_25);
    }
#line 162 "proc_gen.m"
    *ll_backend__proc_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__proc_gen__conv1_Predicates_16));
#line 162 "proc_gen.m"
    *ll_backend__proc_gen__wrapper_arg_4 = ((MR_Box) (ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_25));
#line 162 "proc_gen.m"
  }
#line 162 "proc_gen.m"
}

#line 155 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_code_sequential_10_p_0(
#line 155 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_11,
#line 155 "proc_gen.m"
  MR_Word ll_backend__proc_gen__VeryVerbose_12,
#line 155 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Statistics_13,
#line 155 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_14,
#line 155 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredIds_15,
#line 155 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_20,
#line 155 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_21,
#line 155 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__Procedures_17)
#line 155 "proc_gen.m"
{
#line 160 "proc_gen.m"
  {
#line 160 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 160 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredProcedures_19;
#line 160 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_24_24;
#line 161 "proc_gen.m"
    MR_Box ll_backend__proc_gen__conv3_STATE_VARIABLE_GlobalData_21;
#line 161 "proc_gen.m"
    MR_Box ll_backend__proc_gen__conv2_STATE_VARIABLE_IO_23;

#line 162 "proc_gen.m"
    {
#line 162 "proc_gen.m"
      ll_backend__proc_gen__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 162 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_24_24, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_6[0]));
#line 162 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_24_24, 1) = ((MR_Box) (ll_backend__proc_gen__generate_code_sequential_10_p_0_1));
#line 162 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 162 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_24_24, 3) = ((MR_Box) (ll_backend__proc_gen__ModuleInfo_11));
#line 162 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_24_24, 4) = ((MR_Box) (ll_backend__proc_gen__VeryVerbose_12));
#line 162 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_24_24, 5) = ((MR_Box) (ll_backend__proc_gen__Statistics_13));
#line 162 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_24_24, 6) = ((MR_Box) (ll_backend__proc_gen__ConstStructMap_14));
#line 162 "proc_gen.m"
    }
#line 161 "proc_gen.m"
    {
#line 161 "proc_gen.m"
      mercury__list__map_foldl2_7_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &ll_backend__proc_gen_scalar_common_1[1], (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__proc_gen__V_24_24, ll_backend__proc_gen__PredIds_15, &ll_backend__proc_gen__PredProcedures_19, ((MR_Box) (ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_20)), &ll_backend__proc_gen__conv3_STATE_VARIABLE_GlobalData_21, ((MR_Box) ((MR_Integer) 0)), &ll_backend__proc_gen__conv2_STATE_VARIABLE_IO_23);
    }
#line 161 "proc_gen.m"
    *ll_backend__proc_gen__STATE_VARIABLE_GlobalData_21 = ((MR_Word) ll_backend__proc_gen__conv3_STATE_VARIABLE_GlobalData_21);
#line 165 "proc_gen.m"
    {
#line 165 "proc_gen.m"
      mercury__list__condense_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0, ll_backend__proc_gen__PredProcedures_19, ll_backend__proc_gen__Procedures_17);
#line 165 "proc_gen.m"
      return;
    }
#line 160 "proc_gen.m"
  }
#line 155 "proc_gen.m"
}

#line 1390 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__add_all_tabling_info_structs_3_p_0_1(
#line 1390 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 1390 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 1390 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 1390 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_3)
#line 1390 "proc_gen.m"
{
#line 1390 "proc_gen.m"
  {
#line 1390 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;
#line 1390 "proc_gen.m"
    MR_Word ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_29;

#line 1390 "proc_gen.m"
    {
#line 1390 "proc_gen.m"
      ll_backend__proc_gen__add_tabling_info_struct_3_p_0(((MR_Word) ll_backend__proc_gen__wrapper_arg_1), ((MR_Word) ll_backend__proc_gen__wrapper_arg_2), &ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_29);
    }
#line 1390 "proc_gen.m"
    *ll_backend__proc_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_29));
#line 1390 "proc_gen.m"
  }
#line 1390 "proc_gen.m"
}

#line 66 "proc_gen.m"
void MR_CALL 
ll_backend__proc_gen__add_all_tabling_info_structs_3_p_0(
#line 66 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_4,
#line 66 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_8,
#line 66 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_9)
#line 66 "proc_gen.m"
{
#line 1387 "proc_gen.m"
  {
#line 1387 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1387 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TableStructMap_6;
#line 1387 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TableStructs_7;
#line 1390 "proc_gen.m"
    MR_Box ll_backend__proc_gen__conv1_STATE_VARIABLE_GlobalData_9;

#line 1388 "proc_gen.m"
    {
#line 1388 "proc_gen.m"
      hlds__hlds_module__module_info_get_table_struct_map_2_p_0(ll_backend__proc_gen__ModuleInfo_4, &ll_backend__proc_gen__TableStructMap_6);
    }
#line 1389 "proc_gen.m"
    {
#line 1389 "proc_gen.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0, ll_backend__proc_gen__TableStructMap_6, &ll_backend__proc_gen__TableStructs_7);
    }
#line 1390 "proc_gen.m"
    {
#line 1390 "proc_gen.m"
      mercury__list__foldl_4_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_2[0], (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0, (MR_Word) &ll_backend__proc_gen_scalar_common_2[4], ll_backend__proc_gen__TableStructs_7, ((MR_Box) (ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_8)), &ll_backend__proc_gen__conv1_STATE_VARIABLE_GlobalData_9);
    }
#line 1390 "proc_gen.m"
    *ll_backend__proc_gen__STATE_VARIABLE_GlobalData_9 = ((MR_Word) ll_backend__proc_gen__conv1_STATE_VARIABLE_GlobalData_9);
#line 1387 "proc_gen.m"
  }
#line 66 "proc_gen.m"
}

#line 61 "proc_gen.m"
MR_String MR_CALL 
ll_backend__proc_gen__push_msg_3_f_0(
#line 61 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_5,
#line 61 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_6,
#line 61 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__ProcId_7)
#line 61 "proc_gen.m"
{
#line 1354 "proc_gen.m"
  {
#line 1354 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1354 "proc_gen.m"
    MR_String ll_backend__proc_gen__PushMsg_8;
#line 1354 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredInfo_9;
#line 1354 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredOrFunc_10;
#line 1354 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ModuleName_11;
#line 1354 "proc_gen.m"
    MR_String ll_backend__proc_gen__PredName_12;
#line 1354 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__Arity_13;
#line 1354 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Origin_14;
#line 1354 "proc_gen.m"
    MR_String ll_backend__proc_gen__FullPredName_19;
#line 1354 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_23_23;
#line 1354 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_24_24;
#line 1354 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_26_26;
#line 1354 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_27_27;
#line 1354 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_28_28;
#line 1354 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_30_30;
#line 1354 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_31_31;
#line 1354 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_33_33;
#line 1354 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_34_34;
#line 1354 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_35_35;
#line 1354 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_37_37;
#line 1354 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__V_38_38;
#line 1365 "proc_gen.m"
    MR_Word ll_backend__proc_gen__SpecialId_15;
#line 1365 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TypeCtor_16;
#line 1361 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_20_20;

#line 1355 "proc_gen.m"
    {
#line 1355 "proc_gen.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__proc_gen__ModuleInfo_5, ll_backend__proc_gen__PredId_6, &ll_backend__proc_gen__PredInfo_9);
    }
#line 1356 "proc_gen.m"
    {
#line 1356 "proc_gen.m"
      ll_backend__proc_gen__PredOrFunc_10 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
#line 1357 "proc_gen.m"
    {
#line 1357 "proc_gen.m"
      ll_backend__proc_gen__ModuleName_11 = hlds__hlds_pred__pred_info_module_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
#line 1358 "proc_gen.m"
    {
#line 1358 "proc_gen.m"
      ll_backend__proc_gen__PredName_12 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
#line 1359 "proc_gen.m"
    {
#line 1359 "proc_gen.m"
      ll_backend__proc_gen__Arity_13 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
#line 1360 "proc_gen.m"
    {
#line 1360 "proc_gen.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(ll_backend__proc_gen__PredInfo_9, &ll_backend__proc_gen__Origin_14);
    }
#line 1361 "proc_gen.m"
    ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__Origin_14)) == (MR_mktag((MR_Integer) 0)));
#line 1361 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 1361 "proc_gen.m"
      {
#line 1361 "proc_gen.m"
        ll_backend__proc_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Origin_14, (MR_Integer) 0)));
#line 1361 "proc_gen.m"
        ll_backend__proc_gen__SpecialId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_20_20, (MR_Integer) 0)));
#line 1361 "proc_gen.m"
        ll_backend__proc_gen__TypeCtor_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_20_20, (MR_Integer) 1)));
#line 1361 "proc_gen.m"
        ll_backend__proc_gen__succeeded = MR_TRUE;
#line 1361 "proc_gen.m"
      }
#line 1365 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 1362 "proc_gen.m"
      {
#line 1362 "proc_gen.m"
        MR_String ll_backend__proc_gen__TypeName_17;
#line 1362 "proc_gen.m"
        MR_String ll_backend__proc_gen__SpecialPredName_18;
#line 1362 "proc_gen.m"
        MR_String ll_backend__proc_gen__V_21_21;
#line 1362 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TypeCtorSymName_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TypeCtor_16, (MR_Integer) 0)));
#line 1362 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__TypeCtorArity_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TypeCtor_16, (MR_Integer) 1)));
#line 1362 "proc_gen.m"
        MR_String ll_backend__proc_gen__TypeCtorName_43;
#line 1362 "proc_gen.m"
        MR_String ll_backend__proc_gen__ArityStr_44;
#line 1362 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_45_45;
#line 1362 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_46_46;
#line 1362 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_48_48;

#line 1380 "proc_gen.m"
        {
#line 1380 "proc_gen.m"
          ll_backend__proc_gen__TypeCtorName_43 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__proc_gen__TypeCtorSymName_41);
        }
#line 1381 "proc_gen.m"
        {
#line 1381 "proc_gen.m"
          mercury__string__int_to_string_2_p_0(ll_backend__proc_gen__TypeCtorArity_42, &ll_backend__proc_gen__ArityStr_44);
        }
#line 1382 "proc_gen.m"
        {
#line 1382 "proc_gen.m"
          ll_backend__proc_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1382 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_48_48, 0) = ((MR_Box) (ll_backend__proc_gen__ArityStr_44));
#line 1382 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1382 "proc_gen.m"
        }
#line 1382 "proc_gen.m"
        {
#line 1382 "proc_gen.m"
          ll_backend__proc_gen__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1382 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_46_46, 0) = ((MR_Box) ((MR_String) "_"));
#line 1382 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_46_46, 1) = ((MR_Box) (ll_backend__proc_gen__V_48_48));
#line 1382 "proc_gen.m"
        }
#line 1382 "proc_gen.m"
        {
#line 1382 "proc_gen.m"
          ll_backend__proc_gen__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1382 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_45_45, 0) = ((MR_Box) (ll_backend__proc_gen__TypeCtorName_43));
#line 1382 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_45_45, 1) = ((MR_Box) (ll_backend__proc_gen__V_46_46));
#line 1382 "proc_gen.m"
        }
#line 1382 "proc_gen.m"
        {
#line 1382 "proc_gen.m"
          mercury__string__append_list_2_p_0(ll_backend__proc_gen__V_45_45, &ll_backend__proc_gen__TypeName_17);
        }
#line 1363 "proc_gen.m"
        {
#line 1363 "proc_gen.m"
          ll_backend__proc_gen__SpecialPredName_18 = mdbcomp__prim_data__get_special_pred_id_generic_name_1_f_0(ll_backend__proc_gen__SpecialId_15);
        }
#line 1364 "proc_gen.m"
        {
#line 1364 "proc_gen.m"
          ll_backend__proc_gen__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "_for_", ll_backend__proc_gen__TypeName_17);
        }
#line 1364 "proc_gen.m"
        {
#line 1364 "proc_gen.m"
          ll_backend__proc_gen__FullPredName_19 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__SpecialPredName_18, ll_backend__proc_gen__V_21_21);
        }
#line 1362 "proc_gen.m"
      }
#line 1365 "proc_gen.m"
    else
#line 1366 "proc_gen.m"
      ll_backend__proc_gen__FullPredName_19 = ll_backend__proc_gen__PredName_12;
#line 1371 "proc_gen.m"
    {
#line 1371 "proc_gen.m"
      ll_backend__proc_gen__V_23_23 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(ll_backend__proc_gen__PredOrFunc_10);
    }
#line 1372 "proc_gen.m"
    {
#line 1372 "proc_gen.m"
      ll_backend__proc_gen__V_27_27 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__proc_gen__ModuleName_11);
    }
#line 1373 "proc_gen.m"
    {
#line 1373 "proc_gen.m"
      ll_backend__proc_gen__V_34_34 = mercury__string__int_to_string_1_f_0(ll_backend__proc_gen__Arity_13);
    }
#line 1374 "proc_gen.m"
    {
#line 1374 "proc_gen.m"
      ll_backend__proc_gen__V_38_38 = hlds__hlds_pred__proc_id_to_int_1_f_0(ll_backend__proc_gen__ProcId_7);
    }
#line 1374 "proc_gen.m"
    {
#line 1374 "proc_gen.m"
      ll_backend__proc_gen__V_37_37 = mercury__string__int_to_string_1_f_0(ll_backend__proc_gen__V_38_38);
    }
#line 1373 "proc_gen.m"
    {
#line 1373 "proc_gen.m"
      ll_backend__proc_gen__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) "-", ll_backend__proc_gen__V_37_37);
    }
#line 1373 "proc_gen.m"
    {
#line 1373 "proc_gen.m"
      ll_backend__proc_gen__V_33_33 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__V_34_34, ll_backend__proc_gen__V_35_35);
    }
#line 1373 "proc_gen.m"
    {
#line 1373 "proc_gen.m"
      ll_backend__proc_gen__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) "/", ll_backend__proc_gen__V_33_33);
    }
#line 1373 "proc_gen.m"
    {
#line 1373 "proc_gen.m"
      ll_backend__proc_gen__V_30_30 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__FullPredName_19, ll_backend__proc_gen__V_31_31);
    }
#line 1372 "proc_gen.m"
    {
#line 1372 "proc_gen.m"
      ll_backend__proc_gen__V_28_28 = mercury__string__f_43_43_2_f_0((MR_String) ".", ll_backend__proc_gen__V_30_30);
    }
#line 1372 "proc_gen.m"
    {
#line 1372 "proc_gen.m"
      ll_backend__proc_gen__V_26_26 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__V_27_27, ll_backend__proc_gen__V_28_28);
    }
#line 1371 "proc_gen.m"
    {
#line 1371 "proc_gen.m"
      ll_backend__proc_gen__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__proc_gen__V_26_26);
    }
#line 1371 "proc_gen.m"
    {
#line 1371 "proc_gen.m"
      return ll_backend__proc_gen__PushMsg_8 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__V_23_23, ll_backend__proc_gen__V_24_24);
    }
#line 1354 "proc_gen.m"
    return ll_backend__proc_gen__PushMsg_8;
#line 1354 "proc_gen.m"
  }
#line 61 "proc_gen.m"
}

#line 430 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_proc_code_9_p_0_2(
#line 430 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg)
#line 430 "proc_gen.m"
{
#line 430 "proc_gen.m"
  {
#line 430 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 430 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;

#line 430 "proc_gen.m"
    {
#line 430 "proc_gen.m"
      return ll_backend__proc_gen__succeeded = ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__430__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))));
    }
#line 430 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 430 "proc_gen.m"
  }
#line 430 "proc_gen.m"
}

#line 347 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_proc_code_9_p_0_1(
#line 347 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg)
#line 347 "proc_gen.m"
{
#line 347 "proc_gen.m"
  {
#line 347 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 347 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;

#line 347 "proc_gen.m"
    {
#line 347 "proc_gen.m"
      return ll_backend__proc_gen__succeeded = ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__347__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))));
    }
#line 347 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 347 "proc_gen.m"
  }
#line 347 "proc_gen.m"
}

#line 54 "proc_gen.m"
void MR_CALL 
ll_backend__proc_gen__generate_proc_code_9_p_0(
#line 54 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo0_10,
#line 54 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_11,
#line 54 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_12,
#line 54 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredInfo_13,
#line 54 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__ProcId_14,
#line 54 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcInfo0_15,
#line 54 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_108,
#line 54 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_109,
#line 54 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__CProc_17)
#line 54 "proc_gen.m"
{
#line 324 "proc_gen.m"
  {
#line 324 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TypeCtorInfo_157_157;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ModuleInfo_18;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcInfo1_19;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Globals_20;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TraceLevel_21;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__HasParConj_22;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Parallel_23;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcInfo_25;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeContainingGoalMap_26;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Detism_27;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__CodeModel_28;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Goal_29;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__GoalInfo_31;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeFollowVars_32;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__FollowVars_33;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ForceProcId_36;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__SaveSuccip_37;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__StaticCellInfo0_38;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TSRevStringTable0_39;
#line 324 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__TSStringTableSize0_40;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TraceSlotInfo_41;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__CodeInfo0_42;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__OutsideResumePoint_43;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__CodeInfo1_44;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__CodeLocDep0_45;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ClausesInfo_46;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcContext_48;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__CodeTree0_49;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeTraceCallLabel_50;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__FrameInfo_51;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__CodeInfo_52;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__OutOfLineCode_53;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__CodeTree_54;
#line 324 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__MaxTraceRegR_55;
#line 324 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__MaxTraceRegF_56;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__StaticCellInfo_57;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TSRevStringTable_58;
#line 324 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__TSStringTableSize_59;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__CreatedTempFrame_60;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcTraceEvents_61;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Instructions0_63;
#line 324 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__TotalSlots_64;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeSuccipSlot_65;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Instructions_68;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeTableIOInfo_69;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ClosureLayouts_97;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcLabel_98;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__AllocSites_99;
#line 324 "proc_gen.m"
    MR_String ll_backend__proc_gen__Name_100;
#line 324 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__Arity_101;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__LabelCounter_102;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MayAlterRtti_103;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__GenBytecode_104;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcInstructions_105;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcLabelCounter_106;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__UsedEnvVars_107;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_120_120;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_121_121;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_135_135;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_136_136;
#line 324 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_141_141;
#line 363 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_30_30;
#line 395 "proc_gen.m"
    MR_Word ll_backend__proc_gen__FirstClause_47;
#line 393 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_119_119;
#line 393 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_142_142;
#line 393 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_143_143;
#line 393 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_144_144;
#line 393 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_145_145;
#line 393 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_146_146;
#line 393 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_147_147;
#line 393 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_148_148;
#line 393 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_149_149;
#line 437 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_66_66;
#line 545 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_139_139;

#line 327 "proc_gen.m"
    {
#line 327 "proc_gen.m"
      ll_backend__proc_gen__maybe_set_trace_level_3_p_0(ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__ModuleInfo0_10, &ll_backend__proc_gen__ModuleInfo_18);
    }
#line 328 "proc_gen.m"
    {
#line 328 "proc_gen.m"
      hlds__hlds_pred__ensure_all_headvars_are_named_2_p_0(ll_backend__proc_gen__ProcInfo0_15, &ll_backend__proc_gen__ProcInfo1_19);
    }
#line 330 "proc_gen.m"
    {
#line 330 "proc_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__proc_gen__ModuleInfo_18, &ll_backend__proc_gen__Globals_20);
    }
#line 331 "proc_gen.m"
    {
#line 331 "proc_gen.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__proc_gen__Globals_20, &ll_backend__proc_gen__TraceLevel_21);
    }
#line 332 "proc_gen.m"
    {
#line 332 "proc_gen.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ll_backend__proc_gen__ProcInfo1_19, &ll_backend__proc_gen__HasParConj_22);
    }
#line 333 "proc_gen.m"
    {
#line 333 "proc_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__proc_gen__Globals_20, (MR_Integer) 217, &ll_backend__proc_gen__Parallel_23);
    }
#line 338 "proc_gen.m"
    {
#line 338 "proc_gen.m"
      MR_Word ll_backend__proc_gen__V_111_111;

#line 338 "proc_gen.m"
      {
#line 338 "proc_gen.m"
        ll_backend__proc_gen__V_111_111 = libs__trace_params__given_trace_level_is_none_1_f_0(ll_backend__proc_gen__TraceLevel_21);
      }
#line 338 "proc_gen.m"
      ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__V_111_111 == (MR_Integer) 0);
#line 338 "proc_gen.m"
    }
#line 339 "proc_gen.m"
    if (!(ll_backend__proc_gen__succeeded))
#line 340 "proc_gen.m"
      ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__HasParConj_22 == (MR_Integer) 0);
#line 355 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 351 "proc_gen.m"
      {
#line 351 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ContainingGoalMap_24;

#line 349 "proc_gen.m"
#line 349 "proc_gen.m"
        switch (ll_backend__proc_gen__HasParConj_22) {
#line 349 "proc_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 349 "proc_gen.m"
          case (MR_Integer) 1:
#line 350 "proc_gen.m"
            {
#line 350 "proc_gen.m"
            }
#line 349 "proc_gen.m"
            break;
#line 349 "proc_gen.m"
          case (MR_Integer) 0:
#line 344 "proc_gen.m"
            {
#line 344 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_112_112;

#line 347 "proc_gen.m"
              {
#line 347 "proc_gen.m"
                ll_backend__proc_gen__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 347 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_112_112, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_5[0]));
#line 347 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_112_112, 1) = ((MR_Box) (ll_backend__proc_gen__generate_proc_code_9_p_0_1));
#line 347 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_112_112, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 347 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_112_112, 3) = ((MR_Box) (ll_backend__proc_gen__Parallel_23));
#line 347 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_112_112, 4) = ((MR_Box) ((MR_Integer) 1));
#line 347 "proc_gen.m"
              }
#line 347 "proc_gen.m"
              {
#line 347 "proc_gen.m"
                mercury__require__expect_4_p_0(ll_backend__proc_gen__V_112_112, (MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.generate_proc_code\'/9", (MR_String) "found parallel conjunction in non-parallel grade");
              }
#line 344 "proc_gen.m"
            }
#line 349 "proc_gen.m"
            break;
#line 349 "proc_gen.m"
        }
#line 352 "proc_gen.m"
        {
#line 352 "proc_gen.m"
          hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(ll_backend__proc_gen__ModuleInfo_18, &ll_backend__proc_gen__ContainingGoalMap_24, ll_backend__proc_gen__ProcInfo1_19, &ll_backend__proc_gen__ProcInfo_25);
        }
#line 354 "proc_gen.m"
        {
#line 354 "proc_gen.m"
          ll_backend__proc_gen__MaybeContainingGoalMap_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 354 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeContainingGoalMap_26, 0) = ((MR_Box) (ll_backend__proc_gen__ContainingGoalMap_24));
#line 354 "proc_gen.m"
        }
#line 351 "proc_gen.m"
      }
#line 355 "proc_gen.m"
    else
#line 356 "proc_gen.m"
      {
#line 356 "proc_gen.m"
        ll_backend__proc_gen__MaybeContainingGoalMap_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 357 "proc_gen.m"
        ll_backend__proc_gen__ProcInfo_25 = ll_backend__proc_gen__ProcInfo1_19;
#line 356 "proc_gen.m"
      }
#line 360 "proc_gen.m"
    {
#line 360 "proc_gen.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__Detism_27);
    }
#line 361 "proc_gen.m"
    {
#line 361 "proc_gen.m"
      ll_backend__proc_gen__CodeModel_28 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__proc_gen__ProcInfo_25);
    }
#line 362 "proc_gen.m"
    {
#line 362 "proc_gen.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__Goal_29);
    }
#line 363 "proc_gen.m"
    ll_backend__proc_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Goal_29, (MR_Integer) 0)));
#line 363 "proc_gen.m"
    ll_backend__proc_gen__GoalInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Goal_29, (MR_Integer) 1)));
#line 364 "proc_gen.m"
    {
#line 364 "proc_gen.m"
      hlds__hlds_llds__goal_info_get_follow_vars_2_p_0(ll_backend__proc_gen__GoalInfo_31, &ll_backend__proc_gen__MaybeFollowVars_32);
    }
#line 367 "proc_gen.m"
    if ((ll_backend__proc_gen__MaybeFollowVars_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 368 "proc_gen.m"
      {
#line 368 "proc_gen.m"
        MR_Word ll_backend__proc_gen__FollowVarsMap_34;

#line 369 "proc_gen.m"
        {
#line 369 "proc_gen.m"
          mercury__map__init_1_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, &ll_backend__proc_gen__FollowVarsMap_34);
        }
#line 370 "proc_gen.m"
        {
#line 370 "proc_gen.m"
          ll_backend__proc_gen__FollowVars_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 370 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FollowVars_33, 0) = ((MR_Box) (ll_backend__proc_gen__FollowVarsMap_34));
#line 370 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FollowVars_33, 1) = ((MR_Box) ((MR_Integer) 1));
#line 370 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FollowVars_33, 2) = ((MR_Box) ((MR_Integer) 1));
#line 370 "proc_gen.m"
        }
#line 368 "proc_gen.m"
      }
#line 367 "proc_gen.m"
    else
#line 366 "proc_gen.m"
      ll_backend__proc_gen__FollowVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeFollowVars_32, (MR_Integer) 0)));
#line 372 "proc_gen.m"
    {
#line 372 "proc_gen.m"
      ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0(ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__Globals_20, &ll_backend__proc_gen__SaveSuccip_37, &ll_backend__proc_gen__ForceProcId_36);
    }
#line 381 "proc_gen.m"
    {
#line 381 "proc_gen.m"
      ll_backend__global_data__global_data_get_static_cell_info_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_108, &ll_backend__proc_gen__StaticCellInfo0_38);
    }
#line 382 "proc_gen.m"
    {
#line 382 "proc_gen.m"
      ll_backend__global_data__global_data_get_threadscope_rev_string_table_3_p_0(ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_108, &ll_backend__proc_gen__TSRevStringTable0_39, &ll_backend__proc_gen__TSStringTableSize0_40);
    }
#line 385 "proc_gen.m"
    {
#line 385 "proc_gen.m"
      ll_backend__code_info__code_info_init_13_p_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredId_12, ll_backend__proc_gen__ProcId_14, ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__ProcInfo_25, ll_backend__proc_gen__SaveSuccip_37, ll_backend__proc_gen__StaticCellInfo0_38, ll_backend__proc_gen__ConstStructMap_11, ll_backend__proc_gen__MaybeContainingGoalMap_26, ll_backend__proc_gen__TSRevStringTable0_39, ll_backend__proc_gen__TSStringTableSize0_40, &ll_backend__proc_gen__TraceSlotInfo_41, &ll_backend__proc_gen__CodeInfo0_42);
    }
#line 388 "proc_gen.m"
    {
#line 388 "proc_gen.m"
      ll_backend__code_loc_dep__code_loc_dep_init_5_p_0(ll_backend__proc_gen__FollowVars_33, &ll_backend__proc_gen__OutsideResumePoint_43, ll_backend__proc_gen__CodeInfo0_42, &ll_backend__proc_gen__CodeInfo1_44, &ll_backend__proc_gen__CodeLocDep0_45);
    }
#line 392 "proc_gen.m"
    {
#line 392 "proc_gen.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(ll_backend__proc_gen__PredInfo_13, &ll_backend__proc_gen__ClausesInfo_46);
    }
#line 393 "proc_gen.m"
    ll_backend__proc_gen__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_46, (MR_Integer) 0)));
#line 393 "proc_gen.m"
    ll_backend__proc_gen__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_46, (MR_Integer) 1)));
#line 393 "proc_gen.m"
    ll_backend__proc_gen__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_46, (MR_Integer) 2)));
#line 393 "proc_gen.m"
    ll_backend__proc_gen__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_46, (MR_Integer) 3)));
#line 393 "proc_gen.m"
    ll_backend__proc_gen__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_46, (MR_Integer) 4)));
#line 393 "proc_gen.m"
    ll_backend__proc_gen__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_46, (MR_Integer) 5)));
#line 393 "proc_gen.m"
    ll_backend__proc_gen__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_46, (MR_Integer) 6)));
#line 393 "proc_gen.m"
    ll_backend__proc_gen__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_46, (MR_Integer) 7)));
#line 393 "proc_gen.m"
    ll_backend__proc_gen__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_46, (MR_Integer) 8)));
#line 393 "proc_gen.m"
    {
#line 393 "proc_gen.m"
      ll_backend__proc_gen__succeeded = hlds__hlds_clauses__get_first_clause_2_p_0(ll_backend__proc_gen__V_119_119, &ll_backend__proc_gen__FirstClause_47);
    }
#line 395 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 394 "proc_gen.m"
      {
#line 394 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FirstClause_47, (MR_Integer) 0)));
#line 394 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FirstClause_47, (MR_Integer) 1)));
#line 394 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FirstClause_47, (MR_Integer) 2)));
#line 394 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_153_153;

#line 394 "proc_gen.m"
        ll_backend__proc_gen__ProcContext_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FirstClause_47, (MR_Integer) 3)));
#line 394 "proc_gen.m"
        ll_backend__proc_gen__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FirstClause_47, (MR_Integer) 4)));
#line 394 "proc_gen.m"
      }
#line 395 "proc_gen.m"
    else
#line 398 "proc_gen.m"
      {
#line 398 "proc_gen.m"
        ll_backend__proc_gen__ProcContext_48 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__proc_gen__GoalInfo_31);
      }
#line 402 "proc_gen.m"
    {
#line 402 "proc_gen.m"
      ll_backend__proc_gen__generate_category_code_11_p_0(ll_backend__proc_gen__CodeModel_28, ll_backend__proc_gen__ProcContext_48, ll_backend__proc_gen__Goal_29, ll_backend__proc_gen__OutsideResumePoint_43, ll_backend__proc_gen__TraceSlotInfo_41, &ll_backend__proc_gen__CodeTree0_49, &ll_backend__proc_gen__MaybeTraceCallLabel_50, &ll_backend__proc_gen__FrameInfo_51, ll_backend__proc_gen__CodeInfo1_44, &ll_backend__proc_gen__CodeInfo_52, ll_backend__proc_gen__CodeLocDep0_45);
    }
#line 405 "proc_gen.m"
    {
#line 405 "proc_gen.m"
      ll_backend__code_info__get_out_of_line_code_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__OutOfLineCode_53);
    }
#line 8139 "ll_backend.proc_gen.c"
    ll_backend__proc_gen__TypeCtorInfo_157_157 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 406 "proc_gen.m"
    {
#line 406 "proc_gen.m"
      ll_backend__proc_gen__CodeTree_54 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_157_157, ll_backend__proc_gen__CodeTree0_49, ll_backend__proc_gen__OutOfLineCode_53);
    }
#line 407 "proc_gen.m"
    {
#line 407 "proc_gen.m"
      ll_backend__code_info__get_max_regs_in_use_at_trace_3_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__MaxTraceRegR_55, &ll_backend__proc_gen__MaxTraceRegF_56);
    }
#line 408 "proc_gen.m"
    {
#line 408 "proc_gen.m"
      ll_backend__code_info__get_static_cell_info_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__StaticCellInfo_57);
    }
#line 409 "proc_gen.m"
    {
#line 409 "proc_gen.m"
      ll_backend__global_data__global_data_set_static_cell_info_3_p_0(ll_backend__proc_gen__StaticCellInfo_57, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_108, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_120_120);
    }
#line 411 "proc_gen.m"
    {
#line 411 "proc_gen.m"
      ll_backend__code_info__get_threadscope_rev_string_table_3_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__TSRevStringTable_58, &ll_backend__proc_gen__TSStringTableSize_59);
    }
#line 413 "proc_gen.m"
    {
#line 413 "proc_gen.m"
      ll_backend__global_data__global_data_set_threadscope_rev_string_table_4_p_0(ll_backend__proc_gen__TSRevStringTable_58, ll_backend__proc_gen__TSStringTableSize_59, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_120_120, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_121_121);
    }
#line 416 "proc_gen.m"
    {
#line 416 "proc_gen.m"
      ll_backend__code_info__get_created_temp_frame_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__CreatedTempFrame_60);
    }
#line 417 "proc_gen.m"
    {
#line 417 "proc_gen.m"
      ll_backend__code_info__get_proc_trace_events_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__ProcTraceEvents_61);
    }
#line 436 "proc_gen.m"
    {
#line 436 "proc_gen.m"
      ll_backend__proc_gen__Instructions0_63 = mercury__cord__list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_157_157, ll_backend__proc_gen__CodeTree_54);
    }
#line 437 "proc_gen.m"
    ll_backend__proc_gen__TotalSlots_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FrameInfo_51, (MR_Integer) 0)));
#line 437 "proc_gen.m"
    ll_backend__proc_gen__MaybeSuccipSlot_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FrameInfo_51, (MR_Integer) 1)));
#line 437 "proc_gen.m"
    ll_backend__proc_gen__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FrameInfo_51, (MR_Integer) 2)));
#line 444 "proc_gen.m"
    if ((ll_backend__proc_gen__MaybeSuccipSlot_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 446 "proc_gen.m"
      ll_backend__proc_gen__Instructions_68 = ll_backend__proc_gen__Instructions0_63;
#line 444 "proc_gen.m"
    else
#line 439 "proc_gen.m"
      {
#line 439 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__SuccipSlot_67 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeSuccipSlot_65, (MR_Integer) 0)));

#line 443 "proc_gen.m"
        {
#line 443 "proc_gen.m"
          ll_backend__proc_gen__add_saved_succip_3_p_0(ll_backend__proc_gen__Instructions0_63, ll_backend__proc_gen__SuccipSlot_67, &ll_backend__proc_gen__Instructions_68);
        }
#line 439 "proc_gen.m"
      }
#line 449 "proc_gen.m"
    {
#line 449 "proc_gen.m"
      hlds__hlds_pred__proc_info_get_maybe_proc_table_io_info_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__MaybeTableIOInfo_69);
    }
#line 451 "proc_gen.m"
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__SaveSuccip_37 == (MR_Integer) 1);
#line 452 "proc_gen.m"
    if (!(ll_backend__proc_gen__succeeded))
#line 452 "proc_gen.m"
      {
#line 452 "proc_gen.m"
        MR_Word ll_backend__proc_gen___TableIODeclInfo_70;

#line 452 "proc_gen.m"
        ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__MaybeTableIOInfo_69)) == (MR_mktag((MR_Integer) 1)));
#line 452 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 452 "proc_gen.m"
          ll_backend__proc_gen___TableIODeclInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTableIOInfo_69, (MR_Integer) 0)));
#line 452 "proc_gen.m"
      }
#line 516 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 456 "proc_gen.m"
      {
#line 456 "proc_gen.m"
        MR_Word ll_backend__proc_gen__RttiProcLabel_71;
#line 456 "proc_gen.m"
        MR_Word ll_backend__proc_gen__InternalMap_72;
#line 456 "proc_gen.m"
        MR_Word ll_backend__proc_gen__EntryLabel_73;
#line 456 "proc_gen.m"
        MR_Word ll_backend__proc_gen__EvalMethod_74;
#line 456 "proc_gen.m"
        MR_Word ll_backend__proc_gen__InstMap0_75;
#line 456 "proc_gen.m"
        MR_Word ll_backend__proc_gen__HeadVars_76;
#line 456 "proc_gen.m"
        MR_Word ll_backend__proc_gen__VarSet_77;
#line 456 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ArgModes_78;
#line 456 "proc_gen.m"
        MR_Word ll_backend__proc_gen__VarTypes_79;
#line 456 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TraceSuppress_80;
#line 456 "proc_gen.m"
        MR_Word ll_backend__proc_gen__NeedGoalRep_81;
#line 456 "proc_gen.m"
        MR_Word ll_backend__proc_gen__NeedsAllNames_82;
#line 456 "proc_gen.m"
        MR_Word ll_backend__proc_gen__MaybeHLDSDeepInfo_83;
#line 456 "proc_gen.m"
        MR_Word ll_backend__proc_gen__MaybeDeepProfInfo_85;
#line 456 "proc_gen.m"
        MR_Word ll_backend__proc_gen__EffTraceLevel_86;
#line 456 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TableStructMap_87;
#line 456 "proc_gen.m"
        MR_Word ll_backend__proc_gen__PredProcId_88;
#line 456 "proc_gen.m"
        MR_Word ll_backend__proc_gen__MaybeTableInfo_92;
#line 456 "proc_gen.m"
        MR_Word ll_backend__proc_gen__OISUKindFors_95;
#line 456 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ProcLayout_96;
#line 468 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_128_128;

#line 456 "proc_gen.m"
        {
#line 456 "proc_gen.m"
          ll_backend__proc_gen__RttiProcLabel_71 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredId_12, ll_backend__proc_gen__ProcId_14);
        }
#line 457 "proc_gen.m"
        {
#line 457 "proc_gen.m"
          ll_backend__code_info__get_layout_info_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__InternalMap_72);
        }
#line 458 "proc_gen.m"
        {
#line 458 "proc_gen.m"
          ll_backend__proc_gen__EntryLabel_73 = ll_backend__code_util__make_local_entry_label_4_f_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredId_12, ll_backend__proc_gen__ProcId_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 459 "proc_gen.m"
        {
#line 459 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__EvalMethod_74);
        }
#line 460 "proc_gen.m"
        {
#line 460 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ll_backend__proc_gen__ProcInfo_25, ll_backend__proc_gen__ModuleInfo_18, &ll_backend__proc_gen__InstMap0_75);
        }
#line 461 "proc_gen.m"
        {
#line 461 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__HeadVars_76);
        }
#line 462 "proc_gen.m"
        {
#line 462 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__VarSet_77);
        }
#line 463 "proc_gen.m"
        {
#line 463 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__ArgModes_78);
        }
#line 464 "proc_gen.m"
        {
#line 464 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__VarTypes_79);
        }
#line 465 "proc_gen.m"
        {
#line 465 "proc_gen.m"
          libs__globals__get_trace_suppress_2_p_0(ll_backend__proc_gen__Globals_20, &ll_backend__proc_gen__TraceSuppress_80);
        }
#line 467 "proc_gen.m"
        {
#line 467 "proc_gen.m"
          ll_backend__proc_gen__V_128_128 = libs__trace_params__eff_trace_needs_proc_body_reps_5_f_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__ProcInfo_25, ll_backend__proc_gen__TraceLevel_21, ll_backend__proc_gen__TraceSuppress_80);
        }
#line 468 "proc_gen.m"
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__V_128_128 == (MR_Integer) 1);
#line 471 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 470 "proc_gen.m"
          ll_backend__proc_gen__NeedGoalRep_81 = (MR_Integer) 0;
#line 471 "proc_gen.m"
        else
#line 472 "proc_gen.m"
          ll_backend__proc_gen__NeedGoalRep_81 = (MR_Integer) 1;
#line 474 "proc_gen.m"
        {
#line 474 "proc_gen.m"
          ll_backend__proc_gen__NeedsAllNames_82 = libs__trace_params__eff_trace_needs_all_var_names_5_f_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__ProcInfo_25, ll_backend__proc_gen__TraceLevel_21, ll_backend__proc_gen__TraceSuppress_80);
        }
#line 476 "proc_gen.m"
        {
#line 476 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__MaybeHLDSDeepInfo_83);
        }
#line 481 "proc_gen.m"
        if ((ll_backend__proc_gen__MaybeHLDSDeepInfo_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 483 "proc_gen.m"
          ll_backend__proc_gen__MaybeDeepProfInfo_85 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 481 "proc_gen.m"
        else
#line 478 "proc_gen.m"
          {
#line 478 "proc_gen.m"
            MR_Word ll_backend__proc_gen__HLDSDeepInfo_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeHLDSDeepInfo_83, (MR_Integer) 0)));

#line 479 "proc_gen.m"
            {
#line 479 "proc_gen.m"
              ll_backend__proc_gen__MaybeDeepProfInfo_85 = ll_backend__proc_gen__maybe_generate_deep_prof_info_2_f_0(ll_backend__proc_gen__ProcInfo_25, ll_backend__proc_gen__HLDSDeepInfo_84);
            }
#line 478 "proc_gen.m"
          }
#line 485 "proc_gen.m"
        {
#line 485 "proc_gen.m"
          ll_backend__proc_gen__EffTraceLevel_86 = libs__trace_params__eff_trace_level_4_f_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__ProcInfo_25, ll_backend__proc_gen__TraceLevel_21);
        }
#line 487 "proc_gen.m"
        {
#line 487 "proc_gen.m"
          hlds__hlds_module__module_info_get_table_struct_map_2_p_0(ll_backend__proc_gen__ModuleInfo_18, &ll_backend__proc_gen__TableStructMap_87);
        }
#line 488 "proc_gen.m"
        {
#line 488 "proc_gen.m"
          ll_backend__proc_gen__PredProcId_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 488 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__PredProcId_88, 0) = ((MR_Box) (ll_backend__proc_gen__PredId_12));
#line 488 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__PredProcId_88, 1) = ((MR_Box) (ll_backend__proc_gen__ProcId_14));
#line 488 "proc_gen.m"
        }
#line 498 "proc_gen.m"
        if ((ll_backend__proc_gen__MaybeTableIOInfo_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 495 "proc_gen.m"
          {
#line 495 "proc_gen.m"
            MR_Word ll_backend__proc_gen__TableStructInfo_89;
#line 491 "proc_gen.m"
            MR_Box ll_backend__proc_gen__conv0_TableStructInfo_89;

#line 491 "proc_gen.m"
            {
#line 491 "proc_gen.m"
              ll_backend__proc_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0, ll_backend__proc_gen__TableStructMap_87, ((MR_Box) (ll_backend__proc_gen__PredProcId_88)), &ll_backend__proc_gen__conv0_TableStructInfo_89);
            }
#line 491 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 491 "proc_gen.m"
              {
#line 491 "proc_gen.m"
                ll_backend__proc_gen__TableStructInfo_89 = ((MR_Word) ll_backend__proc_gen__conv0_TableStructInfo_89);
#line 491 "proc_gen.m"
                ll_backend__proc_gen__succeeded = MR_TRUE;
#line 491 "proc_gen.m"
              }
#line 495 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 493 "proc_gen.m"
              {
#line 493 "proc_gen.m"
                MR_Word ll_backend__proc_gen__ProcTableStructInfo_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableStructInfo_89, (MR_Integer) 0)));
#line 493 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_133_133;
#line 492 "proc_gen.m"
                MR_Word ll_backend__proc_gen___Attributes_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableStructInfo_89, (MR_Integer) 1)));

#line 494 "proc_gen.m"
                {
#line 494 "proc_gen.m"
                  ll_backend__proc_gen__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 494 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_133_133, 0) = ((MR_Box) (ll_backend__proc_gen__ProcTableStructInfo_90));
#line 494 "proc_gen.m"
                }
#line 494 "proc_gen.m"
                {
#line 494 "proc_gen.m"
                  ll_backend__proc_gen__MaybeTableInfo_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 494 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTableInfo_92, 0) = ((MR_Box) (ll_backend__proc_gen__V_133_133));
#line 494 "proc_gen.m"
                }
#line 493 "proc_gen.m"
              }
#line 495 "proc_gen.m"
            else
#line 496 "proc_gen.m"
              ll_backend__proc_gen__MaybeTableInfo_92 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 495 "proc_gen.m"
          }
#line 498 "proc_gen.m"
        else
#line 499 "proc_gen.m"
          {
#line 499 "proc_gen.m"
            MR_Word ll_backend__proc_gen__TableIOInfo_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTableIOInfo_69, (MR_Integer) 0)));
#line 500 "proc_gen.m"
            MR_Word ll_backend__proc_gen___TableStructInfo_94;
#line 500 "proc_gen.m"
            MR_Box ll_backend__proc_gen__conv1__TableStructInfo_94;

#line 500 "proc_gen.m"
            {
#line 500 "proc_gen.m"
              ll_backend__proc_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0, ll_backend__proc_gen__TableStructMap_87, ((MR_Box) (ll_backend__proc_gen__PredProcId_88)), &ll_backend__proc_gen__conv1__TableStructInfo_94);
            }
#line 500 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 500 "proc_gen.m"
              {
#line 500 "proc_gen.m"
                ll_backend__proc_gen___TableStructInfo_94 = ((MR_Word) ll_backend__proc_gen__conv1__TableStructInfo_94);
#line 500 "proc_gen.m"
                ll_backend__proc_gen__succeeded = MR_TRUE;
#line 500 "proc_gen.m"
              }
#line 502 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 501 "proc_gen.m"
              {
#line 501 "proc_gen.m"
                {
#line 501 "proc_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.generate_proc_code\'/9", (MR_String) "conflicting kinds of tabling");
#line 501 "proc_gen.m"
                  return;
                }
#line 501 "proc_gen.m"
              }
#line 502 "proc_gen.m"
            else
#line 503 "proc_gen.m"
              {
#line 503 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_132_132;

#line 503 "proc_gen.m"
                {
#line 503 "proc_gen.m"
                  ll_backend__proc_gen__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 503 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_132_132, 0) = ((MR_Box) (ll_backend__proc_gen__TableIOInfo_93));
#line 503 "proc_gen.m"
                }
#line 503 "proc_gen.m"
                {
#line 503 "proc_gen.m"
                  ll_backend__proc_gen__MaybeTableInfo_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 503 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTableInfo_92, 0) = ((MR_Box) (ll_backend__proc_gen__V_132_132));
#line 503 "proc_gen.m"
                }
#line 503 "proc_gen.m"
              }
#line 499 "proc_gen.m"
          }
#line 506 "proc_gen.m"
        {
#line 506 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_oisu_kind_fors_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__OISUKindFors_95);
        }
#line 507 "proc_gen.m"
        {
#line 507 "proc_gen.m"
          ll_backend__proc_gen__ProcLayout_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 24 * sizeof(MR_Word)), NULL, NULL);
#line 507 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 0) = ((MR_Box) (ll_backend__proc_gen__RttiProcLabel_71));
#line 507 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 1) = ((MR_Box) (ll_backend__proc_gen__EntryLabel_73));
#line 507 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 2) = ((MR_Box) (ll_backend__proc_gen__Detism_27));
#line 507 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 3) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_64));
#line 507 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 4) = ((MR_Box) (ll_backend__proc_gen__MaybeSuccipSlot_65));
#line 507 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 5) = ((MR_Box) (ll_backend__proc_gen__EvalMethod_74));
#line 507 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 6) = ((MR_Box) (ll_backend__proc_gen__EffTraceLevel_86));
#line 507 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 7) = ((MR_Box) (ll_backend__proc_gen__MaybeTraceCallLabel_50));
#line 507 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 8) = ((MR_Box) (ll_backend__proc_gen__MaxTraceRegR_55));
#line 507 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 9) = ((MR_Box) (ll_backend__proc_gen__MaxTraceRegF_56));
#line 507 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 10) = ((MR_Box) (ll_backend__proc_gen__HeadVars_76));
#line 507 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 11) = ((MR_Box) (ll_backend__proc_gen__ArgModes_78));
#line 507 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 12) = ((MR_Box) (ll_backend__proc_gen__Goal_29));
#line 507 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 13) = ((MR_Box) (ll_backend__proc_gen__NeedGoalRep_81));
#line 507 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 14) = ((MR_Box) (ll_backend__proc_gen__InstMap0_75));
#line 507 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 15) = ((MR_Box) (ll_backend__proc_gen__TraceSlotInfo_41));
#line 507 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 16) = ((MR_Box) (ll_backend__proc_gen__ForceProcId_36));
#line 507 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 17) = ((MR_Box) (ll_backend__proc_gen__VarSet_77));
#line 507 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 18) = ((MR_Box) (ll_backend__proc_gen__VarTypes_79));
#line 507 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 19) = ((MR_Box) (ll_backend__proc_gen__InternalMap_72));
#line 507 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 20) = ((MR_Box) (ll_backend__proc_gen__MaybeTableInfo_92));
#line 507 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 21) = ((MR_Box) (ll_backend__proc_gen__NeedsAllNames_82));
#line 507 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 22) = ((MR_Box) (ll_backend__proc_gen__OISUKindFors_95));
#line 507 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 23) = ((MR_Box) (ll_backend__proc_gen__MaybeDeepProfInfo_85));
#line 507 "proc_gen.m"
        }
#line 514 "proc_gen.m"
        {
#line 514 "proc_gen.m"
          ll_backend__global_data__global_data_add_new_proc_layout_4_p_0(ll_backend__proc_gen__PredProcId_88, ll_backend__proc_gen__ProcLayout_96, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_121_121, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_135_135);
        }
#line 456 "proc_gen.m"
      }
#line 516 "proc_gen.m"
    else
#line 516 "proc_gen.m"
      ll_backend__proc_gen__STATE_VARIABLE_GlobalData_135_135 = ll_backend__proc_gen__STATE_VARIABLE_GlobalData_121_121;
#line 520 "proc_gen.m"
    {
#line 520 "proc_gen.m"
      ll_backend__code_info__get_closure_layouts_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__ClosureLayouts_97);
    }
#line 521 "proc_gen.m"
    {
#line 521 "proc_gen.m"
      ll_backend__global_data__global_data_add_new_closure_layouts_3_p_0(ll_backend__proc_gen__ClosureLayouts_97, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_135_135, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_136_136);
    }
#line 522 "proc_gen.m"
    {
#line 522 "proc_gen.m"
      ll_backend__proc_gen__ProcLabel_98 = backend_libs__proc_label__make_proc_label_3_f_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredId_12, ll_backend__proc_gen__ProcId_14);
    }
#line 524 "proc_gen.m"
    {
#line 524 "proc_gen.m"
      ll_backend__code_info__get_alloc_sites_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__AllocSites_99);
    }
#line 525 "proc_gen.m"
    {
#line 525 "proc_gen.m"
      ll_backend__global_data__global_data_add_new_alloc_sites_3_p_0(ll_backend__proc_gen__AllocSites_99, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_136_136, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_109);
    }
#line 527 "proc_gen.m"
    {
#line 527 "proc_gen.m"
      ll_backend__proc_gen__Name_100 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__proc_gen__PredInfo_13);
    }
#line 528 "proc_gen.m"
    {
#line 528 "proc_gen.m"
      ll_backend__proc_gen__Arity_101 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(ll_backend__proc_gen__PredInfo_13);
    }
#line 530 "proc_gen.m"
    {
#line 530 "proc_gen.m"
      ll_backend__code_info__get_label_counter_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__LabelCounter_102);
    }
#line 420 "proc_gen.m"
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__ProcTraceEvents_61 == (MR_Integer) 1);
#line 420 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 420 "proc_gen.m"
      {
#line 421 "proc_gen.m"
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CreatedTempFrame_60 == (MR_Integer) 1);
#line 420 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 420 "proc_gen.m"
          {
#line 422 "proc_gen.m"
            ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CodeModel_28 == (MR_Integer) 2);
#line 422 "proc_gen.m"
            ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
#line 420 "proc_gen.m"
          }
#line 420 "proc_gen.m"
      }
#line 8647 "ll_backend.proc_gen.c"
    if (ll_backend__proc_gen__succeeded)
#line 8649 "ll_backend.proc_gen.c"
      {
#line 8651 "ll_backend.proc_gen.c"
        MR_Word ll_backend__proc_gen__NeedsMaxfrSlot_62;
#line 8653 "ll_backend.proc_gen.c"
        MR_Word ll_backend__proc_gen__V_122_122;

#line 429 "proc_gen.m"
        {
#line 429 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_needs_maxfr_slot_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__NeedsMaxfrSlot_62);
        }
#line 430 "proc_gen.m"
        {
#line 430 "proc_gen.m"
          ll_backend__proc_gen__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 430 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_122_122, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_5[1]));
#line 430 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_122_122, 1) = ((MR_Box) (ll_backend__proc_gen__generate_proc_code_9_p_0_2));
#line 430 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_122_122, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 430 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_122_122, 3) = ((MR_Box) (ll_backend__proc_gen__NeedsMaxfrSlot_62));
#line 430 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_122_122, 4) = ((MR_Box) ((MR_Integer) 0));
#line 430 "proc_gen.m"
        }
#line 430 "proc_gen.m"
        {
#line 430 "proc_gen.m"
          mercury__require__expect_4_p_0(ll_backend__proc_gen__V_122_122, (MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.generate_proc_code\'/9", (MR_String) "should have reserved a slot for maxfr, but didn\'t");
        }
#line 537 "proc_gen.m"
        ll_backend__proc_gen__MayAlterRtti_103 = (MR_Integer) 1;
#line 8684 "ll_backend.proc_gen.c"
      }
#line 8686 "ll_backend.proc_gen.c"
    else
#line 535 "proc_gen.m"
#line 535 "proc_gen.m"
      switch (ll_backend__proc_gen__ProcTraceEvents_61) {
#line 535 "proc_gen.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 535 "proc_gen.m"
        case (MR_Integer) 0:
#line 534 "proc_gen.m"
          ll_backend__proc_gen__MayAlterRtti_103 = (MR_Integer) 0;
#line 535 "proc_gen.m"
          break;
#line 535 "proc_gen.m"
        case (MR_Integer) 1:
#line 537 "proc_gen.m"
          ll_backend__proc_gen__MayAlterRtti_103 = (MR_Integer) 1;
#line 535 "proc_gen.m"
          break;
#line 535 "proc_gen.m"
      }
#line 540 "proc_gen.m"
    {
#line 540 "proc_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__proc_gen__Globals_20, (MR_Integer) 137, &ll_backend__proc_gen__GenBytecode_104);
    }
#line 545 "proc_gen.m"
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__GenBytecode_104 == (MR_Integer) 1);
#line 545 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 545 "proc_gen.m"
      {
#line 551 "proc_gen.m"
        {
#line 551 "proc_gen.m"
          ll_backend__proc_gen__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(ll_backend__proc_gen__PredInfo_13);
        }
#line 551 "proc_gen.m"
        ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
#line 545 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 545 "proc_gen.m"
          {
#line 553 "proc_gen.m"
            {
#line 553 "proc_gen.m"
              ll_backend__proc_gen__V_139_139 = hlds__goal_form__goal_has_foreign_1_f_0(ll_backend__proc_gen__Goal_29);
            }
#line 553 "proc_gen.m"
            ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__V_139_139 == (MR_Integer) 0);
#line 545 "proc_gen.m"
          }
#line 545 "proc_gen.m"
      }
#line 557 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 555 "proc_gen.m"
      {
#line 555 "proc_gen.m"
        {
#line 555 "proc_gen.m"
          ll_backend__proc_gen__bytecode_stub_4_p_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredId_12, ll_backend__proc_gen__ProcId_14, &ll_backend__proc_gen__ProcInstructions_105);
        }
#line 556 "proc_gen.m"
        {
#line 556 "proc_gen.m"
          ll_backend__proc_gen__ProcLabelCounter_106 = mercury__counter__init_1_f_0((MR_Integer) 0);
        }
#line 555 "proc_gen.m"
      }
#line 557 "proc_gen.m"
    else
#line 558 "proc_gen.m"
      {
#line 558 "proc_gen.m"
        ll_backend__proc_gen__ProcInstructions_105 = ll_backend__proc_gen__Instructions_68;
#line 559 "proc_gen.m"
        ll_backend__proc_gen__ProcLabelCounter_106 = ll_backend__proc_gen__LabelCounter_102;
#line 558 "proc_gen.m"
      }
#line 561 "proc_gen.m"
    {
#line 561 "proc_gen.m"
      ll_backend__code_info__get_used_env_vars_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__UsedEnvVars_107);
    }
#line 562 "proc_gen.m"
    {
#line 562 "proc_gen.m"
      ll_backend__proc_gen__V_141_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 562 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_141_141, 0) = ((MR_Box) (ll_backend__proc_gen__PredId_12));
#line 562 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_141_141, 1) = ((MR_Box) (ll_backend__proc_gen__ProcId_14));
#line 562 "proc_gen.m"
    }
#line 562 "proc_gen.m"
    {
#line 562 "proc_gen.m"
      MR_Word base;
#line 562 "proc_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 562 "proc_gen.m"
      *ll_backend__proc_gen__CProc_17 = base;
#line 562 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__proc_gen__Name_100));
#line 562 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__proc_gen__Arity_101));
#line 562 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__proc_gen__V_141_141));
#line 562 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__proc_gen__CodeModel_28));
#line 562 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__proc_gen__ProcInstructions_105));
#line 562 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__proc_gen__ProcLabel_98));
#line 562 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__proc_gen__ProcLabelCounter_106));
#line 562 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__proc_gen__MayAlterRtti_103));
#line 562 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__proc_gen__UsedEnvVars_107));
#line 562 "proc_gen.m"
    }
#line 324 "proc_gen.m"
  }
#line 54 "proc_gen.m"
}

#line 204 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_module_code_6_p_0_2(
#line 204 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 204 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 204 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_2)
#line 204 "proc_gen.m"
{
#line 204 "proc_gen.m"
  {
#line 204 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;
#line 204 "proc_gen.m"
    MR_Word ll_backend__proc_gen__conv4_HeadVar__3_3;

#line 204 "proc_gen.m"
    {
#line 204 "proc_gen.m"
      ll_backend__global_data__remap_references_to_global_data_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__proc_gen__wrapper_arg_1), &ll_backend__proc_gen__conv4_HeadVar__3_3);
    }
#line 204 "proc_gen.m"
    *ll_backend__proc_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__proc_gen__conv4_HeadVar__3_3));
#line 204 "proc_gen.m"
  }
#line 204 "proc_gen.m"
}

#line 191 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_module_code_6_p_0_1(
#line 191 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 191 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 191 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_2,
#line 191 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_3,
#line 191 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_4)
#line 191 "proc_gen.m"
{
#line 191 "proc_gen.m"
  {
#line 191 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;
#line 191 "proc_gen.m"
    MR_Word ll_backend__proc_gen__conv1_CProcs_10;
#line 191 "proc_gen.m"
    MR_Word ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_16;

#line 191 "proc_gen.m"
    {
#line 191 "proc_gen.m"
      ll_backend__proc_gen__generate_pred_code_par_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__proc_gen__wrapper_arg_1), &ll_backend__proc_gen__conv1_CProcs_10, ((MR_Word) ll_backend__proc_gen__wrapper_arg_3), &ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_16);
    }
#line 191 "proc_gen.m"
    *ll_backend__proc_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__proc_gen__conv1_CProcs_10));
#line 191 "proc_gen.m"
    *ll_backend__proc_gen__wrapper_arg_4 = ((MR_Box) (ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_16));
#line 191 "proc_gen.m"
  }
#line 191 "proc_gen.m"
}

#line 47 "proc_gen.m"
void MR_CALL 
ll_backend__proc_gen__generate_module_code_6_p_0(
#line 47 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_7,
#line 47 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_17,
#line 47 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_18,
#line 47 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__Procedures_9)
#line 47 "proc_gen.m"
{
#line 123 "proc_gen.m"
  {
#line 123 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 123 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredIds_11;
#line 123 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Globals_12;
#line 123 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ParallelCodeGen_13;
#line 123 "proc_gen.m"
    MR_Word ll_backend__proc_gen__VeryVerbose_14;
#line 123 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Statistics_15;
#line 123 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ConstStructMap_16;
#line 123 "proc_gen.m"
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_27_27;

#line 125 "proc_gen.m"
    {
#line 125 "proc_gen.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ll_backend__proc_gen__ModuleInfo_7, &ll_backend__proc_gen__PredIds_11);
    }
#line 127 "proc_gen.m"
    {
#line 127 "proc_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__proc_gen__ModuleInfo_7, &ll_backend__proc_gen__Globals_12);
    }
#line 128 "proc_gen.m"
    {
#line 128 "proc_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__proc_gen__Globals_12, (MR_Integer) 306, &ll_backend__proc_gen__ParallelCodeGen_13);
    }
#line 129 "proc_gen.m"
    {
#line 129 "proc_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__proc_gen__Globals_12, (MR_Integer) 46, &ll_backend__proc_gen__VeryVerbose_14);
    }
#line 130 "proc_gen.m"
    {
#line 130 "proc_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__proc_gen__Globals_12, (MR_Integer) 56, &ll_backend__proc_gen__Statistics_15);
    }
#line 137 "proc_gen.m"
#line 137 "proc_gen.m"
    switch (ll_backend__proc_gen__VeryVerbose_14) {
#line 137 "proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 137 "proc_gen.m"
      case (MR_Integer) 0:
#line 139 "proc_gen.m"
        {
#line 139 "proc_gen.m"
          ll_backend__unify_gen__generate_const_structs_4_p_0(ll_backend__proc_gen__ModuleInfo_7, &ll_backend__proc_gen__ConstStructMap_16, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_17, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_27_27);
        }
#line 137 "proc_gen.m"
        break;
#line 137 "proc_gen.m"
      case (MR_Integer) 1:
#line 133 "proc_gen.m"
        {
#line 134 "proc_gen.m"
          {
#line 134 "proc_gen.m"
            mercury__io__write_string_3_p_0((MR_String) "% Generating constant structures\n");
          }
#line 135 "proc_gen.m"
          {
#line 135 "proc_gen.m"
            ll_backend__unify_gen__generate_const_structs_4_p_0(ll_backend__proc_gen__ModuleInfo_7, &ll_backend__proc_gen__ConstStructMap_16, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_17, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_27_27);
          }
#line 136 "proc_gen.m"
          {
#line 136 "proc_gen.m"
            libs__file_util__maybe_report_stats_3_p_0(ll_backend__proc_gen__Statistics_15);
          }
#line 133 "proc_gen.m"
        }
#line 137 "proc_gen.m"
        break;
#line 137 "proc_gen.m"
    }
#line 143 "proc_gen.m"
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__ParallelCodeGen_13 == (MR_Integer) 1);
#line 143 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 143 "proc_gen.m"
      {
#line 145 "proc_gen.m"
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__VeryVerbose_14 == (MR_Integer) 0);
#line 143 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 146 "proc_gen.m"
          ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__Statistics_15 == (MR_Integer) 0);
#line 143 "proc_gen.m"
      }
#line 150 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 148 "proc_gen.m"
      {
#line 148 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TypeCtorInfo_35_60 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 148 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TypeInfo_36_61;
#line 148 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TypeInfo_41_66;
#line 148 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TypeCtorInfo_42_67;
#line 148 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TypeCtorInfo_43_68;
#line 148 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ListsOfPredIds_39;
#line 148 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ListsOfPredIdsA_40;
#line 148 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ListsOfPredIdsB_41;
#line 148 "proc_gen.m"
        MR_Word ll_backend__proc_gen__PredIdsA_43;
#line 148 "proc_gen.m"
        MR_Word ll_backend__proc_gen__PredProceduresA_44;
#line 148 "proc_gen.m"
        MR_Word ll_backend__proc_gen__GlobalDataA_45;
#line 148 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ProceduresA_46;
#line 148 "proc_gen.m"
        MR_Word ll_backend__proc_gen__PredIdsB_47;
#line 148 "proc_gen.m"
        MR_Word ll_backend__proc_gen__GlobalData1_48;
#line 148 "proc_gen.m"
        MR_Word ll_backend__proc_gen__PredProceduresB0_49;
#line 148 "proc_gen.m"
        MR_Word ll_backend__proc_gen__GlobalDataB_50;
#line 148 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ProceduresB0_51;
#line 148 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Remap_52;
#line 148 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ProceduresB_53;
#line 148 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_55_55;
#line 148 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_59_59;
#line 148 "proc_gen.m"
        MR_Word ll_backend__proc_gen__As_76;
#line 148 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Bs_77;
#line 191 "proc_gen.m"
        MR_Box ll_backend__proc_gen__conv2_GlobalDataA_45;
#line 198 "proc_gen.m"
        MR_Box ll_backend__proc_gen__conv3_GlobalDataB_50;

#line 186 "proc_gen.m"
        {
#line 186 "proc_gen.m"
          mercury__list__chunk_3_p_0(ll_backend__proc_gen__TypeCtorInfo_35_60, ll_backend__proc_gen__PredIds_11, (MR_Integer) 50, &ll_backend__proc_gen__ListsOfPredIds_39);
        }
#line 9052 "ll_backend.proc_gen.c"
        ll_backend__proc_gen__TypeInfo_36_61 = (MR_Word) &ll_backend__proc_gen_scalar_common_1[2];
#line 222 "proc_gen.m"
        {
#line 222 "proc_gen.m"
          ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_108_101_97_118_101_95_50_95_95_91_49_93_95_48_5_p_0(ll_backend__proc_gen__ListsOfPredIds_39, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__proc_gen__As_76, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__proc_gen__Bs_77);
        }
#line 221 "proc_gen.m"
        {
#line 221 "proc_gen.m"
          ll_backend__proc_gen__ListsOfPredIdsA_40 = mercury__list__reverse_1_f_0(ll_backend__proc_gen__TypeInfo_36_61, ll_backend__proc_gen__As_76);
        }
#line 221 "proc_gen.m"
        {
#line 221 "proc_gen.m"
          ll_backend__proc_gen__ListsOfPredIdsB_41 = mercury__list__reverse_1_f_0(ll_backend__proc_gen__TypeInfo_36_61, ll_backend__proc_gen__Bs_77);
        }
#line 190 "proc_gen.m"
        {
#line 190 "proc_gen.m"
          mercury__list__condense_2_p_0(ll_backend__proc_gen__TypeCtorInfo_35_60, ll_backend__proc_gen__ListsOfPredIdsA_40, &ll_backend__proc_gen__PredIdsA_43);
        }
#line 191 "proc_gen.m"
        {
#line 191 "proc_gen.m"
          ll_backend__proc_gen__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 191 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_55_55, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_3[0]));
#line 191 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_55_55, 1) = ((MR_Box) (ll_backend__proc_gen__generate_module_code_6_p_0_1));
#line 191 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 191 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_55_55, 3) = ((MR_Box) (ll_backend__proc_gen__ModuleInfo_7));
#line 191 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_55_55, 4) = ((MR_Box) (ll_backend__proc_gen__ConstStructMap_16));
#line 191 "proc_gen.m"
        }
#line 9090 "ll_backend.proc_gen.c"
        ll_backend__proc_gen__TypeInfo_41_66 = (MR_Word) &ll_backend__proc_gen_scalar_common_1[1];
#line 9092 "ll_backend.proc_gen.c"
        ll_backend__proc_gen__TypeCtorInfo_42_67 = (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0;
#line 191 "proc_gen.m"
        {
#line 191 "proc_gen.m"
          mercury__list__map_foldl_5_p_0(ll_backend__proc_gen__TypeCtorInfo_35_60, ll_backend__proc_gen__TypeInfo_41_66, ll_backend__proc_gen__TypeCtorInfo_42_67, ll_backend__proc_gen__V_55_55, ll_backend__proc_gen__PredIdsA_43, &ll_backend__proc_gen__PredProceduresA_44, ((MR_Box) (ll_backend__proc_gen__STATE_VARIABLE_GlobalData_27_27)), &ll_backend__proc_gen__conv2_GlobalDataA_45);
        }
#line 191 "proc_gen.m"
        ll_backend__proc_gen__GlobalDataA_45 = ((MR_Word) ll_backend__proc_gen__conv2_GlobalDataA_45);
#line 9101 "ll_backend.proc_gen.c"
        ll_backend__proc_gen__TypeCtorInfo_43_68 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0;
#line 193 "proc_gen.m"
        {
#line 193 "proc_gen.m"
          mercury__list__condense_2_p_0(ll_backend__proc_gen__TypeCtorInfo_43_68, ll_backend__proc_gen__PredProceduresA_44, &ll_backend__proc_gen__ProceduresA_46);
        }
#line 196 "proc_gen.m"
        {
#line 196 "proc_gen.m"
          mercury__list__condense_2_p_0(ll_backend__proc_gen__TypeCtorInfo_35_60, ll_backend__proc_gen__ListsOfPredIdsB_41, &ll_backend__proc_gen__PredIdsB_47);
        }
#line 197 "proc_gen.m"
        {
#line 197 "proc_gen.m"
          ll_backend__global_data__bump_type_num_counter_3_p_0((MR_Integer) 10000, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_27_27, &ll_backend__proc_gen__GlobalData1_48);
        }
#line 198 "proc_gen.m"
        {
#line 198 "proc_gen.m"
          mercury__list__map_foldl_5_p_0(ll_backend__proc_gen__TypeCtorInfo_35_60, ll_backend__proc_gen__TypeInfo_41_66, ll_backend__proc_gen__TypeCtorInfo_42_67, ll_backend__proc_gen__V_55_55, ll_backend__proc_gen__PredIdsB_47, &ll_backend__proc_gen__PredProceduresB0_49, ((MR_Box) (ll_backend__proc_gen__GlobalData1_48)), &ll_backend__proc_gen__conv3_GlobalDataB_50);
        }
#line 198 "proc_gen.m"
        ll_backend__proc_gen__GlobalDataB_50 = ((MR_Word) ll_backend__proc_gen__conv3_GlobalDataB_50);
#line 200 "proc_gen.m"
        {
#line 200 "proc_gen.m"
          mercury__list__condense_2_p_0(ll_backend__proc_gen__TypeCtorInfo_43_68, ll_backend__proc_gen__PredProceduresB0_49, &ll_backend__proc_gen__ProceduresB0_51);
        }
#line 202 "proc_gen.m"
        {
#line 202 "proc_gen.m"
          ll_backend__global_data__merge_global_datas_4_p_0(ll_backend__proc_gen__GlobalDataA_45, ll_backend__proc_gen__GlobalDataB_50, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_18, &ll_backend__proc_gen__Remap_52);
        }
#line 204 "proc_gen.m"
        {
#line 204 "proc_gen.m"
          ll_backend__proc_gen__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 204 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_59_59, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_4[0]));
#line 204 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_59_59, 1) = ((MR_Box) (ll_backend__proc_gen__generate_module_code_6_p_0_2));
#line 204 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 204 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_59_59, 3) = ((MR_Box) (ll_backend__proc_gen__Remap_52));
#line 204 "proc_gen.m"
        }
#line 204 "proc_gen.m"
        {
#line 204 "proc_gen.m"
          mercury__list__map_3_p_0(ll_backend__proc_gen__TypeCtorInfo_43_68, ll_backend__proc_gen__TypeCtorInfo_43_68, ll_backend__proc_gen__V_59_59, ll_backend__proc_gen__ProceduresB0_51, &ll_backend__proc_gen__ProceduresB_53);
        }
#line 207 "proc_gen.m"
        {
#line 207 "proc_gen.m"
          *ll_backend__proc_gen__Procedures_9 = mercury__list__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_43_68, ll_backend__proc_gen__ProceduresA_46, ll_backend__proc_gen__ProceduresB_53);
        }
#line 148 "proc_gen.m"
      }
#line 150 "proc_gen.m"
    else
#line 151 "proc_gen.m"
      {
#line 151 "proc_gen.m"
        ll_backend__proc_gen__generate_code_sequential_10_p_0(ll_backend__proc_gen__ModuleInfo_7, ll_backend__proc_gen__VeryVerbose_14, ll_backend__proc_gen__Statistics_15, ll_backend__proc_gen__ConstStructMap_16, ll_backend__proc_gen__PredIds_11, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_27_27, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_18, ll_backend__proc_gen__Procedures_9);
#line 151 "proc_gen.m"
        return;
      }
#line 123 "proc_gen.m"
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

	MR_register_type_ctor_info(&ll_backend__proc_gen__ll_backend__proc_gen__type_ctor_info_frame_info_0);
	MR_register_type_ctor_info(&ll_backend__proc_gen__ll_backend__proc_gen__type_ctor_info_type_giving_arg_0);
}

void mercury__ll_backend__proc_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.proc_gen. */
