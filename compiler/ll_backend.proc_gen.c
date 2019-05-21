/*
** Automatically generated from `proc_gen.m'
** by the Mercury compiler,
** version rotd-2017-07-23
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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_path.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_c_procedure_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_special_proc_return_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__proc_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__maybe__pti_maybe_1__plain_pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__proc_gen__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__proc_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo ll_backend__proc_gen__ll_backend__proc_gen__field_types_proc_frame_slots_0_0[2];

static const MR_DuFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__du_functor_desc_proc_frame_slots_0_0;

static const MR_DuFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__du_stag_ordered_proc_frame_slots_0_0[1];

static const MR_DuPtagLayout ll_backend__proc_gen__ll_backend__proc_gen__du_ptag_ordered_proc_frame_slots_0[1];

static const MR_DuFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__du_name_ordered_proc_frame_slots_0[1];

static const MR_Integer ll_backend__proc_gen__ll_backend__proc_gen__functor_number_map_proc_frame_slots_0[1];

static const MR_EnumFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_0;

static const MR_EnumFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_1;

static const MR_EnumFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__enum_value_ordered_type_giving_arg_0[2];

static const MR_EnumFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__enum_name_ordered_type_giving_arg_0[2];

static const MR_Integer ll_backend__proc_gen__ll_backend__proc_gen__functor_number_map_type_giving_arg_0[2];

static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__add_tabling_info_struct__1404__1_2_p_0(
  MR_Integer ll_backend__proc_gen__NumPTIs_19,
  MR_Integer ll_backend__proc_gen__NumArgs_23);

static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1189__1_2_p_0(
  MR_Word ll_backend__proc_gen__MaybeSpecialReturn_51,
  MR_Word ll_backend__proc_gen__HeadVar__2_176);

static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1180__1_2_p_0(
  MR_Word ll_backend__proc_gen__MaybeSpecialReturn_51,
  MR_Word ll_backend__proc_gen__HeadVar__2_204);

static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_category_code__813__1_2_p_0(
  MR_Word ll_backend__proc_gen__HeadVar__1_77,
  MR_Word ll_backend__proc_gen__MaybeTailRecInfo_250);

static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__439__1_2_p_0(
  MR_Word ll_backend__proc_gen__NeedsMaxfrSlot_62,
  MR_Word ll_backend__proc_gen__HeadVar__2_126);

static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__356__1_2_p_0(
  MR_Word ll_backend__proc_gen__Parallel_23,
  MR_Word ll_backend__proc_gen__HeadVar__2_116);

static void MR_CALL 
ll_backend__proc_gen____Compare____type_giving_arg_0_0(
  MR_Word * ll_backend__proc_gen__HeadVar__1_1,
  MR_Word ll_backend__proc_gen__HeadVar__2_2,
  MR_Word ll_backend__proc_gen__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____type_giving_arg_0_0(
  MR_Word ll_backend__proc_gen__HeadVar__2_1,
  MR_Word ll_backend__proc_gen__HeadVar__2_2);

static void MR_CALL 
ll_backend__proc_gen____Compare____proc_frame_slots_0_0(
  MR_Word * ll_backend__proc_gen__HeadVar__1_1,
  MR_Word ll_backend__proc_gen__HeadVar__2_2,
  MR_Word ll_backend__proc_gen__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____proc_frame_slots_0_0(
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
  MR_Word ll_backend__proc_gen__HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__proc_gen__add_tabling_info_struct_3_p_0_1(
  MR_Box ll_backend__proc_gen__closure_arg);

static void MR_CALL 
ll_backend__proc_gen__add_tabling_info_struct_3_p_0(
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_28,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_29);

static MR_Word MR_CALL 
ll_backend__proc_gen__project_layout_locn_lval_1_f_0(
  MR_Word ll_backend__proc_gen__HeadVar__1_1);

static void MR_CALL 
ll_backend__proc_gen__add_type_info_lvals_4_p_0(
  MR_Word ll_backend__proc_gen___TVar_5,
  MR_Word ll_backend__proc_gen__TypeInfoLocnSets_6,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_0_9,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_10);

static MR_Box MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_105_110_102_111_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box ll_backend__proc_gen__closure_arg,
  MR_Box ll_backend__proc_gen__wrapper_arg_1);

static void MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_105_110_102_111_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word ll_backend__proc_gen__TypeInfoLocnSets_6,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_0_9,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_10);

static void MR_CALL 
ll_backend__proc_gen__generate_pred_code_par_7_p_0(
  MR_Word ll_backend__proc_gen__ModuleInfo_8,
  MR_Word ll_backend__proc_gen__ConstStructMap_9,
  MR_Word ll_backend__proc_gen__PredId_10,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_16,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_17,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_18,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_19);

static void MR_CALL 
ll_backend__proc_gen__generate_pred_code_seq_9_p_0(
  MR_Word ll_backend__proc_gen__ModuleInfo_10,
  MR_Word ll_backend__proc_gen__VeryVerbose_11,
  MR_Word ll_backend__proc_gen__Statistics_12,
  MR_Word ll_backend__proc_gen__ConstStructMap_13,
  MR_Word ll_backend__proc_gen__PredId_14,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_23,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_24,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_25,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_26);

static void MR_CALL 
ll_backend__proc_gen__generate_proc_list_code_9_p_0(
  MR_Word ll_backend__proc_gen__ModuleInfo_1,
  MR_Word ll_backend__proc_gen__ConstStructMap_2,
  MR_Word ll_backend__proc_gen__PredId_3,
  MR_Word ll_backend__proc_gen__PredInfo_4,
  MR_Word ll_backend__proc_gen__HeadVar__5_5,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_6,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_7,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_8,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_9);

static void MR_CALL 
ll_backend__proc_gen__add_all_tabling_info_structs_3_p_0_1(
  MR_Box ll_backend__proc_gen__closure_arg,
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
  MR_Box * ll_backend__proc_gen__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__proc_gen__generate_proc_code_9_p_0_2(
  MR_Box ll_backend__proc_gen__closure_arg);

static MR_bool MR_CALL 
ll_backend__proc_gen__generate_proc_code_9_p_0_1(
  MR_Box ll_backend__proc_gen__closure_arg);

static void MR_CALL 
ll_backend__proc_gen__bytecode_stub_4_p_0(
  MR_Word ll_backend__proc_gen__ModuleInfo_5,
  MR_Word ll_backend__proc_gen__PredId_6,
  MR_Integer ll_backend__proc_gen__ProcId_7,
  MR_Word * ll_backend__proc_gen__BytecodeInstructions_8);

static void MR_CALL 
ll_backend__proc_gen__add_saved_succip_3_p_0(
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
  MR_Integer ll_backend__proc_gen__HeadVar__2_2,
  MR_Word * ll_backend__proc_gen__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__proc_gen__generate_category_code_11_p_0_1(
  MR_Box ll_backend__proc_gen__closure_arg);

static void MR_CALL 
ll_backend__proc_gen__generate_category_code_11_p_0(
  MR_Word ll_backend__proc_gen__CodeModel_12,
  MR_Word ll_backend__proc_gen__ProcContext_13,
  MR_Word ll_backend__proc_gen__Goal_14,
  MR_Word ll_backend__proc_gen__ResumePoint_15,
  MR_Word ll_backend__proc_gen__TraceSlotInfo_16,
  MR_Word * ll_backend__proc_gen__Code_17,
  MR_Word * ll_backend__proc_gen__MaybeTraceCallLabel_18,
  MR_Word * ll_backend__proc_gen__ProcFrameSlots_19,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_0_61,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CI_62,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_0_63);

static MR_bool MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0_3(
  MR_Box ll_backend__proc_gen__closure_arg);

static MR_bool MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0_2(
  MR_Box ll_backend__proc_gen__closure_arg);

static void MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0_1(
  MR_Box ll_backend__proc_gen__closure_arg,
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
  MR_Box ll_backend__proc_gen__wrapper_arg_3,
  MR_Box * ll_backend__proc_gen__wrapper_arg_4);

static void MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0(
  MR_Word ll_backend__proc_gen__CodeModel_10,
  MR_Word ll_backend__proc_gen__ProcFrameSlots_11,
  MR_Word ll_backend__proc_gen__TraceSlotInfo_12,
  MR_Word ll_backend__proc_gen__ProcContext_13,
  MR_Word * ll_backend__proc_gen__RestoreDeallocCode_14,
  MR_Word * ll_backend__proc_gen__ExitCode_15,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_0_64,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CI_65,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_0_66);

static void MR_CALL 
ll_backend__proc_gen__generate_entry_6_p_0(
  MR_Word ll_backend__proc_gen__CI_7,
  MR_Word ll_backend__proc_gen__CodeModel_8,
  MR_Word ll_backend__proc_gen__Goal_9,
  MR_Word ll_backend__proc_gen__OutsideResumePoint_10,
  MR_Word * ll_backend__proc_gen__ProcFrameSlots_11,
  MR_Word * ll_backend__proc_gen__EntryCode_12);

static void MR_CALL 
ll_backend__proc_gen__generate_call_event_8_p_0(
  MR_Word ll_backend__proc_gen__TraceInfo_9,
  MR_Word ll_backend__proc_gen__ProcContext_10,
  MR_Word * ll_backend__proc_gen__MaybeTraceCallLabel_11,
  MR_Word * ll_backend__proc_gen__TraceCallCode_12,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_0_19,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CI_20,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_0_21,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CLD_22);

static MR_Word MR_CALL 
ll_backend__proc_gen__maybe_generate_deep_prof_info_2_f_0(
  MR_Word ll_backend__proc_gen__ProcInfo_4,
  MR_Word ll_backend__proc_gen__HLDSDeepInfo_5);

static void MR_CALL 
ll_backend__proc_gen__maybe_set_trace_level_3_p_0(
  MR_Word ll_backend__proc_gen__PredInfo_4,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_16);

static void MR_CALL 
ll_backend__proc_gen__generate_module_code_4_p_0_2(
  MR_Box ll_backend__proc_gen__closure_arg,
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
  MR_Box * ll_backend__proc_gen__wrapper_arg_2);

static void MR_CALL 
ll_backend__proc_gen__generate_module_code_4_p_0_1(
  MR_Box ll_backend__proc_gen__closure_arg,
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
  MR_Box * ll_backend__proc_gen__wrapper_arg_3,
  MR_Box ll_backend__proc_gen__wrapper_arg_4,
  MR_Box * ll_backend__proc_gen__wrapper_arg_5);

static void MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_108_101_97_118_101_95_50_95_95_91_49_93_95_48_5_p_0(
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
  MR_Word ll_backend__proc_gen__HeadVar__2_2,
  MR_Word * ll_backend__proc_gen__HeadVar__3_3,
  MR_Word ll_backend__proc_gen__HeadVar__4_4,
  MR_Word * ll_backend__proc_gen__HeadVar__5_5);

static void MR_CALL 
ll_backend__proc_gen__generate_module_code_seq_8_p_0_1(
  MR_Box ll_backend__proc_gen__closure_arg,
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
  MR_Box * ll_backend__proc_gen__wrapper_arg_3,
  MR_Box ll_backend__proc_gen__wrapper_arg_4,
  MR_Box * ll_backend__proc_gen__wrapper_arg_5);

static void MR_CALL 
ll_backend__proc_gen__generate_module_code_seq_8_p_0(
  MR_Word ll_backend__proc_gen__ModuleInfo_9,
  MR_Word ll_backend__proc_gen__VeryVerbose_10,
  MR_Word ll_backend__proc_gen__Statistics_11,
  MR_Word ll_backend__proc_gen__ConstStructMap_12,
  MR_Word ll_backend__proc_gen__PredIds_13,
  MR_Word * ll_backend__proc_gen__CProcsCord_14,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_16,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_17);

static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____proc_frame_slots_0_0_10001(
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
  MR_Box ll_backend__proc_gen__wrapper_arg_2);

static void MR_CALL 
ll_backend__proc_gen____Compare____proc_frame_slots_0_0_10001(
  MR_Box * ll_backend__proc_gen__wrapper_arg_1,
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
  MR_Box ll_backend__proc_gen__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____type_giving_arg_0_0_10001(
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
  MR_Box ll_backend__proc_gen__wrapper_arg_2);

static void MR_CALL 
ll_backend__proc_gen____Compare____type_giving_arg_0_0_10001(
  MR_Box * ll_backend__proc_gen__wrapper_arg_1,
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
  MR_Box ll_backend__proc_gen__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_1[40][2];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_2[7][3];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_3[1][12];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_4[1][10];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_5[2][6];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_6[5][1];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_7[1][7];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_8[6][5];




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
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_6[0]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_6[2]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_6[3]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_6[4]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) ((MR_String) "prune retry ticket"))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) ((MR_String) "discard retry ticket"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__proc_gen_scalar_common_1[33]))),
    ((MR_Box) ((MR_String) "fail after fail trace port"))
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
    ((MR_Box) (&ll_backend__proc_gen_scalar_common_7[0])),
    ((MR_Box) (ll_backend__proc_gen__generate_exit_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__proc_gen_scalar_common_5[1])),
    ((MR_Box) (ll_backend__proc_gen__add_all_tabling_info_structs_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__proc_gen_scalar_common_8[4])),
    ((MR_Box) (ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_105_110_102_111_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_3[1][12] = {
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

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_4[1][10] = {
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

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_5[2][6] = {
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

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_6[5][1] = {
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

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_7[1][7] = {
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

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_8[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__proc_gen__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_special_proc_return_0)),
    ((MR_Box) (&ll_backend__proc_gen__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_special_proc_return_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__proc_gen__maybe__pti_maybe_1__plain_pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__proc_gen__maybe__pti_maybe_1__plain_pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_needs_maxfr_slot_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_needs_maxfr_slot_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_c_procedure_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_special_proc_return_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_special_proc_return_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__proc_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__maybe__pti_maybe_1__plain_pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__proc_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__proc_gen__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__proc_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo ll_backend__proc_gen__ll_backend__proc_gen__field_types_proc_frame_slots_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__proc_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__du_functor_desc_proc_frame_slots_0_0 = {
  (MR_String) "proc_frame_slots",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__proc_gen__ll_backend__proc_gen__field_types_proc_frame_slots_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__du_stag_ordered_proc_frame_slots_0_0[1] = {
  &ll_backend__proc_gen__ll_backend__proc_gen__du_functor_desc_proc_frame_slots_0_0
};

static const MR_DuPtagLayout ll_backend__proc_gen__ll_backend__proc_gen__du_ptag_ordered_proc_frame_slots_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__proc_gen__ll_backend__proc_gen__du_stag_ordered_proc_frame_slots_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__du_name_ordered_proc_frame_slots_0[1] = {
  &ll_backend__proc_gen__ll_backend__proc_gen__du_functor_desc_proc_frame_slots_0_0
};

static const MR_Integer ll_backend__proc_gen__ll_backend__proc_gen__functor_number_map_proc_frame_slots_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__proc_gen__ll_backend__proc_gen__type_ctor_info_proc_frame_slots_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

static const MR_EnumFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_0 = {
  (MR_String) "last_arg",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_1 = {
  (MR_String) "last_but_one_arg",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__enum_value_ordered_type_giving_arg_0[2] = {
  &ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_0,
  &ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__enum_name_ordered_type_giving_arg_0[2] = {
  &ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_0,
  &ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_1
};

static const MR_Integer ll_backend__proc_gen__ll_backend__proc_gen__functor_number_map_type_giving_arg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__proc_gen__ll_backend__proc_gen__type_ctor_info_type_giving_arg_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__add_tabling_info_struct__1404__1_2_p_0(
  MR_Integer ll_backend__proc_gen__NumPTIs_19,
  MR_Integer ll_backend__proc_gen__NumArgs_23)
{
  {
    MR_bool ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__NumArgs_23 == ll_backend__proc_gen__NumPTIs_19);

    return ll_backend__proc_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1189__1_2_p_0(
  MR_Word ll_backend__proc_gen__MaybeSpecialReturn_51,
  MR_Word ll_backend__proc_gen__HeadVar__2_176)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;

    {
      ll_backend__proc_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[7], ((MR_Box) (ll_backend__proc_gen__MaybeSpecialReturn_51)), ((MR_Box) (ll_backend__proc_gen__HeadVar__2_176)));
    }
    return ll_backend__proc_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1180__1_2_p_0(
  MR_Word ll_backend__proc_gen__MaybeSpecialReturn_51,
  MR_Word ll_backend__proc_gen__HeadVar__2_204)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;

    {
      ll_backend__proc_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[7], ((MR_Box) (ll_backend__proc_gen__MaybeSpecialReturn_51)), ((MR_Box) (ll_backend__proc_gen__HeadVar__2_204)));
    }
    return ll_backend__proc_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_category_code__813__1_2_p_0(
  MR_Word ll_backend__proc_gen__HeadVar__1_77,
  MR_Word ll_backend__proc_gen__MaybeTailRecInfo_250)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;

    {
      ll_backend__proc_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[3], ((MR_Box) (ll_backend__proc_gen__MaybeTailRecInfo_250)), ((MR_Box) (ll_backend__proc_gen__HeadVar__1_77)));
    }
    return ll_backend__proc_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__439__1_2_p_0(
  MR_Word ll_backend__proc_gen__NeedsMaxfrSlot_62,
  MR_Word ll_backend__proc_gen__HeadVar__2_126)
{
  {
    MR_bool ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__NeedsMaxfrSlot_62 == ll_backend__proc_gen__HeadVar__2_126);

    return ll_backend__proc_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__356__1_2_p_0(
  MR_Word ll_backend__proc_gen__Parallel_23,
  MR_Word ll_backend__proc_gen__HeadVar__2_116)
{
  {
    MR_bool ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__Parallel_23 == ll_backend__proc_gen__HeadVar__2_116);

    return ll_backend__proc_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__proc_gen____Compare____type_giving_arg_0_0(
  MR_Word * ll_backend__proc_gen__HeadVar__1_1,
  MR_Word ll_backend__proc_gen__HeadVar__2_2,
  MR_Word ll_backend__proc_gen__HeadVar__3_3)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;
    MR_Integer ll_backend__proc_gen__Cast_HeadVar1_4 = (MR_Integer) ll_backend__proc_gen__HeadVar__2_2;
    MR_Integer ll_backend__proc_gen__Cast_HeadVar2_5 = (MR_Integer) ll_backend__proc_gen__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__proc_gen__HeadVar__1_1, ll_backend__proc_gen__Cast_HeadVar1_4, ll_backend__proc_gen__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____type_giving_arg_0_0(
  MR_Word ll_backend__proc_gen__HeadVar__2_1,
  MR_Word ll_backend__proc_gen__HeadVar__2_2)
{
  {
    MR_bool ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__HeadVar__2_1 == ll_backend__proc_gen__HeadVar__2_2);

    return ll_backend__proc_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__proc_gen____Compare____proc_frame_slots_0_0(
  MR_Word * ll_backend__proc_gen__HeadVar__1_1,
  MR_Word ll_backend__proc_gen__HeadVar__2_2,
  MR_Word ll_backend__proc_gen__HeadVar__3_3)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;
    MR_Integer ll_backend__proc_gen__CastX_9 = (MR_Integer) ll_backend__proc_gen__HeadVar__2_2;
    MR_Integer ll_backend__proc_gen__CastY_10 = (MR_Integer) ll_backend__proc_gen__HeadVar__3_3;

    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CastX_9 == ll_backend__proc_gen__CastY_10);
    if (ll_backend__proc_gen__succeeded)
      *ll_backend__proc_gen__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer ll_backend__proc_gen__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer ll_backend__proc_gen__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__proc_gen__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__proc_gen__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__proc_gen__Var_8;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__proc_gen__Var_8, ll_backend__proc_gen__ArgX1_4, ll_backend__proc_gen__ArgY1_5);
        }
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__Var_8 == (MR_Integer) 0);
        ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
        if (ll_backend__proc_gen__succeeded)
          *ll_backend__proc_gen__HeadVar__1_1 = ll_backend__proc_gen__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[8], ll_backend__proc_gen__HeadVar__1_1, ((MR_Box) (ll_backend__proc_gen__ArgX2_6)), ((MR_Box) (ll_backend__proc_gen__ArgY2_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____proc_frame_slots_0_0(
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
  MR_Word ll_backend__proc_gen__HeadVar__2_2)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;
    MR_Integer ll_backend__proc_gen__CastX_7 = (MR_Integer) ll_backend__proc_gen__HeadVar__1_1;
    MR_Integer ll_backend__proc_gen__CastY_8 = (MR_Integer) ll_backend__proc_gen__HeadVar__2_2;

    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CastX_7 == ll_backend__proc_gen__CastY_8);
    if (ll_backend__proc_gen__succeeded)
      ll_backend__proc_gen__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__proc_gen__TypeInfo_9_9;
        MR_Integer ll_backend__proc_gen__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer ll_backend__proc_gen__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__proc_gen__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__proc_gen__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__2_2, (MR_Integer) 1)));

        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__ArgX1_3 == ll_backend__proc_gen__ArgY1_4);
        if (ll_backend__proc_gen__succeeded)
          {
            ll_backend__proc_gen__TypeInfo_9_9 = (MR_Word) &ll_backend__proc_gen_scalar_common_1[8];
            {
              ll_backend__proc_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__proc_gen__TypeInfo_9_9, ((MR_Box) (ll_backend__proc_gen__ArgX2_5)), ((MR_Box) (ll_backend__proc_gen__ArgY2_6)));
            }
          }
      }
    return ll_backend__proc_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__proc_gen__add_tabling_info_struct_3_p_0_1(
  MR_Box ll_backend__proc_gen__closure_arg)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;

    {
      ll_backend__proc_gen__succeeded = ll_backend__proc_gen__IntroducedFrom__pred__add_tabling_info_struct__1404__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__proc_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__proc_gen__add_tabling_info_struct_3_p_0(
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_28,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_29)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;
    MR_Word ll_backend__proc_gen__PredProcId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ll_backend__proc_gen__TableStructInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ll_backend__proc_gen__ProcTableStructInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableStructInfo_5, (MR_Integer) 0)));
    MR_Word ll_backend__proc_gen__TableAttributes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableStructInfo_5, (MR_Integer) 1)));
    MR_Word ll_backend__proc_gen__RttiProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 0)));
    MR_Integer ll_backend__proc_gen__NumInputs_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 3)));
    MR_Integer ll_backend__proc_gen__NumOutputs_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 4)));
    MR_Word ll_backend__proc_gen__InputSteps_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 5)));
    MR_Word ll_backend__proc_gen__MaybeOutputSteps_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 6)));
    MR_Word ll_backend__proc_gen__ArgInfos_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 7)));
    MR_Word ll_backend__proc_gen__EvalMethod_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 8)));
    MR_Word ll_backend__proc_gen__StaticCellInfo0_18;
    MR_Integer ll_backend__proc_gen__NumPTIs_19;
    MR_Word ll_backend__proc_gen__PTIVectorRval_20;
    MR_Word ll_backend__proc_gen__TVarVectorRval_21;
    MR_Word ll_backend__proc_gen__StaticCellInfo_22;
    MR_Integer ll_backend__proc_gen__NumArgs_23;
    MR_Word ll_backend__proc_gen__MaybeSizeLimit_24;
    MR_Word ll_backend__proc_gen__Statistics_25;
    MR_Word ll_backend__proc_gen__ProcLabel_26;
    MR_Word ll_backend__proc_gen__Var_27;
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_30_30;
    MR_Word ll_backend__proc_gen__Var_31;
    MR_Word ll_backend__proc_gen___TVarSet_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 1)));
    MR_Word ll_backend__proc_gen___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 2)));
    MR_Word ll_backend__proc_gen__Var_36;
    MR_Word ll_backend__proc_gen__Var_38;

    {
      ll_backend__global_data__global_data_get_static_cell_info_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_28, &ll_backend__proc_gen__StaticCellInfo0_18);
    }
    {
      ll_backend__stack_layout__convert_table_arg_info_6_p_0(ll_backend__proc_gen__ArgInfos_16, &ll_backend__proc_gen__NumPTIs_19, &ll_backend__proc_gen__PTIVectorRval_20, &ll_backend__proc_gen__TVarVectorRval_21, ll_backend__proc_gen__StaticCellInfo0_18, &ll_backend__proc_gen__StaticCellInfo_22);
    }
    {
      ll_backend__global_data__global_data_set_static_cell_info_3_p_0(ll_backend__proc_gen__StaticCellInfo_22, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_28, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_30_30);
    }
    ll_backend__proc_gen__NumArgs_23 = (ll_backend__proc_gen__NumInputs_12 + ll_backend__proc_gen__NumOutputs_13);
    {
      ll_backend__proc_gen__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_31, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_8[5]));
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_31, 1) = ((MR_Box) (ll_backend__proc_gen__add_tabling_info_struct_3_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_31, 3) = ((MR_Box) (ll_backend__proc_gen__NumPTIs_19));
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_31, 4) = ((MR_Box) (ll_backend__proc_gen__NumArgs_23));
    }
    {
      mercury__require__expect_4_p_0(ll_backend__proc_gen__Var_31, (MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.add_tabling_info_struct\'/3", (MR_String) "args mismatch");
    }
    ll_backend__proc_gen__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableAttributes_8, (MR_Integer) 0)));
    ll_backend__proc_gen__MaybeSizeLimit_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableAttributes_8, (MR_Integer) 1)));
    ll_backend__proc_gen__Statistics_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableAttributes_8, (MR_Integer) 2)));
    ll_backend__proc_gen__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableAttributes_8, (MR_Integer) 3)));
    {
      ll_backend__proc_gen__ProcLabel_26 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(ll_backend__proc_gen__RttiProcLabel_9);
    }
    {
      ll_backend__proc_gen__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 0) = ((MR_Box) (ll_backend__proc_gen__ProcLabel_26));
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 1) = ((MR_Box) (ll_backend__proc_gen__EvalMethod_17));
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 2) = ((MR_Box) (ll_backend__proc_gen__NumInputs_12));
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 3) = ((MR_Box) (ll_backend__proc_gen__NumOutputs_13));
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 4) = ((MR_Box) (ll_backend__proc_gen__InputSteps_14));
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 5) = ((MR_Box) (ll_backend__proc_gen__MaybeOutputSteps_15));
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 6) = ((MR_Box) (ll_backend__proc_gen__PTIVectorRval_20));
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 7) = ((MR_Box) (ll_backend__proc_gen__TVarVectorRval_21));
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 8) = ((MR_Box) (ll_backend__proc_gen__MaybeSizeLimit_24));
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 9) = ((MR_Box) (ll_backend__proc_gen__Statistics_25));
    }
    {
      ll_backend__global_data__global_data_add_new_proc_var_4_p_0(ll_backend__proc_gen__PredProcId_4, ll_backend__proc_gen__Var_27, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_30_30, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_29);
    }
  }
}

static MR_Word MR_CALL 
ll_backend__proc_gen__project_layout_locn_lval_1_f_0(
  MR_Word ll_backend__proc_gen__HeadVar__1_1)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;
    MR_Word ll_backend__proc_gen__Lval_2;

    if (((MR_tag((MR_Word) ll_backend__proc_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      ll_backend__proc_gen__Lval_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 0)));
    else
      {
        MR_Integer ll_backend__proc_gen__Var_5;

        ll_backend__proc_gen__Lval_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 0)));
        ll_backend__proc_gen__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 1)));
      }
    return ll_backend__proc_gen__Lval_2;
  }
}

static void MR_CALL 
ll_backend__proc_gen__add_type_info_lvals_4_p_0(
  MR_Word ll_backend__proc_gen___TVar_5,
  MR_Word ll_backend__proc_gen__TypeInfoLocnSets_6,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_0_9,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_10)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;

    {
      ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_105_110_102_111_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0(ll_backend__proc_gen__TypeInfoLocnSets_6, ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_0_9, ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_10);
    }
  }
}

static MR_Box MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_105_110_102_111_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box ll_backend__proc_gen__closure_arg,
  MR_Box ll_backend__proc_gen__wrapper_arg_1)
{
  {
    MR_Box ll_backend__proc_gen__wrapper_arg_2;
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;
    MR_Word ll_backend__proc_gen__conv0_Lval_2;

    {
      ll_backend__proc_gen__conv0_Lval_2 = ll_backend__proc_gen__project_layout_locn_lval_1_f_0(((MR_Word) ll_backend__proc_gen__wrapper_arg_1));
    }
    ll_backend__proc_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__proc_gen__conv0_Lval_2));
    return ll_backend__proc_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_105_110_102_111_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word ll_backend__proc_gen__TypeInfoLocnSets_6,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_0_9,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_10)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;
    MR_Word ll_backend__proc_gen__TypeCtorInfo_14_14 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    MR_Word ll_backend__proc_gen__TypeInfoLvals_8;

    {
      ll_backend__proc_gen__TypeInfoLvals_8 = mercury__set__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0, ll_backend__proc_gen__TypeCtorInfo_14_14, (MR_Word) &ll_backend__proc_gen_scalar_common_2[6], ll_backend__proc_gen__TypeInfoLocnSets_6);
    }
    {
      mercury__set__union_3_p_0(ll_backend__proc_gen__TypeCtorInfo_14_14, ll_backend__proc_gen__TypeInfoLvals_8, ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_0_9, ll_backend__proc_gen__STATE_VARIABLE_LiveLvals_10);
    }
  }
}

static void MR_CALL 
ll_backend__proc_gen__generate_pred_code_par_7_p_0(
  MR_Word ll_backend__proc_gen__ModuleInfo_8,
  MR_Word ll_backend__proc_gen__ConstStructMap_9,
  MR_Word ll_backend__proc_gen__PredId_10,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_16,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_17,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_18,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_19)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;
    MR_Word ll_backend__proc_gen__PredInfos_13;
    MR_Word ll_backend__proc_gen__PredInfo_14;
    MR_Word ll_backend__proc_gen__ProcIds_15;
    MR_Box ll_backend__proc_gen__conv0_PredInfo_14;

    {
      hlds__hlds_module__module_info_get_preds_2_p_0(ll_backend__proc_gen__ModuleInfo_8, &ll_backend__proc_gen__PredInfos_13);
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ll_backend__proc_gen__PredInfos_13, ((MR_Box) (ll_backend__proc_gen__PredId_10)), &ll_backend__proc_gen__conv0_PredInfo_14);
    }
    ll_backend__proc_gen__PredInfo_14 = ((MR_Word) ll_backend__proc_gen__conv0_PredInfo_14);
    {
      ll_backend__proc_gen__ProcIds_15 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(ll_backend__proc_gen__PredInfo_14);
    }
    {
      ll_backend__proc_gen__generate_proc_list_code_9_p_0(ll_backend__proc_gen__ModuleInfo_8, ll_backend__proc_gen__ConstStructMap_9, ll_backend__proc_gen__PredId_10, ll_backend__proc_gen__PredInfo_14, ll_backend__proc_gen__ProcIds_15, ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_16, ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_17, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_18, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_19);
    }
  }
}

static void MR_CALL 
ll_backend__proc_gen__generate_pred_code_seq_9_p_0(
  MR_Word ll_backend__proc_gen__ModuleInfo_10,
  MR_Word ll_backend__proc_gen__VeryVerbose_11,
  MR_Word ll_backend__proc_gen__Statistics_12,
  MR_Word ll_backend__proc_gen__ConstStructMap_13,
  MR_Word ll_backend__proc_gen__PredId_14,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_23,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_24,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_25,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_26)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;
    MR_Word ll_backend__proc_gen__PredInfos_17;
    MR_Word ll_backend__proc_gen__PredInfo_18;
    MR_Word ll_backend__proc_gen__ProcIds_19;
    MR_Box ll_backend__proc_gen__conv0_PredInfo_18;

    {
      hlds__hlds_module__module_info_get_preds_2_p_0(ll_backend__proc_gen__ModuleInfo_10, &ll_backend__proc_gen__PredInfos_17);
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ll_backend__proc_gen__PredInfos_17, ((MR_Box) (ll_backend__proc_gen__PredId_14)), &ll_backend__proc_gen__conv0_PredInfo_18);
    }
    ll_backend__proc_gen__PredInfo_18 = ((MR_Word) ll_backend__proc_gen__conv0_PredInfo_18);
    {
      ll_backend__proc_gen__ProcIds_19 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(ll_backend__proc_gen__PredInfo_18);
    }
    if ((ll_backend__proc_gen__ProcIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_24 = ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_23;
        *ll_backend__proc_gen__STATE_VARIABLE_GlobalData_26 = ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_25;
      }
    else
      switch (ll_backend__proc_gen__VeryVerbose_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer ll_backend__proc_gen__ProcId_81 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__ProcIds_19, (MR_Integer) 0)));
            MR_Word ll_backend__proc_gen__ProcIds_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__ProcIds_19, (MR_Integer) 1)));
            MR_Word ll_backend__proc_gen__ProcInfos_85;
            MR_Word ll_backend__proc_gen__ProcInfo_86;
            MR_Word ll_backend__proc_gen__CProc_87;
            MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_92;
            MR_Word ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_36_93;
            MR_Box ll_backend__proc_gen__conv1_ProcInfo_86;

            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(ll_backend__proc_gen__PredInfo_18, &ll_backend__proc_gen__ProcInfos_85);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ll_backend__proc_gen__ProcInfos_85, ll_backend__proc_gen__ProcId_81, &ll_backend__proc_gen__conv1_ProcInfo_86);
            }
            ll_backend__proc_gen__ProcInfo_86 = ((MR_Word) ll_backend__proc_gen__conv1_ProcInfo_86);
            {
              ll_backend__proc_gen__generate_proc_code_9_p_0(ll_backend__proc_gen__ModuleInfo_10, ll_backend__proc_gen__ConstStructMap_13, ll_backend__proc_gen__PredId_14, ll_backend__proc_gen__PredInfo_18, ll_backend__proc_gen__ProcId_81, ll_backend__proc_gen__ProcInfo_86, &ll_backend__proc_gen__CProc_87, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_25, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_92);
            }
            {
              ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_36_93 = mercury__cord__snoc_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0, ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_23, ((MR_Box) (ll_backend__proc_gen__CProc_87)));
            }
            {
              ll_backend__proc_gen__generate_proc_list_code_9_p_0(ll_backend__proc_gen__ModuleInfo_10, ll_backend__proc_gen__ConstStructMap_13, ll_backend__proc_gen__PredId_14, ll_backend__proc_gen__PredInfo_18, ll_backend__proc_gen__ProcIds_82, ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_36_93, ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_24, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_92, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_26);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ll_backend__proc_gen__ProcId_113;
            MR_Word ll_backend__proc_gen__ProcIds_114;
            MR_Word ll_backend__proc_gen__ProcInfos_117;
            MR_Word ll_backend__proc_gen__ProcInfo_118;
            MR_Word ll_backend__proc_gen__CProc_119;
            MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_124;
            MR_Word ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_36_125;
            MR_Box ll_backend__proc_gen__conv2_ProcInfo_118;

            {
              mercury__io__write_string_3_p_0((MR_String) "% Generating code for ");
            }
            {
              hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(ll_backend__proc_gen__ModuleInfo_10, ll_backend__proc_gen__PredId_14);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            ll_backend__proc_gen__ProcId_113 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__ProcIds_19, (MR_Integer) 0)));
            ll_backend__proc_gen__ProcIds_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__ProcIds_19, (MR_Integer) 1)));
            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(ll_backend__proc_gen__PredInfo_18, &ll_backend__proc_gen__ProcInfos_117);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ll_backend__proc_gen__ProcInfos_117, ll_backend__proc_gen__ProcId_113, &ll_backend__proc_gen__conv2_ProcInfo_118);
            }
            ll_backend__proc_gen__ProcInfo_118 = ((MR_Word) ll_backend__proc_gen__conv2_ProcInfo_118);
            {
              ll_backend__proc_gen__generate_proc_code_9_p_0(ll_backend__proc_gen__ModuleInfo_10, ll_backend__proc_gen__ConstStructMap_13, ll_backend__proc_gen__PredId_14, ll_backend__proc_gen__PredInfo_18, ll_backend__proc_gen__ProcId_113, ll_backend__proc_gen__ProcInfo_118, &ll_backend__proc_gen__CProc_119, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_25, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_124);
            }
            {
              ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_36_125 = mercury__cord__snoc_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0, ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_23, ((MR_Box) (ll_backend__proc_gen__CProc_119)));
            }
            {
              ll_backend__proc_gen__generate_proc_list_code_9_p_0(ll_backend__proc_gen__ModuleInfo_10, ll_backend__proc_gen__ConstStructMap_13, ll_backend__proc_gen__PredId_14, ll_backend__proc_gen__PredInfo_18, ll_backend__proc_gen__ProcIds_114, ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_36_125, ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_24, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_124, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_26);
            }
            {
              libs__file_util__maybe_report_stats_3_p_0(ll_backend__proc_gen__Statistics_12);
            }
          }
          break;
      }
  }
}

static void MR_CALL 
ll_backend__proc_gen__generate_proc_list_code_9_p_0(
  MR_Word ll_backend__proc_gen__ModuleInfo_1,
  MR_Word ll_backend__proc_gen__ConstStructMap_2,
  MR_Word ll_backend__proc_gen__PredId_3,
  MR_Word ll_backend__proc_gen__PredInfo_4,
  MR_Word ll_backend__proc_gen__HeadVar__5_5,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_6,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_7,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_8,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__proc_gen__succeeded;

        if ((ll_backend__proc_gen__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__proc_gen__STATE_VARIABLE_GlobalData_9 = ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_8;
            *ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_7 = ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_6;
          }
        else
          {
            MR_Integer ll_backend__proc_gen__ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__5_5, (MR_Integer) 0)));
            MR_Word ll_backend__proc_gen__ProcIds_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__5_5, (MR_Integer) 1)));
            MR_Word ll_backend__proc_gen__ProcInfos_28;
            MR_Word ll_backend__proc_gen__ProcInfo_29;
            MR_Word ll_backend__proc_gen__CProc_30;
            MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_35;
            MR_Word ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_36_36;
            MR_Box ll_backend__proc_gen__conv0_ProcInfo_29;

            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(ll_backend__proc_gen__PredInfo_4, &ll_backend__proc_gen__ProcInfos_28);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ll_backend__proc_gen__ProcInfos_28, ll_backend__proc_gen__ProcId_24, &ll_backend__proc_gen__conv0_ProcInfo_29);
            }
            ll_backend__proc_gen__ProcInfo_29 = ((MR_Word) ll_backend__proc_gen__conv0_ProcInfo_29);
            {
              ll_backend__proc_gen__generate_proc_code_9_p_0(ll_backend__proc_gen__ModuleInfo_1, ll_backend__proc_gen__ConstStructMap_2, ll_backend__proc_gen__PredId_3, ll_backend__proc_gen__PredInfo_4, ll_backend__proc_gen__ProcId_24, ll_backend__proc_gen__ProcInfo_29, &ll_backend__proc_gen__CProc_30, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_8, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_35);
            }
            {
              ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_36_36 = mercury__cord__snoc_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0, ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_6, ((MR_Box) (ll_backend__proc_gen__CProc_30)));
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__proc_gen__next_value_of_HeadVar__5_5 = ll_backend__proc_gen__ProcIds_25;
              MR_Word ll_backend__proc_gen__next_value_of_STATE_VARIABLE_CProcsCord_0_6 = ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_36_36;
              MR_Word ll_backend__proc_gen__next_value_of_STATE_VARIABLE_GlobalData_0_8 = ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_35;

              ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_8 = ll_backend__proc_gen__next_value_of_STATE_VARIABLE_GlobalData_0_8;
              ll_backend__proc_gen__STATE_VARIABLE_CProcsCord_0_6 = ll_backend__proc_gen__next_value_of_STATE_VARIABLE_CProcsCord_0_6;
              ll_backend__proc_gen__HeadVar__5_5 = ll_backend__proc_gen__next_value_of_HeadVar__5_5;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__proc_gen__add_all_tabling_info_structs_3_p_0_1(
  MR_Box ll_backend__proc_gen__closure_arg,
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
  MR_Box * ll_backend__proc_gen__wrapper_arg_3)
{
  {
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;
    MR_Word ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_29;

    {
      ll_backend__proc_gen__add_tabling_info_struct_3_p_0(((MR_Word) ll_backend__proc_gen__wrapper_arg_1), ((MR_Word) ll_backend__proc_gen__wrapper_arg_2), &ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_29);
    }
    *ll_backend__proc_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_29));
  }
}

void MR_CALL 
ll_backend__proc_gen__add_all_tabling_info_structs_3_p_0(
  MR_Word ll_backend__proc_gen__ModuleInfo_4,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_8,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_9)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;
    MR_Word ll_backend__proc_gen__TableStructMap_6;
    MR_Word ll_backend__proc_gen__TableStructs_7;
    MR_Box ll_backend__proc_gen__conv1_STATE_VARIABLE_GlobalData_9;

    {
      hlds__hlds_module__module_info_get_table_struct_map_2_p_0(ll_backend__proc_gen__ModuleInfo_4, &ll_backend__proc_gen__TableStructMap_6);
    }
    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0, ll_backend__proc_gen__TableStructMap_6, &ll_backend__proc_gen__TableStructs_7);
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_2[0], (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0, (MR_Word) &ll_backend__proc_gen_scalar_common_2[5], ll_backend__proc_gen__TableStructs_7, ((MR_Box) (ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_8)), &ll_backend__proc_gen__conv1_STATE_VARIABLE_GlobalData_9);
    }
    *ll_backend__proc_gen__STATE_VARIABLE_GlobalData_9 = ((MR_Word) ll_backend__proc_gen__conv1_STATE_VARIABLE_GlobalData_9);
  }
}

static MR_bool MR_CALL 
ll_backend__proc_gen__generate_proc_code_9_p_0_2(
  MR_Box ll_backend__proc_gen__closure_arg)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;

    {
      ll_backend__proc_gen__succeeded = ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__439__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__proc_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__proc_gen__generate_proc_code_9_p_0_1(
  MR_Box ll_backend__proc_gen__closure_arg)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;

    {
      ll_backend__proc_gen__succeeded = ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__356__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__proc_gen__succeeded;
  }
}

void MR_CALL 
ll_backend__proc_gen__generate_proc_code_9_p_0(
  MR_Word ll_backend__proc_gen__ModuleInfo0_10,
  MR_Word ll_backend__proc_gen__ConstStructMap_11,
  MR_Word ll_backend__proc_gen__PredId_12,
  MR_Word ll_backend__proc_gen__PredInfo_13,
  MR_Integer ll_backend__proc_gen__ProcId_14,
  MR_Word ll_backend__proc_gen__ProcInfo0_15,
  MR_Word * ll_backend__proc_gen__CProc_16,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_108,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_109)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;
    MR_Word ll_backend__proc_gen__TypeCtorInfo_157_157;
    MR_Word ll_backend__proc_gen__ModuleInfo_18;
    MR_Word ll_backend__proc_gen__ProcInfo1_19;
    MR_Word ll_backend__proc_gen__Globals_20;
    MR_Word ll_backend__proc_gen__TraceLevel_21;
    MR_Word ll_backend__proc_gen__HasParConj_22;
    MR_Word ll_backend__proc_gen__Parallel_23;
    MR_Word ll_backend__proc_gen__ProcInfo_25;
    MR_Word ll_backend__proc_gen__MaybeContainingGoalMap_26;
    MR_Word ll_backend__proc_gen__ClausesInfo_27;
    MR_Word ll_backend__proc_gen__ProcContext_29;
    MR_Word ll_backend__proc_gen__GoalInfo_30;
    MR_Word ll_backend__proc_gen__Detism_31;
    MR_Word ll_backend__proc_gen__CodeModel_32;
    MR_Word ll_backend__proc_gen__Goal_33;
    MR_Word ll_backend__proc_gen__MaybeFollowVars_35;
    MR_Word ll_backend__proc_gen__FollowVars_36;
    MR_Word ll_backend__proc_gen__ForceProcId_39;
    MR_Word ll_backend__proc_gen__SaveSuccip_40;
    MR_Word ll_backend__proc_gen__StaticCellInfo0_41;
    MR_Word ll_backend__proc_gen__TSRevStringTable0_42;
    MR_Integer ll_backend__proc_gen__TSStringTableSize0_43;
    MR_Word ll_backend__proc_gen__TraceSlotInfo_44;
    MR_Word ll_backend__proc_gen__CodeInfo0_45;
    MR_Word ll_backend__proc_gen__OutsideResumePoint_46;
    MR_Word ll_backend__proc_gen__CodeInfo1_47;
    MR_Word ll_backend__proc_gen__CodeLocDep0_48;
    MR_Word ll_backend__proc_gen__CodeTree0_49;
    MR_Word ll_backend__proc_gen__MaybeTraceCallLabel_50;
    MR_Word ll_backend__proc_gen__ProcFrameSlots_51;
    MR_Word ll_backend__proc_gen__CodeInfo_52;
    MR_Word ll_backend__proc_gen__OutOfLineCode_53;
    MR_Word ll_backend__proc_gen__CodeTree_54;
    MR_Integer ll_backend__proc_gen__MaxTraceRegR_55;
    MR_Integer ll_backend__proc_gen__MaxTraceRegF_56;
    MR_Word ll_backend__proc_gen__StaticCellInfo_57;
    MR_Word ll_backend__proc_gen__TSRevStringTable_58;
    MR_Integer ll_backend__proc_gen__TSStringTableSize_59;
    MR_Word ll_backend__proc_gen__CreatedTempFrame_60;
    MR_Word ll_backend__proc_gen__ProcTraceEvents_61;
    MR_Word ll_backend__proc_gen__Instructions0_63;
    MR_Integer ll_backend__proc_gen__TotalSlots_64;
    MR_Word ll_backend__proc_gen__MaybeSuccipSlot_65;
    MR_Word ll_backend__proc_gen__Instructions_67;
    MR_Word ll_backend__proc_gen__MaybeTableIOInfo_68;
    MR_Word ll_backend__proc_gen__ClosureLayouts_97;
    MR_Word ll_backend__proc_gen__ProcLabel_98;
    MR_Word ll_backend__proc_gen__AllocSites_99;
    MR_String ll_backend__proc_gen__Name_100;
    MR_Integer ll_backend__proc_gen__Arity_101;
    MR_Word ll_backend__proc_gen__LabelCounter_102;
    MR_Word ll_backend__proc_gen__MayAlterRtti_103;
    MR_Word ll_backend__proc_gen__GenBytecode_104;
    MR_Word ll_backend__proc_gen__ProcInstructions_105;
    MR_Word ll_backend__proc_gen__ProcLabelCounter_106;
    MR_Word ll_backend__proc_gen__UsedEnvVars_107;
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_120_120;
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_121_121;
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_134_134;
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_135_135;
    MR_Word ll_backend__proc_gen__Var_140;
    MR_Word ll_backend__proc_gen__Var_34;
    MR_Word ll_backend__proc_gen__FirstClause_28;
    MR_Word ll_backend__proc_gen__Var_117;
    MR_Word ll_backend__proc_gen__Var_141;
    MR_Word ll_backend__proc_gen__Var_142;
    MR_Word ll_backend__proc_gen__Var_143;
    MR_Word ll_backend__proc_gen__Var_144;
    MR_Word ll_backend__proc_gen__Var_145;
    MR_Word ll_backend__proc_gen__Var_146;
    MR_Word ll_backend__proc_gen__Var_147;
    MR_Word ll_backend__proc_gen__Var_148;
    MR_Word ll_backend__proc_gen__Var_149;
    MR_Word ll_backend__proc_gen__Var_138;

    {
      ll_backend__proc_gen__maybe_set_trace_level_3_p_0(ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__ModuleInfo0_10, &ll_backend__proc_gen__ModuleInfo_18);
    }
    {
      hlds__hlds_pred__ensure_all_headvars_are_named_2_p_0(ll_backend__proc_gen__ProcInfo0_15, &ll_backend__proc_gen__ProcInfo1_19);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__proc_gen__ModuleInfo_18, &ll_backend__proc_gen__Globals_20);
    }
    {
      libs__globals__get_trace_level_2_p_0(ll_backend__proc_gen__Globals_20, &ll_backend__proc_gen__TraceLevel_21);
    }
    {
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ll_backend__proc_gen__ProcInfo1_19, &ll_backend__proc_gen__HasParConj_22);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__proc_gen__Globals_20, (MR_Integer) 226, &ll_backend__proc_gen__Parallel_23);
    }
    {
      MR_Word ll_backend__proc_gen__Var_111;

      {
        ll_backend__proc_gen__Var_111 = libs__trace_params__given_trace_level_is_none_1_f_0(ll_backend__proc_gen__TraceLevel_21);
      }
      ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__Var_111 == (MR_Integer) 0);
    }
    if (!(ll_backend__proc_gen__succeeded))
      ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__HasParConj_22 == (MR_Integer) 0);
    if (ll_backend__proc_gen__succeeded)
      {
        MR_Word ll_backend__proc_gen__ContainingGoalMap_24;

        switch (ll_backend__proc_gen__HasParConj_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__proc_gen__Var_112;

              {
                ll_backend__proc_gen__Var_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_112, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_8[2]));
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_112, 1) = ((MR_Box) (ll_backend__proc_gen__generate_proc_code_9_p_0_1));
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_112, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_112, 3) = ((MR_Box) (ll_backend__proc_gen__Parallel_23));
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_112, 4) = ((MR_Box) ((MR_Integer) 1));
              }
              {
                mercury__require__expect_4_p_0(ll_backend__proc_gen__Var_112, (MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.generate_proc_code\'/9", (MR_String) "found parallel conjunction in non-parallel grade");
              }
            }
            break;
        }
        {
          hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(ll_backend__proc_gen__ModuleInfo_18, &ll_backend__proc_gen__ContainingGoalMap_24, ll_backend__proc_gen__ProcInfo1_19, &ll_backend__proc_gen__ProcInfo_25);
        }
        {
          ll_backend__proc_gen__MaybeContainingGoalMap_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeContainingGoalMap_26, 0) = ((MR_Box) (ll_backend__proc_gen__ContainingGoalMap_24));
        }
      }
    else
      {
        ll_backend__proc_gen__MaybeContainingGoalMap_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ll_backend__proc_gen__ProcInfo_25 = ll_backend__proc_gen__ProcInfo1_19;
      }
    {
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(ll_backend__proc_gen__PredInfo_13, &ll_backend__proc_gen__ClausesInfo_27);
    }
    {
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__Detism_31);
    }
    {
      ll_backend__proc_gen__CodeModel_32 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__proc_gen__ProcInfo_25);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__Goal_33);
    }
    ll_backend__proc_gen__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Goal_33, (MR_Integer) 0)));
    ll_backend__proc_gen__GoalInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Goal_33, (MR_Integer) 1)));
    ll_backend__proc_gen__Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_27, (MR_Integer) 0)));
    ll_backend__proc_gen__Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_27, (MR_Integer) 1)));
    ll_backend__proc_gen__Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_27, (MR_Integer) 2)));
    ll_backend__proc_gen__Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_27, (MR_Integer) 3)));
    ll_backend__proc_gen__Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_27, (MR_Integer) 4)));
    ll_backend__proc_gen__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_27, (MR_Integer) 5)));
    ll_backend__proc_gen__Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_27, (MR_Integer) 6)));
    ll_backend__proc_gen__Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_27, (MR_Integer) 7)));
    ll_backend__proc_gen__Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_27, (MR_Integer) 8)));
    ll_backend__proc_gen__Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_27, (MR_Integer) 9)));
    {
      ll_backend__proc_gen__succeeded = hlds__hlds_clauses__get_first_clause_2_p_0(ll_backend__proc_gen__Var_117, &ll_backend__proc_gen__FirstClause_28);
    }
    if (ll_backend__proc_gen__succeeded)
      {
        MR_Word ll_backend__proc_gen__Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FirstClause_28, (MR_Integer) 0)));
        MR_Word ll_backend__proc_gen__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FirstClause_28, (MR_Integer) 1)));
        MR_Word ll_backend__proc_gen__Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FirstClause_28, (MR_Integer) 2)));
        MR_Word ll_backend__proc_gen__Var_153;

        ll_backend__proc_gen__ProcContext_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FirstClause_28, (MR_Integer) 3)));
        ll_backend__proc_gen__Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FirstClause_28, (MR_Integer) 4)));
      }
    else
      {
        ll_backend__proc_gen__ProcContext_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__proc_gen__GoalInfo_30);
      }
    {
      hlds__hlds_llds__goal_info_get_follow_vars_2_p_0(ll_backend__proc_gen__GoalInfo_30, &ll_backend__proc_gen__MaybeFollowVars_35);
    }
    if ((ll_backend__proc_gen__MaybeFollowVars_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ll_backend__proc_gen__FollowVarsMap_37;

        {
          mercury__map__init_1_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, &ll_backend__proc_gen__FollowVarsMap_37);
        }
        {
          ll_backend__proc_gen__FollowVars_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FollowVars_36, 0) = ((MR_Box) (ll_backend__proc_gen__FollowVarsMap_37));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FollowVars_36, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FollowVars_36, 2) = ((MR_Box) ((MR_Integer) 1));
        }
      }
    else
      ll_backend__proc_gen__FollowVars_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeFollowVars_35, (MR_Integer) 0)));
    {
      ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0(ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__Globals_20, &ll_backend__proc_gen__SaveSuccip_40, &ll_backend__proc_gen__ForceProcId_39);
    }
    {
      ll_backend__global_data__global_data_get_static_cell_info_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_108, &ll_backend__proc_gen__StaticCellInfo0_41);
    }
    {
      ll_backend__global_data__global_data_get_threadscope_rev_string_table_3_p_0(ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_108, &ll_backend__proc_gen__TSRevStringTable0_42, &ll_backend__proc_gen__TSStringTableSize0_43);
    }
    {
      ll_backend__code_info__code_info_init_13_p_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredId_12, ll_backend__proc_gen__ProcId_14, ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__ProcInfo_25, ll_backend__proc_gen__SaveSuccip_40, ll_backend__proc_gen__StaticCellInfo0_41, ll_backend__proc_gen__ConstStructMap_11, ll_backend__proc_gen__MaybeContainingGoalMap_26, ll_backend__proc_gen__TSRevStringTable0_42, ll_backend__proc_gen__TSStringTableSize0_43, &ll_backend__proc_gen__TraceSlotInfo_44, &ll_backend__proc_gen__CodeInfo0_45);
    }
    {
      ll_backend__code_loc_dep__code_loc_dep_init_5_p_0(ll_backend__proc_gen__FollowVars_36, &ll_backend__proc_gen__OutsideResumePoint_46, ll_backend__proc_gen__CodeInfo0_45, &ll_backend__proc_gen__CodeInfo1_47, &ll_backend__proc_gen__CodeLocDep0_48);
    }
    {
      ll_backend__proc_gen__generate_category_code_11_p_0(ll_backend__proc_gen__CodeModel_32, ll_backend__proc_gen__ProcContext_29, ll_backend__proc_gen__Goal_33, ll_backend__proc_gen__OutsideResumePoint_46, ll_backend__proc_gen__TraceSlotInfo_44, &ll_backend__proc_gen__CodeTree0_49, &ll_backend__proc_gen__MaybeTraceCallLabel_50, &ll_backend__proc_gen__ProcFrameSlots_51, ll_backend__proc_gen__CodeInfo1_47, &ll_backend__proc_gen__CodeInfo_52, ll_backend__proc_gen__CodeLocDep0_48);
    }
    {
      ll_backend__code_info__get_out_of_line_code_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__OutOfLineCode_53);
    }
    ll_backend__proc_gen__TypeCtorInfo_157_157 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__proc_gen__CodeTree_54 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_157_157, ll_backend__proc_gen__CodeTree0_49, ll_backend__proc_gen__OutOfLineCode_53);
    }
    {
      ll_backend__code_info__get_max_regs_in_use_at_trace_3_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__MaxTraceRegR_55, &ll_backend__proc_gen__MaxTraceRegF_56);
    }
    {
      ll_backend__code_info__get_static_cell_info_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__StaticCellInfo_57);
    }
    {
      ll_backend__global_data__global_data_set_static_cell_info_3_p_0(ll_backend__proc_gen__StaticCellInfo_57, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_108, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_120_120);
    }
    {
      ll_backend__code_info__get_threadscope_rev_string_table_3_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__TSRevStringTable_58, &ll_backend__proc_gen__TSStringTableSize_59);
    }
    {
      ll_backend__global_data__global_data_set_threadscope_rev_string_table_4_p_0(ll_backend__proc_gen__TSRevStringTable_58, ll_backend__proc_gen__TSStringTableSize_59, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_120_120, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_121_121);
    }
    {
      ll_backend__code_info__get_created_temp_frame_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__CreatedTempFrame_60);
    }
    {
      ll_backend__code_info__get_proc_trace_events_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__ProcTraceEvents_61);
    }
    {
      ll_backend__proc_gen__Instructions0_63 = mercury__cord__list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_157_157, ll_backend__proc_gen__CodeTree_54);
    }
    ll_backend__proc_gen__TotalSlots_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcFrameSlots_51, (MR_Integer) 0)));
    ll_backend__proc_gen__MaybeSuccipSlot_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcFrameSlots_51, (MR_Integer) 1)));
    if ((ll_backend__proc_gen__MaybeSuccipSlot_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__proc_gen__Instructions_67 = ll_backend__proc_gen__Instructions0_63;
    else
      {
        MR_Integer ll_backend__proc_gen__SuccipSlot_66 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeSuccipSlot_65, (MR_Integer) 0)));

        {
          ll_backend__proc_gen__add_saved_succip_3_p_0(ll_backend__proc_gen__Instructions0_63, ll_backend__proc_gen__SuccipSlot_66, &ll_backend__proc_gen__Instructions_67);
        }
      }
    {
      hlds__hlds_pred__proc_info_get_maybe_proc_table_io_info_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__MaybeTableIOInfo_68);
    }
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__SaveSuccip_40 == (MR_Integer) 1);
    if (!(ll_backend__proc_gen__succeeded))
      {
        MR_Word ll_backend__proc_gen___TableIODeclInfo_69;

        ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__MaybeTableIOInfo_68)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__proc_gen__succeeded)
          ll_backend__proc_gen___TableIODeclInfo_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTableIOInfo_68, (MR_Integer) 0)));
      }
    if (ll_backend__proc_gen__succeeded)
      {
        MR_Word ll_backend__proc_gen__RttiProcLabel_70;
        MR_Word ll_backend__proc_gen__InternalMap_71;
        MR_Word ll_backend__proc_gen__EntryLabel_72;
        MR_Word ll_backend__proc_gen__EvalMethod_73;
        MR_Word ll_backend__proc_gen__InstMap0_74;
        MR_Word ll_backend__proc_gen__HeadVars_75;
        MR_Word ll_backend__proc_gen__VarSet_76;
        MR_Word ll_backend__proc_gen__ArgModes_77;
        MR_Word ll_backend__proc_gen__VarTypes_78;
        MR_Word ll_backend__proc_gen__TraceSuppress_79;
        MR_Word ll_backend__proc_gen__NeedBodyReps_80;
        MR_Word ll_backend__proc_gen__NeedGoalRep_81;
        MR_Word ll_backend__proc_gen__NeedsAllNames_82;
        MR_Word ll_backend__proc_gen__MaybeHLDSDeepInfo_83;
        MR_Word ll_backend__proc_gen__MaybeDeepProfInfo_85;
        MR_Word ll_backend__proc_gen__EffTraceLevel_86;
        MR_Word ll_backend__proc_gen__TableStructMap_87;
        MR_Word ll_backend__proc_gen__PredProcId_88;
        MR_Word ll_backend__proc_gen__MaybeTableInfo_92;
        MR_Word ll_backend__proc_gen__OISUKindFors_95;
        MR_Word ll_backend__proc_gen__ProcLayout_96;

        {
          ll_backend__proc_gen__RttiProcLabel_70 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredId_12, ll_backend__proc_gen__ProcId_14);
        }
        {
          ll_backend__code_info__get_layout_info_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__InternalMap_71);
        }
        {
          ll_backend__proc_gen__EntryLabel_72 = ll_backend__code_util__make_local_entry_label_4_f_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredId_12, ll_backend__proc_gen__ProcId_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
        {
          hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__EvalMethod_73);
        }
        {
          hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ll_backend__proc_gen__ProcInfo_25, ll_backend__proc_gen__ModuleInfo_18, &ll_backend__proc_gen__InstMap0_74);
        }
        {
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__HeadVars_75);
        }
        {
          hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__VarSet_76);
        }
        {
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__ArgModes_77);
        }
        {
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__VarTypes_78);
        }
        {
          libs__globals__get_trace_suppress_2_p_0(ll_backend__proc_gen__Globals_20, &ll_backend__proc_gen__TraceSuppress_79);
        }
        {
          ll_backend__proc_gen__NeedBodyReps_80 = libs__trace_params__eff_trace_needs_proc_body_reps_5_f_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__ProcInfo_25, ll_backend__proc_gen__TraceLevel_21, ll_backend__proc_gen__TraceSuppress_79);
        }
        switch (ll_backend__proc_gen__NeedBodyReps_80) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__proc_gen__NeedGoalRep_81 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            ll_backend__proc_gen__NeedGoalRep_81 = (MR_Integer) 0;
            break;
        }
        {
          ll_backend__proc_gen__NeedsAllNames_82 = libs__trace_params__eff_trace_needs_all_var_names_5_f_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__ProcInfo_25, ll_backend__proc_gen__TraceLevel_21, ll_backend__proc_gen__TraceSuppress_79);
        }
        {
          hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__MaybeHLDSDeepInfo_83);
        }
        if ((ll_backend__proc_gen__MaybeHLDSDeepInfo_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ll_backend__proc_gen__MaybeDeepProfInfo_85 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word ll_backend__proc_gen__HLDSDeepInfo_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeHLDSDeepInfo_83, (MR_Integer) 0)));

            {
              ll_backend__proc_gen__MaybeDeepProfInfo_85 = ll_backend__proc_gen__maybe_generate_deep_prof_info_2_f_0(ll_backend__proc_gen__ProcInfo_25, ll_backend__proc_gen__HLDSDeepInfo_84);
            }
          }
        {
          ll_backend__proc_gen__EffTraceLevel_86 = libs__trace_params__eff_trace_level_4_f_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__ProcInfo_25, ll_backend__proc_gen__TraceLevel_21);
        }
        {
          hlds__hlds_module__module_info_get_table_struct_map_2_p_0(ll_backend__proc_gen__ModuleInfo_18, &ll_backend__proc_gen__TableStructMap_87);
        }
        {
          ll_backend__proc_gen__PredProcId_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__PredProcId_88, 0) = ((MR_Box) (ll_backend__proc_gen__PredId_12));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__PredProcId_88, 1) = ((MR_Box) (ll_backend__proc_gen__ProcId_14));
        }
        if ((ll_backend__proc_gen__MaybeTableIOInfo_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word ll_backend__proc_gen__TableStructInfo_89;
            MR_Box ll_backend__proc_gen__conv0_TableStructInfo_89;

            {
              ll_backend__proc_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0, ll_backend__proc_gen__TableStructMap_87, ((MR_Box) (ll_backend__proc_gen__PredProcId_88)), &ll_backend__proc_gen__conv0_TableStructInfo_89);
            }
            if (ll_backend__proc_gen__succeeded)
              {
                ll_backend__proc_gen__TableStructInfo_89 = ((MR_Word) ll_backend__proc_gen__conv0_TableStructInfo_89);
                ll_backend__proc_gen__succeeded = MR_TRUE;
              }
            if (ll_backend__proc_gen__succeeded)
              {
                MR_Word ll_backend__proc_gen__ProcTableStructInfo_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableStructInfo_89, (MR_Integer) 0)));
                MR_Word ll_backend__proc_gen__Var_132;
                MR_Word ll_backend__proc_gen___Attributes_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableStructInfo_89, (MR_Integer) 1)));

                {
                  ll_backend__proc_gen__Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_132, 0) = ((MR_Box) (ll_backend__proc_gen__ProcTableStructInfo_90));
                }
                {
                  ll_backend__proc_gen__MaybeTableInfo_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTableInfo_92, 0) = ((MR_Box) (ll_backend__proc_gen__Var_132));
                }
              }
            else
              ll_backend__proc_gen__MaybeTableInfo_92 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            MR_Word ll_backend__proc_gen__TableIOInfo_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTableIOInfo_68, (MR_Integer) 0)));
            MR_Word ll_backend__proc_gen___TableStructInfo_94;
            MR_Box ll_backend__proc_gen__conv1__TableStructInfo_94;

            {
              ll_backend__proc_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0, ll_backend__proc_gen__TableStructMap_87, ((MR_Box) (ll_backend__proc_gen__PredProcId_88)), &ll_backend__proc_gen__conv1__TableStructInfo_94);
            }
            if (ll_backend__proc_gen__succeeded)
              {
                ll_backend__proc_gen___TableStructInfo_94 = ((MR_Word) ll_backend__proc_gen__conv1__TableStructInfo_94);
                ll_backend__proc_gen__succeeded = MR_TRUE;
              }
            if (ll_backend__proc_gen__succeeded)
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.generate_proc_code\'/9", (MR_String) "conflicting kinds of tabling");
                  return;
                }
              }
            else
              {
                MR_Word ll_backend__proc_gen__Var_131;

                {
                  ll_backend__proc_gen__Var_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_131, 0) = ((MR_Box) (ll_backend__proc_gen__TableIOInfo_93));
                }
                {
                  ll_backend__proc_gen__MaybeTableInfo_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTableInfo_92, 0) = ((MR_Box) (ll_backend__proc_gen__Var_131));
                }
              }
          }
        {
          hlds__hlds_pred__proc_info_get_oisu_kind_fors_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__OISUKindFors_95);
        }
        {
          ll_backend__proc_gen__ProcLayout_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 24 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 0) = ((MR_Box) (ll_backend__proc_gen__RttiProcLabel_70));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 1) = ((MR_Box) (ll_backend__proc_gen__EntryLabel_72));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 2) = ((MR_Box) (ll_backend__proc_gen__Detism_31));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 3) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_64));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 4) = ((MR_Box) (ll_backend__proc_gen__MaybeSuccipSlot_65));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 5) = ((MR_Box) (ll_backend__proc_gen__EvalMethod_73));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 6) = ((MR_Box) (ll_backend__proc_gen__EffTraceLevel_86));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 7) = ((MR_Box) (ll_backend__proc_gen__MaybeTraceCallLabel_50));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 8) = ((MR_Box) (ll_backend__proc_gen__MaxTraceRegR_55));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 9) = ((MR_Box) (ll_backend__proc_gen__MaxTraceRegF_56));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 10) = ((MR_Box) (ll_backend__proc_gen__HeadVars_75));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 11) = ((MR_Box) (ll_backend__proc_gen__ArgModes_77));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 12) = ((MR_Box) (ll_backend__proc_gen__Goal_33));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 13) = ((MR_Box) (ll_backend__proc_gen__NeedGoalRep_81));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 14) = ((MR_Box) (ll_backend__proc_gen__InstMap0_74));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 15) = ((MR_Box) (ll_backend__proc_gen__TraceSlotInfo_44));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 16) = ((MR_Box) (ll_backend__proc_gen__ForceProcId_39));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 17) = ((MR_Box) (ll_backend__proc_gen__VarSet_76));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 18) = ((MR_Box) (ll_backend__proc_gen__VarTypes_78));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 19) = ((MR_Box) (ll_backend__proc_gen__InternalMap_71));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 20) = ((MR_Box) (ll_backend__proc_gen__MaybeTableInfo_92));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 21) = ((MR_Box) (ll_backend__proc_gen__NeedsAllNames_82));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 22) = ((MR_Box) (ll_backend__proc_gen__OISUKindFors_95));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 23) = ((MR_Box) (ll_backend__proc_gen__MaybeDeepProfInfo_85));
        }
        {
          ll_backend__global_data__global_data_add_new_proc_layout_4_p_0(ll_backend__proc_gen__PredProcId_88, ll_backend__proc_gen__ProcLayout_96, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_121_121, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_134_134);
        }
      }
    else
      ll_backend__proc_gen__STATE_VARIABLE_GlobalData_134_134 = ll_backend__proc_gen__STATE_VARIABLE_GlobalData_121_121;
    {
      ll_backend__code_info__get_closure_layouts_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__ClosureLayouts_97);
    }
    {
      ll_backend__global_data__global_data_add_new_closure_layouts_3_p_0(ll_backend__proc_gen__ClosureLayouts_97, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_134_134, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_135_135);
    }
    {
      ll_backend__proc_gen__ProcLabel_98 = backend_libs__proc_label__make_proc_label_3_f_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredId_12, ll_backend__proc_gen__ProcId_14);
    }
    {
      ll_backend__code_info__get_alloc_sites_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__AllocSites_99);
    }
    {
      ll_backend__global_data__global_data_add_new_alloc_sites_3_p_0(ll_backend__proc_gen__AllocSites_99, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_135_135, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_109);
    }
    {
      ll_backend__proc_gen__Name_100 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__proc_gen__PredInfo_13);
    }
    {
      ll_backend__proc_gen__Arity_101 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(ll_backend__proc_gen__PredInfo_13);
    }
    {
      ll_backend__code_info__get_label_counter_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__LabelCounter_102);
    }
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__ProcTraceEvents_61 == (MR_Integer) 1);
    if (ll_backend__proc_gen__succeeded)
      {
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CreatedTempFrame_60 == (MR_Integer) 1);
        if (ll_backend__proc_gen__succeeded)
          {
            ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CodeModel_32 == (MR_Integer) 2);
            ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
          }
      }
    if (ll_backend__proc_gen__succeeded)
      {
        MR_Word ll_backend__proc_gen__NeedsMaxfrSlot_62;
        MR_Word ll_backend__proc_gen__Var_122;

        {
          hlds__hlds_pred__proc_info_get_needs_maxfr_slot_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__NeedsMaxfrSlot_62);
        }
        {
          ll_backend__proc_gen__Var_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_122, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_8[3]));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_122, 1) = ((MR_Box) (ll_backend__proc_gen__generate_proc_code_9_p_0_2));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_122, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_122, 3) = ((MR_Box) (ll_backend__proc_gen__NeedsMaxfrSlot_62));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_122, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          mercury__require__expect_4_p_0(ll_backend__proc_gen__Var_122, (MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.generate_proc_code\'/9", (MR_String) "should have reserved a slot for maxfr, but didn\'t");
        }
        ll_backend__proc_gen__MayAlterRtti_103 = (MR_Integer) 1;
      }
    else
      switch (ll_backend__proc_gen__ProcTraceEvents_61) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ll_backend__proc_gen__MayAlterRtti_103 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          ll_backend__proc_gen__MayAlterRtti_103 = (MR_Integer) 1;
          break;
      }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__proc_gen__Globals_20, (MR_Integer) 147, &ll_backend__proc_gen__GenBytecode_104);
    }
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__GenBytecode_104 == (MR_Integer) 1);
    if (ll_backend__proc_gen__succeeded)
      {
        {
          ll_backend__proc_gen__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(ll_backend__proc_gen__PredInfo_13);
        }
        ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
        if (ll_backend__proc_gen__succeeded)
          {
            {
              ll_backend__proc_gen__Var_138 = hlds__goal_form__goal_has_foreign_1_f_0(ll_backend__proc_gen__Goal_33);
            }
            ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__Var_138 == (MR_Integer) 0);
          }
      }
    if (ll_backend__proc_gen__succeeded)
      {
        {
          ll_backend__proc_gen__bytecode_stub_4_p_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredId_12, ll_backend__proc_gen__ProcId_14, &ll_backend__proc_gen__ProcInstructions_105);
        }
        {
          ll_backend__proc_gen__ProcLabelCounter_106 = mercury__counter__init_1_f_0((MR_Integer) 0);
        }
      }
    else
      {
        ll_backend__proc_gen__ProcInstructions_105 = ll_backend__proc_gen__Instructions_67;
        ll_backend__proc_gen__ProcLabelCounter_106 = ll_backend__proc_gen__LabelCounter_102;
      }
    {
      ll_backend__code_info__get_used_env_vars_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__UsedEnvVars_107);
    }
    {
      ll_backend__proc_gen__Var_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_140, 0) = ((MR_Box) (ll_backend__proc_gen__PredId_12));
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_140, 1) = ((MR_Box) (ll_backend__proc_gen__ProcId_14));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__proc_gen__CProc_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__proc_gen__Name_100));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__proc_gen__Arity_101));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__proc_gen__Var_140));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__proc_gen__ProcLabel_98));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__proc_gen__CodeModel_32));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__proc_gen__ProcInstructions_105));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__proc_gen__ProcLabelCounter_106));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__proc_gen__MayAlterRtti_103));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__proc_gen__UsedEnvVars_107));
    }
  }
}

static void MR_CALL 
ll_backend__proc_gen__bytecode_stub_4_p_0(
  MR_Word ll_backend__proc_gen__ModuleInfo_5,
  MR_Word ll_backend__proc_gen__PredId_6,
  MR_Integer ll_backend__proc_gen__ProcId_7,
  MR_Word * ll_backend__proc_gen__BytecodeInstructions_8)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;
    MR_Word ll_backend__proc_gen__TypeCtorInfo_119_119;
    MR_Word ll_backend__proc_gen__PredInfo_9;
    MR_Word ll_backend__proc_gen__ModuleSymName_10;
    MR_String ll_backend__proc_gen__ModuleName_11;
    MR_Word ll_backend__proc_gen__EntryLabel_12;
    MR_String ll_backend__proc_gen__PredName_13;
    MR_Integer ll_backend__proc_gen__ProcNum_14;
    MR_String ll_backend__proc_gen__ProcStr_15;
    MR_Integer ll_backend__proc_gen__Arity_16;
    MR_String ll_backend__proc_gen__ArityStr_17;
    MR_Word ll_backend__proc_gen__PredOrFunc_18;
    MR_String ll_backend__proc_gen__IsFuncStr_20;
    MR_String ll_backend__proc_gen__CallStruct_21;
    MR_String ll_backend__proc_gen__BytecodeCall_22;
    MR_Word ll_backend__proc_gen__BytecodeInstructionsComponents_23;
    MR_Word ll_backend__proc_gen__Var_27;
    MR_Word ll_backend__proc_gen__Var_29;
    MR_Word ll_backend__proc_gen__Var_30;
    MR_Word ll_backend__proc_gen__Var_32;
    MR_Word ll_backend__proc_gen__Var_34;
    MR_Word ll_backend__proc_gen__Var_36;
    MR_Word ll_backend__proc_gen__Var_37;
    MR_Word ll_backend__proc_gen__Var_39;
    MR_Word ll_backend__proc_gen__Var_41;
    MR_Word ll_backend__proc_gen__Var_42;
    MR_Word ll_backend__proc_gen__Var_44;
    MR_Word ll_backend__proc_gen__Var_46;
    MR_Word ll_backend__proc_gen__Var_47;
    MR_Word ll_backend__proc_gen__Var_49;
    MR_Word ll_backend__proc_gen__Var_51;
    MR_Word ll_backend__proc_gen__Var_52;
    MR_Word ll_backend__proc_gen__Var_54;
    MR_Word ll_backend__proc_gen__Var_56;
    MR_Word ll_backend__proc_gen__Var_78;
    MR_Word ll_backend__proc_gen__Var_81;
    MR_Word ll_backend__proc_gen__Var_82;
    MR_Word ll_backend__proc_gen__Var_84;
    MR_Word ll_backend__proc_gen__Var_85;
    MR_Word ll_backend__proc_gen__Var_88;
    MR_Word ll_backend__proc_gen__Var_89;
    MR_Word ll_backend__proc_gen__Var_90;
    MR_Word ll_backend__proc_gen__Var_91;
    MR_Word ll_backend__proc_gen__Var_95;
    MR_Word ll_backend__proc_gen__Var_96;
    MR_Word ll_backend__proc_gen__Var_99;
    MR_Word ll_backend__proc_gen__Var_100;
    MR_Word ll_backend__proc_gen__Var_103;
    MR_Word ll_backend__proc_gen__Var_104;
    MR_Word ll_backend__proc_gen__Var_106;
    MR_Word ll_backend__proc_gen__Var_107;
    MR_Word ll_backend__proc_gen__Var_108;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__proc_gen__ModuleInfo_5, ll_backend__proc_gen__PredId_6, &ll_backend__proc_gen__PredInfo_9);
    }
    {
      ll_backend__proc_gen__ModuleSymName_10 = hlds__hlds_pred__pred_info_module_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
    {
      ll_backend__proc_gen__ModuleName_11 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ll_backend__proc_gen__ModuleSymName_10, (MR_String) "__");
    }
    {
      ll_backend__proc_gen__EntryLabel_12 = ll_backend__code_util__make_local_entry_label_4_f_0(ll_backend__proc_gen__ModuleInfo_5, ll_backend__proc_gen__PredId_6, ll_backend__proc_gen__ProcId_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    {
      ll_backend__proc_gen__PredName_13 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__proc_gen__ProcId_7, &ll_backend__proc_gen__ProcNum_14);
    }
    {
      mercury__string__int_to_string_2_p_0(ll_backend__proc_gen__ProcNum_14, &ll_backend__proc_gen__ProcStr_15);
    }
    {
      ll_backend__proc_gen__Arity_16 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
    {
      mercury__string__int_to_string_2_p_0(ll_backend__proc_gen__Arity_16, &ll_backend__proc_gen__ArityStr_17);
    }
    {
      ll_backend__proc_gen__PredOrFunc_18 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
    switch (ll_backend__proc_gen__PredOrFunc_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ll_backend__proc_gen__IsFuncStr_20 = (MR_String) "MR_TRUE";
        break;
      case (MR_Integer) 0:
        ll_backend__proc_gen__IsFuncStr_20 = (MR_String) "MR_FALSE";
        break;
    }
    {
      ll_backend__proc_gen__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_56, 0) = ((MR_Box) (ll_backend__proc_gen__IsFuncStr_20));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[22])));
    }
    {
      ll_backend__proc_gen__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_54, 0) = ((MR_Box) ((MR_String) "\t\t\t"));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_54, 1) = ((MR_Box) (ll_backend__proc_gen__Var_56));
    }
    {
      ll_backend__proc_gen__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_52, 0) = ((MR_Box) ((MR_String) ",\n"));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_52, 1) = ((MR_Box) (ll_backend__proc_gen__Var_54));
    }
    {
      ll_backend__proc_gen__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_51, 0) = ((MR_Box) (ll_backend__proc_gen__ArityStr_17));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_51, 1) = ((MR_Box) (ll_backend__proc_gen__Var_52));
    }
    {
      ll_backend__proc_gen__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_49, 0) = ((MR_Box) ((MR_String) "\t\t\t"));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_49, 1) = ((MR_Box) (ll_backend__proc_gen__Var_51));
    }
    {
      ll_backend__proc_gen__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_47, 0) = ((MR_Box) ((MR_String) ",\n"));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_47, 1) = ((MR_Box) (ll_backend__proc_gen__Var_49));
    }
    {
      ll_backend__proc_gen__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_46, 0) = ((MR_Box) (ll_backend__proc_gen__ProcStr_15));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_46, 1) = ((MR_Box) (ll_backend__proc_gen__Var_47));
    }
    {
      ll_backend__proc_gen__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_44, 0) = ((MR_Box) ((MR_String) "\t\t\t"));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_44, 1) = ((MR_Box) (ll_backend__proc_gen__Var_46));
    }
    {
      ll_backend__proc_gen__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_42, 0) = ((MR_Box) ((MR_String) "\",\n"));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_42, 1) = ((MR_Box) (ll_backend__proc_gen__Var_44));
    }
    {
      ll_backend__proc_gen__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_41, 0) = ((MR_Box) (ll_backend__proc_gen__PredName_13));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_41, 1) = ((MR_Box) (ll_backend__proc_gen__Var_42));
    }
    {
      ll_backend__proc_gen__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_39, 0) = ((MR_Box) ((MR_String) "\t\t\t\""));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_39, 1) = ((MR_Box) (ll_backend__proc_gen__Var_41));
    }
    {
      ll_backend__proc_gen__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_37, 0) = ((MR_Box) ((MR_String) "\",\n"));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_37, 1) = ((MR_Box) (ll_backend__proc_gen__Var_39));
    }
    {
      ll_backend__proc_gen__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_36, 0) = ((MR_Box) (ll_backend__proc_gen__ModuleName_11));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_36, 1) = ((MR_Box) (ll_backend__proc_gen__Var_37));
    }
    {
      ll_backend__proc_gen__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_34, 0) = ((MR_Box) ((MR_String) "\t\t\t\""));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_34, 1) = ((MR_Box) (ll_backend__proc_gen__Var_36));
    }
    {
      ll_backend__proc_gen__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_32, 0) = ((MR_Box) ((MR_String) "\t\t\t(MB_Word)NULL,\n"));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_32, 1) = ((MR_Box) (ll_backend__proc_gen__Var_34));
    }
    {
      ll_backend__proc_gen__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_30, 0) = ((MR_Box) ((MR_String) " = {\n"));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_30, 1) = ((MR_Box) (ll_backend__proc_gen__Var_32));
    }
    {
      ll_backend__proc_gen__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_29, 0) = ((MR_Box) ((MR_String) "bytecode_call_info"));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_29, 1) = ((MR_Box) (ll_backend__proc_gen__Var_30));
    }
    {
      ll_backend__proc_gen__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_27, 0) = ((MR_Box) ((MR_String) "\t\tstatic MB_Call "));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_27, 1) = ((MR_Box) (ll_backend__proc_gen__Var_29));
    }
    {
      mercury__string__append_list_2_p_0(ll_backend__proc_gen__Var_27, &ll_backend__proc_gen__CallStruct_21);
    }
    {
      mercury__string__append_list_2_p_0((MR_Word) MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[39]), &ll_backend__proc_gen__BytecodeCall_22);
    }
    ll_backend__proc_gen__TypeCtorInfo_119_119 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    {
      ll_backend__proc_gen__Var_82 = mercury__set__init_0_f_0(ll_backend__proc_gen__TypeCtorInfo_119_119);
    }
    {
      ll_backend__proc_gen__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_81, 0) = ((MR_Box) (ll_backend__proc_gen__Var_82));
    }
    {
      ll_backend__proc_gen__Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_78, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_78, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_78, 3) = ((MR_Box) (ll_backend__proc_gen__Var_81));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_78, 4) = ((MR_Box) ((MR_String) "\t{\n"));
    }
    {
      ll_backend__proc_gen__Var_89 = mercury__set__init_0_f_0(ll_backend__proc_gen__TypeCtorInfo_119_119);
    }
    {
      ll_backend__proc_gen__Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_88, 0) = ((MR_Box) (ll_backend__proc_gen__Var_89));
    }
    {
      ll_backend__proc_gen__Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_85, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_85, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_85, 3) = ((MR_Box) (ll_backend__proc_gen__Var_88));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_85, 4) = ((MR_Box) (ll_backend__proc_gen__CallStruct_21));
    }
    {
      ll_backend__proc_gen__Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_91, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_91, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_91, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_91, 4) = ((MR_Box) (ll_backend__proc_gen__BytecodeCall_22));
    }
    {
      ll_backend__proc_gen__Var_100 = mercury__set__init_0_f_0(ll_backend__proc_gen__TypeCtorInfo_119_119);
    }
    {
      ll_backend__proc_gen__Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_99, 0) = ((MR_Box) (ll_backend__proc_gen__Var_100));
    }
    {
      ll_backend__proc_gen__Var_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_96, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_96, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_96, 3) = ((MR_Box) (ll_backend__proc_gen__Var_99));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_96, 4) = ((MR_Box) ((MR_String) "\t}\n"));
    }
    {
      ll_backend__proc_gen__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_95, 0) = ((MR_Box) (ll_backend__proc_gen__Var_96));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__proc_gen__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_90, 0) = ((MR_Box) (ll_backend__proc_gen__Var_91));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_90, 1) = ((MR_Box) (ll_backend__proc_gen__Var_95));
    }
    {
      ll_backend__proc_gen__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_84, 0) = ((MR_Box) (ll_backend__proc_gen__Var_85));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_84, 1) = ((MR_Box) (ll_backend__proc_gen__Var_90));
    }
    {
      ll_backend__proc_gen__BytecodeInstructionsComponents_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__BytecodeInstructionsComponents_23, 0) = ((MR_Box) (ll_backend__proc_gen__Var_78));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__BytecodeInstructionsComponents_23, 1) = ((MR_Box) (ll_backend__proc_gen__Var_84));
    }
    {
      ll_backend__proc_gen__Var_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_104, 1) = ((MR_Box) (ll_backend__proc_gen__EntryLabel_12));
    }
    {
      ll_backend__proc_gen__Var_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_103, 0) = ((MR_Box) (ll_backend__proc_gen__Var_104));
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_103, 1) = ((MR_Box) ((MR_String) "Procedure entry point"));
    }
    {
      ll_backend__proc_gen__Var_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_108, 2) = ((MR_Box) (ll_backend__proc_gen__BytecodeInstructionsComponents_23));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_108, 3) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_108, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_108, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_108, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_108, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_108, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_108, 9) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_108, 10) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      ll_backend__proc_gen__Var_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_107, 0) = ((MR_Box) (ll_backend__proc_gen__Var_108));
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_107, 1) = ((MR_Box) ((MR_String) "Entry stub"));
    }
    {
      ll_backend__proc_gen__Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_106, 0) = ((MR_Box) (ll_backend__proc_gen__Var_107));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__proc_gen__BytecodeInstructions_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__proc_gen__Var_103));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__proc_gen__Var_106));
    }
  }
}

static void MR_CALL 
ll_backend__proc_gen__add_saved_succip_3_p_0(
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
  MR_Integer ll_backend__proc_gen__HeadVar__2_2,
  MR_Word * ll_backend__proc_gen__HeadVar__3_3)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;

    if ((ll_backend__proc_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__proc_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__proc_gen__Instr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__proc_gen__Instrs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__proc_gen__Instr_8;
        MR_Word ll_backend__proc_gen__Instrs_9;
        MR_Word ll_backend__proc_gen__Uinstr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Instr0_5, (MR_Integer) 0)));
        MR_String ll_backend__proc_gen__Comment_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Instr0_5, (MR_Integer) 1)));
        MR_Word ll_backend__proc_gen__LiveVals0_12;
        MR_Word ll_backend__proc_gen__Var_24;
        MR_Word ll_backend__proc_gen__Var_25;
        MR_Word ll_backend__proc_gen__Var_26;
        MR_Word ll_backend__proc_gen__Var_14;
        MR_String ll_backend__proc_gen__Var_13;

        ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__Instrs0_6)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__proc_gen__succeeded)
          {
            ll_backend__proc_gen__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Instrs0_6, (MR_Integer) 0)));
            ll_backend__proc_gen__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Instrs0_6, (MR_Integer) 1)));
            ll_backend__proc_gen__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_24, (MR_Integer) 0)));
            ll_backend__proc_gen__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_24, (MR_Integer) 1)));
            ll_backend__proc_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__proc_gen__Var_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_25, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (ll_backend__proc_gen__succeeded)
              {
                ll_backend__proc_gen__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_25, (MR_Integer) 1)));
                ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__Var_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
          }
        ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
        if (ll_backend__proc_gen__succeeded)
          {
            ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__Uinstr0_10)) == (MR_mktag((MR_Integer) 2)));
            if (ll_backend__proc_gen__succeeded)
              ll_backend__proc_gen__LiveVals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 0)));
          }
        if (ll_backend__proc_gen__succeeded)
          {
            MR_Word ll_backend__proc_gen__LiveVals1_15;
            MR_Word ll_backend__proc_gen__Uinstr_16;
            MR_Word ll_backend__proc_gen__Var_27;

            {
              ll_backend__proc_gen__Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_27, 1) = ((MR_Box) (ll_backend__proc_gen__HeadVar__2_2));
            }
            {
              mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__proc_gen__Var_27)), ll_backend__proc_gen__LiveVals0_12, &ll_backend__proc_gen__LiveVals1_15);
            }
            {
              ll_backend__proc_gen__Uinstr_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ll_backend__proc_gen__Uinstr_16, 0) = ((MR_Box) (ll_backend__proc_gen__LiveVals1_15));
            }
            {
              ll_backend__proc_gen__Instr_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Instr_8, 0) = ((MR_Box) (ll_backend__proc_gen__Uinstr_16));
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Instr_8, 1) = ((MR_Box) (ll_backend__proc_gen__Comment_11));
            }
          }
        else
          {
            MR_Word ll_backend__proc_gen__Target_17;
            MR_Word ll_backend__proc_gen__ReturnLabel_18;
            MR_Word ll_backend__proc_gen__Context_19;
            MR_Word ll_backend__proc_gen__GP_20;
            MR_Word ll_backend__proc_gen__CM_21;
            MR_Word ll_backend__proc_gen__LiveVals0_33;

            ll_backend__proc_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__proc_gen__Uinstr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (ll_backend__proc_gen__succeeded)
              {
                ll_backend__proc_gen__Target_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 1)));
                ll_backend__proc_gen__ReturnLabel_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 2)));
                ll_backend__proc_gen__LiveVals0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 3)));
                ll_backend__proc_gen__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 4)));
                ll_backend__proc_gen__GP_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 5)));
                ll_backend__proc_gen__CM_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 6)));
                {
                  MR_Word ll_backend__proc_gen__Empty_22;
                  MR_Word ll_backend__proc_gen__LiveVals_23;
                  MR_Word ll_backend__proc_gen__Var_28;
                  MR_Word ll_backend__proc_gen__Var_29;
                  MR_Word ll_backend__proc_gen__Var_30;
                  MR_Word ll_backend__proc_gen__Uinstr_32;

                  {
                    mercury__map__init_1_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[4], (MR_Word) &ll_backend__proc_gen_scalar_common_1[5], &ll_backend__proc_gen__Empty_22);
                  }
                  {
                    ll_backend__proc_gen__Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_30, 1) = ((MR_Box) (ll_backend__proc_gen__HeadVar__2_2));
                  }
                  {
                    ll_backend__proc_gen__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_29, 0) = ((MR_Box) (ll_backend__proc_gen__Var_30));
                  }
                  {
                    ll_backend__proc_gen__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_28, 0) = ((MR_Box) (ll_backend__proc_gen__Var_29));
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_28, 2) = ((MR_Box) (ll_backend__proc_gen__Empty_22));
                  }
                  {
                    ll_backend__proc_gen__LiveVals_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__LiveVals_23, 0) = ((MR_Box) (ll_backend__proc_gen__Var_28));
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__LiveVals_23, 1) = ((MR_Box) (ll_backend__proc_gen__LiveVals0_33));
                  }
                  {
                    ll_backend__proc_gen__Uinstr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 1) = ((MR_Box) (ll_backend__proc_gen__Target_17));
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 2) = ((MR_Box) (ll_backend__proc_gen__ReturnLabel_18));
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 3) = ((MR_Box) (ll_backend__proc_gen__LiveVals_23));
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 4) = ((MR_Box) (ll_backend__proc_gen__Context_19));
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 5) = ((MR_Box) (ll_backend__proc_gen__GP_20));
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 6) = ((MR_Box) (ll_backend__proc_gen__CM_21));
                  }
                  {
                    ll_backend__proc_gen__Instr_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Instr_8, 0) = ((MR_Box) (ll_backend__proc_gen__Uinstr_32));
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Instr_8, 1) = ((MR_Box) (ll_backend__proc_gen__Comment_11));
                  }
                }
              }
            else
              ll_backend__proc_gen__Instr_8 = ll_backend__proc_gen__Instr0_5;
          }
        {
          ll_backend__proc_gen__add_saved_succip_3_p_0(ll_backend__proc_gen__Instrs0_6, ll_backend__proc_gen__HeadVar__2_2, &ll_backend__proc_gen__Instrs_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__proc_gen__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__proc_gen__Instr_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__proc_gen__Instrs_9));
        }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__proc_gen__generate_category_code_11_p_0_1(
  MR_Box ll_backend__proc_gen__closure_arg)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;

    {
      ll_backend__proc_gen__succeeded = ll_backend__proc_gen__IntroducedFrom__pred__generate_category_code__813__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__proc_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__proc_gen__generate_category_code_11_p_0(
  MR_Word ll_backend__proc_gen__CodeModel_12,
  MR_Word ll_backend__proc_gen__ProcContext_13,
  MR_Word ll_backend__proc_gen__Goal_14,
  MR_Word ll_backend__proc_gen__ResumePoint_15,
  MR_Word ll_backend__proc_gen__TraceSlotInfo_16,
  MR_Word * ll_backend__proc_gen__Code_17,
  MR_Word * ll_backend__proc_gen__MaybeTraceCallLabel_18,
  MR_Word * ll_backend__proc_gen__ProcFrameSlots_19,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_0_61,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CI_62,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_0_63)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;

    switch (ll_backend__proc_gen__CodeModel_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__proc_gen__Globals_22;
          MR_Word ll_backend__proc_gen__MiddleRec_23;
          MR_Word ll_backend__proc_gen__MiddleRecCode_24;
          MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_182_182;
          MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_183_183;

          {
            ll_backend__code_info__get_globals_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_0_61, &ll_backend__proc_gen__Globals_22);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(ll_backend__proc_gen__Globals_22, (MR_Integer) 460, &ll_backend__proc_gen__MiddleRec_23);
          }
          ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__MiddleRec_23 == (MR_Integer) 1);
          if (ll_backend__proc_gen__succeeded)
            {
              ll_backend__proc_gen__succeeded = ll_backend__middle_rec__match_and_generate_6_p_0(ll_backend__proc_gen__Goal_14, &ll_backend__proc_gen__MiddleRecCode_24, ll_backend__proc_gen__STATE_VARIABLE_CI_0_61, &ll_backend__proc_gen__STATE_VARIABLE_CI_182_182, ll_backend__proc_gen__STATE_VARIABLE_CLD_0_63, &ll_backend__proc_gen__STATE_VARIABLE_CLD_183_183);
            }
          if (ll_backend__proc_gen__succeeded)
            {
              *ll_backend__proc_gen__STATE_VARIABLE_CI_62 = ll_backend__proc_gen__STATE_VARIABLE_CI_182_182;
              *ll_backend__proc_gen__Code_17 = ll_backend__proc_gen__MiddleRecCode_24;
              *ll_backend__proc_gen__MaybeTraceCallLabel_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__proc_gen__ProcFrameSlots_19 = (MR_Word) &ll_backend__proc_gen_scalar_common_1[31];
            }
          else
            {
              MR_Word ll_backend__proc_gen__TypeCtorInfo_314_314;
              MR_Word ll_backend__proc_gen__MaybeTraceInfo_25;
              MR_Word ll_backend__proc_gen__TraceCallCode_27;
              MR_Word ll_backend__proc_gen__TailRecLabelCode_31;
              MR_Word ll_backend__proc_gen__BodyCode_32;
              MR_Word ll_backend__proc_gen__EntryCode_33;
              MR_Word ll_backend__proc_gen__ExitCode_35;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_186_186;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_187_187;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_193_193;
              MR_Word ll_backend__proc_gen__Var_198;
              MR_Word ll_backend__proc_gen__Var_199;
              MR_Word ll_backend__proc_gen__Var_200;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_194_201;
              MR_Word ll_backend__proc_gen__Var_34;

              {
                ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_0_61, &ll_backend__proc_gen__MaybeTraceInfo_25);
              }
              if ((ll_backend__proc_gen__MaybeTraceInfo_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word ll_backend__proc_gen__TypeCtorInfo_313_313;

                  *ll_backend__proc_gen__MaybeTraceCallLabel_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  ll_backend__proc_gen__TypeCtorInfo_313_313 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                  {
                    ll_backend__proc_gen__TraceCallCode_27 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_313_313);
                  }
                  {
                    ll_backend__proc_gen__TailRecLabelCode_31 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_313_313);
                  }
                  ll_backend__proc_gen__STATE_VARIABLE_CI_186_186 = ll_backend__proc_gen__STATE_VARIABLE_CI_0_61;
                  ll_backend__proc_gen__STATE_VARIABLE_CLD_187_187 = ll_backend__proc_gen__STATE_VARIABLE_CLD_0_63;
                }
              else
                {
                  MR_Word ll_backend__proc_gen__TraceInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTraceInfo_25, (MR_Integer) 0)));
                  MR_Word ll_backend__proc_gen__MaybeTailRecInfo_28;

                  {
                    ll_backend__proc_gen__generate_call_event_8_p_0(ll_backend__proc_gen__TraceInfo_26, ll_backend__proc_gen__ProcContext_13, ll_backend__proc_gen__MaybeTraceCallLabel_18, &ll_backend__proc_gen__TraceCallCode_27, ll_backend__proc_gen__STATE_VARIABLE_CI_0_61, &ll_backend__proc_gen__STATE_VARIABLE_CI_186_186, ll_backend__proc_gen__STATE_VARIABLE_CLD_0_63, &ll_backend__proc_gen__STATE_VARIABLE_CLD_187_187);
                  }
                  {
                    ll_backend__trace_gen__get_trace_maybe_tail_rec_info_2_p_0(ll_backend__proc_gen__TraceInfo_26, &ll_backend__proc_gen__MaybeTailRecInfo_28);
                  }
                  if ((ll_backend__proc_gen__MaybeTailRecInfo_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      {
                        ll_backend__proc_gen__TailRecLabelCode_31 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                      }
                    }
                  else
                    {
                      MR_Word ll_backend__proc_gen__TailRecLabel_30;
                      MR_Word ll_backend__proc_gen__Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTailRecInfo_28, (MR_Integer) 0)));
                      MR_Word ll_backend__proc_gen__Var_189;
                      MR_Word ll_backend__proc_gen__Var_190;
                      MR_Word ll_backend__proc_gen___TailRecLval_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_188, (MR_Integer) 0)));

                      ll_backend__proc_gen__TailRecLabel_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_188, (MR_Integer) 1)));
                      {
                        ll_backend__proc_gen__Var_190 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_190, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                        MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_190, 1) = ((MR_Box) (ll_backend__proc_gen__TailRecLabel_30));
                      }
                      {
                        ll_backend__proc_gen__Var_189 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_189, 0) = ((MR_Box) (ll_backend__proc_gen__Var_190));
                        MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_189, 1) = ((MR_Box) ((MR_String) "tail recursion label, nofulljump"));
                      }
                      {
                        ll_backend__proc_gen__TailRecLabelCode_31 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__proc_gen__Var_189)));
                      }
                    }
                }
              {
                ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 0, ll_backend__proc_gen__Goal_14, &ll_backend__proc_gen__BodyCode_32, ll_backend__proc_gen__STATE_VARIABLE_CI_186_186, &ll_backend__proc_gen__STATE_VARIABLE_CI_193_193, ll_backend__proc_gen__STATE_VARIABLE_CLD_187_187, &ll_backend__proc_gen__STATE_VARIABLE_CLD_194_201);
              }
              {
                ll_backend__proc_gen__generate_entry_6_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_193_193, (MR_Integer) 0, ll_backend__proc_gen__Goal_14, ll_backend__proc_gen__ResumePoint_15, ll_backend__proc_gen__ProcFrameSlots_19, &ll_backend__proc_gen__EntryCode_33);
              }
              {
                ll_backend__proc_gen__generate_exit_9_p_0((MR_Integer) 0, *ll_backend__proc_gen__ProcFrameSlots_19, ll_backend__proc_gen__TraceSlotInfo_16, ll_backend__proc_gen__ProcContext_13, &ll_backend__proc_gen__Var_34, &ll_backend__proc_gen__ExitCode_35, ll_backend__proc_gen__STATE_VARIABLE_CI_193_193, ll_backend__proc_gen__STATE_VARIABLE_CI_62, ll_backend__proc_gen__STATE_VARIABLE_CLD_194_201);
              }
              ll_backend__proc_gen__TypeCtorInfo_314_314 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
              {
                ll_backend__proc_gen__Var_200 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_314_314, ll_backend__proc_gen__BodyCode_32, ll_backend__proc_gen__ExitCode_35);
              }
              {
                ll_backend__proc_gen__Var_199 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_314_314, ll_backend__proc_gen__TailRecLabelCode_31, ll_backend__proc_gen__Var_200);
              }
              {
                ll_backend__proc_gen__Var_198 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_314_314, ll_backend__proc_gen__TraceCallCode_27, ll_backend__proc_gen__Var_199);
              }
              {
                *ll_backend__proc_gen__Code_17 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_314_314, ll_backend__proc_gen__EntryCode_33, ll_backend__proc_gen__Var_198);
              }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__proc_gen__MaybeTraceInfo_284;

          {
            ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_0_61, &ll_backend__proc_gen__MaybeTraceInfo_284);
          }
          if ((ll_backend__proc_gen__MaybeTraceInfo_284 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word ll_backend__proc_gen__TypeCtorInfo_325_325;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_65_65;
              MR_Word ll_backend__proc_gen__Var_70;
              MR_Word ll_backend__proc_gen__BodyCode_264;
              MR_Word ll_backend__proc_gen__EntryCode_265;
              MR_Word ll_backend__proc_gen__ExitCode_266;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_194_267;
              MR_Word ll_backend__proc_gen__Var_60;

              *ll_backend__proc_gen__MaybeTraceCallLabel_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 2, ll_backend__proc_gen__Goal_14, &ll_backend__proc_gen__BodyCode_264, ll_backend__proc_gen__STATE_VARIABLE_CI_0_61, &ll_backend__proc_gen__STATE_VARIABLE_CI_65_65, ll_backend__proc_gen__STATE_VARIABLE_CLD_0_63, &ll_backend__proc_gen__STATE_VARIABLE_CLD_194_267);
              }
              {
                ll_backend__proc_gen__generate_entry_6_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_65_65, (MR_Integer) 2, ll_backend__proc_gen__Goal_14, ll_backend__proc_gen__ResumePoint_15, ll_backend__proc_gen__ProcFrameSlots_19, &ll_backend__proc_gen__EntryCode_265);
              }
              {
                ll_backend__proc_gen__generate_exit_9_p_0((MR_Integer) 2, *ll_backend__proc_gen__ProcFrameSlots_19, ll_backend__proc_gen__TraceSlotInfo_16, ll_backend__proc_gen__ProcContext_13, &ll_backend__proc_gen__Var_60, &ll_backend__proc_gen__ExitCode_266, ll_backend__proc_gen__STATE_VARIABLE_CI_65_65, ll_backend__proc_gen__STATE_VARIABLE_CI_62, ll_backend__proc_gen__STATE_VARIABLE_CLD_194_267);
              }
              ll_backend__proc_gen__TypeCtorInfo_325_325 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
              {
                ll_backend__proc_gen__Var_70 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_325_325, ll_backend__proc_gen__BodyCode_264, ll_backend__proc_gen__ExitCode_266);
              }
              {
                *ll_backend__proc_gen__Code_17 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_325_325, ll_backend__proc_gen__EntryCode_265, ll_backend__proc_gen__Var_70);
              }
            }
          else
            {
              MR_Word ll_backend__proc_gen__TypeCtorInfo_324_324;
              MR_Word ll_backend__proc_gen__MaybeTrailSlot_53;
              MR_Word ll_backend__proc_gen__DiscardTraceTicketCode_59;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_71_71;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_72_72;
              MR_Word ll_backend__proc_gen__Var_73;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_79_79;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_80_80;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_83_83;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_84_84;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_85_85;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_86_86;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_89_89;
              MR_Word ll_backend__proc_gen__Var_116;
              MR_Word ll_backend__proc_gen__Var_117;
              MR_Word ll_backend__proc_gen__Var_118;
              MR_Word ll_backend__proc_gen__Var_119;
              MR_Word ll_backend__proc_gen__Var_120;
              MR_Word ll_backend__proc_gen__Var_121;
              MR_Word ll_backend__proc_gen__TraceInfo_248 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTraceInfo_284, (MR_Integer) 0)));
              MR_Word ll_backend__proc_gen__TraceCallCode_249;
              MR_Word ll_backend__proc_gen__MaybeTailRecInfo_250;
              MR_Word ll_backend__proc_gen__BodyCode_251;
              MR_Word ll_backend__proc_gen__EntryCode_252;
              MR_Word ll_backend__proc_gen__ExitCode_253;
              MR_Word ll_backend__proc_gen__FailCode_254;
              MR_Word ll_backend__proc_gen__BeforeBody_255;
              MR_Word ll_backend__proc_gen__ResumeCode_256;
              MR_Word ll_backend__proc_gen__ResumeVarList_257;
              MR_Word ll_backend__proc_gen__ResumeVars_258;
              MR_Word ll_backend__proc_gen__MaybeFailExternalInfo_259;
              MR_Word ll_backend__proc_gen__TraceFailCode_262;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_194_263;
              MR_Word ll_backend__proc_gen__Var_301;
              MR_Word ll_backend__proc_gen__Var_50;
              MR_Word ll_backend__proc_gen___CLDAfterEvent_245;
              MR_Word ll_backend__proc_gen__Var_302;
              MR_Word ll_backend__proc_gen__Var_303;
              MR_Word ll_backend__proc_gen__Var_304;
              MR_Word ll_backend__proc_gen__Var_305;

              {
                ll_backend__proc_gen__generate_call_event_8_p_0(ll_backend__proc_gen__TraceInfo_248, ll_backend__proc_gen__ProcContext_13, ll_backend__proc_gen__MaybeTraceCallLabel_18, &ll_backend__proc_gen__TraceCallCode_249, ll_backend__proc_gen__STATE_VARIABLE_CI_0_61, &ll_backend__proc_gen__STATE_VARIABLE_CI_71_71, ll_backend__proc_gen__STATE_VARIABLE_CLD_0_63, &ll_backend__proc_gen__STATE_VARIABLE_CLD_72_72);
              }
              {
                ll_backend__trace_gen__get_trace_maybe_tail_rec_info_2_p_0(ll_backend__proc_gen__TraceInfo_248, &ll_backend__proc_gen__MaybeTailRecInfo_250);
              }
              {
                ll_backend__proc_gen__Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_73, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_8[1]));
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_73, 1) = ((MR_Box) (ll_backend__proc_gen__generate_category_code_11_p_0_1));
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_73, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_73, 4) = ((MR_Box) (ll_backend__proc_gen__MaybeTailRecInfo_250));
              }
              {
                mercury__require__expect_4_p_0(ll_backend__proc_gen__Var_73, (MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.generate_category_code\'/11", (MR_String) "tail recursive call in model_non code");
              }
              {
                ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CLD_72_72, &ll_backend__proc_gen__BeforeBody_255);
              }
              {
                ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 2, ll_backend__proc_gen__Goal_14, &ll_backend__proc_gen__BodyCode_251, ll_backend__proc_gen__STATE_VARIABLE_CI_71_71, &ll_backend__proc_gen__STATE_VARIABLE_CI_79_79, ll_backend__proc_gen__STATE_VARIABLE_CLD_72_72, &ll_backend__proc_gen__STATE_VARIABLE_CLD_80_80);
              }
              {
                ll_backend__proc_gen__generate_entry_6_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_79_79, (MR_Integer) 2, ll_backend__proc_gen__Goal_14, ll_backend__proc_gen__ResumePoint_15, ll_backend__proc_gen__ProcFrameSlots_19, &ll_backend__proc_gen__EntryCode_252);
              }
              {
                ll_backend__proc_gen__generate_exit_9_p_0((MR_Integer) 2, *ll_backend__proc_gen__ProcFrameSlots_19, ll_backend__proc_gen__TraceSlotInfo_16, ll_backend__proc_gen__ProcContext_13, &ll_backend__proc_gen__Var_50, &ll_backend__proc_gen__ExitCode_253, ll_backend__proc_gen__STATE_VARIABLE_CI_79_79, &ll_backend__proc_gen__STATE_VARIABLE_CI_83_83, ll_backend__proc_gen__STATE_VARIABLE_CLD_80_80);
              }
              {
                ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__proc_gen__BeforeBody_255, ll_backend__proc_gen__STATE_VARIABLE_CI_83_83, &ll_backend__proc_gen__STATE_VARIABLE_CLD_84_84);
              }
              {
                ll_backend__code_loc_dep__generate_resume_point_6_p_0(ll_backend__proc_gen__ResumePoint_15, &ll_backend__proc_gen__ResumeCode_256, ll_backend__proc_gen__STATE_VARIABLE_CI_83_83, &ll_backend__proc_gen__STATE_VARIABLE_CI_85_85, ll_backend__proc_gen__STATE_VARIABLE_CLD_84_84, &ll_backend__proc_gen__STATE_VARIABLE_CLD_86_86);
              }
              {
                ll_backend__code_loc_dep__resume_point_vars_2_p_0(ll_backend__proc_gen__ResumePoint_15, &ll_backend__proc_gen__ResumeVarList_257);
              }
              {
                ll_backend__proc_gen__ResumeVars_258 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__proc_gen__ResumeVarList_257);
              }
              {
                ll_backend__code_loc_dep__set_forward_live_vars_3_p_0(ll_backend__proc_gen__ResumeVars_258, ll_backend__proc_gen__STATE_VARIABLE_CLD_86_86, &ll_backend__proc_gen__STATE_VARIABLE_CLD_194_263);
              }
              {
                ll_backend__trace_gen__generate_external_event_code_8_p_0((MR_Integer) 2, ll_backend__proc_gen__TraceInfo_248, ll_backend__proc_gen__ProcContext_13, &ll_backend__proc_gen__MaybeFailExternalInfo_259, ll_backend__proc_gen__STATE_VARIABLE_CI_85_85, &ll_backend__proc_gen__STATE_VARIABLE_CI_89_89, ll_backend__proc_gen__STATE_VARIABLE_CLD_194_263, &ll_backend__proc_gen___CLDAfterEvent_245);
              }
              if ((ll_backend__proc_gen__MaybeFailExternalInfo_259 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    ll_backend__proc_gen__TraceFailCode_262 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
                }
              else
                {
                  MR_Word ll_backend__proc_gen__FailExternalInfo_246 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeFailExternalInfo_259, (MR_Integer) 0)));
                  MR_Word ll_backend__proc_gen__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FailExternalInfo_246, (MR_Integer) 0)));
                  MR_Word ll_backend__proc_gen__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FailExternalInfo_246, (MR_Integer) 1)));

                  ll_backend__proc_gen__TraceFailCode_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FailExternalInfo_246, (MR_Integer) 2)));
                }
              ll_backend__proc_gen__Var_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_16, (MR_Integer) 0)));
              ll_backend__proc_gen__Var_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_16, (MR_Integer) 1)));
              ll_backend__proc_gen__MaybeTrailSlot_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_16, (MR_Integer) 2)));
              ll_backend__proc_gen__Var_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_16, (MR_Integer) 3)));
              ll_backend__proc_gen__Var_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_16, (MR_Integer) 4)));
              ll_backend__proc_gen__Var_305 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_16, (MR_Integer) 5)));
              if ((ll_backend__proc_gen__MaybeTrailSlot_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    ll_backend__proc_gen__DiscardTraceTicketCode_59 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
                  *ll_backend__proc_gen__STATE_VARIABLE_CI_62 = ll_backend__proc_gen__STATE_VARIABLE_CI_89_89;
                }
              else
              if ((ll_backend__proc_gen__Var_301 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    ll_backend__proc_gen__DiscardTraceTicketCode_59 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[32])));
                  }
                  *ll_backend__proc_gen__STATE_VARIABLE_CI_62 = ll_backend__proc_gen__STATE_VARIABLE_CI_89_89;
                }
              else
                {
                  MR_Integer ll_backend__proc_gen__FromFullSlot_56 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_301, (MR_Integer) 0)));
                  MR_Word ll_backend__proc_gen__FromFullSlotLval_57;
                  MR_Word ll_backend__proc_gen__SkipLabel_58;
                  MR_Word ll_backend__proc_gen__Var_95;
                  MR_Word ll_backend__proc_gen__Var_96;
                  MR_Word ll_backend__proc_gen__Var_97;
                  MR_Word ll_backend__proc_gen__Var_98;
                  MR_Word ll_backend__proc_gen__Var_100;
                  MR_Word ll_backend__proc_gen__Var_101;
                  MR_Word ll_backend__proc_gen__Var_103;
                  MR_Word ll_backend__proc_gen__Var_107;
                  MR_Word ll_backend__proc_gen__Var_108;
                  MR_Word ll_backend__proc_gen__Var_109;

                  {
                    ll_backend__proc_gen__FromFullSlotLval_57 = ll_backend__llds__stack_slot_num_to_lval_2_f_0((MR_Integer) 1, ll_backend__proc_gen__FromFullSlot_56);
                  }
                  {
                    ll_backend__code_info__get_next_label_3_p_0(&ll_backend__proc_gen__SkipLabel_58, ll_backend__proc_gen__STATE_VARIABLE_CI_89_89, ll_backend__proc_gen__STATE_VARIABLE_CI_62);
                  }
                  {
                    ll_backend__proc_gen__Var_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_100, 0) = ((MR_Box) (ll_backend__proc_gen__FromFullSlotLval_57));
                  }
                  {
                    ll_backend__proc_gen__Var_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_98, 2) = ((MR_Box) (ll_backend__proc_gen__Var_100));
                  }
                  {
                    ll_backend__proc_gen__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_101, 0) = ((MR_Box) (ll_backend__proc_gen__SkipLabel_58));
                  }
                  {
                    ll_backend__proc_gen__Var_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_97, 1) = ((MR_Box) (ll_backend__proc_gen__Var_98));
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_97, 2) = ((MR_Box) (ll_backend__proc_gen__Var_101));
                  }
                  {
                    ll_backend__proc_gen__Var_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_96, 0) = ((MR_Box) (ll_backend__proc_gen__Var_97));
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_96, 1) = ((MR_Box) ((MR_String) ""));
                  }
                  {
                    ll_backend__proc_gen__Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_109, 1) = ((MR_Box) (ll_backend__proc_gen__SkipLabel_58));
                  }
                  {
                    ll_backend__proc_gen__Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_108, 0) = ((MR_Box) (ll_backend__proc_gen__Var_109));
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_108, 1) = ((MR_Box) ((MR_String) ""));
                  }
                  {
                    ll_backend__proc_gen__Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_107, 0) = ((MR_Box) (ll_backend__proc_gen__Var_108));
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ll_backend__proc_gen__Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_103, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[32]));
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_103, 1) = ((MR_Box) (ll_backend__proc_gen__Var_107));
                  }
                  {
                    ll_backend__proc_gen__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_95, 0) = ((MR_Box) (ll_backend__proc_gen__Var_96));
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_95, 1) = ((MR_Box) (ll_backend__proc_gen__Var_103));
                  }
                  {
                    ll_backend__proc_gen__DiscardTraceTicketCode_59 = mercury__cord__from_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__proc_gen__Var_95);
                  }
                }
              ll_backend__proc_gen__TypeCtorInfo_324_324 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
              {
                ll_backend__proc_gen__FailCode_254 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_324_324, ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[34])));
              }
              {
                ll_backend__proc_gen__Var_121 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_324_324, ll_backend__proc_gen__DiscardTraceTicketCode_59, ll_backend__proc_gen__FailCode_254);
              }
              {
                ll_backend__proc_gen__Var_120 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_324_324, ll_backend__proc_gen__TraceFailCode_262, ll_backend__proc_gen__Var_121);
              }
              {
                ll_backend__proc_gen__Var_119 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_324_324, ll_backend__proc_gen__ResumeCode_256, ll_backend__proc_gen__Var_120);
              }
              {
                ll_backend__proc_gen__Var_118 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_324_324, ll_backend__proc_gen__ExitCode_253, ll_backend__proc_gen__Var_119);
              }
              {
                ll_backend__proc_gen__Var_117 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_324_324, ll_backend__proc_gen__BodyCode_251, ll_backend__proc_gen__Var_118);
              }
              {
                ll_backend__proc_gen__Var_116 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_324_324, ll_backend__proc_gen__TraceCallCode_249, ll_backend__proc_gen__Var_117);
              }
              {
                *ll_backend__proc_gen__Code_17 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_324_324, ll_backend__proc_gen__EntryCode_252, ll_backend__proc_gen__Var_116);
              }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__proc_gen__TypeCtorInfo_316_316;
          MR_Word ll_backend__proc_gen__FailureLiveRegs_36;
          MR_Word ll_backend__proc_gen__FailCode_37;
          MR_Word ll_backend__proc_gen__Var_125;
          MR_Word ll_backend__proc_gen__Var_134;
          MR_Word ll_backend__proc_gen__Var_135;
          MR_Word ll_backend__proc_gen__Var_136;
          MR_Word ll_backend__proc_gen__MaybeTraceInfo_234;

          {
            ll_backend__proc_gen__FailureLiveRegs_36 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[10]))));
          }
          ll_backend__proc_gen__TypeCtorInfo_316_316 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
          {
            ll_backend__proc_gen__Var_136 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ll_backend__proc_gen__Var_136, 0) = ((MR_Box) (ll_backend__proc_gen__FailureLiveRegs_36));
          }
          {
            ll_backend__proc_gen__Var_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_135, 0) = ((MR_Box) (ll_backend__proc_gen__Var_136));
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_135, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            ll_backend__proc_gen__Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_134, 0) = ((MR_Box) (ll_backend__proc_gen__Var_135));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[14])));
          }
          {
            ll_backend__proc_gen__Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_125, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[11]));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_125, 1) = ((MR_Box) (ll_backend__proc_gen__Var_134));
          }
          {
            ll_backend__proc_gen__FailCode_37 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__Var_125);
          }
          {
            ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_0_61, &ll_backend__proc_gen__MaybeTraceInfo_234);
          }
          if ((ll_backend__proc_gen__MaybeTraceInfo_234 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_145_145;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_146_146;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_149_149;
              MR_Word ll_backend__proc_gen__Var_152;
              MR_Word ll_backend__proc_gen__Var_153;
              MR_Word ll_backend__proc_gen__Var_154;
              MR_Word ll_backend__proc_gen__Var_155;
              MR_Word ll_backend__proc_gen__BodyCode_217;
              MR_Word ll_backend__proc_gen__EntryCode_218;
              MR_Word ll_backend__proc_gen__ExitCode_219;
              MR_Word ll_backend__proc_gen__BeforeBody_220;
              MR_Word ll_backend__proc_gen__RestoreDeallocCode_221;
              MR_Word ll_backend__proc_gen__ResumeCode_222;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_194_223;
              MR_Word ll_backend__proc_gen___CLDAfterResume_49;

              *ll_backend__proc_gen__MaybeTraceCallLabel_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CLD_0_63, &ll_backend__proc_gen__BeforeBody_220);
              }
              {
                ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 1, ll_backend__proc_gen__Goal_14, &ll_backend__proc_gen__BodyCode_217, ll_backend__proc_gen__STATE_VARIABLE_CI_0_61, &ll_backend__proc_gen__STATE_VARIABLE_CI_145_145, ll_backend__proc_gen__STATE_VARIABLE_CLD_0_63, &ll_backend__proc_gen__STATE_VARIABLE_CLD_146_146);
              }
              {
                ll_backend__proc_gen__generate_entry_6_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_145_145, (MR_Integer) 1, ll_backend__proc_gen__Goal_14, ll_backend__proc_gen__ResumePoint_15, ll_backend__proc_gen__ProcFrameSlots_19, &ll_backend__proc_gen__EntryCode_218);
              }
              {
                ll_backend__proc_gen__generate_exit_9_p_0((MR_Integer) 1, *ll_backend__proc_gen__ProcFrameSlots_19, ll_backend__proc_gen__TraceSlotInfo_16, ll_backend__proc_gen__ProcContext_13, &ll_backend__proc_gen__RestoreDeallocCode_221, &ll_backend__proc_gen__ExitCode_219, ll_backend__proc_gen__STATE_VARIABLE_CI_145_145, &ll_backend__proc_gen__STATE_VARIABLE_CI_149_149, ll_backend__proc_gen__STATE_VARIABLE_CLD_146_146);
              }
              {
                ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__proc_gen__BeforeBody_220, ll_backend__proc_gen__STATE_VARIABLE_CI_149_149, &ll_backend__proc_gen__STATE_VARIABLE_CLD_194_223);
              }
              {
                ll_backend__code_loc_dep__generate_resume_point_6_p_0(ll_backend__proc_gen__ResumePoint_15, &ll_backend__proc_gen__ResumeCode_222, ll_backend__proc_gen__STATE_VARIABLE_CI_149_149, ll_backend__proc_gen__STATE_VARIABLE_CI_62, ll_backend__proc_gen__STATE_VARIABLE_CLD_194_223, &ll_backend__proc_gen___CLDAfterResume_49);
              }
              {
                ll_backend__proc_gen__Var_155 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__RestoreDeallocCode_221, ll_backend__proc_gen__FailCode_37);
              }
              {
                ll_backend__proc_gen__Var_154 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__ResumeCode_222, ll_backend__proc_gen__Var_155);
              }
              {
                ll_backend__proc_gen__Var_153 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__ExitCode_219, ll_backend__proc_gen__Var_154);
              }
              {
                ll_backend__proc_gen__Var_152 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__BodyCode_217, ll_backend__proc_gen__Var_153);
              }
              {
                *ll_backend__proc_gen__Code_17 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__EntryCode_218, ll_backend__proc_gen__Var_152);
              }
            }
          else
            {
              MR_Word ll_backend__proc_gen__BeforeBody_38;
              MR_Word ll_backend__proc_gen__RestoreDeallocCode_39;
              MR_Word ll_backend__proc_gen__ResumeCode_40;
              MR_Word ll_backend__proc_gen__ResumeVarList_41;
              MR_Word ll_backend__proc_gen__ResumeVars_42;
              MR_Word ll_backend__proc_gen__MaybeFailExternalInfo_43;
              MR_Word ll_backend__proc_gen__TraceFailCode_48;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_156_156;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_157_157;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_163_163;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_164_164;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_167_167;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_168_168;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_169_169;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_170_170;
              MR_Word ll_backend__proc_gen__Var_174;
              MR_Word ll_backend__proc_gen__Var_175;
              MR_Word ll_backend__proc_gen__Var_176;
              MR_Word ll_backend__proc_gen__Var_177;
              MR_Word ll_backend__proc_gen__Var_178;
              MR_Word ll_backend__proc_gen__Var_179;
              MR_Word ll_backend__proc_gen__Var_180;
              MR_Word ll_backend__proc_gen__TraceInfo_207 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTraceInfo_234, (MR_Integer) 0)));
              MR_Word ll_backend__proc_gen__TraceCallCode_208;
              MR_Word ll_backend__proc_gen__MaybeTailRecInfo_209;
              MR_Word ll_backend__proc_gen__TailRecLabelCode_212;
              MR_Word ll_backend__proc_gen__BodyCode_213;
              MR_Word ll_backend__proc_gen__EntryCode_214;
              MR_Word ll_backend__proc_gen__ExitCode_215;
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_194_216;
              MR_Word ll_backend__proc_gen___CLDAfterEvent_44;

              {
                ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CLD_0_63, &ll_backend__proc_gen__BeforeBody_38);
              }
              {
                ll_backend__proc_gen__generate_call_event_8_p_0(ll_backend__proc_gen__TraceInfo_207, ll_backend__proc_gen__ProcContext_13, ll_backend__proc_gen__MaybeTraceCallLabel_18, &ll_backend__proc_gen__TraceCallCode_208, ll_backend__proc_gen__STATE_VARIABLE_CI_0_61, &ll_backend__proc_gen__STATE_VARIABLE_CI_156_156, ll_backend__proc_gen__STATE_VARIABLE_CLD_0_63, &ll_backend__proc_gen__STATE_VARIABLE_CLD_157_157);
              }
              {
                ll_backend__trace_gen__get_trace_maybe_tail_rec_info_2_p_0(ll_backend__proc_gen__TraceInfo_207, &ll_backend__proc_gen__MaybeTailRecInfo_209);
              }
              if ((ll_backend__proc_gen__MaybeTailRecInfo_209 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  ll_backend__proc_gen__TailRecLabelCode_212 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316);
                }
              else
                {
                  MR_Word ll_backend__proc_gen__Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTailRecInfo_209, (MR_Integer) 0)));
                  MR_Word ll_backend__proc_gen__Var_159;
                  MR_Word ll_backend__proc_gen__Var_160;
                  MR_Word ll_backend__proc_gen__TailRecLabel_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_158, (MR_Integer) 1)));
                  MR_Word ll_backend__proc_gen___TailRecLval_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_158, (MR_Integer) 0)));

                  {
                    ll_backend__proc_gen__Var_160 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_160, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_160, 1) = ((MR_Box) (ll_backend__proc_gen__TailRecLabel_204));
                  }
                  {
                    ll_backend__proc_gen__Var_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_159, 0) = ((MR_Box) (ll_backend__proc_gen__Var_160));
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_159, 1) = ((MR_Box) ((MR_String) "tail recursion label"));
                  }
                  {
                    ll_backend__proc_gen__TailRecLabelCode_212 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ((MR_Box) (ll_backend__proc_gen__Var_159)));
                  }
                }
              {
                ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 1, ll_backend__proc_gen__Goal_14, &ll_backend__proc_gen__BodyCode_213, ll_backend__proc_gen__STATE_VARIABLE_CI_156_156, &ll_backend__proc_gen__STATE_VARIABLE_CI_163_163, ll_backend__proc_gen__STATE_VARIABLE_CLD_157_157, &ll_backend__proc_gen__STATE_VARIABLE_CLD_164_164);
              }
              {
                ll_backend__proc_gen__generate_entry_6_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_163_163, (MR_Integer) 1, ll_backend__proc_gen__Goal_14, ll_backend__proc_gen__ResumePoint_15, ll_backend__proc_gen__ProcFrameSlots_19, &ll_backend__proc_gen__EntryCode_214);
              }
              {
                ll_backend__proc_gen__generate_exit_9_p_0((MR_Integer) 1, *ll_backend__proc_gen__ProcFrameSlots_19, ll_backend__proc_gen__TraceSlotInfo_16, ll_backend__proc_gen__ProcContext_13, &ll_backend__proc_gen__RestoreDeallocCode_39, &ll_backend__proc_gen__ExitCode_215, ll_backend__proc_gen__STATE_VARIABLE_CI_163_163, &ll_backend__proc_gen__STATE_VARIABLE_CI_167_167, ll_backend__proc_gen__STATE_VARIABLE_CLD_164_164);
              }
              {
                ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__proc_gen__BeforeBody_38, ll_backend__proc_gen__STATE_VARIABLE_CI_167_167, &ll_backend__proc_gen__STATE_VARIABLE_CLD_168_168);
              }
              {
                ll_backend__code_loc_dep__generate_resume_point_6_p_0(ll_backend__proc_gen__ResumePoint_15, &ll_backend__proc_gen__ResumeCode_40, ll_backend__proc_gen__STATE_VARIABLE_CI_167_167, &ll_backend__proc_gen__STATE_VARIABLE_CI_169_169, ll_backend__proc_gen__STATE_VARIABLE_CLD_168_168, &ll_backend__proc_gen__STATE_VARIABLE_CLD_170_170);
              }
              {
                ll_backend__code_loc_dep__resume_point_vars_2_p_0(ll_backend__proc_gen__ResumePoint_15, &ll_backend__proc_gen__ResumeVarList_41);
              }
              {
                ll_backend__proc_gen__ResumeVars_42 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__proc_gen__ResumeVarList_41);
              }
              {
                ll_backend__code_loc_dep__set_forward_live_vars_3_p_0(ll_backend__proc_gen__ResumeVars_42, ll_backend__proc_gen__STATE_VARIABLE_CLD_170_170, &ll_backend__proc_gen__STATE_VARIABLE_CLD_194_216);
              }
              {
                ll_backend__trace_gen__generate_external_event_code_8_p_0((MR_Integer) 2, ll_backend__proc_gen__TraceInfo_207, ll_backend__proc_gen__ProcContext_13, &ll_backend__proc_gen__MaybeFailExternalInfo_43, ll_backend__proc_gen__STATE_VARIABLE_CI_169_169, ll_backend__proc_gen__STATE_VARIABLE_CI_62, ll_backend__proc_gen__STATE_VARIABLE_CLD_194_216, &ll_backend__proc_gen___CLDAfterEvent_44);
              }
              if ((ll_backend__proc_gen__MaybeFailExternalInfo_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  ll_backend__proc_gen__TraceFailCode_48 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316);
                }
              else
                {
                  MR_Word ll_backend__proc_gen__FailExternalInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeFailExternalInfo_43, (MR_Integer) 0)));
                  MR_Word ll_backend__proc_gen__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FailExternalInfo_45, (MR_Integer) 0)));
                  MR_Word ll_backend__proc_gen__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FailExternalInfo_45, (MR_Integer) 1)));

                  ll_backend__proc_gen__TraceFailCode_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FailExternalInfo_45, (MR_Integer) 2)));
                }
              {
                ll_backend__proc_gen__Var_180 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__RestoreDeallocCode_39, ll_backend__proc_gen__FailCode_37);
              }
              {
                ll_backend__proc_gen__Var_179 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__TraceFailCode_48, ll_backend__proc_gen__Var_180);
              }
              {
                ll_backend__proc_gen__Var_178 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__ResumeCode_40, ll_backend__proc_gen__Var_179);
              }
              {
                ll_backend__proc_gen__Var_177 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__ExitCode_215, ll_backend__proc_gen__Var_178);
              }
              {
                ll_backend__proc_gen__Var_176 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__BodyCode_213, ll_backend__proc_gen__Var_177);
              }
              {
                ll_backend__proc_gen__Var_175 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__TailRecLabelCode_212, ll_backend__proc_gen__Var_176);
              }
              {
                ll_backend__proc_gen__Var_174 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__TraceCallCode_208, ll_backend__proc_gen__Var_175);
              }
              {
                *ll_backend__proc_gen__Code_17 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_316_316, ll_backend__proc_gen__EntryCode_214, ll_backend__proc_gen__Var_174);
              }
            }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0_3(
  MR_Box ll_backend__proc_gen__closure_arg)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;

    {
      ll_backend__proc_gen__succeeded = ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1189__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__proc_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0_2(
  MR_Box ll_backend__proc_gen__closure_arg)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;

    {
      ll_backend__proc_gen__succeeded = ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1180__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__proc_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0_1(
  MR_Box ll_backend__proc_gen__closure_arg,
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
  MR_Box ll_backend__proc_gen__wrapper_arg_3,
  MR_Box * ll_backend__proc_gen__wrapper_arg_4)
{
  {
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;
    MR_Word ll_backend__proc_gen__conv0_STATE_VARIABLE_LiveLvals_10;

    {
      ll_backend__proc_gen__add_type_info_lvals_4_p_0(((MR_Word) ll_backend__proc_gen__wrapper_arg_1), ((MR_Word) ll_backend__proc_gen__wrapper_arg_2), ((MR_Word) ll_backend__proc_gen__wrapper_arg_3), &ll_backend__proc_gen__conv0_STATE_VARIABLE_LiveLvals_10);
    }
    *ll_backend__proc_gen__wrapper_arg_4 = ((MR_Box) (ll_backend__proc_gen__conv0_STATE_VARIABLE_LiveLvals_10));
  }
}

static void MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0(
  MR_Word ll_backend__proc_gen__CodeModel_10,
  MR_Word ll_backend__proc_gen__ProcFrameSlots_11,
  MR_Word ll_backend__proc_gen__TraceSlotInfo_12,
  MR_Word ll_backend__proc_gen__ProcContext_13,
  MR_Word * ll_backend__proc_gen__RestoreDeallocCode_14,
  MR_Word * ll_backend__proc_gen__ExitCode_15,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_0_64,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CI_65,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_0_66)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;
    MR_Word ll_backend__proc_gen__TypeCtorInfo_230_230 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    MR_Word ll_backend__proc_gen__StartComment_18;
    MR_Word ll_backend__proc_gen__EndComment_19;
    MR_Integer ll_backend__proc_gen__TotalSlots_20;
    MR_Word ll_backend__proc_gen__MaybeSuccipSlot_21;
    MR_Word ll_backend__proc_gen__InstMap_22;
    MR_Word ll_backend__proc_gen__ArgModes_23;
    MR_Word ll_backend__proc_gen__HeadVars_24;
    MR_Word ll_backend__proc_gen__Args_25;
    MR_Word ll_backend__proc_gen__OutLvals_26;
    MR_Word ll_backend__proc_gen__FlushCode_27;
    MR_Word ll_backend__proc_gen__RestoreSuccipCode_29;
    MR_Word ll_backend__proc_gen__DeallocCode_30;
    MR_Word ll_backend__proc_gen__PruneTraceTicketCode_38;
    MR_Word ll_backend__proc_gen__PruneTraceTicketCodeCopy_39;
    MR_Word ll_backend__proc_gen__RestoreDeallocCodeCopy_40;
    MR_Word ll_backend__proc_gen__MaybeTraceInfo_41;
    MR_Word ll_backend__proc_gen__TraceExitCode_48;
    MR_Word ll_backend__proc_gen__LiveLvals_49;
    MR_Word ll_backend__proc_gen__ProcInfo_50;
    MR_Word ll_backend__proc_gen__MaybeSpecialReturn_51;
    MR_Word ll_backend__proc_gen__AllSuccessCode_53;
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_75_75;
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_90_90;
    MR_Word ll_backend__proc_gen__Var_125;
    MR_Word ll_backend__proc_gen__Var_126;
    MR_Word ll_backend__proc_gen__Var_216;
    MR_Word ll_backend__proc_gen__Var_217;
    MR_Word ll_backend__proc_gen__Var_220;
    MR_Word ll_backend__proc_gen__Var_85;
    MR_Word ll_backend__proc_gen__Var_221;
    MR_Word ll_backend__proc_gen__Var_222;
    MR_Word ll_backend__proc_gen__Var_223;
    MR_Word ll_backend__proc_gen__Var_224;
    MR_Integer ll_backend__proc_gen__Var_31;

    {
      ll_backend__proc_gen__StartComment_18 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[28])));
    }
    {
      ll_backend__proc_gen__EndComment_19 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[29])));
    }
    ll_backend__proc_gen__TotalSlots_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcFrameSlots_11, (MR_Integer) 0)));
    ll_backend__proc_gen__MaybeSuccipSlot_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcFrameSlots_11, (MR_Integer) 1)));
    {
      ll_backend__code_loc_dep__get_instmap_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CLD_0_66, &ll_backend__proc_gen__InstMap_22);
    }
    {
      ll_backend__proc_gen__ArgModes_23 = ll_backend__code_info__get_arginfo_1_f_0(ll_backend__proc_gen__STATE_VARIABLE_CI_0_64);
    }
    {
      ll_backend__proc_gen__HeadVars_24 = ll_backend__code_info__get_headvars_1_f_0(ll_backend__proc_gen__STATE_VARIABLE_CI_0_64);
    }
    {
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, ll_backend__proc_gen__HeadVars_24, ll_backend__proc_gen__ArgModes_23, &ll_backend__proc_gen__Args_25);
    }
    {
      ll_backend__proc_gen__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(ll_backend__proc_gen__InstMap_22);
    }
    if (ll_backend__proc_gen__succeeded)
      {
        {
          ll_backend__proc_gen__OutLvals_26 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        }
        {
          ll_backend__proc_gen__FlushCode_27 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230);
        }
        ll_backend__proc_gen__STATE_VARIABLE_CLD_75_75 = ll_backend__proc_gen__STATE_VARIABLE_CLD_0_66;
      }
    else
      {
        ll_backend__code_loc_dep__setup_return_6_p_0(ll_backend__proc_gen__Args_25, &ll_backend__proc_gen__OutLvals_26, &ll_backend__proc_gen__FlushCode_27, ll_backend__proc_gen__STATE_VARIABLE_CI_0_64, ll_backend__proc_gen__STATE_VARIABLE_CLD_0_66, &ll_backend__proc_gen__STATE_VARIABLE_CLD_75_75);
      }
    if ((ll_backend__proc_gen__MaybeSuccipSlot_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ll_backend__proc_gen__RestoreSuccipCode_29 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230);
      }
    else
      {
        MR_Integer ll_backend__proc_gen__SuccipSlot_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeSuccipSlot_21, (MR_Integer) 0)));
        MR_Word ll_backend__proc_gen__Var_76;
        MR_Word ll_backend__proc_gen__Var_77;
        MR_Word ll_backend__proc_gen__Var_79;
        MR_Word ll_backend__proc_gen__Var_80;

        {
          ll_backend__proc_gen__Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_80, 1) = ((MR_Box) (ll_backend__proc_gen__SuccipSlot_28));
        }
        {
          ll_backend__proc_gen__Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_79, 0) = ((MR_Box) (ll_backend__proc_gen__Var_80));
        }
        {
          ll_backend__proc_gen__Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_77, 2) = ((MR_Box) (ll_backend__proc_gen__Var_79));
        }
        {
          ll_backend__proc_gen__Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_76, 0) = ((MR_Box) (ll_backend__proc_gen__Var_77));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_76, 1) = ((MR_Box) ((MR_String) "restore the success ip"));
        }
        {
          ll_backend__proc_gen__RestoreSuccipCode_29 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ((MR_Box) (ll_backend__proc_gen__Var_76)));
        }
      }
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__TotalSlots_20 == (MR_Integer) 0);
    if (!(ll_backend__proc_gen__succeeded))
      ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CodeModel_10 == (MR_Integer) 2);
    if (ll_backend__proc_gen__succeeded)
      {
        ll_backend__proc_gen__DeallocCode_30 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230);
      }
    else
      {
        MR_Word ll_backend__proc_gen__Var_82;
        MR_Word ll_backend__proc_gen__Var_83;

        {
          ll_backend__proc_gen__Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 25));
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_83, 1) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_20));
        }
        {
          ll_backend__proc_gen__Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_82, 0) = ((MR_Box) (ll_backend__proc_gen__Var_83));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_82, 1) = ((MR_Box) ((MR_String) "Deallocate stack frame"));
        }
        {
          ll_backend__proc_gen__DeallocCode_30 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ((MR_Box) (ll_backend__proc_gen__Var_82)));
        }
      }
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CodeModel_10 == (MR_Integer) 2);
    ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
    if (ll_backend__proc_gen__succeeded)
      {
        ll_backend__proc_gen__Var_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_12, (MR_Integer) 0)));
        ll_backend__proc_gen__Var_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_12, (MR_Integer) 1)));
        ll_backend__proc_gen__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_12, (MR_Integer) 2)));
        ll_backend__proc_gen__Var_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_12, (MR_Integer) 3)));
        ll_backend__proc_gen__Var_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_12, (MR_Integer) 4)));
        ll_backend__proc_gen__Var_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_12, (MR_Integer) 5)));
        ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__Var_85)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__proc_gen__succeeded)
          ll_backend__proc_gen__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_85, (MR_Integer) 0)));
      }
    if (ll_backend__proc_gen__succeeded)
      if ((ll_backend__proc_gen__Var_220 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            ll_backend__proc_gen__PruneTraceTicketCode_38 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[30])));
          }
          ll_backend__proc_gen__PruneTraceTicketCodeCopy_39 = ll_backend__proc_gen__PruneTraceTicketCode_38;
          ll_backend__proc_gen__STATE_VARIABLE_CI_90_90 = ll_backend__proc_gen__STATE_VARIABLE_CI_0_64;
        }
      else
        {
          MR_Integer ll_backend__proc_gen__FromFullSlot_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_220, (MR_Integer) 0)));
          MR_Word ll_backend__proc_gen__StackId_34;
          MR_Word ll_backend__proc_gen__FromFullSlotLval_35;
          MR_Word ll_backend__proc_gen__SkipLabel_36;
          MR_Word ll_backend__proc_gen__SkipLabelCopy_37;
          MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_89_89;
          MR_Word ll_backend__proc_gen__Var_91;
          MR_Word ll_backend__proc_gen__Var_92;
          MR_Word ll_backend__proc_gen__Var_93;
          MR_Word ll_backend__proc_gen__Var_94;
          MR_Word ll_backend__proc_gen__Var_96;
          MR_Word ll_backend__proc_gen__Var_97;
          MR_Word ll_backend__proc_gen__Var_99;
          MR_Word ll_backend__proc_gen__Var_100;
          MR_Word ll_backend__proc_gen__Var_103;
          MR_Word ll_backend__proc_gen__Var_104;
          MR_Word ll_backend__proc_gen__Var_105;
          MR_Word ll_backend__proc_gen__Var_108;
          MR_Word ll_backend__proc_gen__Var_109;
          MR_Word ll_backend__proc_gen__Var_110;
          MR_Word ll_backend__proc_gen__Var_114;
          MR_Word ll_backend__proc_gen__Var_116;
          MR_Word ll_backend__proc_gen__Var_120;
          MR_Word ll_backend__proc_gen__Var_121;
          MR_Word ll_backend__proc_gen__Var_122;

          {
            ll_backend__proc_gen__StackId_34 = ll_backend__llds__code_model_to_main_stack_1_f_0(ll_backend__proc_gen__CodeModel_10);
          }
          {
            ll_backend__proc_gen__FromFullSlotLval_35 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__proc_gen__StackId_34, ll_backend__proc_gen__FromFullSlot_33);
          }
          {
            ll_backend__code_info__get_next_label_3_p_0(&ll_backend__proc_gen__SkipLabel_36, ll_backend__proc_gen__STATE_VARIABLE_CI_0_64, &ll_backend__proc_gen__STATE_VARIABLE_CI_89_89);
          }
          {
            ll_backend__code_info__get_next_label_3_p_0(&ll_backend__proc_gen__SkipLabelCopy_37, ll_backend__proc_gen__STATE_VARIABLE_CI_89_89, &ll_backend__proc_gen__STATE_VARIABLE_CI_90_90);
          }
          {
            ll_backend__proc_gen__Var_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_96, 0) = ((MR_Box) (ll_backend__proc_gen__FromFullSlotLval_35));
          }
          {
            ll_backend__proc_gen__Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_94, 2) = ((MR_Box) (ll_backend__proc_gen__Var_96));
          }
          {
            ll_backend__proc_gen__Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_97, 0) = ((MR_Box) (ll_backend__proc_gen__SkipLabel_36));
          }
          {
            ll_backend__proc_gen__Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_93, 1) = ((MR_Box) (ll_backend__proc_gen__Var_94));
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_93, 2) = ((MR_Box) (ll_backend__proc_gen__Var_97));
          }
          {
            ll_backend__proc_gen__Var_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_92, 0) = ((MR_Box) (ll_backend__proc_gen__Var_93));
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_92, 1) = ((MR_Box) ((MR_String) ""));
          }
          ll_backend__proc_gen__Var_100 = (MR_Word) &ll_backend__proc_gen_scalar_common_1[30];
          {
            ll_backend__proc_gen__Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_105, 1) = ((MR_Box) (ll_backend__proc_gen__SkipLabel_36));
          }
          {
            ll_backend__proc_gen__Var_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_104, 0) = ((MR_Box) (ll_backend__proc_gen__Var_105));
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_104, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            ll_backend__proc_gen__Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_103, 0) = ((MR_Box) (ll_backend__proc_gen__Var_104));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__proc_gen__Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_99, 0) = ((MR_Box) (ll_backend__proc_gen__Var_100));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_99, 1) = ((MR_Box) (ll_backend__proc_gen__Var_103));
          }
          {
            ll_backend__proc_gen__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_91, 0) = ((MR_Box) (ll_backend__proc_gen__Var_92));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_91, 1) = ((MR_Box) (ll_backend__proc_gen__Var_99));
          }
          {
            ll_backend__proc_gen__PruneTraceTicketCode_38 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__Var_91);
          }
          {
            ll_backend__proc_gen__Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_114, 0) = ((MR_Box) (ll_backend__proc_gen__SkipLabelCopy_37));
          }
          {
            ll_backend__proc_gen__Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_110, 1) = ((MR_Box) (ll_backend__proc_gen__Var_94));
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_110, 2) = ((MR_Box) (ll_backend__proc_gen__Var_114));
          }
          {
            ll_backend__proc_gen__Var_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_109, 0) = ((MR_Box) (ll_backend__proc_gen__Var_110));
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_109, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            ll_backend__proc_gen__Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_122, 1) = ((MR_Box) (ll_backend__proc_gen__SkipLabelCopy_37));
          }
          {
            ll_backend__proc_gen__Var_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_121, 0) = ((MR_Box) (ll_backend__proc_gen__Var_122));
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_121, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            ll_backend__proc_gen__Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_120, 0) = ((MR_Box) (ll_backend__proc_gen__Var_121));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__proc_gen__Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_116, 0) = ((MR_Box) (ll_backend__proc_gen__Var_100));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_116, 1) = ((MR_Box) (ll_backend__proc_gen__Var_120));
          }
          {
            ll_backend__proc_gen__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_108, 0) = ((MR_Box) (ll_backend__proc_gen__Var_109));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_108, 1) = ((MR_Box) (ll_backend__proc_gen__Var_116));
          }
          {
            ll_backend__proc_gen__PruneTraceTicketCodeCopy_39 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__Var_108);
          }
        }
    else
      {
        {
          ll_backend__proc_gen__PruneTraceTicketCode_38 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230);
        }
        {
          ll_backend__proc_gen__PruneTraceTicketCodeCopy_39 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230);
        }
        ll_backend__proc_gen__STATE_VARIABLE_CI_90_90 = ll_backend__proc_gen__STATE_VARIABLE_CI_0_64;
      }
    {
      ll_backend__proc_gen__Var_125 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__PruneTraceTicketCode_38, ll_backend__proc_gen__DeallocCode_30);
    }
    {
      *ll_backend__proc_gen__RestoreDeallocCode_14 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__RestoreSuccipCode_29, ll_backend__proc_gen__Var_125);
    }
    {
      ll_backend__proc_gen__Var_126 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__PruneTraceTicketCodeCopy_39, ll_backend__proc_gen__DeallocCode_30);
    }
    {
      ll_backend__proc_gen__RestoreDeallocCodeCopy_40 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__RestoreSuccipCode_29, ll_backend__proc_gen__Var_126);
    }
    {
      ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_90_90, &ll_backend__proc_gen__MaybeTraceInfo_41);
    }
    if ((ll_backend__proc_gen__MaybeTraceInfo_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          ll_backend__proc_gen__TraceExitCode_48 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230);
        }
        ll_backend__proc_gen__LiveLvals_49 = ll_backend__proc_gen__OutLvals_26;
        *ll_backend__proc_gen__STATE_VARIABLE_CI_65 = ll_backend__proc_gen__STATE_VARIABLE_CI_90_90;
      }
    else
      {
        MR_Word ll_backend__proc_gen__TraceInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTraceInfo_41, (MR_Integer) 0)));
        MR_Word ll_backend__proc_gen__MaybeExitExternalInfo_43;
        MR_Word ll_backend__proc_gen___CLDAfterExit_44;

        {
          ll_backend__trace_gen__generate_external_event_code_8_p_0((MR_Integer) 1, ll_backend__proc_gen__TraceInfo_42, ll_backend__proc_gen__ProcContext_13, &ll_backend__proc_gen__MaybeExitExternalInfo_43, ll_backend__proc_gen__STATE_VARIABLE_CI_90_90, ll_backend__proc_gen__STATE_VARIABLE_CI_65, ll_backend__proc_gen__STATE_VARIABLE_CLD_75_75, &ll_backend__proc_gen___CLDAfterExit_44);
        }
        if ((ll_backend__proc_gen__MaybeExitExternalInfo_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            ll_backend__proc_gen__LiveLvals_49 = ll_backend__proc_gen__OutLvals_26;
            {
              ll_backend__proc_gen__TraceExitCode_48 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230);
            }
          }
        else
          {
            MR_Word ll_backend__proc_gen__ExitExternalInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeExitExternalInfo_43, (MR_Integer) 0)));
            MR_Word ll_backend__proc_gen__TypeInfoDatas_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ExitExternalInfo_45, (MR_Integer) 1)));
            MR_Word ll_backend__proc_gen__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ExitExternalInfo_45, (MR_Integer) 0)));
            MR_Box ll_backend__proc_gen__conv1_LiveLvals_49;

            ll_backend__proc_gen__TraceExitCode_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ExitExternalInfo_45, (MR_Integer) 2)));
            {
              mercury__map__foldl_4_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[4], (MR_Word) &ll_backend__proc_gen_scalar_common_1[5], (MR_Word) &ll_backend__proc_gen_scalar_common_1[6], (MR_Word) &ll_backend__proc_gen_scalar_common_2[4], ll_backend__proc_gen__TypeInfoDatas_47, ((MR_Box) (ll_backend__proc_gen__OutLvals_26)), &ll_backend__proc_gen__conv1_LiveLvals_49);
            }
            ll_backend__proc_gen__LiveLvals_49 = ((MR_Word) ll_backend__proc_gen__conv1_LiveLvals_49);
          }
      }
    {
      ll_backend__code_info__get_proc_info_2_p_0(*ll_backend__proc_gen__STATE_VARIABLE_CI_65, &ll_backend__proc_gen__ProcInfo_50);
    }
    {
      hlds__hlds_pred__proc_info_get_maybe_special_return_2_p_0(ll_backend__proc_gen__ProcInfo_50, &ll_backend__proc_gen__MaybeSpecialReturn_51);
    }
    switch (ll_backend__proc_gen__CodeModel_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__proc_gen__SuccessCode_52;
          MR_Word ll_backend__proc_gen__Var_200;
          MR_Word ll_backend__proc_gen__Var_205;
          MR_Word ll_backend__proc_gen__Var_206;
          MR_Word ll_backend__proc_gen__Var_207;
          MR_Word ll_backend__proc_gen__Var_215;

          {
            ll_backend__proc_gen__Var_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_200, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_8[0]));
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_200, 1) = ((MR_Box) (ll_backend__proc_gen__generate_exit_9_p_0_2));
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_200, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_200, 3) = ((MR_Box) (ll_backend__proc_gen__MaybeSpecialReturn_51));
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_200, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            mercury__require__expect_4_p_0(ll_backend__proc_gen__Var_200, (MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.generate_exit\'/9", (MR_String) "det special_return");
          }
          {
            ll_backend__proc_gen__Var_207 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ll_backend__proc_gen__Var_207, 0) = ((MR_Box) (ll_backend__proc_gen__LiveLvals_49));
          }
          {
            ll_backend__proc_gen__Var_206 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_206, 0) = ((MR_Box) (ll_backend__proc_gen__Var_207));
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_206, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            ll_backend__proc_gen__Var_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_205, 0) = ((MR_Box) (ll_backend__proc_gen__Var_206));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[14])));
          }
          {
            ll_backend__proc_gen__SuccessCode_52 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__Var_205);
          }
          {
            ll_backend__proc_gen__Var_215 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__RestoreDeallocCodeCopy_40, ll_backend__proc_gen__SuccessCode_52);
          }
          {
            ll_backend__proc_gen__AllSuccessCode_53 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__TraceExitCode_48, ll_backend__proc_gen__Var_215);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__proc_gen__SetupRedoCode_56;
          MR_Word ll_backend__proc_gen__Var_171;
          MR_Word ll_backend__proc_gen__SuccessCode_219;

          if ((ll_backend__proc_gen__MaybeTraceInfo_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              ll_backend__proc_gen__SetupRedoCode_56 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230);
            }
          else
            {
              MR_Word ll_backend__proc_gen__TraceInfo2_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTraceInfo_41, (MR_Integer) 0)));

              {
                ll_backend__trace_gen__maybe_setup_redo_event_2_p_0(ll_backend__proc_gen__TraceInfo2_55, &ll_backend__proc_gen__SetupRedoCode_56);
              }
            }
          if ((ll_backend__proc_gen__MaybeSpecialReturn_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word ll_backend__proc_gen__Var_130;
              MR_Word ll_backend__proc_gen__Var_131;
              MR_Word ll_backend__proc_gen__Var_132;

              {
                ll_backend__proc_gen__Var_132 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ll_backend__proc_gen__Var_132, 0) = ((MR_Box) (ll_backend__proc_gen__LiveLvals_49));
              }
              {
                ll_backend__proc_gen__Var_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_131, 0) = ((MR_Box) (ll_backend__proc_gen__Var_132));
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_131, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ll_backend__proc_gen__Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_130, 0) = ((MR_Box) (ll_backend__proc_gen__Var_131));
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[18])));
              }
              {
                ll_backend__proc_gen__SuccessCode_219 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__Var_130);
              }
            }
          else
            {
              MR_Word ll_backend__proc_gen__SpecialReturn_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeSpecialReturn_51, (MR_Integer) 0)));
              MR_String ll_backend__proc_gen__GeneratorLocnStr_58 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__SpecialReturn_57, (MR_Integer) 0)));
              MR_String ll_backend__proc_gen__DebugStr_59 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__SpecialReturn_57, (MR_Integer) 1)));
              MR_String ll_backend__proc_gen__ReturnCodeStr_61;
              MR_Word ll_backend__proc_gen__Component_62;
              MR_String ll_backend__proc_gen__Var_142;
              MR_String ll_backend__proc_gen__Var_143;
              MR_String ll_backend__proc_gen__Var_145;
              MR_String ll_backend__proc_gen__Var_146;
              MR_String ll_backend__proc_gen__Var_148;
              MR_Word ll_backend__proc_gen__Var_152;
              MR_Word ll_backend__proc_gen__Var_153;
              MR_Word ll_backend__proc_gen__Var_154;
              MR_Word ll_backend__proc_gen__Var_156;
              MR_Word ll_backend__proc_gen__Var_157;
              MR_Word ll_backend__proc_gen__Var_158;
              MR_Word ll_backend__proc_gen__Var_160;

              {
                ll_backend__proc_gen__Var_148 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__GeneratorLocnStr_58, (MR_String) ");\n");
              }
              {
                ll_backend__proc_gen__Var_146 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__proc_gen__Var_148);
              }
              {
                ll_backend__proc_gen__Var_145 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__DebugStr_59, ll_backend__proc_gen__Var_146);
              }
              {
                ll_backend__proc_gen__Var_143 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__proc_gen__Var_145);
              }
              {
                ll_backend__proc_gen__Var_142 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_mmos_return_answer", ll_backend__proc_gen__Var_143);
              }
              {
                ll_backend__proc_gen__ReturnCodeStr_61 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ll_backend__proc_gen__Var_142);
              }
              {
                ll_backend__proc_gen__Component_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Component_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Component_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Component_62, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Component_62, 3) = ((MR_Box) (ll_backend__proc_gen__ReturnCodeStr_61));
              }
              {
                ll_backend__proc_gen__Var_154 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ll_backend__proc_gen__Var_154, 0) = ((MR_Box) (ll_backend__proc_gen__LiveLvals_49));
              }
              {
                ll_backend__proc_gen__Var_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_153, 0) = ((MR_Box) (ll_backend__proc_gen__Var_154));
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_153, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ll_backend__proc_gen__Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_160, 0) = ((MR_Box) (ll_backend__proc_gen__Component_62));
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_160, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__proc_gen__Var_158 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_158, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_158, 2) = ((MR_Box) (ll_backend__proc_gen__Var_160));
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_158, 3) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_158, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_158, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_158, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_158, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_158, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_158, 9) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_158, 10) = ((MR_Box) ((MR_Integer) 1));
              }
              {
                ll_backend__proc_gen__Var_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_157, 0) = ((MR_Box) (ll_backend__proc_gen__Var_158));
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_157, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ll_backend__proc_gen__Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_156, 0) = ((MR_Box) (ll_backend__proc_gen__Var_157));
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__proc_gen__Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_152, 0) = ((MR_Box) (ll_backend__proc_gen__Var_153));
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_152, 1) = ((MR_Box) (ll_backend__proc_gen__Var_156));
              }
              {
                ll_backend__proc_gen__SuccessCode_219 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__Var_152);
              }
            }
          {
            ll_backend__proc_gen__Var_171 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__TraceExitCode_48, ll_backend__proc_gen__SuccessCode_219);
          }
          {
            ll_backend__proc_gen__AllSuccessCode_53 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__SetupRedoCode_56, ll_backend__proc_gen__Var_171);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__proc_gen__SuccessLiveRegs_54;
          MR_Word ll_backend__proc_gen__Var_172;
          MR_Word ll_backend__proc_gen__Var_180;
          MR_Word ll_backend__proc_gen__Var_189;
          MR_Word ll_backend__proc_gen__Var_190;
          MR_Word ll_backend__proc_gen__Var_191;
          MR_Word ll_backend__proc_gen__Var_199;
          MR_Word ll_backend__proc_gen__SuccessCode_218;

          {
            ll_backend__proc_gen__Var_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_172, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_8[0]));
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_172, 1) = ((MR_Box) (ll_backend__proc_gen__generate_exit_9_p_0_3));
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_172, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_172, 3) = ((MR_Box) (ll_backend__proc_gen__MaybeSpecialReturn_51));
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_172, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            mercury__require__expect_4_p_0(ll_backend__proc_gen__Var_172, (MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.generate_exit\'/9", (MR_String) "semi special_return");
          }
          {
            mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[10]))), ll_backend__proc_gen__LiveLvals_49, &ll_backend__proc_gen__SuccessLiveRegs_54);
          }
          {
            ll_backend__proc_gen__Var_191 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ll_backend__proc_gen__Var_191, 0) = ((MR_Box) (ll_backend__proc_gen__SuccessLiveRegs_54));
          }
          {
            ll_backend__proc_gen__Var_190 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_190, 0) = ((MR_Box) (ll_backend__proc_gen__Var_191));
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_190, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            ll_backend__proc_gen__Var_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_189, 0) = ((MR_Box) (ll_backend__proc_gen__Var_190));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_189, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[14])));
          }
          {
            ll_backend__proc_gen__Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_180, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[20]));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_180, 1) = ((MR_Box) (ll_backend__proc_gen__Var_189));
          }
          {
            ll_backend__proc_gen__SuccessCode_218 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__Var_180);
          }
          {
            ll_backend__proc_gen__Var_199 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__RestoreDeallocCodeCopy_40, ll_backend__proc_gen__SuccessCode_218);
          }
          {
            ll_backend__proc_gen__AllSuccessCode_53 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__TraceExitCode_48, ll_backend__proc_gen__Var_199);
          }
        }
        break;
    }
    {
      ll_backend__proc_gen__Var_217 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__AllSuccessCode_53, ll_backend__proc_gen__EndComment_19);
    }
    {
      ll_backend__proc_gen__Var_216 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__FlushCode_27, ll_backend__proc_gen__Var_217);
    }
    {
      *ll_backend__proc_gen__ExitCode_15 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_230_230, ll_backend__proc_gen__StartComment_18, ll_backend__proc_gen__Var_216);
    }
  }
}

static void MR_CALL 
ll_backend__proc_gen__generate_entry_6_p_0(
  MR_Word ll_backend__proc_gen__CI_7,
  MR_Word ll_backend__proc_gen__CodeModel_8,
  MR_Word ll_backend__proc_gen__Goal_9,
  MR_Word ll_backend__proc_gen__OutsideResumePoint_10,
  MR_Word * ll_backend__proc_gen__ProcFrameSlots_11,
  MR_Word * ll_backend__proc_gen__EntryCode_12)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;
    MR_Word ll_backend__proc_gen__TypeCtorInfo_76_76;
    MR_Word ll_backend__proc_gen__StackSlots_13;
    MR_Word ll_backend__proc_gen__VarSet_14;
    MR_String ll_backend__proc_gen__SlotsComment_15;
    MR_Word ll_backend__proc_gen__StartComment_16;
    MR_Integer ll_backend__proc_gen__MainSlots_17;
    MR_Word ll_backend__proc_gen__PredId_18;
    MR_Integer ll_backend__proc_gen__ProcId_19;
    MR_Word ll_backend__proc_gen__ModuleInfo_20;
    MR_Word ll_backend__proc_gen__EntryLabel_21;
    MR_Word ll_backend__proc_gen__LabelCode_22;
    MR_Word ll_backend__proc_gen__Used_23;
    MR_Word ll_backend__proc_gen__SaveSuccipCode_25;
    MR_Integer ll_backend__proc_gen__TotalSlots_26;
    MR_Word ll_backend__proc_gen__MaybeSuccipSlot_27;
    MR_Word ll_backend__proc_gen__MaybeTraceInfo_28;
    MR_Word ll_backend__proc_gen__TraceFillCode_30;
    MR_String ll_backend__proc_gen__PushMsg_31;
    MR_Word ll_backend__proc_gen__AllocCode_34;
    MR_Word ll_backend__proc_gen__EndComment_37;
    MR_Word ll_backend__proc_gen__Var_38;
    MR_Word ll_backend__proc_gen__Var_43;
    MR_Word ll_backend__proc_gen__Var_44;
    MR_Word ll_backend__proc_gen__Var_45;
    MR_Word ll_backend__proc_gen__Var_49;
    MR_Word ll_backend__proc_gen__Var_50;
    MR_Word ll_backend__proc_gen__Var_72;
    MR_Word ll_backend__proc_gen__Var_73;
    MR_Word ll_backend__proc_gen__Var_74;
    MR_Word ll_backend__proc_gen__Var_75;

    {
      ll_backend__code_info__get_stack_slots_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__StackSlots_13);
    }
    {
      ll_backend__code_info__get_varset_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__VarSet_14);
    }
    {
      ll_backend__proc_gen__SlotsComment_15 = hlds__hlds_llds__explain_stack_slots_2_f_0(ll_backend__proc_gen__StackSlots_13, ll_backend__proc_gen__VarSet_14);
    }
    ll_backend__proc_gen__TypeCtorInfo_76_76 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__proc_gen__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_45, 0) = ((MR_Box) (ll_backend__proc_gen__SlotsComment_15));
    }
    {
      ll_backend__proc_gen__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_44, 0) = ((MR_Box) (ll_backend__proc_gen__Var_45));
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_44, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      ll_backend__proc_gen__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_43, 0) = ((MR_Box) (ll_backend__proc_gen__Var_44));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__proc_gen__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_38, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[26]));
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_38, 1) = ((MR_Box) (ll_backend__proc_gen__Var_43));
    }
    {
      ll_backend__proc_gen__StartComment_16 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76, ll_backend__proc_gen__Var_38);
    }
    {
      ll_backend__code_info__get_total_stackslot_count_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__MainSlots_17);
    }
    {
      ll_backend__code_info__get_pred_id_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__PredId_18);
    }
    {
      ll_backend__code_info__get_proc_id_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__ProcId_19);
    }
    {
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__ModuleInfo_20);
    }
    {
      ll_backend__proc_gen__EntryLabel_21 = ll_backend__code_util__make_local_entry_label_4_f_0(ll_backend__proc_gen__ModuleInfo_20, ll_backend__proc_gen__PredId_18, ll_backend__proc_gen__ProcId_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    {
      ll_backend__proc_gen__Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_50, 1) = ((MR_Box) (ll_backend__proc_gen__EntryLabel_21));
    }
    {
      ll_backend__proc_gen__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_49, 0) = ((MR_Box) (ll_backend__proc_gen__Var_50));
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_49, 1) = ((MR_Box) ((MR_String) "Procedure entry point"));
    }
    {
      ll_backend__proc_gen__LabelCode_22 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76, ((MR_Box) (ll_backend__proc_gen__Var_49)));
    }
    {
      ll_backend__code_info__get_succip_used_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__Used_23);
    }
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__Used_23 == (MR_Integer) 1);
    if (ll_backend__proc_gen__succeeded)
      {
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CodeModel_8 == (MR_Integer) 2);
        ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
      }
    if (ll_backend__proc_gen__succeeded)
      {
        MR_Integer ll_backend__proc_gen__Var_52 = (ll_backend__proc_gen__MainSlots_17 + (MR_Integer) 1);
        MR_Word ll_backend__proc_gen__Var_54;
        MR_Word ll_backend__proc_gen__Var_55;
        MR_Word ll_backend__proc_gen__Var_56;

        switch (ll_backend__proc_gen__CodeModel_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              ll_backend__proc_gen__TotalSlots_26 = ll_backend__code_info__round_det_stack_frame_size_2_f_0(ll_backend__proc_gen__CI_7, ll_backend__proc_gen__Var_52);
            }
            break;
          case (MR_Integer) 2:
            ll_backend__proc_gen__TotalSlots_26 = ll_backend__proc_gen__Var_52;
            break;
        }
        {
          ll_backend__proc_gen__Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_56, 1) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_26));
        }
        {
          ll_backend__proc_gen__Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_55, 1) = ((MR_Box) (ll_backend__proc_gen__Var_56));
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_55, 2) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_6[1]));
        }
        {
          ll_backend__proc_gen__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_54, 0) = ((MR_Box) (ll_backend__proc_gen__Var_55));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_54, 1) = ((MR_Box) ((MR_String) "Save the success ip"));
        }
        {
          ll_backend__proc_gen__SaveSuccipCode_25 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76, ((MR_Box) (ll_backend__proc_gen__Var_54)));
        }
        {
          ll_backend__proc_gen__MaybeSuccipSlot_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeSuccipSlot_27, 0) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_26));
        }
      }
    else
      {
        {
          ll_backend__proc_gen__SaveSuccipCode_25 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76);
        }
        switch (ll_backend__proc_gen__CodeModel_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              ll_backend__proc_gen__TotalSlots_26 = ll_backend__code_info__round_det_stack_frame_size_2_f_0(ll_backend__proc_gen__CI_7, ll_backend__proc_gen__MainSlots_17);
            }
            break;
          case (MR_Integer) 2:
            ll_backend__proc_gen__TotalSlots_26 = ll_backend__proc_gen__MainSlots_17;
            break;
        }
        ll_backend__proc_gen__MaybeSuccipSlot_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    {
      ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__MaybeTraceInfo_28);
    }
    if ((ll_backend__proc_gen__MaybeTraceInfo_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ll_backend__proc_gen__TraceFillCode_30 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76);
      }
    else
      {
        MR_Word ll_backend__proc_gen__TraceInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTraceInfo_28, (MR_Integer) 0)));

        {
          ll_backend__trace_gen__generate_slot_fill_code_3_p_0(ll_backend__proc_gen__CI_7, ll_backend__proc_gen__TraceInfo_29, &ll_backend__proc_gen__TraceFillCode_30);
        }
      }
    {
      ll_backend__proc_gen__PushMsg_31 = ll_backend__proc_gen__push_msg_3_f_0(ll_backend__proc_gen__ModuleInfo_20, ll_backend__proc_gen__PredId_18, ll_backend__proc_gen__ProcId_19);
    }
    switch (ll_backend__proc_gen__CodeModel_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__proc_gen__IsLeaf_35;
          MR_Word ll_backend__proc_gen__StackIncrKind_36;

          {
            ll_backend__proc_gen__IsLeaf_35 = hlds__goal_util__proc_body_is_leaf_1_f_0(ll_backend__proc_gen__Goal_9);
          }
          switch (ll_backend__proc_gen__IsLeaf_35) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ll_backend__proc_gen__StackIncrKind_36 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              ll_backend__proc_gen__StackIncrKind_36 = (MR_Integer) 1;
              break;
          }
          ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__TotalSlots_26 > (MR_Integer) 0);
          if (ll_backend__proc_gen__succeeded)
            {
              MR_Word ll_backend__proc_gen__Var_61;
              MR_Word ll_backend__proc_gen__Var_62;

              {
                ll_backend__proc_gen__Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 24));
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_62, 1) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_26));
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_62, 2) = ((MR_Box) (ll_backend__proc_gen__PushMsg_31));
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_62, 3) = ((MR_Box) (ll_backend__proc_gen__StackIncrKind_36));
              }
              {
                ll_backend__proc_gen__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_61, 0) = ((MR_Box) (ll_backend__proc_gen__Var_62));
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_61, 1) = ((MR_Box) ((MR_String) "Allocate stack frame"));
              }
              {
                ll_backend__proc_gen__AllocCode_34 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76, ((MR_Box) (ll_backend__proc_gen__Var_61)));
              }
            }
          else
            {
              ll_backend__proc_gen__AllocCode_34 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76);
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__proc_gen__OutsideResumeAddress_32;
          MR_Word ll_backend__proc_gen__NondetFrameInfo_33;
          MR_Word ll_backend__proc_gen__Var_64;
          MR_Word ll_backend__proc_gen__Var_65;
          MR_Word ll_backend__proc_gen__Var_66;

          {
            ll_backend__code_loc_dep__resume_point_stack_addr_2_p_0(ll_backend__proc_gen__OutsideResumePoint_10, &ll_backend__proc_gen__OutsideResumeAddress_32);
          }
          {
            ll_backend__proc_gen__NondetFrameInfo_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__NondetFrameInfo_33, 0) = ((MR_Box) (ll_backend__proc_gen__PushMsg_31));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__NondetFrameInfo_33, 1) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_26));
          }
          {
            ll_backend__proc_gen__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_66, 0) = ((MR_Box) (ll_backend__proc_gen__OutsideResumeAddress_32));
          }
          {
            ll_backend__proc_gen__Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_65, 1) = ((MR_Box) (ll_backend__proc_gen__NondetFrameInfo_33));
            MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Var_65, 2) = ((MR_Box) (ll_backend__proc_gen__Var_66));
          }
          {
            ll_backend__proc_gen__Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_64, 0) = ((MR_Box) (ll_backend__proc_gen__Var_65));
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_64, 1) = ((MR_Box) ((MR_String) "Allocate stack frame"));
          }
          {
            ll_backend__proc_gen__AllocCode_34 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76, ((MR_Box) (ll_backend__proc_gen__Var_64)));
          }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__proc_gen__ProcFrameSlots_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_26));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__proc_gen__MaybeSuccipSlot_27));
    }
    {
      ll_backend__proc_gen__EndComment_37 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76, ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[27])));
    }
    {
      ll_backend__proc_gen__Var_75 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76, ll_backend__proc_gen__TraceFillCode_30, ll_backend__proc_gen__EndComment_37);
    }
    {
      ll_backend__proc_gen__Var_74 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76, ll_backend__proc_gen__SaveSuccipCode_25, ll_backend__proc_gen__Var_75);
    }
    {
      ll_backend__proc_gen__Var_73 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76, ll_backend__proc_gen__AllocCode_34, ll_backend__proc_gen__Var_74);
    }
    {
      ll_backend__proc_gen__Var_72 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76, ll_backend__proc_gen__LabelCode_22, ll_backend__proc_gen__Var_73);
    }
    {
      *ll_backend__proc_gen__EntryCode_12 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_76_76, ll_backend__proc_gen__StartComment_16, ll_backend__proc_gen__Var_72);
    }
  }
}

MR_String MR_CALL 
ll_backend__proc_gen__push_msg_3_f_0(
  MR_Word ll_backend__proc_gen__ModuleInfo_5,
  MR_Word ll_backend__proc_gen__PredId_6,
  MR_Integer ll_backend__proc_gen__ProcId_7)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;
    MR_String ll_backend__proc_gen__PushMsg_8;
    MR_Word ll_backend__proc_gen__PredInfo_9;
    MR_Word ll_backend__proc_gen__PredOrFunc_10;
    MR_Word ll_backend__proc_gen__ModuleName_11;
    MR_String ll_backend__proc_gen__PredName_12;
    MR_Integer ll_backend__proc_gen__Arity_13;
    MR_Word ll_backend__proc_gen__Origin_14;
    MR_String ll_backend__proc_gen__FullPredName_19;
    MR_String ll_backend__proc_gen__Var_22;
    MR_String ll_backend__proc_gen__Var_23;
    MR_String ll_backend__proc_gen__Var_25;
    MR_String ll_backend__proc_gen__Var_26;
    MR_String ll_backend__proc_gen__Var_27;
    MR_String ll_backend__proc_gen__Var_29;
    MR_String ll_backend__proc_gen__Var_30;
    MR_String ll_backend__proc_gen__Var_32;
    MR_String ll_backend__proc_gen__Var_33;
    MR_String ll_backend__proc_gen__Var_34;
    MR_String ll_backend__proc_gen__Var_36;
    MR_Integer ll_backend__proc_gen__Var_37;
    MR_Word ll_backend__proc_gen__SpecialId_15;
    MR_Word ll_backend__proc_gen__TypeCtor_16;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__proc_gen__ModuleInfo_5, ll_backend__proc_gen__PredId_6, &ll_backend__proc_gen__PredInfo_9);
    }
    {
      ll_backend__proc_gen__PredOrFunc_10 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
    {
      ll_backend__proc_gen__ModuleName_11 = hlds__hlds_pred__pred_info_module_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
    {
      ll_backend__proc_gen__PredName_12 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
    {
      ll_backend__proc_gen__Arity_13 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
    {
      hlds__hlds_pred__pred_info_get_origin_2_p_0(ll_backend__proc_gen__PredInfo_9, &ll_backend__proc_gen__Origin_14);
    }
    ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__Origin_14)) == (MR_mktag((MR_Integer) 0)));
    if (ll_backend__proc_gen__succeeded)
      {
        ll_backend__proc_gen__SpecialId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Origin_14, (MR_Integer) 0)));
        ll_backend__proc_gen__TypeCtor_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Origin_14, (MR_Integer) 1)));
        {
          MR_String ll_backend__proc_gen__TypeName_17;
          MR_String ll_backend__proc_gen__SpecialPredName_18;
          MR_String ll_backend__proc_gen__Var_20;
          MR_Word ll_backend__proc_gen__TypeCtorSymName_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TypeCtor_16, (MR_Integer) 0)));
          MR_Integer ll_backend__proc_gen__TypeCtorArity_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TypeCtor_16, (MR_Integer) 1)));
          MR_String ll_backend__proc_gen__TypeCtorName_42;
          MR_String ll_backend__proc_gen__ArityStr_43;
          MR_Word ll_backend__proc_gen__Var_44;
          MR_Word ll_backend__proc_gen__Var_45;
          MR_Word ll_backend__proc_gen__Var_47;

          {
            ll_backend__proc_gen__TypeCtorName_42 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__proc_gen__TypeCtorSymName_40);
          }
          {
            mercury__string__int_to_string_2_p_0(ll_backend__proc_gen__TypeCtorArity_41, &ll_backend__proc_gen__ArityStr_43);
          }
          {
            ll_backend__proc_gen__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_47, 0) = ((MR_Box) (ll_backend__proc_gen__ArityStr_43));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__proc_gen__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_45, 0) = ((MR_Box) ((MR_String) "_"));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_45, 1) = ((MR_Box) (ll_backend__proc_gen__Var_47));
          }
          {
            ll_backend__proc_gen__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_44, 0) = ((MR_Box) (ll_backend__proc_gen__TypeCtorName_42));
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_44, 1) = ((MR_Box) (ll_backend__proc_gen__Var_45));
          }
          {
            mercury__string__append_list_2_p_0(ll_backend__proc_gen__Var_44, &ll_backend__proc_gen__TypeName_17);
          }
          {
            ll_backend__proc_gen__SpecialPredName_18 = mdbcomp__prim_data__get_special_pred_id_generic_name_1_f_0(ll_backend__proc_gen__SpecialId_15);
          }
          {
            ll_backend__proc_gen__Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "_for_", ll_backend__proc_gen__TypeName_17);
          }
          {
            ll_backend__proc_gen__FullPredName_19 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__SpecialPredName_18, ll_backend__proc_gen__Var_20);
          }
        }
      }
    else
      ll_backend__proc_gen__FullPredName_19 = ll_backend__proc_gen__PredName_12;
    {
      ll_backend__proc_gen__Var_22 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(ll_backend__proc_gen__PredOrFunc_10);
    }
    {
      ll_backend__proc_gen__Var_26 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__proc_gen__ModuleName_11);
    }
    {
      ll_backend__proc_gen__Var_33 = mercury__string__int_to_string_1_f_0(ll_backend__proc_gen__Arity_13);
    }
    {
      ll_backend__proc_gen__Var_37 = hlds__hlds_pred__proc_id_to_int_1_f_0(ll_backend__proc_gen__ProcId_7);
    }
    {
      ll_backend__proc_gen__Var_36 = mercury__string__int_to_string_1_f_0(ll_backend__proc_gen__Var_37);
    }
    {
      ll_backend__proc_gen__Var_34 = mercury__string__f_43_43_2_f_0((MR_String) "-", ll_backend__proc_gen__Var_36);
    }
    {
      ll_backend__proc_gen__Var_32 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__Var_33, ll_backend__proc_gen__Var_34);
    }
    {
      ll_backend__proc_gen__Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "/", ll_backend__proc_gen__Var_32);
    }
    {
      ll_backend__proc_gen__Var_29 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__FullPredName_19, ll_backend__proc_gen__Var_30);
    }
    {
      ll_backend__proc_gen__Var_27 = mercury__string__f_43_43_2_f_0((MR_String) ".", ll_backend__proc_gen__Var_29);
    }
    {
      ll_backend__proc_gen__Var_25 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__Var_26, ll_backend__proc_gen__Var_27);
    }
    {
      ll_backend__proc_gen__Var_23 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__proc_gen__Var_25);
    }
    {
      ll_backend__proc_gen__PushMsg_8 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__Var_22, ll_backend__proc_gen__Var_23);
    }
    return ll_backend__proc_gen__PushMsg_8;
  }
}

static void MR_CALL 
ll_backend__proc_gen__generate_call_event_8_p_0(
  MR_Word ll_backend__proc_gen__TraceInfo_9,
  MR_Word ll_backend__proc_gen__ProcContext_10,
  MR_Word * ll_backend__proc_gen__MaybeTraceCallLabel_11,
  MR_Word * ll_backend__proc_gen__TraceCallCode_12,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_0_19,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CI_20,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CLD_0_21,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CLD_22)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;
    MR_Word ll_backend__proc_gen__MaybeCallExternalInfo_15;

    {
      ll_backend__trace_gen__generate_external_event_code_8_p_0((MR_Integer) 0, ll_backend__proc_gen__TraceInfo_9, ll_backend__proc_gen__ProcContext_10, &ll_backend__proc_gen__MaybeCallExternalInfo_15, ll_backend__proc_gen__STATE_VARIABLE_CI_0_19, ll_backend__proc_gen__STATE_VARIABLE_CI_20, ll_backend__proc_gen__STATE_VARIABLE_CLD_0_21, ll_backend__proc_gen__STATE_VARIABLE_CLD_22);
    }
    if ((ll_backend__proc_gen__MaybeCallExternalInfo_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *ll_backend__proc_gen__TraceCallCode_12 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
        *ll_backend__proc_gen__MaybeTraceCallLabel_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word ll_backend__proc_gen__CallExternalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeCallExternalInfo_15, (MR_Integer) 0)));
        MR_Word ll_backend__proc_gen__TraceCallLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__CallExternalInfo_16, (MR_Integer) 0)));
        MR_Word ll_backend__proc_gen__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__CallExternalInfo_16, (MR_Integer) 1)));

        *ll_backend__proc_gen__TraceCallCode_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__CallExternalInfo_16, (MR_Integer) 2)));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__proc_gen__MaybeTraceCallLabel_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__proc_gen__TraceCallLabel_17));
        }
      }
  }
}

static MR_Word MR_CALL 
ll_backend__proc_gen__maybe_generate_deep_prof_info_2_f_0(
  MR_Word ll_backend__proc_gen__ProcInfo_4,
  MR_Word ll_backend__proc_gen__HLDSDeepInfo_5)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;
    MR_Word ll_backend__proc_gen__MaybeDeepProfInfo_6;
    MR_Word ll_backend__proc_gen__MaybeHLDSDeepLayout_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSDeepInfo_5, (MR_Integer) 1)));
    MR_Word ll_backend__proc_gen__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSDeepInfo_5, (MR_Integer) 2)));
    MR_Word ll_backend__proc_gen__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSDeepInfo_5, (MR_Integer) 0)));

    if ((ll_backend__proc_gen__MaybeHLDSDeepLayout_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__proc_gen__MaybeDeepProfInfo_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__proc_gen__HLDSDeepLayout_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeHLDSDeepLayout_7, (MR_Integer) 0)));
        MR_Word ll_backend__proc_gen__HLDSProcStatic_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSDeepLayout_8, (MR_Integer) 0)));
        MR_Word ll_backend__proc_gen__HLDSExcpVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSDeepLayout_8, (MR_Integer) 1)));
        MR_Word ll_backend__proc_gen__TopCSDVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSExcpVars_10, (MR_Integer) 0)));
        MR_Word ll_backend__proc_gen__MiddleCSDVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSExcpVars_10, (MR_Integer) 1)));
        MR_Word ll_backend__proc_gen__MaybeOldOutermostVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSExcpVars_10, (MR_Integer) 2)));
        MR_Word ll_backend__proc_gen__StackSlots_15;
        MR_Integer ll_backend__proc_gen__TopCSDSlotNum_17;
        MR_Integer ll_backend__proc_gen__MiddleCSDSlotNum_19;
        MR_Integer ll_backend__proc_gen__OldOutermostSlotNum_22;
        MR_Word ll_backend__proc_gen__DeepExcpSlots_23;
        MR_Word ll_backend__proc_gen__DeepProfInfo_24;
        MR_Word ll_backend__proc_gen__TopCSDSlot_16;
        MR_Box ll_backend__proc_gen__conv0_TopCSDSlot_16;

        {
          hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ll_backend__proc_gen__ProcInfo_4, &ll_backend__proc_gen__StackSlots_15);
        }
        {
          ll_backend__proc_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ll_backend__proc_gen__StackSlots_15, ((MR_Box) (ll_backend__proc_gen__TopCSDVar_12)), &ll_backend__proc_gen__conv0_TopCSDSlot_16);
        }
        if (ll_backend__proc_gen__succeeded)
          {
            ll_backend__proc_gen__TopCSDSlot_16 = ((MR_Word) ll_backend__proc_gen__conv0_TopCSDSlot_16);
            ll_backend__proc_gen__succeeded = MR_TRUE;
          }
        if (ll_backend__proc_gen__succeeded)
          {
            MR_Word ll_backend__proc_gen__TypeInfo_31_31;
            MR_Word ll_backend__proc_gen__TypeCtorInfo_32_32;
            MR_Word ll_backend__proc_gen__MiddleCSDSlot_18;
            MR_Box ll_backend__proc_gen__conv1_MiddleCSDSlot_18;

            {
              ll_backend__proc_gen__TopCSDSlotNum_17 = hlds__hlds_llds__stack_slot_num_1_f_0(ll_backend__proc_gen__TopCSDSlot_16);
            }
            ll_backend__proc_gen__TypeInfo_31_31 = (MR_Word) &ll_backend__proc_gen_scalar_common_1[0];
            ll_backend__proc_gen__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0;
            {
              mercury__map__lookup_3_p_0(ll_backend__proc_gen__TypeInfo_31_31, ll_backend__proc_gen__TypeCtorInfo_32_32, ll_backend__proc_gen__StackSlots_15, ((MR_Box) (ll_backend__proc_gen__MiddleCSDVar_13)), &ll_backend__proc_gen__conv1_MiddleCSDSlot_18);
            }
            ll_backend__proc_gen__MiddleCSDSlot_18 = ((MR_Word) ll_backend__proc_gen__conv1_MiddleCSDSlot_18);
            {
              ll_backend__proc_gen__MiddleCSDSlotNum_19 = hlds__hlds_llds__stack_slot_num_1_f_0(ll_backend__proc_gen__MiddleCSDSlot_18);
            }
            if ((ll_backend__proc_gen__MaybeOldOutermostVar_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              ll_backend__proc_gen__OldOutermostSlotNum_22 = (MR_Integer) -1;
            else
              {
                MR_Word ll_backend__proc_gen__OldOutermostVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeOldOutermostVar_14, (MR_Integer) 0)));
                MR_Word ll_backend__proc_gen__OldOutermostSlot_21;
                MR_Box ll_backend__proc_gen__conv2_OldOutermostSlot_21;

                {
                  mercury__map__lookup_3_p_0(ll_backend__proc_gen__TypeInfo_31_31, ll_backend__proc_gen__TypeCtorInfo_32_32, ll_backend__proc_gen__StackSlots_15, ((MR_Box) (ll_backend__proc_gen__OldOutermostVar_20)), &ll_backend__proc_gen__conv2_OldOutermostSlot_21);
                }
                ll_backend__proc_gen__OldOutermostSlot_21 = ((MR_Word) ll_backend__proc_gen__conv2_OldOutermostSlot_21);
                {
                  ll_backend__proc_gen__OldOutermostSlotNum_22 = hlds__hlds_llds__stack_slot_num_1_f_0(ll_backend__proc_gen__OldOutermostSlot_21);
                }
              }
          }
        else
          {
            ll_backend__proc_gen__TopCSDSlotNum_17 = (MR_Integer) -1;
            ll_backend__proc_gen__MiddleCSDSlotNum_19 = (MR_Integer) -1;
            ll_backend__proc_gen__OldOutermostSlotNum_22 = (MR_Integer) -1;
          }
        {
          ll_backend__proc_gen__DeepExcpSlots_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__DeepExcpSlots_23, 0) = ((MR_Box) (ll_backend__proc_gen__TopCSDSlotNum_17));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__DeepExcpSlots_23, 1) = ((MR_Box) (ll_backend__proc_gen__MiddleCSDSlotNum_19));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__DeepExcpSlots_23, 2) = ((MR_Box) (ll_backend__proc_gen__OldOutermostSlotNum_22));
        }
        {
          ll_backend__proc_gen__DeepProfInfo_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__DeepProfInfo_24, 0) = ((MR_Box) (ll_backend__proc_gen__HLDSProcStatic_9));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__DeepProfInfo_24, 1) = ((MR_Box) (ll_backend__proc_gen__DeepExcpSlots_23));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__DeepProfInfo_24, 2) = ((MR_Box) (ll_backend__proc_gen__Var_26));
        }
        {
          ll_backend__proc_gen__MaybeDeepProfInfo_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeDeepProfInfo_6, 0) = ((MR_Box) (ll_backend__proc_gen__DeepProfInfo_24));
        }
      }
    return ll_backend__proc_gen__MaybeDeepProfInfo_6;
  }
}

static void MR_CALL 
ll_backend__proc_gen__maybe_set_trace_level_3_p_0(
  MR_Word ll_backend__proc_gen__PredInfo_4,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_16)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;
    MR_Word ll_backend__proc_gen__Globals0_6;
    MR_Word ll_backend__proc_gen__PredModule_7;
    MR_String ll_backend__proc_gen__PredName_8;
    MR_Integer ll_backend__proc_gen__PredArity_9;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_15, &ll_backend__proc_gen__Globals0_6);
    }
    {
      ll_backend__proc_gen__PredModule_7 = hlds__hlds_pred__pred_info_module_1_f_0(ll_backend__proc_gen__PredInfo_4);
    }
    {
      ll_backend__proc_gen__PredName_8 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__proc_gen__PredInfo_4);
    }
    {
      ll_backend__proc_gen__PredArity_9 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(ll_backend__proc_gen__PredInfo_4);
    }
    {
      ll_backend__proc_gen__succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(ll_backend__proc_gen__PredModule_7, ll_backend__proc_gen__PredName_8, ll_backend__proc_gen__PredArity_9);
    }
    if (ll_backend__proc_gen__succeeded)
      {
        MR_Word ll_backend__proc_gen__Globals1_10;

        {
          libs__globals__set_trace_level_none_2_p_0(ll_backend__proc_gen__Globals0_6, &ll_backend__proc_gen__Globals1_10);
        }
        {
          hlds__hlds_module__module_info_set_globals_3_p_0(ll_backend__proc_gen__Globals1_10, ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_15, ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_16);
        }
      }
    else
      {
        MR_Word ll_backend__proc_gen__Var_22;
        MR_Word ll_backend__proc_gen__ArgX1_23;
        MR_Word ll_backend__proc_gen__ArgX2_25;

        {
          hlds__hlds_pred__pred_info_get_origin_2_p_0(ll_backend__proc_gen__PredInfo_4, &ll_backend__proc_gen__Var_22);
        }
        ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__Var_22)) == (MR_mktag((MR_Integer) 0)));
        if (ll_backend__proc_gen__succeeded)
          {
            ll_backend__proc_gen__ArgX1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_22, (MR_Integer) 0)));
            ll_backend__proc_gen__ArgX2_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_22, (MR_Integer) 1)));
            {
              MR_Word ll_backend__proc_gen__TraceLevel_13;
              MR_Word ll_backend__proc_gen__UC_TraceLevel_14;
              MR_Word ll_backend__proc_gen__Globals1_20;

              {
                libs__globals__get_trace_level_2_p_0(ll_backend__proc_gen__Globals0_6, &ll_backend__proc_gen__TraceLevel_13);
              }
              {
                ll_backend__proc_gen__UC_TraceLevel_14 = libs__trace_params__trace_level_for_unify_compare_1_f_0(ll_backend__proc_gen__TraceLevel_13);
              }
              {
                libs__globals__set_trace_level_3_p_0(ll_backend__proc_gen__UC_TraceLevel_14, ll_backend__proc_gen__Globals0_6, &ll_backend__proc_gen__Globals1_20);
              }
              {
                hlds__hlds_module__module_info_set_globals_3_p_0(ll_backend__proc_gen__Globals1_20, ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_15, ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_16);
              }
            }
          }
        else
          *ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_16 = ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_15;
      }
  }
}

static void MR_CALL 
ll_backend__proc_gen__generate_module_code_4_p_0_2(
  MR_Box ll_backend__proc_gen__closure_arg,
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
  MR_Box * ll_backend__proc_gen__wrapper_arg_2)
{
  {
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;
    MR_Word ll_backend__proc_gen__conv6_HeadVar__3_3;

    {
      ll_backend__global_data__remap_references_to_global_data_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__proc_gen__wrapper_arg_1), &ll_backend__proc_gen__conv6_HeadVar__3_3);
    }
    *ll_backend__proc_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__proc_gen__conv6_HeadVar__3_3));
  }
}

static void MR_CALL 
ll_backend__proc_gen__generate_module_code_4_p_0_1(
  MR_Box ll_backend__proc_gen__closure_arg,
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
  MR_Box * ll_backend__proc_gen__wrapper_arg_3,
  MR_Box ll_backend__proc_gen__wrapper_arg_4,
  MR_Box * ll_backend__proc_gen__wrapper_arg_5)
{
  {
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;
    MR_Word ll_backend__proc_gen__conv1_STATE_VARIABLE_CProcsCord_17;
    MR_Word ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_19;

    {
      ll_backend__proc_gen__generate_pred_code_par_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__proc_gen__wrapper_arg_1), ((MR_Word) ll_backend__proc_gen__wrapper_arg_2), &ll_backend__proc_gen__conv1_STATE_VARIABLE_CProcsCord_17, ((MR_Word) ll_backend__proc_gen__wrapper_arg_4), &ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_19);
    }
    *ll_backend__proc_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__proc_gen__conv1_STATE_VARIABLE_CProcsCord_17));
    *ll_backend__proc_gen__wrapper_arg_5 = ((MR_Box) (ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_19));
  }
}

void MR_CALL 
ll_backend__proc_gen__generate_module_code_4_p_0(
  MR_Word ll_backend__proc_gen__ModuleInfo_5,
  MR_Word * ll_backend__proc_gen__CProcs_6,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_16,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_17)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;
    MR_Word ll_backend__proc_gen__PredIds_8;
    MR_Word ll_backend__proc_gen__Globals_9;
    MR_Word ll_backend__proc_gen__ParallelCodeGen_10;
    MR_Word ll_backend__proc_gen__VeryVerbose_11;
    MR_Word ll_backend__proc_gen__Statistics_12;
    MR_Word ll_backend__proc_gen__ConstStructMap_14;
    MR_Word ll_backend__proc_gen__CProcsCord_15;
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_25_25;

    {
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ll_backend__proc_gen__ModuleInfo_5, &ll_backend__proc_gen__PredIds_8);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__proc_gen__ModuleInfo_5, &ll_backend__proc_gen__Globals_9);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__proc_gen__Globals_9, (MR_Integer) 309, &ll_backend__proc_gen__ParallelCodeGen_10);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__proc_gen__Globals_9, (MR_Integer) 57, &ll_backend__proc_gen__VeryVerbose_11);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__proc_gen__Globals_9, (MR_Integer) 67, &ll_backend__proc_gen__Statistics_12);
    }
    switch (ll_backend__proc_gen__VeryVerbose_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__unify_gen__generate_const_structs_4_p_0(ll_backend__proc_gen__ModuleInfo_5, &ll_backend__proc_gen__ConstStructMap_14, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_16, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_25_25);
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "% Generating constant structures\n");
          }
          {
            ll_backend__unify_gen__generate_const_structs_4_p_0(ll_backend__proc_gen__ModuleInfo_5, &ll_backend__proc_gen__ConstStructMap_14, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_16, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_25_25);
          }
          {
            libs__file_util__maybe_report_stats_3_p_0(ll_backend__proc_gen__Statistics_12);
          }
        }
        break;
    }
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__ParallelCodeGen_10 == (MR_Integer) 1);
    if (ll_backend__proc_gen__succeeded)
      {
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__VeryVerbose_11 == (MR_Integer) 0);
        if (ll_backend__proc_gen__succeeded)
          ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__Statistics_12 == (MR_Integer) 0);
      }
    if (ll_backend__proc_gen__succeeded)
      {
        MR_Word ll_backend__proc_gen__TypeCtorInfo_35_59 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
        MR_Word ll_backend__proc_gen__TypeInfo_36_60;
        MR_Word ll_backend__proc_gen__TypeCtorInfo_42_66;
        MR_Word ll_backend__proc_gen__TypeInfo_43_67;
        MR_Word ll_backend__proc_gen__TypeCtorInfo_44_68;
        MR_Word ll_backend__proc_gen__ListsOfPredIds_38;
        MR_Word ll_backend__proc_gen__ListsOfPredIdsA_39;
        MR_Word ll_backend__proc_gen__ListsOfPredIdsB_40;
        MR_Word ll_backend__proc_gen__PredIdsA_42;
        MR_Word ll_backend__proc_gen__CProcsCordA_43;
        MR_Word ll_backend__proc_gen__GlobalDataA_44;
        MR_Word ll_backend__proc_gen__PredIdsB_45;
        MR_Word ll_backend__proc_gen__GlobalData1_46;
        MR_Word ll_backend__proc_gen__CProcsCordB0_47;
        MR_Word ll_backend__proc_gen__GlobalDataB_48;
        MR_Word ll_backend__proc_gen__Remap_49;
        MR_Word ll_backend__proc_gen__CProcsCordB_50;
        MR_Word ll_backend__proc_gen__Var_52;
        MR_Word ll_backend__proc_gen__Var_53;
        MR_Word ll_backend__proc_gen__Var_56;
        MR_Word ll_backend__proc_gen__Var_58;
        MR_Word ll_backend__proc_gen__As_77;
        MR_Word ll_backend__proc_gen__Bs_78;
        MR_Box ll_backend__proc_gen__conv3_CProcsCordA_43;
        MR_Box ll_backend__proc_gen__conv2_GlobalDataA_44;
        MR_Box ll_backend__proc_gen__conv5_CProcsCordB0_47;
        MR_Box ll_backend__proc_gen__conv4_GlobalDataB_48;

        {
          mercury__list__chunk_3_p_0(ll_backend__proc_gen__TypeCtorInfo_35_59, ll_backend__proc_gen__PredIds_8, (MR_Integer) 50, &ll_backend__proc_gen__ListsOfPredIds_38);
        }
        ll_backend__proc_gen__TypeInfo_36_60 = (MR_Word) &ll_backend__proc_gen_scalar_common_1[2];
        {
          ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_108_101_97_118_101_95_50_95_95_91_49_93_95_48_5_p_0(ll_backend__proc_gen__ListsOfPredIds_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__proc_gen__As_77, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__proc_gen__Bs_78);
        }
        {
          ll_backend__proc_gen__ListsOfPredIdsA_39 = mercury__list__reverse_1_f_0(ll_backend__proc_gen__TypeInfo_36_60, ll_backend__proc_gen__As_77);
        }
        {
          ll_backend__proc_gen__ListsOfPredIdsB_40 = mercury__list__reverse_1_f_0(ll_backend__proc_gen__TypeInfo_36_60, ll_backend__proc_gen__Bs_78);
        }
        {
          mercury__list__condense_2_p_0(ll_backend__proc_gen__TypeCtorInfo_35_59, ll_backend__proc_gen__ListsOfPredIdsA_39, &ll_backend__proc_gen__PredIdsA_42);
        }
        {
          ll_backend__proc_gen__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_52, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_52, 1) = ((MR_Box) (ll_backend__proc_gen__generate_module_code_4_p_0_1));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_52, 3) = ((MR_Box) (ll_backend__proc_gen__ModuleInfo_5));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_52, 4) = ((MR_Box) (ll_backend__proc_gen__ConstStructMap_14));
        }
        ll_backend__proc_gen__TypeCtorInfo_42_66 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0;
        {
          ll_backend__proc_gen__Var_53 = mercury__cord__init_0_f_0(ll_backend__proc_gen__TypeCtorInfo_42_66);
        }
        ll_backend__proc_gen__TypeInfo_43_67 = (MR_Word) &ll_backend__proc_gen_scalar_common_1[1];
        ll_backend__proc_gen__TypeCtorInfo_44_68 = (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0;
        {
          mercury__list__foldl2_6_p_0(ll_backend__proc_gen__TypeCtorInfo_35_59, ll_backend__proc_gen__TypeInfo_43_67, ll_backend__proc_gen__TypeCtorInfo_44_68, ll_backend__proc_gen__Var_52, ll_backend__proc_gen__PredIdsA_42, ((MR_Box) (ll_backend__proc_gen__Var_53)), &ll_backend__proc_gen__conv3_CProcsCordA_43, ((MR_Box) (ll_backend__proc_gen__STATE_VARIABLE_GlobalData_25_25)), &ll_backend__proc_gen__conv2_GlobalDataA_44);
        }
        ll_backend__proc_gen__CProcsCordA_43 = ((MR_Word) ll_backend__proc_gen__conv3_CProcsCordA_43);
        ll_backend__proc_gen__GlobalDataA_44 = ((MR_Word) ll_backend__proc_gen__conv2_GlobalDataA_44);
        {
          mercury__list__condense_2_p_0(ll_backend__proc_gen__TypeCtorInfo_35_59, ll_backend__proc_gen__ListsOfPredIdsB_40, &ll_backend__proc_gen__PredIdsB_45);
        }
        {
          ll_backend__global_data__bump_type_num_counter_3_p_0((MR_Integer) 10000, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_25_25, &ll_backend__proc_gen__GlobalData1_46);
        }
        {
          ll_backend__proc_gen__Var_56 = mercury__cord__init_0_f_0(ll_backend__proc_gen__TypeCtorInfo_42_66);
        }
        {
          mercury__list__foldl2_6_p_0(ll_backend__proc_gen__TypeCtorInfo_35_59, ll_backend__proc_gen__TypeInfo_43_67, ll_backend__proc_gen__TypeCtorInfo_44_68, ll_backend__proc_gen__Var_52, ll_backend__proc_gen__PredIdsB_45, ((MR_Box) (ll_backend__proc_gen__Var_56)), &ll_backend__proc_gen__conv5_CProcsCordB0_47, ((MR_Box) (ll_backend__proc_gen__GlobalData1_46)), &ll_backend__proc_gen__conv4_GlobalDataB_48);
        }
        ll_backend__proc_gen__CProcsCordB0_47 = ((MR_Word) ll_backend__proc_gen__conv5_CProcsCordB0_47);
        ll_backend__proc_gen__GlobalDataB_48 = ((MR_Word) ll_backend__proc_gen__conv4_GlobalDataB_48);
        {
          ll_backend__global_data__merge_global_datas_4_p_0(ll_backend__proc_gen__GlobalDataA_44, ll_backend__proc_gen__GlobalDataB_48, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_17, &ll_backend__proc_gen__Remap_49);
        }
        {
          ll_backend__proc_gen__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_58, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_58, 1) = ((MR_Box) (ll_backend__proc_gen__generate_module_code_4_p_0_2));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_58, 3) = ((MR_Box) (ll_backend__proc_gen__Remap_49));
        }
        {
          mercury__cord__map_pred_3_p_0(ll_backend__proc_gen__TypeCtorInfo_42_66, ll_backend__proc_gen__TypeCtorInfo_42_66, ll_backend__proc_gen__Var_58, ll_backend__proc_gen__CProcsCordB0_47, &ll_backend__proc_gen__CProcsCordB_50);
        }
        {
          ll_backend__proc_gen__CProcsCord_15 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_42_66, ll_backend__proc_gen__CProcsCordA_43, ll_backend__proc_gen__CProcsCordB_50);
        }
      }
    else
      {
        ll_backend__proc_gen__generate_module_code_seq_8_p_0(ll_backend__proc_gen__ModuleInfo_5, ll_backend__proc_gen__VeryVerbose_11, ll_backend__proc_gen__Statistics_12, ll_backend__proc_gen__ConstStructMap_14, ll_backend__proc_gen__PredIds_8, &ll_backend__proc_gen__CProcsCord_15, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_25_25, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_17);
      }
    {
      *ll_backend__proc_gen__CProcs_6 = mercury__cord__list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0, ll_backend__proc_gen__CProcsCord_15);
    }
  }
}

static void MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_108_101_97_118_101_95_50_95_95_91_49_93_95_48_5_p_0(
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
  MR_Word ll_backend__proc_gen__HeadVar__2_2,
  MR_Word * ll_backend__proc_gen__HeadVar__3_3,
  MR_Word ll_backend__proc_gen__HeadVar__4_4,
  MR_Word * ll_backend__proc_gen__HeadVar__5_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__proc_gen__succeeded;

        if ((ll_backend__proc_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__proc_gen__HeadVar__5_5 = ll_backend__proc_gen__HeadVar__4_4;
            *ll_backend__proc_gen__HeadVar__3_3 = ll_backend__proc_gen__HeadVar__2_2;
          }
        else
          {
            MR_Box ll_backend__proc_gen__H_12 = (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 0));
            MR_Word ll_backend__proc_gen__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__proc_gen__Var_18;

            {
              ll_backend__proc_gen__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_18, 0) = ll_backend__proc_gen__H_12;
              MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Var_18, 1) = ((MR_Box) (ll_backend__proc_gen__HeadVar__2_2));
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__proc_gen__next_value_of_HeadVar__1_1 = ll_backend__proc_gen__T_13;
              MR_Word ll_backend__proc_gen__next_value_of_HeadVar__2_2 = ll_backend__proc_gen__HeadVar__4_4;
              MR_Word * ll_backend__proc_gen__next_value_of_HeadVar__3_3 = ll_backend__proc_gen__HeadVar__5_5;
              MR_Word ll_backend__proc_gen__next_value_of_HeadVar__4_4 = ll_backend__proc_gen__Var_18;
              MR_Word * ll_backend__proc_gen__next_value_of_HeadVar__5_5 = ll_backend__proc_gen__HeadVar__3_3;

              ll_backend__proc_gen__HeadVar__5_5 = ll_backend__proc_gen__next_value_of_HeadVar__5_5;
              ll_backend__proc_gen__HeadVar__4_4 = ll_backend__proc_gen__next_value_of_HeadVar__4_4;
              ll_backend__proc_gen__HeadVar__3_3 = ll_backend__proc_gen__next_value_of_HeadVar__3_3;
              ll_backend__proc_gen__HeadVar__2_2 = ll_backend__proc_gen__next_value_of_HeadVar__2_2;
              ll_backend__proc_gen__HeadVar__1_1 = ll_backend__proc_gen__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__proc_gen__generate_module_code_seq_8_p_0_1(
  MR_Box ll_backend__proc_gen__closure_arg,
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
  MR_Box * ll_backend__proc_gen__wrapper_arg_3,
  MR_Box ll_backend__proc_gen__wrapper_arg_4,
  MR_Box * ll_backend__proc_gen__wrapper_arg_5)
{
  {
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;
    MR_Word ll_backend__proc_gen__conv1_STATE_VARIABLE_CProcsCord_24;
    MR_Word ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_26;

    {
      ll_backend__proc_gen__generate_pred_code_seq_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 6))), ((MR_Word) ll_backend__proc_gen__wrapper_arg_1), ((MR_Word) ll_backend__proc_gen__wrapper_arg_2), &ll_backend__proc_gen__conv1_STATE_VARIABLE_CProcsCord_24, ((MR_Word) ll_backend__proc_gen__wrapper_arg_4), &ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_26);
    }
    *ll_backend__proc_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__proc_gen__conv1_STATE_VARIABLE_CProcsCord_24));
    *ll_backend__proc_gen__wrapper_arg_5 = ((MR_Box) (ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_26));
  }
}

static void MR_CALL 
ll_backend__proc_gen__generate_module_code_seq_8_p_0(
  MR_Word ll_backend__proc_gen__ModuleInfo_9,
  MR_Word ll_backend__proc_gen__VeryVerbose_10,
  MR_Word ll_backend__proc_gen__Statistics_11,
  MR_Word ll_backend__proc_gen__ConstStructMap_12,
  MR_Word ll_backend__proc_gen__PredIds_13,
  MR_Word * ll_backend__proc_gen__CProcsCord_14,
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_16,
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_17)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;
    MR_Word ll_backend__proc_gen__Var_18;
    MR_Word ll_backend__proc_gen__Var_19;
    MR_Box ll_backend__proc_gen__conv3_CProcsCord_14;
    MR_Box ll_backend__proc_gen__conv2_STATE_VARIABLE_GlobalData_17;

    {
      ll_backend__proc_gen__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_18, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_18, 1) = ((MR_Box) (ll_backend__proc_gen__generate_module_code_seq_8_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_18, 3) = ((MR_Box) (ll_backend__proc_gen__ModuleInfo_9));
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_18, 4) = ((MR_Box) (ll_backend__proc_gen__VeryVerbose_10));
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_18, 5) = ((MR_Box) (ll_backend__proc_gen__Statistics_11));
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_18, 6) = ((MR_Box) (ll_backend__proc_gen__ConstStructMap_12));
    }
    {
      ll_backend__proc_gen__Var_19 = mercury__cord__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0);
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &ll_backend__proc_gen_scalar_common_1[1], (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0, ll_backend__proc_gen__Var_18, ll_backend__proc_gen__PredIds_13, ((MR_Box) (ll_backend__proc_gen__Var_19)), &ll_backend__proc_gen__conv3_CProcsCord_14, ((MR_Box) (ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_16)), &ll_backend__proc_gen__conv2_STATE_VARIABLE_GlobalData_17);
    }
    *ll_backend__proc_gen__CProcsCord_14 = ((MR_Word) ll_backend__proc_gen__conv3_CProcsCord_14);
    *ll_backend__proc_gen__STATE_VARIABLE_GlobalData_17 = ((MR_Word) ll_backend__proc_gen__conv2_STATE_VARIABLE_GlobalData_17);
  }
}

static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____proc_frame_slots_0_0_10001(
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
  MR_Box ll_backend__proc_gen__wrapper_arg_2)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;

    {
      ll_backend__proc_gen__succeeded = ll_backend__proc_gen____Unify____proc_frame_slots_0_0(((MR_Word) ll_backend__proc_gen__wrapper_arg_1), ((MR_Word) ll_backend__proc_gen__wrapper_arg_2));
    }
    return ll_backend__proc_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__proc_gen____Compare____proc_frame_slots_0_0_10001(
  MR_Box * ll_backend__proc_gen__wrapper_arg_1,
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
  MR_Box ll_backend__proc_gen__wrapper_arg_3)
{
  {
    MR_Word ll_backend__proc_gen__conv0_HeadVar__1_1;

    {
      ll_backend__proc_gen____Compare____proc_frame_slots_0_0(&ll_backend__proc_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__proc_gen__wrapper_arg_2), ((MR_Word) ll_backend__proc_gen__wrapper_arg_3));
    }
    *ll_backend__proc_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__proc_gen__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____type_giving_arg_0_0_10001(
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
  MR_Box ll_backend__proc_gen__wrapper_arg_2)
{
  {
    MR_bool ll_backend__proc_gen__succeeded;

    {
      ll_backend__proc_gen__succeeded = ll_backend__proc_gen____Unify____type_giving_arg_0_0(((MR_Word) ll_backend__proc_gen__wrapper_arg_1), ((MR_Word) ll_backend__proc_gen__wrapper_arg_2));
    }
    return ll_backend__proc_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__proc_gen____Compare____type_giving_arg_0_0_10001(
  MR_Box * ll_backend__proc_gen__wrapper_arg_1,
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
  MR_Box ll_backend__proc_gen__wrapper_arg_3)
{
  {
    MR_Word ll_backend__proc_gen__conv0_HeadVar__1_1;

    {
      ll_backend__proc_gen____Compare____type_giving_arg_0_0(&ll_backend__proc_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__proc_gen__wrapper_arg_2), ((MR_Word) ll_backend__proc_gen__wrapper_arg_3));
    }
    *ll_backend__proc_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__proc_gen__conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__proc_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.proc_gen. */
