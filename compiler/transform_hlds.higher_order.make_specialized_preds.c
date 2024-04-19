/*
** Automatically generated from `higher_order.make_specialized_preds.m'
** by the Mercury compiler,
** version rotd-2024-04-19
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


// :- module transform_hlds.higher_order.make_specialized_preds.
// :- implementation.

/*
INIT mercury__transform_hlds__higher_order__make_specialized_preds__init
ENDINIT
*/

#include "transform_hlds.higher_order.make_specialized_preds.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
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
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_test.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
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
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.var_table_hlds.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_type_unify.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.higher_order.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.higher_order.higher_order_global_info.mih"
#include "transform_hlds.higher_order.specialize_calls.mih"



struct transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0_s {
  MR_bool transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded;
  MR_Word transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__OrigPredProcId_59;
  MR_Word transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ParentVersions_67;
  MR_Integer transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ArgDepth_68;
  jmp_buf transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__commit_0;
  MR_Integer transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__OldArgDepth_69;
  MR_Word transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ParentVersion_73;
  MR_Word transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__Var_87;
  MR_Box transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__conv3_ParentVersion_73;
};

struct transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0_s {
  MR_Word transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6;
  MR_bool transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded;
  MR_Word transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__SpecVersions_22;
  MR_Word transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Params_23;
  MR_Word transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__ModuleInfo_24;
  jmp_buf transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__commit_0;
  MR_Word transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Version_26;
  MR_Box transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__conv1_Version_26;
};

struct transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0_s {
  MR_bool transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__succeeded;
  MR_Word transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25;
  MR_Word transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__SpecVersions_56;
  MR_Word transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Params_57;
  MR_Word transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__ModuleInfo_58;
  jmp_buf transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__commit_0;
  MR_Word transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Version_60;
  MR_Box transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__conv1_Version_60;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__higher_order__make_specialized_preds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__higher_order__make_specialized_preds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__make_specialized_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__higher_order__make_specialized_preds__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__make_specialized_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__higher_order__make_specialized_preds__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__higher_order__make_specialized_preds__maybe__pti_maybe_1__plain_io__type_ctor_info_text_output_stream_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__higher_order__make_specialized_preds__list__pti_list_1__plain_transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__higher_order__make_specialized_preds__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__higher_order__make_specialized_preds__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0;

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__IntroducedFrom__pred__specialize_and_add_new_proc__609__1_4_p_0(
  MR_Word LambdaHeadVar__1_136,
  MR_Word LambdaHeadVar__2_137,
  MR_Word LambdaHeadVar__3_138,
  MR_Word * LambdaHeadVar__4_139);

static MR_bool MR_CALL 
transform_hlds__higher_order__make_specialized_preds__IntroducedFrom__pred__specialize_and_add_new_proc__548__1_2_p_0(
  MR_Word LambdaHeadVar__1_125,
  MR_Word * LambdaHeadVar__2_126);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__substitute_rtti_var_info_3_p_0(
  MR_Word Subn_4,
  MR_Word RttiVarInfo0_5,
  MR_Word * RttiVarInfo_6);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__substitute_higher_order_arg_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__substitute_higher_order_arg_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__substitute_higher_order_arg_3_p_0(
  MR_Word Subn_4,
  MR_Word STATE_VARIABLE_HOArg_0_12,
  MR_Word * STATE_VARIABLE_HOArg_13);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__update_type_info_locn_6_p_0(
  MR_Word Var_7,
  MR_Word ConstraintType_8,
  MR_Integer Index_9,
  MR_Integer * HeadVar__4_4,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_29,
  MR_Word * STATE_VARIABLE_RttiVarMaps_30);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__add_rtti_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__add_rtti_info_4_p_0(
  MR_Word Var_5,
  MR_Word VarInfo_6,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_16,
  MR_Word * STATE_VARIABLE_RttiVarMaps_17);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__update_var_types_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarAndType_6,
  MR_Word STATE_VARIABLE_VarTable_0_16,
  MR_Word * STATE_VARIABLE_VarTable_17);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__ho_fixup_pred_6_p_0(
  MR_Word MustRecompute_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Requests_0_13,
  MR_Word * STATE_VARIABLE_Requests_14,
  MR_Word STATE_VARIABLE_GlobalInfo_0_15,
  MR_Word * STATE_VARIABLE_GlobalInfo_16);

static MR_Word MR_CALL 
transform_hlds__higher_order__make_specialized_preds__get_np_version_ppid_1_f_0(
  MR_Word NewPred_3);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0(
  MR_Word MaybeProgressStream_10,
  MR_Word GlobalInfo_11,
  MR_Word Request_12,
  MR_Word STATE_VARIABLE_AcceptedRequests_0_34,
  MR_Word * STATE_VARIABLE_AcceptedRequests_35,
  MR_Word STATE_VARIABLE_LoopRequests_0_36,
  MR_Word * STATE_VARIABLE_LoopRequests_37);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__maybe_report_specialized_8_p_0(
  MR_Word MaybeProgressStream_9,
  MR_Word ModuleInfo_10,
  MR_Word PredInfo_11,
  MR_String Preamble_12,
  MR_Word HOArgs_13,
  MR_Word Context_14);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0(
  MR_Word GlobalInfo_5,
  MR_Word Request_6,
  MR_Word STATE_VARIABLE_PredProcIdsToFix_0_9,
  MR_Word * STATE_VARIABLE_PredProcIdsToFix_10);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0(
  MR_Word MaybeProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_NewPreds_0_3,
  MR_Word * STATE_VARIABLE_NewPreds_4,
  MR_Word STATE_VARIABLE_PredsToFix_0_5,
  MR_Word * STATE_VARIABLE_PredsToFix_6,
  MR_Word STATE_VARIABLE_GlobalInfo_0_7,
  MR_Word * STATE_VARIABLE_GlobalInfo_8);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__create_new_ho_spec_pred_7_p_0(
  MR_Word MaybeProgressStream_8,
  MR_Word Request_9,
  MR_Word * NewPred_10,
  MR_Word STATE_VARIABLE_GlobalInfo_0_60,
  MR_Word * STATE_VARIABLE_GlobalInfo_61);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__write_request_9_p_0(
  MR_Word OutputStream_10,
  MR_Word ModuleInfo_11,
  MR_Word PredInfo_12,
  MR_String Msg_13,
  MR_Word MaybeNewName_14,
  MR_Word HOArgs_15,
  MR_Word Context_16);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__output_higher_order_args_7_p_0(
  MR_Word OutputStream_1,
  MR_Word ModuleInfo_2,
  MR_Integer NumToDrop_3,
  MR_Unsigned Indent_4,
  MR_Word HeadVar__5_5);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0(
  MR_Word NewPred_7,
  MR_Word STATE_VARIABLE_NewProcInfo_0_119,
  MR_Word STATE_VARIABLE_NewPredInfo_0_120,
  MR_Word * STATE_VARIABLE_NewPredInfo_121,
  MR_Word STATE_VARIABLE_GlobalInfo_0_122,
  MR_Word * STATE_VARIABLE_GlobalInfo_123);

static MR_Box MR_CALL 
transform_hlds__higher_order__make_specialized_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_116_101_114_109_115_95_95_91_52_93_95_48_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_116_101_114_109_115_95_95_91_52_93_95_48_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_116_101_114_109_115_95_95_91_52_93_95_48_13_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVars0_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_7,
  MR_Word * STATE_VARIABLE_ProcInfo_8,
  MR_Word STATE_VARIABLE_Renaming_0_9,
  MR_Word * STATE_VARIABLE_Renaming_10,
  MR_Word STATE_VARIABLE_KnownVarMap_0_11,
  MR_Word * STATE_VARIABLE_KnownVarMap_12,
  MR_Word * HeadVar__13_13);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__find_class_context_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarInfos_6,
  MR_Word Modes_7,
  MR_Word * Constraints_8);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__acc_class_context_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevUniv_0_4,
  MR_Word * STATE_VARIABLE_RevUniv_5,
  MR_Word STATE_VARIABLE_RevExist_0_6,
  MR_Word * STATE_VARIABLE_RevExist_7);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__construct_created_spec_name_status_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Request_11,
  MR_Word PredInfo0_12,
  MR_String * SpecName_13,
  MR_Word * Origin_14,
  MR_Word * PredStatus_15,
  MR_Integer * NewProcId_16,
  MR_Word STATE_VARIABLE_GlobalInfo_0_38,
  MR_Word * STATE_VARIABLE_GlobalInfo_39);


static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_2[7][3];

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_3[1][1];

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_4[5][7];

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_5[5][6];

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_6[3][5];

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_7[1][12];

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_8[2][9];

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_9[2][4];




static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_1[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_116_101_114_109_115_95_95_91_52_93_95_48_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_6[2])),
    ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_4[5][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0)),
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_5[5][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_is_dummy_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_6[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_7[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds__maybe__pti_maybe_1__plain_io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0)),
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds__list__pti_list_1__plain_transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0)),
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds__list__pti_list_1__plain_transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0)),
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds__list__pti_list_1__plain_transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0)),
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds__list__pti_list_1__plain_transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_8[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_must_recompute_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0)),
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_9[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_7_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__higher_order__make_specialized_preds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__higher_order__make_specialized_preds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__make_specialized_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__higher_order__make_specialized_preds__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__higher_order__make_specialized_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__make_specialized_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__higher_order__make_specialized_preds__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__higher_order__make_specialized_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__higher_order__make_specialized_preds__maybe__pti_maybe_1__plain_io__type_ctor_info_text_output_stream_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__higher_order__make_specialized_preds__list__pti_list_1__plain_transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__higher_order__make_specialized_preds__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__higher_order__make_specialized_preds__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0) }
};

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__IntroducedFrom__pred__specialize_and_add_new_proc__609__1_4_p_0(
  MR_Word LambdaHeadVar__1_136,
  MR_Word LambdaHeadVar__2_137,
  MR_Word LambdaHeadVar__3_138,
  MR_Word * LambdaHeadVar__4_139)
{
  MR_Word Locn_65;

  {
    Locn_65 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Locn_65, 0) = ((MR_Box) (LambdaHeadVar__2_137));
  }
  hlds__hlds_rtti__rtti_set_type_info_locn_4_p_0(LambdaHeadVar__1_136, Locn_65, LambdaHeadVar__3_138, LambdaHeadVar__4_139);
}

static MR_bool MR_CALL 
transform_hlds__higher_order__make_specialized_preds__IntroducedFrom__pred__specialize_and_add_new_proc__548__1_2_p_0(
  MR_Word LambdaHeadVar__1_125,
  MR_Word * LambdaHeadVar__2_126)
{
  MR_bool succeeded = ((MR_tag((MR_Word) LambdaHeadVar__1_125)) == (MR_Integer) 0);

  if (succeeded)
    *LambdaHeadVar__2_126 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_125, (MR_Integer) 0))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__substitute_rtti_var_info_3_p_0(
  MR_Word Subn_4,
  MR_Word RttiVarInfo0_5,
  MR_Word * RttiVarInfo_6)
{
  switch (MR_tag((MR_Word) RttiVarInfo0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *RttiVarInfo_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word Type0_7 = ((MR_Word) ((MR_hl_field(1, RttiVarInfo0_5, (MR_Integer) 0))));
        MR_Word Type_8;

        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(Subn_4, Type0_7, &Type_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *RttiVarInfo_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Type_8));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Constraint0_9 = ((MR_Word) ((MR_hl_field(2, RttiVarInfo0_5, (MR_Integer) 0))));
        MR_Word Constraint_10;

        parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(Subn_4, Constraint0_9, &Constraint_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *RttiVarInfo_6 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (Constraint_10));
        }
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__substitute_higher_order_arg_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_HOArg_13;

  transform_hlds__higher_order__make_specialized_preds__substitute_higher_order_arg_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_HOArg_13);
  *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_HOArg_13));
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__substitute_higher_order_arg_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_RttiVarInfo_6;

  transform_hlds__higher_order__make_specialized_preds__substitute_rtti_var_info_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_RttiVarInfo_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_RttiVarInfo_6));
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__substitute_higher_order_arg_3_p_0(
  MR_Word Subn_4,
  MR_Word STATE_VARIABLE_HOArg_0_12,
  MR_Word * STATE_VARIABLE_HOArg_13)
{
  MR_Word CurriedArgTypes0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HOArg_0_12, (MR_Integer) 4))));
  MR_Word CurriedRttiTypes0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HOArg_0_12, (MR_Integer) 5))));
  MR_Word CurriedHOArgs0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HOArg_0_12, (MR_Integer) 6))));
  MR_Word CurriedArgTypes_9;
  MR_Word CurriedRttiTypes_10;
  MR_Word CurriedHOArgs_11;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_39;
  MR_Integer Var_40;
  MR_Integer Var_41;
  MR_Word Var_42;
  MR_Word Var_46;

  parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(Subn_4, CurriedArgTypes0_6, &CurriedArgTypes_9);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_5[4]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__substitute_higher_order_arg_3_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (Subn_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0), Var_14, CurriedRttiTypes0_7, &CurriedRttiTypes_10);
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_5[2]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__substitute_higher_order_arg_3_p_0_2));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (Subn_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0), Var_15, CurriedHOArgs0_8, &CurriedHOArgs_11);
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HOArg_0_12, (MR_Integer) 0))));
  Var_40 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_HOArg_0_12, (MR_Integer) 1))));
  Var_41 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_HOArg_0_12, (MR_Integer) 2))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HOArg_0_12, (MR_Integer) 3))));
  Var_46 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_HOArg_0_12, (MR_Integer) 7))) & (MR_Integer) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_HOArg_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_41));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_42));
    MR_hl_field(0, base, 4) = ((MR_Box) (CurriedArgTypes_9));
    MR_hl_field(0, base, 5) = ((MR_Box) (CurriedRttiTypes_10));
    MR_hl_field(0, base, 6) = ((MR_Box) (CurriedHOArgs_11));
    MR_hl_field(0, base, 7) = (MR_Box) ((MR_Unsigned) (Var_46));
  }
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__update_type_info_locn_6_p_0(
  MR_Word Var_7,
  MR_Word ConstraintType_8,
  MR_Integer Index_9,
  MR_Integer * HeadVar__4_4,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_29,
  MR_Word * STATE_VARIABLE_RttiVarMaps_30)
{
  MR_bool succeeded;

  *HeadVar__4_4 = (MR_Integer) ((MR_Unsigned) Index_9 + (MR_Unsigned) 1);
  switch (MR_tag((MR_Word) ConstraintType_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ConstraintTVar_11 = ((MR_Word) ((MR_hl_field(0, ConstraintType_8, (MR_Integer) 0))));
        MR_Word Var_32;
        MR_Word Var_33;

        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_7));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (Index_9));
        }
        succeeded = hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(STATE_VARIABLE_RttiVarMaps_0_29, ConstraintTVar_11, &Var_33);
        if (succeeded)
          *STATE_VARIABLE_RttiVarMaps_30 = STATE_VARIABLE_RttiVarMaps_0_29;
        else
          hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(ConstraintTVar_11, Var_32, STATE_VARIABLE_RttiVarMaps_0_29, STATE_VARIABLE_RttiVarMaps_30);
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_RttiVarMaps_30 = STATE_VARIABLE_RttiVarMaps_0_29;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_RttiVarMaps_30 = STATE_VARIABLE_RttiVarMaps_0_29;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConstraintType_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_RttiVarMaps_30 = STATE_VARIABLE_RttiVarMaps_0_29;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_RttiVarMaps_30 = STATE_VARIABLE_RttiVarMaps_0_29;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_RttiVarMaps_30 = STATE_VARIABLE_RttiVarMaps_0_29;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_RttiVarMaps_30 = STATE_VARIABLE_RttiVarMaps_0_29;
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__add_rtti_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_HeadVar__4_4;
  MR_Word conv0_STATE_VARIABLE_RttiVarMaps_30;

  transform_hlds__higher_order__make_specialized_preds__update_type_info_locn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_RttiVarMaps_30);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_RttiVarMaps_30));
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__add_rtti_info_4_p_0(
  MR_Word Var_5,
  MR_Word VarInfo_6,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_16,
  MR_Word * STATE_VARIABLE_RttiVarMaps_17)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) VarInfo_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_RttiVarMaps_17 = STATE_VARIABLE_RttiVarMaps_0_16;
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeInfoType_8 = ((MR_Word) ((MR_hl_field(1, VarInfo_6, (MR_Integer) 0))));
        MR_Word STATE_VARIABLE_RttiVarMaps_18_18;
        MR_Word TVar_9;

        hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(Var_5, TypeInfoType_8, STATE_VARIABLE_RttiVarMaps_0_16, &STATE_VARIABLE_RttiVarMaps_18_18);
        succeeded = ((MR_tag((MR_Word) TypeInfoType_8)) == (MR_Integer) 0);
        if (succeeded)
        {
          TVar_9 = ((MR_Word) ((MR_hl_field(0, TypeInfoType_8, (MR_Integer) 0))));
          {
            MR_Word Var_19;
            MR_Word Var_32;

            {
              Var_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_19, 0) = ((MR_Box) (Var_5));
            }
            succeeded = hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(STATE_VARIABLE_RttiVarMaps_18_18, TVar_9, &Var_32);
            if (succeeded)
              *STATE_VARIABLE_RttiVarMaps_17 = STATE_VARIABLE_RttiVarMaps_18_18;
            else
              hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(TVar_9, Var_19, STATE_VARIABLE_RttiVarMaps_18_18, STATE_VARIABLE_RttiVarMaps_17);
          }
        }
        else
          *STATE_VARIABLE_RttiVarMaps_17 = STATE_VARIABLE_RttiVarMaps_18_18;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Constraint_11 = ((MR_Word) ((MR_hl_field(2, VarInfo_6, (MR_Integer) 0))));
        MR_Word Var_12;

        succeeded = hlds__hlds_rtti__rtti_search_typeclass_info_var_3_p_0(STATE_VARIABLE_RttiVarMaps_0_16, Constraint_11, &Var_12);
        if (succeeded)
          *STATE_VARIABLE_RttiVarMaps_17 = STATE_VARIABLE_RttiVarMaps_0_16;
        else
        {
          MR_Word ConstraintArgTypes_14;
          MR_Word STATE_VARIABLE_RttiVarMaps_21_21;
          MR_Word Var_22;
          MR_Box conv3_Var_15;
          MR_Box conv2_STATE_VARIABLE_RttiVarMaps_17;

          hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_p_0(Constraint_11, Var_5, STATE_VARIABLE_RttiVarMaps_0_16, &STATE_VARIABLE_RttiVarMaps_21_21);
          ConstraintArgTypes_14 = ((MR_Word) ((MR_hl_field(0, Constraint_11, (MR_Integer) 1))));
          {
            Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_22, 0) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_8[1]));
            MR_hl_field(0, Var_22, 1) = ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__add_rtti_info_4_p_0_1));
            MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_22, 3) = ((MR_Box) (Var_5));
          }
          mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), Var_22, ConstraintArgTypes_14, ((MR_Box) ((MR_Integer) 1)), &conv3_Var_15, ((MR_Box) (STATE_VARIABLE_RttiVarMaps_21_21)), &conv2_STATE_VARIABLE_RttiVarMaps_17);
          *STATE_VARIABLE_RttiVarMaps_17 = ((MR_Word) (conv2_STATE_VARIABLE_RttiVarMaps_17));
        }
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__update_var_types_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarAndType_6,
  MR_Word STATE_VARIABLE_VarTable_0_16,
  MR_Word * STATE_VARIABLE_VarTable_17)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, VarAndType_6, (MR_Integer) 0))));
  MR_Word Type_9 = ((MR_Word) ((MR_hl_field(0, VarAndType_6, (MR_Integer) 1))));
  MR_Word IsDummy_10;
  MR_Word Entry0_11;
  MR_String Name_12;
  MR_Word Entry_15;

  IsDummy_10 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_5, Type_9);
  parse_tree__var_table__lookup_var_entry_3_p_0(STATE_VARIABLE_VarTable_0_16, Var_8, &Entry0_11);
  Name_12 = ((MR_String) ((MR_hl_field(0, Entry0_11, (MR_Integer) 0))));
  {
    Entry_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_15, 0) = ((MR_Box) (Name_12));
    MR_hl_field(0, Entry_15, 1) = ((MR_Box) (Type_9));
    MR_hl_field(0, Entry_15, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_10));
  }
  parse_tree__var_table__update_var_entry_4_p_0(Var_8, Entry_15, STATE_VARIABLE_VarTable_0_16, STATE_VARIABLE_VarTable_17);
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__ho_fixup_pred_6_p_0(
  MR_Word MustRecompute_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Requests_0_13,
  MR_Word * STATE_VARIABLE_Requests_14,
  MR_Word STATE_VARIABLE_GlobalInfo_0_15,
  MR_Word * STATE_VARIABLE_GlobalInfo_16)
{
  MR_Word PredId_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Integer ProcId_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word NewRequests_12;

  transform_hlds__higher_order__specialize_calls__ho_traverse_proc_6_p_0(MustRecompute_7, PredId_8, ProcId_9, &NewRequests_12, STATE_VARIABLE_GlobalInfo_0_15, STATE_VARIABLE_GlobalInfo_16);
  mercury__set__union_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0), NewRequests_12, STATE_VARIABLE_Requests_0_13, STATE_VARIABLE_Requests_14);
}

static MR_Word MR_CALL 
transform_hlds__higher_order__make_specialized_preds__get_np_version_ppid_1_f_0(
  MR_Word NewPred_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, NewPred_3, (MR_Integer) 0))));

  return HeadVar__2_2;
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ParentVersion_73 = ((MR_Word) ((env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__conv3_ParentVersion_73));
  transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__Var_87 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ParentVersion_73, (MR_Integer) 0))));
  (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__OldArgDepth_69 = ((MR_Integer) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ParentVersion_73, (MR_Integer) 1))));
  (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0((env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__OrigPredProcId_59, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__Var_87);
  if ((env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
  {
    (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ArgDepth_68 >= (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__OldArgDepth_69);
    if ((env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
      transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_parent_version_info_0), &(env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__conv3_ParentVersion_73, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ParentVersions_67, transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_3, env_ptr);
      (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0(
  MR_Word MaybeProgressStream_10,
  MR_Word GlobalInfo_11,
  MR_Word Request_12,
  MR_Word STATE_VARIABLE_AcceptedRequests_0_34,
  MR_Word * STATE_VARIABLE_AcceptedRequests_35,
  MR_Word STATE_VARIABLE_LoopRequests_0_36,
  MR_Word * STATE_VARIABLE_LoopRequests_37)
{
  struct transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0_s env;

  {
    MR_Word ModuleInfo_16;
    MR_Word CalleePredProcId_18;
    MR_Word HOArgs_21;
    MR_Word RequestKind_24;
    MR_Word Context_25;
    MR_Word CalleePredId_26;
    MR_Word CalleePredInfo_28;
    MR_Word Var_17;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Unsigned packed_word_0;
    MR_Integer Var_27;

    ModuleInfo_16 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(GlobalInfo_11);
    Var_17 = ((MR_Word) ((MR_hl_field(0, Request_12, (MR_Integer) 0))));
    CalleePredProcId_18 = ((MR_Word) ((MR_hl_field(0, Request_12, (MR_Integer) 1))));
    Var_19 = ((MR_Word) ((MR_hl_field(0, Request_12, (MR_Integer) 2))));
    Var_20 = ((MR_Word) ((MR_hl_field(0, Request_12, (MR_Integer) 3))));
    HOArgs_21 = ((MR_Word) ((MR_hl_field(0, Request_12, (MR_Integer) 4))));
    Var_22 = ((MR_Word) ((MR_hl_field(0, Request_12, (MR_Integer) 5))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Request_12, (MR_Integer) 6)));
    Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, Request_12, (MR_Integer) 6))) >> 1)) & (MR_Integer) 1);
    RequestKind_24 = ((MR_Unsigned) ((MR_hl_field(0, Request_12, (MR_Integer) 6))) & (MR_Integer) 1);
    Context_25 = ((MR_Word) ((MR_hl_field(0, Request_12, (MR_Integer) 7))));
    CalleePredId_26 = ((MR_Word) ((MR_hl_field(0, CalleePredProcId_18, (MR_Integer) 0))));
    Var_27 = ((MR_Integer) ((MR_hl_field(0, CalleePredProcId_18, (MR_Integer) 1))));
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_16, CalleePredId_26, &CalleePredInfo_28);
    switch (RequestKind_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word GoalSizeMap_30;
          MR_Integer GoalSize_32;
          MR_Integer GoalSize0_31;
          MR_Box conv0_GoalSize0_31;
          MR_String Msg_33;
          MR_Word STATE_VARIABLE_LoopRequests_42_42;
          MR_Word Params_47;
          MR_Word CallerPredProcId_48;
          MR_Word CalleePredProcId_49;
          MR_Word HOArgs_52;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Unsigned packed_word_1;
          MR_Integer Var_70;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Integer Var_77;
          MR_Unsigned packed_word_2;

          GoalSizeMap_30 = transform_hlds__higher_order__higher_order_global_info__hogi_get_goal_size_map_1_f_0(GlobalInfo_11);
          (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), GoalSizeMap_30, ((MR_Box) (CalleePredId_26)), &conv0_GoalSize0_31);
          if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
          {
            GoalSize0_31 = ((MR_Integer) (conv0_GoalSize0_31));
            (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = MR_TRUE;
          }
          if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
            GoalSize_32 = GoalSize0_31;
          else
            GoalSize_32 = (MR_Integer) 0;
          Params_47 = transform_hlds__higher_order__higher_order_global_info__hogi_get_params_1_f_0(GlobalInfo_11);
          CallerPredProcId_48 = ((MR_Word) ((MR_hl_field(0, Request_12, (MR_Integer) 0))));
          CalleePredProcId_49 = ((MR_Word) ((MR_hl_field(0, Request_12, (MR_Integer) 1))));
          Var_50 = ((MR_Word) ((MR_hl_field(0, Request_12, (MR_Integer) 2))));
          Var_51 = ((MR_Word) ((MR_hl_field(0, Request_12, (MR_Integer) 3))));
          HOArgs_52 = ((MR_Word) ((MR_hl_field(0, Request_12, (MR_Integer) 4))));
          Var_53 = ((MR_Word) ((MR_hl_field(0, Request_12, (MR_Integer) 5))));
          packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Request_12, (MR_Integer) 6)));
          Var_54 = ((((MR_Unsigned) ((MR_hl_field(0, Request_12, (MR_Integer) 6))) >> 1)) & (MR_Integer) 1);
          Var_55 = ((MR_Unsigned) ((MR_hl_field(0, Request_12, (MR_Integer) 6))) & (MR_Integer) 1);
          Var_56 = ((MR_Word) ((MR_hl_field(0, Request_12, (MR_Integer) 7))));
          packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, Params_47, (MR_Integer) 0)));
          Var_74 = ((((MR_Unsigned) ((MR_hl_field(0, Params_47, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
          Var_75 = ((((MR_Unsigned) ((MR_hl_field(0, Params_47, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
          Var_76 = ((MR_Unsigned) ((MR_hl_field(0, Params_47, (MR_Integer) 0))) & (MR_Integer) 1);
          Var_70 = ((MR_Integer) ((MR_hl_field(0, Params_47, (MR_Integer) 1))));
          Var_77 = ((MR_Integer) ((MR_hl_field(0, Params_47, (MR_Integer) 2))));
          (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = (GoalSize_32 > Var_70);
          if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
          {
            Msg_33 = (MR_String) "goal too large";
            STATE_VARIABLE_LoopRequests_42_42 = STATE_VARIABLE_LoopRequests_0_36;
            (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = MR_TRUE;
          }
          else
          {
            MR_Integer Var_71;
            MR_Integer Var_72;
            MR_Word Var_78;
            MR_Word Var_79;
            MR_Word Var_80;
            MR_Integer Var_81;
            MR_Unsigned packed_word_3;

            Var_71 = transform_hlds__higher_order__higher_order_global_info__higher_order_max_args_size_1_f_0(HOArgs_52);
            packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, Params_47, (MR_Integer) 0)));
            Var_78 = ((((MR_Unsigned) ((MR_hl_field(0, Params_47, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
            Var_79 = ((((MR_Unsigned) ((MR_hl_field(0, Params_47, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
            Var_80 = ((MR_Unsigned) ((MR_hl_field(0, Params_47, (MR_Integer) 0))) & (MR_Integer) 1);
            Var_81 = ((MR_Integer) ((MR_hl_field(0, Params_47, (MR_Integer) 1))));
            Var_72 = ((MR_Integer) ((MR_hl_field(0, Params_47, (MR_Integer) 2))));
            (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = (Var_71 > Var_72);
            if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
            {
              Msg_33 = (MR_String) "args too large";
              STATE_VARIABLE_LoopRequests_42_42 = STATE_VARIABLE_LoopRequests_0_36;
              (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = MR_TRUE;
            }
            else
            {
              MR_Word VersionInfoMap_57;
              MR_Word CallerVersionInfo_63;
              MR_Word CalleeVersionInfo_58;
              MR_Box conv1_CalleeVersionInfo_58;
              MR_Box conv2_CallerVersionInfo_63;
              MR_Word Var_64;
              MR_Integer Var_65;
              MR_Word Var_66;

              VersionInfoMap_57 = transform_hlds__higher_order__higher_order_global_info__hogi_get_version_info_map_1_f_0(GlobalInfo_11);
              (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0), VersionInfoMap_57, ((MR_Box) (CalleePredProcId_49)), &conv1_CalleeVersionInfo_58);
              if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
              {
                CalleeVersionInfo_58 = ((MR_Word) (conv1_CalleeVersionInfo_58));
                (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = MR_TRUE;
              }
              if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
              {
                MR_Integer Var_60;
                MR_Word Var_61;
                MR_Word Var_62;

                (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__OrigPredProcId_59 = ((MR_Word) ((MR_hl_field(0, CalleeVersionInfo_58, (MR_Integer) 0))));
                Var_60 = ((MR_Integer) ((MR_hl_field(0, CalleeVersionInfo_58, (MR_Integer) 1))));
                Var_61 = ((MR_Word) ((MR_hl_field(0, CalleeVersionInfo_58, (MR_Integer) 2))));
                Var_62 = ((MR_Word) ((MR_hl_field(0, CalleeVersionInfo_58, (MR_Integer) 3))));
              }
              else
                (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__OrigPredProcId_59 = CalleePredProcId_49;
              (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0), VersionInfoMap_57, ((MR_Box) (CallerPredProcId_48)), &conv2_CallerVersionInfo_63);
              if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
              {
                CallerVersionInfo_63 = ((MR_Word) (conv2_CallerVersionInfo_63));
                (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = MR_TRUE;
              }
              if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
              {
                Var_64 = ((MR_Word) ((MR_hl_field(0, CallerVersionInfo_63, (MR_Integer) 0))));
                Var_65 = ((MR_Integer) ((MR_hl_field(0, CallerVersionInfo_63, (MR_Integer) 1))));
                Var_66 = ((MR_Word) ((MR_hl_field(0, CallerVersionInfo_63, (MR_Integer) 2))));
                (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ParentVersions_67 = ((MR_Word) ((MR_hl_field(0, CallerVersionInfo_63, (MR_Integer) 3))));
                (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ArgDepth_68 = transform_hlds__higher_order__higher_order_global_info__higher_order_max_args_depth_1_f_0(HOArgs_52);
                transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_4(&env);
                if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
                {
                  Msg_33 = (MR_String) "recursive specialization";
                  {
                    STATE_VARIABLE_LoopRequests_42_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_LoopRequests_42_42, 0) = ((MR_Box) (Request_12));
                    MR_hl_field(1, STATE_VARIABLE_LoopRequests_42_42, 1) = ((MR_Box) (STATE_VARIABLE_LoopRequests_0_36));
                  }
                  (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = MR_TRUE;
                }
              }
            }
          }
          if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
          {
            *STATE_VARIABLE_LoopRequests_37 = STATE_VARIABLE_LoopRequests_42_42;
            if (!((MaybeProgressStream_10 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word ProgressStream_89 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_10, (MR_Integer) 0))));

              transform_hlds__higher_order__make_specialized_preds__write_request_9_p_0(ProgressStream_89, ModuleInfo_16, CalleePredInfo_28, (MR_String) "Request for", (MR_Word) ((MR_Unsigned) 0U), HOArgs_21, Context_25);
              mercury__io__write_string_4_p_0(ProgressStream_89, (MR_String) "%    request not specialized (");
              mercury__io__write_string_4_p_0(ProgressStream_89, Msg_33);
              mercury__io__write_string_4_p_0(ProgressStream_89, (MR_String) ").\n");
            }
            *STATE_VARIABLE_AcceptedRequests_35 = STATE_VARIABLE_AcceptedRequests_0_34;
          }
          else
          {
            if (!((MaybeProgressStream_10 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word ProgressStream_100 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_10, (MR_Integer) 0))));

              transform_hlds__higher_order__make_specialized_preds__write_request_9_p_0(ProgressStream_100, ModuleInfo_16, CalleePredInfo_28, (MR_String) "Request for", (MR_Word) ((MR_Unsigned) 0U), HOArgs_21, Context_25);
              mercury__io__write_string_4_p_0(ProgressStream_100, (MR_String) "%    request specialized.\n");
            }
            mercury__list__cons_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0), ((MR_Box) (Request_12)), STATE_VARIABLE_AcceptedRequests_0_34, STATE_VARIABLE_AcceptedRequests_35);
            *STATE_VARIABLE_LoopRequests_37 = STATE_VARIABLE_LoopRequests_0_36;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          transform_hlds__higher_order__make_specialized_preds__maybe_report_specialized_8_p_0(MaybeProgressStream_10, ModuleInfo_16, CalleePredInfo_28, (MR_String) "Request for", HOArgs_21, Context_25);
          mercury__list__cons_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0), ((MR_Box) (Request_12)), STATE_VARIABLE_AcceptedRequests_0_34, STATE_VARIABLE_AcceptedRequests_35);
          *STATE_VARIABLE_LoopRequests_37 = STATE_VARIABLE_LoopRequests_0_36;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__maybe_report_specialized_8_p_0(
  MR_Word MaybeProgressStream_9,
  MR_Word ModuleInfo_10,
  MR_Word PredInfo_11,
  MR_String Preamble_12,
  MR_Word HOArgs_13,
  MR_Word Context_14)
{
  if (!((MaybeProgressStream_9 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word ProgressStream_16 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_9, (MR_Integer) 0))));

    transform_hlds__higher_order__make_specialized_preds__write_request_9_p_0(ProgressStream_16, ModuleInfo_10, PredInfo_11, Preamble_12, (MR_Word) ((MR_Unsigned) 0U), HOArgs_13, Context_14);
    mercury__io__write_string_4_p_0(ProgressStream_16, (MR_String) "%    request specialized.\n");
  }
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Version_26 = ((MR_Word) ((env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__conv1_Version_26));
  transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_25;

    (env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded = transform_hlds__higher_order__higher_order_global_info__version_matches_5_p_0((env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Params_23, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__ModuleInfo_24, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Version_26, &Var_25);
    if ((env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded)
      transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__commit_0) == 0)
    {
      mercury__set__member_2_p_1((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0), &(env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__conv1_Version_26, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__SpecVersions_22, transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_3, env_ptr);
      (env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0(
  MR_Word GlobalInfo_5,
  MR_Word Request_6,
  MR_Word STATE_VARIABLE_PredProcIdsToFix_0_9,
  MR_Word * STATE_VARIABLE_PredProcIdsToFix_10)
{
  struct transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0_s env;

  (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6 = Request_6;
  {
    MR_Word NewPredMap_20;
    MR_Word CalleePredProcId_21;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Unsigned packed_word_0;
    MR_Box conv0_SpecVersions_22;

    NewPredMap_20 = transform_hlds__higher_order__higher_order_global_info__hogi_get_new_pred_map_1_f_0(GlobalInfo_5);
    Var_27 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 0))));
    CalleePredProcId_21 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 1))));
    Var_28 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 2))));
    Var_29 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 3))));
    Var_30 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 4))));
    Var_31 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 5))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 6)));
    Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 6))) >> 1)) & (MR_Integer) 1);
    Var_33 = ((MR_Unsigned) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 6))) & (MR_Integer) 1);
    Var_34 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 7))));
    (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), NewPredMap_20, ((MR_Box) (CalleePredProcId_21)), &conv0_SpecVersions_22);
    if ((env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded)
    {
      (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__SpecVersions_22 = ((MR_Word) (conv0_SpecVersions_22));
      (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded = MR_TRUE;
    }
    if ((env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded)
    {
      (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Params_23 = transform_hlds__higher_order__higher_order_global_info__hogi_get_params_1_f_0(GlobalInfo_5);
      (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__ModuleInfo_24 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(GlobalInfo_5);
      transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_4(&env);
    }
    if ((env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded)
    {
      MR_Word CallerPredProcId_8 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 0))));
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 1))));
      MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 2))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 3))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 4))));
      MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 5))));
      MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 6))) >> 1)) & (MR_Integer) 1);
      MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 6))) & (MR_Integer) 1);
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 7))));
      MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 6)));

      mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (CallerPredProcId_8)), STATE_VARIABLE_PredProcIdsToFix_0_9, STATE_VARIABLE_PredProcIdsToFix_10);
    }
    else
      *STATE_VARIABLE_PredProcIdsToFix_10 = STATE_VARIABLE_PredProcIdsToFix_0_9;
  }
}

void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_to_fixpoint_6_p_0(
  MR_Word MaybeProgressStream_7,
  MR_Word Requests0_8,
  MR_Word STATE_VARIABLE_GlobalInfo_0_12,
  MR_Word * STATE_VARIABLE_GlobalInfo_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0), Requests0_8);
    if (succeeded)
      *STATE_VARIABLE_GlobalInfo_13 = STATE_VARIABLE_GlobalInfo_0_12;
    else
    {
      MR_Word Requests1_11;
      MR_Word STATE_VARIABLE_GlobalInfo_16_16;
      MR_Word next_value_of_Requests0_8;
      MR_Word next_value_of_STATE_VARIABLE_GlobalInfo_0_12;

      transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_7_p_0(MaybeProgressStream_7, Requests0_8, &Requests1_11, STATE_VARIABLE_GlobalInfo_0_12, &STATE_VARIABLE_GlobalInfo_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_Requests0_8 = Requests1_11;
      next_value_of_STATE_VARIABLE_GlobalInfo_0_12 = STATE_VARIABLE_GlobalInfo_16_16;
      Requests0_8 = next_value_of_Requests0_8;
      STATE_VARIABLE_GlobalInfo_0_12 = next_value_of_STATE_VARIABLE_GlobalInfo_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_STATE_VARIABLE_Requests_14;
  MR_Word conv12_STATE_VARIABLE_GlobalInfo_16;

  transform_hlds__higher_order__make_specialized_preds__ho_fixup_pred_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_Requests_14, ((MR_Word) (wrapper_arg_4)), &conv12_STATE_VARIABLE_GlobalInfo_16);
  *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_Requests_14));
  *wrapper_arg_5 = ((MR_Box) (conv12_STATE_VARIABLE_GlobalInfo_16));
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_Requests_14;
  MR_Word conv8_STATE_VARIABLE_GlobalInfo_16;

  transform_hlds__higher_order__make_specialized_preds__ho_fixup_pred_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_Requests_14, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_GlobalInfo_16);
  *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_Requests_14));
  *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_GlobalInfo_16));
}

static MR_Box MR_CALL 
transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv7_HeadVar__2_2;

  conv7_HeadVar__2_2 = transform_hlds__higher_order__make_specialized_preds__get_np_version_ppid_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_PredProcIdsToFix_10;

  transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_PredProcIdsToFix_10);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_PredProcIdsToFix_10));
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_AcceptedRequests_35;
  MR_Word conv0_STATE_VARIABLE_LoopRequests_37;

  transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_AcceptedRequests_35, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_LoopRequests_37);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_AcceptedRequests_35));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_LoopRequests_37));
}

void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_7_p_0(
  MR_Word MaybeProgressStream_8,
  MR_Word Requests0_9,
  MR_Word * NewRequests_10,
  MR_Word STATE_VARIABLE_GlobalInfo_0_25,
  MR_Word * STATE_VARIABLE_GlobalInfo_26)
{
  MR_Word Requests_13;
  MR_Word LoopRequests_14;
  MR_Word Var_29;
  MR_Box conv4_Requests_13;
  MR_Box conv3_LoopRequests_14;
  MR_Box conv2_STATE_VARIABLE_IO_32_32;

  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_7[0]));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_7_p_0_1));
    MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_29, 3) = ((MR_Box) (MaybeProgressStream_8));
    MR_hl_field(0, Var_29, 4) = ((MR_Box) (STATE_VARIABLE_GlobalInfo_0_25));
  }
  mercury__set__foldl3_8_p_2((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_29, Requests0_9, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_Requests_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_LoopRequests_14, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_32_32);
  Requests_13 = ((MR_Word) (conv4_Requests_13));
  LoopRequests_14 = ((MR_Word) (conv3_LoopRequests_14));
  if ((Requests_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__set__init_1_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0), NewRequests_10);
    *STATE_VARIABLE_GlobalInfo_26 = STATE_VARIABLE_GlobalInfo_0_25;
  }
  else
  {
    MR_Word PredProcIdsToFix0_17;
    MR_Word NewPredList_18;
    MR_Word PredProcIdsToFix1_19;
    MR_Word PredProcIdsToFix_20;
    MR_Word STATE_VARIABLE_GlobalInfo_34_34;
    MR_Word Var_36;
    MR_Word STATE_VARIABLE_GlobalInfo_37_37;
    MR_Word STATE_VARIABLE_GlobalInfo_38_38;
    MR_Word NewPredProcIds_54;
    MR_Word Var_57;
    MR_Word Var_66;
    MR_Box conv6_PredProcIdsToFix_20;
    MR_Box conv11_NewRequests_10;
    MR_Box conv10_STATE_VARIABLE_GlobalInfo_37_37;
    MR_Box conv15__Requests_64;
    MR_Box conv14_STATE_VARIABLE_GlobalInfo_38_38;

    mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), &PredProcIdsToFix0_17);
    transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0(MaybeProgressStream_8, Requests_13, (MR_Word) ((MR_Unsigned) 0U), &NewPredList_18, PredProcIdsToFix0_17, &PredProcIdsToFix1_19, STATE_VARIABLE_GlobalInfo_0_25, &STATE_VARIABLE_GlobalInfo_34_34);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_36, 0) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_4[4]));
      MR_hl_field(0, Var_36, 1) = ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_7_p_0_2));
      MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_36, 3) = ((MR_Box) (STATE_VARIABLE_GlobalInfo_34_34));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[1]), Var_36, LoopRequests_14, ((MR_Box) (PredProcIdsToFix1_19)), &conv6_PredProcIdsToFix_20);
    PredProcIdsToFix_20 = ((MR_Word) (conv6_PredProcIdsToFix_20));
    NewPredProcIds_54 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_2[6]), NewPredList_18);
    Var_57 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[4]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_9[0]), NewPredProcIds_54, ((MR_Box) (Var_57)), &conv11_NewRequests_10, ((MR_Box) (STATE_VARIABLE_GlobalInfo_34_34)), &conv10_STATE_VARIABLE_GlobalInfo_37_37);
    *NewRequests_10 = ((MR_Word) (conv11_NewRequests_10));
    STATE_VARIABLE_GlobalInfo_37_37 = ((MR_Word) (conv10_STATE_VARIABLE_GlobalInfo_37_37));
    Var_66 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0));
    mercury__set__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[4]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_9[1]), PredProcIdsToFix_20, ((MR_Box) (Var_66)), &conv15__Requests_64, ((MR_Box) (STATE_VARIABLE_GlobalInfo_37_37)), &conv14_STATE_VARIABLE_GlobalInfo_38_38);
    STATE_VARIABLE_GlobalInfo_38_38 = ((MR_Word) (conv14_STATE_VARIABLE_GlobalInfo_38_38));
    if ((NewPredList_18 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_GlobalInfo_26 = STATE_VARIABLE_GlobalInfo_38_38;
    else
    {
      MR_Word ModuleInfo0_23;
      MR_Word ModuleInfo_24;

      ModuleInfo0_23 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(STATE_VARIABLE_GlobalInfo_38_38);
      hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(ModuleInfo0_23, &ModuleInfo_24);
      transform_hlds__higher_order__higher_order_global_info__hogi_set_module_info_3_p_0(ModuleInfo_24, STATE_VARIABLE_GlobalInfo_38_38, STATE_VARIABLE_GlobalInfo_26);
    }
  }
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Version_60 = ((MR_Word) ((env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__conv1_Version_60));
  transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_59;

    (env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__succeeded = transform_hlds__higher_order__higher_order_global_info__version_matches_5_p_0((env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Params_57, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__ModuleInfo_58, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Version_60, &Var_59);
    if ((env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__succeeded)
      transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__commit_0) == 0)
    {
      mercury__set__member_2_p_1((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0), &(env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__conv1_Version_60, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__SpecVersions_56, transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_3, env_ptr);
      (env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0(
  MR_Word MaybeProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_NewPreds_0_3,
  MR_Word * STATE_VARIABLE_NewPreds_4,
  MR_Word STATE_VARIABLE_PredsToFix_0_5,
  MR_Word * STATE_VARIABLE_PredsToFix_6,
  MR_Word STATE_VARIABLE_GlobalInfo_0_7,
  MR_Word * STATE_VARIABLE_GlobalInfo_8)
{
  struct transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0_s env;

  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_GlobalInfo_8 = STATE_VARIABLE_GlobalInfo_0_7;
      *STATE_VARIABLE_PredsToFix_6 = STATE_VARIABLE_PredsToFix_0_5;
      *STATE_VARIABLE_NewPreds_4 = STATE_VARIABLE_NewPreds_0_3;
    }
    else
    {
      MR_Word Requests_26;
      MR_Word Var_40;
      MR_Word STATE_VARIABLE_PredsToFix_41_41;
      MR_Word STATE_VARIABLE_GlobalInfo_42_42;
      MR_Word STATE_VARIABLE_NewPreds_44_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Unsigned packed_word_0;
      MR_Word NewPredMap_54;
      MR_Word CalleePredProcId_55;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Unsigned packed_word_1;
      MR_Box conv0_SpecVersions_56;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_NewPreds_0_3;
      MR_Word next_value_of_STATE_VARIABLE_PredsToFix_0_5;
      MR_Word next_value_of_STATE_VARIABLE_GlobalInfo_0_7;

      (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      Requests_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      Var_40 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 0))));
      Var_45 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 1))));
      Var_46 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 2))));
      Var_47 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 3))));
      Var_48 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 4))));
      Var_49 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 5))));
      packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 6)));
      Var_50 = ((((MR_Unsigned) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 6))) >> 1)) & (MR_Integer) 1);
      Var_51 = ((MR_Unsigned) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 6))) & (MR_Integer) 1);
      Var_52 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 7))));
      mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (Var_40)), STATE_VARIABLE_PredsToFix_0_5, &STATE_VARIABLE_PredsToFix_41_41);
      NewPredMap_54 = transform_hlds__higher_order__higher_order_global_info__hogi_get_new_pred_map_1_f_0(STATE_VARIABLE_GlobalInfo_0_7);
      Var_61 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 0))));
      CalleePredProcId_55 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 1))));
      Var_62 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 2))));
      Var_63 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 3))));
      Var_64 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 4))));
      Var_65 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 5))));
      packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 6)));
      Var_66 = ((((MR_Unsigned) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 6))) >> 1)) & (MR_Integer) 1);
      Var_67 = ((MR_Unsigned) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 6))) & (MR_Integer) 1);
      Var_68 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 7))));
      (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), NewPredMap_54, ((MR_Box) (CalleePredProcId_55)), &conv0_SpecVersions_56);
      if ((env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__succeeded)
      {
        (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__SpecVersions_56 = ((MR_Word) (conv0_SpecVersions_56));
        (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__succeeded = MR_TRUE;
      }
      if ((env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__succeeded)
      {
        (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Params_57 = transform_hlds__higher_order__higher_order_global_info__hogi_get_params_1_f_0(STATE_VARIABLE_GlobalInfo_0_7);
        (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__ModuleInfo_58 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(STATE_VARIABLE_GlobalInfo_0_7);
        transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_4(&env);
      }
      if ((env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__succeeded)
      {
        STATE_VARIABLE_GlobalInfo_42_42 = STATE_VARIABLE_GlobalInfo_0_7;
        STATE_VARIABLE_NewPreds_44_44 = STATE_VARIABLE_NewPreds_0_3;
      }
      else
      {
        MR_Word NewPred_31;

        transform_hlds__higher_order__make_specialized_preds__create_new_ho_spec_pred_7_p_0(MaybeProgressStream_1, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, &NewPred_31, STATE_VARIABLE_GlobalInfo_0_7, &STATE_VARIABLE_GlobalInfo_42_42);
        {
          STATE_VARIABLE_NewPreds_44_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_NewPreds_44_44, 0) = ((MR_Box) (NewPred_31));
          MR_hl_field(1, STATE_VARIABLE_NewPreds_44_44, 1) = ((MR_Box) (STATE_VARIABLE_NewPreds_0_3));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Requests_26;
      next_value_of_STATE_VARIABLE_NewPreds_0_3 = STATE_VARIABLE_NewPreds_44_44;
      next_value_of_STATE_VARIABLE_PredsToFix_0_5 = STATE_VARIABLE_PredsToFix_41_41;
      next_value_of_STATE_VARIABLE_GlobalInfo_0_7 = STATE_VARIABLE_GlobalInfo_42_42;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_NewPreds_0_3 = next_value_of_STATE_VARIABLE_NewPreds_0_3;
      STATE_VARIABLE_PredsToFix_0_5 = next_value_of_STATE_VARIABLE_PredsToFix_0_5;
      STATE_VARIABLE_GlobalInfo_0_7 = next_value_of_STATE_VARIABLE_GlobalInfo_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__create_new_ho_spec_pred_7_p_0(
  MR_Word MaybeProgressStream_8,
  MR_Word Request_9,
  MR_Word * NewPred_10,
  MR_Word STATE_VARIABLE_GlobalInfo_0_60,
  MR_Word * STATE_VARIABLE_GlobalInfo_61)
{
  MR_bool succeeded;
  MR_Word CallerPPId_13 = ((MR_Word) ((MR_hl_field(0, Request_9, (MR_Integer) 0))));
  MR_Word CalleePPId_14 = ((MR_Word) ((MR_hl_field(0, Request_9, (MR_Integer) 1))));
  MR_Word CallArgsTypes_15 = ((MR_Word) ((MR_hl_field(0, Request_9, (MR_Integer) 2))));
  MR_Word ExtraTypeInfoTVars_16 = ((MR_Word) ((MR_hl_field(0, Request_9, (MR_Integer) 3))));
  MR_Word HOArgs_17 = ((MR_Word) ((MR_hl_field(0, Request_9, (MR_Integer) 4))));
  MR_Word CallerTVarSet_18 = ((MR_Word) ((MR_hl_field(0, Request_9, (MR_Integer) 5))));
  MR_Word Context_21 = ((MR_Word) ((MR_hl_field(0, Request_9, (MR_Integer) 7))));
  MR_Word ModuleInfo0_22;
  MR_Word PredInfo0_23;
  MR_Word ProcInfo0_24;
  MR_String SpecName_25;
  MR_Word Origin_26;
  MR_Word PredStatus_27;
  MR_Integer NewProcId_28;
  MR_Word TypeVarSet_30;
  MR_Word MarkerList_31;
  MR_Word GoalType_32;
  MR_Word ClassContext_33;
  MR_Word VarNameRemap_34;
  MR_Word InitTypes_35;
  MR_Word ItemNumbers_36;
  MR_Word ClausesInfo0_37;
  MR_Word EmptyVarSet_38;
  MR_Word VarTable_39;
  MR_Word ClausesInfo_40;
  MR_Word PredFormArity_41;
  MR_Word PredOrFunc_42;
  MR_Word PredModuleName_43;
  MR_Word ArgTVarSet_44;
  MR_Word ExistQVars_45;
  MR_Word Types_46;
  MR_Word EmptyProofs_48;
  MR_Word EmptyConstraintMap_49;
  MR_Word NewPredInfo0_50;
  MR_Word NewPredInfo1_51;
  MR_Word PredTable0_52;
  MR_Word NewPredId_53;
  MR_Word PredTable_54;
  MR_Word ModuleInfo1_55;
  MR_Word SpecSymName_56;
  MR_Word NewPredInfo_57;
  MR_Word ModuleInfo2_58;
  MR_Word ModuleInfo_59;
  MR_Word STATE_VARIABLE_GlobalInfo_64_64;
  MR_Word Var_68;
  MR_Integer Var_69;
  MR_Word STATE_VARIABLE_GlobalInfo_71_71;
  MR_Word Var_72;
  MR_Word STATE_VARIABLE_GlobalInfo_73_73;
  MR_Word STATE_VARIABLE_GlobalInfo_74_74;
  MR_Word NewPredMap0_80;
  MR_Word NewPredMap_83;
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Request_9, (MR_Integer) 6)));
  MR_Word SpecVersions0_81;
  MR_Box conv0_SpecVersions0_81;

  ModuleInfo0_22 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(STATE_VARIABLE_GlobalInfo_0_60);
  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo0_22, CalleePPId_14, &PredInfo0_23, &ProcInfo0_24);
  transform_hlds__higher_order__make_specialized_preds__construct_created_spec_name_status_9_p_0(ModuleInfo0_22, Request_9, PredInfo0_23, &SpecName_25, &Origin_26, &PredStatus_27, &NewProcId_28, STATE_VARIABLE_GlobalInfo_0_60, &STATE_VARIABLE_GlobalInfo_64_64);
  if (!((MaybeProgressStream_8 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word ProgressStream_29 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_8, (MR_Integer) 0))));
    MR_Word Var_66;

    {
      Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_66, 0) = ((MR_Box) (SpecName_25));
    }
    transform_hlds__higher_order__make_specialized_preds__write_request_9_p_0(ProgressStream_29, ModuleInfo0_22, PredInfo0_23, (MR_String) "Specializing", Var_66, HOArgs_17, Context_21);
  }
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo0_23, &TypeVarSet_30);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_23, &MarkerList_31);
  hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo0_23, &GoalType_32);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo0_23, &ClassContext_33);
  hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(PredInfo0_23, &VarNameRemap_34);
  Var_69 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_2[0]), CallArgsTypes_15);
  Var_68 = (MR_Word) (Var_69);
  {
    InitTypes_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InitTypes_35, 0) = ((MR_Box) (Var_68));
  }
  ItemNumbers_36 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
  hlds__hlds_clauses__clauses_info_init_4_p_0((MR_Integer) 0, InitTypes_35, ItemNumbers_36, &ClausesInfo0_37);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &EmptyVarSet_38);
  hlds__var_table_hlds__vars_types_to_var_table_4_p_0(ModuleInfo0_22, EmptyVarSet_38, CallArgsTypes_15, &VarTable_39);
  hlds__hlds_clauses__clauses_info_set_var_table_3_p_0(VarTable_39, ClausesInfo0_37, &ClausesInfo_40);
  PredFormArity_41 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo0_23);
  PredOrFunc_42 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_23);
  PredModuleName_43 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo0_23);
  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo0_23, &ArgTVarSet_44, &ExistQVars_45, &Types_46);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &EmptyProofs_48);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &EmptyConstraintMap_49);
  hlds__hlds_pred__pred_info_init_19_p_0(PredOrFunc_42, PredModuleName_43, SpecName_25, PredFormArity_41, Context_21, Origin_26, PredStatus_27, (MR_Word) ((MR_Unsigned) 0U), GoalType_32, MarkerList_31, Types_46, ArgTVarSet_44, ExistQVars_45, ClassContext_33, EmptyProofs_48, EmptyConstraintMap_49, ClausesInfo_40, VarNameRemap_34, &NewPredInfo0_50);
  hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_30, NewPredInfo0_50, &NewPredInfo1_51);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo0_22, &PredTable0_52);
  hlds__pred_table__predicate_table_insert_4_p_0(NewPredInfo1_51, &NewPredId_53, PredTable0_52, &PredTable_54);
  hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_54, ModuleInfo0_22, &ModuleInfo1_55);
  transform_hlds__higher_order__higher_order_global_info__hogi_set_module_info_3_p_0(ModuleInfo1_55, STATE_VARIABLE_GlobalInfo_64_64, &STATE_VARIABLE_GlobalInfo_71_71);
  {
    SpecSymName_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SpecSymName_56, 0) = ((MR_Box) (PredModuleName_43));
    MR_hl_field(1, SpecSymName_56, 1) = ((MR_Box) (SpecName_25));
  }
  {
    Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_72, 0) = ((MR_Box) (NewPredId_53));
    MR_hl_field(0, Var_72, 1) = ((MR_Box) (NewProcId_28));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *NewPred_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_72));
    MR_hl_field(0, base, 1) = ((MR_Box) (CalleePPId_14));
    MR_hl_field(0, base, 2) = ((MR_Box) (CallerPPId_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (SpecSymName_56));
    MR_hl_field(0, base, 4) = ((MR_Box) (HOArgs_17));
    MR_hl_field(0, base, 5) = ((MR_Box) (CallArgsTypes_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (ExtraTypeInfoTVars_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (CallerTVarSet_18));
    MR_hl_field(0, base, 8) = (MR_Box) (packed_word_0);
  }
  NewPredMap0_80 = transform_hlds__higher_order__higher_order_global_info__hogi_get_new_pred_map_1_f_0(STATE_VARIABLE_GlobalInfo_71_71);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), NewPredMap0_80, ((MR_Box) (CalleePPId_14)), &conv0_SpecVersions0_81);
  if (succeeded)
  {
    SpecVersions0_81 = ((MR_Word) (conv0_SpecVersions0_81));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word SpecVersions_82;

    mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0), ((MR_Box) (*NewPred_10)), SpecVersions0_81, &SpecVersions_82);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), ((MR_Box) (CalleePPId_14)), ((MR_Box) (SpecVersions_82)), NewPredMap0_80, &NewPredMap_83);
  }
  else
  {
    MR_Word SpecVersions_84;

    SpecVersions_84 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0), ((MR_Box) (*NewPred_10)));
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), ((MR_Box) (CalleePPId_14)), ((MR_Box) (SpecVersions_84)), NewPredMap0_80, &NewPredMap_83);
  }
  transform_hlds__higher_order__higher_order_global_info__hogi_set_new_pred_map_3_p_0(NewPredMap_83, STATE_VARIABLE_GlobalInfo_71_71, &STATE_VARIABLE_GlobalInfo_73_73);
  transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0(*NewPred_10, ProcInfo0_24, NewPredInfo1_51, &NewPredInfo_57, STATE_VARIABLE_GlobalInfo_73_73, &STATE_VARIABLE_GlobalInfo_74_74);
  ModuleInfo2_58 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(STATE_VARIABLE_GlobalInfo_74_74);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(NewPredId_53, NewPredInfo_57, ModuleInfo2_58, &ModuleInfo_59);
  transform_hlds__higher_order__higher_order_global_info__hogi_set_module_info_3_p_0(ModuleInfo_59, STATE_VARIABLE_GlobalInfo_74_74, STATE_VARIABLE_GlobalInfo_61);
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__write_request_9_p_0(
  MR_Word OutputStream_10,
  MR_Word ModuleInfo_11,
  MR_Word PredInfo_12,
  MR_String Msg_13,
  MR_Word MaybeNewName_14,
  MR_Word HOArgs_15,
  MR_Word Context_16)
{
  MR_Word PredModule_18;
  MR_String PredName_19;
  MR_Word PredFormArity_20;
  MR_Word ArgTypes_21;
  MR_Word ActualArity_22;
  MR_Word PredSymName_23;
  MR_String OldName_24;
  MR_Integer PredFormArityInt_25;
  MR_String ContextStr_26;
  MR_String IntoStr_28;
  MR_Integer ActualArityInt_29;
  MR_Integer NumToDrop_30;
  MR_String Var_63;

  PredModule_18 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_12);
  PredName_19 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_12);
  PredFormArity_20 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_12);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_12, &ArgTypes_21);
  ActualArity_22 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_21);
  {
    PredSymName_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_23, 0) = ((MR_Box) (PredModule_18));
    MR_hl_field(1, PredSymName_23, 1) = ((MR_Box) (PredName_19));
  }
  OldName_24 = mdbcomp__sym_name__sym_name_to_string_1_f_0(PredSymName_23);
  PredFormArityInt_25 = (MR_Integer) (PredFormArity_20);
  ContextStr_26 = parse_tree__parse_tree_out_misc__context_to_string_1_f_0(Context_16);
  if ((MaybeNewName_14 == (MR_Word) ((MR_Unsigned) 0U)))
    IntoStr_28 = (MR_String) "";
  else
  {
    MR_String NewName_27 = ((MR_String) ((MR_hl_field(1, MaybeNewName_14, (MR_Integer) 0))));

    IntoStr_28 = mercury__string__f_43_43_2_f_0((MR_String) " into ", NewName_27);
  }
  mercury__io__write_string_4_p_0(OutputStream_10, (MR_String) "% ");
  mercury__io__write_string_4_p_0(OutputStream_10, ContextStr_26);
  mercury__io__write_string_4_p_0(OutputStream_10, Msg_13);
  mercury__io__write_string_4_p_0(OutputStream_10, (MR_String) " \140");
  mercury__io__write_string_4_p_0(OutputStream_10, OldName_24);
  mercury__io__write_string_4_p_0(OutputStream_10, (MR_String) "\'/");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_3[0]), PredFormArityInt_25, &Var_63);
  mercury__io__write_string_4_p_0(OutputStream_10, Var_63);
  mercury__io__write_string_4_p_0(OutputStream_10, IntoStr_28);
  mercury__io__write_string_4_p_0(OutputStream_10, (MR_String) " with higher-order arguments:\n");
  ActualArityInt_29 = (MR_Integer) (ActualArity_22);
  NumToDrop_30 = (MR_Integer) ((MR_Unsigned) ActualArityInt_29 - (MR_Unsigned) PredFormArityInt_25);
  transform_hlds__higher_order__make_specialized_preds__output_higher_order_args_7_p_0(OutputStream_10, ModuleInfo_11, NumToDrop_30, (MR_Unsigned) 0U, HOArgs_15);
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__output_higher_order_args_7_p_0(
  MR_Word OutputStream_1,
  MR_Word ModuleInfo_2,
  MR_Integer NumToDrop_3,
  MR_Unsigned Indent_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HOArg_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word HOArgs_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word ConsId_22 = ((MR_Word) ((MR_hl_field(0, HOArg_19, (MR_Integer) 0))));
      MR_Integer ArgNo_23 = ((MR_Integer) ((MR_hl_field(0, HOArg_19, (MR_Integer) 1))));
      MR_Integer NumArgs_24 = ((MR_Integer) ((MR_hl_field(0, HOArg_19, (MR_Integer) 2))));
      MR_Word CurriedHOArgs_28 = ((MR_Word) ((MR_hl_field(0, HOArg_19, (MR_Integer) 6))));
      MR_Word IsConst_29 = ((MR_Unsigned) ((MR_hl_field(0, HOArg_19, (MR_Integer) 7))) & (MR_Integer) 1);
      MR_String Indent1Str_30;
      MR_Unsigned Var_52 = (Indent_4 + (MR_Unsigned) 1U);
      MR_String Var_154;
      MR_Word ShroudedPredProcId_31;
      MR_Word next_value_of_HeadVar__5_5;

      Indent1Str_30 = libs__indent__indent2_string_1_f_0(Var_52);
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "% ");
      mercury__io__write_string_4_p_0(OutputStream_1, Indent1Str_30);
      switch (IsConst_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "const ");
          break;
        case (MR_Integer) 0:
          {
          }
          break;
      }
      succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 4)));
      if (succeeded)
      {
        ShroudedPredProcId_31 = ((MR_Word) ((MR_hl_field(3, ConsId_22, (MR_Integer) 1))));
        {
          MR_Word PredId_33;
          MR_Word PredInfo_35;
          MR_String Name_36;
          MR_Integer PredFormArityInt_37;
          MR_Integer DeclaredArgNo_38;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_String Var_108;
          MR_String Var_120;

          Var_61 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_31);
          PredId_33 = ((MR_Word) ((MR_hl_field(0, Var_61, (MR_Integer) 0))));
          hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_2, PredId_33, &PredInfo_35);
          Name_36 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_35);
          hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_35, &Var_62);
          PredFormArityInt_37 = (MR_Integer) (Var_62);
          DeclaredArgNo_38 = (MR_Integer) ((MR_Unsigned) ArgNo_23 - (MR_Unsigned) NumToDrop_3);
          mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "HeadVar__");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_3[0]), DeclaredArgNo_38, &Var_108);
          mercury__io__write_string_4_p_0(OutputStream_1, Var_108);
          mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) " = \140");
          mercury__io__write_string_4_p_0(OutputStream_1, Name_36);
          mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "\'/");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_3[0]), PredFormArityInt_37, &Var_120);
          mercury__io__write_string_4_p_0(OutputStream_1, Var_120);
        }
      }
      else
      {
        MR_Word TypeModule_39;
        MR_String TypeName_40;
        MR_Integer TypeArity_41;

        succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 10)));
        if (succeeded)
        {
          TypeModule_39 = ((MR_Word) ((MR_hl_field(3, ConsId_22, (MR_Integer) 1))));
          TypeName_40 = ((MR_String) ((MR_hl_field(3, ConsId_22, (MR_Integer) 2))));
          TypeArity_41 = ((MR_Integer) ((MR_hl_field(3, ConsId_22, (MR_Integer) 3))));
          {
            MR_String Var_76;
            MR_Word Var_77;
            MR_String Var_132;

            {
              Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_77, 0) = ((MR_Box) (TypeModule_39));
              MR_hl_field(1, Var_77, 1) = ((MR_Box) (TypeName_40));
            }
            Var_76 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(Var_77);
            mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "type_ctor_info for \140");
            mercury__io__write_string_4_p_0(OutputStream_1, Var_76);
            mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "\'/");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_3[0]), TypeArity_41, &Var_132);
            mercury__io__write_string_4_p_0(OutputStream_1, Var_132);
          }
        }
        else
        {
          MR_Word ClassId_43;

          succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 11)));
          if (succeeded)
          {
            ClassId_43 = ((MR_Word) ((MR_hl_field(3, ConsId_22, (MR_Integer) 2))));
            {
              MR_Word ClassSymName_46 = ((MR_Word) ((MR_hl_field(0, ClassId_43, (MR_Integer) 0))));
              MR_Integer ClassArity_47 = ((MR_Integer) ((MR_hl_field(0, ClassId_43, (MR_Integer) 1))));
              MR_String Var_85;
              MR_String Var_144;

              Var_85 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ClassSymName_46);
              mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "base_typeclass_info for \140");
              mercury__io__write_string_4_p_0(OutputStream_1, Var_85);
              mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "\'/");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_3[0]), ClassArity_47, &Var_144);
              mercury__io__write_string_4_p_0(OutputStream_1, Var_144);
            }
          }
          else
            mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "type_info/typeclass_info");
        }
      }
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) " with ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_3[0]), NumArgs_24, &Var_154);
      mercury__io__write_string_4_p_0(OutputStream_1, Var_154);
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) " curried arguments");
      if ((CurriedHOArgs_28 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__nl_3_p_0(OutputStream_1);
      else
      {
        MR_Unsigned Var_100;

        mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) ":\n");
        Var_100 = (Indent_4 + (MR_Unsigned) 1U);
        transform_hlds__higher_order__make_specialized_preds__output_higher_order_args_7_p_0(OutputStream_1, ModuleInfo_2, (MR_Integer) 0, Var_100, CurriedHOArgs_28);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = HOArgs_20;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_HeadVar__3_3;

  hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv12_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__3_3));
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_VarTable_17;

  transform_hlds__higher_order__make_specialized_preds__update_var_types_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_VarTable_17);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_VarTable_17));
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_LambdaHeadVar__4_139;

  transform_hlds__higher_order__make_specialized_preds__IntroducedFrom__pred__specialize_and_add_new_proc__609__1_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_LambdaHeadVar__4_139);
  *wrapper_arg_4 = ((MR_Box) (conv6_LambdaHeadVar__4_139));
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__4_4;

  hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__4_4));
}

static MR_Box MR_CALL 
transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_2;

  conv3_HeadVar__2_2 = parse_tree__builtin_lib_types__build_type_info_type_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_HOArg_13;

  transform_hlds__higher_order__make_specialized_preds__substitute_higher_order_arg_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_HOArg_13);
  *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_HOArg_13));
}

static MR_Box MR_CALL 
transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  conv1_HeadVar__3_3 = check_hlds__type_util__is_type_a_dummy_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_126;

  succeeded = transform_hlds__higher_order__make_specialized_preds__IntroducedFrom__pred__specialize_and_add_new_proc__548__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_126);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_126));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0(
  MR_Word NewPred_7,
  MR_Word STATE_VARIABLE_NewProcInfo_0_119,
  MR_Word STATE_VARIABLE_NewPredInfo_0_120,
  MR_Word * STATE_VARIABLE_NewPredInfo_121,
  MR_Word STATE_VARIABLE_GlobalInfo_0_122,
  MR_Word * STATE_VARIABLE_GlobalInfo_123)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_11;
  MR_Word NewPredProcId_12;
  MR_Word OldPredProcId_13;
  MR_Word CallerPredProcId_14;
  MR_Word HOArgs0_16;
  MR_Word CallArgsTypes0_17;
  MR_Word ExtraTypeInfoTVars0_18;
  MR_Word HeadVars0_22;
  MR_Word ArgModes0_23;
  MR_Word ExistQVars0_24;
  MR_Word TypeVarSet0_25;
  MR_Word KindMap0_26;
  MR_Word OriginalArgTypes0_27;
  MR_Word CallerPredId_28;
  MR_Word CallerPredInfo_30;
  MR_Word CallerTypeVarSet_31;
  MR_Word CallerHeadParams_32;
  MR_Word VarTable0_33;
  MR_Word TypeVarSet_34;
  MR_Word TypeRenaming_35;
  MR_Word KindMap_36;
  MR_Word VarTable1_37;
  MR_Word OriginalArgTypes1_38;
  MR_Word ExistQVars1_39;
  MR_Word CallArgs_40;
  MR_Word CallerArgTypes0_41;
  MR_Word TypeSubn_42;
  MR_Word ExistQTypes_43;
  MR_Word ExistQVars_47;
  MR_Word VarTable2_48;
  MR_Word OriginalArgTypes_49;
  MR_Word ExtraTypeInfoTVarTypes0_50;
  MR_Word HOArgs_51;
  MR_Word ExtraTypeInfoTVarTypes_52;
  MR_Word ExtraTypeInfoTVars_53;
  MR_Word ExtraTypeInfoTypes_55;
  MR_Word ExtraTypeInfoVars_56;
  MR_Word RttiVarMaps0_57;
  MR_Word EmptyVarRenaming_58;
  MR_Word RttiVarMaps1_59;
  MR_Word RttiVarMaps2_60;
  MR_Word RttiVarMaps_66;
  MR_Word VarRenaming0_67;
  MR_Word KnownVarMap0_68;
  MR_Word ExtraHeadVars_69;
  MR_Word ExtraArgModes_70;
  MR_Word KnownVarMap_72;
  MR_Word ConstGoals_73;
  MR_Word VersionInfoMap0_74;
  MR_Integer ArgsDepth_75;
  MR_Word OrigPredProcId_77;
  MR_Word CallerParentVersions_85;
  MR_Word ParentVersions_86;
  MR_Word VersionInfo_87;
  MR_Word VersionInfoMap_88;
  MR_Word InMode_89;
  MR_Integer NumTypeInfos_90;
  MR_Word ExtraTypeInfoModes_91;
  MR_Word HeadVars1_92;
  MR_Word ArgModes1_93;
  MR_Word HeadVars_94;
  MR_Word ArgModes_95;
  MR_Word Goal6_96;
  MR_Word GoalInfo6_98;
  MR_Word GoalList6_99;
  MR_Word Goal_100;
  MR_Word VarTable7_101;
  MR_Word ExtraHeadVarTypes0_102;
  MR_Word ModifiedOriginalArgTypes_103;
  MR_Word ArgTypes_104;
  MR_Word ArgVars_112;
  MR_Word NewRttiVarMaps_113;
  MR_Word ArgVarInfos_114;
  MR_Word ClassContext_115;
  MR_Integer NewProcId_117;
  MR_Word NewProcs_118;
  MR_Word Var_127;
  MR_Word STATE_VARIABLE_NewProcInfo_128_128;
  MR_Word Var_129;
  MR_Word STATE_VARIABLE_NewProcInfo_134_134;
  MR_Word STATE_VARIABLE_NewProcInfo_143_143;
  MR_Word STATE_VARIABLE_NewProcInfo_144_144;
  MR_Word Var_145;
  MR_Word Var_147;
  MR_Word Var_148;
  MR_Word STATE_VARIABLE_NewProcInfo_149_149;
  MR_Word STATE_VARIABLE_NewProcInfo_150_150;
  MR_Word Var_151;
  MR_Word STATE_VARIABLE_NewProcInfo_152_152;
  MR_Word STATE_VARIABLE_NewProcInfo_153_153;
  MR_Word STATE_VARIABLE_NewProcInfo_154_154;
  MR_Word Var_155;
  MR_Word STATE_VARIABLE_NewPredInfo_156_156;
  MR_Word STATE_VARIABLE_NewPredInfo_157_157;
  MR_Word STATE_VARIABLE_NewProcInfo_159_159;
  MR_Word Var_160;
  MR_Word STATE_VARIABLE_NewPredInfo_161_161;
  MR_Box conv5_RttiVarMaps2_60;
  MR_Box conv7_RttiVarMaps_66;
  MR_Word Var_71;
  MR_Word OldProcVersionInfo_76;
  MR_Box conv8_OldProcVersionInfo_76;
  MR_Word CallerVersionInfo_81;
  MR_Box conv9_CallerVersionInfo_81;

  ModuleInfo_11 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(STATE_VARIABLE_GlobalInfo_0_122);
  NewPredProcId_12 = ((MR_Word) ((MR_hl_field(0, NewPred_7, (MR_Integer) 0))));
  OldPredProcId_13 = ((MR_Word) ((MR_hl_field(0, NewPred_7, (MR_Integer) 1))));
  CallerPredProcId_14 = ((MR_Word) ((MR_hl_field(0, NewPred_7, (MR_Integer) 2))));
  HOArgs0_16 = ((MR_Word) ((MR_hl_field(0, NewPred_7, (MR_Integer) 4))));
  CallArgsTypes0_17 = ((MR_Word) ((MR_hl_field(0, NewPred_7, (MR_Integer) 5))));
  ExtraTypeInfoTVars0_18 = ((MR_Word) ((MR_hl_field(0, NewPred_7, (MR_Integer) 6))));
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_NewProcInfo_0_119, &HeadVars0_22);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_NewProcInfo_0_119, &ArgModes0_23);
  hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(STATE_VARIABLE_NewPredInfo_0_120, &ExistQVars0_24);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_NewPredInfo_0_120, &TypeVarSet0_25);
  hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(STATE_VARIABLE_NewPredInfo_0_120, &KindMap0_26);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(STATE_VARIABLE_NewPredInfo_0_120, &OriginalArgTypes0_27);
  CallerPredId_28 = ((MR_Word) ((MR_hl_field(0, CallerPredProcId_14, (MR_Integer) 0))));
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_11, CallerPredId_28, &CallerPredInfo_30);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(CallerPredInfo_30, &CallerTypeVarSet_31);
  hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(CallerPredInfo_30, &CallerHeadParams_32);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_NewProcInfo_0_119, &VarTable0_33);
  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(CallerTypeVarSet_31, TypeVarSet0_25, &TypeVarSet_34, &TypeRenaming_35);
  parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(TypeRenaming_35, KindMap0_26, &KindMap_36);
  parse_tree__var_table__apply_variable_renaming_to_var_table_3_p_0(TypeRenaming_35, VarTable0_33, &VarTable1_37);
  parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(TypeRenaming_35, OriginalArgTypes0_27, &OriginalArgTypes1_38);
  parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(TypeRenaming_35, ExistQVars0_24, &ExistQVars1_39);
  mercury__assoc_list__keys_and_values_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), CallArgsTypes0_17, &CallArgs_40, &CallerArgTypes0_41);
  parse_tree__prog_type_unify__compute_caller_callee_type_substitution_5_p_0(OriginalArgTypes1_38, CallerArgTypes0_41, CallerHeadParams_32, ExistQVars1_39, &TypeSubn_42);
  parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(KindMap_36, TypeSubn_42, ExistQVars1_39, &ExistQTypes_43);
  mercury__list__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[5]), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_2[2]), ExistQTypes_43, &ExistQVars_47);
  {
    Var_127 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_127, 0) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_5[1]));
    MR_hl_field(0, Var_127, 1) = ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_2));
    MR_hl_field(0, Var_127, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_127, 3) = ((MR_Box) (ModuleInfo_11));
  }
  parse_tree__var_table__apply_rec_subst_to_var_table_4_p_0(Var_127, TypeSubn_42, VarTable1_37, &VarTable2_48);
  parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(TypeSubn_42, OriginalArgTypes1_38, &OriginalArgTypes_49);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable2_48, STATE_VARIABLE_NewProcInfo_0_119, &STATE_VARIABLE_NewProcInfo_128_128);
  Var_129 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[5]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
  parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_129, ExtraTypeInfoTVars0_18, &ExtraTypeInfoTVarTypes0_50);
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[5]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeSubn_42);
  if (!(succeeded))
    succeeded = (ExistQVars_47 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    HOArgs_51 = HOArgs0_16;
    ExtraTypeInfoTVarTypes_52 = ExtraTypeInfoTVarTypes0_50;
    ExtraTypeInfoTVars_53 = ExtraTypeInfoTVars0_18;
  }
  else
  {
    MR_Word Var_130;
    MR_Word ExtraTypeInfoTVarsPrim_54;

    {
      Var_130 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_130, 0) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_5[2]));
      MR_hl_field(0, Var_130, 1) = ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_3));
      MR_hl_field(0, Var_130, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_130, 3) = ((MR_Box) (TypeSubn_42));
    }
    mercury__list__map_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0), Var_130, HOArgs0_16, &HOArgs_51);
    parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(TypeSubn_42, ExtraTypeInfoTVarTypes0_50, &ExtraTypeInfoTVarTypes_52);
    succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(ExtraTypeInfoTVarTypes_52, &ExtraTypeInfoTVarsPrim_54);
    if (succeeded)
      ExtraTypeInfoTVars_53 = ExtraTypeInfoTVarsPrim_54;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.make_specialized_preds.specialize_and_add_new_proc\'/6", (MR_String) "type var got bound");
        return;
      }
  }
  ExtraTypeInfoTypes_55 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_2[3]), ExtraTypeInfoTVarTypes_52);
  hlds__hlds_proc_util__proc_info_create_vars_from_types_5_p_0(ModuleInfo_11, ExtraTypeInfoTypes_55, &ExtraTypeInfoVars_56, STATE_VARIABLE_NewProcInfo_128_128, &STATE_VARIABLE_NewProcInfo_134_134);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_NewProcInfo_134_134, &RttiVarMaps0_57);
  mercury__map__init_1_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), &EmptyVarRenaming_58);
  hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(TypeRenaming_35, TypeSubn_42, EmptyVarRenaming_58, RttiVarMaps0_57, &RttiVarMaps1_59);
  mercury__list__foldl_corresponding_5_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_2[4]), ExtraTypeInfoVars_56, ExtraTypeInfoTVarTypes_52, ((MR_Box) (RttiVarMaps1_59)), &conv5_RttiVarMaps2_60);
  RttiVarMaps2_60 = ((MR_Word) (conv5_RttiVarMaps2_60));
  mercury__list__foldl_corresponding_5_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[5]), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_2[5]), ExtraTypeInfoTVars_53, ExtraTypeInfoVars_56, ((MR_Box) (RttiVarMaps2_60)), &conv7_RttiVarMaps_66);
  RttiVarMaps_66 = ((MR_Word) (conv7_RttiVarMaps_66));
  hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_66, STATE_VARIABLE_NewProcInfo_134_134, &STATE_VARIABLE_NewProcInfo_143_143);
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), CallArgs_40, HeadVars0_22, &VarRenaming0_67);
  mercury__map__init_1_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), &KnownVarMap0_68);
  transform_hlds__higher_order__make_specialized_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_116_101_114_109_115_95_95_91_52_93_95_48_13_p_0(ModuleInfo_11, HeadVars0_22, &ExtraHeadVars_69, &ExtraArgModes_70, HOArgs_51, STATE_VARIABLE_NewProcInfo_143_143, &STATE_VARIABLE_NewProcInfo_144_144, VarRenaming0_67, &Var_71, KnownVarMap0_68, &KnownVarMap_72, &ConstGoals_73);
  VersionInfoMap0_74 = transform_hlds__higher_order__higher_order_global_info__hogi_get_version_info_map_1_f_0(STATE_VARIABLE_GlobalInfo_0_122);
  ArgsDepth_75 = transform_hlds__higher_order__higher_order_global_info__higher_order_max_args_depth_1_f_0(HOArgs_51);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0), VersionInfoMap0_74, ((MR_Box) (OldPredProcId_13)), &conv8_OldProcVersionInfo_76);
  if (succeeded)
  {
    OldProcVersionInfo_76 = ((MR_Word) (conv8_OldProcVersionInfo_76));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    OrigPredProcId_77 = ((MR_Word) ((MR_hl_field(0, OldProcVersionInfo_76, (MR_Integer) 0))));
  else
    OrigPredProcId_77 = OldPredProcId_13;
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0), VersionInfoMap0_74, ((MR_Box) (CallerPredProcId_14)), &conv9_CallerVersionInfo_81);
  if (succeeded)
  {
    CallerVersionInfo_81 = ((MR_Word) (conv9_CallerVersionInfo_81));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    CallerParentVersions_85 = ((MR_Word) ((MR_hl_field(0, CallerVersionInfo_81, (MR_Integer) 3))));
  else
    CallerParentVersions_85 = (MR_Word) ((MR_Unsigned) 0U);
  {
    Var_145 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_145, 0) = ((MR_Box) (OrigPredProcId_77));
    MR_hl_field(0, Var_145, 1) = ((MR_Box) (ArgsDepth_75));
  }
  {
    ParentVersions_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ParentVersions_86, 0) = ((MR_Box) (Var_145));
    MR_hl_field(1, ParentVersions_86, 1) = ((MR_Box) (CallerParentVersions_85));
  }
  {
    VersionInfo_87 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, VersionInfo_87, 0) = ((MR_Box) (OrigPredProcId_77));
    MR_hl_field(0, VersionInfo_87, 1) = ((MR_Box) (ArgsDepth_75));
    MR_hl_field(0, VersionInfo_87, 2) = ((MR_Box) (KnownVarMap_72));
    MR_hl_field(0, VersionInfo_87, 3) = ((MR_Box) (ParentVersions_86));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0), ((MR_Box) (NewPredProcId_12)), ((MR_Box) (VersionInfo_87)), VersionInfoMap0_74, &VersionInfoMap_88);
  transform_hlds__higher_order__higher_order_global_info__hogi_set_version_info_map_3_p_0(VersionInfoMap_88, STATE_VARIABLE_GlobalInfo_0_122, STATE_VARIABLE_GlobalInfo_123);
  parse_tree__prog_mode__in_mode_1_p_0(&InMode_89);
  mercury__list__length_2_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), ExtraTypeInfoVars_56, &NumTypeInfos_90);
  mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumTypeInfos_90, ((MR_Box) (InMode_89)), &ExtraTypeInfoModes_91);
  transform_hlds__higher_order__higher_order_global_info__remove_const_higher_order_args_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), HOArgs_51, HeadVars0_22, &HeadVars1_92);
  transform_hlds__higher_order__higher_order_global_info__remove_const_higher_order_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), HOArgs_51, ArgModes0_23, &ArgModes1_93);
  Var_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), ExtraHeadVars_69, HeadVars1_92);
  HeadVars_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), ExtraTypeInfoVars_56, Var_147);
  Var_148 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExtraArgModes_70, ArgModes1_93);
  ArgModes_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExtraTypeInfoModes_91, Var_148);
  hlds__hlds_pred__proc_info_set_headvars_3_p_0(HeadVars_94, STATE_VARIABLE_NewProcInfo_144_144, &STATE_VARIABLE_NewProcInfo_149_149);
  hlds__hlds_pred__proc_info_set_argmodes_3_p_0(ArgModes_95, STATE_VARIABLE_NewProcInfo_149_149, &STATE_VARIABLE_NewProcInfo_150_150);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_NewProcInfo_150_150, &Goal6_96);
  GoalInfo6_98 = ((MR_Word) ((MR_hl_field(0, Goal6_96, (MR_Integer) 1))));
  hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal6_96, &GoalList6_99);
  Var_151 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ConstGoals_73, GoalList6_99);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_151, GoalInfo6_98, &Goal_100);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_100, STATE_VARIABLE_NewProcInfo_150_150, &STATE_VARIABLE_NewProcInfo_152_152);
  hlds__hlds_pred__proc_info_reset_imported_structure_sharing_2_p_0(STATE_VARIABLE_NewProcInfo_152_152, &STATE_VARIABLE_NewProcInfo_153_153);
  hlds__hlds_pred__proc_info_reset_imported_structure_reuse_2_p_0(STATE_VARIABLE_NewProcInfo_153_153, &STATE_VARIABLE_NewProcInfo_154_154);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_NewProcInfo_154_154, &VarTable7_101);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable7_101, ExtraHeadVars_69, &ExtraHeadVarTypes0_102);
  transform_hlds__higher_order__higher_order_global_info__remove_const_higher_order_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), HOArgs_51, OriginalArgTypes_49, &ModifiedOriginalArgTypes_103);
  Var_155 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ExtraHeadVarTypes0_102, ModifiedOriginalArgTypes_103);
  ArgTypes_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ExtraTypeInfoTypes_55, Var_155);
  hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TypeVarSet_34, ExistQVars_47, ArgTypes_104, STATE_VARIABLE_NewPredInfo_0_120, &STATE_VARIABLE_NewPredInfo_156_156);
  hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_34, STATE_VARIABLE_NewPredInfo_156_156, &STATE_VARIABLE_NewPredInfo_157_157);
  if ((ExistQVars_47 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_NewProcInfo_159_159 = STATE_VARIABLE_NewProcInfo_154_154;
  else
  {
    MR_Word OriginalHeadTypes_107;
    MR_Word ExistentialSubn_108;
    MR_Word ExtraHeadVarTypes_109;
    MR_Word ExtraHeadVarsAndTypes_110;
    MR_Word VarTable8_111;
    MR_Word Var_158;
    MR_Box conv11_VarTable8_111;

    parse_tree__var_table__lookup_var_types_3_p_0(VarTable7_101, HeadVars0_22, &OriginalHeadTypes_107);
    parse_tree__prog_type_unify__type_list_subsumes_det_3_p_0(OriginalArgTypes_49, OriginalHeadTypes_107, &ExistentialSubn_108);
    parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(ExistentialSubn_108, ExtraHeadVarTypes0_102, &ExtraHeadVarTypes_109);
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ExtraHeadVars_69, ExtraHeadVarTypes_109, &ExtraHeadVarsAndTypes_110);
    {
      Var_158 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_158, 0) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_4[3]));
      MR_hl_field(0, Var_158, 1) = ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_7));
      MR_hl_field(0, Var_158, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_158, 3) = ((MR_Box) (ModuleInfo_11));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_2[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), Var_158, ExtraHeadVarsAndTypes_110, ((MR_Box) (VarTable7_101)), &conv11_VarTable8_111);
    VarTable8_111 = ((MR_Word) (conv11_VarTable8_111));
    hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable8_111, STATE_VARIABLE_NewProcInfo_154_154, &STATE_VARIABLE_NewProcInfo_159_159);
  }
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_NewProcInfo_159_159, &ArgVars_112);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_NewProcInfo_159_159, &NewRttiVarMaps_113);
  {
    Var_160 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_160, 0) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_5[3]));
    MR_hl_field(0, Var_160, 1) = ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_8));
    MR_hl_field(0, Var_160, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_160, 3) = ((MR_Box) (NewRttiVarMaps_113));
  }
  mercury__list__map_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0), Var_160, ArgVars_112, &ArgVarInfos_114);
  transform_hlds__higher_order__make_specialized_preds__find_class_context_4_p_0(ModuleInfo_11, ArgVarInfos_114, ArgModes_95, &ClassContext_115);
  hlds__hlds_pred__pred_info_set_class_context_3_p_0(ClassContext_115, STATE_VARIABLE_NewPredInfo_157_157, &STATE_VARIABLE_NewPredInfo_161_161);
  NewProcId_117 = ((MR_Integer) ((MR_hl_field(0, NewPredProcId_12, (MR_Integer) 1))));
  NewProcs_118 = mercury__map__singleton_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (NewProcId_117)), ((MR_Box) (STATE_VARIABLE_NewProcInfo_159_159)));
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(NewProcs_118, STATE_VARIABLE_NewPredInfo_161_161, STATE_VARIABLE_NewPredInfo_121);
}

static MR_Box MR_CALL 
transform_hlds__higher_order__make_specialized_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_116_101_114_109_115_95_95_91_52_93_95_48_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__3_3;

  conv3_HeadVar__3_3 = transform_hlds__higher_order__higher_order_global_info__mode_to_unify_mode_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_116_101_114_109_115_95_95_91_52_93_95_48_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_RttiVarMaps_17;

  transform_hlds__higher_order__make_specialized_preds__add_rtti_info_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_RttiVarMaps_17);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_RttiVarMaps_17));
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_116_101_114_109_115_95_95_91_52_93_95_48_13_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVars0_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_7,
  MR_Word * STATE_VARIABLE_ProcInfo_8,
  MR_Word STATE_VARIABLE_Renaming_0_9,
  MR_Word * STATE_VARIABLE_Renaming_10,
  MR_Word STATE_VARIABLE_KnownVarMap_0_11,
  MR_Word * STATE_VARIABLE_KnownVarMap_12,
  MR_Word * HeadVar__13_13)
{
  MR_bool succeeded;

  if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__13_13 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_KnownVarMap_12 = STATE_VARIABLE_KnownVarMap_0_11;
    *STATE_VARIABLE_Renaming_10 = STATE_VARIABLE_Renaming_0_9;
    *STATE_VARIABLE_ProcInfo_8 = STATE_VARIABLE_ProcInfo_0_7;
  }
  else
  {
    MR_Word HOArg_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
    MR_Word HOArgs_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
    MR_Word ConsId_37 = ((MR_Word) ((MR_hl_field(0, HOArg_31, (MR_Integer) 0))));
    MR_Integer Index_38 = ((MR_Integer) ((MR_hl_field(0, HOArg_31, (MR_Integer) 1))));
    MR_Integer NumArgs_39 = ((MR_Integer) ((MR_hl_field(0, HOArg_31, (MR_Integer) 2))));
    MR_Word CurriedArgs_40 = ((MR_Word) ((MR_hl_field(0, HOArg_31, (MR_Integer) 3))));
    MR_Word CurriedArgTypes_41 = ((MR_Word) ((MR_hl_field(0, HOArg_31, (MR_Integer) 4))));
    MR_Word CurriedArgRttiInfo_42 = ((MR_Word) ((MR_hl_field(0, HOArg_31, (MR_Integer) 5))));
    MR_Word CurriedHOArgs_43 = ((MR_Word) ((MR_hl_field(0, HOArg_31, (MR_Integer) 6))));
    MR_Word IsConst_44 = ((MR_Unsigned) ((MR_hl_field(0, HOArg_31, (MR_Integer) 7))) & (MR_Integer) 1);
    MR_Word LVar_45;
    MR_Word CurriedArgModes1_54;
    MR_Word GroundInstInfo_57;
    MR_Word CurriedHeadVars1_59;
    MR_Word RttiVarMaps0_60;
    MR_Word RttiVarMaps_61;
    MR_Word ExtraCurriedHeadVars_62;
    MR_Word ExtraCurriedArgModes_63;
    MR_Word NewHeadVars1_65;
    MR_Word NewArgModes1_66;
    MR_Word ConstGoals1_67;
    MR_Word ConstGoals0_77;
    MR_Word CurriedHeadVars_78;
    MR_Word CurriedArgModes_79;
    MR_Word STATE_VARIABLE_ProcInfo_89_89;
    MR_Word STATE_VARIABLE_ProcInfo_91_91;
    MR_Word STATE_VARIABLE_Renaming_94_94;
    MR_Word STATE_VARIABLE_ProcInfo_95_95;
    MR_Word STATE_VARIABLE_Renaming_96_96;
    MR_Word STATE_VARIABLE_KnownVarMap_97_97;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Box conv0_LVar_45;
    MR_Word ShroudedPredProcId_46;
    MR_Box conv2_RttiVarMaps_61;

    mercury__list__det_index1_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), HeadVars0_2, Index_38, &conv0_LVar_45);
    LVar_45 = ((MR_Word) (conv0_LVar_45));
    succeeded = ((((MR_tag((MR_Word) ConsId_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_37, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (succeeded)
    {
      ShroudedPredProcId_46 = ((MR_Word) ((MR_hl_field(3, ConsId_37, (MR_Integer) 1))));
      {
        MR_Word PredId_48;
        MR_Integer ProcId_49;
        MR_Word CalleePredInfo_50;
        MR_Word CalleeProcInfo_51;
        MR_Word PredOrFunc_52;
        MR_Word CalleeArgModes_53;
        MR_Word NonCurriedArgModes_55;
        MR_Word ProcDetism_56;
        MR_Word Var_86;
        MR_Word Var_87;

        Var_86 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_46);
        PredId_48 = ((MR_Word) ((MR_hl_field(0, Var_86, (MR_Integer) 0))));
        ProcId_49 = ((MR_Integer) ((MR_hl_field(0, Var_86, (MR_Integer) 1))));
        hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_1, PredId_48, ProcId_49, &CalleePredInfo_50, &CalleeProcInfo_51);
        PredOrFunc_52 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(CalleePredInfo_50);
        hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CalleeProcInfo_51, &CalleeArgModes_53);
        mercury__list__det_split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumArgs_39, CalleeArgModes_53, &CurriedArgModes1_54, &NonCurriedArgModes_55);
        hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(CalleeProcInfo_51, &ProcDetism_56);
        {
          Var_87 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_87, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_52));
          MR_hl_field(0, Var_87, 1) = ((MR_Box) (NonCurriedArgModes_55));
          MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_87, 3) = (MR_Box) ((MR_Unsigned) (ProcDetism_56));
        }
        GroundInstInfo_57 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_87)));
      }
    }
    else
    {
      MR_Word InMode_58;

      parse_tree__prog_mode__in_mode_1_p_0(&InMode_58);
      GroundInstInfo_57 = (MR_Word) ((MR_Unsigned) 0U);
      mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumArgs_39, ((MR_Box) (InMode_58)), &CurriedArgModes1_54);
    }
    hlds__hlds_proc_util__proc_info_create_vars_from_types_5_p_0(ModuleInfo_1, CurriedArgTypes_41, &CurriedHeadVars1_59, STATE_VARIABLE_ProcInfo_0_7, &STATE_VARIABLE_ProcInfo_89_89);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_89_89, &RttiVarMaps0_60);
    mercury__list__foldl_corresponding_5_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_2[1]), CurriedHeadVars1_59, CurriedArgRttiInfo_42, ((MR_Box) (RttiVarMaps0_60)), &conv2_RttiVarMaps_61);
    RttiVarMaps_61 = ((MR_Word) (conv2_RttiVarMaps_61));
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_61, STATE_VARIABLE_ProcInfo_89_89, &STATE_VARIABLE_ProcInfo_91_91);
    mercury__map__set_from_corresponding_lists_4_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), CurriedArgs_40, CurriedHeadVars1_59, STATE_VARIABLE_Renaming_0_9, &STATE_VARIABLE_Renaming_94_94);
    switch (IsConst_44) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word CurriedConstGoals_64;
          MR_Word ArgUnifyModes_68;
          MR_Word ConstNonLocals_69;
          MR_Word ConstInst_70;
          MR_Word ConstInstMapDelta_71;
          MR_Word ConstGoalInfo_72;
          MR_Word RHS_73;
          MR_Word UnifyMode_74;
          MR_Word ConstGoalExpr_75;
          MR_Word ConstGoal_76;
          MR_Word Var_101;
          MR_Word Var_103;
          MR_Word Var_104;
          MR_Word Var_112;
          MR_Word Var_119;

          transform_hlds__higher_order__make_specialized_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_116_101_114_109_115_95_95_91_52_93_95_48_13_p_0(ModuleInfo_1, CurriedHeadVars1_59, &ExtraCurriedHeadVars_62, &ExtraCurriedArgModes_63, CurriedHOArgs_43, STATE_VARIABLE_ProcInfo_91_91, &STATE_VARIABLE_ProcInfo_95_95, STATE_VARIABLE_Renaming_94_94, &STATE_VARIABLE_Renaming_96_96, STATE_VARIABLE_KnownVarMap_0_11, &STATE_VARIABLE_KnownVarMap_97_97, &CurriedConstGoals_64);
          {
            Var_101 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_101, 0) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_5[0]));
            MR_hl_field(0, Var_101, 1) = ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_116_101_114_109_115_95_95_91_52_93_95_48_13_p_0_2));
            MR_hl_field(0, Var_101, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_101, 3) = ((MR_Box) (ModuleInfo_1));
          }
          ArgUnifyModes_68 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), Var_101, CurriedArgModes1_54);
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CurriedHeadVars1_59, &ConstNonLocals_69);
          {
            ConstInst_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ConstInst_70, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(1, ConstInst_70, 1) = ((MR_Box) (GroundInstInfo_57));
          }
          {
            Var_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_104, 0) = ((MR_Box) (LVar_45));
            MR_hl_field(0, Var_104, 1) = ((MR_Box) (ConstInst_70));
          }
          {
            Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_103, 0) = ((MR_Box) (Var_104));
            MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ConstInstMapDelta_71 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_103);
          hlds__hlds_goal__goal_info_init_5_p_0(ConstNonLocals_69, ConstInstMapDelta_71, (MR_Integer) 0, (MR_Integer) 0, &ConstGoalInfo_72);
          {
            RHS_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, RHS_73, 0) = ((MR_Box) (ConsId_37));
            MR_hl_field(1, RHS_73, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(1, RHS_73, 2) = ((MR_Box) (CurriedHeadVars1_59));
          }
          {
            UnifyMode_74 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, UnifyMode_74, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, UnifyMode_74, 1) = ((MR_Box) (ConstInst_70));
            MR_hl_field(0, UnifyMode_74, 2) = ((MR_Box) (ConstInst_70));
            MR_hl_field(0, UnifyMode_74, 3) = ((MR_Box) (ConstInst_70));
          }
          {
            Var_112 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_112, 0) = ((MR_Box) (LVar_45));
            MR_hl_field(0, Var_112, 1) = ((MR_Box) (ConsId_37));
            MR_hl_field(0, Var_112, 2) = ((MR_Box) (CurriedHeadVars1_59));
            MR_hl_field(0, Var_112, 3) = ((MR_Box) (ArgUnifyModes_68));
            MR_hl_field(0, Var_112, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Var_112, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(0, Var_112, 6) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            ConstGoalExpr_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ConstGoalExpr_75, 0) = ((MR_Box) (LVar_45));
            MR_hl_field(1, ConstGoalExpr_75, 1) = ((MR_Box) (RHS_73));
            MR_hl_field(1, ConstGoalExpr_75, 2) = ((MR_Box) (UnifyMode_74));
            MR_hl_field(1, ConstGoalExpr_75, 3) = ((MR_Box) (Var_112));
            MR_hl_field(1, ConstGoalExpr_75, 4) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[6]));
          }
          {
            ConstGoal_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ConstGoal_76, 0) = ((MR_Box) (ConstGoalExpr_75));
            MR_hl_field(0, ConstGoal_76, 1) = ((MR_Box) (ConstGoalInfo_72));
          }
          {
            Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_119, 0) = ((MR_Box) (ConstGoal_76));
            MR_hl_field(1, Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ConstGoals0_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CurriedConstGoals_64, Var_119);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_92;
          MR_Word STATE_VARIABLE_KnownVarMap_93_142;

          {
            Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_92, 0) = ((MR_Box) (ConsId_37));
            MR_hl_field(0, Var_92, 1) = ((MR_Box) (CurriedHeadVars1_59));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), ((MR_Box) (LVar_45)), ((MR_Box) (Var_92)), STATE_VARIABLE_KnownVarMap_0_11, &STATE_VARIABLE_KnownVarMap_93_142);
          transform_hlds__higher_order__make_specialized_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_116_101_114_109_115_95_95_91_52_93_95_48_13_p_0(ModuleInfo_1, CurriedHeadVars1_59, &ExtraCurriedHeadVars_62, &ExtraCurriedArgModes_63, CurriedHOArgs_43, STATE_VARIABLE_ProcInfo_91_91, &STATE_VARIABLE_ProcInfo_95_95, STATE_VARIABLE_Renaming_94_94, &STATE_VARIABLE_Renaming_96_96, STATE_VARIABLE_KnownVarMap_93_142, &STATE_VARIABLE_KnownVarMap_97_97, &ConstGoals0_77);
        }
        break;
    }
    transform_hlds__higher_order__make_specialized_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_116_101_114_109_115_95_95_91_52_93_95_48_13_p_0(ModuleInfo_1, HeadVars0_2, &NewHeadVars1_65, &NewArgModes1_66, HOArgs_32, STATE_VARIABLE_ProcInfo_95_95, STATE_VARIABLE_ProcInfo_8, STATE_VARIABLE_Renaming_96_96, STATE_VARIABLE_Renaming_10, STATE_VARIABLE_KnownVarMap_97_97, STATE_VARIABLE_KnownVarMap_12, &ConstGoals1_67);
    transform_hlds__higher_order__higher_order_global_info__remove_const_higher_order_args_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), CurriedHOArgs_43, CurriedHeadVars1_59, &CurriedHeadVars_78);
    transform_hlds__higher_order__higher_order_global_info__remove_const_higher_order_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), CurriedHOArgs_43, CurriedArgModes1_54, &CurriedArgModes_79);
    Var_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), ExtraCurriedHeadVars_62, NewHeadVars1_65);
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), CurriedHeadVars_78, Var_121);
    Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExtraCurriedArgModes_63, NewArgModes1_66);
    *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), CurriedArgModes_79, Var_122);
    *HeadVar__13_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ConstGoals0_77, ConstGoals1_67);
  }
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__find_class_context_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarInfos_6,
  MR_Word Modes_7,
  MR_Word * Constraints_8)
{
  MR_Word RevUniv_9;
  MR_Word RevExist_10;
  MR_Word Univ_11;
  MR_Word Exist_12;

  transform_hlds__higher_order__make_specialized_preds__acc_class_context_7_p_0(ModuleInfo_5, VarInfos_6, Modes_7, (MR_Word) ((MR_Unsigned) 0U), &RevUniv_9, (MR_Word) ((MR_Unsigned) 0U), &RevExist_10);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), RevUniv_9, &Univ_11);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), RevExist_10, &Exist_12);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Constraints_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Univ_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Exist_12));
  }
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__acc_class_context_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevUniv_0_4,
  MR_Word * STATE_VARIABLE_RevUniv_5,
  MR_Word STATE_VARIABLE_RevExist_0_6,
  MR_Word * STATE_VARIABLE_RevExist_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_RevExist_7 = STATE_VARIABLE_RevExist_0_6;
        *STATE_VARIABLE_RevUniv_5 = STATE_VARIABLE_RevUniv_0_4;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.make_specialized_preds.acc_class_context\'/7", (MR_String) "mismatched list length");
          return;
        }
    else
    {
      MR_Word Var_52 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.make_specialized_preds.acc_class_context\'/7", (MR_String) "mismatched list length");
          return;
        }
      else
      {
        MR_Word Mode_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Modes_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_RevUniv_50_50;
        MR_Word STATE_VARIABLE_RevExist_51_51;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_RevUniv_0_4;
        MR_Word next_value_of_STATE_VARIABLE_RevExist_0_6;

        switch (MR_tag((MR_Word) Var_53)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_RevUniv_50_50 = STATE_VARIABLE_RevUniv_0_4;
              STATE_VARIABLE_RevExist_51_51 = STATE_VARIABLE_RevExist_0_6;
            }
            break;
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_RevUniv_50_50 = STATE_VARIABLE_RevUniv_0_4;
              STATE_VARIABLE_RevExist_51_51 = STATE_VARIABLE_RevExist_0_6;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Constraint_44 = ((MR_Word) ((MR_hl_field(2, Var_53, (MR_Integer) 0))));

              succeeded = check_hlds__mode_test__mode_is_input_2_p_0(ModuleInfo_1, Mode_40);
              if (succeeded)
              {
                succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ((MR_Box) (Constraint_44)), STATE_VARIABLE_RevUniv_0_4);
                if (succeeded)
                  STATE_VARIABLE_RevUniv_50_50 = STATE_VARIABLE_RevUniv_0_4;
                else
                  {
                    STATE_VARIABLE_RevUniv_50_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_RevUniv_50_50, 0) = ((MR_Box) (Constraint_44));
                    MR_hl_field(1, STATE_VARIABLE_RevUniv_50_50, 1) = ((MR_Box) (STATE_VARIABLE_RevUniv_0_4));
                  }
                STATE_VARIABLE_RevExist_51_51 = STATE_VARIABLE_RevExist_0_6;
              }
              else
              {
                succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ((MR_Box) (Constraint_44)), STATE_VARIABLE_RevExist_0_6);
                if (succeeded)
                  STATE_VARIABLE_RevExist_51_51 = STATE_VARIABLE_RevExist_0_6;
                else
                  {
                    STATE_VARIABLE_RevExist_51_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_RevExist_51_51, 0) = ((MR_Box) (Constraint_44));
                    MR_hl_field(1, STATE_VARIABLE_RevExist_51_51, 1) = ((MR_Box) (STATE_VARIABLE_RevExist_0_6));
                  }
                STATE_VARIABLE_RevUniv_50_50 = STATE_VARIABLE_RevUniv_0_4;
              }
            }
            break;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_52;
        next_value_of_HeadVar__3_3 = Modes_41;
        next_value_of_STATE_VARIABLE_RevUniv_0_4 = STATE_VARIABLE_RevUniv_50_50;
        next_value_of_STATE_VARIABLE_RevExist_0_6 = STATE_VARIABLE_RevExist_51_51;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_RevUniv_0_4 = next_value_of_STATE_VARIABLE_RevUniv_0_4;
        STATE_VARIABLE_RevExist_0_6 = next_value_of_STATE_VARIABLE_RevExist_0_6;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__construct_created_spec_name_status_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Request_11,
  MR_Word PredInfo0_12,
  MR_String * SpecName_13,
  MR_Word * Origin_14,
  MR_Word * PredStatus_15,
  MR_Integer * NewProcId_16,
  MR_Word STATE_VARIABLE_GlobalInfo_0_38,
  MR_Word * STATE_VARIABLE_GlobalInfo_39)
{
  MR_Word PredOrFunc_18;
  MR_Word CallerPPId_19;
  MR_Word CalleePPId_20;
  MR_Word RequestKind_26;
  MR_Word ProcTransform_32;
  MR_Word OrigOrigin_35;
  MR_Word CalleePredId_36;
  MR_Integer CalleeProcId_37;

  PredOrFunc_18 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_12);
  CallerPPId_19 = ((MR_Word) ((MR_hl_field(0, Request_11, (MR_Integer) 0))));
  CalleePPId_20 = ((MR_Word) ((MR_hl_field(0, Request_11, (MR_Integer) 1))));
  RequestKind_26 = ((MR_Unsigned) ((MR_hl_field(0, Request_11, (MR_Integer) 6))) & (MR_Integer) 1);
  switch (RequestKind_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer SeqNum_33;
        MR_String Name0_34;
        MR_Word Transform_43;

        *NewProcId_16 = hlds__hlds_pred__initial_proc_id_0_f_0();
        transform_hlds__higher_order__higher_order_global_info__hogi_allocate_id_3_p_0(&SeqNum_33, STATE_VARIABLE_GlobalInfo_0_38, STATE_VARIABLE_GlobalInfo_39);
        {
          Transform_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Transform_43, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
          MR_hl_field(0, Transform_43, 1) = ((MR_Box) (SeqNum_33));
        }
        Name0_34 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo0_12);
        hlds__pred_name__make_transformed_pred_name_3_p_0(Name0_34, Transform_43, SpecName_13);
        {
          ProcTransform_32 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, ProcTransform_32, 0) = ((MR_Box) (SeqNum_33));
        }
        *PredStatus_15 = (MR_Word) (((MR_Box) ((MR_Unsigned) 32U)));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CallerPredId_28 = ((MR_Word) ((MR_hl_field(0, CallerPPId_19, (MR_Integer) 0))));
        MR_String CallerPredName0_30;
        MR_Word Transform_31;

        *NewProcId_16 = ((MR_Integer) ((MR_hl_field(0, CallerPPId_19, (MR_Integer) 1))));
        CallerPredName0_30 = hlds__hlds_module__predicate_name_2_f_0(ModuleInfo_10, CallerPredId_28);
        {
          Transform_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Transform_31, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
          MR_hl_field(1, Transform_31, 1) = ((MR_Box) (CallerPredId_28));
          MR_hl_field(1, Transform_31, 2) = ((MR_Box) (*NewProcId_16));
          MR_hl_field(1, Transform_31, 3) = ((MR_Box) ((MR_Integer) 1));
        }
        hlds__pred_name__make_transformed_pred_name_3_p_0(CallerPredName0_30, Transform_31, SpecName_13);
        {
          ProcTransform_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ProcTransform_32, 0) = ((MR_Box) (CallerPredId_28));
          MR_hl_field(1, ProcTransform_32, 1) = ((MR_Box) (*NewProcId_16));
        }
        hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_12, PredStatus_15);
        *STATE_VARIABLE_GlobalInfo_39 = STATE_VARIABLE_GlobalInfo_0_38;
      }
      break;
  }
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_12, &OrigOrigin_35);
  CalleePredId_36 = ((MR_Word) ((MR_hl_field(0, CalleePPId_20, (MR_Integer) 0))));
  CalleeProcId_37 = ((MR_Integer) ((MR_hl_field(0, CalleePPId_20, (MR_Integer) 1))));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    *Origin_14 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) (ProcTransform_32));
    MR_hl_field(3, base, 1) = ((MR_Box) (OrigOrigin_35));
    MR_hl_field(3, base, 2) = ((MR_Box) (CalleePredId_36));
    MR_hl_field(3, base, 3) = ((MR_Box) (CalleeProcId_37));
  }
}

void mercury__transform_hlds__higher_order__make_specialized_preds__init(void)
{
}

void mercury__transform_hlds__higher_order__make_specialized_preds__init_type_tables(void)
{
}

void mercury__transform_hlds__higher_order__make_specialized_preds__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__higher_order__make_specialized_preds__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.higher_order.make_specialized_preds.
