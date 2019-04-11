/*
** Automatically generated from `deep_profiling.m'
** by the Mercury compiler,
** version rotd-2017-07-04
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


/* :- module ll_backend.deep_profiling. */
/* :- implementation. */

/*
INIT mercury__ll_backend__deep_profiling__init
ENDINIT
*/

#include "ll_backend.deep_profiling.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
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
#include "hlds.make_goal.mih"
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
#include "ll_backend.coverage_profiling.mih"
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.builtin_lib_types.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.dead_proc_elim.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__deep_profiling__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__deep_profiling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__deep_profiling__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__deep_profiling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__deep_profiling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_0[1];

static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_0;

static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_1[2];

static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_1;

static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_2[1];

static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_2;

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_1[1];

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_2[1];

static const MR_DuPtagLayout ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_call_class_0[3];

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_call_class_0[3];

static const MR_Integer ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_call_class_0[3];

static const MR_FA_TypeInfo_Struct2 ll_backend__deep_profiling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__cord__ti_cord_1hlds__hlds_pred__type_ctor_info_call_site_static_data_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_deep_recursion_info_0;

static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_deep_info_0_0[9];

static const MR_ConstString ll_backend__deep_profiling__ll_backend__deep_profiling__field_names_deep_info_0_0[9];

static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_deep_info_0_0[1];

static const MR_DuPtagLayout ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_deep_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_deep_info_0[1];

static const MR_Integer ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_deep_info_0[1];

static const MR_FA_TypeInfo_Struct2 ll_backend__deep_profiling__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_deep_prof_tail_rec_info_0_0[4];

static const MR_ConstString ll_backend__deep_profiling__ll_backend__deep_profiling__field_names_deep_prof_tail_rec_info_0_0[4];

static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_prof_tail_rec_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_deep_prof_tail_rec_info_0_0[1];

static const MR_DuPtagLayout ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_deep_prof_tail_rec_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_deep_prof_tail_rec_info_0[1];

static const MR_Integer ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_deep_prof_tail_rec_info_0[1];

static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____call_class_0_0_10001(
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box ll_backend__deep_profiling__wrapper_arg_2);

static void MR_CALL 
ll_backend__deep_profiling____Compare____call_class_0_0_10001(
  MR_Box * ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box ll_backend__deep_profiling__wrapper_arg_2,
  MR_Box ll_backend__deep_profiling__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____deep_info_0_0_10001(
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box ll_backend__deep_profiling__wrapper_arg_2);

static void MR_CALL 
ll_backend__deep_profiling____Compare____deep_info_0_0_10001(
  MR_Box * ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box ll_backend__deep_profiling__wrapper_arg_2,
  MR_Box ll_backend__deep_profiling__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____deep_prof_tail_rec_info_0_0_10001(
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box ll_backend__deep_profiling__wrapper_arg_2);

static void MR_CALL 
ll_backend__deep_profiling____Compare____deep_prof_tail_rec_info_0_0_10001(
  MR_Box * ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box ll_backend__deep_profiling__wrapper_arg_2,
  MR_Box ll_backend__deep_profiling__wrapper_arg_3);

static MR_String MR_CALL 
ll_backend__deep_profiling__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_112_117_116_101_95_116_121_112_101_95_115_117_98_115_116_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

static MR_Word MR_CALL 
ll_backend__deep_profiling__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_115_95_112_114_111_99_95_105_110_95_105_110_116_101_114_102_97_99_101_95_95_91_51_93_95_48_3_f_0(
  MR_Word ll_backend__deep_profiling__ModuleInfo_5,
  MR_Word ll_backend__deep_profiling__PredId_6);

static void MR_CALL 
ll_backend__deep_profiling____Compare____deep_prof_tail_rec_info_0_0(
  MR_Word * ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word ll_backend__deep_profiling__HeadVar__2_2,
  MR_Word ll_backend__deep_profiling__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____deep_prof_tail_rec_info_0_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word ll_backend__deep_profiling__HeadVar__2_2);

static void MR_CALL 
ll_backend__deep_profiling____Compare____deep_info_0_0(
  MR_Word * ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word ll_backend__deep_profiling__HeadVar__2_2,
  MR_Word ll_backend__deep_profiling__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____deep_info_0_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word ll_backend__deep_profiling__HeadVar__2_2);

static void MR_CALL 
ll_backend__deep_profiling____Compare____call_class_0_0(
  MR_Word * ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word ll_backend__deep_profiling__HeadVar__2_2,
  MR_Word ll_backend__deep_profiling__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____call_class_0_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word ll_backend__deep_profiling__HeadVar__2_2);

static void MR_CALL 
ll_backend__deep_profiling__extract_deep_rec_info_2_p_0(
  MR_Word ll_backend__deep_profiling__MaybeDeepProfInfo_3,
  MR_Word * ll_backend__deep_profiling__MaybeRecInfo_4);

static void MR_CALL 
ll_backend__deep_profiling__generate_outermost_proc_dyns_8_p_0(
  MR_Word ll_backend__deep_profiling__UseActivationCounts_9,
  MR_Word ll_backend__deep_profiling__TopCSD_10,
  MR_Word ll_backend__deep_profiling__MiddleCSD_11,
  MR_Word * ll_backend__deep_profiling__MaybeOldActivationPtr_12,
  MR_Word * ll_backend__deep_profiling__NewOutermostProcDyn_13,
  MR_Word * ll_backend__deep_profiling__ExcpVars_14,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_17,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_18);

static void MR_CALL 
ll_backend__deep_profiling__maybe_generate_activation_ptr_7_p_0(
  MR_Word ll_backend__deep_profiling__UseActivationCounts_8,
  MR_Word ll_backend__deep_profiling__TopCSD_9,
  MR_Word ll_backend__deep_profiling__MiddleCSD_10,
  MR_Word * ll_backend__deep_profiling__MaybeActivationPtr_11,
  MR_Word * ll_backend__deep_profiling__ExcpVars_12,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_15,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_16);

static void MR_CALL 
ll_backend__deep_profiling__generate_deep_cell_unify_5_p_0(
  MR_Integer ll_backend__deep_profiling__Length_6,
  MR_Word ll_backend__deep_profiling__ConsId_7,
  MR_Word ll_backend__deep_profiling__Args_8,
  MR_Word ll_backend__deep_profiling__Var_9,
  MR_Word * ll_backend__deep_profiling__Goal_10);

static void MR_CALL 
ll_backend__deep_profiling__generate_deep_det_call_6_p_0(
  MR_Word ll_backend__deep_profiling__ModuleInfo_7,
  MR_String ll_backend__deep_profiling__Name_8,
  MR_Integer ll_backend__deep_profiling__Arity_9,
  MR_Word ll_backend__deep_profiling__ArgVars_10,
  MR_Word ll_backend__deep_profiling__OutputVars_11,
  MR_Word * ll_backend__deep_profiling__Goal_12);

static void MR_CALL 
ll_backend__deep_profiling__generate_single_csn_unify_4_p_0(
  MR_Integer ll_backend__deep_profiling__CSN_5,
  MR_Word * ll_backend__deep_profiling__HeadVar__2_2,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_13);

static void MR_CALL 
ll_backend__deep_profiling__generate_csn_vector_cell_6_p_0(
  MR_Integer ll_backend__deep_profiling__Length_7,
  MR_Word ll_backend__deep_profiling__CSNVars_8,
  MR_Word * ll_backend__deep_profiling__CellVar_9,
  MR_Word * ll_backend__deep_profiling__CellGoal_10,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_20);

static void MR_CALL 
ll_backend__deep_profiling__generate_csn_vector_7_p_0_2(
  MR_Box ll_backend__deep_profiling__closure_arg,
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box * ll_backend__deep_profiling__wrapper_arg_2,
  MR_Box ll_backend__deep_profiling__wrapper_arg_3,
  MR_Box * ll_backend__deep_profiling__wrapper_arg_4);

static MR_bool MR_CALL 
ll_backend__deep_profiling__generate_csn_vector_7_p_0_1(
  MR_Box ll_backend__deep_profiling__closure_arg);

static void MR_CALL 
ll_backend__deep_profiling__generate_csn_vector_7_p_0(
  MR_Integer ll_backend__deep_profiling__Length_8,
  MR_Word ll_backend__deep_profiling__CSNs_9,
  MR_Word * ll_backend__deep_profiling__CSNVars_10,
  MR_Word * ll_backend__deep_profiling__UnifyGoals_11,
  MR_Word * ll_backend__deep_profiling__CellVar_12,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_21,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_22);

static void MR_CALL 
ll_backend__deep_profiling__generate_depth_var_4_p_0(
  MR_Integer ll_backend__deep_profiling__CSN_5,
  MR_Word * ll_backend__deep_profiling__DepthVar_6,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_12);

static void MR_CALL 
ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_p_0_1(
  MR_Box ll_backend__deep_profiling__closure_arg,
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box * ll_backend__deep_profiling__wrapper_arg_2,
  MR_Box ll_backend__deep_profiling__wrapper_arg_3,
  MR_Box * ll_backend__deep_profiling__wrapper_arg_4);

static void MR_CALL 
ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_p_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word ll_backend__deep_profiling__CSDVar_2,
  MR_Word * ll_backend__deep_profiling__HeadVar__3_3,
  MR_Word * ll_backend__deep_profiling__HeadVar__4_4,
  MR_Word * ll_backend__deep_profiling__HeadVar__5_5,
  MR_Word * ll_backend__deep_profiling__HeadVar__6_6,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_7,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_8);

static void MR_CALL 
ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_8_p_0(
  MR_Word ll_backend__deep_profiling__CSNs_9,
  MR_Word ll_backend__deep_profiling__CSDVar_10,
  MR_Word * ll_backend__deep_profiling__CallGoals_11,
  MR_Word * ll_backend__deep_profiling__ExitGoals_12,
  MR_Word * ll_backend__deep_profiling__FailGoals_13,
  MR_Word * ll_backend__deep_profiling__ExtraVars_14,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_17,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_18);

static MR_Word MR_CALL 
ll_backend__deep_profiling__classify_call_2_f_0(
  MR_Word ll_backend__deep_profiling__ModuleInfo_4,
  MR_Word ll_backend__deep_profiling__Expr_5);

static void MR_CALL 
ll_backend__deep_profiling__compress_filename_3_p_0(
  MR_Word ll_backend__deep_profiling__Deep_4,
  MR_String ll_backend__deep_profiling__FileName0_5,
  MR_String * ll_backend__deep_profiling__FileName_6);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_wrap_foreign_code_4_p_0(
  MR_Word ll_backend__deep_profiling__Goal0_5,
  MR_Word * ll_backend__deep_profiling__Goal_6,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_30);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_p_0(
  MR_Word ll_backend__deep_profiling__Globals_7,
  MR_Word ll_backend__deep_profiling__CodeModel_8,
  MR_Word ll_backend__deep_profiling__Goal0_9,
  MR_Word * ll_backend__deep_profiling__Goal_10,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_36);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_wrap_call_4_p_0(
  MR_Word ll_backend__deep_profiling__Goal0_5,
  MR_Word * ll_backend__deep_profiling__Goal_6,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_97);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_switch_5_p_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word * ll_backend__deep_profiling__HeadVar__2_2,
  MR_Word * ll_backend__deep_profiling__HeadVar__3_3,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_4,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_5);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_disj_5_p_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word * ll_backend__deep_profiling__HeadVar__2_2,
  MR_Word * ll_backend__deep_profiling__HeadVar__3_3,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_4,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_5);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_conj_6_p_0(
  MR_Word ll_backend__deep_profiling__ConjType_1,
  MR_Word ll_backend__deep_profiling__HeadVar__2_2,
  MR_Word * ll_backend__deep_profiling__HeadVar__3_3,
  MR_Word * ll_backend__deep_profiling__HeadVar__4_4,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_5,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_6);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_mark_goal_as_not_mdprof_inst_2_p_0(
  MR_Word ll_backend__deep_profiling__Goal0_3,
  MR_Word * ll_backend__deep_profiling__Goal_4);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0_2(
  MR_Box ll_backend__deep_profiling__closure_arg,
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box * ll_backend__deep_profiling__wrapper_arg_2);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0_1(
  MR_Box ll_backend__deep_profiling__closure_arg,
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box * ll_backend__deep_profiling__wrapper_arg_2);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(
  MR_Word ll_backend__deep_profiling__Goal0_6,
  MR_Word * ll_backend__deep_profiling__Goal_7,
  MR_Word * ll_backend__deep_profiling__AddedImpurity_8,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82);

static void MR_CALL 
ll_backend__deep_profiling__build_non_proc_body_10_p_0(
  MR_Word ll_backend__deep_profiling__ModuleInfo_11,
  MR_Word ll_backend__deep_profiling__TopCSD_12,
  MR_Word ll_backend__deep_profiling__MiddleCSD_13,
  MR_Word ll_backend__deep_profiling__ProcStaticVar_14,
  MR_Word ll_backend__deep_profiling__MaybeOldActivationPtr_15,
  MR_Word ll_backend__deep_profiling__NewOutermostProcDyn_16,
  MR_Word ll_backend__deep_profiling__GoalInfo0_17,
  MR_Word ll_backend__deep_profiling__BindProcStaticVarGoal_18,
  MR_Word ll_backend__deep_profiling__Goal0_19,
  MR_Word * ll_backend__deep_profiling__Goal_20);

static void MR_CALL 
ll_backend__deep_profiling__build_semi_proc_body_9_p_0(
  MR_Word ll_backend__deep_profiling__ModuleInfo_10,
  MR_Word ll_backend__deep_profiling__TopCSD_11,
  MR_Word ll_backend__deep_profiling__MiddleCSD_12,
  MR_Word ll_backend__deep_profiling__ProcStaticVar_13,
  MR_Word ll_backend__deep_profiling__MaybeActivationPtr_14,
  MR_Word ll_backend__deep_profiling__GoalInfo0_15,
  MR_Word ll_backend__deep_profiling__BindProcStaticVarGoal_16,
  MR_Word ll_backend__deep_profiling__Goal0_17,
  MR_Word * ll_backend__deep_profiling__Goal_18);

static void MR_CALL 
ll_backend__deep_profiling__build_det_proc_body_9_p_0(
  MR_Word ll_backend__deep_profiling__ModuleInfo_10,
  MR_Word ll_backend__deep_profiling__TopCSD_11,
  MR_Word ll_backend__deep_profiling__MiddleCSD_12,
  MR_Word ll_backend__deep_profiling__ProcStaticVar_13,
  MR_Word ll_backend__deep_profiling__MaybeActivationPtr_14,
  MR_Word ll_backend__deep_profiling__GoalInfo0_15,
  MR_Word ll_backend__deep_profiling__BindProcStaticVarGoal_16,
  MR_Word ll_backend__deep_profiling__Goal0_17,
  MR_Word * ll_backend__deep_profiling__Goal_18);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_inner_proc_4_p_0(
  MR_Word ll_backend__deep_profiling__ModuleInfo_5,
  MR_Word ll_backend__deep_profiling__PredProcId_6,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_0_28,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_29);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_normal_proc_5_p_0(
  MR_Word ll_backend__deep_profiling__ModuleInfo_6,
  MR_Word ll_backend__deep_profiling__PredProcId_7,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_0_48,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_49,
  MR_Word * ll_backend__deep_profiling__DeepLayoutInfo_9);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_maybe_transform_proc_5_p_0(
  MR_Word ll_backend__deep_profiling__ModuleInfo_6,
  MR_Word ll_backend__deep_profiling__PredId_7,
  MR_Integer ll_backend__deep_profiling__ProcId_8,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcTable_0_17,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_ProcTable_18);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_pred_4_p_0_1(
  MR_Box ll_backend__deep_profiling__closure_arg,
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box ll_backend__deep_profiling__wrapper_arg_2,
  MR_Box * ll_backend__deep_profiling__wrapper_arg_3);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_pred_4_p_0(
  MR_Word ll_backend__deep_profiling__ModuleInfo_5,
  MR_Word ll_backend__deep_profiling__PredId_6,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_PredMap_0_13,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_PredMap_14);

static void MR_CALL 
ll_backend__deep_profiling__figure_out_rec_call_numbers_in_case_list_5_p_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Integer ll_backend__deep_profiling__STATE_VARIABLE_N_0_2,
  MR_Integer * ll_backend__deep_profiling__STATE_VARIABLE_N_3,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_4,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_5);

static void MR_CALL 
ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_p_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Integer ll_backend__deep_profiling__STATE_VARIABLE_N_0_2,
  MR_Integer * ll_backend__deep_profiling__STATE_VARIABLE_N_3,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_4,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_5);

static void MR_CALL 
ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(
  MR_Word ll_backend__deep_profiling__Goal_6,
  MR_Integer ll_backend__deep_profiling__STATE_VARIABLE_N_0_50,
  MR_Integer * ll_backend__deep_profiling__STATE_VARIABLE_N_51,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_53);

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_cases_5_p_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word * ll_backend__deep_profiling__HeadVar__2_2,
  MR_Word ll_backend__deep_profiling__TailRecInfo_3,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5);

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_disj_5_p_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word * ll_backend__deep_profiling__HeadVar__2_2,
  MR_Word ll_backend__deep_profiling__TailRecInfo_3,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5);

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_conj_6_p_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word * ll_backend__deep_profiling__HeadVar__2_2,
  MR_Word ll_backend__deep_profiling__TailRecInfo_3,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5,
  MR_Word * ll_backend__deep_profiling__HeadVar__6_6);

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_assign_4_p_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word ll_backend__deep_profiling__ToVar_2,
  MR_Word ll_backend__deep_profiling__FromVar_3,
  MR_Word * ll_backend__deep_profiling__HeadVar__4_4);

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(
  MR_Word ll_backend__deep_profiling__Goal0_7,
  MR_Word * ll_backend__deep_profiling__Goal_8,
  MR_Word ll_backend__deep_profiling__TailRecInfo_9,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89,
  MR_Word * ll_backend__deep_profiling__Continue_11);

static MR_Word MR_CALL 
ll_backend__deep_profiling__cases_contain_builtin_unify_or_compare_1_f_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__deep_profiling__goals_contain_builtin_unify_or_compare_1_f_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(
  MR_Word ll_backend__deep_profiling__Goal_3);

static MR_bool MR_CALL 
ll_backend__deep_profiling__find_list_of_output_args_2_5_p_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word ll_backend__deep_profiling__HeadVar__2_2,
  MR_Word ll_backend__deep_profiling__HeadVar__3_3,
  MR_Word ll_backend__deep_profiling__ModuleInfo_4,
  MR_Word * ll_backend__deep_profiling__HeadVar__5_5);

static void MR_CALL 
ll_backend__deep_profiling__find_list_of_output_args_5_p_0(
  MR_Word ll_backend__deep_profiling__Vars_6,
  MR_Word ll_backend__deep_profiling__Modes_7,
  MR_Word ll_backend__deep_profiling__Types_8,
  MR_Word ll_backend__deep_profiling__ModuleInfo_9,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_Outputs_11);

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_transform_to_proc_3_p_0(
  MR_Word ll_backend__deep_profiling__PredProcId_4,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_44);

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_transform_to_scc_3_p_0(
  MR_Word ll_backend__deep_profiling__SCC_4,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_8);

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0_2(
  MR_Box ll_backend__deep_profiling__closure_arg,
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box ll_backend__deep_profiling__wrapper_arg_2,
  MR_Box * ll_backend__deep_profiling__wrapper_arg_3);

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0_1(
  MR_Box ll_backend__deep_profiling__closure_arg,
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box ll_backend__deep_profiling__wrapper_arg_2,
  MR_Box * ll_backend__deep_profiling__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_1[11][3];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_2[12][2];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_3[1][6];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_4[3][7];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_5[1][8];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_6[3][1];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_7[2][5];




static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_1[11][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_2[1])),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_3[0])),
    ((MR_Box) (ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_7[0])),
    ((MR_Box) (ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_7[0])),
    ((MR_Box) (ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_4[1])),
    ((MR_Box) (ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_4[2])),
    ((MR_Box) (ll_backend__deep_profiling__generate_csn_vector_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_2[12][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_deep_recursion_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_1[4]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_2[1]))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__deep_profiling_scalar_common_1[6])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__deep_profiling_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__deep_profiling_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_2[6])),
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_2[7]))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__deep_profiling__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_4[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&ll_backend__deep_profiling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&ll_backend__deep_profiling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__deep_profiling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0)),
    ((MR_Box) (&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__deep_profiling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0)),
    ((MR_Box) (&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0))
  },
};

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__deep_profiling__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&ll_backend__deep_profiling__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_6[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_7[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
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
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__deep_profiling__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__deep_profiling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__deep_profiling__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__deep_profiling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__deep_profiling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__deep_profiling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_0 = {
  (MR_String) "call_class_normal",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &ll_backend__deep_profiling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_1 = {
  (MR_String) "call_class_special",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_2[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_generic_call_0
};

static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_2 = {
  (MR_String) "call_class_generic",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_0[1] = {
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_0
};

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_1[1] = {
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_1
};

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_2[1] = {
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_2
};

static const MR_DuPtagLayout ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_call_class_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_2
  }
};

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_call_class_0[3] = {
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_2,
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_0,
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_1
};

static const MR_Integer ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_call_class_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_call_class_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__deep_profiling____Unify____call_class_0_0_10001)),
  ((MR_Box) (ll_backend__deep_profiling____Compare____call_class_0_0_10001)),
  (MR_String) "ll_backend.deep_profiling",
  (MR_String) "call_class",
  {     ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_call_class_0 },
  {     ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_call_class_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_call_class_0
};

static const MR_FA_TypeInfo_Struct2 ll_backend__deep_profiling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__cord__ti_cord_1hlds__hlds_pred__type_ctor_info_call_site_static_data_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_deep_recursion_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_deep_recursion_info_0
  }
};

static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_deep_info_0_0[9] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &ll_backend__deep_profiling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0,
  (MR_PseudoTypeInfo) &ll_backend__deep_profiling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ll_backend__deep_profiling__cord__ti_cord_1hlds__hlds_pred__type_ctor_info_call_site_static_data_0,
  (MR_PseudoTypeInfo) &hlds__vartypes__hlds__vartypes__type_ctor_info_prog_var_set_types_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__deep_profiling__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_deep_recursion_info_0
};

static const MR_ConstString ll_backend__deep_profiling__ll_backend__deep_profiling__field_names_deep_info_0_0[9] = {
  (MR_String) "deep_module_info",
  (MR_String) "deep_pred_proc_id",
  (MR_String) "deep_containing_goal_map",
  (MR_String) "deep_current_csd",
  (MR_String) "deep_site_num_counter",
  (MR_String) "deep_call_sites",
  (MR_String) "deep_varinfo",
  (MR_String) "deep_proc_filename",
  (MR_String) "deep_maybe_rec_info"
};

static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_info_0_0 = {
  (MR_String) "deep_info",
  (MR_Integer) 9,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_deep_info_0_0,
  ll_backend__deep_profiling__ll_backend__deep_profiling__field_names_deep_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_deep_info_0_0[1] = {
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_info_0_0
};

static const MR_DuPtagLayout ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_deep_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_deep_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_deep_info_0[1] = {
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_info_0_0
};

static const MR_Integer ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_deep_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__deep_profiling____Unify____deep_info_0_0_10001)),
  ((MR_Box) (ll_backend__deep_profiling____Compare____deep_info_0_0_10001)),
  (MR_String) "ll_backend.deep_profiling",
  (MR_String) "deep_info",
  {     ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_deep_info_0 },
  {     ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_deep_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_deep_info_0
};

static const MR_FA_TypeInfo_Struct2 ll_backend__deep_profiling__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__deep_profiling__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__deep_profiling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_deep_prof_tail_rec_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &ll_backend__deep_profiling__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0,
  (MR_PseudoTypeInfo) &ll_backend__deep_profiling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_ConstString ll_backend__deep_profiling__ll_backend__deep_profiling__field_names_deep_prof_tail_rec_info_0_0[4] = {
  (MR_String) "dptri_moduleinfo",
  (MR_String) "dptri_scc_ppids",
  (MR_String) "dptri_detism",
  (MR_String) "dptri_outputs"
};

static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_prof_tail_rec_info_0_0 = {
  (MR_String) "deep_prof_tail_rec_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_deep_prof_tail_rec_info_0_0,
  ll_backend__deep_profiling__ll_backend__deep_profiling__field_names_deep_prof_tail_rec_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_deep_prof_tail_rec_info_0_0[1] = {
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_prof_tail_rec_info_0_0
};

static const MR_DuPtagLayout ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_deep_prof_tail_rec_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_deep_prof_tail_rec_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_deep_prof_tail_rec_info_0[1] = {
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_prof_tail_rec_info_0_0
};

static const MR_Integer ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_deep_prof_tail_rec_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_prof_tail_rec_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__deep_profiling____Unify____deep_prof_tail_rec_info_0_0_10001)),
  ((MR_Box) (ll_backend__deep_profiling____Compare____deep_prof_tail_rec_info_0_0_10001)),
  (MR_String) "ll_backend.deep_profiling",
  (MR_String) "deep_prof_tail_rec_info",
  {     ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_deep_prof_tail_rec_info_0 },
  {     ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_deep_prof_tail_rec_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_deep_prof_tail_rec_info_0
};

static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____call_class_0_0_10001(
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box ll_backend__deep_profiling__wrapper_arg_2)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;

    {
      ll_backend__deep_profiling__succeeded = ll_backend__deep_profiling____Unify____call_class_0_0(((MR_Word) ll_backend__deep_profiling__wrapper_arg_1), ((MR_Word) ll_backend__deep_profiling__wrapper_arg_2));
    }
    return ll_backend__deep_profiling__succeeded;
  }
}

static void MR_CALL 
ll_backend__deep_profiling____Compare____call_class_0_0_10001(
  MR_Box * ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box ll_backend__deep_profiling__wrapper_arg_2,
  MR_Box ll_backend__deep_profiling__wrapper_arg_3)
{
  {
    MR_Word ll_backend__deep_profiling__conv0_HeadVar__1_1;

    {
      ll_backend__deep_profiling____Compare____call_class_0_0(&ll_backend__deep_profiling__conv0_HeadVar__1_1, ((MR_Word) ll_backend__deep_profiling__wrapper_arg_2), ((MR_Word) ll_backend__deep_profiling__wrapper_arg_3));
    }
    *ll_backend__deep_profiling__wrapper_arg_1 = ((MR_Box) (ll_backend__deep_profiling__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____deep_info_0_0_10001(
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box ll_backend__deep_profiling__wrapper_arg_2)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;

    {
      ll_backend__deep_profiling__succeeded = ll_backend__deep_profiling____Unify____deep_info_0_0(((MR_Word) ll_backend__deep_profiling__wrapper_arg_1), ((MR_Word) ll_backend__deep_profiling__wrapper_arg_2));
    }
    return ll_backend__deep_profiling__succeeded;
  }
}

static void MR_CALL 
ll_backend__deep_profiling____Compare____deep_info_0_0_10001(
  MR_Box * ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box ll_backend__deep_profiling__wrapper_arg_2,
  MR_Box ll_backend__deep_profiling__wrapper_arg_3)
{
  {
    MR_Word ll_backend__deep_profiling__conv0_HeadVar__1_1;

    {
      ll_backend__deep_profiling____Compare____deep_info_0_0(&ll_backend__deep_profiling__conv0_HeadVar__1_1, ((MR_Word) ll_backend__deep_profiling__wrapper_arg_2), ((MR_Word) ll_backend__deep_profiling__wrapper_arg_3));
    }
    *ll_backend__deep_profiling__wrapper_arg_1 = ((MR_Box) (ll_backend__deep_profiling__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____deep_prof_tail_rec_info_0_0_10001(
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box ll_backend__deep_profiling__wrapper_arg_2)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;

    {
      ll_backend__deep_profiling__succeeded = ll_backend__deep_profiling____Unify____deep_prof_tail_rec_info_0_0(((MR_Word) ll_backend__deep_profiling__wrapper_arg_1), ((MR_Word) ll_backend__deep_profiling__wrapper_arg_2));
    }
    return ll_backend__deep_profiling__succeeded;
  }
}

static void MR_CALL 
ll_backend__deep_profiling____Compare____deep_prof_tail_rec_info_0_0_10001(
  MR_Box * ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box ll_backend__deep_profiling__wrapper_arg_2,
  MR_Box ll_backend__deep_profiling__wrapper_arg_3)
{
  {
    MR_Word ll_backend__deep_profiling__conv0_HeadVar__1_1;

    {
      ll_backend__deep_profiling____Compare____deep_prof_tail_rec_info_0_0(&ll_backend__deep_profiling__conv0_HeadVar__1_1, ((MR_Word) ll_backend__deep_profiling__wrapper_arg_2), ((MR_Word) ll_backend__deep_profiling__wrapper_arg_3));
    }
    *ll_backend__deep_profiling__wrapper_arg_1 = ((MR_Box) (ll_backend__deep_profiling__conv0_HeadVar__1_1));
  }
}

static MR_String MR_CALL 
ll_backend__deep_profiling__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_112_117_116_101_95_116_121_112_101_95_115_117_98_115_116_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;

    return (MR_String) "";
  }
}

static MR_Word MR_CALL 
ll_backend__deep_profiling__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_115_95_112_114_111_99_95_105_110_95_105_110_116_101_114_102_97_99_101_95_95_91_51_93_95_48_3_f_0(
  MR_Word ll_backend__deep_profiling__ModuleInfo_5,
  MR_Word ll_backend__deep_profiling__PredId_6)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__IsInInterface_8;
    MR_Word ll_backend__deep_profiling__PredInfo_9;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__deep_profiling__ModuleInfo_5, ll_backend__deep_profiling__PredId_6, &ll_backend__deep_profiling__PredInfo_9);
    }
    {
      ll_backend__deep_profiling__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(ll_backend__deep_profiling__PredInfo_9);
    }
    if (!(ll_backend__deep_profiling__succeeded))
      {
        ll_backend__deep_profiling__succeeded = hlds__hlds_pred__pred_info_is_pseudo_exported_1_p_0(ll_backend__deep_profiling__PredInfo_9);
      }
    if (ll_backend__deep_profiling__succeeded)
      ll_backend__deep_profiling__IsInInterface_8 = (MR_Integer) 1;
    else
      ll_backend__deep_profiling__IsInInterface_8 = (MR_Integer) 0;
    return ll_backend__deep_profiling__IsInInterface_8;
  }
}

static void MR_CALL 
ll_backend__deep_profiling____Compare____deep_prof_tail_rec_info_0_0(
  MR_Word * ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word ll_backend__deep_profiling__HeadVar__2_2,
  MR_Word ll_backend__deep_profiling__HeadVar__3_3)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Integer ll_backend__deep_profiling__CastX_15 = (MR_Integer) ll_backend__deep_profiling__HeadVar__2_2;
    MR_Integer ll_backend__deep_profiling__CastY_16 = (MR_Integer) ll_backend__deep_profiling__HeadVar__3_3;

    ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__CastX_15 == ll_backend__deep_profiling__CastY_16);
    if (ll_backend__deep_profiling__succeeded)
      *ll_backend__deep_profiling__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__deep_profiling__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__deep_profiling__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__deep_profiling__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__deep_profiling__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__deep_profiling__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__deep_profiling__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__deep_profiling__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__deep_profiling__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ll_backend__deep_profiling__Var_12;

        {
          hlds__hlds_module____Compare____module_info_0_0(&ll_backend__deep_profiling__Var_12, ll_backend__deep_profiling__ArgX1_4, ll_backend__deep_profiling__ArgY1_5);
        }
        ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__Var_12 == (MR_Integer) 0);
        ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
        if (ll_backend__deep_profiling__succeeded)
          *ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__Var_12;
        else
          {
            MR_Word ll_backend__deep_profiling__Var_13;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_2[4], &ll_backend__deep_profiling__Var_13, ((MR_Box) (ll_backend__deep_profiling__ArgX2_6)), ((MR_Box) (ll_backend__deep_profiling__ArgY2_7)));
            }
            ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__Var_13 == (MR_Integer) 0);
            ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
            if (ll_backend__deep_profiling__succeeded)
              *ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__Var_13;
            else
              {
                MR_Word ll_backend__deep_profiling__Var_14;
                MR_Integer ll_backend__deep_profiling__Var_21 = (MR_Integer) ll_backend__deep_profiling__ArgX3_8;
                MR_Integer ll_backend__deep_profiling__Var_22 = (MR_Integer) ll_backend__deep_profiling__ArgY3_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__deep_profiling__Var_14, ll_backend__deep_profiling__Var_21, ll_backend__deep_profiling__Var_22);
                }
                ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__Var_14 == (MR_Integer) 0);
                ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
                if (ll_backend__deep_profiling__succeeded)
                  *ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__Var_14;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_2[5], ll_backend__deep_profiling__HeadVar__1_1, ((MR_Box) (ll_backend__deep_profiling__ArgX4_10)), ((MR_Box) (ll_backend__deep_profiling__ArgY4_11)));
                    }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____deep_prof_tail_rec_info_0_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word ll_backend__deep_profiling__HeadVar__2_2)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Integer ll_backend__deep_profiling__CastX_11 = (MR_Integer) ll_backend__deep_profiling__HeadVar__1_1;
    MR_Integer ll_backend__deep_profiling__CastY_12 = (MR_Integer) ll_backend__deep_profiling__HeadVar__2_2;

    ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__CastX_11 == ll_backend__deep_profiling__CastY_12);
    if (ll_backend__deep_profiling__succeeded)
      ll_backend__deep_profiling__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__deep_profiling__TypeInfo_14_14;
        MR_Word ll_backend__deep_profiling__TypeInfo_15_15;
        MR_Word ll_backend__deep_profiling__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__deep_profiling__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__deep_profiling__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__deep_profiling__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__deep_profiling__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ll_backend__deep_profiling__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__deep_profiling__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ll_backend__deep_profiling__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 3)));

        {
          ll_backend__deep_profiling__succeeded = hlds__hlds_module____Unify____module_info_0_0(ll_backend__deep_profiling__ArgX1_3, ll_backend__deep_profiling__ArgY1_4);
        }
        if (ll_backend__deep_profiling__succeeded)
          {
            ll_backend__deep_profiling__TypeInfo_14_14 = (MR_Word) &ll_backend__deep_profiling_scalar_common_2[4];
            {
              ll_backend__deep_profiling__succeeded = mercury__builtin__unify_2_p_0(ll_backend__deep_profiling__TypeInfo_14_14, ((MR_Box) (ll_backend__deep_profiling__ArgX2_5)), ((MR_Box) (ll_backend__deep_profiling__ArgY2_6)));
            }
            if (ll_backend__deep_profiling__succeeded)
              {
                ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__ArgX3_7 == ll_backend__deep_profiling__ArgY3_8);
                if (ll_backend__deep_profiling__succeeded)
                  {
                    ll_backend__deep_profiling__TypeInfo_15_15 = (MR_Word) &ll_backend__deep_profiling_scalar_common_2[5];
                    {
                      ll_backend__deep_profiling__succeeded = mercury__builtin__unify_2_p_0(ll_backend__deep_profiling__TypeInfo_15_15, ((MR_Box) (ll_backend__deep_profiling__ArgX4_9)), ((MR_Box) (ll_backend__deep_profiling__ArgY4_10)));
                    }
                  }
              }
          }
      }
    return ll_backend__deep_profiling__succeeded;
  }
}

static void MR_CALL 
ll_backend__deep_profiling____Compare____deep_info_0_0(
  MR_Word * ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word ll_backend__deep_profiling__HeadVar__2_2,
  MR_Word ll_backend__deep_profiling__HeadVar__3_3)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Integer ll_backend__deep_profiling__CastX_30 = (MR_Integer) ll_backend__deep_profiling__HeadVar__2_2;
    MR_Integer ll_backend__deep_profiling__CastY_31 = (MR_Integer) ll_backend__deep_profiling__HeadVar__3_3;

    ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__CastX_30 == ll_backend__deep_profiling__CastY_31);
    if (ll_backend__deep_profiling__succeeded)
      *ll_backend__deep_profiling__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__deep_profiling__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__deep_profiling__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__deep_profiling__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__deep_profiling__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__deep_profiling__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__deep_profiling__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__deep_profiling__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__deep_profiling__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ll_backend__deep_profiling__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ll_backend__deep_profiling__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ll_backend__deep_profiling__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ll_backend__deep_profiling__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word ll_backend__deep_profiling__ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ll_backend__deep_profiling__ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 6)));
        MR_String ll_backend__deep_profiling__ArgX8_18 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 7)));
        MR_String ll_backend__deep_profiling__ArgY8_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word ll_backend__deep_profiling__ArgX9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word ll_backend__deep_profiling__ArgY9_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word ll_backend__deep_profiling__Var_22;

        {
          hlds__hlds_module____Compare____module_info_0_0(&ll_backend__deep_profiling__Var_22, ll_backend__deep_profiling__ArgX1_4, ll_backend__deep_profiling__ArgY1_5);
        }
        ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__Var_22 == (MR_Integer) 0);
        ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
        if (ll_backend__deep_profiling__succeeded)
          *ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__Var_22;
        else
          {
            MR_Word ll_backend__deep_profiling__Var_23;

            {
              hlds__hlds_pred____Compare____pred_proc_id_0_0(&ll_backend__deep_profiling__Var_23, ll_backend__deep_profiling__ArgX2_6, ll_backend__deep_profiling__ArgY2_7);
            }
            ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__Var_23 == (MR_Integer) 0);
            ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
            if (ll_backend__deep_profiling__succeeded)
              *ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__Var_23;
            else
              {
                MR_Word ll_backend__deep_profiling__Var_24;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_1[3], &ll_backend__deep_profiling__Var_24, ((MR_Box) (ll_backend__deep_profiling__ArgX3_8)), ((MR_Box) (ll_backend__deep_profiling__ArgY3_9)));
                }
                ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__Var_24 == (MR_Integer) 0);
                ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
                if (ll_backend__deep_profiling__succeeded)
                  *ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__Var_24;
                else
                  {
                    MR_Word ll_backend__deep_profiling__Var_25;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_2[1], &ll_backend__deep_profiling__Var_25, ((MR_Box) (ll_backend__deep_profiling__ArgX4_10)), ((MR_Box) (ll_backend__deep_profiling__ArgY4_11)));
                    }
                    ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__Var_25 == (MR_Integer) 0);
                    ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
                    if (ll_backend__deep_profiling__succeeded)
                      *ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__Var_25;
                    else
                      {
                        MR_Word ll_backend__deep_profiling__Var_26;

                        {
                          mercury__counter____Compare____counter_0_0(&ll_backend__deep_profiling__Var_26, ll_backend__deep_profiling__ArgX5_12, ll_backend__deep_profiling__ArgY5_13);
                        }
                        ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__Var_26 == (MR_Integer) 0);
                        ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
                        if (ll_backend__deep_profiling__succeeded)
                          *ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__Var_26;
                        else
                          {
                            MR_Word ll_backend__deep_profiling__Var_27;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_2[2], &ll_backend__deep_profiling__Var_27, ((MR_Box) (ll_backend__deep_profiling__ArgX6_14)), ((MR_Box) (ll_backend__deep_profiling__ArgY6_15)));
                            }
                            ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__Var_27 == (MR_Integer) 0);
                            ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
                            if (ll_backend__deep_profiling__succeeded)
                              *ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__Var_27;
                            else
                              {
                                MR_Word ll_backend__deep_profiling__Var_28;

                                {
                                  hlds__vartypes____Compare____prog_var_set_types_0_0(&ll_backend__deep_profiling__Var_28, ll_backend__deep_profiling__ArgX7_16, ll_backend__deep_profiling__ArgY7_17);
                                }
                                ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__Var_28 == (MR_Integer) 0);
                                ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
                                if (ll_backend__deep_profiling__succeeded)
                                  *ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__Var_28;
                                else
                                  {
                                    MR_Word ll_backend__deep_profiling__Var_29;

                                    {
                                      mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__deep_profiling__Var_29, ll_backend__deep_profiling__ArgX8_18, ll_backend__deep_profiling__ArgY8_19);
                                    }
                                    ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__Var_29 == (MR_Integer) 0);
                                    ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
                                    if (ll_backend__deep_profiling__succeeded)
                                      *ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__Var_29;
                                    else
                                      {
                                        {
                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_2[3], ll_backend__deep_profiling__HeadVar__1_1, ((MR_Box) (ll_backend__deep_profiling__ArgX9_20)), ((MR_Box) (ll_backend__deep_profiling__ArgY9_21)));
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
ll_backend__deep_profiling____Unify____deep_info_0_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word ll_backend__deep_profiling__HeadVar__2_2)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Integer ll_backend__deep_profiling__CastX_21 = (MR_Integer) ll_backend__deep_profiling__HeadVar__1_1;
    MR_Integer ll_backend__deep_profiling__CastY_22 = (MR_Integer) ll_backend__deep_profiling__HeadVar__2_2;

    ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__CastX_21 == ll_backend__deep_profiling__CastY_22);
    if (ll_backend__deep_profiling__succeeded)
      ll_backend__deep_profiling__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__deep_profiling__TypeInfo_25_25;
        MR_Word ll_backend__deep_profiling__TypeInfo_26_26;
        MR_Word ll_backend__deep_profiling__TypeInfo_28_28;
        MR_Word ll_backend__deep_profiling__TypeInfo_30_30;
        MR_Word ll_backend__deep_profiling__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__deep_profiling__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__deep_profiling__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__deep_profiling__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__deep_profiling__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ll_backend__deep_profiling__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__deep_profiling__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ll_backend__deep_profiling__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__deep_profiling__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ll_backend__deep_profiling__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ll_backend__deep_profiling__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word ll_backend__deep_profiling__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ll_backend__deep_profiling__ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word ll_backend__deep_profiling__ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 6)));
        MR_String ll_backend__deep_profiling__ArgX8_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 7)));
        MR_String ll_backend__deep_profiling__ArgY8_18 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word ll_backend__deep_profiling__ArgX9_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word ll_backend__deep_profiling__ArgY9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 8)));

        {
          ll_backend__deep_profiling__succeeded = hlds__hlds_module____Unify____module_info_0_0(ll_backend__deep_profiling__ArgX1_3, ll_backend__deep_profiling__ArgY1_4);
        }
        if (ll_backend__deep_profiling__succeeded)
          {
            {
              ll_backend__deep_profiling__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ll_backend__deep_profiling__ArgX2_5, ll_backend__deep_profiling__ArgY2_6);
            }
            if (ll_backend__deep_profiling__succeeded)
              {
                ll_backend__deep_profiling__TypeInfo_25_25 = (MR_Word) &ll_backend__deep_profiling_scalar_common_1[3];
                {
                  ll_backend__deep_profiling__succeeded = mercury__builtin__unify_2_p_0(ll_backend__deep_profiling__TypeInfo_25_25, ((MR_Box) (ll_backend__deep_profiling__ArgX3_7)), ((MR_Box) (ll_backend__deep_profiling__ArgY3_8)));
                }
                if (ll_backend__deep_profiling__succeeded)
                  {
                    ll_backend__deep_profiling__TypeInfo_26_26 = (MR_Word) &ll_backend__deep_profiling_scalar_common_2[1];
                    {
                      ll_backend__deep_profiling__succeeded = mercury__builtin__unify_2_p_0(ll_backend__deep_profiling__TypeInfo_26_26, ((MR_Box) (ll_backend__deep_profiling__ArgX4_9)), ((MR_Box) (ll_backend__deep_profiling__ArgY4_10)));
                    }
                    if (ll_backend__deep_profiling__succeeded)
                      {
                        {
                          ll_backend__deep_profiling__succeeded = mercury__counter____Unify____counter_0_0(ll_backend__deep_profiling__ArgX5_11, ll_backend__deep_profiling__ArgY5_12);
                        }
                        if (ll_backend__deep_profiling__succeeded)
                          {
                            ll_backend__deep_profiling__TypeInfo_28_28 = (MR_Word) &ll_backend__deep_profiling_scalar_common_2[2];
                            {
                              ll_backend__deep_profiling__succeeded = mercury__builtin__unify_2_p_0(ll_backend__deep_profiling__TypeInfo_28_28, ((MR_Box) (ll_backend__deep_profiling__ArgX6_13)), ((MR_Box) (ll_backend__deep_profiling__ArgY6_14)));
                            }
                            if (ll_backend__deep_profiling__succeeded)
                              {
                                {
                                  ll_backend__deep_profiling__succeeded = hlds__vartypes____Unify____prog_var_set_types_0_0(ll_backend__deep_profiling__ArgX7_15, ll_backend__deep_profiling__ArgY7_16);
                                }
                                if (ll_backend__deep_profiling__succeeded)
                                  {
                                    ll_backend__deep_profiling__succeeded = (strcmp(ll_backend__deep_profiling__ArgX8_17, ll_backend__deep_profiling__ArgY8_18) == 0);
                                    if (ll_backend__deep_profiling__succeeded)
                                      {
                                        ll_backend__deep_profiling__TypeInfo_30_30 = (MR_Word) &ll_backend__deep_profiling_scalar_common_2[3];
                                        {
                                          ll_backend__deep_profiling__succeeded = mercury__builtin__unify_2_p_0(ll_backend__deep_profiling__TypeInfo_30_30, ((MR_Box) (ll_backend__deep_profiling__ArgX9_19)), ((MR_Box) (ll_backend__deep_profiling__ArgY9_20)));
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
    return ll_backend__deep_profiling__succeeded;
  }
}

static void MR_CALL 
ll_backend__deep_profiling____Compare____call_class_0_0(
  MR_Word * ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word ll_backend__deep_profiling__HeadVar__2_2,
  MR_Word ll_backend__deep_profiling__HeadVar__3_3)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Integer ll_backend__deep_profiling__CastX_29 = (MR_Integer) ll_backend__deep_profiling__HeadVar__2_2;
    MR_Integer ll_backend__deep_profiling__CastY_30 = (MR_Integer) ll_backend__deep_profiling__HeadVar__3_3;

    ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__CastX_29 == ll_backend__deep_profiling__CastY_30);
    if (ll_backend__deep_profiling__succeeded)
      *ll_backend__deep_profiling__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) ll_backend__deep_profiling__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ll_backend__deep_profiling__Var_36 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__HeadVar__2_2), (MR_Integer) 0);

            switch (MR_tag((MR_Word) ll_backend__deep_profiling__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ll_backend__deep_profiling__ArgY1_5 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__HeadVar__3_3), (MR_Integer) 0);

                  {
                    hlds__hlds_pred____Compare____pred_proc_id_0_0(ll_backend__deep_profiling__HeadVar__1_1, ll_backend__deep_profiling__Var_36, ll_backend__deep_profiling__ArgY1_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                *ll_backend__deep_profiling__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *ll_backend__deep_profiling__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ll_backend__deep_profiling__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__deep_profiling__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) ll_backend__deep_profiling__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ll_backend__deep_profiling__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__deep_profiling__ArgY1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ll_backend__deep_profiling__ArgY2_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word ll_backend__deep_profiling__Var_18;

                  {
                    hlds__hlds_pred____Compare____pred_proc_id_0_0(&ll_backend__deep_profiling__Var_18, ll_backend__deep_profiling__Var_38, ll_backend__deep_profiling__ArgY1_15);
                  }
                  ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__Var_18 == (MR_Integer) 0);
                  ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
                  if (ll_backend__deep_profiling__succeeded)
                    *ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__Var_18;
                  else
                    {
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_2[1], ll_backend__deep_profiling__HeadVar__1_1, ((MR_Box) (ll_backend__deep_profiling__Var_37)), ((MR_Box) (ll_backend__deep_profiling__ArgY2_17)));
                      }
                    }
                }
                break;
              case (MR_Integer) 2:
                *ll_backend__deep_profiling__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ll_backend__deep_profiling__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) ll_backend__deep_profiling__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ll_backend__deep_profiling__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *ll_backend__deep_profiling__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__deep_profiling__ArgY1_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    hlds__hlds_goal____Compare____generic_call_0_0(ll_backend__deep_profiling__HeadVar__1_1, ll_backend__deep_profiling__Var_35, ll_backend__deep_profiling__ArgY1_28);
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____call_class_0_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word ll_backend__deep_profiling__HeadVar__2_2)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Integer ll_backend__deep_profiling__CastX_11 = (MR_Integer) ll_backend__deep_profiling__HeadVar__1_1;
    MR_Integer ll_backend__deep_profiling__CastY_12 = (MR_Integer) ll_backend__deep_profiling__HeadVar__2_2;

    ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__CastX_11 == ll_backend__deep_profiling__CastY_12);
    if (ll_backend__deep_profiling__succeeded)
      ll_backend__deep_profiling__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) ll_backend__deep_profiling__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ll_backend__deep_profiling__ArgX1_3 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__HeadVar__1_1), (MR_Integer) 0);
            MR_Word ll_backend__deep_profiling__ArgY1_4;

            ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (ll_backend__deep_profiling__succeeded)
              {
                ll_backend__deep_profiling__ArgY1_4 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__HeadVar__2_2), (MR_Integer) 0);
                {
                  ll_backend__deep_profiling__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ll_backend__deep_profiling__ArgX1_3, ll_backend__deep_profiling__ArgY1_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ll_backend__deep_profiling__TypeInfo_16_16;
            MR_Word ll_backend__deep_profiling__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__deep_profiling__ArgY1_6;
            MR_Word ll_backend__deep_profiling__ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__deep_profiling__ArgY2_8;

            ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__deep_profiling__succeeded)
              {
                ll_backend__deep_profiling__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 0)));
                ll_backend__deep_profiling__ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 1)));
                {
                  ll_backend__deep_profiling__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ll_backend__deep_profiling__ArgX1_5, ll_backend__deep_profiling__ArgY1_6);
                }
                if (ll_backend__deep_profiling__succeeded)
                  {
                    ll_backend__deep_profiling__TypeInfo_16_16 = (MR_Word) &ll_backend__deep_profiling_scalar_common_2[1];
                    {
                      ll_backend__deep_profiling__succeeded = mercury__builtin__unify_2_p_0(ll_backend__deep_profiling__TypeInfo_16_16, ((MR_Box) (ll_backend__deep_profiling__ArgX2_7)), ((MR_Box) (ll_backend__deep_profiling__ArgY2_8)));
                    }
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ll_backend__deep_profiling__ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__deep_profiling__ArgY1_10;

            ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (ll_backend__deep_profiling__succeeded)
              {
                ll_backend__deep_profiling__ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 0)));
                {
                  ll_backend__deep_profiling__succeeded = hlds__hlds_goal____Unify____generic_call_0_0(ll_backend__deep_profiling__ArgX1_9, ll_backend__deep_profiling__ArgY1_10);
                }
              }
          }
          break;
      }
    return ll_backend__deep_profiling__succeeded;
  }
}

static void MR_CALL 
ll_backend__deep_profiling__extract_deep_rec_info_2_p_0(
  MR_Word ll_backend__deep_profiling__MaybeDeepProfInfo_3,
  MR_Word * ll_backend__deep_profiling__MaybeRecInfo_4)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;

    if ((ll_backend__deep_profiling__MaybeDeepProfInfo_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__deep_profiling__MaybeRecInfo_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__deep_profiling__DeepProfInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeDeepProfInfo_3, (MR_Integer) 0)));
        MR_Word ll_backend__deep_profiling__Var_6;
        MR_Word ll_backend__deep_profiling__Var_7;

        *ll_backend__deep_profiling__MaybeRecInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepProfInfo_5, (MR_Integer) 0)));
        ll_backend__deep_profiling__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepProfInfo_5, (MR_Integer) 1)));
        ll_backend__deep_profiling__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepProfInfo_5, (MR_Integer) 2)));
      }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__generate_outermost_proc_dyns_8_p_0(
  MR_Word ll_backend__deep_profiling__UseActivationCounts_9,
  MR_Word ll_backend__deep_profiling__TopCSD_10,
  MR_Word ll_backend__deep_profiling__MiddleCSD_11,
  MR_Word * ll_backend__deep_profiling__MaybeOldActivationPtr_12,
  MR_Word * ll_backend__deep_profiling__NewOutermostProcDyn_13,
  MR_Word * ll_backend__deep_profiling__ExcpVars_14,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_17,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_18)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_21_21;
    MR_Word ll_backend__deep_profiling__Var_23;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_58;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_59;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_60;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_61;

    switch (ll_backend__deep_profiling__UseActivationCounts_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__deep_profiling__OldOutermostProcDyn0_16;
          MR_Word ll_backend__deep_profiling__Var_20;
          MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_33;
          MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_34;
          MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_35;
          MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_36;

          {
            ll_backend__deep_profiling__Var_20 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          }
          ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_17, (MR_Integer) 0)));
          ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_17, (MR_Integer) 1)));
          {
            mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "OldOutermost", &ll_backend__deep_profiling__OldOutermostProcDyn0_16, ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_33, &ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_35);
          }
          {
            hlds__vartypes__add_var_type_4_p_0(ll_backend__deep_profiling__OldOutermostProcDyn0_16, ll_backend__deep_profiling__Var_20, ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_34, &ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_36);
          }
          {
            ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_21_21, 0) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_35));
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_21_21, 1) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_36));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__deep_profiling__MaybeOldActivationPtr_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__OldOutermostProcDyn0_16));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *ll_backend__deep_profiling__MaybeOldActivationPtr_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_21_21 = ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_17;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__deep_profiling__ExcpVars_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__TopCSD_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (*ll_backend__deep_profiling__MaybeOldActivationPtr_12));
    }
    {
      ll_backend__deep_profiling__Var_23 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
    ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_21_21, (MR_Integer) 0)));
    ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_21_21, (MR_Integer) 1)));
    {
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "NewOutermost", ll_backend__deep_profiling__NewOutermostProcDyn_13, ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_58, &ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_60);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(*ll_backend__deep_profiling__NewOutermostProcDyn_13, ll_backend__deep_profiling__Var_23, ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_59, &ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_61);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_60));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_61));
    }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__maybe_generate_activation_ptr_7_p_0(
  MR_Word ll_backend__deep_profiling__UseActivationCounts_8,
  MR_Word ll_backend__deep_profiling__TopCSD_9,
  MR_Word ll_backend__deep_profiling__MiddleCSD_10,
  MR_Word * ll_backend__deep_profiling__MaybeActivationPtr_11,
  MR_Word * ll_backend__deep_profiling__ExcpVars_12,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_15,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_16)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;

    switch (ll_backend__deep_profiling__UseActivationCounts_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__deep_profiling__ActivationPtr0_14;
          MR_Word ll_backend__deep_profiling__Var_18;
          MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_28;
          MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_29;
          MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_30;
          MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_31;

          {
            ll_backend__deep_profiling__Var_18 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          }
          ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_15, (MR_Integer) 0)));
          ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_15, (MR_Integer) 1)));
          {
            mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "ActivationPtr", &ll_backend__deep_profiling__ActivationPtr0_14, ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_28, &ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_30);
          }
          {
            hlds__vartypes__add_var_type_4_p_0(ll_backend__deep_profiling__ActivationPtr0_14, ll_backend__deep_profiling__Var_18, ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_29, &ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_31);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_16 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_30));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_31));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__deep_profiling__MaybeActivationPtr_11 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__ActivationPtr0_14));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *ll_backend__deep_profiling__MaybeActivationPtr_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_16 = ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_15;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__deep_profiling__ExcpVars_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__TopCSD_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (*ll_backend__deep_profiling__MaybeActivationPtr_11));
    }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__generate_deep_cell_unify_5_p_0(
  MR_Integer ll_backend__deep_profiling__Length_6,
  MR_Word ll_backend__deep_profiling__ConsId_7,
  MR_Word ll_backend__deep_profiling__Args_8,
  MR_Word ll_backend__deep_profiling__Var_9,
  MR_Word * ll_backend__deep_profiling__Goal_10)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__UnifyMode_12 = (MR_Word) &ll_backend__deep_profiling_scalar_common_2[8];
    MR_Word ll_backend__deep_profiling__ArgModes_13;
    MR_Word ll_backend__deep_profiling__Unification_14;
    MR_Word ll_backend__deep_profiling__GoalExpr_15;
    MR_Word ll_backend__deep_profiling__NonLocals_16;
    MR_Word ll_backend__deep_profiling__InstMapDelta_17;
    MR_Word ll_backend__deep_profiling__GoalInfo_19;
    MR_Word ll_backend__deep_profiling__Var_29;
    MR_Word ll_backend__deep_profiling__Var_34;

    {
      mercury__list__duplicate_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0, ll_backend__deep_profiling__Length_6, ((MR_Box) (ll_backend__deep_profiling__UnifyMode_12)), &ll_backend__deep_profiling__ArgModes_13);
    }
    {
      ll_backend__deep_profiling__Unification_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Unification_14, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_9));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Unification_14, 1) = ((MR_Box) (ll_backend__deep_profiling__ConsId_7));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Unification_14, 2) = ((MR_Box) (ll_backend__deep_profiling__Args_8));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Unification_14, 3) = ((MR_Box) (ll_backend__deep_profiling__ArgModes_13));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Unification_14, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Unification_14, 5) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Unification_14, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__deep_profiling__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_29, 0) = ((MR_Box) (ll_backend__deep_profiling__ConsId_7));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_29, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_29, 2) = ((MR_Box) (ll_backend__deep_profiling__Args_8));
    }
    {
      ll_backend__deep_profiling__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr_15, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_9));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr_15, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_29));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr_15, 2) = ((MR_Box) (ll_backend__deep_profiling__UnifyMode_12));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr_15, 3) = ((MR_Box) (ll_backend__deep_profiling__Unification_14));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr_15, 4) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_2[9]));
    }
    {
      ll_backend__deep_profiling__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_34, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_9));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_34, 1) = ((MR_Box) (ll_backend__deep_profiling__Args_8));
    }
    {
      ll_backend__deep_profiling__NonLocals_16 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__Var_34);
    }
    {
      ll_backend__deep_profiling__InstMapDelta_17 = hlds__instmap__instmap_delta_bind_var_1_f_0(ll_backend__deep_profiling__Var_9);
    }
    {
      hlds__hlds_goal__goal_info_init_5_p_0(ll_backend__deep_profiling__NonLocals_16, ll_backend__deep_profiling__InstMapDelta_17, (MR_Integer) 0, (MR_Integer) 0, &ll_backend__deep_profiling__GoalInfo_19);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__deep_profiling__Goal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_19));
    }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__generate_deep_det_call_6_p_0(
  MR_Word ll_backend__deep_profiling__ModuleInfo_7,
  MR_String ll_backend__deep_profiling__Name_8,
  MR_Integer ll_backend__deep_profiling__Arity_9,
  MR_Word ll_backend__deep_profiling__ArgVars_10,
  MR_Word ll_backend__deep_profiling__OutputVars_11,
  MR_Word * ll_backend__deep_profiling__Goal_12)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__Var_13;

    {
      ll_backend__deep_profiling__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_13, 0) = ((MR_Box) (ll_backend__deep_profiling__OutputVars_11));
    }
    {
      ll_backend__deep_profiling__generate_deep_call_7_p_0(ll_backend__deep_profiling__ModuleInfo_7, ll_backend__deep_profiling__Name_8, ll_backend__deep_profiling__Arity_9, ll_backend__deep_profiling__ArgVars_10, ll_backend__deep_profiling__Var_13, (MR_Integer) 0, ll_backend__deep_profiling__Goal_12);
    }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__generate_single_csn_unify_4_p_0(
  MR_Integer ll_backend__deep_profiling__CSN_5,
  MR_Word * ll_backend__deep_profiling__HeadVar__2_2,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_13)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__CSNVar_6;
    MR_Word ll_backend__deep_profiling__UnifyGoal_7;
    MR_Word ll_backend__deep_profiling__VarInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 6)));
    MR_String ll_backend__deep_profiling__VarName_10;
    MR_Word ll_backend__deep_profiling__VarInfo_11;
    MR_Word ll_backend__deep_profiling__Var_18;
    MR_Word ll_backend__deep_profiling__Var_20;
    MR_String ll_backend__deep_profiling__Var_38;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_54;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_55;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_56;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_57;
    MR_Word ll_backend__deep_profiling__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 0)));
    MR_Word ll_backend__deep_profiling__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 1)));
    MR_Word ll_backend__deep_profiling__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 2)));
    MR_Word ll_backend__deep_profiling__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 3)));
    MR_Word ll_backend__deep_profiling__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 4)));
    MR_Word ll_backend__deep_profiling__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 5)));
    MR_String ll_backend__deep_profiling__Var_27 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 7)));
    MR_Word ll_backend__deep_profiling__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 8)));
    MR_Word ll_backend__deep_profiling__Var_29;
    MR_Word ll_backend__deep_profiling__Var_30;
    MR_Word ll_backend__deep_profiling__Var_31;
    MR_Word ll_backend__deep_profiling__Var_32;
    MR_Word ll_backend__deep_profiling__Var_33;
    MR_Word ll_backend__deep_profiling__Var_34;
    MR_String ll_backend__deep_profiling__Var_36;
    MR_Word ll_backend__deep_profiling__Var_37;
    MR_Word ll_backend__deep_profiling__Var_35;

    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_6[2], ll_backend__deep_profiling__CSN_5, &ll_backend__deep_profiling__Var_38);
    }
    {
      ll_backend__deep_profiling__VarName_10 = mercury__string__f_43_43_2_f_0((MR_String) "CSN", ll_backend__deep_profiling__Var_38);
    }
    {
      ll_backend__deep_profiling__Var_18 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
    ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo0_9, (MR_Integer) 0)));
    ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo0_9, (MR_Integer) 1)));
    {
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__VarName_10, &ll_backend__deep_profiling__CSNVar_6, ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_54, &ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_56);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(ll_backend__deep_profiling__CSNVar_6, ll_backend__deep_profiling__Var_18, ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_55, &ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_57);
    }
    {
      ll_backend__deep_profiling__VarInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo_11, 0) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_56));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo_11, 1) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_57));
    }
    ll_backend__deep_profiling__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 0)));
    ll_backend__deep_profiling__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 1)));
    ll_backend__deep_profiling__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 2)));
    ll_backend__deep_profiling__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 3)));
    ll_backend__deep_profiling__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 4)));
    ll_backend__deep_profiling__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 5)));
    ll_backend__deep_profiling__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 6)));
    ll_backend__deep_profiling__Var_36 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 7)));
    ll_backend__deep_profiling__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 8)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_29));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_30));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_31));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__deep_profiling__Var_32));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__deep_profiling__Var_33));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__deep_profiling__Var_34));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__deep_profiling__VarInfo_11));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__deep_profiling__Var_36));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__deep_profiling__Var_37));
    }
    {
      ll_backend__deep_profiling__Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_20, 1) = ((MR_Box) (ll_backend__deep_profiling__CSN_5));
    }
    {
      ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(ll_backend__deep_profiling__Var_20, ll_backend__deep_profiling__CSNVar_6, &ll_backend__deep_profiling__UnifyGoal_7);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__deep_profiling__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__CSNVar_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__UnifyGoal_7));
    }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__generate_csn_vector_cell_6_p_0(
  MR_Integer ll_backend__deep_profiling__Length_7,
  MR_Word ll_backend__deep_profiling__CSNVars_8,
  MR_Word * ll_backend__deep_profiling__CellVar_9,
  MR_Word * ll_backend__deep_profiling__CellGoal_10,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_20)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__VarInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 6)));
    MR_Word ll_backend__deep_profiling__ProfilingBuiltin_13;
    MR_String ll_backend__deep_profiling__CellTypeName_14;
    MR_Word ll_backend__deep_profiling__CellTypeCtor_15;
    MR_Word ll_backend__deep_profiling__CellType_16;
    MR_Word ll_backend__deep_profiling__VarInfo_17;
    MR_Word ll_backend__deep_profiling__ConsId_18;
    MR_Word ll_backend__deep_profiling__Var_25;
    MR_String ll_backend__deep_profiling__Var_48;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_64;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_65;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_66;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_67;
    MR_Word ll_backend__deep_profiling__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 0)));
    MR_Word ll_backend__deep_profiling__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 1)));
    MR_Word ll_backend__deep_profiling__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 2)));
    MR_Word ll_backend__deep_profiling__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 3)));
    MR_Word ll_backend__deep_profiling__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 4)));
    MR_Word ll_backend__deep_profiling__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 5)));
    MR_String ll_backend__deep_profiling__Var_37 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 7)));
    MR_Word ll_backend__deep_profiling__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 8)));
    MR_Word ll_backend__deep_profiling__Var_39;
    MR_Word ll_backend__deep_profiling__Var_40;
    MR_Word ll_backend__deep_profiling__Var_41;
    MR_Word ll_backend__deep_profiling__Var_42;
    MR_Word ll_backend__deep_profiling__Var_43;
    MR_Word ll_backend__deep_profiling__Var_44;
    MR_String ll_backend__deep_profiling__Var_46;
    MR_Word ll_backend__deep_profiling__Var_47;
    MR_Word ll_backend__deep_profiling__Var_45;

    {
      ll_backend__deep_profiling__ProfilingBuiltin_13 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_6[2], ll_backend__deep_profiling__Length_7, &ll_backend__deep_profiling__Var_48);
    }
    {
      ll_backend__deep_profiling__CellTypeName_14 = mercury__string__f_43_43_2_f_0((MR_String) "call_site_nums_", ll_backend__deep_profiling__Var_48);
    }
    {
      ll_backend__deep_profiling__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_25, 0) = ((MR_Box) (ll_backend__deep_profiling__ProfilingBuiltin_13));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_25, 1) = ((MR_Box) (ll_backend__deep_profiling__CellTypeName_14));
    }
    {
      ll_backend__deep_profiling__CellTypeCtor_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__CellTypeCtor_15, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_25));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__CellTypeCtor_15, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__prog_type__construct_type_3_p_0(ll_backend__deep_profiling__CellTypeCtor_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__CellType_16);
    }
    ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo0_12, (MR_Integer) 0)));
    ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo0_12, (MR_Integer) 1)));
    {
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "CSNCell", ll_backend__deep_profiling__CellVar_9, ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_64, &ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_66);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(*ll_backend__deep_profiling__CellVar_9, ll_backend__deep_profiling__CellType_16, ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_65, &ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_67);
    }
    {
      ll_backend__deep_profiling__VarInfo_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo_17, 0) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_66));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo_17, 1) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_67));
    }
    ll_backend__deep_profiling__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 0)));
    ll_backend__deep_profiling__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 1)));
    ll_backend__deep_profiling__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 2)));
    ll_backend__deep_profiling__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 3)));
    ll_backend__deep_profiling__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 4)));
    ll_backend__deep_profiling__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 5)));
    ll_backend__deep_profiling__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 6)));
    ll_backend__deep_profiling__Var_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 7)));
    ll_backend__deep_profiling__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 8)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_20 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_39));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_40));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_41));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__deep_profiling__Var_42));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__deep_profiling__Var_43));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__deep_profiling__Var_44));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__deep_profiling__VarInfo_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__deep_profiling__Var_46));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__deep_profiling__Var_47));
    }
    {
      ll_backend__deep_profiling__ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__ConsId_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__ConsId_18, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_25));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__ConsId_18, 2) = ((MR_Box) (ll_backend__deep_profiling__Length_7));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__ConsId_18, 3) = ((MR_Box) (ll_backend__deep_profiling__CellTypeCtor_15));
    }
    {
      ll_backend__deep_profiling__generate_deep_cell_unify_5_p_0(ll_backend__deep_profiling__Length_7, ll_backend__deep_profiling__ConsId_18, ll_backend__deep_profiling__CSNVars_8, *ll_backend__deep_profiling__CellVar_9, ll_backend__deep_profiling__CellGoal_10);
    }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__generate_csn_vector_7_p_0_2(
  MR_Box ll_backend__deep_profiling__closure_arg,
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box * ll_backend__deep_profiling__wrapper_arg_2,
  MR_Box ll_backend__deep_profiling__wrapper_arg_3,
  MR_Box * ll_backend__deep_profiling__wrapper_arg_4)
{
  {
    MR_Box ll_backend__deep_profiling__closure = ll_backend__deep_profiling__closure_arg;
    MR_Word ll_backend__deep_profiling__conv1_HeadVar__2_2;
    MR_Word ll_backend__deep_profiling__conv0_STATE_VARIABLE_DeepInfo_13;

    {
      ll_backend__deep_profiling__generate_single_csn_unify_4_p_0(((MR_Integer) ll_backend__deep_profiling__wrapper_arg_1), &ll_backend__deep_profiling__conv1_HeadVar__2_2, ((MR_Word) ll_backend__deep_profiling__wrapper_arg_3), &ll_backend__deep_profiling__conv0_STATE_VARIABLE_DeepInfo_13);
    }
    *ll_backend__deep_profiling__wrapper_arg_2 = ((MR_Box) (ll_backend__deep_profiling__conv1_HeadVar__2_2));
    *ll_backend__deep_profiling__wrapper_arg_4 = ((MR_Box) (ll_backend__deep_profiling__conv0_STATE_VARIABLE_DeepInfo_13));
  }
}

static MR_bool MR_CALL 
ll_backend__deep_profiling__generate_csn_vector_7_p_0_1(
  MR_Box ll_backend__deep_profiling__closure_arg)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Box ll_backend__deep_profiling__closure = ll_backend__deep_profiling__closure_arg;

    {
      ll_backend__deep_profiling__succeeded = mercury__int__f_less_or_equal_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__closure, (MR_Integer) 4))));
    }
    return ll_backend__deep_profiling__succeeded;
  }
}

static void MR_CALL 
ll_backend__deep_profiling__generate_csn_vector_7_p_0(
  MR_Integer ll_backend__deep_profiling__Length_8,
  MR_Word ll_backend__deep_profiling__CSNs_9,
  MR_Word * ll_backend__deep_profiling__CSNVars_10,
  MR_Word * ll_backend__deep_profiling__UnifyGoals_11,
  MR_Word * ll_backend__deep_profiling__CellVar_12,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_21,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_22)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__CSNs_9)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer ll_backend__deep_profiling__CSN_14;
    MR_Word ll_backend__deep_profiling__Var_23;

    if (ll_backend__deep_profiling__succeeded)
      {
        ll_backend__deep_profiling__CSN_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__CSNs_9, (MR_Integer) 0)));
        ll_backend__deep_profiling__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__CSNs_9, (MR_Integer) 1)));
        ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__Var_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (ll_backend__deep_profiling__succeeded)
      {
        MR_Word ll_backend__deep_profiling__UnifyGoal_16;
        MR_Word ll_backend__deep_profiling__Var_24;

        {
          ll_backend__deep_profiling__generate_single_csn_unify_4_p_0(ll_backend__deep_profiling__CSN_14, &ll_backend__deep_profiling__Var_24, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_21, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_22);
        }
        *ll_backend__deep_profiling__CellVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_24, (MR_Integer) 0)));
        ll_backend__deep_profiling__UnifyGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_24, (MR_Integer) 1)));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__deep_profiling__CSNVars_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*ll_backend__deep_profiling__CellVar_12));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__deep_profiling__UnifyGoals_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__UnifyGoal_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    else
      {
        MR_Word ll_backend__deep_profiling__TypeInfo_45_45;
        MR_Word ll_backend__deep_profiling__TypeCtorInfo_46_46;
        MR_Word ll_backend__deep_profiling__CSNVarsGoals_17;
        MR_Word ll_backend__deep_profiling__InnerVars_18;
        MR_Word ll_backend__deep_profiling__InnerGoals_19;
        MR_Word ll_backend__deep_profiling__CellGoal_20;
        MR_Word ll_backend__deep_profiling__Var_28;
        MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_34_34;
        MR_Word ll_backend__deep_profiling__Var_36;
        MR_Box ll_backend__deep_profiling__conv2_STATE_VARIABLE_DeepInfo_34_34;

        {
          ll_backend__deep_profiling__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_28, 0) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_7[1]));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_28, 1) = ((MR_Box) (ll_backend__deep_profiling__generate_csn_vector_7_p_0_1));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_28, 3) = ((MR_Box) (ll_backend__deep_profiling__Length_8));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_28, 4) = ((MR_Box) ((MR_Integer) 9));
        }
        {
          mercury__require__expect_4_p_0(ll_backend__deep_profiling__Var_28, (MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.generate_csn_vector\'/7", (MR_String) "too long");
        }
        {
          mercury__list__map_foldl_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__deep_profiling_scalar_common_1[2], (MR_Word) &ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0, (MR_Word) &ll_backend__deep_profiling_scalar_common_1[10], ll_backend__deep_profiling__CSNs_9, &ll_backend__deep_profiling__CSNVarsGoals_17, ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_21)), &ll_backend__deep_profiling__conv2_STATE_VARIABLE_DeepInfo_34_34);
        }
        ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_34_34 = ((MR_Word) ll_backend__deep_profiling__conv2_STATE_VARIABLE_DeepInfo_34_34);
        ll_backend__deep_profiling__TypeInfo_45_45 = (MR_Word) &ll_backend__deep_profiling_scalar_common_2[1];
        ll_backend__deep_profiling__TypeCtorInfo_46_46 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
        {
          ll_backend__deep_profiling__InnerVars_18 = mercury__assoc_list__keys_1_f_0(ll_backend__deep_profiling__TypeInfo_45_45, ll_backend__deep_profiling__TypeCtorInfo_46_46, ll_backend__deep_profiling__CSNVarsGoals_17);
        }
        {
          ll_backend__deep_profiling__InnerGoals_19 = mercury__assoc_list__values_1_f_0(ll_backend__deep_profiling__TypeInfo_45_45, ll_backend__deep_profiling__TypeCtorInfo_46_46, ll_backend__deep_profiling__CSNVarsGoals_17);
        }
        {
          ll_backend__deep_profiling__generate_csn_vector_cell_6_p_0(ll_backend__deep_profiling__Length_8, ll_backend__deep_profiling__InnerVars_18, ll_backend__deep_profiling__CellVar_12, &ll_backend__deep_profiling__CellGoal_20, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_34_34, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_22);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__deep_profiling__CSNVars_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*ll_backend__deep_profiling__CellVar_12));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__deep_profiling__InnerVars_18));
        }
        {
          ll_backend__deep_profiling__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_36, 0) = ((MR_Box) (ll_backend__deep_profiling__CellGoal_20));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          *ll_backend__deep_profiling__UnifyGoals_11 = mercury__list__f_43_43_2_f_0(ll_backend__deep_profiling__TypeCtorInfo_46_46, ll_backend__deep_profiling__InnerGoals_19, ll_backend__deep_profiling__Var_36);
        }
      }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__generate_depth_var_4_p_0(
  MR_Integer ll_backend__deep_profiling__CSN_5,
  MR_Word * ll_backend__deep_profiling__DepthVar_6,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_12)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__VarInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 6)));
    MR_String ll_backend__deep_profiling__VarName_9;
    MR_Word ll_backend__deep_profiling__VarInfo_10;
    MR_Word ll_backend__deep_profiling__Var_17;
    MR_String ll_backend__deep_profiling__Var_36;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_52;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_53;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_54;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_55;
    MR_Word ll_backend__deep_profiling__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 0)));
    MR_Word ll_backend__deep_profiling__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 1)));
    MR_Word ll_backend__deep_profiling__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 2)));
    MR_Word ll_backend__deep_profiling__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 3)));
    MR_Word ll_backend__deep_profiling__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 4)));
    MR_Word ll_backend__deep_profiling__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 5)));
    MR_String ll_backend__deep_profiling__Var_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 7)));
    MR_Word ll_backend__deep_profiling__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 8)));
    MR_Word ll_backend__deep_profiling__Var_27;
    MR_Word ll_backend__deep_profiling__Var_28;
    MR_Word ll_backend__deep_profiling__Var_29;
    MR_Word ll_backend__deep_profiling__Var_30;
    MR_Word ll_backend__deep_profiling__Var_31;
    MR_Word ll_backend__deep_profiling__Var_32;
    MR_String ll_backend__deep_profiling__Var_34;
    MR_Word ll_backend__deep_profiling__Var_35;
    MR_Word ll_backend__deep_profiling__Var_33;

    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_6[2], ll_backend__deep_profiling__CSN_5, &ll_backend__deep_profiling__Var_36);
    }
    {
      ll_backend__deep_profiling__VarName_9 = mercury__string__f_43_43_2_f_0((MR_String) "Depth", ll_backend__deep_profiling__Var_36);
    }
    {
      ll_backend__deep_profiling__Var_17 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
    ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo0_8, (MR_Integer) 0)));
    ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo0_8, (MR_Integer) 1)));
    {
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__VarName_9, ll_backend__deep_profiling__DepthVar_6, ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_52, &ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_54);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(*ll_backend__deep_profiling__DepthVar_6, ll_backend__deep_profiling__Var_17, ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_53, &ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_55);
    }
    {
      ll_backend__deep_profiling__VarInfo_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo_10, 0) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_54));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo_10, 1) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_55));
    }
    ll_backend__deep_profiling__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 0)));
    ll_backend__deep_profiling__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 1)));
    ll_backend__deep_profiling__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 2)));
    ll_backend__deep_profiling__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 3)));
    ll_backend__deep_profiling__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 4)));
    ll_backend__deep_profiling__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 5)));
    ll_backend__deep_profiling__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 6)));
    ll_backend__deep_profiling__Var_34 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 7)));
    ll_backend__deep_profiling__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 8)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_28));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__deep_profiling__Var_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__deep_profiling__Var_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__deep_profiling__Var_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__deep_profiling__VarInfo_10));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__deep_profiling__Var_34));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__deep_profiling__Var_35));
    }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_p_0_1(
  MR_Box ll_backend__deep_profiling__closure_arg,
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box * ll_backend__deep_profiling__wrapper_arg_2,
  MR_Box ll_backend__deep_profiling__wrapper_arg_3,
  MR_Box * ll_backend__deep_profiling__wrapper_arg_4)
{
  {
    MR_Box ll_backend__deep_profiling__closure = ll_backend__deep_profiling__closure_arg;
    MR_Word ll_backend__deep_profiling__conv1_DepthVar_6;
    MR_Word ll_backend__deep_profiling__conv0_STATE_VARIABLE_DeepInfo_12;

    {
      ll_backend__deep_profiling__generate_depth_var_4_p_0(((MR_Integer) ll_backend__deep_profiling__wrapper_arg_1), &ll_backend__deep_profiling__conv1_DepthVar_6, ((MR_Word) ll_backend__deep_profiling__wrapper_arg_3), &ll_backend__deep_profiling__conv0_STATE_VARIABLE_DeepInfo_12);
    }
    *ll_backend__deep_profiling__wrapper_arg_2 = ((MR_Box) (ll_backend__deep_profiling__conv1_DepthVar_6));
    *ll_backend__deep_profiling__wrapper_arg_4 = ((MR_Box) (ll_backend__deep_profiling__conv0_STATE_VARIABLE_DeepInfo_12));
  }
}

static void MR_CALL 
ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_p_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word ll_backend__deep_profiling__CSDVar_2,
  MR_Word * ll_backend__deep_profiling__HeadVar__3_3,
  MR_Word * ll_backend__deep_profiling__HeadVar__4_4,
  MR_Word * ll_backend__deep_profiling__HeadVar__5_5,
  MR_Word * ll_backend__deep_profiling__HeadVar__6_6,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_7,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_8)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;

    if ((ll_backend__deep_profiling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__deep_profiling__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__deep_profiling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__deep_profiling__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__deep_profiling__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_8 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_7;
      }
    else
      {
        MR_Word ll_backend__deep_profiling__TypeCtorInfo_97_97 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Word ll_backend__deep_profiling__TypeInfo_98_98 = (MR_Word) &ll_backend__deep_profiling_scalar_common_2[1];
        MR_Word ll_backend__deep_profiling__TypeCtorInfo_100_100;
        MR_Word ll_backend__deep_profiling__Chunk_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__deep_profiling__Chunks_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__deep_profiling__DepthVars_21;
        MR_Integer ll_backend__deep_profiling__Length_22;
        MR_Word ll_backend__deep_profiling__CSNCallVars_23;
        MR_Word ll_backend__deep_profiling__CSNCallGoals_24;
        MR_Word ll_backend__deep_profiling__CallCellVar_25;
        MR_Word ll_backend__deep_profiling__CSNExitVars_26;
        MR_Word ll_backend__deep_profiling__CSNExitGoals_27;
        MR_Word ll_backend__deep_profiling__ExitCellVar_28;
        MR_Word ll_backend__deep_profiling__CSNFailVars_29;
        MR_Word ll_backend__deep_profiling__CSNFailGoals_30;
        MR_Word ll_backend__deep_profiling__FailCellVar_31;
        MR_Word ll_backend__deep_profiling__CSNExtraVars_32;
        MR_String ll_backend__deep_profiling__CallPredName_33;
        MR_String ll_backend__deep_profiling__ExitPredName_34;
        MR_String ll_backend__deep_profiling__FailPredName_35;
        MR_Word ll_backend__deep_profiling__ModuleInfo_36;
        MR_Word ll_backend__deep_profiling__CallCellGoal_37;
        MR_Word ll_backend__deep_profiling__ExitCellGoal_38;
        MR_Word ll_backend__deep_profiling__FailCellGoal_39;
        MR_Word ll_backend__deep_profiling__TailCallGoals_40;
        MR_Word ll_backend__deep_profiling__TailExitGoals_41;
        MR_Word ll_backend__deep_profiling__TailFailGoals_42;
        MR_Word ll_backend__deep_profiling__TailExtraVars_43;
        MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47;
        MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_48_48;
        MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_49_49;
        MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_50_50;
        MR_Word ll_backend__deep_profiling__Var_51;
        MR_Word ll_backend__deep_profiling__Var_52;
        MR_Word ll_backend__deep_profiling__Var_53;
        MR_Integer ll_backend__deep_profiling__Var_67;
        MR_Word ll_backend__deep_profiling__Var_68;
        MR_Word ll_backend__deep_profiling__Var_70;
        MR_Integer ll_backend__deep_profiling__Var_71;
        MR_Word ll_backend__deep_profiling__Var_72;
        MR_Word ll_backend__deep_profiling__Var_75;
        MR_Integer ll_backend__deep_profiling__Var_76;
        MR_Word ll_backend__deep_profiling__Var_77;
        MR_Word ll_backend__deep_profiling__Var_80;
        MR_Word ll_backend__deep_profiling__Var_82;
        MR_Word ll_backend__deep_profiling__Var_83;
        MR_Word ll_backend__deep_profiling__Var_84;
        MR_String ll_backend__deep_profiling__Var_101;
        MR_Word ll_backend__deep_profiling__Var_107;
        MR_String ll_backend__deep_profiling__Var_109;
        MR_String ll_backend__deep_profiling__Var_117;
        MR_Box ll_backend__deep_profiling__conv2_STATE_VARIABLE_DeepInfo_47_47;
        MR_Word ll_backend__deep_profiling__Var_85;
        MR_Word ll_backend__deep_profiling__Var_86;
        MR_Word ll_backend__deep_profiling__Var_87;
        MR_Word ll_backend__deep_profiling__Var_88;
        MR_Word ll_backend__deep_profiling__Var_89;
        MR_Word ll_backend__deep_profiling__Var_90;
        MR_String ll_backend__deep_profiling__Var_91;
        MR_Word ll_backend__deep_profiling__Var_92;

        {
          mercury__list__map_foldl_5_p_0(ll_backend__deep_profiling__TypeCtorInfo_97_97, ll_backend__deep_profiling__TypeInfo_98_98, (MR_Word) &ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0, (MR_Word) &ll_backend__deep_profiling_scalar_common_1[9], ll_backend__deep_profiling__Chunk_13, &ll_backend__deep_profiling__DepthVars_21, ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_7)), &ll_backend__deep_profiling__conv2_STATE_VARIABLE_DeepInfo_47_47);
        }
        ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47 = ((MR_Word) ll_backend__deep_profiling__conv2_STATE_VARIABLE_DeepInfo_47_47);
        {
          mercury__list__length_2_p_0(ll_backend__deep_profiling__TypeCtorInfo_97_97, ll_backend__deep_profiling__Chunk_13, &ll_backend__deep_profiling__Length_22);
        }
        {
          ll_backend__deep_profiling__generate_csn_vector_7_p_0(ll_backend__deep_profiling__Length_22, ll_backend__deep_profiling__Chunk_13, &ll_backend__deep_profiling__CSNCallVars_23, &ll_backend__deep_profiling__CSNCallGoals_24, &ll_backend__deep_profiling__CallCellVar_25, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, &ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_48_48);
        }
        {
          ll_backend__deep_profiling__generate_csn_vector_7_p_0(ll_backend__deep_profiling__Length_22, ll_backend__deep_profiling__Chunk_13, &ll_backend__deep_profiling__CSNExitVars_26, &ll_backend__deep_profiling__CSNExitGoals_27, &ll_backend__deep_profiling__ExitCellVar_28, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_48_48, &ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_49_49);
        }
        {
          ll_backend__deep_profiling__generate_csn_vector_7_p_0(ll_backend__deep_profiling__Length_22, ll_backend__deep_profiling__Chunk_13, &ll_backend__deep_profiling__CSNFailVars_29, &ll_backend__deep_profiling__CSNFailGoals_30, &ll_backend__deep_profiling__FailCellVar_31, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_49_49, &ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_50_50);
        }
        {
          ll_backend__deep_profiling__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_53, 0) = ((MR_Box) (ll_backend__deep_profiling__CSNFailVars_29));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__deep_profiling__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_52, 0) = ((MR_Box) (ll_backend__deep_profiling__CSNExitVars_26));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_52, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_53));
        }
        {
          ll_backend__deep_profiling__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_51, 0) = ((MR_Box) (ll_backend__deep_profiling__CSNCallVars_23));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_51, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_52));
        }
        {
          mercury__list__condense_2_p_0(ll_backend__deep_profiling__TypeInfo_98_98, ll_backend__deep_profiling__Var_51, &ll_backend__deep_profiling__CSNExtraVars_32);
        }
        ll_backend__deep_profiling__Var_107 = (MR_Word) &ll_backend__deep_profiling_scalar_common_6[2];
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__deep_profiling__Var_107, ll_backend__deep_profiling__Length_22, &ll_backend__deep_profiling__Var_101);
        }
        {
          ll_backend__deep_profiling__CallPredName_33 = mercury__string__f_43_43_2_f_0((MR_String) "save_recursion_depth_", ll_backend__deep_profiling__Var_101);
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__deep_profiling__Var_107, ll_backend__deep_profiling__Length_22, &ll_backend__deep_profiling__Var_109);
        }
        {
          ll_backend__deep_profiling__ExitPredName_34 = mercury__string__f_43_43_2_f_0((MR_String) "restore_recursion_depth_exit_", ll_backend__deep_profiling__Var_109);
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__deep_profiling__Var_107, ll_backend__deep_profiling__Length_22, &ll_backend__deep_profiling__Var_117);
        }
        {
          ll_backend__deep_profiling__FailPredName_35 = mercury__string__f_43_43_2_f_0((MR_String) "restore_recursion_depth_fail_", ll_backend__deep_profiling__Var_117);
        }
        ll_backend__deep_profiling__ModuleInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_50_50, (MR_Integer) 0)));
        ll_backend__deep_profiling__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_50_50, (MR_Integer) 1)));
        ll_backend__deep_profiling__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_50_50, (MR_Integer) 2)));
        ll_backend__deep_profiling__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_50_50, (MR_Integer) 3)));
        ll_backend__deep_profiling__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_50_50, (MR_Integer) 4)));
        ll_backend__deep_profiling__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_50_50, (MR_Integer) 5)));
        ll_backend__deep_profiling__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_50_50, (MR_Integer) 6)));
        ll_backend__deep_profiling__Var_91 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_50_50, (MR_Integer) 7)));
        ll_backend__deep_profiling__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_50_50, (MR_Integer) 8)));
        ll_backend__deep_profiling__Var_67 = (ll_backend__deep_profiling__Length_22 + (MR_Integer) 2);
        {
          ll_backend__deep_profiling__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_70, 0) = ((MR_Box) (ll_backend__deep_profiling__CallCellVar_25));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_70, 1) = ((MR_Box) (ll_backend__deep_profiling__DepthVars_21));
        }
        {
          ll_backend__deep_profiling__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_68, 0) = ((MR_Box) (ll_backend__deep_profiling__CSDVar_2));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_68, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_70));
        }
        {
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_36, ll_backend__deep_profiling__CallPredName_33, ll_backend__deep_profiling__Var_67, ll_backend__deep_profiling__Var_68, ll_backend__deep_profiling__DepthVars_21, &ll_backend__deep_profiling__CallCellGoal_37);
        }
        ll_backend__deep_profiling__Var_71 = (ll_backend__deep_profiling__Length_22 + (MR_Integer) 2);
        {
          ll_backend__deep_profiling__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_75, 0) = ((MR_Box) (ll_backend__deep_profiling__ExitCellVar_28));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_75, 1) = ((MR_Box) (ll_backend__deep_profiling__DepthVars_21));
        }
        {
          ll_backend__deep_profiling__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_72, 0) = ((MR_Box) (ll_backend__deep_profiling__CSDVar_2));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_72, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_75));
        }
        {
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_36, ll_backend__deep_profiling__ExitPredName_34, ll_backend__deep_profiling__Var_71, ll_backend__deep_profiling__Var_72, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__ExitCellGoal_38);
        }
        ll_backend__deep_profiling__Var_76 = (ll_backend__deep_profiling__Length_22 + (MR_Integer) 2);
        {
          ll_backend__deep_profiling__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_80, 0) = ((MR_Box) (ll_backend__deep_profiling__FailCellVar_31));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_80, 1) = ((MR_Box) (ll_backend__deep_profiling__DepthVars_21));
        }
        {
          ll_backend__deep_profiling__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_77, 0) = ((MR_Box) (ll_backend__deep_profiling__CSDVar_2));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_77, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_80));
        }
        {
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_36, ll_backend__deep_profiling__FailPredName_35, ll_backend__deep_profiling__Var_76, ll_backend__deep_profiling__Var_77, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__FailCellGoal_39);
        }
        {
          ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_p_0(ll_backend__deep_profiling__Chunks_14, ll_backend__deep_profiling__CSDVar_2, &ll_backend__deep_profiling__TailCallGoals_40, &ll_backend__deep_profiling__TailExitGoals_41, &ll_backend__deep_profiling__TailFailGoals_42, &ll_backend__deep_profiling__TailExtraVars_43, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_50_50, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_8);
        }
        ll_backend__deep_profiling__TypeCtorInfo_100_100 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
        {
          ll_backend__deep_profiling__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_82, 0) = ((MR_Box) (ll_backend__deep_profiling__CallCellGoal_37));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_82, 1) = ((MR_Box) (ll_backend__deep_profiling__TailCallGoals_40));
        }
        {
          *ll_backend__deep_profiling__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(ll_backend__deep_profiling__TypeCtorInfo_100_100, ll_backend__deep_profiling__CSNCallGoals_24, ll_backend__deep_profiling__Var_82);
        }
        {
          ll_backend__deep_profiling__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_83, 0) = ((MR_Box) (ll_backend__deep_profiling__ExitCellGoal_38));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_83, 1) = ((MR_Box) (ll_backend__deep_profiling__TailExitGoals_41));
        }
        {
          *ll_backend__deep_profiling__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(ll_backend__deep_profiling__TypeCtorInfo_100_100, ll_backend__deep_profiling__CSNExitGoals_27, ll_backend__deep_profiling__Var_83);
        }
        {
          ll_backend__deep_profiling__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_84, 0) = ((MR_Box) (ll_backend__deep_profiling__FailCellGoal_39));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_84, 1) = ((MR_Box) (ll_backend__deep_profiling__TailFailGoals_42));
        }
        {
          *ll_backend__deep_profiling__HeadVar__5_5 = mercury__list__f_43_43_2_f_0(ll_backend__deep_profiling__TypeCtorInfo_100_100, ll_backend__deep_profiling__CSNFailGoals_30, ll_backend__deep_profiling__Var_84);
        }
        {
          *ll_backend__deep_profiling__HeadVar__6_6 = mercury__list__f_43_43_2_f_0(ll_backend__deep_profiling__TypeInfo_98_98, ll_backend__deep_profiling__CSNExtraVars_32, ll_backend__deep_profiling__TailExtraVars_43);
        }
      }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_8_p_0(
  MR_Word ll_backend__deep_profiling__CSNs_9,
  MR_Word ll_backend__deep_profiling__CSDVar_10,
  MR_Word * ll_backend__deep_profiling__CallGoals_11,
  MR_Word * ll_backend__deep_profiling__ExitGoals_12,
  MR_Word * ll_backend__deep_profiling__FailGoals_13,
  MR_Word * ll_backend__deep_profiling__ExtraVars_14,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_17,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_18)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__CSNChunks_16;

    {
      mercury__list__chunk_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__deep_profiling__CSNs_9, (MR_Integer) 9, &ll_backend__deep_profiling__CSNChunks_16);
    }
    {
      ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_p_0(ll_backend__deep_profiling__CSNChunks_16, ll_backend__deep_profiling__CSDVar_10, ll_backend__deep_profiling__CallGoals_11, ll_backend__deep_profiling__ExitGoals_12, ll_backend__deep_profiling__FailGoals_13, ll_backend__deep_profiling__ExtraVars_14, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_17, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_18);
    }
  }
}

static MR_Word MR_CALL 
ll_backend__deep_profiling__classify_call_2_f_0(
  MR_Word ll_backend__deep_profiling__ModuleInfo_4,
  MR_Word ll_backend__deep_profiling__Expr_5)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__Class_6;

    switch (MR_tag((MR_Word) ll_backend__deep_profiling__Expr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "function \140ll_backend.deep_profiling.classify_call\'/2", (MR_String) "unexpected goal type");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "function \140ll_backend.deep_profiling.classify_call\'/2", (MR_String) "unexpected goal type");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__deep_profiling__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__Expr_5, (MR_Integer) 0)));
          MR_Integer ll_backend__deep_profiling__ProcId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__Expr_5, (MR_Integer) 1)));
          MR_Word ll_backend__deep_profiling__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__Expr_5, (MR_Integer) 2)));
          MR_Word ll_backend__deep_profiling__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__Expr_5, (MR_Integer) 3)));
          MR_Word ll_backend__deep_profiling__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__Expr_5, (MR_Integer) 4)));
          MR_Word ll_backend__deep_profiling__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__Expr_5, (MR_Integer) 5)));
          MR_Word ll_backend__deep_profiling__TypeInfoVar_14;
          MR_Word ll_backend__deep_profiling__Var_54;
          MR_Word ll_backend__deep_profiling__Var_78;
          MR_Integer ll_backend__deep_profiling__Var_13;
          MR_Word ll_backend__deep_profiling__Var_15;

          {
            ll_backend__deep_profiling__Var_54 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
          }
          {
            hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ll_backend__deep_profiling__ModuleInfo_4, ll_backend__deep_profiling__Var_54, (MR_String) "unify", (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__deep_profiling_scalar_common_6[1]), &ll_backend__deep_profiling__Var_78, &ll_backend__deep_profiling__Var_13);
          }
          {
            ll_backend__deep_profiling__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ll_backend__deep_profiling__PredId_7, ll_backend__deep_profiling__Var_78);
          }
          if (ll_backend__deep_profiling__succeeded)
            {
              ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__Args_9)) == (MR_mktag((MR_Integer) 1)));
              if (ll_backend__deep_profiling__succeeded)
                {
                  ll_backend__deep_profiling__TypeInfoVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Args_9, (MR_Integer) 0)));
                  ll_backend__deep_profiling__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Args_9, (MR_Integer) 1)));
                }
            }
          if (ll_backend__deep_profiling__succeeded)
            {
              MR_Word ll_backend__deep_profiling__Var_60;

              {
                ll_backend__deep_profiling__Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_60, 0) = ((MR_Box) (ll_backend__deep_profiling__PredId_7));
                MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_60, 1) = ((MR_Box) (ll_backend__deep_profiling__ProcId_8));
              }
              {
                ll_backend__deep_profiling__Class_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Class_6, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_60));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Class_6, 1) = ((MR_Box) (ll_backend__deep_profiling__TypeInfoVar_14));
              }
            }
          else
            {
              MR_Word ll_backend__deep_profiling__TypeInfoVar_77;
              MR_Word ll_backend__deep_profiling__Var_61;
              MR_Word ll_backend__deep_profiling__Var_79;
              MR_Integer ll_backend__deep_profiling__Var_16;
              MR_Word ll_backend__deep_profiling__Var_17;

              {
                ll_backend__deep_profiling__Var_61 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
              {
                hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ll_backend__deep_profiling__ModuleInfo_4, ll_backend__deep_profiling__Var_61, (MR_String) "compare", (MR_Integer) 0, (MR_Integer) 3, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__deep_profiling_scalar_common_6[1]), &ll_backend__deep_profiling__Var_79, &ll_backend__deep_profiling__Var_16);
              }
              {
                ll_backend__deep_profiling__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ll_backend__deep_profiling__PredId_7, ll_backend__deep_profiling__Var_79);
              }
              if (ll_backend__deep_profiling__succeeded)
                {
                  ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__Args_9)) == (MR_mktag((MR_Integer) 1)));
                  if (ll_backend__deep_profiling__succeeded)
                    {
                      ll_backend__deep_profiling__TypeInfoVar_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Args_9, (MR_Integer) 0)));
                      ll_backend__deep_profiling__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Args_9, (MR_Integer) 1)));
                    }
                }
              if (ll_backend__deep_profiling__succeeded)
                {
                  MR_Word ll_backend__deep_profiling__Var_67;

                  {
                    ll_backend__deep_profiling__Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_67, 0) = ((MR_Box) (ll_backend__deep_profiling__PredId_7));
                    MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_67, 1) = ((MR_Box) (ll_backend__deep_profiling__ProcId_8));
                  }
                  {
                    ll_backend__deep_profiling__Class_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Class_6, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_67));
                    MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Class_6, 1) = ((MR_Box) (ll_backend__deep_profiling__TypeInfoVar_77));
                  }
                }
              else
                {
                  MR_Word ll_backend__deep_profiling__TypeInfoVar_76;
                  MR_Word ll_backend__deep_profiling__Var_68;
                  MR_Word ll_backend__deep_profiling__Var_80;
                  MR_Integer ll_backend__deep_profiling__Var_18;
                  MR_Word ll_backend__deep_profiling__Var_19;

                  {
                    ll_backend__deep_profiling__Var_68 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                  }
                  {
                    hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ll_backend__deep_profiling__ModuleInfo_4, ll_backend__deep_profiling__Var_68, (MR_String) "compare_representation", (MR_Integer) 0, (MR_Integer) 3, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__deep_profiling_scalar_common_6[1]), &ll_backend__deep_profiling__Var_80, &ll_backend__deep_profiling__Var_18);
                  }
                  {
                    ll_backend__deep_profiling__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ll_backend__deep_profiling__PredId_7, ll_backend__deep_profiling__Var_80);
                  }
                  if (ll_backend__deep_profiling__succeeded)
                    {
                      ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__Args_9)) == (MR_mktag((MR_Integer) 1)));
                      if (ll_backend__deep_profiling__succeeded)
                        {
                          ll_backend__deep_profiling__TypeInfoVar_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Args_9, (MR_Integer) 0)));
                          ll_backend__deep_profiling__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Args_9, (MR_Integer) 1)));
                        }
                    }
                  if (ll_backend__deep_profiling__succeeded)
                    {
                      MR_Word ll_backend__deep_profiling__Var_74;

                      {
                        ll_backend__deep_profiling__Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_74, 0) = ((MR_Box) (ll_backend__deep_profiling__PredId_7));
                        MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_74, 1) = ((MR_Box) (ll_backend__deep_profiling__ProcId_8));
                      }
                      {
                        ll_backend__deep_profiling__Class_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Class_6, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_74));
                        MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Class_6, 1) = ((MR_Box) (ll_backend__deep_profiling__TypeInfoVar_76));
                      }
                    }
                  else
                    {
                      MR_Word ll_backend__deep_profiling__Var_75;

                      {
                        ll_backend__deep_profiling__Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_75, 0) = ((MR_Box) (ll_backend__deep_profiling__PredId_7));
                        MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_75, 1) = ((MR_Box) (ll_backend__deep_profiling__ProcId_8));
                      }
                      ll_backend__deep_profiling__Class_6 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__deep_profiling__Var_75);
                    }
                }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Expr_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__deep_profiling__Generic_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Expr_5, (MR_Integer) 1)));
              MR_Word ll_backend__deep_profiling__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Expr_5, (MR_Integer) 2)));
              MR_Word ll_backend__deep_profiling__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Expr_5, (MR_Integer) 3)));
              MR_Word ll_backend__deep_profiling__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Expr_5, (MR_Integer) 4)));
              MR_Word ll_backend__deep_profiling__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Expr_5, (MR_Integer) 5)));

              {
                ll_backend__deep_profiling__Class_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__Class_6, 0) = ((MR_Box) (ll_backend__deep_profiling__Generic_20));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "function \140ll_backend.deep_profiling.classify_call\'/2", (MR_String) "unexpected goal type");
              }
            }
            break;
        }
        break;
    }
    return ll_backend__deep_profiling__Class_6;
  }
}

static void MR_CALL 
ll_backend__deep_profiling__compress_filename_3_p_0(
  MR_Word ll_backend__deep_profiling__Deep_4,
  MR_String ll_backend__deep_profiling__FileName0_5,
  MR_String * ll_backend__deep_profiling__FileName_6)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_String ll_backend__deep_profiling__Var_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Deep_4, (MR_Integer) 7)));
    MR_Word ll_backend__deep_profiling__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Deep_4, (MR_Integer) 0)));
    MR_Word ll_backend__deep_profiling__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Deep_4, (MR_Integer) 1)));
    MR_Word ll_backend__deep_profiling__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Deep_4, (MR_Integer) 2)));
    MR_Word ll_backend__deep_profiling__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Deep_4, (MR_Integer) 3)));
    MR_Word ll_backend__deep_profiling__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Deep_4, (MR_Integer) 4)));
    MR_Word ll_backend__deep_profiling__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Deep_4, (MR_Integer) 5)));
    MR_Word ll_backend__deep_profiling__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Deep_4, (MR_Integer) 6)));
    MR_Word ll_backend__deep_profiling__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Deep_4, (MR_Integer) 8)));

    ll_backend__deep_profiling__succeeded = (strcmp(ll_backend__deep_profiling__FileName0_5, ll_backend__deep_profiling__Var_15) == 0);
    if (ll_backend__deep_profiling__succeeded)
      *ll_backend__deep_profiling__FileName_6 = (MR_String) "";
    else
      *ll_backend__deep_profiling__FileName_6 = ll_backend__deep_profiling__FileName0_5;
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_wrap_foreign_code_4_p_0(
  MR_Word ll_backend__deep_profiling__Goal0_5,
  MR_Word * ll_backend__deep_profiling__Goal_6,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_30)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_5, (MR_Integer) 1)));
    MR_Word ll_backend__deep_profiling__GoalId_10;
    MR_Word ll_backend__deep_profiling__ContainingGoalMap_11;
    MR_Word ll_backend__deep_profiling__GoalPath_12;
    MR_Word ll_backend__deep_profiling__SiteNumCounter0_13;
    MR_Integer ll_backend__deep_profiling__SiteNum_14;
    MR_Word ll_backend__deep_profiling__SiteNumCounter_15;
    MR_Word ll_backend__deep_profiling__SiteNumVar_16;
    MR_Word ll_backend__deep_profiling__VarInfo_17;
    MR_Word ll_backend__deep_profiling__SiteNumVarGoal_18;
    MR_Word ll_backend__deep_profiling__ModuleInfo_19;
    MR_Word ll_backend__deep_profiling__PrepareGoal_20;
    MR_Word ll_backend__deep_profiling__Context_21;
    MR_Integer ll_backend__deep_profiling__LineNumber_22;
    MR_String ll_backend__deep_profiling__FileName0_23;
    MR_String ll_backend__deep_profiling__FileName_24;
    MR_Word ll_backend__deep_profiling__CallSite_25;
    MR_Word ll_backend__deep_profiling__GoalInfo1_26;
    MR_Word ll_backend__deep_profiling__GoalInfo_27;
    MR_Word ll_backend__deep_profiling__GoalExpr_28;
    MR_Word ll_backend__deep_profiling__Var_32;
    MR_Word ll_backend__deep_profiling__Var_33;
    MR_Word ll_backend__deep_profiling__Var_34;
    MR_Word ll_backend__deep_profiling__Var_37;
    MR_Word ll_backend__deep_profiling__Var_42;
    MR_Word ll_backend__deep_profiling__Var_43;
    MR_Word ll_backend__deep_profiling__Var_44;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47;
    MR_Word ll_backend__deep_profiling__Var_49;
    MR_Word ll_backend__deep_profiling__Var_83;
    MR_Word ll_backend__deep_profiling__Var_84;
    MR_Word ll_backend__deep_profiling__Var_85;
    MR_Word ll_backend__deep_profiling__Var_86;
    MR_Word ll_backend__deep_profiling__Var_88;
    MR_String ll_backend__deep_profiling__Var_90;
    MR_Word ll_backend__deep_profiling__Var_91;
    MR_Word ll_backend__deep_profiling__Var_97;
    MR_Word ll_backend__deep_profiling___GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_5, (MR_Integer) 0)));
    MR_Word ll_backend__deep_profiling__Var_51;
    MR_Word ll_backend__deep_profiling__Var_52;
    MR_Word ll_backend__deep_profiling__Var_53;
    MR_Word ll_backend__deep_profiling__Var_54;
    MR_Word ll_backend__deep_profiling__Var_55;
    MR_Word ll_backend__deep_profiling__Var_56;
    MR_String ll_backend__deep_profiling__Var_57;
    MR_Word ll_backend__deep_profiling__Var_58;
    MR_Word ll_backend__deep_profiling__Var_59;
    MR_Word ll_backend__deep_profiling__Var_60;
    MR_Word ll_backend__deep_profiling__Var_61;
    MR_Word ll_backend__deep_profiling__Var_62;
    MR_Word ll_backend__deep_profiling__Var_63;
    MR_Word ll_backend__deep_profiling__Var_64;
    MR_String ll_backend__deep_profiling__Var_65;
    MR_Word ll_backend__deep_profiling__Var_66;
    MR_Word ll_backend__deep_profiling__Var_67;
    MR_Word ll_backend__deep_profiling__Var_68;
    MR_Word ll_backend__deep_profiling__Var_69;
    MR_Word ll_backend__deep_profiling__Var_70;
    MR_Word ll_backend__deep_profiling__Var_71;
    MR_Word ll_backend__deep_profiling__Var_72;
    MR_String ll_backend__deep_profiling__Var_73;
    MR_Word ll_backend__deep_profiling__Var_74;
    MR_Word ll_backend__deep_profiling__Var_75;
    MR_Word ll_backend__deep_profiling__Var_76;
    MR_Word ll_backend__deep_profiling__Var_77;
    MR_Word ll_backend__deep_profiling__Var_78;
    MR_Word ll_backend__deep_profiling__Var_79;
    MR_Word ll_backend__deep_profiling__Var_80;
    MR_String ll_backend__deep_profiling__Var_81;
    MR_Word ll_backend__deep_profiling__Var_82;
    MR_Word ll_backend__deep_profiling__Var_87;
    MR_Word ll_backend__deep_profiling__Var_89;
    MR_Word ll_backend__deep_profiling__Var_109;
    MR_Word ll_backend__deep_profiling__Var_110;
    MR_Word ll_backend__deep_profiling__Var_111;
    MR_Word ll_backend__deep_profiling__Var_112;
    MR_Word ll_backend__deep_profiling__Var_113;
    MR_Word ll_backend__deep_profiling__Var_115;
    MR_String ll_backend__deep_profiling__Var_116;
    MR_Word ll_backend__deep_profiling__Var_117;
    MR_Word ll_backend__deep_profiling__Var_114;

    {
      ll_backend__deep_profiling__GoalId_10 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__deep_profiling__GoalInfo0_9);
    }
    ll_backend__deep_profiling__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 0)));
    ll_backend__deep_profiling__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 1)));
    ll_backend__deep_profiling__ContainingGoalMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 2)));
    ll_backend__deep_profiling__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 3)));
    ll_backend__deep_profiling__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 4)));
    ll_backend__deep_profiling__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 5)));
    ll_backend__deep_profiling__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 6)));
    ll_backend__deep_profiling__Var_57 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 7)));
    ll_backend__deep_profiling__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 8)));
    {
      ll_backend__deep_profiling__GoalPath_12 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__deep_profiling__ContainingGoalMap_11, ll_backend__deep_profiling__GoalId_10);
    }
    ll_backend__deep_profiling__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 0)));
    ll_backend__deep_profiling__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 1)));
    ll_backend__deep_profiling__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 2)));
    ll_backend__deep_profiling__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 3)));
    ll_backend__deep_profiling__SiteNumCounter0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 4)));
    ll_backend__deep_profiling__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 5)));
    ll_backend__deep_profiling__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 6)));
    ll_backend__deep_profiling__Var_65 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 7)));
    ll_backend__deep_profiling__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 8)));
    {
      mercury__counter__allocate_3_p_0(&ll_backend__deep_profiling__SiteNum_14, ll_backend__deep_profiling__SiteNumCounter0_13, &ll_backend__deep_profiling__SiteNumCounter_15);
    }
    {
      ll_backend__deep_profiling__Var_32 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
    ll_backend__deep_profiling__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 0)));
    ll_backend__deep_profiling__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 1)));
    ll_backend__deep_profiling__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 2)));
    ll_backend__deep_profiling__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 3)));
    ll_backend__deep_profiling__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 4)));
    ll_backend__deep_profiling__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 5)));
    ll_backend__deep_profiling__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 6)));
    ll_backend__deep_profiling__Var_73 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 7)));
    ll_backend__deep_profiling__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 8)));
    {
      ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "SiteNum", ll_backend__deep_profiling__Var_32, &ll_backend__deep_profiling__SiteNumVar_16, ll_backend__deep_profiling__Var_33, &ll_backend__deep_profiling__VarInfo_17);
    }
    {
      ll_backend__deep_profiling__Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_34, 1) = ((MR_Box) (ll_backend__deep_profiling__SiteNum_14));
    }
    {
      ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(ll_backend__deep_profiling__Var_34, ll_backend__deep_profiling__SiteNumVar_16, &ll_backend__deep_profiling__SiteNumVarGoal_18);
    }
    ll_backend__deep_profiling__ModuleInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 0)));
    ll_backend__deep_profiling__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 1)));
    ll_backend__deep_profiling__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 2)));
    ll_backend__deep_profiling__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 3)));
    ll_backend__deep_profiling__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 4)));
    ll_backend__deep_profiling__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 5)));
    ll_backend__deep_profiling__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 6)));
    ll_backend__deep_profiling__Var_81 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 7)));
    ll_backend__deep_profiling__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 8)));
    {
      ll_backend__deep_profiling__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_37, 0) = ((MR_Box) (ll_backend__deep_profiling__SiteNumVar_16));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_19, (MR_String) "prepare_for_callback", (MR_Integer) 1, ll_backend__deep_profiling__Var_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__PrepareGoal_20);
    }
    {
      ll_backend__deep_profiling__Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__deep_profiling__GoalInfo0_9);
    }
    {
      ll_backend__deep_profiling__LineNumber_22 = mercury__term__context_line_1_f_0(ll_backend__deep_profiling__Context_21);
    }
    {
      ll_backend__deep_profiling__FileName0_23 = mercury__term__context_file_1_f_0(ll_backend__deep_profiling__Context_21);
    }
    {
      ll_backend__deep_profiling__compress_filename_3_p_0(ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, ll_backend__deep_profiling__FileName0_23, &ll_backend__deep_profiling__FileName_24);
    }
    {
      ll_backend__deep_profiling__CallSite_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__CallSite_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__CallSite_25, 1) = ((MR_Box) (ll_backend__deep_profiling__FileName_24));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__CallSite_25, 2) = ((MR_Box) (ll_backend__deep_profiling__LineNumber_22));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__CallSite_25, 3) = ((MR_Box) (ll_backend__deep_profiling__GoalPath_12));
    }
    {
      hlds__hlds_goal__make_impure_2_p_0(ll_backend__deep_profiling__GoalInfo0_9, &ll_backend__deep_profiling__GoalInfo1_26);
    }
    {
      hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ll_backend__deep_profiling__GoalInfo1_26, &ll_backend__deep_profiling__GoalInfo_27);
    }
    {
      ll_backend__deep_profiling__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_44, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal0_5));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__deep_profiling__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_43, 0) = ((MR_Box) (ll_backend__deep_profiling__PrepareGoal_20));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_43, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_44));
    }
    {
      ll_backend__deep_profiling__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_42, 0) = ((MR_Box) (ll_backend__deep_profiling__SiteNumVarGoal_18));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_42, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_43));
    }
    {
      ll_backend__deep_profiling__GoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_28, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_28, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_42));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__deep_profiling__Goal_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_27));
    }
    ll_backend__deep_profiling__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 0)));
    ll_backend__deep_profiling__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 1)));
    ll_backend__deep_profiling__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 2)));
    ll_backend__deep_profiling__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 3)));
    ll_backend__deep_profiling__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 4)));
    ll_backend__deep_profiling__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 5)));
    ll_backend__deep_profiling__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 6)));
    ll_backend__deep_profiling__Var_90 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 7)));
    ll_backend__deep_profiling__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 8)));
    ll_backend__deep_profiling__Var_97 = ll_backend__deep_profiling__Var_88;
    {
      ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_83));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_84));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_85));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, 3) = ((MR_Box) (ll_backend__deep_profiling__Var_86));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, 4) = ((MR_Box) (ll_backend__deep_profiling__SiteNumCounter_15));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, 5) = ((MR_Box) (ll_backend__deep_profiling__Var_97));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, 6) = ((MR_Box) (ll_backend__deep_profiling__VarInfo_17));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, 7) = ((MR_Box) (ll_backend__deep_profiling__Var_90));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, 8) = ((MR_Box) (ll_backend__deep_profiling__Var_91));
    }
    {
      ll_backend__deep_profiling__Var_49 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0, ll_backend__deep_profiling__Var_97, ((MR_Box) (ll_backend__deep_profiling__CallSite_25)));
    }
    ll_backend__deep_profiling__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, (MR_Integer) 0)));
    ll_backend__deep_profiling__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, (MR_Integer) 1)));
    ll_backend__deep_profiling__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, (MR_Integer) 2)));
    ll_backend__deep_profiling__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, (MR_Integer) 3)));
    ll_backend__deep_profiling__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, (MR_Integer) 4)));
    ll_backend__deep_profiling__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, (MR_Integer) 5)));
    ll_backend__deep_profiling__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, (MR_Integer) 6)));
    ll_backend__deep_profiling__Var_116 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, (MR_Integer) 7)));
    ll_backend__deep_profiling__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, (MR_Integer) 8)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_30 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_109));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_110));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_111));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__deep_profiling__Var_112));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__deep_profiling__Var_113));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__deep_profiling__Var_49));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__deep_profiling__Var_115));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__deep_profiling__Var_116));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__deep_profiling__Var_117));
    }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_p_0(
  MR_Word ll_backend__deep_profiling__Globals_7,
  MR_Word ll_backend__deep_profiling__CodeModel_8,
  MR_Word ll_backend__deep_profiling__Goal0_9,
  MR_Word * ll_backend__deep_profiling__Goal_10,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_36)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__SavedPtrVar_13;
    MR_Word ll_backend__deep_profiling__UseActivationCounts_14;
    MR_Word ll_backend__deep_profiling__ExtraNonLocals_16;
    MR_Word ll_backend__deep_profiling__SaveStuff_17;
    MR_Word ll_backend__deep_profiling__RestoreStuff_18;
    MR_Word ll_backend__deep_profiling__ReZeroStuff_19;
    MR_Word ll_backend__deep_profiling__GoalInfo0_21;
    MR_Word ll_backend__deep_profiling__ExtGoalInfo0_22;
    MR_Word ll_backend__deep_profiling__ExtGoalInfo_23;
    MR_Word ll_backend__deep_profiling__EmptyDelta_24;
    MR_Word ll_backend__deep_profiling__NoBindExtGoalInfo_25;
    MR_Word ll_backend__deep_profiling__FailGoalInfo0_26;
    MR_Word ll_backend__deep_profiling__FailGoalInfo_27;
    MR_Word ll_backend__deep_profiling__FailGoal_28;
    MR_Word ll_backend__deep_profiling__RestoreFailGoalInfo0_29;
    MR_Word ll_backend__deep_profiling__RestoreFailGoalInfo_30;
    MR_Word ll_backend__deep_profiling__RezeroFailGoalInfo0_31;
    MR_Word ll_backend__deep_profiling__RezeroFailGoalInfo_32;
    MR_Word ll_backend__deep_profiling__GoalInfo_33;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 6)));
    MR_Word ll_backend__deep_profiling__Var_39;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_40_40;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_62_62;
    MR_Word ll_backend__deep_profiling__Var_94;
    MR_Word ll_backend__deep_profiling__Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 0)));
    MR_Word ll_backend__deep_profiling__Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 1)));
    MR_Word ll_backend__deep_profiling__Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 2)));
    MR_Word ll_backend__deep_profiling__Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 3)));
    MR_Word ll_backend__deep_profiling__Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 4)));
    MR_Word ll_backend__deep_profiling__Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 5)));
    MR_String ll_backend__deep_profiling__Var_163 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 7)));
    MR_Word ll_backend__deep_profiling__Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 8)));
    MR_Word ll_backend__deep_profiling__Var_213;
    MR_Word ll_backend__deep_profiling__Var_214;
    MR_Word ll_backend__deep_profiling__Var_215;
    MR_Word ll_backend__deep_profiling__Var_216;
    MR_Word ll_backend__deep_profiling__Var_217;
    MR_Word ll_backend__deep_profiling__Var_218;
    MR_String ll_backend__deep_profiling__Var_220;
    MR_Word ll_backend__deep_profiling__Var_221;
    MR_Word ll_backend__deep_profiling__Var_219;
    MR_Word ll_backend__deep_profiling__Var_20;

    {
      ll_backend__deep_profiling__Var_39 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
    {
      ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "SavedPtr", ll_backend__deep_profiling__Var_39, &ll_backend__deep_profiling__SavedPtrVar_13, ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_37_37, &ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_40_40);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__deep_profiling__Globals_7, (MR_Integer) 206, &ll_backend__deep_profiling__UseActivationCounts_14);
    }
    switch (ll_backend__deep_profiling__UseActivationCounts_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__deep_profiling__Var_42;
          MR_Word ll_backend__deep_profiling__Var_45;
          MR_Word ll_backend__deep_profiling__Var_49;
          MR_Word ll_backend__deep_profiling__Var_55;
          MR_Word ll_backend__deep_profiling__Var_189;
          MR_Word ll_backend__deep_profiling__Var_190;
          MR_Word ll_backend__deep_profiling__Var_191;
          MR_Word ll_backend__deep_profiling__Var_192;
          MR_Word ll_backend__deep_profiling__Var_193;
          MR_Word ll_backend__deep_profiling__Var_194;
          MR_String ll_backend__deep_profiling__Var_195;
          MR_Word ll_backend__deep_profiling__Var_196;
          MR_Word ll_backend__deep_profiling__Var_197;
          MR_Word ll_backend__deep_profiling__Var_198;
          MR_Word ll_backend__deep_profiling__Var_199;
          MR_Word ll_backend__deep_profiling__Var_200;
          MR_Word ll_backend__deep_profiling__Var_201;
          MR_Word ll_backend__deep_profiling__Var_202;
          MR_String ll_backend__deep_profiling__Var_203;
          MR_Word ll_backend__deep_profiling__Var_204;
          MR_Word ll_backend__deep_profiling__Var_205;
          MR_Word ll_backend__deep_profiling__Var_206;
          MR_Word ll_backend__deep_profiling__Var_207;
          MR_Word ll_backend__deep_profiling__Var_208;
          MR_Word ll_backend__deep_profiling__Var_209;
          MR_Word ll_backend__deep_profiling__Var_210;
          MR_String ll_backend__deep_profiling__Var_211;
          MR_Word ll_backend__deep_profiling__Var_212;

          {
            ll_backend__deep_profiling__ExtraNonLocals_16 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__SavedPtrVar_13);
          }
          ll_backend__deep_profiling__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 0)));
          ll_backend__deep_profiling__Var_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 1)));
          ll_backend__deep_profiling__Var_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 2)));
          ll_backend__deep_profiling__Var_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 3)));
          ll_backend__deep_profiling__Var_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 4)));
          ll_backend__deep_profiling__Var_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 5)));
          ll_backend__deep_profiling__Var_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 6)));
          ll_backend__deep_profiling__Var_195 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 7)));
          ll_backend__deep_profiling__Var_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 8)));
          {
            ll_backend__deep_profiling__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_45, 0) = ((MR_Box) (ll_backend__deep_profiling__SavedPtrVar_13));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__Var_42, (MR_String) "save_and_zero_activation_info_sr", (MR_Integer) 1, ll_backend__deep_profiling__Var_45, ll_backend__deep_profiling__Var_45, &ll_backend__deep_profiling__SaveStuff_17);
          }
          ll_backend__deep_profiling__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 0)));
          ll_backend__deep_profiling__Var_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 1)));
          ll_backend__deep_profiling__Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 2)));
          ll_backend__deep_profiling__Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 3)));
          ll_backend__deep_profiling__Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 4)));
          ll_backend__deep_profiling__Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 5)));
          ll_backend__deep_profiling__Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 6)));
          ll_backend__deep_profiling__Var_203 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 7)));
          ll_backend__deep_profiling__Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 8)));
          {
            ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__Var_49, (MR_String) "reset_activation_info_sr", (MR_Integer) 1, ll_backend__deep_profiling__Var_45, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__RestoreStuff_18);
          }
          ll_backend__deep_profiling__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 0)));
          ll_backend__deep_profiling__Var_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 1)));
          ll_backend__deep_profiling__Var_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 2)));
          ll_backend__deep_profiling__Var_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 3)));
          ll_backend__deep_profiling__Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 4)));
          ll_backend__deep_profiling__Var_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 5)));
          ll_backend__deep_profiling__Var_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 6)));
          ll_backend__deep_profiling__Var_211 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 7)));
          ll_backend__deep_profiling__Var_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 8)));
          {
            ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__Var_55, (MR_String) "rezero_activation_info_sr", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__ReZeroStuff_19);
          }
          ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_62_62 = ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_40_40;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__deep_profiling__SavedCountVar_15;
          MR_Word ll_backend__deep_profiling__Var_61;
          MR_Word ll_backend__deep_profiling__Var_63;
          MR_Word ll_backend__deep_profiling__Var_64;
          MR_Word ll_backend__deep_profiling__Var_66;
          MR_Word ll_backend__deep_profiling__Var_75;
          MR_Word ll_backend__deep_profiling__Var_82;
          MR_Word ll_backend__deep_profiling__Var_165;
          MR_Word ll_backend__deep_profiling__Var_166;
          MR_Word ll_backend__deep_profiling__Var_167;
          MR_Word ll_backend__deep_profiling__Var_168;
          MR_Word ll_backend__deep_profiling__Var_169;
          MR_Word ll_backend__deep_profiling__Var_170;
          MR_String ll_backend__deep_profiling__Var_171;
          MR_Word ll_backend__deep_profiling__Var_172;
          MR_Word ll_backend__deep_profiling__Var_173;
          MR_Word ll_backend__deep_profiling__Var_174;
          MR_Word ll_backend__deep_profiling__Var_175;
          MR_Word ll_backend__deep_profiling__Var_176;
          MR_Word ll_backend__deep_profiling__Var_177;
          MR_Word ll_backend__deep_profiling__Var_178;
          MR_String ll_backend__deep_profiling__Var_179;
          MR_Word ll_backend__deep_profiling__Var_180;
          MR_Word ll_backend__deep_profiling__Var_181;
          MR_Word ll_backend__deep_profiling__Var_182;
          MR_Word ll_backend__deep_profiling__Var_183;
          MR_Word ll_backend__deep_profiling__Var_184;
          MR_Word ll_backend__deep_profiling__Var_185;
          MR_Word ll_backend__deep_profiling__Var_186;
          MR_String ll_backend__deep_profiling__Var_187;
          MR_Word ll_backend__deep_profiling__Var_188;

          {
            ll_backend__deep_profiling__Var_61 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
          {
            ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "SavedCounter", ll_backend__deep_profiling__Var_61, &ll_backend__deep_profiling__SavedCountVar_15, ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_40_40, &ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_62_62);
          }
          {
            ll_backend__deep_profiling__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_64, 0) = ((MR_Box) (ll_backend__deep_profiling__SavedPtrVar_13));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__deep_profiling__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_63, 0) = ((MR_Box) (ll_backend__deep_profiling__SavedCountVar_15));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_63, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_64));
          }
          {
            ll_backend__deep_profiling__ExtraNonLocals_16 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__Var_63);
          }
          ll_backend__deep_profiling__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 0)));
          ll_backend__deep_profiling__Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 1)));
          ll_backend__deep_profiling__Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 2)));
          ll_backend__deep_profiling__Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 3)));
          ll_backend__deep_profiling__Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 4)));
          ll_backend__deep_profiling__Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 5)));
          ll_backend__deep_profiling__Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 6)));
          ll_backend__deep_profiling__Var_171 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 7)));
          ll_backend__deep_profiling__Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 8)));
          {
            ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__Var_66, (MR_String) "save_and_zero_activation_info_ac", (MR_Integer) 2, ll_backend__deep_profiling__Var_63, ll_backend__deep_profiling__Var_63, &ll_backend__deep_profiling__SaveStuff_17);
          }
          ll_backend__deep_profiling__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 0)));
          ll_backend__deep_profiling__Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 1)));
          ll_backend__deep_profiling__Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 2)));
          ll_backend__deep_profiling__Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 3)));
          ll_backend__deep_profiling__Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 4)));
          ll_backend__deep_profiling__Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 5)));
          ll_backend__deep_profiling__Var_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 6)));
          ll_backend__deep_profiling__Var_179 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 7)));
          ll_backend__deep_profiling__Var_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 8)));
          {
            ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__Var_75, (MR_String) "reset_activation_info_ac", (MR_Integer) 2, ll_backend__deep_profiling__Var_63, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__RestoreStuff_18);
          }
          ll_backend__deep_profiling__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 0)));
          ll_backend__deep_profiling__Var_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 1)));
          ll_backend__deep_profiling__Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 2)));
          ll_backend__deep_profiling__Var_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 3)));
          ll_backend__deep_profiling__Var_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 4)));
          ll_backend__deep_profiling__Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 5)));
          ll_backend__deep_profiling__Var_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 6)));
          ll_backend__deep_profiling__Var_187 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 7)));
          ll_backend__deep_profiling__Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 8)));
          {
            ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__Var_82, (MR_String) "rezero_activation_info_ac", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__ReZeroStuff_19);
          }
        }
        break;
    }
    ll_backend__deep_profiling__Var_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 0)));
    ll_backend__deep_profiling__Var_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 1)));
    ll_backend__deep_profiling__Var_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 2)));
    ll_backend__deep_profiling__Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 3)));
    ll_backend__deep_profiling__Var_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 4)));
    ll_backend__deep_profiling__Var_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 5)));
    ll_backend__deep_profiling__Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 6)));
    ll_backend__deep_profiling__Var_220 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 7)));
    ll_backend__deep_profiling__Var_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 8)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_36 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_213));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_214));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_215));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__deep_profiling__Var_216));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__deep_profiling__Var_217));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__deep_profiling__Var_218));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_62_62));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__deep_profiling__Var_220));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__deep_profiling__Var_221));
    }
    ll_backend__deep_profiling__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_9, (MR_Integer) 0)));
    ll_backend__deep_profiling__GoalInfo0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_9, (MR_Integer) 1)));
    {
      ll_backend__deep_profiling__ExtGoalInfo0_22 = hlds__hlds_goal__goal_info_add_nonlocals_make_impure_2_f_0(ll_backend__deep_profiling__GoalInfo0_21, ll_backend__deep_profiling__ExtraNonLocals_16);
    }
    {
      hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ll_backend__deep_profiling__ExtGoalInfo0_22, &ll_backend__deep_profiling__ExtGoalInfo_23);
    }
    {
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&ll_backend__deep_profiling__EmptyDelta_24);
    }
    {
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(ll_backend__deep_profiling__EmptyDelta_24, ll_backend__deep_profiling__ExtGoalInfo_23, &ll_backend__deep_profiling__NoBindExtGoalInfo_25);
    }
    {
      ll_backend__deep_profiling__FailGoalInfo0_26 = hlds__make_goal__fail_goal_info_0_f_0();
    }
    {
      hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ll_backend__deep_profiling__FailGoalInfo0_26, &ll_backend__deep_profiling__FailGoalInfo_27);
    }
    {
      ll_backend__deep_profiling__FailGoal_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__FailGoal_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__deep_profiling_scalar_common_2[11])));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__FailGoal_28, 1) = ((MR_Box) (ll_backend__deep_profiling__FailGoalInfo_27));
    }
    {
      ll_backend__deep_profiling__RestoreFailGoalInfo0_29 = hlds__hlds_goal__impure_unreachable_init_goal_info_2_f_0(ll_backend__deep_profiling__ExtraNonLocals_16, (MR_Integer) 7);
    }
    {
      hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ll_backend__deep_profiling__RestoreFailGoalInfo0_29, &ll_backend__deep_profiling__RestoreFailGoalInfo_30);
    }
    {
      ll_backend__deep_profiling__Var_94 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
    {
      ll_backend__deep_profiling__RezeroFailGoalInfo0_31 = hlds__hlds_goal__impure_unreachable_init_goal_info_2_f_0(ll_backend__deep_profiling__Var_94, (MR_Integer) 7);
    }
    {
      hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ll_backend__deep_profiling__RezeroFailGoalInfo0_31, &ll_backend__deep_profiling__RezeroFailGoalInfo_32);
    }
    {
      hlds__hlds_goal__make_impure_2_p_0(ll_backend__deep_profiling__GoalInfo0_21, &ll_backend__deep_profiling__GoalInfo_33);
    }
    switch (ll_backend__deep_profiling__CodeModel_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__deep_profiling__GoalExpr_34;
          MR_Word ll_backend__deep_profiling__Var_151;
          MR_Word ll_backend__deep_profiling__Var_152;
          MR_Word ll_backend__deep_profiling__Var_153;

          {
            ll_backend__deep_profiling__Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_153, 0) = ((MR_Box) (ll_backend__deep_profiling__RestoreStuff_18));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__deep_profiling__Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_152, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal0_9));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_152, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_153));
          }
          {
            ll_backend__deep_profiling__Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_151, 0) = ((MR_Box) (ll_backend__deep_profiling__SaveStuff_17));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_151, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_152));
          }
          {
            ll_backend__deep_profiling__GoalExpr_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_34, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_34, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_151));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *ll_backend__deep_profiling__Goal_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_34));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_33));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__deep_profiling__Var_98;
          MR_Word ll_backend__deep_profiling__Var_99;
          MR_Word ll_backend__deep_profiling__Var_100;
          MR_Word ll_backend__deep_profiling__Var_101;
          MR_Word ll_backend__deep_profiling__Var_102;
          MR_Word ll_backend__deep_profiling__Var_103;
          MR_Word ll_backend__deep_profiling__Var_104;
          MR_Word ll_backend__deep_profiling__Var_106;
          MR_Word ll_backend__deep_profiling__Var_107;
          MR_Word ll_backend__deep_profiling__Var_108;
          MR_Word ll_backend__deep_profiling__Var_109;
          MR_Word ll_backend__deep_profiling__Var_110;
          MR_Word ll_backend__deep_profiling__Var_111;
          MR_Word ll_backend__deep_profiling__Var_112;
          MR_Word ll_backend__deep_profiling__Var_113;
          MR_Word ll_backend__deep_profiling__Var_115;
          MR_Word ll_backend__deep_profiling__Var_116;
          MR_Word ll_backend__deep_profiling__Var_120;
          MR_Word ll_backend__deep_profiling__Var_121;
          MR_Word ll_backend__deep_profiling__Var_122;
          MR_Word ll_backend__deep_profiling__Var_124;
          MR_Word ll_backend__deep_profiling__GoalExpr_156;

          {
            ll_backend__deep_profiling__Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_116, 0) = ((MR_Box) (ll_backend__deep_profiling__FailGoal_28));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__deep_profiling__Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_115, 0) = ((MR_Box) (ll_backend__deep_profiling__ReZeroStuff_19));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_115, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_116));
          }
          {
            ll_backend__deep_profiling__Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_113, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_113, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_115));
          }
          {
            ll_backend__deep_profiling__Var_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_112, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_113));
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_112, 1) = ((MR_Box) (ll_backend__deep_profiling__RezeroFailGoalInfo_32));
          }
          {
            ll_backend__deep_profiling__Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_111, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_112));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__deep_profiling__Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_110, 0) = ((MR_Box) (ll_backend__deep_profiling__RestoreStuff_18));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_110, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_111));
          }
          {
            ll_backend__deep_profiling__Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_109, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_110));
          }
          {
            ll_backend__deep_profiling__Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_108, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_109));
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_108, 1) = ((MR_Box) (ll_backend__deep_profiling__NoBindExtGoalInfo_25));
          }
          {
            ll_backend__deep_profiling__Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_107, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_108));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__deep_profiling__Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_106, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal0_9));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_106, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_107));
          }
          {
            ll_backend__deep_profiling__Var_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_104, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_104, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_106));
          }
          {
            ll_backend__deep_profiling__Var_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_103, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_104));
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_103, 1) = ((MR_Box) (ll_backend__deep_profiling__ExtGoalInfo_23));
          }
          {
            ll_backend__deep_profiling__Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_124, 0) = ((MR_Box) (ll_backend__deep_profiling__RestoreStuff_18));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_124, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_116));
          }
          {
            ll_backend__deep_profiling__Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_122, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_122, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_124));
          }
          {
            ll_backend__deep_profiling__Var_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_121, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_122));
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_121, 1) = ((MR_Box) (ll_backend__deep_profiling__RestoreFailGoalInfo_30));
          }
          {
            ll_backend__deep_profiling__Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_120, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_121));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__deep_profiling__Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_102, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_103));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_102, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_120));
          }
          {
            ll_backend__deep_profiling__Var_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_101, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_102));
          }
          {
            ll_backend__deep_profiling__Var_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_100, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_101));
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_100, 1) = ((MR_Box) (ll_backend__deep_profiling__ExtGoalInfo_23));
          }
          {
            ll_backend__deep_profiling__Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_99, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_100));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__deep_profiling__Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_98, 0) = ((MR_Box) (ll_backend__deep_profiling__SaveStuff_17));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_98, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_99));
          }
          {
            ll_backend__deep_profiling__GoalExpr_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_156, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_156, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_98));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *ll_backend__deep_profiling__Goal_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_156));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_33));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__deep_profiling__Var_130;
          MR_Word ll_backend__deep_profiling__Var_131;
          MR_Word ll_backend__deep_profiling__Var_132;
          MR_Word ll_backend__deep_profiling__Var_133;
          MR_Word ll_backend__deep_profiling__Var_134;
          MR_Word ll_backend__deep_profiling__Var_135;
          MR_Word ll_backend__deep_profiling__Var_136;
          MR_Word ll_backend__deep_profiling__Var_138;
          MR_Word ll_backend__deep_profiling__Var_139;
          MR_Word ll_backend__deep_profiling__Var_141;
          MR_Word ll_backend__deep_profiling__Var_142;
          MR_Word ll_backend__deep_profiling__Var_143;
          MR_Word ll_backend__deep_profiling__Var_145;
          MR_Word ll_backend__deep_profiling__Var_146;
          MR_Word ll_backend__deep_profiling__GoalExpr_155;

          {
            ll_backend__deep_profiling__Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_139, 0) = ((MR_Box) (ll_backend__deep_profiling__RestoreStuff_18));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__deep_profiling__Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_138, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal0_9));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_138, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_139));
          }
          {
            ll_backend__deep_profiling__Var_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_136, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_136, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_138));
          }
          {
            ll_backend__deep_profiling__Var_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_135, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_136));
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_135, 1) = ((MR_Box) (ll_backend__deep_profiling__ExtGoalInfo_23));
          }
          {
            ll_backend__deep_profiling__Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_146, 0) = ((MR_Box) (ll_backend__deep_profiling__FailGoal_28));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__deep_profiling__Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_145, 0) = ((MR_Box) (ll_backend__deep_profiling__RestoreStuff_18));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_145, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_146));
          }
          {
            ll_backend__deep_profiling__Var_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_143, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_143, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_145));
          }
          {
            ll_backend__deep_profiling__Var_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_142, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_143));
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_142, 1) = ((MR_Box) (ll_backend__deep_profiling__RestoreFailGoalInfo_30));
          }
          {
            ll_backend__deep_profiling__Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_141, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_142));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__deep_profiling__Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_134, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_135));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_134, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_141));
          }
          {
            ll_backend__deep_profiling__Var_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_133, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_134));
          }
          {
            ll_backend__deep_profiling__Var_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_132, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_133));
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_132, 1) = ((MR_Box) (ll_backend__deep_profiling__ExtGoalInfo_23));
          }
          {
            ll_backend__deep_profiling__Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_131, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_132));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__deep_profiling__Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_130, 0) = ((MR_Box) (ll_backend__deep_profiling__SaveStuff_17));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_130, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_131));
          }
          {
            ll_backend__deep_profiling__GoalExpr_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_155, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_155, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_155, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_130));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *ll_backend__deep_profiling__Goal_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_155));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_33));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_wrap_call_4_p_0(
  MR_Word ll_backend__deep_profiling__Goal0_5,
  MR_Word * ll_backend__deep_profiling__Goal_6,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_97)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_5, (MR_Integer) 0)));
    MR_Word ll_backend__deep_profiling__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_5, (MR_Integer) 1)));
    MR_Word ll_backend__deep_profiling__GoalId_10;
    MR_Word ll_backend__deep_profiling__ContainingGoalMap_11;
    MR_Word ll_backend__deep_profiling__GoalPath_12;
    MR_Word ll_backend__deep_profiling__ModuleInfo_13;
    MR_Word ll_backend__deep_profiling__GoalFeatures_14;
    MR_Word ll_backend__deep_profiling__GoalInfo1_15;
    MR_Word ll_backend__deep_profiling__GoalInfo2_16;
    MR_Word ll_backend__deep_profiling__MdprofInstGoalInfo_17;
    MR_Word ll_backend__deep_profiling__Goal1_18;
    MR_Word ll_backend__deep_profiling__SiteNumCounter0_19;
    MR_Integer ll_backend__deep_profiling__SiteNum_20;
    MR_Word ll_backend__deep_profiling__SiteNumCounter_21;
    MR_Word ll_backend__deep_profiling__VarInfo0_22;
    MR_Word ll_backend__deep_profiling__SiteNumVar_23;
    MR_Word ll_backend__deep_profiling__VarInfo1_24;
    MR_Word ll_backend__deep_profiling__SiteNumVarGoal_25;
    MR_Word ll_backend__deep_profiling__Context_26;
    MR_String ll_backend__deep_profiling__FileName0_27;
    MR_Integer ll_backend__deep_profiling__LineNumber_28;
    MR_String ll_backend__deep_profiling__FileName_29;
    MR_Word ll_backend__deep_profiling__CallKind_30;
    MR_Word ll_backend__deep_profiling__PrepareGoal_32;
    MR_Word ll_backend__deep_profiling__CallSite_44;
    MR_Word ll_backend__deep_profiling__Goal2_45;
    MR_Word ll_backend__deep_profiling__GoalExpr_84;
    MR_Word ll_backend__deep_profiling__Var_101;
    MR_Word ll_backend__deep_profiling__Var_102;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153;
    MR_Word ll_backend__deep_profiling__Var_154;
    MR_Word ll_backend__deep_profiling__Var_155;
    MR_Word ll_backend__deep_profiling__Var_240;
    MR_Word ll_backend__deep_profiling__Var_241;
    MR_Word ll_backend__deep_profiling__Var_242;
    MR_Word ll_backend__deep_profiling__Var_243;
    MR_Word ll_backend__deep_profiling__Var_245;
    MR_String ll_backend__deep_profiling__Var_247;
    MR_Word ll_backend__deep_profiling__Var_248;
    MR_Word ll_backend__deep_profiling__Var_208;
    MR_Word ll_backend__deep_profiling__Var_209;
    MR_Word ll_backend__deep_profiling__Var_210;
    MR_Word ll_backend__deep_profiling__Var_211;
    MR_Word ll_backend__deep_profiling__Var_212;
    MR_Word ll_backend__deep_profiling__Var_213;
    MR_String ll_backend__deep_profiling__Var_214;
    MR_Word ll_backend__deep_profiling__Var_215;
    MR_Word ll_backend__deep_profiling__Var_216;
    MR_Word ll_backend__deep_profiling__Var_217;
    MR_Word ll_backend__deep_profiling__Var_218;
    MR_Word ll_backend__deep_profiling__Var_219;
    MR_Word ll_backend__deep_profiling__Var_220;
    MR_Word ll_backend__deep_profiling__Var_221;
    MR_String ll_backend__deep_profiling__Var_222;
    MR_Word ll_backend__deep_profiling__Var_223;
    MR_Word ll_backend__deep_profiling__Var_224;
    MR_Word ll_backend__deep_profiling__Var_225;
    MR_Word ll_backend__deep_profiling__Var_226;
    MR_Word ll_backend__deep_profiling__Var_227;
    MR_Word ll_backend__deep_profiling__Var_228;
    MR_Word ll_backend__deep_profiling__Var_229;
    MR_String ll_backend__deep_profiling__Var_230;
    MR_Word ll_backend__deep_profiling__Var_231;
    MR_Word ll_backend__deep_profiling__Var_232;
    MR_Word ll_backend__deep_profiling__Var_233;
    MR_Word ll_backend__deep_profiling__Var_234;
    MR_Word ll_backend__deep_profiling__Var_235;
    MR_Word ll_backend__deep_profiling__Var_236;
    MR_Word ll_backend__deep_profiling__Var_237;
    MR_String ll_backend__deep_profiling__Var_238;
    MR_Word ll_backend__deep_profiling__Var_239;
    MR_Word ll_backend__deep_profiling__Var_244;
    MR_Word ll_backend__deep_profiling__Var_246;
    MR_Word ll_backend__deep_profiling__Var_301;
    MR_Word ll_backend__deep_profiling__Var_302;
    MR_Word ll_backend__deep_profiling__Var_303;
    MR_Word ll_backend__deep_profiling__Var_304;
    MR_Word ll_backend__deep_profiling__Var_305;
    MR_Word ll_backend__deep_profiling__Var_306;
    MR_String ll_backend__deep_profiling__Var_307;
    MR_Word ll_backend__deep_profiling__Var_308;
    MR_Word ll_backend__deep_profiling__Var_309;
    MR_Word ll_backend__deep_profiling__Var_310;
    MR_Word ll_backend__deep_profiling__Var_311;
    MR_Word ll_backend__deep_profiling__Var_312;
    MR_Word ll_backend__deep_profiling__Var_313;
    MR_Word ll_backend__deep_profiling__Var_315;
    MR_String ll_backend__deep_profiling__Var_316;
    MR_Word ll_backend__deep_profiling__Var_317;
    MR_Word ll_backend__deep_profiling__Var_314;
    MR_Word ll_backend__deep_profiling__Var_321;
    MR_Word ll_backend__deep_profiling__Var_326;
    MR_Word ll_backend__deep_profiling__RecInfo_70;
    MR_Word ll_backend__deep_profiling__Var_157;
    MR_Word ll_backend__deep_profiling__Var_158;
    MR_Word ll_backend__deep_profiling__Var_318;
    MR_Word ll_backend__deep_profiling__Var_319;
    MR_Word ll_backend__deep_profiling__Var_320;
    MR_Word ll_backend__deep_profiling__Var_322;
    MR_Word ll_backend__deep_profiling__Var_323;
    MR_Word ll_backend__deep_profiling__Var_324;
    MR_String ll_backend__deep_profiling__Var_325;
    MR_Word ll_backend__deep_profiling__Var_71;

    {
      ll_backend__deep_profiling__GoalId_10 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__deep_profiling__GoalInfo0_9);
    }
    ll_backend__deep_profiling__Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 0)));
    ll_backend__deep_profiling__Var_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 1)));
    ll_backend__deep_profiling__ContainingGoalMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 2)));
    ll_backend__deep_profiling__Var_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 3)));
    ll_backend__deep_profiling__Var_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 4)));
    ll_backend__deep_profiling__Var_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 5)));
    ll_backend__deep_profiling__Var_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 6)));
    ll_backend__deep_profiling__Var_214 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 7)));
    ll_backend__deep_profiling__Var_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 8)));
    {
      ll_backend__deep_profiling__GoalPath_12 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__deep_profiling__ContainingGoalMap_11, ll_backend__deep_profiling__GoalId_10);
    }
    ll_backend__deep_profiling__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 0)));
    ll_backend__deep_profiling__Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 1)));
    ll_backend__deep_profiling__Var_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 2)));
    ll_backend__deep_profiling__Var_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 3)));
    ll_backend__deep_profiling__Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 4)));
    ll_backend__deep_profiling__Var_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 5)));
    ll_backend__deep_profiling__Var_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 6)));
    ll_backend__deep_profiling__Var_222 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 7)));
    ll_backend__deep_profiling__Var_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 8)));
    {
      ll_backend__deep_profiling__GoalFeatures_14 = hlds__hlds_goal__goal_info_get_features_1_f_0(ll_backend__deep_profiling__GoalInfo0_9);
    }
    {
      hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 9, ll_backend__deep_profiling__GoalInfo0_9, &ll_backend__deep_profiling__GoalInfo1_15);
    }
    {
      hlds__hlds_goal__make_impure_2_p_0(ll_backend__deep_profiling__GoalInfo1_15, &ll_backend__deep_profiling__GoalInfo2_16);
    }
    {
      hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ll_backend__deep_profiling__GoalInfo2_16, &ll_backend__deep_profiling__MdprofInstGoalInfo_17);
    }
    {
      ll_backend__deep_profiling__Goal1_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal1_18, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr0_8));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal1_18, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo2_16));
    }
    ll_backend__deep_profiling__Var_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 0)));
    ll_backend__deep_profiling__Var_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 1)));
    ll_backend__deep_profiling__Var_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 2)));
    ll_backend__deep_profiling__Var_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 3)));
    ll_backend__deep_profiling__SiteNumCounter0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 4)));
    ll_backend__deep_profiling__Var_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 5)));
    ll_backend__deep_profiling__Var_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 6)));
    ll_backend__deep_profiling__Var_230 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 7)));
    ll_backend__deep_profiling__Var_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 8)));
    {
      mercury__counter__allocate_3_p_0(&ll_backend__deep_profiling__SiteNum_20, ll_backend__deep_profiling__SiteNumCounter0_19, &ll_backend__deep_profiling__SiteNumCounter_21);
    }
    ll_backend__deep_profiling__Var_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 0)));
    ll_backend__deep_profiling__Var_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 1)));
    ll_backend__deep_profiling__Var_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 2)));
    ll_backend__deep_profiling__Var_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 3)));
    ll_backend__deep_profiling__Var_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 4)));
    ll_backend__deep_profiling__Var_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 5)));
    ll_backend__deep_profiling__VarInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 6)));
    ll_backend__deep_profiling__Var_238 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 7)));
    ll_backend__deep_profiling__Var_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 8)));
    {
      ll_backend__deep_profiling__Var_101 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
    {
      ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "SiteNum", ll_backend__deep_profiling__Var_101, &ll_backend__deep_profiling__SiteNumVar_23, ll_backend__deep_profiling__VarInfo0_22, &ll_backend__deep_profiling__VarInfo1_24);
    }
    {
      ll_backend__deep_profiling__Var_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_102, 1) = ((MR_Box) (ll_backend__deep_profiling__SiteNum_20));
    }
    {
      ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(ll_backend__deep_profiling__Var_102, ll_backend__deep_profiling__SiteNumVar_23, &ll_backend__deep_profiling__SiteNumVarGoal_25);
    }
    ll_backend__deep_profiling__Var_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 0)));
    ll_backend__deep_profiling__Var_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 1)));
    ll_backend__deep_profiling__Var_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 2)));
    ll_backend__deep_profiling__Var_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 3)));
    ll_backend__deep_profiling__Var_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 4)));
    ll_backend__deep_profiling__Var_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 5)));
    ll_backend__deep_profiling__Var_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 6)));
    ll_backend__deep_profiling__Var_247 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 7)));
    ll_backend__deep_profiling__Var_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 8)));
    {
      ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_240));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_241));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_242));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, 3) = ((MR_Box) (ll_backend__deep_profiling__Var_243));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, 4) = ((MR_Box) (ll_backend__deep_profiling__SiteNumCounter_21));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, 5) = ((MR_Box) (ll_backend__deep_profiling__Var_245));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, 6) = ((MR_Box) (ll_backend__deep_profiling__VarInfo1_24));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, 7) = ((MR_Box) (ll_backend__deep_profiling__Var_247));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, 8) = ((MR_Box) (ll_backend__deep_profiling__Var_248));
    }
    {
      ll_backend__deep_profiling__Context_26 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__deep_profiling__GoalInfo0_9);
    }
    {
      ll_backend__deep_profiling__FileName0_27 = mercury__term__context_file_1_f_0(ll_backend__deep_profiling__Context_26);
    }
    {
      ll_backend__deep_profiling__LineNumber_28 = mercury__term__context_line_1_f_0(ll_backend__deep_profiling__Context_26);
    }
    {
      ll_backend__deep_profiling__compress_filename_3_p_0(ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, ll_backend__deep_profiling__FileName0_27, &ll_backend__deep_profiling__FileName_29);
    }
    {
      ll_backend__deep_profiling__CallKind_30 = ll_backend__deep_profiling__classify_call_2_f_0(ll_backend__deep_profiling__ModuleInfo_13, ll_backend__deep_profiling__GoalExpr0_8);
    }
    switch (MR_tag((MR_Word) ll_backend__deep_profiling__CallKind_30)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__deep_profiling__PredProcId_31 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__CallKind_30), (MR_Integer) 0);
          MR_Word ll_backend__deep_profiling__PredId_33;
          MR_Integer ll_backend__deep_profiling__ProcId_34;
          MR_String ll_backend__deep_profiling__TypeSubst_35;
          MR_Word ll_backend__deep_profiling__MaybeRecInfo_36;
          MR_Word ll_backend__deep_profiling__RttiProcLabel_41;
          MR_Word ll_backend__deep_profiling__Var_258;
          MR_Word ll_backend__deep_profiling__Var_259;
          MR_Word ll_backend__deep_profiling__Var_260;
          MR_Word ll_backend__deep_profiling__Var_261;
          MR_Word ll_backend__deep_profiling__Var_262;
          MR_Word ll_backend__deep_profiling__Var_263;
          MR_Word ll_backend__deep_profiling__Var_264;
          MR_String ll_backend__deep_profiling__Var_265;
          MR_Word ll_backend__deep_profiling__OuterPredProcId_38;
          MR_Word ll_backend__deep_profiling__RecInfo1_37;
          MR_Word ll_backend__deep_profiling__Var_151;
          MR_Word ll_backend__deep_profiling__Var_344;
          MR_Word ll_backend__deep_profiling__Var_266;
          MR_Word ll_backend__deep_profiling__Var_267;
          MR_Word ll_backend__deep_profiling__Var_268;
          MR_Word ll_backend__deep_profiling__Var_269;
          MR_Word ll_backend__deep_profiling__Var_270;
          MR_Word ll_backend__deep_profiling__Var_271;
          MR_Word ll_backend__deep_profiling__Var_272;
          MR_String ll_backend__deep_profiling__Var_273;
          MR_Word ll_backend__deep_profiling__Var_274;

          {
            ll_backend__deep_profiling__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, ((MR_Box) ((MR_Integer) 9)), ll_backend__deep_profiling__GoalFeatures_14);
          }
          if (ll_backend__deep_profiling__succeeded)
            {
              MR_Word ll_backend__deep_profiling__Var_143;

              {
                ll_backend__deep_profiling__Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_143, 0) = ((MR_Box) (ll_backend__deep_profiling__SiteNumVar_23));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_13, (MR_String) "prepare_for_tail_call", (MR_Integer) 1, ll_backend__deep_profiling__Var_143, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__PrepareGoal_32);
              }
            }
          else
            {
              MR_Word ll_backend__deep_profiling__Var_148;

              {
                ll_backend__deep_profiling__Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_148, 0) = ((MR_Box) (ll_backend__deep_profiling__SiteNumVar_23));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_13, (MR_String) "prepare_for_normal_call", (MR_Integer) 1, ll_backend__deep_profiling__Var_148, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__PrepareGoal_32);
              }
            }
          ll_backend__deep_profiling__PredId_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__PredProcId_31, (MR_Integer) 0)));
          ll_backend__deep_profiling__ProcId_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__PredProcId_31, (MR_Integer) 1)));
          {
            ll_backend__deep_profiling__TypeSubst_35 = ll_backend__deep_profiling__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_112_117_116_101_95_116_121_112_101_95_115_117_98_115_116_95_95_91_49_44_32_50_93_95_48_2_f_0();
          }
          ll_backend__deep_profiling__Var_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 0)));
          ll_backend__deep_profiling__Var_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 1)));
          ll_backend__deep_profiling__Var_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 2)));
          ll_backend__deep_profiling__Var_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 3)));
          ll_backend__deep_profiling__Var_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 4)));
          ll_backend__deep_profiling__Var_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 5)));
          ll_backend__deep_profiling__Var_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 6)));
          ll_backend__deep_profiling__Var_265 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 7)));
          ll_backend__deep_profiling__MaybeRecInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 8)));
          ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__MaybeRecInfo_36)) == (MR_mktag((MR_Integer) 1)));
          if (ll_backend__deep_profiling__succeeded)
            {
              ll_backend__deep_profiling__RecInfo1_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeRecInfo_36, (MR_Integer) 0)));
              ll_backend__deep_profiling__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RecInfo1_37, (MR_Integer) 0)));
              ll_backend__deep_profiling__Var_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RecInfo1_37, (MR_Integer) 1)));
              ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__Var_151)) == (MR_mktag((MR_Integer) 0)));
              if (ll_backend__deep_profiling__succeeded)
                {
                  ll_backend__deep_profiling__OuterPredProcId_38 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__Var_151), (MR_Integer) 0);
                  ll_backend__deep_profiling__Var_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 0)));
                  ll_backend__deep_profiling__Var_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 1)));
                  ll_backend__deep_profiling__Var_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 2)));
                  ll_backend__deep_profiling__Var_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 3)));
                  ll_backend__deep_profiling__Var_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 4)));
                  ll_backend__deep_profiling__Var_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 5)));
                  ll_backend__deep_profiling__Var_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 6)));
                  ll_backend__deep_profiling__Var_273 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 7)));
                  ll_backend__deep_profiling__Var_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 8)));
                  {
                    ll_backend__deep_profiling__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ll_backend__deep_profiling__PredProcId_31, ll_backend__deep_profiling__Var_344);
                  }
                }
            }
          if (ll_backend__deep_profiling__succeeded)
            {
              MR_Word ll_backend__deep_profiling__OuterPredId_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OuterPredProcId_38, (MR_Integer) 0)));
              MR_Integer ll_backend__deep_profiling__OuterProcId_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OuterPredProcId_38, (MR_Integer) 1)));

              {
                ll_backend__deep_profiling__RttiProcLabel_41 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ll_backend__deep_profiling__ModuleInfo_13, ll_backend__deep_profiling__OuterPredId_39, ll_backend__deep_profiling__OuterProcId_40);
              }
            }
          else
            {
              MR_Word ll_backend__deep_profiling__RecInfo2_42;
              MR_Word ll_backend__deep_profiling__InnerPredProcId_43;
              MR_Word ll_backend__deep_profiling__Var_152;
              MR_Word ll_backend__deep_profiling__Var_275;

              ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__MaybeRecInfo_36)) == (MR_mktag((MR_Integer) 1)));
              if (ll_backend__deep_profiling__succeeded)
                {
                  ll_backend__deep_profiling__RecInfo2_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeRecInfo_36, (MR_Integer) 0)));
                  ll_backend__deep_profiling__Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RecInfo2_42, (MR_Integer) 0)));
                  ll_backend__deep_profiling__Var_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RecInfo2_42, (MR_Integer) 1)));
                  ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__Var_152)) == (MR_mktag((MR_Integer) 1)));
                  if (ll_backend__deep_profiling__succeeded)
                    {
                      ll_backend__deep_profiling__InnerPredProcId_43 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__Var_152), (MR_Integer) 1);
                      {
                        ll_backend__deep_profiling__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ll_backend__deep_profiling__PredProcId_31, ll_backend__deep_profiling__InnerPredProcId_43);
                      }
                    }
                }
              if (ll_backend__deep_profiling__succeeded)
                {
                  MR_Word ll_backend__deep_profiling__OuterPredProcId_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 1)));
                  MR_Word ll_backend__deep_profiling__OuterPredId_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OuterPredProcId_201, (MR_Integer) 0)));
                  MR_Integer ll_backend__deep_profiling__OuterProcId_203 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OuterPredProcId_201, (MR_Integer) 1)));
                  MR_Word ll_backend__deep_profiling__Var_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 0)));
                  MR_Word ll_backend__deep_profiling__Var_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 2)));
                  MR_Word ll_backend__deep_profiling__Var_278 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 3)));
                  MR_Word ll_backend__deep_profiling__Var_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 4)));
                  MR_Word ll_backend__deep_profiling__Var_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 5)));
                  MR_Word ll_backend__deep_profiling__Var_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 6)));
                  MR_String ll_backend__deep_profiling__Var_282 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 7)));
                  MR_Word ll_backend__deep_profiling__Var_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 8)));

                  {
                    ll_backend__deep_profiling__RttiProcLabel_41 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ll_backend__deep_profiling__ModuleInfo_13, ll_backend__deep_profiling__OuterPredId_202, ll_backend__deep_profiling__OuterProcId_203);
                  }
                }
              else
                {
                  ll_backend__deep_profiling__RttiProcLabel_41 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ll_backend__deep_profiling__ModuleInfo_13, ll_backend__deep_profiling__PredId_33, ll_backend__deep_profiling__ProcId_34);
                }
            }
          {
            ll_backend__deep_profiling__CallSite_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__CallSite_44, 0) = ((MR_Box) (ll_backend__deep_profiling__RttiProcLabel_41));
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__CallSite_44, 1) = ((MR_Box) (ll_backend__deep_profiling__TypeSubst_35));
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__CallSite_44, 2) = ((MR_Box) (ll_backend__deep_profiling__FileName_29));
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__CallSite_44, 3) = ((MR_Box) (ll_backend__deep_profiling__LineNumber_28));
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__CallSite_44, 4) = ((MR_Box) (ll_backend__deep_profiling__GoalPath_12));
          }
          ll_backend__deep_profiling__Goal2_45 = ll_backend__deep_profiling__Goal1_18;
          ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__deep_profiling__TypeInfoVar_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__CallKind_30, (MR_Integer) 1)));
          MR_Word ll_backend__deep_profiling__Var_136;
          MR_Word ll_backend__deep_profiling__Var_138;
          MR_Word ll_backend__deep_profiling___PredProcId_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__CallKind_30, (MR_Integer) 0)));

          {
            ll_backend__deep_profiling__Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_138, 0) = ((MR_Box) (ll_backend__deep_profiling__TypeInfoVar_47));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__deep_profiling__Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_136, 0) = ((MR_Box) (ll_backend__deep_profiling__SiteNumVar_23));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_136, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_138));
          }
          {
            ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_13, (MR_String) "prepare_for_special_call", (MR_Integer) 2, ll_backend__deep_profiling__Var_136, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__PrepareGoal_32);
          }
          {
            ll_backend__deep_profiling__CallSite_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__CallSite_44, 0) = ((MR_Box) (ll_backend__deep_profiling__FileName_29));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__CallSite_44, 1) = ((MR_Box) (ll_backend__deep_profiling__LineNumber_28));
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__CallSite_44, 2) = ((MR_Box) (ll_backend__deep_profiling__GoalPath_12));
          }
          ll_backend__deep_profiling__Goal2_45 = ll_backend__deep_profiling__Goal1_18;
          ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__deep_profiling__Generic_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__CallKind_30, (MR_Integer) 0)));
          MR_Word ll_backend__deep_profiling__GoalCodeModel_67;
          MR_Word ll_backend__deep_profiling__Globals_68;
          MR_Word ll_backend__deep_profiling__UseZeroing_69;
          MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113;

          switch (MR_tag((MR_Word) ll_backend__deep_profiling__Generic_48)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ll_backend__deep_profiling__ClosureVar_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Generic_48, (MR_Integer) 0)));
                MR_Word ll_backend__deep_profiling__Var_128;
                MR_Word ll_backend__deep_profiling__Var_130;
                MR_Word ll_backend__deep_profiling__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Generic_48, (MR_Integer) 1)));
                MR_Word ll_backend__deep_profiling__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Generic_48, (MR_Integer) 2)));
                MR_Integer ll_backend__deep_profiling__Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Generic_48, (MR_Integer) 3)));

                {
                  ll_backend__deep_profiling__Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_130, 0) = ((MR_Box) (ll_backend__deep_profiling__ClosureVar_49));
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  ll_backend__deep_profiling__Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_128, 0) = ((MR_Box) (ll_backend__deep_profiling__SiteNumVar_23));
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_128, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_130));
                }
                {
                  ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_13, (MR_String) "prepare_for_ho_call", (MR_Integer) 2, ll_backend__deep_profiling__Var_128, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__PrepareGoal_32);
                }
                {
                  ll_backend__deep_profiling__CallSite_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__CallSite_44, 0) = ((MR_Box) (ll_backend__deep_profiling__FileName_29));
                  MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__CallSite_44, 1) = ((MR_Box) (ll_backend__deep_profiling__LineNumber_28));
                  MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__CallSite_44, 2) = ((MR_Box) (ll_backend__deep_profiling__GoalPath_12));
                }
                ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ll_backend__deep_profiling__TypeClassInfoVar_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Generic_48, (MR_Integer) 0)));
                MR_Integer ll_backend__deep_profiling__MethodNum_54 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Generic_48, (MR_Integer) 1)));
                MR_Word ll_backend__deep_profiling__VarInfo2_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 6)));
                MR_Word ll_backend__deep_profiling__MethodNumVar_58;
                MR_Word ll_backend__deep_profiling__VarInfo3_59;
                MR_Word ll_backend__deep_profiling__MethodNumVarGoal_60;
                MR_Word ll_backend__deep_profiling__PrepareCallGoal_61;
                MR_Word ll_backend__deep_profiling__PrepareCallGoalInfo_63;
                MR_Word ll_backend__deep_profiling__PrepareGoalExpr_64;
                MR_Word ll_backend__deep_profiling__Var_112;
                MR_Word ll_backend__deep_profiling__Var_114;
                MR_Word ll_backend__deep_profiling__Var_117;
                MR_Word ll_backend__deep_profiling__Var_119;
                MR_Word ll_backend__deep_profiling__Var_120;
                MR_Word ll_backend__deep_profiling__Var_123;
                MR_Word ll_backend__deep_profiling__Var_124;
                MR_Word ll_backend__deep_profiling__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Generic_48, (MR_Integer) 2)));
                MR_Word ll_backend__deep_profiling__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Generic_48, (MR_Integer) 3)));
                MR_Word ll_backend__deep_profiling__Var_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 0)));
                MR_Word ll_backend__deep_profiling__Var_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 1)));
                MR_Word ll_backend__deep_profiling__Var_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 2)));
                MR_Word ll_backend__deep_profiling__Var_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 3)));
                MR_Word ll_backend__deep_profiling__Var_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 4)));
                MR_Word ll_backend__deep_profiling__Var_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 5)));
                MR_String ll_backend__deep_profiling__Var_290 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 7)));
                MR_Word ll_backend__deep_profiling__Var_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 8)));
                MR_Word ll_backend__deep_profiling__Var_292;
                MR_Word ll_backend__deep_profiling__Var_293;
                MR_Word ll_backend__deep_profiling__Var_294;
                MR_Word ll_backend__deep_profiling__Var_295;
                MR_Word ll_backend__deep_profiling__Var_296;
                MR_Word ll_backend__deep_profiling__Var_297;
                MR_String ll_backend__deep_profiling__Var_299;
                MR_Word ll_backend__deep_profiling__Var_300;
                MR_Word ll_backend__deep_profiling__Var_298;
                MR_Word ll_backend__deep_profiling__Var_62;

                {
                  ll_backend__deep_profiling__Var_112 = parse_tree__builtin_lib_types__int_type_0_f_0();
                }
                {
                  ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "MethodNum", ll_backend__deep_profiling__Var_112, &ll_backend__deep_profiling__MethodNumVar_58, ll_backend__deep_profiling__VarInfo2_57, &ll_backend__deep_profiling__VarInfo3_59);
                }
                ll_backend__deep_profiling__Var_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 0)));
                ll_backend__deep_profiling__Var_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 1)));
                ll_backend__deep_profiling__Var_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 2)));
                ll_backend__deep_profiling__Var_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 3)));
                ll_backend__deep_profiling__Var_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 4)));
                ll_backend__deep_profiling__Var_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 5)));
                ll_backend__deep_profiling__Var_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 6)));
                ll_backend__deep_profiling__Var_299 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 7)));
                ll_backend__deep_profiling__Var_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 8)));
                {
                  ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_292));
                  MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_293));
                  MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_294));
                  MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113, 3) = ((MR_Box) (ll_backend__deep_profiling__Var_295));
                  MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113, 4) = ((MR_Box) (ll_backend__deep_profiling__Var_296));
                  MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113, 5) = ((MR_Box) (ll_backend__deep_profiling__Var_297));
                  MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113, 6) = ((MR_Box) (ll_backend__deep_profiling__VarInfo3_59));
                  MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113, 7) = ((MR_Box) (ll_backend__deep_profiling__Var_299));
                  MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113, 8) = ((MR_Box) (ll_backend__deep_profiling__Var_300));
                }
                {
                  ll_backend__deep_profiling__Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_114, 1) = ((MR_Box) (ll_backend__deep_profiling__MethodNum_54));
                }
                {
                  ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(ll_backend__deep_profiling__Var_114, ll_backend__deep_profiling__MethodNumVar_58, &ll_backend__deep_profiling__MethodNumVarGoal_60);
                }
                {
                  ll_backend__deep_profiling__Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_120, 0) = ((MR_Box) (ll_backend__deep_profiling__MethodNumVar_58));
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  ll_backend__deep_profiling__Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_119, 0) = ((MR_Box) (ll_backend__deep_profiling__TypeClassInfoVar_53));
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_119, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_120));
                }
                {
                  ll_backend__deep_profiling__Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_117, 0) = ((MR_Box) (ll_backend__deep_profiling__SiteNumVar_23));
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_117, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_119));
                }
                {
                  ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_13, (MR_String) "prepare_for_method_call", (MR_Integer) 3, ll_backend__deep_profiling__Var_117, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__PrepareCallGoal_61);
                }
                ll_backend__deep_profiling__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__PrepareCallGoal_61, (MR_Integer) 0)));
                ll_backend__deep_profiling__PrepareCallGoalInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__PrepareCallGoal_61, (MR_Integer) 1)));
                {
                  ll_backend__deep_profiling__Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_124, 0) = ((MR_Box) (ll_backend__deep_profiling__PrepareCallGoal_61));
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  ll_backend__deep_profiling__Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_123, 0) = ((MR_Box) (ll_backend__deep_profiling__MethodNumVarGoal_60));
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_123, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_124));
                }
                {
                  ll_backend__deep_profiling__PrepareGoalExpr_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__PrepareGoalExpr_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__PrepareGoalExpr_64, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__PrepareGoalExpr_64, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_123));
                }
                {
                  ll_backend__deep_profiling__PrepareGoal_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__PrepareGoal_32, 0) = ((MR_Box) (ll_backend__deep_profiling__PrepareGoalExpr_64));
                  MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__PrepareGoal_32, 1) = ((MR_Box) (ll_backend__deep_profiling__PrepareCallGoalInfo_63));
                }
                {
                  ll_backend__deep_profiling__CallSite_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__CallSite_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__CallSite_44, 1) = ((MR_Box) (ll_backend__deep_profiling__FileName_29));
                  MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__CallSite_44, 2) = ((MR_Box) (ll_backend__deep_profiling__LineNumber_28));
                  MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__CallSite_44, 3) = ((MR_Box) (ll_backend__deep_profiling__GoalPath_12));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.deep_prof_wrap_call\'/4", (MR_String) "event_call");
                  return;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.deep_prof_wrap_call\'/4", (MR_String) "cast");
                  return;
                }
              }
              break;
          }
          {
            ll_backend__deep_profiling__GoalCodeModel_67 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__deep_profiling__GoalInfo0_9);
          }
          {
            hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__deep_profiling__ModuleInfo_13, &ll_backend__deep_profiling__Globals_68);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(ll_backend__deep_profiling__Globals_68, (MR_Integer) 219, &ll_backend__deep_profiling__UseZeroing_69);
          }
          switch (ll_backend__deep_profiling__UseZeroing_69) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ll_backend__deep_profiling__Goal2_45 = ll_backend__deep_profiling__Goal1_18;
                ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113;
              }
              break;
            case (MR_Integer) 1:
              {
                ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_p_0(ll_backend__deep_profiling__Globals_68, ll_backend__deep_profiling__GoalCodeModel_67, ll_backend__deep_profiling__Goal1_18, &ll_backend__deep_profiling__Goal2_45, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113, &ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133);
              }
              break;
          }
        }
        break;
    }
    ll_backend__deep_profiling__Var_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 0)));
    ll_backend__deep_profiling__Var_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 1)));
    ll_backend__deep_profiling__Var_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 2)));
    ll_backend__deep_profiling__Var_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 3)));
    ll_backend__deep_profiling__Var_305 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 4)));
    ll_backend__deep_profiling__Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 5)));
    ll_backend__deep_profiling__Var_306 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 6)));
    ll_backend__deep_profiling__Var_307 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 7)));
    ll_backend__deep_profiling__Var_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 8)));
    {
      ll_backend__deep_profiling__Var_154 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0, ll_backend__deep_profiling__Var_155, ((MR_Box) (ll_backend__deep_profiling__CallSite_44)));
    }
    ll_backend__deep_profiling__Var_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 0)));
    ll_backend__deep_profiling__Var_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 1)));
    ll_backend__deep_profiling__Var_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 2)));
    ll_backend__deep_profiling__Var_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 3)));
    ll_backend__deep_profiling__Var_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 4)));
    ll_backend__deep_profiling__Var_314 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 5)));
    ll_backend__deep_profiling__Var_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 6)));
    ll_backend__deep_profiling__Var_316 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 7)));
    ll_backend__deep_profiling__Var_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 8)));
    {
      ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_309));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_310));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_311));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, 3) = ((MR_Box) (ll_backend__deep_profiling__Var_312));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, 4) = ((MR_Box) (ll_backend__deep_profiling__Var_313));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, 5) = ((MR_Box) (ll_backend__deep_profiling__Var_154));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, 6) = ((MR_Box) (ll_backend__deep_profiling__Var_315));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, 7) = ((MR_Box) (ll_backend__deep_profiling__Var_316));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, 8) = ((MR_Box) (ll_backend__deep_profiling__Var_317));
    }
    {
      ll_backend__deep_profiling__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, ((MR_Box) ((MR_Integer) 9)), ll_backend__deep_profiling__GoalFeatures_14);
    }
    if (ll_backend__deep_profiling__succeeded)
      {
        ll_backend__deep_profiling__Var_318 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, (MR_Integer) 0)));
        ll_backend__deep_profiling__Var_319 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, (MR_Integer) 1)));
        ll_backend__deep_profiling__Var_320 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, (MR_Integer) 2)));
        ll_backend__deep_profiling__Var_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, (MR_Integer) 3)));
        ll_backend__deep_profiling__Var_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, (MR_Integer) 4)));
        ll_backend__deep_profiling__Var_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, (MR_Integer) 5)));
        ll_backend__deep_profiling__Var_324 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, (MR_Integer) 6)));
        ll_backend__deep_profiling__Var_325 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, (MR_Integer) 7)));
        ll_backend__deep_profiling__Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, (MR_Integer) 8)));
        ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__Var_157)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__deep_profiling__succeeded)
          {
            ll_backend__deep_profiling__RecInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_157, (MR_Integer) 0)));
            ll_backend__deep_profiling__Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RecInfo_70, (MR_Integer) 0)));
            ll_backend__deep_profiling__Var_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RecInfo_70, (MR_Integer) 1)));
            ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__Var_158)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__deep_profiling__succeeded)
              ll_backend__deep_profiling__Var_71 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__Var_158), (MR_Integer) 1);
          }
      }
    if (ll_backend__deep_profiling__succeeded)
      {
        MR_Word ll_backend__deep_profiling__CallGoals_74;
        MR_Word ll_backend__deep_profiling__ExitGoals_75;
        MR_Word ll_backend__deep_profiling__FailGoals_76;
        MR_Word ll_backend__deep_profiling__SaveRestoreVars_77;
        MR_Word ll_backend__deep_profiling__CodeModel_82;

        if ((ll_backend__deep_profiling__Var_326 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            ll_backend__deep_profiling__CallGoals_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            ll_backend__deep_profiling__ExitGoals_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            ll_backend__deep_profiling__FailGoals_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            ll_backend__deep_profiling__SaveRestoreVars_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_97 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153;
          }
        else
          {
            MR_Word ll_backend__deep_profiling__Var_345 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_326, (MR_Integer) 1)));
            MR_Word ll_backend__deep_profiling__Var_346 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_326, (MR_Integer) 0)));

            if ((ll_backend__deep_profiling__Var_345 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word ll_backend__deep_profiling__Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_346, (MR_Integer) 2)));
                MR_Word ll_backend__deep_profiling__Var_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_346, (MR_Integer) 0)));
                MR_Word ll_backend__deep_profiling__Var_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_346, (MR_Integer) 1)));

                {
                  ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_8_p_0(ll_backend__deep_profiling__Var_164, ll_backend__deep_profiling__Var_321, &ll_backend__deep_profiling__CallGoals_74, &ll_backend__deep_profiling__ExitGoals_75, &ll_backend__deep_profiling__FailGoals_76, &ll_backend__deep_profiling__SaveRestoreVars_77, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_97);
                }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.deep_prof_wrap_call\'/4", (MR_String) "multi-procedure SCCs not yet implemented");
                  return;
                }
              }
          }
        {
          ll_backend__deep_profiling__CodeModel_82 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__deep_profiling__GoalInfo0_9);
        }
        switch (ll_backend__deep_profiling__CodeModel_82) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__deep_profiling__TypeCtorInfo_341_341 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              MR_Word ll_backend__deep_profiling__Goals_83;
              MR_Word ll_backend__deep_profiling__Var_190;
              MR_Word ll_backend__deep_profiling__Var_191;
              MR_Word ll_backend__deep_profiling__Var_192;
              MR_Word ll_backend__deep_profiling__Var_193;

              {
                ll_backend__deep_profiling__Var_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_193, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal2_45));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_193, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__deep_profiling__Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_192, 0) = ((MR_Box) (ll_backend__deep_profiling__PrepareGoal_32));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_192, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_193));
              }
              {
                ll_backend__deep_profiling__Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_191, 0) = ((MR_Box) (ll_backend__deep_profiling__SiteNumVarGoal_25));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_191, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_192));
              }
              {
                ll_backend__deep_profiling__Var_190 = mercury__list__f_43_43_2_f_0(ll_backend__deep_profiling__TypeCtorInfo_341_341, ll_backend__deep_profiling__Var_191, ll_backend__deep_profiling__ExitGoals_75);
              }
              {
                ll_backend__deep_profiling__Goals_83 = mercury__list__f_43_43_2_f_0(ll_backend__deep_profiling__TypeCtorInfo_341_341, ll_backend__deep_profiling__CallGoals_74, ll_backend__deep_profiling__Var_190);
              }
              {
                ll_backend__deep_profiling__GoalExpr_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_84, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_84, 2) = ((MR_Box) (ll_backend__deep_profiling__Goals_83));
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__deep_profiling__TypeCtorInfo_343_343;
              MR_Word ll_backend__deep_profiling__ExtraVars_85;
              MR_Word ll_backend__deep_profiling__WrappedGoalGoalInfo0_86;
              MR_Word ll_backend__deep_profiling__WrappedGoalGoalInfo_87;
              MR_Word ll_backend__deep_profiling__ReturnFailsGoalInfo0_88;
              MR_Word ll_backend__deep_profiling__ReturnFailsGoalInfo_89;
              MR_Word ll_backend__deep_profiling__FailGoalInfo0_90;
              MR_Word ll_backend__deep_profiling__FailGoalInfo_91;
              MR_Word ll_backend__deep_profiling__FailGoal_92;
              MR_Word ll_backend__deep_profiling__FailGoalsAndFail_93;
              MR_Word ll_backend__deep_profiling__DisjGoalExpr_94;
              MR_Word ll_backend__deep_profiling__DisjGoal_95;
              MR_Word ll_backend__deep_profiling__Var_166;
              MR_Word ll_backend__deep_profiling__Var_173;
              MR_Word ll_backend__deep_profiling__Var_175;
              MR_Word ll_backend__deep_profiling__Var_176;
              MR_Word ll_backend__deep_profiling__Var_177;
              MR_Word ll_backend__deep_profiling__Var_179;
              MR_Word ll_backend__deep_profiling__Var_180;
              MR_Word ll_backend__deep_profiling__Var_181;
              MR_Word ll_backend__deep_profiling__Var_182;
              MR_Word ll_backend__deep_profiling__Var_183;
              MR_Word ll_backend__deep_profiling__Var_184;
              MR_Word ll_backend__deep_profiling__Var_187;
              MR_Word ll_backend__deep_profiling__Goals_207;

              {
                ll_backend__deep_profiling__Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_166, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_321));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_166, 1) = ((MR_Box) (ll_backend__deep_profiling__SaveRestoreVars_77));
              }
              {
                ll_backend__deep_profiling__ExtraVars_85 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__Var_166);
              }
              {
                ll_backend__deep_profiling__WrappedGoalGoalInfo0_86 = hlds__hlds_goal__goal_info_add_nonlocals_make_impure_2_f_0(ll_backend__deep_profiling__MdprofInstGoalInfo_17, ll_backend__deep_profiling__ExtraVars_85);
              }
              {
                hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ll_backend__deep_profiling__WrappedGoalGoalInfo0_86, &ll_backend__deep_profiling__WrappedGoalGoalInfo_87);
              }
              {
                ll_backend__deep_profiling__ReturnFailsGoalInfo0_88 = hlds__hlds_goal__impure_unreachable_init_goal_info_2_f_0(ll_backend__deep_profiling__ExtraVars_85, (MR_Integer) 7);
              }
              {
                hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ll_backend__deep_profiling__ReturnFailsGoalInfo0_88, &ll_backend__deep_profiling__ReturnFailsGoalInfo_89);
              }
              {
                ll_backend__deep_profiling__FailGoalInfo0_90 = hlds__make_goal__fail_goal_info_0_f_0();
              }
              {
                hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ll_backend__deep_profiling__FailGoalInfo0_90, &ll_backend__deep_profiling__FailGoalInfo_91);
              }
              {
                ll_backend__deep_profiling__FailGoal_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__FailGoal_92, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__deep_profiling_scalar_common_2[11])));
                MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__FailGoal_92, 1) = ((MR_Box) (ll_backend__deep_profiling__FailGoalInfo_91));
              }
              ll_backend__deep_profiling__TypeCtorInfo_343_343 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                ll_backend__deep_profiling__Var_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_173, 0) = ((MR_Box) (ll_backend__deep_profiling__FailGoal_92));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_173, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__deep_profiling__FailGoalsAndFail_93 = mercury__list__f_43_43_2_f_0(ll_backend__deep_profiling__TypeCtorInfo_343_343, ll_backend__deep_profiling__FailGoals_76, ll_backend__deep_profiling__Var_173);
              }
              {
                ll_backend__deep_profiling__Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_181, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal2_45));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_181, 1) = ((MR_Box) (ll_backend__deep_profiling__ExitGoals_75));
              }
              {
                ll_backend__deep_profiling__Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_180, 0) = ((MR_Box) (ll_backend__deep_profiling__PrepareGoal_32));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_180, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_181));
              }
              {
                ll_backend__deep_profiling__Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_179, 0) = ((MR_Box) (ll_backend__deep_profiling__SiteNumVarGoal_25));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_179, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_180));
              }
              {
                ll_backend__deep_profiling__Var_177 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_177, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_177, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_177, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_179));
              }
              {
                ll_backend__deep_profiling__Var_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_176, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_177));
                MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_176, 1) = ((MR_Box) (ll_backend__deep_profiling__WrappedGoalGoalInfo_87));
              }
              {
                ll_backend__deep_profiling__Var_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_184, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_184, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_184, 2) = ((MR_Box) (ll_backend__deep_profiling__FailGoalsAndFail_93));
              }
              {
                ll_backend__deep_profiling__Var_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_183, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_184));
                MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_183, 1) = ((MR_Box) (ll_backend__deep_profiling__ReturnFailsGoalInfo_89));
              }
              {
                ll_backend__deep_profiling__Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_182, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_183));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_182, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__deep_profiling__Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_175, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_176));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_175, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_182));
              }
              {
                ll_backend__deep_profiling__DisjGoalExpr_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__DisjGoalExpr_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__DisjGoalExpr_94, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_175));
              }
              {
                ll_backend__deep_profiling__DisjGoal_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DisjGoal_95, 0) = ((MR_Box) (ll_backend__deep_profiling__DisjGoalExpr_94));
                MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DisjGoal_95, 1) = ((MR_Box) (ll_backend__deep_profiling__WrappedGoalGoalInfo_87));
              }
              {
                ll_backend__deep_profiling__Var_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_187, 0) = ((MR_Box) (ll_backend__deep_profiling__DisjGoal_95));
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_187, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__deep_profiling__Goals_207 = mercury__list__f_43_43_2_f_0(ll_backend__deep_profiling__TypeCtorInfo_343_343, ll_backend__deep_profiling__CallGoals_74, ll_backend__deep_profiling__Var_187);
              }
              {
                ll_backend__deep_profiling__GoalExpr_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_84, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_84, 2) = ((MR_Box) (ll_backend__deep_profiling__Goals_207));
              }
            }
            break;
        }
      }
    else
      {
        MR_Word ll_backend__deep_profiling__Var_197;
        MR_Word ll_backend__deep_profiling__Var_198;
        MR_Word ll_backend__deep_profiling__Var_199;

        {
          ll_backend__deep_profiling__Var_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_199, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal2_45));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_199, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__deep_profiling__Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_198, 0) = ((MR_Box) (ll_backend__deep_profiling__PrepareGoal_32));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_198, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_199));
        }
        {
          ll_backend__deep_profiling__Var_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_197, 0) = ((MR_Box) (ll_backend__deep_profiling__SiteNumVarGoal_25));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_197, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_198));
        }
        {
          ll_backend__deep_profiling__GoalExpr_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_84, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_84, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_197));
        }
        *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_97 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153;
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__deep_profiling__Goal_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_84));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__MdprofInstGoalInfo_17));
    }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_switch_5_p_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word * ll_backend__deep_profiling__HeadVar__2_2,
  MR_Word * ll_backend__deep_profiling__HeadVar__3_3,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_4,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_5)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;

    if ((ll_backend__deep_profiling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__deep_profiling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__deep_profiling__HeadVar__3_3 = (MR_Integer) 0;
        *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_5 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_4;
      }
    else
      {
        MR_Word ll_backend__deep_profiling__Case0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__deep_profiling__Cases0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__deep_profiling__Case_11;
        MR_Word ll_backend__deep_profiling__Cases_12;
        MR_Word ll_backend__deep_profiling__MainConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case0_9, (MR_Integer) 0)));
        MR_Word ll_backend__deep_profiling__OtherConsIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case0_9, (MR_Integer) 1)));
        MR_Word ll_backend__deep_profiling__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case0_9, (MR_Integer) 2)));
        MR_Word ll_backend__deep_profiling__Goal_18;
        MR_Word ll_backend__deep_profiling__AddedImpurityFirst_19;
        MR_Word ll_backend__deep_profiling__AddedImpurityLater_20;
        MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_23_23;

        {
          ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(ll_backend__deep_profiling__Goal0_17, &ll_backend__deep_profiling__Goal_18, &ll_backend__deep_profiling__AddedImpurityFirst_19, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_4, &ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_23_23);
        }
        {
          ll_backend__deep_profiling__Case_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case_11, 0) = ((MR_Box) (ll_backend__deep_profiling__MainConsId_15));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case_11, 1) = ((MR_Box) (ll_backend__deep_profiling__OtherConsIds_16));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case_11, 2) = ((MR_Box) (ll_backend__deep_profiling__Goal_18));
        }
        {
          ll_backend__deep_profiling__deep_prof_transform_switch_5_p_0(ll_backend__deep_profiling__Cases0_10, &ll_backend__deep_profiling__Cases_12, &ll_backend__deep_profiling__AddedImpurityLater_20, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_23_23, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__deep_profiling__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Case_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__deep_profiling__Cases_12));
        }
        {
          mercury__bool__or_3_p_0(ll_backend__deep_profiling__AddedImpurityFirst_19, ll_backend__deep_profiling__AddedImpurityLater_20, ll_backend__deep_profiling__HeadVar__3_3);
        }
      }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_disj_5_p_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word * ll_backend__deep_profiling__HeadVar__2_2,
  MR_Word * ll_backend__deep_profiling__HeadVar__3_3,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_4,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_5)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;

    if ((ll_backend__deep_profiling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__deep_profiling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__deep_profiling__HeadVar__3_3 = (MR_Integer) 0;
        *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_5 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_4;
      }
    else
      {
        MR_Word ll_backend__deep_profiling__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__deep_profiling__Goals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__deep_profiling__Goal_11;
        MR_Word ll_backend__deep_profiling__Goals_12;
        MR_Word ll_backend__deep_profiling__AddedImpurityFirst_15;
        MR_Word ll_backend__deep_profiling__AddedImpurityLater_16;
        MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_19_19;

        {
          ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(ll_backend__deep_profiling__Goal0_9, &ll_backend__deep_profiling__Goal_11, &ll_backend__deep_profiling__AddedImpurityFirst_15, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_4, &ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_19_19);
        }
        {
          ll_backend__deep_profiling__deep_prof_transform_disj_5_p_0(ll_backend__deep_profiling__Goals0_10, &ll_backend__deep_profiling__Goals_12, &ll_backend__deep_profiling__AddedImpurityLater_16, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_19_19, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__deep_profiling__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__deep_profiling__Goals_12));
        }
        {
          mercury__bool__or_3_p_0(ll_backend__deep_profiling__AddedImpurityFirst_15, ll_backend__deep_profiling__AddedImpurityLater_16, ll_backend__deep_profiling__HeadVar__3_3);
        }
      }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_conj_6_p_0(
  MR_Word ll_backend__deep_profiling__ConjType_1,
  MR_Word ll_backend__deep_profiling__HeadVar__2_2,
  MR_Word * ll_backend__deep_profiling__HeadVar__3_3,
  MR_Word * ll_backend__deep_profiling__HeadVar__4_4,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_5,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_6)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;

    if ((ll_backend__deep_profiling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__deep_profiling__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__deep_profiling__HeadVar__4_4 = (MR_Integer) 0;
        *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_6 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_5;
      }
    else
      {
        MR_Word ll_backend__deep_profiling__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__deep_profiling__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__deep_profiling__Goal_17;
        MR_Word ll_backend__deep_profiling__AddedImpurityFirst_18;
        MR_Word ll_backend__deep_profiling__TailGoals_19;
        MR_Word ll_backend__deep_profiling__AddedImpurityLater_20;
        MR_Word ll_backend__deep_profiling__GoalExpr_21;
        MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_26_26;
        MR_Word ll_backend__deep_profiling__Var_22;
        MR_Word ll_backend__deep_profiling__Conjuncts_23;
        MR_Word ll_backend__deep_profiling__Var_28;

        {
          ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(ll_backend__deep_profiling__Goal0_12, &ll_backend__deep_profiling__Goal_17, &ll_backend__deep_profiling__AddedImpurityFirst_18, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_5, &ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_26_26);
        }
        {
          ll_backend__deep_profiling__deep_prof_transform_conj_6_p_0(ll_backend__deep_profiling__ConjType_1, ll_backend__deep_profiling__Goals0_13, &ll_backend__deep_profiling__TailGoals_19, &ll_backend__deep_profiling__AddedImpurityLater_20, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_26_26, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_6);
        }
        ll_backend__deep_profiling__GoalExpr_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal_17, (MR_Integer) 0)));
        ll_backend__deep_profiling__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal_17, (MR_Integer) 1)));
        ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__ConjType_1 == (MR_Integer) 0);
        if (ll_backend__deep_profiling__succeeded)
          {
            ll_backend__deep_profiling__succeeded = ((((MR_tag((MR_Word) ll_backend__deep_profiling__GoalExpr_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_21, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (ll_backend__deep_profiling__succeeded)
              {
                ll_backend__deep_profiling__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_21, (MR_Integer) 1)));
                ll_backend__deep_profiling__Conjuncts_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_21, (MR_Integer) 2)));
                ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__Var_28 == (MR_Integer) 0);
              }
          }
        if (ll_backend__deep_profiling__succeeded)
          {
            {
              *ll_backend__deep_profiling__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__deep_profiling__Conjuncts_23, ll_backend__deep_profiling__TailGoals_19);
            }
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__deep_profiling__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal_17));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__deep_profiling__TailGoals_19));
          }
        {
          mercury__bool__or_3_p_0(ll_backend__deep_profiling__AddedImpurityFirst_18, ll_backend__deep_profiling__AddedImpurityLater_20, ll_backend__deep_profiling__HeadVar__4_4);
        }
      }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_mark_goal_as_not_mdprof_inst_2_p_0(
  MR_Word ll_backend__deep_profiling__Goal0_3,
  MR_Word * ll_backend__deep_profiling__Goal_4)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__GoalInfo0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_3, (MR_Integer) 1)));
    MR_Word ll_backend__deep_profiling__GoalInfo_6;
    MR_Word ll_backend__deep_profiling__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_3, (MR_Integer) 0)));
    MR_Word ll_backend__deep_profiling__Var_9;
    MR_Word ll_backend__deep_profiling__Var_10;

    {
      hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 1, ll_backend__deep_profiling__GoalInfo0_5, &ll_backend__deep_profiling__GoalInfo_6);
    }
    ll_backend__deep_profiling__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_3, (MR_Integer) 0)));
    ll_backend__deep_profiling__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_3, (MR_Integer) 1)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__deep_profiling__Goal_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_6));
    }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0_2(
  MR_Box ll_backend__deep_profiling__closure_arg,
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box * ll_backend__deep_profiling__wrapper_arg_2)
{
  {
    MR_Box ll_backend__deep_profiling__closure = ll_backend__deep_profiling__closure_arg;
    MR_Word ll_backend__deep_profiling__conv1_Goal_4;

    {
      ll_backend__deep_profiling__deep_prof_mark_goal_as_not_mdprof_inst_2_p_0(((MR_Word) ll_backend__deep_profiling__wrapper_arg_1), &ll_backend__deep_profiling__conv1_Goal_4);
    }
    *ll_backend__deep_profiling__wrapper_arg_2 = ((MR_Box) (ll_backend__deep_profiling__conv1_Goal_4));
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0_1(
  MR_Box ll_backend__deep_profiling__closure_arg,
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box * ll_backend__deep_profiling__wrapper_arg_2)
{
  {
    MR_Box ll_backend__deep_profiling__closure = ll_backend__deep_profiling__closure_arg;
    MR_Word ll_backend__deep_profiling__conv0_Goal_4;

    {
      ll_backend__deep_profiling__deep_prof_mark_goal_as_not_mdprof_inst_2_p_0(((MR_Word) ll_backend__deep_profiling__wrapper_arg_1), &ll_backend__deep_profiling__conv0_Goal_4);
    }
    *ll_backend__deep_profiling__wrapper_arg_2 = ((MR_Box) (ll_backend__deep_profiling__conv0_Goal_4));
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(
  MR_Word ll_backend__deep_profiling__Goal0_6,
  MR_Word * ll_backend__deep_profiling__Goal_7,
  MR_Word * ll_backend__deep_profiling__AddedImpurity_8,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_6, (MR_Integer) 0)));
    MR_Word ll_backend__deep_profiling__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_6, (MR_Integer) 1)));
    MR_Word ll_backend__deep_profiling__GoalInfo1_12;
    MR_Word ll_backend__deep_profiling__Goal1_13;

    {
      hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 1, ll_backend__deep_profiling__GoalInfo0_11, &ll_backend__deep_profiling__GoalInfo1_12);
    }
    {
      ll_backend__deep_profiling__Goal1_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal1_13, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr0_10));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal1_13, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo1_12));
    }
    switch (MR_tag((MR_Word) ll_backend__deep_profiling__GoalExpr0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__deep_profiling__SubGoal0_56 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__GoalExpr0_10), (MR_Integer) 0);
          MR_Word ll_backend__deep_profiling__SubGoal_57;
          MR_Word ll_backend__deep_profiling__GoalInfo_113;
          MR_Word ll_backend__deep_profiling__GoalExpr_114;

          {
            ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(ll_backend__deep_profiling__SubGoal0_56, &ll_backend__deep_profiling__SubGoal_57, ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82);
          }
          {
            hlds__hlds_goal__add_impurity_if_needed_3_p_0(*ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__GoalInfo1_12, &ll_backend__deep_profiling__GoalInfo_113);
          }
          ll_backend__deep_profiling__GoalExpr_114 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__deep_profiling__SubGoal_57);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *ll_backend__deep_profiling__Goal_7 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_114));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_113));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *ll_backend__deep_profiling__Goal_7 = ll_backend__deep_profiling__Goal1_13;
          *ll_backend__deep_profiling__AddedImpurity_8 = (MR_Integer) 0;
          *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__deep_profiling__BuiltinState_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 3)));
          MR_Word ll_backend__deep_profiling__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 0)));
          MR_Integer ll_backend__deep_profiling__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 1)));
          MR_Word ll_backend__deep_profiling__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 2)));
          MR_Word ll_backend__deep_profiling__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 4)));
          MR_Word ll_backend__deep_profiling__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 5)));

          switch (ll_backend__deep_profiling__BuiltinState_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *ll_backend__deep_profiling__Goal_7 = ll_backend__deep_profiling__Goal1_13;
                *ll_backend__deep_profiling__AddedImpurity_8 = (MR_Integer) 0;
                *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81;
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  ll_backend__deep_profiling__deep_prof_wrap_call_4_p_0(ll_backend__deep_profiling__Goal1_13, ll_backend__deep_profiling__Goal_7, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82);
                }
                *ll_backend__deep_profiling__AddedImpurity_8 = (MR_Integer) 1;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__deep_profiling__GenericCall_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word ll_backend__deep_profiling__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word ll_backend__deep_profiling__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 3)));
              MR_Word ll_backend__deep_profiling__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 4)));
              MR_Word ll_backend__deep_profiling__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 5)));

              switch (MR_tag((MR_Word) ll_backend__deep_profiling__GenericCall_20)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  {
                    {
                      ll_backend__deep_profiling__deep_prof_wrap_call_4_p_0(ll_backend__deep_profiling__Goal1_13, ll_backend__deep_profiling__Goal_7, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82);
                    }
                    *ll_backend__deep_profiling__AddedImpurity_8 = (MR_Integer) 1;
                  }
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  {
                    *ll_backend__deep_profiling__Goal_7 = ll_backend__deep_profiling__Goal1_13;
                    *ll_backend__deep_profiling__AddedImpurity_8 = (MR_Integer) 0;
                    *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__deep_profiling__Attrs_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word ll_backend__deep_profiling__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 2)));
              MR_Integer ll_backend__deep_profiling__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 3)));
              MR_Word ll_backend__deep_profiling__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 4)));
              MR_Word ll_backend__deep_profiling__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 5)));
              MR_Word ll_backend__deep_profiling__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 6)));
              MR_Word ll_backend__deep_profiling__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 7)));
              MR_Word ll_backend__deep_profiling__Var_103;

              {
                ll_backend__deep_profiling__Var_103 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(ll_backend__deep_profiling__Attrs_35);
              }
              ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__Var_103 == (MR_Integer) 0);
              if (ll_backend__deep_profiling__succeeded)
                {
                  {
                    ll_backend__deep_profiling__deep_prof_wrap_foreign_code_4_p_0(ll_backend__deep_profiling__Goal1_13, ll_backend__deep_profiling__Goal_7, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82);
                  }
                  *ll_backend__deep_profiling__AddedImpurity_8 = (MR_Integer) 1;
                }
              else
                {
                  *ll_backend__deep_profiling__Goal_7 = ll_backend__deep_profiling__Goal1_13;
                  *ll_backend__deep_profiling__AddedImpurity_8 = (MR_Integer) 0;
                  *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__deep_profiling__ConjType_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word ll_backend__deep_profiling__Goals0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word ll_backend__deep_profiling__Goals_49;
              MR_Word ll_backend__deep_profiling__GoalInfo_50;
              MR_Word ll_backend__deep_profiling__GoalExpr_51;

              {
                ll_backend__deep_profiling__deep_prof_transform_conj_6_p_0(ll_backend__deep_profiling__ConjType_47, ll_backend__deep_profiling__Goals0_48, &ll_backend__deep_profiling__Goals_49, ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82);
              }
              {
                hlds__hlds_goal__add_impurity_if_needed_3_p_0(*ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__GoalInfo1_12, &ll_backend__deep_profiling__GoalInfo_50);
              }
              {
                ll_backend__deep_profiling__GoalExpr_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_51, 1) = ((MR_Box) (ll_backend__deep_profiling__ConjType_47));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_51, 2) = ((MR_Box) (ll_backend__deep_profiling__Goals_49));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *ll_backend__deep_profiling__Goal_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_51));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_50));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__deep_profiling__Goals0_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word ll_backend__deep_profiling__Goals_108;
              MR_Word ll_backend__deep_profiling__GoalInfo_109;
              MR_Word ll_backend__deep_profiling__GoalExpr_110;

              {
                ll_backend__deep_profiling__deep_prof_transform_disj_5_p_0(ll_backend__deep_profiling__Goals0_107, &ll_backend__deep_profiling__Goals_108, ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82);
              }
              {
                hlds__hlds_goal__add_impurity_if_needed_3_p_0(*ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__GoalInfo1_12, &ll_backend__deep_profiling__GoalInfo_109);
              }
              {
                ll_backend__deep_profiling__GoalExpr_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_110, 1) = ((MR_Box) (ll_backend__deep_profiling__Goals_108));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *ll_backend__deep_profiling__Goal_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_110));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_109));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__deep_profiling__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word ll_backend__deep_profiling__CanFail_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word ll_backend__deep_profiling__Cases0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 3)));
              MR_Word ll_backend__deep_profiling__Cases_55;
              MR_Word ll_backend__deep_profiling__GoalInfo_111;
              MR_Word ll_backend__deep_profiling__GoalExpr_112;

              {
                ll_backend__deep_profiling__deep_prof_transform_switch_5_p_0(ll_backend__deep_profiling__Cases0_54, &ll_backend__deep_profiling__Cases_55, ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82);
              }
              {
                hlds__hlds_goal__add_impurity_if_needed_3_p_0(*ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__GoalInfo1_12, &ll_backend__deep_profiling__GoalInfo_111);
              }
              {
                ll_backend__deep_profiling__GoalExpr_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_112, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_52));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_112, 2) = ((MR_Box) (ll_backend__deep_profiling__CanFail_53));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_112, 3) = ((MR_Box) (ll_backend__deep_profiling__Cases_55));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *ll_backend__deep_profiling__Goal_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_112));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_111));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__deep_profiling__Reason0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word ll_backend__deep_profiling__InnerInfo_70;
              MR_Word ll_backend__deep_profiling__OuterDetism_71;
              MR_Word ll_backend__deep_profiling__InnerDetism_72;
              MR_Word ll_backend__deep_profiling__SubGoal0_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word ll_backend__deep_profiling__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__SubGoal0_118, (MR_Integer) 0)));

              ll_backend__deep_profiling__InnerInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__SubGoal0_118, (MR_Integer) 1)));
              {
                ll_backend__deep_profiling__OuterDetism_71 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__deep_profiling__GoalInfo1_12);
              }
              {
                ll_backend__deep_profiling__InnerDetism_72 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__deep_profiling__InnerInfo_70);
              }
              ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__InnerDetism_72 == ll_backend__deep_profiling__OuterDetism_71);
              if (ll_backend__deep_profiling__succeeded)
                {
                  MR_Word ll_backend__deep_profiling__Var_95;
                  MR_Word ll_backend__deep_profiling__GoalInfo_117;
                  MR_Word ll_backend__deep_profiling__SubGoal_119;
                  MR_Word ll_backend__deep_profiling__FGT_77;
                  MR_Word ll_backend__deep_profiling__Var_76;

                  ll_backend__deep_profiling__succeeded = ((((MR_tag((MR_Word) ll_backend__deep_profiling__Reason0_68)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Reason0_68, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (ll_backend__deep_profiling__succeeded)
                    {
                      ll_backend__deep_profiling__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Reason0_68, (MR_Integer) 1)));
                      ll_backend__deep_profiling__FGT_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Reason0_68, (MR_Integer) 2)));
                      switch (ll_backend__deep_profiling__FGT_77) {
                        default:
                          ll_backend__deep_profiling__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          ll_backend__deep_profiling__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          ll_backend__deep_profiling__succeeded = MR_TRUE;
                          break;
                      }
                    }
                  if (ll_backend__deep_profiling__succeeded)
                    {
                      {
                        hlds__goal_util__transform_all_goals_3_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_1[7], ll_backend__deep_profiling__SubGoal0_118, &ll_backend__deep_profiling__SubGoal_119);
                      }
                      *ll_backend__deep_profiling__AddedImpurity_8 = (MR_Integer) 0;
                      *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81;
                    }
                  else
                    {
                      ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(ll_backend__deep_profiling__SubGoal0_118, &ll_backend__deep_profiling__SubGoal_119, ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82);
                    }
                  {
                    hlds__hlds_goal__add_impurity_if_needed_3_p_0(*ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__GoalInfo1_12, &ll_backend__deep_profiling__GoalInfo_117);
                  }
                  {
                    ll_backend__deep_profiling__Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_95, 1) = ((MR_Box) (ll_backend__deep_profiling__Reason0_68));
                    MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_95, 2) = ((MR_Box) (ll_backend__deep_profiling__SubGoal_119));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *ll_backend__deep_profiling__Goal_7 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_95));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_117));
                  }
                }
              else
                {
                  MR_Word ll_backend__deep_profiling__Var_75;

                  ll_backend__deep_profiling__succeeded = ((((MR_tag((MR_Word) ll_backend__deep_profiling__Reason0_68)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Reason0_68, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (ll_backend__deep_profiling__succeeded)
                    {
                      ll_backend__deep_profiling__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Reason0_68, (MR_Integer) 1)));
                      {
                        MR_Word ll_backend__deep_profiling__Var_129;
                        MR_Word ll_backend__deep_profiling__GoalInfo_137;
                        MR_Word ll_backend__deep_profiling__SubGoal_138;

                        {
                          ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(ll_backend__deep_profiling__SubGoal0_118, &ll_backend__deep_profiling__SubGoal_138, ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82);
                        }
                        {
                          hlds__hlds_goal__add_impurity_if_needed_3_p_0(*ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__GoalInfo1_12, &ll_backend__deep_profiling__GoalInfo_137);
                        }
                        {
                          ll_backend__deep_profiling__Var_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__deep_profiling_scalar_common_2[10])));
                          MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_129, 2) = ((MR_Box) (ll_backend__deep_profiling__SubGoal_138));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          *ll_backend__deep_profiling__Goal_7 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_129));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_137));
                        }
                      }
                    }
                  else
                    {
                      MR_Word ll_backend__deep_profiling__InnerGoalInfo_78;
                      MR_Word ll_backend__deep_profiling__InnerGoal_79;
                      MR_Word ll_backend__deep_profiling__Var_91;
                      MR_Word ll_backend__deep_profiling__Var_92;
                      MR_Word ll_backend__deep_profiling__GoalInfo_152;
                      MR_Word ll_backend__deep_profiling__SubGoal_153;
                      MR_Word ll_backend__deep_profiling__FGT_142;
                      MR_Word ll_backend__deep_profiling__Var_140;

                      ll_backend__deep_profiling__succeeded = ((((MR_tag((MR_Word) ll_backend__deep_profiling__Reason0_68)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Reason0_68, (MR_Integer) 0)))) == (MR_Integer) 6)));
                      if (ll_backend__deep_profiling__succeeded)
                        {
                          ll_backend__deep_profiling__Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Reason0_68, (MR_Integer) 1)));
                          ll_backend__deep_profiling__FGT_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Reason0_68, (MR_Integer) 2)));
                          switch (ll_backend__deep_profiling__FGT_142) {
                            default:
                              ll_backend__deep_profiling__succeeded = MR_FALSE;
                              break;
                            case (MR_Integer) 1:
                              ll_backend__deep_profiling__succeeded = MR_TRUE;
                              break;
                            case (MR_Integer) 2:
                              ll_backend__deep_profiling__succeeded = MR_TRUE;
                              break;
                          }
                        }
                      if (ll_backend__deep_profiling__succeeded)
                        {
                          {
                            hlds__goal_util__transform_all_goals_3_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_1[8], ll_backend__deep_profiling__SubGoal0_118, &ll_backend__deep_profiling__SubGoal_153);
                          }
                          *ll_backend__deep_profiling__AddedImpurity_8 = (MR_Integer) 0;
                          *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81;
                        }
                      else
                        {
                          ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(ll_backend__deep_profiling__SubGoal0_118, &ll_backend__deep_profiling__SubGoal_153, ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82);
                        }
                      {
                        hlds__hlds_goal__add_impurity_if_needed_3_p_0(*ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__GoalInfo1_12, &ll_backend__deep_profiling__GoalInfo_152);
                      }
                      {
                        hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ll_backend__deep_profiling__GoalInfo_152, &ll_backend__deep_profiling__InnerGoalInfo_78);
                      }
                      {
                        ll_backend__deep_profiling__Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                        MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_91, 1) = ((MR_Box) (ll_backend__deep_profiling__Reason0_68));
                        MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_91, 2) = ((MR_Box) (ll_backend__deep_profiling__SubGoal_153));
                      }
                      {
                        ll_backend__deep_profiling__InnerGoal_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__InnerGoal_79, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_91));
                        MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__InnerGoal_79, 1) = ((MR_Box) (ll_backend__deep_profiling__InnerGoalInfo_78));
                      }
                      {
                        ll_backend__deep_profiling__Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                        MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__deep_profiling_scalar_common_2[10])));
                        MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_92, 2) = ((MR_Box) (ll_backend__deep_profiling__InnerGoal_79));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        *ll_backend__deep_profiling__Goal_7 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_92));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_152));
                      }
                    }
                }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__deep_profiling__IVars_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word ll_backend__deep_profiling__Cond0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word ll_backend__deep_profiling__Then0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 3)));
              MR_Word ll_backend__deep_profiling__Else0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 4)));
              MR_Word ll_backend__deep_profiling__Cond_62;
              MR_Word ll_backend__deep_profiling__AddedImpurityC_63;
              MR_Word ll_backend__deep_profiling__Then_64;
              MR_Word ll_backend__deep_profiling__AddedImpurityT_65;
              MR_Word ll_backend__deep_profiling__Else_66;
              MR_Word ll_backend__deep_profiling__AddedImpurityE_67;
              MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_96_96;
              MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_97_97;
              MR_Word ll_backend__deep_profiling__GoalInfo_115;
              MR_Word ll_backend__deep_profiling__GoalExpr_116;

              {
                ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(ll_backend__deep_profiling__Cond0_59, &ll_backend__deep_profiling__Cond_62, &ll_backend__deep_profiling__AddedImpurityC_63, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81, &ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_96_96);
              }
              {
                ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(ll_backend__deep_profiling__Then0_60, &ll_backend__deep_profiling__Then_64, &ll_backend__deep_profiling__AddedImpurityT_65, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_96_96, &ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_97_97);
              }
              {
                ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(ll_backend__deep_profiling__Else0_61, &ll_backend__deep_profiling__Else_66, &ll_backend__deep_profiling__AddedImpurityE_67, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_97_97, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82);
              }
              ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__AddedImpurityC_63 == (MR_Integer) 1);
              if (!(ll_backend__deep_profiling__succeeded))
                {
                  ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__AddedImpurityT_65 == (MR_Integer) 1);
                  if (!(ll_backend__deep_profiling__succeeded))
                    ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__AddedImpurityE_67 == (MR_Integer) 1);
                }
              if (ll_backend__deep_profiling__succeeded)
                *ll_backend__deep_profiling__AddedImpurity_8 = (MR_Integer) 1;
              else
                *ll_backend__deep_profiling__AddedImpurity_8 = (MR_Integer) 0;
              {
                hlds__hlds_goal__add_impurity_if_needed_3_p_0(*ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__GoalInfo1_12, &ll_backend__deep_profiling__GoalInfo_115);
              }
              {
                ll_backend__deep_profiling__GoalExpr_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_116, 1) = ((MR_Box) (ll_backend__deep_profiling__IVars_58));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_116, 2) = ((MR_Box) (ll_backend__deep_profiling__Cond_62));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_116, 3) = ((MR_Box) (ll_backend__deep_profiling__Then_64));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_116, 4) = ((MR_Box) (ll_backend__deep_profiling__Else_66));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *ll_backend__deep_profiling__Goal_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_116));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_115));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.deep_prof_transform_goal\'/5", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__build_non_proc_body_10_p_0(
  MR_Word ll_backend__deep_profiling__ModuleInfo_11,
  MR_Word ll_backend__deep_profiling__TopCSD_12,
  MR_Word ll_backend__deep_profiling__MiddleCSD_13,
  MR_Word ll_backend__deep_profiling__ProcStaticVar_14,
  MR_Word ll_backend__deep_profiling__MaybeOldActivationPtr_15,
  MR_Word ll_backend__deep_profiling__NewOutermostProcDyn_16,
  MR_Word ll_backend__deep_profiling__GoalInfo0_17,
  MR_Word ll_backend__deep_profiling__BindProcStaticVarGoal_18,
  MR_Word ll_backend__deep_profiling__Goal0_19,
  MR_Word * ll_backend__deep_profiling__Goal_20)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__CallPortCode_23;
    MR_Word ll_backend__deep_profiling__ExitPortCode_24;
    MR_Word ll_backend__deep_profiling__FailPortCode_25;
    MR_Word ll_backend__deep_profiling__RedoPortCode0_26;
    MR_Word ll_backend__deep_profiling__NewNonlocals_27;
    MR_Word ll_backend__deep_profiling__RedoPortExpr_28;
    MR_Word ll_backend__deep_profiling__RedoPortGoalInfo0_29;
    MR_Word ll_backend__deep_profiling__RedoPortGoalInfo_30;
    MR_Word ll_backend__deep_profiling__RedoPortCode_31;
    MR_Word ll_backend__deep_profiling__Detism0_32;
    MR_Word ll_backend__deep_profiling__CanFail_33;
    MR_Word ll_backend__deep_profiling__Detism_35;
    MR_Word ll_backend__deep_profiling__GoalInfo1_36;
    MR_Word ll_backend__deep_profiling__ExitRedoNonLocals_37;
    MR_Word ll_backend__deep_profiling__ExitRedoGoalInfo_38;
    MR_Word ll_backend__deep_profiling__CallExitRedoGoalInfo_39;
    MR_Word ll_backend__deep_profiling__GoalInfo_40;
    MR_Word ll_backend__deep_profiling__GoalExpr_41;
    MR_Word ll_backend__deep_profiling__Var_121;
    MR_Word ll_backend__deep_profiling__Var_122;
    MR_Word ll_backend__deep_profiling__Var_123;
    MR_Word ll_backend__deep_profiling__Var_124;
    MR_Word ll_backend__deep_profiling__Var_125;
    MR_Word ll_backend__deep_profiling__Var_126;
    MR_Word ll_backend__deep_profiling__Var_127;
    MR_Word ll_backend__deep_profiling__Var_128;
    MR_Word ll_backend__deep_profiling__Var_130;
    MR_Word ll_backend__deep_profiling__Var_131;
    MR_Word ll_backend__deep_profiling__Var_132;
    MR_Word ll_backend__deep_profiling__Var_133;
    MR_Word ll_backend__deep_profiling__Var_134;
    MR_Word ll_backend__deep_profiling__Var_135;
    MR_Word ll_backend__deep_profiling__Var_138;
    MR_Word ll_backend__deep_profiling__Var_34;

    if ((ll_backend__deep_profiling__MaybeOldActivationPtr_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ll_backend__deep_profiling__Var_44;
        MR_Word ll_backend__deep_profiling__Var_46;
        MR_Word ll_backend__deep_profiling__Var_47;
        MR_Word ll_backend__deep_profiling__Var_48;
        MR_Word ll_backend__deep_profiling__Var_56;
        MR_Word ll_backend__deep_profiling__Var_58;
        MR_Word ll_backend__deep_profiling__CallPortCode0_141;

        {
          ll_backend__deep_profiling__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_48, 0) = ((MR_Box) (ll_backend__deep_profiling__NewOutermostProcDyn_16));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__deep_profiling__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_47, 0) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_13));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_47, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_48));
        }
        {
          ll_backend__deep_profiling__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_46, 0) = ((MR_Box) (ll_backend__deep_profiling__TopCSD_12));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_46, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_47));
        }
        {
          ll_backend__deep_profiling__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_44, 0) = ((MR_Box) (ll_backend__deep_profiling__ProcStaticVar_14));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_44, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_46));
        }
        {
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_11, (MR_String) "non_call_port_code_ac", (MR_Integer) 4, ll_backend__deep_profiling__Var_44, ll_backend__deep_profiling__Var_46, &ll_backend__deep_profiling__CallPortCode0_141);
        }
        {
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 7, ll_backend__deep_profiling__CallPortCode0_141, &ll_backend__deep_profiling__CallPortCode_23);
        }
        {
          ll_backend__deep_profiling__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_58, 0) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_13));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__deep_profiling__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_56, 0) = ((MR_Box) (ll_backend__deep_profiling__TopCSD_12));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_56, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_58));
        }
        {
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_11, (MR_String) "non_exit_port_code_ac", (MR_Integer) 2, ll_backend__deep_profiling__Var_56, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__ExitPortCode_24);
        }
        {
          ll_backend__deep_profiling__generate_deep_call_7_p_0(ll_backend__deep_profiling__ModuleInfo_11, (MR_String) "non_fail_port_code_ac", (MR_Integer) 2, ll_backend__deep_profiling__Var_56, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 7, &ll_backend__deep_profiling__FailPortCode_25);
        }
        {
          ll_backend__deep_profiling__generate_deep_call_7_p_0(ll_backend__deep_profiling__ModuleInfo_11, (MR_String) "non_redo_port_code_ac", (MR_Integer) 2, ll_backend__deep_profiling__Var_47, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 7, &ll_backend__deep_profiling__RedoPortCode0_26);
        }
        {
          ll_backend__deep_profiling__NewNonlocals_27 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__Var_56);
        }
      }
    else
      {
        MR_Word ll_backend__deep_profiling__OldOutermostProcDyn2_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeOldActivationPtr_15, (MR_Integer) 0)));
        MR_Word ll_backend__deep_profiling__CallPortCode0_22;
        MR_Word ll_backend__deep_profiling__Var_79;
        MR_Word ll_backend__deep_profiling__Var_81;
        MR_Word ll_backend__deep_profiling__Var_82;
        MR_Word ll_backend__deep_profiling__Var_83;
        MR_Word ll_backend__deep_profiling__Var_84;
        MR_Word ll_backend__deep_profiling__Var_93;
        MR_Word ll_backend__deep_profiling__Var_95;
        MR_Word ll_backend__deep_profiling__Var_96;
        MR_Word ll_backend__deep_profiling__Var_108;

        {
          ll_backend__deep_profiling__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_84, 0) = ((MR_Box) (ll_backend__deep_profiling__NewOutermostProcDyn_16));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__deep_profiling__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_83, 0) = ((MR_Box) (ll_backend__deep_profiling__OldOutermostProcDyn2_21));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_83, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_84));
        }
        {
          ll_backend__deep_profiling__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_82, 0) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_13));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_82, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_83));
        }
        {
          ll_backend__deep_profiling__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_81, 0) = ((MR_Box) (ll_backend__deep_profiling__TopCSD_12));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_81, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_82));
        }
        {
          ll_backend__deep_profiling__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_79, 0) = ((MR_Box) (ll_backend__deep_profiling__ProcStaticVar_14));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_79, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_81));
        }
        {
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_11, (MR_String) "non_call_port_code_sr", (MR_Integer) 5, ll_backend__deep_profiling__Var_79, ll_backend__deep_profiling__Var_81, &ll_backend__deep_profiling__CallPortCode0_22);
        }
        {
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 7, ll_backend__deep_profiling__CallPortCode0_22, &ll_backend__deep_profiling__CallPortCode_23);
        }
        {
          ll_backend__deep_profiling__Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_96, 0) = ((MR_Box) (ll_backend__deep_profiling__OldOutermostProcDyn2_21));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__deep_profiling__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_95, 0) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_13));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_95, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_96));
        }
        {
          ll_backend__deep_profiling__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_93, 0) = ((MR_Box) (ll_backend__deep_profiling__TopCSD_12));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_93, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_95));
        }
        {
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_11, (MR_String) "non_exit_port_code_sr", (MR_Integer) 3, ll_backend__deep_profiling__Var_93, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__ExitPortCode_24);
        }
        {
          ll_backend__deep_profiling__generate_deep_call_7_p_0(ll_backend__deep_profiling__ModuleInfo_11, (MR_String) "non_fail_port_code_sr", (MR_Integer) 3, ll_backend__deep_profiling__Var_93, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 7, &ll_backend__deep_profiling__FailPortCode_25);
        }
        {
          ll_backend__deep_profiling__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_108, 0) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_13));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_108, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_84));
        }
        {
          ll_backend__deep_profiling__generate_deep_call_7_p_0(ll_backend__deep_profiling__ModuleInfo_11, (MR_String) "non_redo_port_code_sr", (MR_Integer) 2, ll_backend__deep_profiling__Var_108, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 7, &ll_backend__deep_profiling__RedoPortCode0_26);
        }
        {
          ll_backend__deep_profiling__NewNonlocals_27 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__Var_93);
        }
      }
    ll_backend__deep_profiling__RedoPortExpr_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RedoPortCode0_26, (MR_Integer) 0)));
    ll_backend__deep_profiling__RedoPortGoalInfo0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RedoPortCode0_26, (MR_Integer) 1)));
    {
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 6, ll_backend__deep_profiling__RedoPortGoalInfo0_29, &ll_backend__deep_profiling__RedoPortGoalInfo_30);
    }
    {
      ll_backend__deep_profiling__RedoPortCode_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RedoPortCode_31, 0) = ((MR_Box) (ll_backend__deep_profiling__RedoPortExpr_28));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RedoPortCode_31, 1) = ((MR_Box) (ll_backend__deep_profiling__RedoPortGoalInfo_30));
    }
    {
      ll_backend__deep_profiling__Detism0_32 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__deep_profiling__GoalInfo0_17);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_0(ll_backend__deep_profiling__Detism0_32, &ll_backend__deep_profiling__CanFail_33, &ll_backend__deep_profiling__Var_34);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_1(&ll_backend__deep_profiling__Detism_35, ll_backend__deep_profiling__CanFail_33, (MR_Integer) 3);
    }
    {
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(ll_backend__deep_profiling__Detism_35, ll_backend__deep_profiling__GoalInfo0_17, &ll_backend__deep_profiling__GoalInfo1_36);
    }
    {
      parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__NewOutermostProcDyn_16, ll_backend__deep_profiling__NewNonlocals_27, &ll_backend__deep_profiling__ExitRedoNonLocals_37);
    }
    {
      ll_backend__deep_profiling__ExitRedoGoalInfo_38 = hlds__hlds_goal__impure_reachable_init_goal_info_2_f_0(ll_backend__deep_profiling__ExitRedoNonLocals_37, (MR_Integer) 2);
    }
    {
      ll_backend__deep_profiling__CallExitRedoGoalInfo_39 = hlds__hlds_goal__goal_info_add_nonlocals_make_impure_2_f_0(ll_backend__deep_profiling__GoalInfo1_36, ll_backend__deep_profiling__ExitRedoNonLocals_37);
    }
    {
      hlds__hlds_goal__make_impure_2_p_0(ll_backend__deep_profiling__GoalInfo1_36, &ll_backend__deep_profiling__GoalInfo_40);
    }
    {
      ll_backend__deep_profiling__Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_135, 0) = ((MR_Box) (ll_backend__deep_profiling__RedoPortCode_31));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__deep_profiling__Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_134, 0) = ((MR_Box) (ll_backend__deep_profiling__ExitPortCode_24));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_134, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_135));
    }
    {
      ll_backend__deep_profiling__Var_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_133, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_134));
    }
    {
      ll_backend__deep_profiling__Var_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_132, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_133));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_132, 1) = ((MR_Box) (ll_backend__deep_profiling__ExitRedoGoalInfo_38));
    }
    {
      ll_backend__deep_profiling__Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_131, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_132));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__deep_profiling__Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_130, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal0_19));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_130, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_131));
    }
    {
      ll_backend__deep_profiling__Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_128, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_128, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_130));
    }
    {
      ll_backend__deep_profiling__Var_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_127, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_128));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_127, 1) = ((MR_Box) (ll_backend__deep_profiling__CallExitRedoGoalInfo_39));
    }
    {
      ll_backend__deep_profiling__Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_138, 0) = ((MR_Box) (ll_backend__deep_profiling__FailPortCode_25));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__deep_profiling__Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_126, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_127));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_126, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_138));
    }
    {
      ll_backend__deep_profiling__Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_125, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_126));
    }
    {
      ll_backend__deep_profiling__Var_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_124, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_125));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_124, 1) = ((MR_Box) (ll_backend__deep_profiling__CallExitRedoGoalInfo_39));
    }
    {
      ll_backend__deep_profiling__Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_123, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_124));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__deep_profiling__Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_122, 0) = ((MR_Box) (ll_backend__deep_profiling__CallPortCode_23));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_122, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_123));
    }
    {
      ll_backend__deep_profiling__Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_121, 0) = ((MR_Box) (ll_backend__deep_profiling__BindProcStaticVarGoal_18));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_121, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_122));
    }
    {
      ll_backend__deep_profiling__GoalExpr_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_41, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_41, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_121));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__deep_profiling__Goal_20 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_41));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_40));
    }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__build_semi_proc_body_9_p_0(
  MR_Word ll_backend__deep_profiling__ModuleInfo_10,
  MR_Word ll_backend__deep_profiling__TopCSD_11,
  MR_Word ll_backend__deep_profiling__MiddleCSD_12,
  MR_Word ll_backend__deep_profiling__ProcStaticVar_13,
  MR_Word ll_backend__deep_profiling__MaybeActivationPtr_14,
  MR_Word ll_backend__deep_profiling__GoalInfo0_15,
  MR_Word ll_backend__deep_profiling__BindProcStaticVarGoal_16,
  MR_Word ll_backend__deep_profiling__Goal0_17,
  MR_Word * ll_backend__deep_profiling__Goal_18)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__CallPortCode_21;
    MR_Word ll_backend__deep_profiling__ExitPortCode_22;
    MR_Word ll_backend__deep_profiling__FailPortCode_23;
    MR_Word ll_backend__deep_profiling__NewNonlocals_24;
    MR_Word ll_backend__deep_profiling__ExitConjGoalInfo_25;
    MR_Word ll_backend__deep_profiling__GoalInfo_26;
    MR_Word ll_backend__deep_profiling__GoalExpr_27;
    MR_Word ll_backend__deep_profiling__Var_86;
    MR_Word ll_backend__deep_profiling__Var_87;
    MR_Word ll_backend__deep_profiling__Var_88;
    MR_Word ll_backend__deep_profiling__Var_89;
    MR_Word ll_backend__deep_profiling__Var_90;
    MR_Word ll_backend__deep_profiling__Var_91;
    MR_Word ll_backend__deep_profiling__Var_92;
    MR_Word ll_backend__deep_profiling__Var_93;
    MR_Word ll_backend__deep_profiling__Var_95;
    MR_Word ll_backend__deep_profiling__Var_96;
    MR_Word ll_backend__deep_profiling__Var_98;

    if ((ll_backend__deep_profiling__MaybeActivationPtr_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ll_backend__deep_profiling__Var_30;
        MR_Word ll_backend__deep_profiling__Var_32;
        MR_Word ll_backend__deep_profiling__Var_33;
        MR_Word ll_backend__deep_profiling__CallPortCode0_101;

        {
          ll_backend__deep_profiling__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_33, 0) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_12));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__deep_profiling__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_32, 0) = ((MR_Box) (ll_backend__deep_profiling__TopCSD_11));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_32, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_33));
        }
        {
          ll_backend__deep_profiling__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_30, 0) = ((MR_Box) (ll_backend__deep_profiling__ProcStaticVar_13));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_30, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_32));
        }
        {
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_10, (MR_String) "semi_call_port_code_ac", (MR_Integer) 3, ll_backend__deep_profiling__Var_30, ll_backend__deep_profiling__Var_32, &ll_backend__deep_profiling__CallPortCode0_101);
        }
        {
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 7, ll_backend__deep_profiling__CallPortCode0_101, &ll_backend__deep_profiling__CallPortCode_21);
        }
        {
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_10, (MR_String) "semi_exit_port_code_ac", (MR_Integer) 2, ll_backend__deep_profiling__Var_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__ExitPortCode_22);
        }
        {
          ll_backend__deep_profiling__generate_deep_call_7_p_0(ll_backend__deep_profiling__ModuleInfo_10, (MR_String) "semi_fail_port_code_ac", (MR_Integer) 2, ll_backend__deep_profiling__Var_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 7, &ll_backend__deep_profiling__FailPortCode_23);
        }
        {
          ll_backend__deep_profiling__NewNonlocals_24 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__Var_32);
        }
      }
    else
      {
        MR_Word ll_backend__deep_profiling__ActivationPtr1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeActivationPtr_14, (MR_Integer) 0)));
        MR_Word ll_backend__deep_profiling__CallPortCode0_20;
        MR_Word ll_backend__deep_profiling__Var_56;
        MR_Word ll_backend__deep_profiling__Var_58;
        MR_Word ll_backend__deep_profiling__Var_59;
        MR_Word ll_backend__deep_profiling__Var_60;

        {
          ll_backend__deep_profiling__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_60, 0) = ((MR_Box) (ll_backend__deep_profiling__ActivationPtr1_19));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__deep_profiling__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_59, 0) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_12));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_59, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_60));
        }
        {
          ll_backend__deep_profiling__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_58, 0) = ((MR_Box) (ll_backend__deep_profiling__TopCSD_11));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_58, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_59));
        }
        {
          ll_backend__deep_profiling__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_56, 0) = ((MR_Box) (ll_backend__deep_profiling__ProcStaticVar_13));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_56, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_58));
        }
        {
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_10, (MR_String) "semi_call_port_code_sr", (MR_Integer) 4, ll_backend__deep_profiling__Var_56, ll_backend__deep_profiling__Var_58, &ll_backend__deep_profiling__CallPortCode0_20);
        }
        {
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 7, ll_backend__deep_profiling__CallPortCode0_20, &ll_backend__deep_profiling__CallPortCode_21);
        }
        {
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_10, (MR_String) "semi_exit_port_code_sr", (MR_Integer) 3, ll_backend__deep_profiling__Var_58, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__ExitPortCode_22);
        }
        {
          ll_backend__deep_profiling__generate_deep_call_7_p_0(ll_backend__deep_profiling__ModuleInfo_10, (MR_String) "semi_fail_port_code_sr", (MR_Integer) 3, ll_backend__deep_profiling__Var_58, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 7, &ll_backend__deep_profiling__FailPortCode_23);
        }
        {
          ll_backend__deep_profiling__NewNonlocals_24 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__Var_58);
        }
      }
    {
      ll_backend__deep_profiling__ExitConjGoalInfo_25 = hlds__hlds_goal__goal_info_add_nonlocals_make_impure_2_f_0(ll_backend__deep_profiling__GoalInfo0_15, ll_backend__deep_profiling__NewNonlocals_24);
    }
    {
      hlds__hlds_goal__make_impure_2_p_0(ll_backend__deep_profiling__GoalInfo0_15, &ll_backend__deep_profiling__GoalInfo_26);
    }
    {
      ll_backend__deep_profiling__Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_96, 0) = ((MR_Box) (ll_backend__deep_profiling__ExitPortCode_22));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__deep_profiling__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_95, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal0_17));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_95, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_96));
    }
    {
      ll_backend__deep_profiling__Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_93, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_93, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_95));
    }
    {
      ll_backend__deep_profiling__Var_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_92, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_93));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_92, 1) = ((MR_Box) (ll_backend__deep_profiling__ExitConjGoalInfo_25));
    }
    {
      ll_backend__deep_profiling__Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_98, 0) = ((MR_Box) (ll_backend__deep_profiling__FailPortCode_23));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__deep_profiling__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_91, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_92));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_91, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_98));
    }
    {
      ll_backend__deep_profiling__Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Var_90, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_91));
    }
    {
      ll_backend__deep_profiling__Var_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_89, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_90));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_89, 1) = ((MR_Box) (ll_backend__deep_profiling__ExitConjGoalInfo_25));
    }
    {
      ll_backend__deep_profiling__Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_88, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_89));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__deep_profiling__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_87, 0) = ((MR_Box) (ll_backend__deep_profiling__CallPortCode_21));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_87, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_88));
    }
    {
      ll_backend__deep_profiling__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_86, 0) = ((MR_Box) (ll_backend__deep_profiling__BindProcStaticVarGoal_16));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_86, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_87));
    }
    {
      ll_backend__deep_profiling__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_27, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_27, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_86));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__deep_profiling__Goal_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_26));
    }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__build_det_proc_body_9_p_0(
  MR_Word ll_backend__deep_profiling__ModuleInfo_10,
  MR_Word ll_backend__deep_profiling__TopCSD_11,
  MR_Word ll_backend__deep_profiling__MiddleCSD_12,
  MR_Word ll_backend__deep_profiling__ProcStaticVar_13,
  MR_Word ll_backend__deep_profiling__MaybeActivationPtr_14,
  MR_Word ll_backend__deep_profiling__GoalInfo0_15,
  MR_Word ll_backend__deep_profiling__BindProcStaticVarGoal_16,
  MR_Word ll_backend__deep_profiling__Goal0_17,
  MR_Word * ll_backend__deep_profiling__Goal_18)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__CallPortCode_21;
    MR_Word ll_backend__deep_profiling__ExitPortCode_22;
    MR_Word ll_backend__deep_profiling__GoalInfo_23;
    MR_Word ll_backend__deep_profiling__GoalExpr_24;
    MR_Word ll_backend__deep_profiling__Var_61;
    MR_Word ll_backend__deep_profiling__Var_62;
    MR_Word ll_backend__deep_profiling__Var_63;
    MR_Word ll_backend__deep_profiling__Var_64;

    if ((ll_backend__deep_profiling__MaybeActivationPtr_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ll_backend__deep_profiling__Var_27;
        MR_Word ll_backend__deep_profiling__Var_29;
        MR_Word ll_backend__deep_profiling__Var_30;
        MR_Word ll_backend__deep_profiling__CallPortCode0_66;
        MR_Word ll_backend__deep_profiling__Var_73;

        {
          ll_backend__deep_profiling__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_30, 0) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_12));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__deep_profiling__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_29, 0) = ((MR_Box) (ll_backend__deep_profiling__TopCSD_11));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_29, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_30));
        }
        {
          ll_backend__deep_profiling__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_27, 0) = ((MR_Box) (ll_backend__deep_profiling__ProcStaticVar_13));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_27, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_29));
        }
        {
          ll_backend__deep_profiling__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_73, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_29));
        }
        {
          ll_backend__deep_profiling__generate_deep_call_7_p_0(ll_backend__deep_profiling__ModuleInfo_10, (MR_String) "det_call_port_code_ac", (MR_Integer) 3, ll_backend__deep_profiling__Var_27, ll_backend__deep_profiling__Var_73, (MR_Integer) 0, &ll_backend__deep_profiling__CallPortCode0_66);
        }
        {
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 7, ll_backend__deep_profiling__CallPortCode0_66, &ll_backend__deep_profiling__CallPortCode_21);
        }
        {
          ll_backend__deep_profiling__generate_deep_call_7_p_0(ll_backend__deep_profiling__ModuleInfo_10, (MR_String) "det_exit_port_code_ac", (MR_Integer) 2, ll_backend__deep_profiling__Var_29, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__deep_profiling_scalar_common_6[0]), (MR_Integer) 0, &ll_backend__deep_profiling__ExitPortCode_22);
        }
      }
    else
      {
        MR_Word ll_backend__deep_profiling__ActivationPtr1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeActivationPtr_14, (MR_Integer) 0)));
        MR_Word ll_backend__deep_profiling__CallPortCode0_20;
        MR_Word ll_backend__deep_profiling__Var_43;
        MR_Word ll_backend__deep_profiling__Var_45;
        MR_Word ll_backend__deep_profiling__Var_46;
        MR_Word ll_backend__deep_profiling__Var_47;
        MR_Word ll_backend__deep_profiling__Var_89;

        {
          ll_backend__deep_profiling__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_47, 0) = ((MR_Box) (ll_backend__deep_profiling__ActivationPtr1_19));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__deep_profiling__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_46, 0) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_12));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_46, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_47));
        }
        {
          ll_backend__deep_profiling__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_45, 0) = ((MR_Box) (ll_backend__deep_profiling__TopCSD_11));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_45, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_46));
        }
        {
          ll_backend__deep_profiling__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_43, 0) = ((MR_Box) (ll_backend__deep_profiling__ProcStaticVar_13));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_43, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_45));
        }
        {
          ll_backend__deep_profiling__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_89, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_45));
        }
        {
          ll_backend__deep_profiling__generate_deep_call_7_p_0(ll_backend__deep_profiling__ModuleInfo_10, (MR_String) "det_call_port_code_sr", (MR_Integer) 4, ll_backend__deep_profiling__Var_43, ll_backend__deep_profiling__Var_89, (MR_Integer) 0, &ll_backend__deep_profiling__CallPortCode0_20);
        }
        {
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 7, ll_backend__deep_profiling__CallPortCode0_20, &ll_backend__deep_profiling__CallPortCode_21);
        }
        {
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_10, (MR_String) "det_exit_port_code_sr", (MR_Integer) 3, ll_backend__deep_profiling__Var_45, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__ExitPortCode_22);
        }
      }
    {
      hlds__hlds_goal__make_impure_2_p_0(ll_backend__deep_profiling__GoalInfo0_15, &ll_backend__deep_profiling__GoalInfo_23);
    }
    {
      ll_backend__deep_profiling__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_64, 0) = ((MR_Box) (ll_backend__deep_profiling__ExitPortCode_22));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__deep_profiling__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_63, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal0_17));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_63, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_64));
    }
    {
      ll_backend__deep_profiling__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_62, 0) = ((MR_Box) (ll_backend__deep_profiling__CallPortCode_21));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_62, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_63));
    }
    {
      ll_backend__deep_profiling__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_61, 0) = ((MR_Box) (ll_backend__deep_profiling__BindProcStaticVarGoal_16));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_61, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_62));
    }
    {
      ll_backend__deep_profiling__GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_24, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_24, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_61));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__deep_profiling__Goal_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_23));
    }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_inner_proc_4_p_0(
  MR_Word ll_backend__deep_profiling__ModuleInfo_5,
  MR_Word ll_backend__deep_profiling__PredProcId_6,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_0_28,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_29)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__ContainingGoalMap_8;
    MR_Word ll_backend__deep_profiling__Goal0_9;
    MR_Word ll_backend__deep_profiling__GoalInfo0_11;
    MR_Word ll_backend__deep_profiling__VarSet0_12;
    MR_Word ll_backend__deep_profiling__VarTypes0_13;
    MR_Word ll_backend__deep_profiling__VarInfo0_14;
    MR_Word ll_backend__deep_profiling__MiddleCSD_15;
    MR_Word ll_backend__deep_profiling__VarInfo1_16;
    MR_Word ll_backend__deep_profiling__Context_17;
    MR_String ll_backend__deep_profiling__FileName_18;
    MR_Word ll_backend__deep_profiling__MaybeDeepProfInfo_19;
    MR_Word ll_backend__deep_profiling__MaybeRecInfo_20;
    MR_Word ll_backend__deep_profiling__DeepInfo0_21;
    MR_Word ll_backend__deep_profiling__Goal_22;
    MR_Word ll_backend__deep_profiling__DeepInfo_24;
    MR_Word ll_backend__deep_profiling__VarInfo_25;
    MR_Word ll_backend__deep_profiling__VarSet_26;
    MR_Word ll_backend__deep_profiling__VarTypes_27;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_30_30;
    MR_Word ll_backend__deep_profiling__Var_32;
    MR_Word ll_backend__deep_profiling__Var_33;
    MR_Word ll_backend__deep_profiling__Var_35;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_36_36;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_37_37;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_56;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_57;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_58;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_59;
    MR_Word ll_backend__deep_profiling__Var_10;
    MR_Word ll_backend__deep_profiling__Var_23;
    MR_Word ll_backend__deep_profiling__Var_39;
    MR_Word ll_backend__deep_profiling__Var_40;
    MR_Word ll_backend__deep_profiling__Var_41;
    MR_Word ll_backend__deep_profiling__Var_42;
    MR_Word ll_backend__deep_profiling__Var_43;
    MR_Word ll_backend__deep_profiling__Var_44;
    MR_String ll_backend__deep_profiling__Var_45;
    MR_Word ll_backend__deep_profiling__Var_46;

    {
      hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(ll_backend__deep_profiling__ModuleInfo_5, &ll_backend__deep_profiling__ContainingGoalMap_8, ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_0_28, &ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_30_30);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_30_30, &ll_backend__deep_profiling__Goal0_9);
    }
    ll_backend__deep_profiling__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_9, (MR_Integer) 0)));
    ll_backend__deep_profiling__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_9, (MR_Integer) 1)));
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_30_30, &ll_backend__deep_profiling__VarSet0_12);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_30_30, &ll_backend__deep_profiling__VarTypes0_13);
    }
    {
      ll_backend__deep_profiling__VarInfo0_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo0_14, 0) = ((MR_Box) (ll_backend__deep_profiling__VarSet0_12));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo0_14, 1) = ((MR_Box) (ll_backend__deep_profiling__VarTypes0_13));
    }
    {
      ll_backend__deep_profiling__Var_32 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
    ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo0_14, (MR_Integer) 0)));
    ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo0_14, (MR_Integer) 1)));
    {
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "MiddleCSD", &ll_backend__deep_profiling__MiddleCSD_15, ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_56, &ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_58);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(ll_backend__deep_profiling__MiddleCSD_15, ll_backend__deep_profiling__Var_32, ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_57, &ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_59);
    }
    {
      ll_backend__deep_profiling__VarInfo1_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo1_16, 0) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_58));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo1_16, 1) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_59));
    }
    {
      ll_backend__deep_profiling__Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__deep_profiling__GoalInfo0_11);
    }
    {
      ll_backend__deep_profiling__FileName_18 = mercury__term__context_file_1_f_0(ll_backend__deep_profiling__Context_17);
    }
    {
      hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_30_30, &ll_backend__deep_profiling__MaybeDeepProfInfo_19);
    }
    if ((ll_backend__deep_profiling__MaybeDeepProfInfo_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__deep_profiling__MaybeRecInfo_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__deep_profiling__DeepProfInfo_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeDeepProfInfo_19, (MR_Integer) 0)));
        MR_Word ll_backend__deep_profiling__Var_76;
        MR_Word ll_backend__deep_profiling__Var_77;

        ll_backend__deep_profiling__MaybeRecInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepProfInfo_75, (MR_Integer) 0)));
        ll_backend__deep_profiling__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepProfInfo_75, (MR_Integer) 1)));
        ll_backend__deep_profiling__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepProfInfo_75, (MR_Integer) 2)));
      }
    {
      ll_backend__deep_profiling__Var_33 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
    {
      ll_backend__deep_profiling__Var_35 = mercury__cord__empty_0_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0);
    }
    {
      ll_backend__deep_profiling__DeepInfo0_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo0_21, 0) = ((MR_Box) (ll_backend__deep_profiling__ModuleInfo_5));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo0_21, 1) = ((MR_Box) (ll_backend__deep_profiling__PredProcId_6));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo0_21, 2) = ((MR_Box) (ll_backend__deep_profiling__ContainingGoalMap_8));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo0_21, 3) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_15));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo0_21, 4) = ((MR_Box) (ll_backend__deep_profiling__Var_33));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo0_21, 5) = ((MR_Box) (ll_backend__deep_profiling__Var_35));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo0_21, 6) = ((MR_Box) (ll_backend__deep_profiling__VarInfo1_16));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo0_21, 7) = ((MR_Box) (ll_backend__deep_profiling__FileName_18));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo0_21, 8) = ((MR_Box) (ll_backend__deep_profiling__MaybeRecInfo_20));
    }
    {
      ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(ll_backend__deep_profiling__Goal0_9, &ll_backend__deep_profiling__Goal_22, &ll_backend__deep_profiling__Var_23, ll_backend__deep_profiling__DeepInfo0_21, &ll_backend__deep_profiling__DeepInfo_24);
    }
    ll_backend__deep_profiling__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo_24, (MR_Integer) 0)));
    ll_backend__deep_profiling__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo_24, (MR_Integer) 1)));
    ll_backend__deep_profiling__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo_24, (MR_Integer) 2)));
    ll_backend__deep_profiling__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo_24, (MR_Integer) 3)));
    ll_backend__deep_profiling__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo_24, (MR_Integer) 4)));
    ll_backend__deep_profiling__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo_24, (MR_Integer) 5)));
    ll_backend__deep_profiling__VarInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo_24, (MR_Integer) 6)));
    ll_backend__deep_profiling__Var_45 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo_24, (MR_Integer) 7)));
    ll_backend__deep_profiling__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo_24, (MR_Integer) 8)));
    ll_backend__deep_profiling__VarSet_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo_25, (MR_Integer) 0)));
    ll_backend__deep_profiling__VarTypes_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo_25, (MR_Integer) 1)));
    {
      hlds__hlds_pred__proc_info_set_varset_3_p_0(ll_backend__deep_profiling__VarSet_26, ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_30_30, &ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_36_36);
    }
    {
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(ll_backend__deep_profiling__VarTypes_27, ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_36_36, &ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_37_37);
    }
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__deep_profiling__Goal_22, ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_37_37, ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_29);
    }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_normal_proc_5_p_0(
  MR_Word ll_backend__deep_profiling__ModuleInfo_6,
  MR_Word ll_backend__deep_profiling__PredProcId_7,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_0_48,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_49,
  MR_Word * ll_backend__deep_profiling__DeepLayoutInfo_9)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__TypeCtorInfo_103_103;
    MR_Word ll_backend__deep_profiling__ContainingGoalMap_10;
    MR_Word ll_backend__deep_profiling__Globals_11;
    MR_Word ll_backend__deep_profiling__VarSet0_12;
    MR_Word ll_backend__deep_profiling__VarTypes0_13;
    MR_Word ll_backend__deep_profiling__GoalInfo0_18;
    MR_Word ll_backend__deep_profiling__TopCSD_19;
    MR_Word ll_backend__deep_profiling__MiddleCSD_20;
    MR_Word ll_backend__deep_profiling__ProcStaticVar_21;
    MR_Word ll_backend__deep_profiling__Context_22;
    MR_String ll_backend__deep_profiling__FileName_23;
    MR_Integer ll_backend__deep_profiling__LineNumber_24;
    MR_Word ll_backend__deep_profiling__MaybeDeepProfInfo_25;
    MR_Word ll_backend__deep_profiling__MaybeRecInfo_26;
    MR_Word ll_backend__deep_profiling__CallSites_28;
    MR_Word ll_backend__deep_profiling__DoCoverageProfiling_29;
    MR_Word ll_backend__deep_profiling__CoveragePoints_30;
    MR_Word ll_backend__deep_profiling__PredId_33;
    MR_Integer ll_backend__deep_profiling__ProcId_34;
    MR_Word ll_backend__deep_profiling__UseActivationCounts_35;
    MR_Word ll_backend__deep_profiling__IsInInterface_36;
    MR_Word ll_backend__deep_profiling__ProcStatic_37;
    MR_Word ll_backend__deep_profiling__ShroudedPredProcId_38;
    MR_Word ll_backend__deep_profiling__ProcStaticConsId_39;
    MR_Word ll_backend__deep_profiling__BindProcStaticVarGoal_40;
    MR_Word ll_backend__deep_profiling__CodeModel_41;
    MR_Word ll_backend__deep_profiling__ExcpVars_43;
    MR_Word ll_backend__deep_profiling__Vars_46;
    MR_Word ll_backend__deep_profiling__VarTypes_47;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_50_50;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_Goal_51_51;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_52_52;
    MR_Word ll_backend__deep_profiling__Var_54;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_55_55;
    MR_Word ll_backend__deep_profiling__Var_57;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_58_58;
    MR_Word ll_backend__deep_profiling__Var_60;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_61_61;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_62_62;
    MR_Word ll_backend__deep_profiling__Var_63;
    MR_Word ll_backend__deep_profiling__Var_65;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_Goal_66_66;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_67_67;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_68_68;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_Goal_71_71;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_72_72;
    MR_Word ll_backend__deep_profiling__Var_75;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_80_80;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_Goal_81_81;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_82_82;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_83_83;
    MR_Word ll_backend__deep_profiling__Var_91;
    MR_Word ll_backend__deep_profiling__Var_17;
    MR_Word ll_backend__deep_profiling__Var_27;
    MR_Word ll_backend__deep_profiling__Var_86;
    MR_Word ll_backend__deep_profiling__Var_87;
    MR_Word ll_backend__deep_profiling__Var_88;
    MR_Word ll_backend__deep_profiling__Var_89;
    MR_Word ll_backend__deep_profiling__Var_90;
    MR_String ll_backend__deep_profiling__Var_92;
    MR_Word ll_backend__deep_profiling__Var_93;
    MR_Word ll_backend__deep_profiling__OuterPredProcId_32;
    MR_Word ll_backend__deep_profiling__RecInfo_31;
    MR_Word ll_backend__deep_profiling__Var_73;
    MR_Word ll_backend__deep_profiling__Var_102;

    {
      hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(ll_backend__deep_profiling__ModuleInfo_6, &ll_backend__deep_profiling__ContainingGoalMap_10, ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_0_48, &ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_50_50);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__deep_profiling__ModuleInfo_6, &ll_backend__deep_profiling__Globals_11);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_50_50, &ll_backend__deep_profiling__VarSet0_12);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_50_50, &ll_backend__deep_profiling__VarTypes0_13);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_50_50, &ll_backend__deep_profiling__STATE_VARIABLE_Goal_51_51);
    }
    ll_backend__deep_profiling__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_Goal_51_51, (MR_Integer) 0)));
    ll_backend__deep_profiling__GoalInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_Goal_51_51, (MR_Integer) 1)));
    {
      ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_52_52, 0) = ((MR_Box) (ll_backend__deep_profiling__VarSet0_12));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_52_52, 1) = ((MR_Box) (ll_backend__deep_profiling__VarTypes0_13));
    }
    {
      ll_backend__deep_profiling__Var_54 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
    {
      ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "TopCSD", ll_backend__deep_profiling__Var_54, &ll_backend__deep_profiling__TopCSD_19, ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_52_52, &ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_55_55);
    }
    {
      ll_backend__deep_profiling__Var_57 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
    {
      ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "MiddleCSD", ll_backend__deep_profiling__Var_57, &ll_backend__deep_profiling__MiddleCSD_20, ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_55_55, &ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_58_58);
    }
    {
      ll_backend__deep_profiling__Var_60 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
    {
      ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "ProcStaticLayout", ll_backend__deep_profiling__Var_60, &ll_backend__deep_profiling__ProcStaticVar_21, ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_58_58, &ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_61_61);
    }
    {
      hlds__hlds_pred__proc_info_get_context_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_50_50, &ll_backend__deep_profiling__Context_22);
    }
    {
      ll_backend__deep_profiling__FileName_23 = mercury__term__context_file_1_f_0(ll_backend__deep_profiling__Context_22);
    }
    {
      ll_backend__deep_profiling__LineNumber_24 = mercury__term__context_line_1_f_0(ll_backend__deep_profiling__Context_22);
    }
    {
      hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_50_50, &ll_backend__deep_profiling__MaybeDeepProfInfo_25);
    }
    {
      ll_backend__deep_profiling__extract_deep_rec_info_2_p_0(ll_backend__deep_profiling__MaybeDeepProfInfo_25, &ll_backend__deep_profiling__MaybeRecInfo_26);
    }
    {
      ll_backend__deep_profiling__Var_63 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
    ll_backend__deep_profiling__TypeCtorInfo_103_103 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0;
    {
      ll_backend__deep_profiling__Var_65 = mercury__cord__empty_0_f_0(ll_backend__deep_profiling__TypeCtorInfo_103_103);
    }
    {
      ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_62_62, 0) = ((MR_Box) (ll_backend__deep_profiling__ModuleInfo_6));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_62_62, 1) = ((MR_Box) (ll_backend__deep_profiling__PredProcId_7));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_62_62, 2) = ((MR_Box) (ll_backend__deep_profiling__ContainingGoalMap_10));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_62_62, 3) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_20));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_62_62, 4) = ((MR_Box) (ll_backend__deep_profiling__Var_63));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_62_62, 5) = ((MR_Box) (ll_backend__deep_profiling__Var_65));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_62_62, 6) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_61_61));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_62_62, 7) = ((MR_Box) (ll_backend__deep_profiling__FileName_23));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_62_62, 8) = ((MR_Box) (ll_backend__deep_profiling__MaybeRecInfo_26));
    }
    {
      ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(ll_backend__deep_profiling__STATE_VARIABLE_Goal_51_51, &ll_backend__deep_profiling__STATE_VARIABLE_Goal_66_66, &ll_backend__deep_profiling__Var_27, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_62_62, &ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_67_67);
    }
    ll_backend__deep_profiling__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_67_67, (MR_Integer) 0)));
    ll_backend__deep_profiling__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_67_67, (MR_Integer) 1)));
    ll_backend__deep_profiling__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_67_67, (MR_Integer) 2)));
    ll_backend__deep_profiling__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_67_67, (MR_Integer) 3)));
    ll_backend__deep_profiling__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_67_67, (MR_Integer) 4)));
    ll_backend__deep_profiling__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_67_67, (MR_Integer) 5)));
    ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_67_67, (MR_Integer) 6)));
    ll_backend__deep_profiling__Var_92 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_67_67, (MR_Integer) 7)));
    ll_backend__deep_profiling__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_67_67, (MR_Integer) 8)));
    {
      ll_backend__deep_profiling__CallSites_28 = mercury__cord__list_1_f_0(ll_backend__deep_profiling__TypeCtorInfo_103_103, ll_backend__deep_profiling__Var_91);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__deep_profiling__Globals_11, (MR_Integer) 209, &ll_backend__deep_profiling__DoCoverageProfiling_29);
    }
    switch (ll_backend__deep_profiling__DoCoverageProfiling_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__deep_profiling__CoveragePoints_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_72_72 = ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_68_68;
          ll_backend__deep_profiling__STATE_VARIABLE_Goal_71_71 = ll_backend__deep_profiling__STATE_VARIABLE_Goal_66_66;
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_p_0(ll_backend__deep_profiling__ModuleInfo_6, ll_backend__deep_profiling__PredProcId_7, ll_backend__deep_profiling__ContainingGoalMap_10, ll_backend__deep_profiling__MaybeRecInfo_26, ll_backend__deep_profiling__STATE_VARIABLE_Goal_66_66, &ll_backend__deep_profiling__STATE_VARIABLE_Goal_71_71, ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_68_68, &ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_72_72, &ll_backend__deep_profiling__CoveragePoints_30);
        }
        break;
    }
    ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__MaybeRecInfo_26)) == (MR_mktag((MR_Integer) 1)));
    if (ll_backend__deep_profiling__succeeded)
      {
        ll_backend__deep_profiling__RecInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeRecInfo_26, (MR_Integer) 0)));
        ll_backend__deep_profiling__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RecInfo_31, (MR_Integer) 0)));
        ll_backend__deep_profiling__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RecInfo_31, (MR_Integer) 1)));
        ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__Var_73)) == (MR_mktag((MR_Integer) 0)));
        if (ll_backend__deep_profiling__succeeded)
          ll_backend__deep_profiling__OuterPredProcId_32 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__Var_73), (MR_Integer) 0);
      }
    if (ll_backend__deep_profiling__succeeded)
      {
        ll_backend__deep_profiling__PredId_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OuterPredProcId_32, (MR_Integer) 0)));
        ll_backend__deep_profiling__ProcId_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OuterPredProcId_32, (MR_Integer) 1)));
      }
    else
      {
        ll_backend__deep_profiling__PredId_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__PredProcId_7, (MR_Integer) 0)));
        ll_backend__deep_profiling__ProcId_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__PredProcId_7, (MR_Integer) 1)));
      }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__deep_profiling__Globals_11, (MR_Integer) 206, &ll_backend__deep_profiling__UseActivationCounts_35);
    }
    {
      ll_backend__deep_profiling__IsInInterface_36 = ll_backend__deep_profiling__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_115_95_112_114_111_99_95_105_110_95_105_110_116_101_114_102_97_99_101_95_95_91_51_93_95_48_3_f_0(ll_backend__deep_profiling__ModuleInfo_6, ll_backend__deep_profiling__PredId_33);
    }
    {
      ll_backend__deep_profiling__ProcStatic_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__ProcStatic_37, 0) = ((MR_Box) (ll_backend__deep_profiling__FileName_23));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__ProcStatic_37, 1) = ((MR_Box) (ll_backend__deep_profiling__LineNumber_24));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__ProcStatic_37, 2) = ((MR_Box) (ll_backend__deep_profiling__IsInInterface_36));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__ProcStatic_37, 3) = ((MR_Box) (ll_backend__deep_profiling__CallSites_28));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__ProcStatic_37, 4) = ((MR_Box) (ll_backend__deep_profiling__CoveragePoints_30));
    }
    {
      ll_backend__deep_profiling__Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_75, 0) = ((MR_Box) (ll_backend__deep_profiling__PredId_33));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_75, 1) = ((MR_Box) (ll_backend__deep_profiling__ProcId_34));
    }
    {
      ll_backend__deep_profiling__ShroudedPredProcId_38 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(ll_backend__deep_profiling__Var_75);
    }
    {
      ll_backend__deep_profiling__ProcStaticConsId_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__ProcStaticConsId_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__ProcStaticConsId_39, 1) = ((MR_Box) (ll_backend__deep_profiling__ShroudedPredProcId_38));
    }
    {
      ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(ll_backend__deep_profiling__ProcStaticConsId_39, ll_backend__deep_profiling__ProcStaticVar_21, &ll_backend__deep_profiling__BindProcStaticVarGoal_40);
    }
    {
      ll_backend__deep_profiling__CodeModel_41 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_50_50);
    }
    switch (ll_backend__deep_profiling__CodeModel_41) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__deep_profiling__MaybeActivationPtr_42;

          {
            ll_backend__deep_profiling__maybe_generate_activation_ptr_7_p_0(ll_backend__deep_profiling__UseActivationCounts_35, ll_backend__deep_profiling__TopCSD_19, ll_backend__deep_profiling__MiddleCSD_20, &ll_backend__deep_profiling__MaybeActivationPtr_42, &ll_backend__deep_profiling__ExcpVars_43, ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_72_72, &ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_80_80);
          }
          {
            ll_backend__deep_profiling__build_det_proc_body_9_p_0(ll_backend__deep_profiling__ModuleInfo_6, ll_backend__deep_profiling__TopCSD_19, ll_backend__deep_profiling__MiddleCSD_20, ll_backend__deep_profiling__ProcStaticVar_21, ll_backend__deep_profiling__MaybeActivationPtr_42, ll_backend__deep_profiling__GoalInfo0_18, ll_backend__deep_profiling__BindProcStaticVarGoal_40, ll_backend__deep_profiling__STATE_VARIABLE_Goal_71_71, &ll_backend__deep_profiling__STATE_VARIABLE_Goal_81_81);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__deep_profiling__MaybeOldActivationPtr_44;
          MR_Word ll_backend__deep_profiling__NewOutermostProcDyn_45;

          {
            ll_backend__deep_profiling__generate_outermost_proc_dyns_8_p_0(ll_backend__deep_profiling__UseActivationCounts_35, ll_backend__deep_profiling__TopCSD_19, ll_backend__deep_profiling__MiddleCSD_20, &ll_backend__deep_profiling__MaybeOldActivationPtr_44, &ll_backend__deep_profiling__NewOutermostProcDyn_45, &ll_backend__deep_profiling__ExcpVars_43, ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_72_72, &ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_80_80);
          }
          {
            ll_backend__deep_profiling__build_non_proc_body_10_p_0(ll_backend__deep_profiling__ModuleInfo_6, ll_backend__deep_profiling__TopCSD_19, ll_backend__deep_profiling__MiddleCSD_20, ll_backend__deep_profiling__ProcStaticVar_21, ll_backend__deep_profiling__MaybeOldActivationPtr_44, ll_backend__deep_profiling__NewOutermostProcDyn_45, ll_backend__deep_profiling__GoalInfo0_18, ll_backend__deep_profiling__BindProcStaticVarGoal_40, ll_backend__deep_profiling__STATE_VARIABLE_Goal_71_71, &ll_backend__deep_profiling__STATE_VARIABLE_Goal_81_81);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__deep_profiling__MaybeActivationPtr_85;

          {
            ll_backend__deep_profiling__maybe_generate_activation_ptr_7_p_0(ll_backend__deep_profiling__UseActivationCounts_35, ll_backend__deep_profiling__TopCSD_19, ll_backend__deep_profiling__MiddleCSD_20, &ll_backend__deep_profiling__MaybeActivationPtr_85, &ll_backend__deep_profiling__ExcpVars_43, ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_72_72, &ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_80_80);
          }
          {
            ll_backend__deep_profiling__build_semi_proc_body_9_p_0(ll_backend__deep_profiling__ModuleInfo_6, ll_backend__deep_profiling__TopCSD_19, ll_backend__deep_profiling__MiddleCSD_20, ll_backend__deep_profiling__ProcStaticVar_21, ll_backend__deep_profiling__MaybeActivationPtr_85, ll_backend__deep_profiling__GoalInfo0_18, ll_backend__deep_profiling__BindProcStaticVarGoal_40, ll_backend__deep_profiling__STATE_VARIABLE_Goal_71_71, &ll_backend__deep_profiling__STATE_VARIABLE_Goal_81_81);
          }
        }
        break;
    }
    ll_backend__deep_profiling__Vars_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_80_80, (MR_Integer) 0)));
    ll_backend__deep_profiling__VarTypes_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_80_80, (MR_Integer) 1)));
    {
      hlds__hlds_pred__proc_info_set_varset_3_p_0(ll_backend__deep_profiling__Vars_46, ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_50_50, &ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_82_82);
    }
    {
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(ll_backend__deep_profiling__VarTypes_47, ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_82_82, &ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_83_83);
    }
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__deep_profiling__STATE_VARIABLE_Goal_81_81, ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_83_83, ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_49);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__deep_profiling__DeepLayoutInfo_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__ProcStatic_37));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__ExcpVars_43));
    }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_maybe_transform_proc_5_p_0(
  MR_Word ll_backend__deep_profiling__ModuleInfo_6,
  MR_Word ll_backend__deep_profiling__PredId_7,
  MR_Integer ll_backend__deep_profiling__ProcId_8,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcTable_0_17,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_ProcTable_18)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    MR_Word ll_backend__deep_profiling__ProcInfo0_10;
    MR_Word ll_backend__deep_profiling__PredModuleName_11;
    MR_Box ll_backend__deep_profiling__conv0_ProcInfo0_10;
    MR_Word ll_backend__deep_profiling__Var_31;

    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(ll_backend__deep_profiling__TypeCtorInfo_30_30, ll_backend__deep_profiling__STATE_VARIABLE_ProcTable_0_17, ll_backend__deep_profiling__ProcId_8, &ll_backend__deep_profiling__conv0_ProcInfo0_10);
    }
    ll_backend__deep_profiling__ProcInfo0_10 = ((MR_Word) ll_backend__deep_profiling__conv0_ProcInfo0_10);
    {
      ll_backend__deep_profiling__PredModuleName_11 = hlds__hlds_module__predicate_module_2_f_0(ll_backend__deep_profiling__ModuleInfo_6, ll_backend__deep_profiling__PredId_7);
    }
    {
      ll_backend__deep_profiling__Var_31 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
    }
    {
      ll_backend__deep_profiling__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__deep_profiling__PredModuleName_11, ll_backend__deep_profiling__Var_31);
    }
    if (ll_backend__deep_profiling__succeeded)
      *ll_backend__deep_profiling__STATE_VARIABLE_ProcTable_18 = ll_backend__deep_profiling__STATE_VARIABLE_ProcTable_0_17;
    else
      {
        MR_Word ll_backend__deep_profiling__ProcInfo_16;
        MR_Word ll_backend__deep_profiling__Var_27;
        MR_Word ll_backend__deep_profiling__MaybeDeepInfo_41;
        MR_Word ll_backend__deep_profiling__MaybeDeepRecInfo_43;
        MR_Word ll_backend__deep_profiling__OrigBody_45;
        MR_Word ll_backend__deep_profiling__MaybeDeepLayoutInfo_48;
        MR_Word ll_backend__deep_profiling__DeepInfo_50;
        MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_22_53;
        MR_Word ll_backend__deep_profiling__Var_55;
        MR_Word ll_backend__deep_profiling__Globals_13;
        MR_Word ll_backend__deep_profiling__VeryVerbose_14;
        MR_String ll_backend__deep_profiling__ProcName_15;
        MR_String ll_backend__deep_profiling__Var_21;
        MR_String ll_backend__deep_profiling__Var_33;

        {
          hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__deep_profiling__ModuleInfo_6, &ll_backend__deep_profiling__Globals_13);
        }
        {
          libs__globals__lookup_bool_option_3_p_0(ll_backend__deep_profiling__Globals_13, (MR_Integer) 57, &ll_backend__deep_profiling__VeryVerbose_14);
        }
        {
          ll_backend__deep_profiling__ProcName_15 = hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_f_0(ll_backend__deep_profiling__ModuleInfo_6, ll_backend__deep_profiling__PredId_7, ll_backend__deep_profiling__ProcId_8);
        }
        {
          ll_backend__deep_profiling__Var_33 = mercury__string__f_43_43_2_f_0(ll_backend__deep_profiling__ProcName_15, (MR_String) "\n");
        }
        {
          ll_backend__deep_profiling__Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "% Deep profiling: ", ll_backend__deep_profiling__Var_33);
        }
        {
          libs__file_util__maybe_write_string_4_p_0(ll_backend__deep_profiling__VeryVerbose_14, ll_backend__deep_profiling__Var_21);
        }
        {
          ll_backend__deep_profiling__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_27, 0) = ((MR_Box) (ll_backend__deep_profiling__PredId_7));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_27, 1) = ((MR_Box) (ll_backend__deep_profiling__ProcId_8));
        }
        {
          hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(ll_backend__deep_profiling__ProcInfo0_10, &ll_backend__deep_profiling__MaybeDeepInfo_41);
        }
        if ((ll_backend__deep_profiling__MaybeDeepInfo_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word ll_backend__deep_profiling__DeepLayoutInfo_57;
            MR_Word ll_backend__deep_profiling__Body_62;
            MR_Word ll_backend__deep_profiling__HeadVars_63;
            MR_Word ll_backend__deep_profiling__Instmap_64;
            MR_Word ll_backend__deep_profiling__Vartypes_65;
            MR_Word ll_backend__deep_profiling__MaybeDetism_66;
            MR_Word ll_backend__deep_profiling__Detism_67;
            MR_Word ll_backend__deep_profiling__Varset_68;

            {
              hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__deep_profiling__ProcInfo0_10, &ll_backend__deep_profiling__Body_62);
            }
            {
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__deep_profiling__ProcInfo0_10, &ll_backend__deep_profiling__HeadVars_63);
            }
            {
              hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ll_backend__deep_profiling__ProcInfo0_10, ll_backend__deep_profiling__ModuleInfo_6, &ll_backend__deep_profiling__Instmap_64);
            }
            {
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__deep_profiling__ProcInfo0_10, &ll_backend__deep_profiling__Vartypes_65);
            }
            {
              hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ll_backend__deep_profiling__ProcInfo0_10, &ll_backend__deep_profiling__MaybeDetism_66);
            }
            if ((ll_backend__deep_profiling__MaybeDetism_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ll_backend__deep_profiling__ProcInfo0_10, &ll_backend__deep_profiling__Detism_67);
              }
            else
              ll_backend__deep_profiling__Detism_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeDetism_66, (MR_Integer) 0)));
            {
              hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__deep_profiling__ProcInfo0_10, &ll_backend__deep_profiling__Varset_68);
            }
            {
              ll_backend__deep_profiling__OrigBody_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OrigBody_45, 0) = ((MR_Box) (ll_backend__deep_profiling__Body_62));
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OrigBody_45, 1) = ((MR_Box) (ll_backend__deep_profiling__HeadVars_63));
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OrigBody_45, 2) = ((MR_Box) (ll_backend__deep_profiling__Instmap_64));
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OrigBody_45, 3) = ((MR_Box) (ll_backend__deep_profiling__Vartypes_65));
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OrigBody_45, 4) = ((MR_Box) (ll_backend__deep_profiling__Detism_67));
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OrigBody_45, 5) = ((MR_Box) (ll_backend__deep_profiling__Varset_68));
            }
            {
              ll_backend__deep_profiling__deep_prof_transform_normal_proc_5_p_0(ll_backend__deep_profiling__ModuleInfo_6, ll_backend__deep_profiling__Var_27, ll_backend__deep_profiling__ProcInfo0_10, &ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_22_53, &ll_backend__deep_profiling__DeepLayoutInfo_57);
            }
            {
              ll_backend__deep_profiling__MaybeDeepLayoutInfo_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeDeepLayoutInfo_48, 0) = ((MR_Box) (ll_backend__deep_profiling__DeepLayoutInfo_57));
            }
            ll_backend__deep_profiling__MaybeDeepRecInfo_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            MR_Word ll_backend__deep_profiling__DeepInfo0_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeDeepInfo_41, (MR_Integer) 0)));
            MR_Word ll_backend__deep_profiling__Var_44;
            MR_Word ll_backend__deep_profiling__RecInfo_46;
            MR_Word ll_backend__deep_profiling__Var_52;
            MR_Word ll_backend__deep_profiling__Var_58;
            MR_Word ll_backend__deep_profiling__Var_47;

            ll_backend__deep_profiling__MaybeDeepRecInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo0_42, (MR_Integer) 0)));
            ll_backend__deep_profiling__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo0_42, (MR_Integer) 1)));
            ll_backend__deep_profiling__OrigBody_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo0_42, (MR_Integer) 2)));
            ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__MaybeDeepRecInfo_43)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__deep_profiling__succeeded)
              {
                ll_backend__deep_profiling__RecInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeDeepRecInfo_43, (MR_Integer) 0)));
                ll_backend__deep_profiling__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RecInfo_46, (MR_Integer) 0)));
                ll_backend__deep_profiling__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RecInfo_46, (MR_Integer) 1)));
                ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__Var_52)) == (MR_mktag((MR_Integer) 0)));
                if (ll_backend__deep_profiling__succeeded)
                  ll_backend__deep_profiling__Var_47 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__Var_52), (MR_Integer) 0);
              }
            if (ll_backend__deep_profiling__succeeded)
              {
                {
                  ll_backend__deep_profiling__deep_prof_transform_inner_proc_4_p_0(ll_backend__deep_profiling__ModuleInfo_6, ll_backend__deep_profiling__Var_27, ll_backend__deep_profiling__ProcInfo0_10, &ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_22_53);
                }
                ll_backend__deep_profiling__MaybeDeepLayoutInfo_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            else
              {
                MR_Word ll_backend__deep_profiling__DeepLayoutInfo_49;

                {
                  ll_backend__deep_profiling__deep_prof_transform_normal_proc_5_p_0(ll_backend__deep_profiling__ModuleInfo_6, ll_backend__deep_profiling__Var_27, ll_backend__deep_profiling__ProcInfo0_10, &ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_22_53, &ll_backend__deep_profiling__DeepLayoutInfo_49);
                }
                {
                  ll_backend__deep_profiling__MaybeDeepLayoutInfo_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeDeepLayoutInfo_48, 0) = ((MR_Box) (ll_backend__deep_profiling__DeepLayoutInfo_49));
                }
              }
          }
        {
          ll_backend__deep_profiling__DeepInfo_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo_50, 0) = ((MR_Box) (ll_backend__deep_profiling__MaybeDeepRecInfo_43));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo_50, 1) = ((MR_Box) (ll_backend__deep_profiling__MaybeDeepLayoutInfo_48));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo_50, 2) = ((MR_Box) (ll_backend__deep_profiling__OrigBody_45));
        }
        {
          ll_backend__deep_profiling__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_55, 0) = ((MR_Box) (ll_backend__deep_profiling__DeepInfo_50));
        }
        {
          hlds__hlds_pred__proc_info_set_maybe_deep_profile_info_3_p_0(ll_backend__deep_profiling__Var_55, ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_22_53, &ll_backend__deep_profiling__ProcInfo_16);
        }
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(ll_backend__deep_profiling__TypeCtorInfo_30_30, ll_backend__deep_profiling__ProcId_8, ((MR_Box) (ll_backend__deep_profiling__ProcInfo_16)), ll_backend__deep_profiling__STATE_VARIABLE_ProcTable_0_17, ll_backend__deep_profiling__STATE_VARIABLE_ProcTable_18);
        }
      }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_pred_4_p_0_1(
  MR_Box ll_backend__deep_profiling__closure_arg,
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box ll_backend__deep_profiling__wrapper_arg_2,
  MR_Box * ll_backend__deep_profiling__wrapper_arg_3)
{
  {
    MR_Box ll_backend__deep_profiling__closure = ll_backend__deep_profiling__closure_arg;
    MR_Word ll_backend__deep_profiling__conv1_STATE_VARIABLE_ProcTable_18;

    {
      ll_backend__deep_profiling__deep_prof_maybe_transform_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__closure, (MR_Integer) 4))), ((MR_Integer) ll_backend__deep_profiling__wrapper_arg_1), ((MR_Word) ll_backend__deep_profiling__wrapper_arg_2), &ll_backend__deep_profiling__conv1_STATE_VARIABLE_ProcTable_18);
    }
    *ll_backend__deep_profiling__wrapper_arg_3 = ((MR_Box) (ll_backend__deep_profiling__conv1_STATE_VARIABLE_ProcTable_18));
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_pred_4_p_0(
  MR_Word ll_backend__deep_profiling__ModuleInfo_5,
  MR_Word ll_backend__deep_profiling__PredId_6,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_PredMap_0_13,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_PredMap_14)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__TypeCtorInfo_17_17 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    MR_Word ll_backend__deep_profiling__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    MR_Word ll_backend__deep_profiling__PredInfo0_8;
    MR_Word ll_backend__deep_profiling__ProcIds_9;
    MR_Word ll_backend__deep_profiling__ProcTable0_10;
    MR_Word ll_backend__deep_profiling__ProcTable_11;
    MR_Word ll_backend__deep_profiling__PredInfo_12;
    MR_Word ll_backend__deep_profiling__Var_15;
    MR_Box ll_backend__deep_profiling__conv0_PredInfo0_8;
    MR_Box ll_backend__deep_profiling__conv2_ProcTable_11;

    {
      mercury__map__lookup_3_p_0(ll_backend__deep_profiling__TypeCtorInfo_17_17, ll_backend__deep_profiling__TypeCtorInfo_18_18, ll_backend__deep_profiling__STATE_VARIABLE_PredMap_0_13, ((MR_Box) (ll_backend__deep_profiling__PredId_6)), &ll_backend__deep_profiling__conv0_PredInfo0_8);
    }
    ll_backend__deep_profiling__PredInfo0_8 = ((MR_Word) ll_backend__deep_profiling__conv0_PredInfo0_8);
    {
      ll_backend__deep_profiling__ProcIds_9 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(ll_backend__deep_profiling__PredInfo0_8);
    }
    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(ll_backend__deep_profiling__PredInfo0_8, &ll_backend__deep_profiling__ProcTable0_10);
    }
    {
      ll_backend__deep_profiling__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_15, 0) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_15, 1) = ((MR_Box) (ll_backend__deep_profiling__deep_prof_transform_pred_4_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_15, 3) = ((MR_Box) (ll_backend__deep_profiling__ModuleInfo_5));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_15, 4) = ((MR_Box) (ll_backend__deep_profiling__PredId_6));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__deep_profiling_scalar_common_1[1], ll_backend__deep_profiling__Var_15, ll_backend__deep_profiling__ProcIds_9, ((MR_Box) (ll_backend__deep_profiling__ProcTable0_10)), &ll_backend__deep_profiling__conv2_ProcTable_11);
    }
    ll_backend__deep_profiling__ProcTable_11 = ((MR_Word) ll_backend__deep_profiling__conv2_ProcTable_11);
    {
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ll_backend__deep_profiling__ProcTable_11, ll_backend__deep_profiling__PredInfo0_8, &ll_backend__deep_profiling__PredInfo_12);
    }
    {
      mercury__map__det_update_4_p_0(ll_backend__deep_profiling__TypeCtorInfo_17_17, ll_backend__deep_profiling__TypeCtorInfo_18_18, ((MR_Box) (ll_backend__deep_profiling__PredId_6)), ((MR_Box) (ll_backend__deep_profiling__PredInfo_12)), ll_backend__deep_profiling__STATE_VARIABLE_PredMap_0_13, ll_backend__deep_profiling__STATE_VARIABLE_PredMap_14);
    }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__figure_out_rec_call_numbers_in_case_list_5_p_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Integer ll_backend__deep_profiling__STATE_VARIABLE_N_0_2,
  MR_Integer * ll_backend__deep_profiling__STATE_VARIABLE_N_3,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_4,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__deep_profiling__succeeded;

        if ((ll_backend__deep_profiling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_5 = ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_4;
            *ll_backend__deep_profiling__STATE_VARIABLE_N_3 = ll_backend__deep_profiling__STATE_VARIABLE_N_0_2;
          }
        else
          {
            MR_Word ll_backend__deep_profiling__Case_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__deep_profiling__Cases_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__deep_profiling__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case_12, (MR_Integer) 2)));
            MR_Integer ll_backend__deep_profiling__STATE_VARIABLE_N_23_23;
            MR_Word ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_24_24;
            MR_Word ll_backend__deep_profiling__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case_12, (MR_Integer) 0)));
            MR_Word ll_backend__deep_profiling__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case_12, (MR_Integer) 1)));

            {
              ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(ll_backend__deep_profiling__Goal_18, ll_backend__deep_profiling__STATE_VARIABLE_N_0_2, &ll_backend__deep_profiling__STATE_VARIABLE_N_23_23, ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_4, &ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_24_24);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__deep_profiling__next_value_of_HeadVar__1_1 = ll_backend__deep_profiling__Cases_13;
              MR_Integer ll_backend__deep_profiling__next_value_of_STATE_VARIABLE_N_0_2 = ll_backend__deep_profiling__STATE_VARIABLE_N_23_23;
              MR_Word ll_backend__deep_profiling__next_value_of_STATE_VARIABLE_TailCallSites_0_4 = ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_24_24;

              ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_4 = ll_backend__deep_profiling__next_value_of_STATE_VARIABLE_TailCallSites_0_4;
              ll_backend__deep_profiling__STATE_VARIABLE_N_0_2 = ll_backend__deep_profiling__next_value_of_STATE_VARIABLE_N_0_2;
              ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_p_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Integer ll_backend__deep_profiling__STATE_VARIABLE_N_0_2,
  MR_Integer * ll_backend__deep_profiling__STATE_VARIABLE_N_3,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_4,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__deep_profiling__succeeded;

        if ((ll_backend__deep_profiling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_5 = ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_4;
            *ll_backend__deep_profiling__STATE_VARIABLE_N_3 = ll_backend__deep_profiling__STATE_VARIABLE_N_0_2;
          }
        else
          {
            MR_Word ll_backend__deep_profiling__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__deep_profiling__Goals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer ll_backend__deep_profiling__STATE_VARIABLE_N_20_20;
            MR_Word ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_21_21;

            {
              ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(ll_backend__deep_profiling__Goal_12, ll_backend__deep_profiling__STATE_VARIABLE_N_0_2, &ll_backend__deep_profiling__STATE_VARIABLE_N_20_20, ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_4, &ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_21_21);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__deep_profiling__next_value_of_HeadVar__1_1 = ll_backend__deep_profiling__Goals_13;
              MR_Integer ll_backend__deep_profiling__next_value_of_STATE_VARIABLE_N_0_2 = ll_backend__deep_profiling__STATE_VARIABLE_N_20_20;
              MR_Word ll_backend__deep_profiling__next_value_of_STATE_VARIABLE_TailCallSites_0_4 = ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_21_21;

              ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_4 = ll_backend__deep_profiling__next_value_of_STATE_VARIABLE_TailCallSites_0_4;
              ll_backend__deep_profiling__STATE_VARIABLE_N_0_2 = ll_backend__deep_profiling__next_value_of_STATE_VARIABLE_N_0_2;
              ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(
  MR_Word ll_backend__deep_profiling__Goal_6,
  MR_Integer ll_backend__deep_profiling__STATE_VARIABLE_N_0_50,
  MR_Integer * ll_backend__deep_profiling__STATE_VARIABLE_N_51,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_53)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__deep_profiling__succeeded;
        MR_Word ll_backend__deep_profiling__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal_6, (MR_Integer) 0)));
        MR_Word ll_backend__deep_profiling__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal_6, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) ll_backend__deep_profiling__GoalExpr_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__deep_profiling__SubGoal_45 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__GoalExpr_9), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word ll_backend__deep_profiling__next_value_of_Goal_6 = ll_backend__deep_profiling__SubGoal_45;

                ll_backend__deep_profiling__Goal_6 = ll_backend__deep_profiling__next_value_of_Goal_6;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              *ll_backend__deep_profiling__STATE_VARIABLE_N_51 = ll_backend__deep_profiling__STATE_VARIABLE_N_0_50;
              *ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_53 = ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__deep_profiling__BuiltinState_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 3)));
              MR_Word ll_backend__deep_profiling__Features_25;
              MR_Word ll_backend__deep_profiling__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 0)));
              MR_Integer ll_backend__deep_profiling__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 1)));
              MR_Word ll_backend__deep_profiling__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 2)));
              MR_Word ll_backend__deep_profiling__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 4)));
              MR_Word ll_backend__deep_profiling__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 5)));

              {
                ll_backend__deep_profiling__Features_25 = hlds__hlds_goal__goal_info_get_features_1_f_0(ll_backend__deep_profiling__GoalInfo_10);
              }
              {
                ll_backend__deep_profiling__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, ((MR_Box) ((MR_Integer) 9)), ll_backend__deep_profiling__Features_25);
              }
              if (ll_backend__deep_profiling__succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_53 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_N_0_50));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52));
                }
              else
                *ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_53 = ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52;
              switch (ll_backend__deep_profiling__BuiltinState_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *ll_backend__deep_profiling__STATE_VARIABLE_N_51 = ll_backend__deep_profiling__STATE_VARIABLE_N_0_50;
                  break;
                case (MR_Integer) 1:
                  {
                    *ll_backend__deep_profiling__STATE_VARIABLE_N_51 = (ll_backend__deep_profiling__STATE_VARIABLE_N_0_50 + (MR_Integer) 1);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *ll_backend__deep_profiling__STATE_VARIABLE_N_51 = (ll_backend__deep_profiling__STATE_VARIABLE_N_0_50 + (MR_Integer) 1);
                  *ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_53 = ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__deep_profiling__Attrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 1)));
                  MR_Word ll_backend__deep_profiling__MayCallMercury_18;
                  MR_Word ll_backend__deep_profiling__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 2)));
                  MR_Integer ll_backend__deep_profiling__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 3)));
                  MR_Word ll_backend__deep_profiling__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 4)));
                  MR_Word ll_backend__deep_profiling__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 5)));
                  MR_Word ll_backend__deep_profiling__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 6)));
                  MR_Word ll_backend__deep_profiling__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 7)));

                  {
                    ll_backend__deep_profiling__MayCallMercury_18 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(ll_backend__deep_profiling__Attrs_11);
                  }
                  switch (ll_backend__deep_profiling__MayCallMercury_18) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *ll_backend__deep_profiling__STATE_VARIABLE_N_51 = (ll_backend__deep_profiling__STATE_VARIABLE_N_0_50 + (MR_Integer) 1);
                      }
                      break;
                    case (MR_Integer) 1:
                      *ll_backend__deep_profiling__STATE_VARIABLE_N_51 = ll_backend__deep_profiling__STATE_VARIABLE_N_0_50;
                      break;
                  }
                  *ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_53 = ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__deep_profiling__Goals_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 2)));
                  MR_Word ll_backend__deep_profiling___ConjType_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 1)));

                  {
                    ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_p_0(ll_backend__deep_profiling__Goals_37, ll_backend__deep_profiling__STATE_VARIABLE_N_0_50, ll_backend__deep_profiling__STATE_VARIABLE_N_51, ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52, ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_53);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ll_backend__deep_profiling__Goals_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 1)));

                  {
                    ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_p_0(ll_backend__deep_profiling__Goals_81, ll_backend__deep_profiling__STATE_VARIABLE_N_0_50, ll_backend__deep_profiling__STATE_VARIABLE_N_51, ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52, ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_53);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ll_backend__deep_profiling__Cases_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 3)));
                  MR_Word ll_backend__deep_profiling__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 1)));
                  MR_Word ll_backend__deep_profiling__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 2)));

                  {
                    ll_backend__deep_profiling__figure_out_rec_call_numbers_in_case_list_5_p_0(ll_backend__deep_profiling__Cases_40, ll_backend__deep_profiling__STATE_VARIABLE_N_0_50, ll_backend__deep_profiling__STATE_VARIABLE_N_51, ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52, ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_53);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ll_backend__deep_profiling__Reason_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 1)));
                  MR_Word ll_backend__deep_profiling__SubGoal_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 2)));
                  MR_Word ll_backend__deep_profiling__FGT_48;
                  MR_Word ll_backend__deep_profiling__Var_47;

                  ll_backend__deep_profiling__succeeded = ((((MR_tag((MR_Word) ll_backend__deep_profiling__Reason_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Reason_46, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (ll_backend__deep_profiling__succeeded)
                    {
                      ll_backend__deep_profiling__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Reason_46, (MR_Integer) 1)));
                      ll_backend__deep_profiling__FGT_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Reason_46, (MR_Integer) 2)));
                      switch (ll_backend__deep_profiling__FGT_48) {
                        default:
                          ll_backend__deep_profiling__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          ll_backend__deep_profiling__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          ll_backend__deep_profiling__succeeded = MR_TRUE;
                          break;
                      }
                    }
                  if (ll_backend__deep_profiling__succeeded)
                    {
                      *ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_53 = ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52;
                      *ll_backend__deep_profiling__STATE_VARIABLE_N_51 = ll_backend__deep_profiling__STATE_VARIABLE_N_0_50;
                    }
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word ll_backend__deep_profiling__next_value_of_Goal_6 = ll_backend__deep_profiling__SubGoal_82;

                        ll_backend__deep_profiling__Goal_6 = ll_backend__deep_profiling__next_value_of_Goal_6;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ll_backend__deep_profiling__Cond_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 2)));
                  MR_Word ll_backend__deep_profiling__Then_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 3)));
                  MR_Word ll_backend__deep_profiling__Else_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 4)));
                  MR_Integer ll_backend__deep_profiling__STATE_VARIABLE_N_61_61;
                  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_62_62;
                  MR_Integer ll_backend__deep_profiling__STATE_VARIABLE_N_63_63;
                  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_64_64;
                  MR_Word ll_backend__deep_profiling__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 1)));

                  {
                    ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(ll_backend__deep_profiling__Cond_42, ll_backend__deep_profiling__STATE_VARIABLE_N_0_50, &ll_backend__deep_profiling__STATE_VARIABLE_N_61_61, ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52, &ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_62_62);
                  }
                  {
                    ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(ll_backend__deep_profiling__Then_43, ll_backend__deep_profiling__STATE_VARIABLE_N_61_61, &ll_backend__deep_profiling__STATE_VARIABLE_N_63_63, ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_62_62, &ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_64_64);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__deep_profiling__next_value_of_Goal_6 = ll_backend__deep_profiling__Else_44;
                    MR_Integer ll_backend__deep_profiling__next_value_of_STATE_VARIABLE_N_0_50 = ll_backend__deep_profiling__STATE_VARIABLE_N_63_63;
                    MR_Word ll_backend__deep_profiling__next_value_of_STATE_VARIABLE_TailCallSites_0_52 = ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_64_64;

                    ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52 = ll_backend__deep_profiling__next_value_of_STATE_VARIABLE_TailCallSites_0_52;
                    ll_backend__deep_profiling__STATE_VARIABLE_N_0_50 = ll_backend__deep_profiling__next_value_of_STATE_VARIABLE_N_0_50;
                    ll_backend__deep_profiling__Goal_6 = ll_backend__deep_profiling__next_value_of_Goal_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 7:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.figure_out_rec_call_numbers\'/5", (MR_String) "shorthand");
                    return;
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_cases_5_p_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word * ll_backend__deep_profiling__HeadVar__2_2,
  MR_Word ll_backend__deep_profiling__TailRecInfo_3,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;

    if ((ll_backend__deep_profiling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__deep_profiling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5 = ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4;
      }
    else
      {
        MR_Word ll_backend__deep_profiling__Case0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__deep_profiling__Cases0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__deep_profiling__Case_12;
        MR_Word ll_backend__deep_profiling__Cases_13;
        MR_Word ll_backend__deep_profiling__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case0_10, (MR_Integer) 0)));
        MR_Word ll_backend__deep_profiling__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case0_10, (MR_Integer) 1)));
        MR_Word ll_backend__deep_profiling__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case0_10, (MR_Integer) 2)));
        MR_Word ll_backend__deep_profiling__Goal_19;
        MR_Word ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_23_23;
        MR_Word ll_backend__deep_profiling__Var_20;

        {
          ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(ll_backend__deep_profiling__Goal0_18, &ll_backend__deep_profiling__Goal_19, ll_backend__deep_profiling__TailRecInfo_3, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4, &ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_23_23, &ll_backend__deep_profiling__Var_20);
        }
        {
          ll_backend__deep_profiling__Case_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case_12, 0) = ((MR_Box) (ll_backend__deep_profiling__MainConsId_16));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case_12, 1) = ((MR_Box) (ll_backend__deep_profiling__OtherConsIds_17));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case_12, 2) = ((MR_Box) (ll_backend__deep_profiling__Goal_19));
        }
        {
          ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_cases_5_p_0(ll_backend__deep_profiling__Cases0_11, &ll_backend__deep_profiling__Cases_13, ll_backend__deep_profiling__TailRecInfo_3, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_23_23, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__deep_profiling__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Case_12));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__deep_profiling__Cases_13));
        }
      }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_disj_5_p_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word * ll_backend__deep_profiling__HeadVar__2_2,
  MR_Word ll_backend__deep_profiling__TailRecInfo_3,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;

    if ((ll_backend__deep_profiling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__deep_profiling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5 = ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4;
      }
    else
      {
        MR_Word ll_backend__deep_profiling__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__deep_profiling__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));

        if ((ll_backend__deep_profiling__Var_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word ll_backend__deep_profiling__Goal_11;
            MR_Word ll_backend__deep_profiling__Var_14;

            {
              ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(ll_backend__deep_profiling__Var_31, &ll_backend__deep_profiling__Goal_11, ll_backend__deep_profiling__TailRecInfo_3, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5, &ll_backend__deep_profiling__Var_14);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__deep_profiling__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal_11));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        else
          {
            MR_Word ll_backend__deep_profiling__Goals_22;
            MR_Word ll_backend__deep_profiling__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_30, (MR_Integer) 1)));
            MR_Word ll_backend__deep_profiling__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_30, (MR_Integer) 0)));

            if ((ll_backend__deep_profiling__Var_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word ll_backend__deep_profiling__Goal_37;
                MR_Word ll_backend__deep_profiling__Var_40;

                {
                  ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(ll_backend__deep_profiling__Var_57, &ll_backend__deep_profiling__Goal_37, ll_backend__deep_profiling__TailRecInfo_3, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5, &ll_backend__deep_profiling__Var_40);
                }
                {
                  ll_backend__deep_profiling__Goals_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Goals_22, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal_37));
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Goals_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            else
              {
                MR_Word ll_backend__deep_profiling__Goals_48;

                {
                  ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_disj_5_p_0(ll_backend__deep_profiling__Var_56, &ll_backend__deep_profiling__Goals_48, ll_backend__deep_profiling__TailRecInfo_3, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5);
                }
                {
                  ll_backend__deep_profiling__Goals_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Goals_22, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_57));
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Goals_22, 1) = ((MR_Box) (ll_backend__deep_profiling__Goals_48));
                }
              }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__deep_profiling__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_31));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__deep_profiling__Goals_22));
            }
          }
      }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_conj_6_p_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word * ll_backend__deep_profiling__HeadVar__2_2,
  MR_Word ll_backend__deep_profiling__TailRecInfo_3,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5,
  MR_Word * ll_backend__deep_profiling__HeadVar__6_6)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;

    if ((ll_backend__deep_profiling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ll_backend__deep_profiling__Var_11;
        MR_Word ll_backend__deep_profiling__Var_26;
        MR_Word ll_backend__deep_profiling__Var_27;
        MR_Word ll_backend__deep_profiling__Var_28;

        *ll_backend__deep_profiling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ll_backend__deep_profiling__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_3, (MR_Integer) 0)));
        ll_backend__deep_profiling__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_3, (MR_Integer) 1)));
        ll_backend__deep_profiling__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_3, (MR_Integer) 2)));
        ll_backend__deep_profiling__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_3, (MR_Integer) 3)));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__deep_profiling__HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_11));
        }
        *ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5 = ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4;
      }
    else
      {
        MR_Word ll_backend__deep_profiling__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__deep_profiling__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__deep_profiling__Goal_14;
        MR_Word ll_backend__deep_profiling__Goals_15;
        MR_Word ll_backend__deep_profiling__TailContinue_19;
        MR_Word ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_24_24;

        {
          ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_conj_6_p_0(ll_backend__deep_profiling__Goals0_13, &ll_backend__deep_profiling__Goals_15, ll_backend__deep_profiling__TailRecInfo_3, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4, &ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_24_24, &ll_backend__deep_profiling__TailContinue_19);
        }
        if ((ll_backend__deep_profiling__TailContinue_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            ll_backend__deep_profiling__Goal_14 = ll_backend__deep_profiling__Goal0_12;
            *ll_backend__deep_profiling__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5 = ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_24_24;
          }
        else
          {
            MR_Word ll_backend__deep_profiling__Outputs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__TailContinue_19, (MR_Integer) 0)));
            MR_Word ll_backend__deep_profiling__HeadTailRecInfo_21;
            MR_Word ll_backend__deep_profiling__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_3, (MR_Integer) 0)));
            MR_Word ll_backend__deep_profiling__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_3, (MR_Integer) 1)));
            MR_Word ll_backend__deep_profiling__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_3, (MR_Integer) 2)));
            MR_Word ll_backend__deep_profiling__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_3, (MR_Integer) 3)));

            {
              ll_backend__deep_profiling__HeadTailRecInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadTailRecInfo_21, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_29));
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadTailRecInfo_21, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_30));
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadTailRecInfo_21, 2) = ((MR_Box) (ll_backend__deep_profiling__Var_31));
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadTailRecInfo_21, 3) = ((MR_Box) (ll_backend__deep_profiling__Outputs_20));
            }
            {
              ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(ll_backend__deep_profiling__Goal0_12, &ll_backend__deep_profiling__Goal_14, ll_backend__deep_profiling__HeadTailRecInfo_21, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_24_24, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5, ll_backend__deep_profiling__HeadVar__6_6);
            }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__deep_profiling__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__deep_profiling__Goals_15));
        }
      }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_assign_4_p_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word ll_backend__deep_profiling__ToVar_2,
  MR_Word ll_backend__deep_profiling__FromVar_3,
  MR_Word * ll_backend__deep_profiling__HeadVar__4_4)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;

    if ((ll_backend__deep_profiling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__deep_profiling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__deep_profiling__Output0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__deep_profiling__Outputs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__deep_profiling__Output_11;
        MR_Word ll_backend__deep_profiling__Outputs_12;

        {
          ll_backend__deep_profiling__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_2[1], ((MR_Box) (ll_backend__deep_profiling__ToVar_2)), ((MR_Box) (ll_backend__deep_profiling__Output0_7)));
        }
        if (ll_backend__deep_profiling__succeeded)
          ll_backend__deep_profiling__Output_11 = ll_backend__deep_profiling__FromVar_3;
        else
          ll_backend__deep_profiling__Output_11 = ll_backend__deep_profiling__Output0_7;
        {
          ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_assign_4_p_0(ll_backend__deep_profiling__Outputs0_8, ll_backend__deep_profiling__ToVar_2, ll_backend__deep_profiling__FromVar_3, &ll_backend__deep_profiling__Outputs_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__deep_profiling__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Output_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__deep_profiling__Outputs_12));
        }
      }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(
  MR_Word ll_backend__deep_profiling__Goal0_7,
  MR_Word * ll_backend__deep_profiling__Goal_8,
  MR_Word ll_backend__deep_profiling__TailRecInfo_9,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89,
  MR_Word * ll_backend__deep_profiling__Continue_11)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_7, (MR_Integer) 0)));
    MR_Word ll_backend__deep_profiling__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_7, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) ll_backend__deep_profiling__GoalExpr0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ll_backend__deep_profiling__Goal_8 = ll_backend__deep_profiling__Goal0_7;
          *ll_backend__deep_profiling__Continue_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89 = ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__deep_profiling__Unify0_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 3)));
          MR_Word ll_backend__deep_profiling__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 0)));
          MR_Word ll_backend__deep_profiling__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 1)));
          MR_Word ll_backend__deep_profiling__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 2)));
          MR_Word ll_backend__deep_profiling__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 4)));

          *ll_backend__deep_profiling__Goal_8 = ll_backend__deep_profiling__Goal0_7;
          switch (MR_tag((MR_Word) ll_backend__deep_profiling__Unify0_47)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              *ll_backend__deep_profiling__Continue_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 2:
              {
                MR_Word ll_backend__deep_profiling__ToVar_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__Unify0_47, (MR_Integer) 0)));
                MR_Word ll_backend__deep_profiling__FromVar_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__Unify0_47, (MR_Integer) 1)));
                MR_Word ll_backend__deep_profiling__Outputs_51;
                MR_Word ll_backend__deep_profiling__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 3)));
                MR_Word ll_backend__deep_profiling__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 0)));
                MR_Word ll_backend__deep_profiling__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 1)));
                MR_Word ll_backend__deep_profiling__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 2)));

                {
                  ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_assign_4_p_0(ll_backend__deep_profiling__Var_98, ll_backend__deep_profiling__ToVar_49, ll_backend__deep_profiling__FromVar_50, &ll_backend__deep_profiling__Outputs_51);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__deep_profiling__Continue_11 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Outputs_51));
                }
              }
              break;
            case (MR_Integer) 3:
              *ll_backend__deep_profiling__Continue_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
          }
          *ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89 = ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__deep_profiling__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 0)));
          MR_Integer ll_backend__deep_profiling__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 1)));
          MR_Word ll_backend__deep_profiling__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 2)));
          MR_Word ll_backend__deep_profiling__Builtin_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 3)));
          MR_Word ll_backend__deep_profiling__UnifyContext_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 4)));
          MR_Word ll_backend__deep_profiling__SymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 5)));
          MR_Word ll_backend__deep_profiling__ClonePredProcId_28;
          MR_Word ll_backend__deep_profiling__TypeCtorInfo_131_131 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
          MR_Word ll_backend__deep_profiling__TypeInfo_134_134;
          MR_Word ll_backend__deep_profiling__PredProcId_27;
          MR_Word ll_backend__deep_profiling__PredInfo_29;
          MR_Word ll_backend__deep_profiling__ProcInfo_30;
          MR_Word ll_backend__deep_profiling__CallDetism_31;
          MR_Word ll_backend__deep_profiling__Types_32;
          MR_Word ll_backend__deep_profiling__Modes_33;
          MR_Word ll_backend__deep_profiling__CallOutputs_34;
          MR_Word ll_backend__deep_profiling__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 1)));
          MR_Word ll_backend__deep_profiling__Var_100;
          MR_Word ll_backend__deep_profiling__Var_101;
          MR_Word ll_backend__deep_profiling__Var_132;
          MR_Word ll_backend__deep_profiling__Var_133;
          MR_Word ll_backend__deep_profiling__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 0)));
          MR_Word ll_backend__deep_profiling__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 2)));
          MR_Word ll_backend__deep_profiling__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 3)));
          MR_Box ll_backend__deep_profiling__conv0_ClonePredProcId_28;
          MR_Word ll_backend__deep_profiling__Var_116;
          MR_Word ll_backend__deep_profiling__Var_117;
          MR_Word ll_backend__deep_profiling__Var_118;
          MR_Word ll_backend__deep_profiling__Var_119;
          MR_Word ll_backend__deep_profiling__Var_120;
          MR_Word ll_backend__deep_profiling__Var_121;
          MR_Word ll_backend__deep_profiling__Var_122;
          MR_Word ll_backend__deep_profiling__Var_123;
          MR_Word ll_backend__deep_profiling__Var_124;
          MR_Word ll_backend__deep_profiling__Var_125;
          MR_Word ll_backend__deep_profiling__Var_126;
          MR_Word ll_backend__deep_profiling__Var_127;

          {
            ll_backend__deep_profiling__PredProcId_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__PredProcId_27, 0) = ((MR_Box) (ll_backend__deep_profiling__PredId_21));
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__PredProcId_27, 1) = ((MR_Box) (ll_backend__deep_profiling__ProcId_22));
          }
          {
            ll_backend__deep_profiling__succeeded = mercury__assoc_list__search_3_p_0(ll_backend__deep_profiling__TypeCtorInfo_131_131, ll_backend__deep_profiling__TypeCtorInfo_131_131, ll_backend__deep_profiling__Var_99, ((MR_Box) (ll_backend__deep_profiling__PredProcId_27)), &ll_backend__deep_profiling__conv0_ClonePredProcId_28);
          }
          if (ll_backend__deep_profiling__succeeded)
            {
              ll_backend__deep_profiling__ClonePredProcId_28 = ((MR_Word) ll_backend__deep_profiling__conv0_ClonePredProcId_28);
              ll_backend__deep_profiling__succeeded = MR_TRUE;
            }
          if (ll_backend__deep_profiling__succeeded)
            {
              ll_backend__deep_profiling__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 0)));
              ll_backend__deep_profiling__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 1)));
              ll_backend__deep_profiling__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 2)));
              ll_backend__deep_profiling__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 3)));
              {
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(ll_backend__deep_profiling__Var_100, ll_backend__deep_profiling__PredId_21, ll_backend__deep_profiling__ProcId_22, &ll_backend__deep_profiling__PredInfo_29, &ll_backend__deep_profiling__ProcInfo_30);
              }
              {
                hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ll_backend__deep_profiling__ProcInfo_30, &ll_backend__deep_profiling__CallDetism_31);
              }
              ll_backend__deep_profiling__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 0)));
              ll_backend__deep_profiling__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 1)));
              ll_backend__deep_profiling__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 2)));
              ll_backend__deep_profiling__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 3)));
              ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__CallDetism_31 == ll_backend__deep_profiling__Var_132);
              if (ll_backend__deep_profiling__succeeded)
                {
                  {
                    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ll_backend__deep_profiling__PredInfo_29, &ll_backend__deep_profiling__Types_32);
                  }
                  {
                    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ll_backend__deep_profiling__ProcInfo_30, &ll_backend__deep_profiling__Modes_33);
                  }
                  ll_backend__deep_profiling__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 0)));
                  ll_backend__deep_profiling__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 1)));
                  ll_backend__deep_profiling__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 2)));
                  ll_backend__deep_profiling__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 3)));
                  {
                    ll_backend__deep_profiling__find_list_of_output_args_5_p_0(ll_backend__deep_profiling__Args_23, ll_backend__deep_profiling__Modes_33, ll_backend__deep_profiling__Types_32, ll_backend__deep_profiling__Var_101, &ll_backend__deep_profiling__CallOutputs_34);
                  }
                  ll_backend__deep_profiling__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 0)));
                  ll_backend__deep_profiling__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 1)));
                  ll_backend__deep_profiling__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 2)));
                  ll_backend__deep_profiling__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 3)));
                  ll_backend__deep_profiling__TypeInfo_134_134 = (MR_Word) &ll_backend__deep_profiling_scalar_common_2[5];
                  {
                    ll_backend__deep_profiling__succeeded = mercury__builtin__unify_2_p_0(ll_backend__deep_profiling__TypeInfo_134_134, ((MR_Box) (ll_backend__deep_profiling__CallOutputs_34)), ((MR_Box) (ll_backend__deep_profiling__Var_133)));
                  }
                  if (ll_backend__deep_profiling__succeeded)
                    ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__Builtin_24 == (MR_Integer) 1);
                }
            }
          if (ll_backend__deep_profiling__succeeded)
            {
              MR_Word ll_backend__deep_profiling__ClonePredId_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__ClonePredProcId_28, (MR_Integer) 0)));
              MR_Integer ll_backend__deep_profiling__CloneProcId_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__ClonePredProcId_28, (MR_Integer) 1)));
              MR_Word ll_backend__deep_profiling__GoalExpr_37;
              MR_Word ll_backend__deep_profiling__GoalInfo_38;

              {
                ll_backend__deep_profiling__GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_37, 0) = ((MR_Box) (ll_backend__deep_profiling__ClonePredId_35));
                MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_37, 1) = ((MR_Box) (ll_backend__deep_profiling__CloneProcId_36));
                MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_37, 2) = ((MR_Box) (ll_backend__deep_profiling__Args_23));
                MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_37, 3) = ((MR_Box) (ll_backend__deep_profiling__Builtin_24));
                MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_37, 4) = ((MR_Box) (ll_backend__deep_profiling__UnifyContext_25));
                MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_37, 5) = ((MR_Box) (ll_backend__deep_profiling__SymName_26));
              }
              {
                hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 9, ll_backend__deep_profiling__GoalInfo0_13, &ll_backend__deep_profiling__GoalInfo_38);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *ll_backend__deep_profiling__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_37));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_38));
              }
              *ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89 = (MR_Integer) 1;
            }
          else
            {
              *ll_backend__deep_profiling__Goal_8 = ll_backend__deep_profiling__Goal0_7;
              *ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89 = ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88;
            }
          *ll_backend__deep_profiling__Continue_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ll_backend__deep_profiling__Goal_8 = ll_backend__deep_profiling__Goal0_7;
              *ll_backend__deep_profiling__Continue_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89 = ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88;
            }
            break;
          case (MR_Integer) 1:
            {
              *ll_backend__deep_profiling__Goal_8 = ll_backend__deep_profiling__Goal0_7;
              *ll_backend__deep_profiling__Continue_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89 = ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__deep_profiling__ConjType_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word ll_backend__deep_profiling__Goals0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 2)));

              switch (ll_backend__deep_profiling__ConjType_69) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    *ll_backend__deep_profiling__Goal_8 = ll_backend__deep_profiling__Goal0_7;
                    *ll_backend__deep_profiling__Continue_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    *ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89 = ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word ll_backend__deep_profiling__Goals_71;
                    MR_Word ll_backend__deep_profiling__GoalExpr_105;

                    {
                      ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_conj_6_p_0(ll_backend__deep_profiling__Goals0_70, &ll_backend__deep_profiling__Goals_71, ll_backend__deep_profiling__TailRecInfo_9, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89, ll_backend__deep_profiling__Continue_11);
                    }
                    {
                      ll_backend__deep_profiling__GoalExpr_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_105, 1) = ((MR_Box) (ll_backend__deep_profiling__ConjType_69));
                      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_105, 2) = ((MR_Box) (ll_backend__deep_profiling__Goals_71));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      *ll_backend__deep_profiling__Goal_8 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_105));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo0_13));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__deep_profiling__GoalExpr_108;
              MR_Word ll_backend__deep_profiling__Goals0_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word ll_backend__deep_profiling__Goals_110;

              {
                ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_disj_5_p_0(ll_backend__deep_profiling__Goals0_109, &ll_backend__deep_profiling__Goals_110, ll_backend__deep_profiling__TailRecInfo_9, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89);
              }
              {
                ll_backend__deep_profiling__GoalExpr_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_108, 1) = ((MR_Box) (ll_backend__deep_profiling__Goals_110));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *ll_backend__deep_profiling__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_108));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo0_13));
              }
              *ll_backend__deep_profiling__Continue_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__deep_profiling__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word ll_backend__deep_profiling__CanFail_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word ll_backend__deep_profiling__Cases0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 3)));
              MR_Word ll_backend__deep_profiling__Cases_75;
              MR_Word ll_backend__deep_profiling__GoalExpr_111;

              {
                ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_cases_5_p_0(ll_backend__deep_profiling__Cases0_74, &ll_backend__deep_profiling__Cases_75, ll_backend__deep_profiling__TailRecInfo_9, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89);
              }
              {
                ll_backend__deep_profiling__GoalExpr_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_111, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_72));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_111, 2) = ((MR_Box) (ll_backend__deep_profiling__CanFail_73));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_111, 3) = ((MR_Box) (ll_backend__deep_profiling__Cases_75));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *ll_backend__deep_profiling__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_111));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo0_13));
              }
              *ll_backend__deep_profiling__Continue_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 5:
            {
              *ll_backend__deep_profiling__Goal_8 = ll_backend__deep_profiling__Goal0_7;
              *ll_backend__deep_profiling__Continue_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89 = ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__deep_profiling__Vars_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word ll_backend__deep_profiling__Cond_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word ll_backend__deep_profiling__Then0_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 3)));
              MR_Word ll_backend__deep_profiling__Else0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 4)));
              MR_Word ll_backend__deep_profiling__Then_80;
              MR_Word ll_backend__deep_profiling__Else_82;
              MR_Word ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_93_93;
              MR_Word ll_backend__deep_profiling__GoalExpr_112;
              MR_Word ll_backend__deep_profiling__Var_81;
              MR_Word ll_backend__deep_profiling__Var_83;

              {
                ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(ll_backend__deep_profiling__Then0_78, &ll_backend__deep_profiling__Then_80, ll_backend__deep_profiling__TailRecInfo_9, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88, &ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_93_93, &ll_backend__deep_profiling__Var_81);
              }
              {
                ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(ll_backend__deep_profiling__Else0_79, &ll_backend__deep_profiling__Else_82, ll_backend__deep_profiling__TailRecInfo_9, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_93_93, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89, &ll_backend__deep_profiling__Var_83);
              }
              {
                ll_backend__deep_profiling__GoalExpr_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_112, 1) = ((MR_Box) (ll_backend__deep_profiling__Vars_76));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_112, 2) = ((MR_Box) (ll_backend__deep_profiling__Cond_77));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_112, 3) = ((MR_Box) (ll_backend__deep_profiling__Then_80));
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_112, 4) = ((MR_Box) (ll_backend__deep_profiling__Else_82));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *ll_backend__deep_profiling__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_112));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo0_13));
              }
              *ll_backend__deep_profiling__Continue_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.apply_deep_prof_tail_rec_to_goal\'/6", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
ll_backend__deep_profiling__cases_contain_builtin_unify_or_compare_1_f_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__deep_profiling__succeeded;
        MR_Word ll_backend__deep_profiling__HeadVar__2_2;

        if ((ll_backend__deep_profiling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ll_backend__deep_profiling__HeadVar__2_2 = (MR_Integer) 0;
        else
          {
            MR_Word ll_backend__deep_profiling__Case_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__deep_profiling__Cases_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__deep_profiling__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case_3, (MR_Integer) 2)));
            MR_Word ll_backend__deep_profiling__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case_3, (MR_Integer) 0)));
            MR_Word ll_backend__deep_profiling__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case_3, (MR_Integer) 1)));
            MR_Word ll_backend__deep_profiling__Var_9;

            {
              ll_backend__deep_profiling__Var_9 = ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(ll_backend__deep_profiling__Goal_8);
            }
            ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__Var_9 == (MR_Integer) 1);
            if (ll_backend__deep_profiling__succeeded)
              ll_backend__deep_profiling__HeadVar__2_2 = (MR_Integer) 1;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__deep_profiling__next_value_of_HeadVar__1_1 = ll_backend__deep_profiling__Cases_4;

                  ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return ll_backend__deep_profiling__HeadVar__2_2;
      }
      break;
    }
}

static MR_Word MR_CALL 
ll_backend__deep_profiling__goals_contain_builtin_unify_or_compare_1_f_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__deep_profiling__succeeded;
        MR_Word ll_backend__deep_profiling__HeadVar__2_2;

        if ((ll_backend__deep_profiling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ll_backend__deep_profiling__HeadVar__2_2 = (MR_Integer) 0;
        else
          {
            MR_Word ll_backend__deep_profiling__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__deep_profiling__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__deep_profiling__Var_6;

            {
              ll_backend__deep_profiling__Var_6 = ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(ll_backend__deep_profiling__Goal_3);
            }
            ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__Var_6 == (MR_Integer) 1);
            if (ll_backend__deep_profiling__succeeded)
              ll_backend__deep_profiling__HeadVar__2_2 = (MR_Integer) 1;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__deep_profiling__next_value_of_HeadVar__1_1 = ll_backend__deep_profiling__Goals_4;

                  ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return ll_backend__deep_profiling__HeadVar__2_2;
      }
      break;
    }
}

static MR_Word MR_CALL 
ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(
  MR_Word ll_backend__deep_profiling__Goal_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__deep_profiling__succeeded;
        MR_Word ll_backend__deep_profiling__Contains_4;
        MR_Word ll_backend__deep_profiling__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal_3, (MR_Integer) 0)));
        MR_Word ll_backend__deep_profiling___GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal_3, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) ll_backend__deep_profiling__GoalExpr_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__deep_profiling__SubGoal_40 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__GoalExpr_5), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word ll_backend__deep_profiling__next_value_of_Goal_3 = ll_backend__deep_profiling__SubGoal_40;

                ll_backend__deep_profiling__Goal_3 = ll_backend__deep_profiling__next_value_of_Goal_3;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            ll_backend__deep_profiling__Contains_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            ll_backend__deep_profiling__Contains_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ll_backend__deep_profiling__Contains_4 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__deep_profiling__Attributes_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 1)));
                  MR_Word ll_backend__deep_profiling__MayCallMercury_30;
                  MR_Word ll_backend__deep_profiling__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 2)));
                  MR_Integer ll_backend__deep_profiling__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 3)));
                  MR_Word ll_backend__deep_profiling__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 4)));
                  MR_Word ll_backend__deep_profiling__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 5)));
                  MR_Word ll_backend__deep_profiling__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 6)));
                  MR_Word ll_backend__deep_profiling__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 7)));

                  {
                    ll_backend__deep_profiling__MayCallMercury_30 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(ll_backend__deep_profiling__Attributes_23);
                  }
                  switch (ll_backend__deep_profiling__MayCallMercury_30) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      ll_backend__deep_profiling__Contains_4 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      ll_backend__deep_profiling__Contains_4 = (MR_Integer) 0;
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__deep_profiling__Goals_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 2)));
                  MR_Word ll_backend__deep_profiling__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 1)));

                  {
                    ll_backend__deep_profiling__Contains_4 = ll_backend__deep_profiling__goals_contain_builtin_unify_or_compare_1_f_0(ll_backend__deep_profiling__Goals_32);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ll_backend__deep_profiling__Goals_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 1)));

                  {
                    ll_backend__deep_profiling__Contains_4 = ll_backend__deep_profiling__goals_contain_builtin_unify_or_compare_1_f_0(ll_backend__deep_profiling__Goals_49);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ll_backend__deep_profiling__Cases_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 3)));
                  MR_Word ll_backend__deep_profiling__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 1)));
                  MR_Word ll_backend__deep_profiling__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 2)));

                  {
                    ll_backend__deep_profiling__Contains_4 = ll_backend__deep_profiling__cases_contain_builtin_unify_or_compare_1_f_0(ll_backend__deep_profiling__Cases_35);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ll_backend__deep_profiling__SubGoal_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 2)));
                  MR_Word ll_backend__deep_profiling__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__deep_profiling__next_value_of_Goal_3 = ll_backend__deep_profiling__SubGoal_50;

                    ll_backend__deep_profiling__Goal_3 = ll_backend__deep_profiling__next_value_of_Goal_3;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ll_backend__deep_profiling__Cond_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 2)));
                  MR_Word ll_backend__deep_profiling__Then_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 3)));
                  MR_Word ll_backend__deep_profiling__Else_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 4)));
                  MR_Word ll_backend__deep_profiling__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 1)));
                  MR_Word ll_backend__deep_profiling__Var_46;
                  MR_Word ll_backend__deep_profiling__Var_47;
                  MR_Word ll_backend__deep_profiling__Var_48;

                  {
                    ll_backend__deep_profiling__Var_46 = ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(ll_backend__deep_profiling__Cond_37);
                  }
                  ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__Var_46 == (MR_Integer) 0);
                  if (ll_backend__deep_profiling__succeeded)
                    {
                      {
                        ll_backend__deep_profiling__Var_47 = ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(ll_backend__deep_profiling__Then_38);
                      }
                      ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__Var_47 == (MR_Integer) 0);
                      if (ll_backend__deep_profiling__succeeded)
                        {
                          {
                            ll_backend__deep_profiling__Var_48 = ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(ll_backend__deep_profiling__Else_39);
                          }
                          ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__Var_48 == (MR_Integer) 0);
                        }
                    }
                  if (ll_backend__deep_profiling__succeeded)
                    ll_backend__deep_profiling__Contains_4 = (MR_Integer) 0;
                  else
                    ll_backend__deep_profiling__Contains_4 = (MR_Integer) 1;
                }
                break;
              case (MR_Integer) 7:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "function \140ll_backend.deep_profiling.goal_contains_builtin_unify_or_compare\'/1", (MR_String) "shorthand");
                  }
                }
                break;
            }
            break;
        }
        return ll_backend__deep_profiling__Contains_4;
      }
      break;
    }
}

static MR_bool MR_CALL 
ll_backend__deep_profiling__find_list_of_output_args_2_5_p_0(
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
  MR_Word ll_backend__deep_profiling__HeadVar__2_2,
  MR_Word ll_backend__deep_profiling__HeadVar__3_3,
  MR_Word ll_backend__deep_profiling__ModuleInfo_4,
  MR_Word * ll_backend__deep_profiling__HeadVar__5_5)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;

    if ((ll_backend__deep_profiling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (ll_backend__deep_profiling__succeeded)
          {
            ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (ll_backend__deep_profiling__succeeded)
              {
                *ll_backend__deep_profiling__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                ll_backend__deep_profiling__succeeded = MR_TRUE;
              }
          }
      }
    else
      {
        MR_Word ll_backend__deep_profiling__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__deep_profiling__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__deep_profiling__Mode_9;
        MR_Word ll_backend__deep_profiling__Modes_10;
        MR_Word ll_backend__deep_profiling__Type_11;
        MR_Word ll_backend__deep_profiling__Types_12;
        MR_Word ll_backend__deep_profiling__LaterOutputs_15;
        MR_Word ll_backend__deep_profiling__TopFunctorMode_16;

        ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__deep_profiling__succeeded)
          {
            ll_backend__deep_profiling__Mode_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 0)));
            ll_backend__deep_profiling__Modes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 1)));
            ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__deep_profiling__succeeded)
              {
                ll_backend__deep_profiling__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 0)));
                ll_backend__deep_profiling__Types_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 1)));
                {
                  ll_backend__deep_profiling__succeeded = ll_backend__deep_profiling__find_list_of_output_args_2_5_p_0(ll_backend__deep_profiling__Vars_8, ll_backend__deep_profiling__Modes_10, ll_backend__deep_profiling__Types_12, ll_backend__deep_profiling__ModuleInfo_4, &ll_backend__deep_profiling__LaterOutputs_15);
                }
                if (ll_backend__deep_profiling__succeeded)
                  {
                    {
                      check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ll_backend__deep_profiling__ModuleInfo_4, ll_backend__deep_profiling__Mode_9, ll_backend__deep_profiling__Type_11, &ll_backend__deep_profiling__TopFunctorMode_16);
                    }
                    switch (ll_backend__deep_profiling__TopFunctorMode_16) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *ll_backend__deep_profiling__HeadVar__5_5 = ll_backend__deep_profiling__LaterOutputs_15;
                        break;
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *ll_backend__deep_profiling__HeadVar__5_5 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_7));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__deep_profiling__LaterOutputs_15));
                        }
                        break;
                    }
                    ll_backend__deep_profiling__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return ll_backend__deep_profiling__succeeded;
  }
}

static void MR_CALL 
ll_backend__deep_profiling__find_list_of_output_args_5_p_0(
  MR_Word ll_backend__deep_profiling__Vars_6,
  MR_Word ll_backend__deep_profiling__Modes_7,
  MR_Word ll_backend__deep_profiling__Types_8,
  MR_Word ll_backend__deep_profiling__ModuleInfo_9,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_Outputs_11)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_Outputs_12_12;

    {
      ll_backend__deep_profiling__succeeded = ll_backend__deep_profiling__find_list_of_output_args_2_5_p_0(ll_backend__deep_profiling__Vars_6, ll_backend__deep_profiling__Modes_7, ll_backend__deep_profiling__Types_8, ll_backend__deep_profiling__ModuleInfo_9, &ll_backend__deep_profiling__STATE_VARIABLE_Outputs_12_12);
    }
    if (ll_backend__deep_profiling__succeeded)
      *ll_backend__deep_profiling__STATE_VARIABLE_Outputs_11 = ll_backend__deep_profiling__STATE_VARIABLE_Outputs_12_12;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.find_list_of_output_args\'/5", (MR_String) "list length mismatch");
          return;
        }
      }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_transform_to_proc_3_p_0(
  MR_Word ll_backend__deep_profiling__PredProcId_4,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_44)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__TypeCtorInfo_67_67;
    MR_Word ll_backend__deep_profiling__TypeCtorInfo_68_68;
    MR_Word ll_backend__deep_profiling__TypeCtorInfo_70_70;
    MR_Word ll_backend__deep_profiling__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__PredProcId_4, (MR_Integer) 0)));
    MR_Integer ll_backend__deep_profiling__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__PredProcId_4, (MR_Integer) 1)));
    MR_Word ll_backend__deep_profiling__PredTable0_8;
    MR_Word ll_backend__deep_profiling__PredInfo0_9;
    MR_Word ll_backend__deep_profiling__Types_10;
    MR_Word ll_backend__deep_profiling__Origin_11;
    MR_Word ll_backend__deep_profiling__ProcTable0_12;
    MR_Word ll_backend__deep_profiling__ProcInfo0_13;
    MR_Word ll_backend__deep_profiling__Goal0_14;
    MR_Word ll_backend__deep_profiling__Detism_15;
    MR_Box ll_backend__deep_profiling__conv0_PredInfo0_9;
    MR_Box ll_backend__deep_profiling__conv1_ProcInfo0_13;
    MR_Integer ll_backend__deep_profiling__CloneProcId_21;
    MR_Word ll_backend__deep_profiling__ClonePredProcId_22;
    MR_Word ll_backend__deep_profiling__Goal_24;
    MR_Word ll_backend__deep_profiling__SolnCount_17;
    MR_Word ll_backend__deep_profiling__HeadVars_18;
    MR_Word ll_backend__deep_profiling__Modes_19;
    MR_Word ll_backend__deep_profiling__Outputs_20;
    MR_Word ll_backend__deep_profiling__TailRecInfo_23;
    MR_Word ll_backend__deep_profiling__FoundTailCall_25;
    MR_Word ll_backend__deep_profiling__Var_45;
    MR_Word ll_backend__deep_profiling__Var_46;
    MR_Word ll_backend__deep_profiling__Var_47;
    MR_Word ll_backend__deep_profiling__Var_48;
    MR_Word ll_backend__deep_profiling___CanFail_16;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_Outputs_12_77;
    MR_Word ll_backend__deep_profiling___Continue_26;
    MR_Word ll_backend__deep_profiling__Var_27;
    MR_Word ll_backend__deep_profiling__Var_28;
    MR_Word ll_backend__deep_profiling__Var_49;

    {
      hlds__hlds_module__module_info_get_preds_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_0_43, &ll_backend__deep_profiling__PredTable0_8);
    }
    ll_backend__deep_profiling__TypeCtorInfo_67_67 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    ll_backend__deep_profiling__TypeCtorInfo_68_68 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    {
      mercury__map__lookup_3_p_0(ll_backend__deep_profiling__TypeCtorInfo_67_67, ll_backend__deep_profiling__TypeCtorInfo_68_68, ll_backend__deep_profiling__PredTable0_8, ((MR_Box) (ll_backend__deep_profiling__PredId_6)), &ll_backend__deep_profiling__conv0_PredInfo0_9);
    }
    ll_backend__deep_profiling__PredInfo0_9 = ((MR_Word) ll_backend__deep_profiling__conv0_PredInfo0_9);
    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ll_backend__deep_profiling__PredInfo0_9, &ll_backend__deep_profiling__Types_10);
    }
    {
      hlds__hlds_pred__pred_info_get_origin_2_p_0(ll_backend__deep_profiling__PredInfo0_9, &ll_backend__deep_profiling__Origin_11);
    }
    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(ll_backend__deep_profiling__PredInfo0_9, &ll_backend__deep_profiling__ProcTable0_12);
    }
    ll_backend__deep_profiling__TypeCtorInfo_70_70 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(ll_backend__deep_profiling__TypeCtorInfo_70_70, ll_backend__deep_profiling__ProcTable0_12, ll_backend__deep_profiling__ProcId_7, &ll_backend__deep_profiling__conv1_ProcInfo0_13);
    }
    ll_backend__deep_profiling__ProcInfo0_13 = ((MR_Word) ll_backend__deep_profiling__conv1_ProcInfo0_13);
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__deep_profiling__ProcInfo0_13, &ll_backend__deep_profiling__Goal0_14);
    }
    {
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ll_backend__deep_profiling__ProcInfo0_13, &ll_backend__deep_profiling__Detism_15);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_0(ll_backend__deep_profiling__Detism_15, &ll_backend__deep_profiling___CanFail_16, &ll_backend__deep_profiling__SolnCount_17);
    }
    ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__SolnCount_17 == (MR_Integer) 3);
    ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
    if (ll_backend__deep_profiling__succeeded)
      {
        {
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__deep_profiling__ProcInfo0_13, &ll_backend__deep_profiling__HeadVars_18);
        }
        {
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ll_backend__deep_profiling__ProcInfo0_13, &ll_backend__deep_profiling__Modes_19);
        }
        {
          ll_backend__deep_profiling__succeeded = ll_backend__deep_profiling__find_list_of_output_args_2_5_p_0(ll_backend__deep_profiling__HeadVars_18, ll_backend__deep_profiling__Modes_19, ll_backend__deep_profiling__Types_10, ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_0_43, &ll_backend__deep_profiling__STATE_VARIABLE_Outputs_12_77);
        }
        if (ll_backend__deep_profiling__succeeded)
          ll_backend__deep_profiling__Outputs_20 = ll_backend__deep_profiling__STATE_VARIABLE_Outputs_12_77;
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.find_list_of_output_args\'/5", (MR_String) "list length mismatch");
              return;
            }
          }
        {
          hlds__hlds_pred__clone_proc_id_3_p_0(ll_backend__deep_profiling__ProcTable0_12, ll_backend__deep_profiling__ProcId_7, &ll_backend__deep_profiling__CloneProcId_21);
        }
        ll_backend__deep_profiling__Var_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ll_backend__deep_profiling__Var_48 = (MR_Integer) 0;
        {
          ll_backend__deep_profiling__ClonePredProcId_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__ClonePredProcId_22, 0) = ((MR_Box) (ll_backend__deep_profiling__PredId_6));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__ClonePredProcId_22, 1) = ((MR_Box) (ll_backend__deep_profiling__CloneProcId_21));
        }
        {
          ll_backend__deep_profiling__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_46, 0) = ((MR_Box) (ll_backend__deep_profiling__PredProcId_4));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_46, 1) = ((MR_Box) (ll_backend__deep_profiling__ClonePredProcId_22));
        }
        {
          ll_backend__deep_profiling__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_45, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_46));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_45, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_47));
        }
        {
          ll_backend__deep_profiling__TailRecInfo_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_23, 0) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_0_43));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_23, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_45));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_23, 2) = ((MR_Box) (ll_backend__deep_profiling__Detism_15));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_23, 3) = ((MR_Box) (ll_backend__deep_profiling__Outputs_20));
        }
        {
          ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(ll_backend__deep_profiling__Goal0_14, &ll_backend__deep_profiling__Goal_24, ll_backend__deep_profiling__TailRecInfo_23, ll_backend__deep_profiling__Var_48, &ll_backend__deep_profiling__FoundTailCall_25, &ll_backend__deep_profiling___Continue_26);
        }
        ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__FoundTailCall_25 == (MR_Integer) 1);
        if (ll_backend__deep_profiling__succeeded)
          {
            ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__Origin_11)) == (MR_mktag((MR_Integer) 0)));
            if (ll_backend__deep_profiling__succeeded)
              {
                ll_backend__deep_profiling__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Origin_11, (MR_Integer) 0)));
                ll_backend__deep_profiling__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Origin_11, (MR_Integer) 1)));
                {
                  ll_backend__deep_profiling__Var_49 = ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(ll_backend__deep_profiling__Goal_24);
                }
                ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__Var_49 == (MR_Integer) 0);
                ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
              }
            ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
          }
      }
    if (ll_backend__deep_profiling__succeeded)
      {
        MR_Word ll_backend__deep_profiling__ProcInfo1_29;
        MR_Word ll_backend__deep_profiling__TailCallSites_31;
        MR_Word ll_backend__deep_profiling__OrigDeepRecInfo_32;
        MR_Word ll_backend__deep_profiling__DeepOriginalBody_33;
        MR_Word ll_backend__deep_profiling__OrigDeepProfileInfo_34;
        MR_Word ll_backend__deep_profiling__CloneDeepRecInfo_35;
        MR_Word ll_backend__deep_profiling__CloneDeepProfileInfo_36;
        MR_Word ll_backend__deep_profiling__ProcInfo_37;
        MR_Word ll_backend__deep_profiling__CloneProcInfo_38;
        MR_Word ll_backend__deep_profiling__ProcTable1_39;
        MR_Word ll_backend__deep_profiling__ProcTable_40;
        MR_Word ll_backend__deep_profiling__PredInfo_41;
        MR_Word ll_backend__deep_profiling__PredTable_42;
        MR_Word ll_backend__deep_profiling__Var_52;
        MR_Word ll_backend__deep_profiling__Var_53;
        MR_Word ll_backend__deep_profiling__Var_54;
        MR_Word ll_backend__deep_profiling__Var_55;
        MR_Word ll_backend__deep_profiling__Var_58;
        MR_Word ll_backend__deep_profiling__Var_59;
        MR_Word ll_backend__deep_profiling__Var_64;
        MR_Word ll_backend__deep_profiling__Var_65;
        MR_Word ll_backend__deep_profiling__Body_85;
        MR_Word ll_backend__deep_profiling__HeadVars_86;
        MR_Word ll_backend__deep_profiling__Instmap_87;
        MR_Word ll_backend__deep_profiling__Vartypes_88;
        MR_Word ll_backend__deep_profiling__MaybeDetism_89;
        MR_Word ll_backend__deep_profiling__Detism_90;
        MR_Word ll_backend__deep_profiling__Varset_91;
        MR_Integer ll_backend__deep_profiling___Num_30;

        {
          hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__deep_profiling__Goal_24, ll_backend__deep_profiling__ProcInfo0_13, &ll_backend__deep_profiling__ProcInfo1_29);
        }
        {
          ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(ll_backend__deep_profiling__Goal_24, (MR_Integer) 0, &ll_backend__deep_profiling___Num_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__TailCallSites_31);
        }
        ll_backend__deep_profiling__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ll_backend__deep_profiling__ClonePredProcId_22);
        {
          ll_backend__deep_profiling__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_55, 0) = ((MR_Box) (ll_backend__deep_profiling__PredProcId_4));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_55, 1) = ((MR_Box) (ll_backend__deep_profiling__ClonePredProcId_22));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_55, 2) = ((MR_Box) (ll_backend__deep_profiling__TailCallSites_31));
        }
        {
          ll_backend__deep_profiling__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_54, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_55));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__deep_profiling__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_52, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_53));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_52, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_54));
        }
        {
          ll_backend__deep_profiling__OrigDeepRecInfo_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__OrigDeepRecInfo_32, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_52));
        }
        {
          hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__deep_profiling__ProcInfo0_13, &ll_backend__deep_profiling__Body_85);
        }
        {
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__deep_profiling__ProcInfo0_13, &ll_backend__deep_profiling__HeadVars_86);
        }
        {
          hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ll_backend__deep_profiling__ProcInfo0_13, ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_0_43, &ll_backend__deep_profiling__Instmap_87);
        }
        {
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__deep_profiling__ProcInfo0_13, &ll_backend__deep_profiling__Vartypes_88);
        }
        {
          hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ll_backend__deep_profiling__ProcInfo0_13, &ll_backend__deep_profiling__MaybeDetism_89);
        }
        if ((ll_backend__deep_profiling__MaybeDetism_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ll_backend__deep_profiling__ProcInfo0_13, &ll_backend__deep_profiling__Detism_90);
          }
        else
          ll_backend__deep_profiling__Detism_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeDetism_89, (MR_Integer) 0)));
        {
          hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__deep_profiling__ProcInfo0_13, &ll_backend__deep_profiling__Varset_91);
        }
        {
          ll_backend__deep_profiling__DeepOriginalBody_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepOriginalBody_33, 0) = ((MR_Box) (ll_backend__deep_profiling__Body_85));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepOriginalBody_33, 1) = ((MR_Box) (ll_backend__deep_profiling__HeadVars_86));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepOriginalBody_33, 2) = ((MR_Box) (ll_backend__deep_profiling__Instmap_87));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepOriginalBody_33, 3) = ((MR_Box) (ll_backend__deep_profiling__Vartypes_88));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepOriginalBody_33, 4) = ((MR_Box) (ll_backend__deep_profiling__Detism_90));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepOriginalBody_33, 5) = ((MR_Box) (ll_backend__deep_profiling__Varset_91));
        }
        {
          ll_backend__deep_profiling__OrigDeepProfileInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OrigDeepProfileInfo_34, 0) = ((MR_Box) (ll_backend__deep_profiling__OrigDeepRecInfo_32));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OrigDeepProfileInfo_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OrigDeepProfileInfo_34, 2) = ((MR_Box) (ll_backend__deep_profiling__DeepOriginalBody_33));
        }
        ll_backend__deep_profiling__Var_59 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__deep_profiling__PredProcId_4);
        {
          ll_backend__deep_profiling__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_58, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_59));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_58, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_54));
        }
        {
          ll_backend__deep_profiling__CloneDeepRecInfo_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__CloneDeepRecInfo_35, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_58));
        }
        {
          ll_backend__deep_profiling__CloneDeepProfileInfo_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__CloneDeepProfileInfo_36, 0) = ((MR_Box) (ll_backend__deep_profiling__CloneDeepRecInfo_35));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__CloneDeepProfileInfo_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__CloneDeepProfileInfo_36, 2) = ((MR_Box) (ll_backend__deep_profiling__DeepOriginalBody_33));
        }
        {
          ll_backend__deep_profiling__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_64, 0) = ((MR_Box) (ll_backend__deep_profiling__OrigDeepProfileInfo_34));
        }
        {
          hlds__hlds_pred__proc_info_set_maybe_deep_profile_info_3_p_0(ll_backend__deep_profiling__Var_64, ll_backend__deep_profiling__ProcInfo1_29, &ll_backend__deep_profiling__ProcInfo_37);
        }
        {
          ll_backend__deep_profiling__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_65, 0) = ((MR_Box) (ll_backend__deep_profiling__CloneDeepProfileInfo_36));
        }
        {
          hlds__hlds_pred__proc_info_set_maybe_deep_profile_info_3_p_0(ll_backend__deep_profiling__Var_65, ll_backend__deep_profiling__ProcInfo1_29, &ll_backend__deep_profiling__CloneProcInfo_38);
        }
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(ll_backend__deep_profiling__TypeCtorInfo_70_70, ll_backend__deep_profiling__ProcId_7, ((MR_Box) (ll_backend__deep_profiling__ProcInfo_37)), ll_backend__deep_profiling__ProcTable0_12, &ll_backend__deep_profiling__ProcTable1_39);
        }
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(ll_backend__deep_profiling__TypeCtorInfo_70_70, ll_backend__deep_profiling__CloneProcId_21, ((MR_Box) (ll_backend__deep_profiling__CloneProcInfo_38)), ll_backend__deep_profiling__ProcTable1_39, &ll_backend__deep_profiling__ProcTable_40);
        }
        {
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ll_backend__deep_profiling__ProcTable_40, ll_backend__deep_profiling__PredInfo0_9, &ll_backend__deep_profiling__PredInfo_41);
        }
        {
          mercury__map__det_update_4_p_0(ll_backend__deep_profiling__TypeCtorInfo_67_67, ll_backend__deep_profiling__TypeCtorInfo_68_68, ((MR_Box) (ll_backend__deep_profiling__PredId_6)), ((MR_Box) (ll_backend__deep_profiling__PredInfo_41)), ll_backend__deep_profiling__PredTable0_8, &ll_backend__deep_profiling__PredTable_42);
        }
        {
          hlds__hlds_module__module_info_set_preds_3_p_0(ll_backend__deep_profiling__PredTable_42, ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_0_43, ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_44);
        }
      }
    else
      *ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_44 = ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_0_43;
  }
}

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_transform_to_scc_3_p_0(
  MR_Word ll_backend__deep_profiling__SCC_4,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_8)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__PredProcId_6;
    MR_Box ll_backend__deep_profiling__conv0_PredProcId_6;

    {
      ll_backend__deep_profiling__succeeded = mercury__set__is_singleton_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ll_backend__deep_profiling__SCC_4, &ll_backend__deep_profiling__conv0_PredProcId_6);
    }
    if (ll_backend__deep_profiling__succeeded)
      {
        ll_backend__deep_profiling__PredProcId_6 = ((MR_Word) ll_backend__deep_profiling__conv0_PredProcId_6);
        ll_backend__deep_profiling__succeeded = MR_TRUE;
      }
    if (ll_backend__deep_profiling__succeeded)
      {
        ll_backend__deep_profiling__apply_deep_prof_tail_rec_transform_to_proc_3_p_0(ll_backend__deep_profiling__PredProcId_6, ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_0_7, ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_8);
      }
    else
      *ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_8 = ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_0_7;
  }
}

void MR_CALL 
ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_p_0(
  MR_Word ll_backend__deep_profiling__ModuleInfo_6,
  MR_String ll_backend__deep_profiling__Name_7,
  MR_Integer ll_backend__deep_profiling__Arity_8,
  MR_Word * ll_backend__deep_profiling__PredId_9,
  MR_Integer * ll_backend__deep_profiling__ProcId_10)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__ModuleName_11;
    MR_Word ll_backend__deep_profiling__PredTable_12;
    MR_Word ll_backend__deep_profiling__PredIds_13;

    {
      ll_backend__deep_profiling__ModuleName_11 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
    }
    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(ll_backend__deep_profiling__ModuleInfo_6, &ll_backend__deep_profiling__PredTable_12);
    }
    {
      hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(ll_backend__deep_profiling__PredTable_12, (MR_Integer) 0, ll_backend__deep_profiling__ModuleName_11, ll_backend__deep_profiling__Name_7, ll_backend__deep_profiling__Arity_8, &ll_backend__deep_profiling__PredIds_13);
    }
    if ((ll_backend__deep_profiling__PredIds_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.get_deep_profile_builtin_ppid\'/5", (MR_String) "no pred_id");
          return;
        }
      }
    else
      {
        MR_Word ll_backend__deep_profiling__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__PredIds_13, (MR_Integer) 1)));
        MR_Word ll_backend__deep_profiling__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__PredIds_13, (MR_Integer) 0)));

        if ((ll_backend__deep_profiling__Var_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word ll_backend__deep_profiling__Preds_14;
            MR_Word ll_backend__deep_profiling__PredInfo_15;
            MR_Word ll_backend__deep_profiling__ProcIds_16;
            MR_Box ll_backend__deep_profiling__conv0_PredInfo_15;

            *ll_backend__deep_profiling__PredId_9 = ll_backend__deep_profiling__Var_43;
            {
              hlds__pred_table__predicate_table_get_preds_2_p_0(ll_backend__deep_profiling__PredTable_12, &ll_backend__deep_profiling__Preds_14);
            }
            {
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ll_backend__deep_profiling__Preds_14, ((MR_Box) (*ll_backend__deep_profiling__PredId_9)), &ll_backend__deep_profiling__conv0_PredInfo_15);
            }
            ll_backend__deep_profiling__PredInfo_15 = ((MR_Word) ll_backend__deep_profiling__conv0_PredInfo_15);
            {
              ll_backend__deep_profiling__ProcIds_16 = hlds__hlds_pred__pred_info_procids_1_f_0(ll_backend__deep_profiling__PredInfo_15);
            }
            if ((ll_backend__deep_profiling__ProcIds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.get_deep_profile_builtin_ppid\'/5", (MR_String) "no proc_id");
                  return;
                }
              }
            else
              {
                MR_Word ll_backend__deep_profiling__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__ProcIds_16, (MR_Integer) 1)));
                MR_Integer ll_backend__deep_profiling__Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__ProcIds_16, (MR_Integer) 0)));

                if ((ll_backend__deep_profiling__Var_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  *ll_backend__deep_profiling__ProcId_10 = ll_backend__deep_profiling__Var_45;
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.get_deep_profile_builtin_ppid\'/5", (MR_String) "proc_id not unique");
                      return;
                    }
                  }
              }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.get_deep_profile_builtin_ppid\'/5", (MR_String) "pred_id not unique");
              return;
            }
          }
      }
  }
}

void MR_CALL 
ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(
  MR_Word ll_backend__deep_profiling__ConsId_4,
  MR_Word ll_backend__deep_profiling__Var_5,
  MR_Word * ll_backend__deep_profiling__Goal_6)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__Unification_9;
    MR_Word ll_backend__deep_profiling__GoalExpr_10;
    MR_Word ll_backend__deep_profiling__NonLocals_11;
    MR_Word ll_backend__deep_profiling__InstMapDelta_12;
    MR_Word ll_backend__deep_profiling__GoalInfo1_13;
    MR_Word ll_backend__deep_profiling__GoalInfo_14;
    MR_Word ll_backend__deep_profiling__Var_26;

    {
      ll_backend__deep_profiling__Unification_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Unification_9, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_5));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Unification_9, 1) = ((MR_Box) (ll_backend__deep_profiling__ConsId_4));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Unification_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Unification_9, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Unification_9, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Unification_9, 5) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Unification_9, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__deep_profiling__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_26, 0) = ((MR_Box) (ll_backend__deep_profiling__ConsId_4));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_26, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Var_26, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__deep_profiling__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr_10, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_5));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr_10, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_26));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr_10, 2) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_2[8]));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr_10, 3) = ((MR_Box) (ll_backend__deep_profiling__Unification_9));
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr_10, 4) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_2[9]));
    }
    {
      ll_backend__deep_profiling__NonLocals_11 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__Var_5);
    }
    {
      ll_backend__deep_profiling__InstMapDelta_12 = hlds__instmap__instmap_delta_bind_var_1_f_0(ll_backend__deep_profiling__Var_5);
    }
    {
      hlds__hlds_goal__goal_info_init_5_p_0(ll_backend__deep_profiling__NonLocals_11, ll_backend__deep_profiling__InstMapDelta_12, (MR_Integer) 0, (MR_Integer) 0, &ll_backend__deep_profiling__GoalInfo1_13);
    }
    {
      hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ll_backend__deep_profiling__GoalInfo1_13, &ll_backend__deep_profiling__GoalInfo_14);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__deep_profiling__Goal_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_14));
    }
  }
}

void MR_CALL 
ll_backend__deep_profiling__generate_deep_call_7_p_0(
  MR_Word ll_backend__deep_profiling__ModuleInfo_8,
  MR_String ll_backend__deep_profiling__Name_9,
  MR_Integer ll_backend__deep_profiling__Arity_10,
  MR_Word ll_backend__deep_profiling__ArgVars_11,
  MR_Word ll_backend__deep_profiling__MaybeOutputVars_12,
  MR_Word ll_backend__deep_profiling__Detism_13,
  MR_Word * ll_backend__deep_profiling__Goal_14)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__PredId_15;
    MR_Integer ll_backend__deep_profiling__ProcId_16;
    MR_Word ll_backend__deep_profiling__NonLocals_17;
    MR_Word ll_backend__deep_profiling__InstMapDelta_19;
    MR_Word ll_backend__deep_profiling__SymName_20;
    MR_Word ll_backend__deep_profiling__GoalExpr_21;
    MR_Word ll_backend__deep_profiling__GoalInfo1_22;
    MR_Word ll_backend__deep_profiling__GoalInfo_23;

    {
      ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_p_0(ll_backend__deep_profiling__ModuleInfo_8, ll_backend__deep_profiling__Name_9, ll_backend__deep_profiling__Arity_10, &ll_backend__deep_profiling__PredId_15, &ll_backend__deep_profiling__ProcId_16);
    }
    {
      ll_backend__deep_profiling__NonLocals_17 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__ArgVars_11);
    }
    if ((ll_backend__deep_profiling__MaybeOutputVars_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        hlds__instmap__instmap_delta_init_unreachable_1_p_0(&ll_backend__deep_profiling__InstMapDelta_19);
      }
    else
      {
        MR_Word ll_backend__deep_profiling__OutputVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeOutputVars_12, (MR_Integer) 0)));

        {
          ll_backend__deep_profiling__InstMapDelta_19 = hlds__instmap__instmap_delta_bind_vars_1_f_0(ll_backend__deep_profiling__OutputVars_18);
        }
      }
    {
      ll_backend__deep_profiling__SymName_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__SymName_20, 0) = ((MR_Box) (ll_backend__deep_profiling__Name_9));
    }
    {
      ll_backend__deep_profiling__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_21, 0) = ((MR_Box) (ll_backend__deep_profiling__PredId_15));
      MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_21, 1) = ((MR_Box) (ll_backend__deep_profiling__ProcId_16));
      MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_21, 2) = ((MR_Box) (ll_backend__deep_profiling__ArgVars_11));
      MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_21, 3) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_21, 5) = ((MR_Box) (ll_backend__deep_profiling__SymName_20));
    }
    {
      ll_backend__deep_profiling__GoalInfo1_22 = hlds__hlds_goal__impure_init_goal_info_3_f_0(ll_backend__deep_profiling__NonLocals_17, ll_backend__deep_profiling__InstMapDelta_19, ll_backend__deep_profiling__Detism_13);
    }
    {
      hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ll_backend__deep_profiling__GoalInfo1_22, &ll_backend__deep_profiling__GoalInfo_23);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__deep_profiling__Goal_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_21));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_23));
    }
  }
}

void MR_CALL 
ll_backend__deep_profiling__generate_var_5_p_0(
  MR_String ll_backend__deep_profiling__Name_6,
  MR_Word ll_backend__deep_profiling__Type_7,
  MR_Word * ll_backend__deep_profiling__Var_8,
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_12,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_13)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_12, (MR_Integer) 0)));
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_12, (MR_Integer) 1)));
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_16;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_17;

    {
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__Name_6, ll_backend__deep_profiling__Var_8, ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_14, &ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_16);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(*ll_backend__deep_profiling__Var_8, ll_backend__deep_profiling__Type_7, ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_15, &ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_17);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_17));
    }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0_2(
  MR_Box ll_backend__deep_profiling__closure_arg,
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box ll_backend__deep_profiling__wrapper_arg_2,
  MR_Box * ll_backend__deep_profiling__wrapper_arg_3)
{
  {
    MR_Box ll_backend__deep_profiling__closure = ll_backend__deep_profiling__closure_arg;
    MR_Word ll_backend__deep_profiling__conv2_STATE_VARIABLE_PredMap_14;

    {
      ll_backend__deep_profiling__deep_prof_transform_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__deep_profiling__wrapper_arg_1), ((MR_Word) ll_backend__deep_profiling__wrapper_arg_2), &ll_backend__deep_profiling__conv2_STATE_VARIABLE_PredMap_14);
    }
    *ll_backend__deep_profiling__wrapper_arg_3 = ((MR_Box) (ll_backend__deep_profiling__conv2_STATE_VARIABLE_PredMap_14));
  }
}

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0_1(
  MR_Box ll_backend__deep_profiling__closure_arg,
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
  MR_Box ll_backend__deep_profiling__wrapper_arg_2,
  MR_Box * ll_backend__deep_profiling__wrapper_arg_3)
{
  {
    MR_Box ll_backend__deep_profiling__closure = ll_backend__deep_profiling__closure_arg;
    MR_Word ll_backend__deep_profiling__conv0_STATE_VARIABLE_ModuleInfo_8;

    {
      ll_backend__deep_profiling__apply_deep_prof_tail_rec_transform_to_scc_3_p_0(((MR_Word) ll_backend__deep_profiling__wrapper_arg_1), ((MR_Word) ll_backend__deep_profiling__wrapper_arg_2), &ll_backend__deep_profiling__conv0_STATE_VARIABLE_ModuleInfo_8);
    }
    *ll_backend__deep_profiling__wrapper_arg_3 = ((MR_Box) (ll_backend__deep_profiling__conv0_STATE_VARIABLE_ModuleInfo_8));
  }
}

void MR_CALL 
ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0(
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_12)
{
  {
    MR_bool ll_backend__deep_profiling__succeeded;
    MR_Word ll_backend__deep_profiling__Globals_4;
    MR_Word ll_backend__deep_profiling__TailRecursion_5;
    MR_Word ll_backend__deep_profiling__PredIds_6;
    MR_Word ll_backend__deep_profiling__PredTable0_7;
    MR_Word ll_backend__deep_profiling__PredMap0_8;
    MR_Word ll_backend__deep_profiling__PredMap_9;
    MR_Word ll_backend__deep_profiling__PredTable_10;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_14_14;
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_16_16;
    MR_Word ll_backend__deep_profiling__Var_17;
    MR_Box ll_backend__deep_profiling__conv3_PredMap_9;

    {
      transform_hlds__dead_proc_elim__dead_proc_elim_3_p_0((MR_Integer) 0, ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_0_11, &ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_14_14);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_14_14, &ll_backend__deep_profiling__Globals_4);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__deep_profiling__Globals_4, (MR_Integer) 221, &ll_backend__deep_profiling__TailRecursion_5);
    }
    switch (ll_backend__deep_profiling__TailRecursion_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_16_16 = ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_14_14;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__deep_profiling__DepInfo_27;
          MR_Word ll_backend__deep_profiling__SCCs_28;
          MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_8_29;
          MR_Box ll_backend__deep_profiling__conv1_STATE_VARIABLE_ModuleInfo_16_16;

          {
            hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_14_14, &ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_8_29, &ll_backend__deep_profiling__DepInfo_27);
          }
          {
            ll_backend__deep_profiling__SCCs_28 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ll_backend__deep_profiling__DepInfo_27);
          }
          {
            mercury__list__foldl_4_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &ll_backend__deep_profiling_scalar_common_1[5], ll_backend__deep_profiling__SCCs_28, ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_8_29)), &ll_backend__deep_profiling__conv1_STATE_VARIABLE_ModuleInfo_16_16);
          }
          ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_16_16 = ((MR_Word) ll_backend__deep_profiling__conv1_STATE_VARIABLE_ModuleInfo_16_16);
        }
        break;
    }
    {
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_16_16, &ll_backend__deep_profiling__PredIds_6);
    }
    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_16_16, &ll_backend__deep_profiling__PredTable0_7);
    }
    {
      hlds__pred_table__predicate_table_get_preds_2_p_0(ll_backend__deep_profiling__PredTable0_7, &ll_backend__deep_profiling__PredMap0_8);
    }
    {
      ll_backend__deep_profiling__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_17, 0) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_17, 1) = ((MR_Box) (ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0_2));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Var_17, 3) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_16_16));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &ll_backend__deep_profiling_scalar_common_1[0], ll_backend__deep_profiling__Var_17, ll_backend__deep_profiling__PredIds_6, ((MR_Box) (ll_backend__deep_profiling__PredMap0_8)), &ll_backend__deep_profiling__conv3_PredMap_9);
    }
    ll_backend__deep_profiling__PredMap_9 = ((MR_Word) ll_backend__deep_profiling__conv3_PredMap_9);
    {
      hlds__pred_table__predicate_table_set_preds_3_p_0(ll_backend__deep_profiling__PredMap_9, ll_backend__deep_profiling__PredTable0_7, &ll_backend__deep_profiling__PredTable_10);
    }
    {
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(ll_backend__deep_profiling__PredTable_10, ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_16_16, ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_12);
    }
  }
}

void mercury__ll_backend__deep_profiling__init(void)
{
}

void mercury__ll_backend__deep_profiling__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_call_class_0);
	MR_register_type_ctor_info(&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0);
	MR_register_type_ctor_info(&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_prof_tail_rec_info_0);
}

void mercury__ll_backend__deep_profiling__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__deep_profiling__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.deep_profiling. */
