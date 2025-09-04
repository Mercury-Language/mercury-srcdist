/*
** Automatically generated from `higher_order.make_specialized_preds.m'
** by the Mercury compiler,
** version rotd-2025-09-04
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
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
#include "hlds.hlds_markers.mih"
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
#include "libs.file_util.mih"
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
#include "parse_tree.d_file_deps.mih"
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
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_type_unify.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
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
#include "parse_tree.module_qual.mq_info.mih"
#include "transform_hlds.higher_order.higher_order_global_info.mih"
#include "transform_hlds.higher_order.specialize_calls.mih"



struct transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0_s {
  MR_bool transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded;
  MR_Word transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__OrigPredProcId_57;
  MR_Word transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ParentVersions_65;
  MR_Integer transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ArgDepth_66;
  jmp_buf transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__commit_0;
  MR_Integer transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__OldArgDepth_67;
  MR_Word transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ParentVersion_71;
  MR_Word transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__Var_85;
  MR_Box transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__conv3_ParentVersion_71;
};

struct transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0_s {
  MR_Word transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6;
  MR_bool transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded;
  MR_Word transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__SpecVersions_21;
  MR_Word transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Params_22;
  MR_Word transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__ModuleInfo_23;
  jmp_buf transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__commit_0;
  MR_Word transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Version_25;
  MR_Box transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__conv1_Version_25;
};

struct transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0_s {
  MR_bool transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__succeeded;
  MR_Word transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25;
  MR_Word transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__SpecVersions_55;
  MR_Word transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Params_56;
  MR_Word transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__ModuleInfo_57;
  jmp_buf transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__commit_0;
  MR_Word transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Version_59;
  MR_Box transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__conv1_Version_59;
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
transform_hlds__higher_order__make_specialized_preds__IntroducedFrom__pred__specialize_and_add_new_proc__606__1_4_p_0(
  MR_Word LambdaHeadVar__1_135,
  MR_Word LambdaHeadVar__2_136,
  MR_Word LambdaHeadVar__3_137,
  MR_Word * LambdaHeadVar__4_138);

static MR_bool MR_CALL 
transform_hlds__higher_order__make_specialized_preds__IntroducedFrom__pred__specialize_and_add_new_proc__545__1_2_p_0(
  MR_Word LambdaHeadVar__1_124,
  MR_Word * LambdaHeadVar__2_125);

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
  MR_Word STATE_VARIABLE_RttiVarMaps_0_28,
  MR_Word * STATE_VARIABLE_RttiVarMaps_29);

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
  MR_Word STATE_VARIABLE_AcceptedRequests_0_33,
  MR_Word * STATE_VARIABLE_AcceptedRequests_34,
  MR_Word STATE_VARIABLE_LoopRequests_0_35,
  MR_Word * STATE_VARIABLE_LoopRequests_36);

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
  MR_Word STATE_VARIABLE_GlobalInfo_0_59,
  MR_Word * STATE_VARIABLE_GlobalInfo_60);

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
  MR_Word STATE_VARIABLE_NewProcInfo_0_118,
  MR_Word STATE_VARIABLE_NewPredInfo_0_119,
  MR_Word * STATE_VARIABLE_NewPredInfo_120,
  MR_Word STATE_VARIABLE_GlobalInfo_0_121,
  MR_Word * STATE_VARIABLE_GlobalInfo_122);

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
transform_hlds__higher_order__make_specialized_preds__higher_order_record_new_specialized_pred_4_p_0(
  MR_Word CalleePPId_5,
  MR_Word NewPred_6,
  MR_Word STATE_VARIABLE_GlobalInfo_0_12,
  MR_Word * STATE_VARIABLE_GlobalInfo_13);


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
transform_hlds__higher_order__make_specialized_preds__IntroducedFrom__pred__specialize_and_add_new_proc__606__1_4_p_0(
  MR_Word LambdaHeadVar__1_135,
  MR_Word LambdaHeadVar__2_136,
  MR_Word LambdaHeadVar__3_137,
  MR_Word * LambdaHeadVar__4_138)
{
  MR_Word Locn_64;

  {
    Locn_64 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Locn_64, 0) = ((MR_Box) (LambdaHeadVar__2_136));
  }
  hlds__hlds_rtti__rtti_set_type_info_locn_4_p_0(LambdaHeadVar__1_135, Locn_64, LambdaHeadVar__3_137, LambdaHeadVar__4_138);
}

static MR_bool MR_CALL 
transform_hlds__higher_order__make_specialized_preds__IntroducedFrom__pred__specialize_and_add_new_proc__545__1_2_p_0(
  MR_Word LambdaHeadVar__1_124,
  MR_Word * LambdaHeadVar__2_125)
{
  MR_bool succeeded = ((MR_tag((MR_Word) LambdaHeadVar__1_124)) == (MR_Integer) 0);

  if (succeeded)
    *LambdaHeadVar__2_125 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_124, 0))));
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
        MR_Word Type0_7 = ((MR_Word) ((MR_hl_field(1, RttiVarInfo0_5, 0))));
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
        MR_Word Constraint0_9 = ((MR_Word) ((MR_hl_field(2, RttiVarInfo0_5, 0))));
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

  transform_hlds__higher_order__make_specialized_preds__substitute_higher_order_arg_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_HOArg_13);
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

  transform_hlds__higher_order__make_specialized_preds__substitute_rtti_var_info_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_RttiVarInfo_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_RttiVarInfo_6));
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__substitute_higher_order_arg_3_p_0(
  MR_Word Subn_4,
  MR_Word STATE_VARIABLE_HOArg_0_12,
  MR_Word * STATE_VARIABLE_HOArg_13)
{
  MR_Word CurriedArgTypes0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HOArg_0_12, 4))));
  MR_Word CurriedRttiTypes0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HOArg_0_12, 5))));
  MR_Word CurriedHOArgs0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HOArg_0_12, 6))));
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
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HOArg_0_12, 0))));
  Var_40 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_HOArg_0_12, 1))));
  Var_41 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_HOArg_0_12, 2))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HOArg_0_12, 3))));
  Var_46 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_HOArg_0_12, 7))) & (MR_Integer) 1);
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
  MR_Word STATE_VARIABLE_RttiVarMaps_0_28,
  MR_Word * STATE_VARIABLE_RttiVarMaps_29)
{
  MR_bool succeeded;

  *HeadVar__4_4 = (MR_Integer) ((MR_Unsigned) Index_9 + (MR_Unsigned) 1);
  switch (MR_tag((MR_Word) ConstraintType_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ConstraintTVar_11 = ((MR_Word) ((MR_hl_field(0, ConstraintType_8, 0))));
        MR_Word Var_31;
        MR_Word Var_32;

        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_7));
          MR_hl_field(1, Var_31, 1) = ((MR_Box) (Index_9));
        }
        succeeded = hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(STATE_VARIABLE_RttiVarMaps_0_28, ConstraintTVar_11, &Var_32);
        if (succeeded)
          *STATE_VARIABLE_RttiVarMaps_29 = STATE_VARIABLE_RttiVarMaps_0_28;
        else
          hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(ConstraintTVar_11, Var_31, STATE_VARIABLE_RttiVarMaps_0_28, STATE_VARIABLE_RttiVarMaps_29);
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_RttiVarMaps_29 = STATE_VARIABLE_RttiVarMaps_0_28;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_RttiVarMaps_29 = STATE_VARIABLE_RttiVarMaps_0_28;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConstraintType_8, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_RttiVarMaps_29 = STATE_VARIABLE_RttiVarMaps_0_28;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_RttiVarMaps_29 = STATE_VARIABLE_RttiVarMaps_0_28;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_RttiVarMaps_29 = STATE_VARIABLE_RttiVarMaps_0_28;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_RttiVarMaps_29 = STATE_VARIABLE_RttiVarMaps_0_28;
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
  MR_Word conv0_STATE_VARIABLE_RttiVarMaps_29;

  transform_hlds__higher_order__make_specialized_preds__update_type_info_locn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_RttiVarMaps_29);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_RttiVarMaps_29));
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
        MR_Word TypeInfoType_8 = ((MR_Word) ((MR_hl_field(1, VarInfo_6, 0))));
        MR_Word STATE_VARIABLE_RttiVarMaps_1_18;
        MR_Word TVar_9;

        hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(Var_5, TypeInfoType_8, STATE_VARIABLE_RttiVarMaps_0_16, &STATE_VARIABLE_RttiVarMaps_1_18);
        succeeded = ((MR_tag((MR_Word) TypeInfoType_8)) == (MR_Integer) 0);
        if (succeeded)
        {
          TVar_9 = ((MR_Word) ((MR_hl_field(0, TypeInfoType_8, 0))));
          {
            MR_Word Var_19;
            MR_Word Var_32;

            {
              Var_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_19, 0) = ((MR_Box) (Var_5));
            }
            succeeded = hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(STATE_VARIABLE_RttiVarMaps_1_18, TVar_9, &Var_32);
            if (succeeded)
              *STATE_VARIABLE_RttiVarMaps_17 = STATE_VARIABLE_RttiVarMaps_1_18;
            else
              hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(TVar_9, Var_19, STATE_VARIABLE_RttiVarMaps_1_18, STATE_VARIABLE_RttiVarMaps_17);
          }
        }
        else
          *STATE_VARIABLE_RttiVarMaps_17 = STATE_VARIABLE_RttiVarMaps_1_18;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Constraint_11 = ((MR_Word) ((MR_hl_field(2, VarInfo_6, 0))));
        MR_Word Var_12;

        succeeded = hlds__hlds_rtti__rtti_search_typeclass_info_var_3_p_0(STATE_VARIABLE_RttiVarMaps_0_16, Constraint_11, &Var_12);
        if (succeeded)
          *STATE_VARIABLE_RttiVarMaps_17 = STATE_VARIABLE_RttiVarMaps_0_16;
        else
        {
          MR_Word ConstraintArgTypes_14;
          MR_Word STATE_VARIABLE_RttiVarMaps_3_21;
          MR_Word Var_22;
          MR_Box conv3_Var_15;
          MR_Box conv2_STATE_VARIABLE_RttiVarMaps_17;

          hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_p_0(Constraint_11, Var_5, STATE_VARIABLE_RttiVarMaps_0_16, &STATE_VARIABLE_RttiVarMaps_3_21);
          ConstraintArgTypes_14 = ((MR_Word) ((MR_hl_field(0, Constraint_11, 1))));
          {
            Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_22, 0) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_8[1]));
            MR_hl_field(0, Var_22, 1) = ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__add_rtti_info_4_p_0_1));
            MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_22, 3) = ((MR_Box) (Var_5));
          }
          mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), Var_22, ConstraintArgTypes_14, ((MR_Box) ((MR_Integer) 1)), &conv3_Var_15, ((MR_Box) (STATE_VARIABLE_RttiVarMaps_3_21)), &conv2_STATE_VARIABLE_RttiVarMaps_17);
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
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, VarAndType_6, 0))));
  MR_Word Type_9 = ((MR_Word) ((MR_hl_field(0, VarAndType_6, 1))));
  MR_Word IsDummy_10;
  MR_Word Entry0_11;
  MR_String Name_12;
  MR_Word Entry_15;

  IsDummy_10 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_5, Type_9);
  parse_tree__var_table__lookup_var_entry_3_p_0(STATE_VARIABLE_VarTable_0_16, Var_8, &Entry0_11);
  Name_12 = ((MR_String) ((MR_hl_field(0, Entry0_11, 0))));
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
  MR_Word PredId_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Integer ProcId_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Word NewRequests_12;

  transform_hlds__higher_order__specialize_calls__ho_traverse_proc_6_p_0(MustRecompute_7, PredId_8, ProcId_9, &NewRequests_12, STATE_VARIABLE_GlobalInfo_0_15, STATE_VARIABLE_GlobalInfo_16);
  mercury__set__union_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0), NewRequests_12, STATE_VARIABLE_Requests_0_13, STATE_VARIABLE_Requests_14);
}

static MR_Word MR_CALL 
transform_hlds__higher_order__make_specialized_preds__get_np_version_ppid_1_f_0(
  MR_Word NewPred_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, NewPred_3, 0))));

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

  (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ParentVersion_71 = ((MR_Word) ((env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__conv3_ParentVersion_71));
  transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__Var_85 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ParentVersion_71, 0))));
  (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__OldArgDepth_67 = ((MR_Integer) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ParentVersion_71, 1))));
  (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0((env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__OrigPredProcId_57, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__Var_85);
  if ((env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
  {
    (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ArgDepth_66 >= (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__OldArgDepth_67);
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
      mercury__list__member_2_p_1((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_parent_version_info_0), &(env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__conv3_ParentVersion_71, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ParentVersions_65, transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_3, env_ptr);
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
  MR_Word STATE_VARIABLE_AcceptedRequests_0_33,
  MR_Word * STATE_VARIABLE_AcceptedRequests_34,
  MR_Word STATE_VARIABLE_LoopRequests_0_35,
  MR_Word * STATE_VARIABLE_LoopRequests_36)
{
  struct transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0_s env;

  {
    MR_Word ModuleInfo_16;
    MR_Word CalleePredProcId_18;
    MR_Word HOArgs_21;
    MR_Word RequestKind_23;
    MR_Word Context_24;
    MR_Word CalleePredId_25;
    MR_Word CalleePredInfo_27;
    MR_Word Var_17;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Unsigned packed_word_0;
    MR_Integer Var_26;

    ModuleInfo_16 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(GlobalInfo_11);
    CalleePredProcId_18 = ((MR_Word) ((MR_hl_field(0, Request_12, 1))));
    HOArgs_21 = ((MR_Word) ((MR_hl_field(0, Request_12, 4))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Request_12, 6)));
    RequestKind_23 = ((MR_Unsigned) ((MR_hl_field(0, Request_12, 6))) & (MR_Integer) 1);
    Context_24 = ((MR_Word) ((MR_hl_field(0, Request_12, 7))));
    CalleePredId_25 = ((MR_Word) ((MR_hl_field(0, CalleePredProcId_18, 0))));
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_16, CalleePredId_25, &CalleePredInfo_27);
    switch (RequestKind_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word GoalSizeMap_29;
          MR_Integer GoalSize_31;
          MR_Integer GoalSize0_30;
          MR_Box conv0_GoalSize0_30;
          MR_String Msg_32;
          MR_Word STATE_VARIABLE_LoopRequests_1_41;
          MR_Word Params_46;
          MR_Word CallerPredProcId_47;
          MR_Word CalleePredProcId_48;
          MR_Word HOArgs_51;
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Integer Var_68;
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Integer Var_75;

          GoalSizeMap_29 = transform_hlds__higher_order__higher_order_global_info__hogi_get_goal_size_map_1_f_0(GlobalInfo_11);
          (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), GoalSizeMap_29, ((MR_Box) (CalleePredId_25)), &conv0_GoalSize0_30);
          if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
          {
            GoalSize0_30 = ((MR_Integer) (conv0_GoalSize0_30));
            (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = MR_TRUE;
          }
          if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
            GoalSize_31 = GoalSize0_30;
          else
            GoalSize_31 = (MR_Integer) 0;
          Params_46 = transform_hlds__higher_order__higher_order_global_info__hogi_get_params_1_f_0(GlobalInfo_11);
          CallerPredProcId_47 = ((MR_Word) ((MR_hl_field(0, Request_12, 0))));
          CalleePredProcId_48 = ((MR_Word) ((MR_hl_field(0, Request_12, 1))));
          HOArgs_51 = ((MR_Word) ((MR_hl_field(0, Request_12, 4))));
          Var_68 = ((MR_Integer) ((MR_hl_field(0, Params_46, 1))));
          (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = (GoalSize_31 > Var_68);
          if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
          {
            Msg_32 = (MR_String) "goal too large";
            STATE_VARIABLE_LoopRequests_1_41 = STATE_VARIABLE_LoopRequests_0_35;
            (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = MR_TRUE;
          }
          else
          {
            MR_Integer Var_69;
            MR_Integer Var_70;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Integer Var_79;

            Var_69 = transform_hlds__higher_order__higher_order_global_info__higher_order_max_args_size_1_f_0(HOArgs_51);
            Var_70 = ((MR_Integer) ((MR_hl_field(0, Params_46, 2))));
            (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = (Var_69 > Var_70);
            if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
            {
              Msg_32 = (MR_String) "args too large";
              STATE_VARIABLE_LoopRequests_1_41 = STATE_VARIABLE_LoopRequests_0_35;
              (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = MR_TRUE;
            }
            else
            {
              MR_Word VersionInfoMap_55;
              MR_Word CallerVersionInfo_61;
              MR_Word CalleeVersionInfo_56;
              MR_Box conv1_CalleeVersionInfo_56;
              MR_Box conv2_CallerVersionInfo_61;
              MR_Word Var_62;
              MR_Integer Var_63;
              MR_Word Var_64;

              VersionInfoMap_55 = transform_hlds__higher_order__higher_order_global_info__hogi_get_version_info_map_1_f_0(GlobalInfo_11);
              (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0), VersionInfoMap_55, ((MR_Box) (CalleePredProcId_48)), &conv1_CalleeVersionInfo_56);
              if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
              {
                CalleeVersionInfo_56 = ((MR_Word) (conv1_CalleeVersionInfo_56));
                (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = MR_TRUE;
              }
              if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
              {
                MR_Integer Var_58;
                MR_Word Var_59;
                MR_Word Var_60;

                (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__OrigPredProcId_57 = ((MR_Word) ((MR_hl_field(0, CalleeVersionInfo_56, 0))));
              }
              else
                (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__OrigPredProcId_57 = CalleePredProcId_48;
              (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0), VersionInfoMap_55, ((MR_Box) (CallerPredProcId_47)), &conv2_CallerVersionInfo_61);
              if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
              {
                CallerVersionInfo_61 = ((MR_Word) (conv2_CallerVersionInfo_61));
                (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = MR_TRUE;
              }
              if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
              {
                (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ParentVersions_65 = ((MR_Word) ((MR_hl_field(0, CallerVersionInfo_61, 3))));
                (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ArgDepth_66 = transform_hlds__higher_order__higher_order_global_info__higher_order_max_args_depth_1_f_0(HOArgs_51);
                transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_4(&env);
                if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
                {
                  Msg_32 = (MR_String) "recursive specialization";
                  {
                    STATE_VARIABLE_LoopRequests_1_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_LoopRequests_1_41, 0) = ((MR_Box) (Request_12));
                    MR_hl_field(1, STATE_VARIABLE_LoopRequests_1_41, 1) = ((MR_Box) (STATE_VARIABLE_LoopRequests_0_35));
                  }
                  (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = MR_TRUE;
                }
              }
            }
          }
          if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
          {
            *STATE_VARIABLE_LoopRequests_36 = STATE_VARIABLE_LoopRequests_1_41;
            if (!((MaybeProgressStream_10 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word ProgressStream_87 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_10, 0))));

              transform_hlds__higher_order__make_specialized_preds__write_request_9_p_0(ProgressStream_87, ModuleInfo_16, CalleePredInfo_27, (MR_String) "Request for", (MR_Word) ((MR_Unsigned) 0U), HOArgs_21, Context_24);
              mercury__io__write_string_4_p_0(ProgressStream_87, (MR_String) "%    request not specialized (");
              mercury__io__write_string_4_p_0(ProgressStream_87, Msg_32);
              mercury__io__write_string_4_p_0(ProgressStream_87, (MR_String) ").\n");
            }
            *STATE_VARIABLE_AcceptedRequests_34 = STATE_VARIABLE_AcceptedRequests_0_33;
          }
          else
          {
            if (!((MaybeProgressStream_10 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word ProgressStream_98 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_10, 0))));

              transform_hlds__higher_order__make_specialized_preds__write_request_9_p_0(ProgressStream_98, ModuleInfo_16, CalleePredInfo_27, (MR_String) "Request for", (MR_Word) ((MR_Unsigned) 0U), HOArgs_21, Context_24);
              mercury__io__write_string_4_p_0(ProgressStream_98, (MR_String) "%    request specialized.\n");
            }
            mercury__list__cons_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0), ((MR_Box) (Request_12)), STATE_VARIABLE_AcceptedRequests_0_33, STATE_VARIABLE_AcceptedRequests_34);
            *STATE_VARIABLE_LoopRequests_36 = STATE_VARIABLE_LoopRequests_0_35;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          if (!((MaybeProgressStream_10 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word ProgressStream_102 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_10, 0))));

            transform_hlds__higher_order__make_specialized_preds__write_request_9_p_0(ProgressStream_102, ModuleInfo_16, CalleePredInfo_27, (MR_String) "Request for", (MR_Word) ((MR_Unsigned) 0U), HOArgs_21, Context_24);
            mercury__io__write_string_4_p_0(ProgressStream_102, (MR_String) "%    request specialized.\n");
          }
          mercury__list__cons_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0), ((MR_Box) (Request_12)), STATE_VARIABLE_AcceptedRequests_0_33, STATE_VARIABLE_AcceptedRequests_34);
          *STATE_VARIABLE_LoopRequests_36 = STATE_VARIABLE_LoopRequests_0_35;
        }
        break;
    }
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

  (env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Version_25 = ((MR_Word) ((env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__conv1_Version_25));
  transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_24;

    (env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded = transform_hlds__higher_order__higher_order_global_info__version_matches_5_p_0((env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Params_22, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__ModuleInfo_23, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Version_25, &Var_24);
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
      mercury__set__member_2_p_1((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0), &(env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__conv1_Version_25, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__SpecVersions_21, transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_3, env_ptr);
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
    MR_Word NewPredMap_19;
    MR_Word CalleePredProcId_20;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Box conv0_SpecVersions_21;

    NewPredMap_19 = transform_hlds__higher_order__higher_order_global_info__hogi_get_new_pred_map_1_f_0(GlobalInfo_5);
    CalleePredProcId_20 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, 1))));
    (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), NewPredMap_19, ((MR_Box) (CalleePredProcId_20)), &conv0_SpecVersions_21);
    if ((env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded)
    {
      (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__SpecVersions_21 = ((MR_Word) (conv0_SpecVersions_21));
      (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded = MR_TRUE;
    }
    if ((env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded)
    {
      (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Params_22 = transform_hlds__higher_order__higher_order_global_info__hogi_get_params_1_f_0(GlobalInfo_5);
      (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__ModuleInfo_23 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(GlobalInfo_5);
      transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_4(&env);
    }
    if ((env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded)
    {
      MR_Word CallerPredProcId_8 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, 0))));
      MR_Word Var_11;
      MR_Word Var_12;
      MR_Word Var_13;
      MR_Word Var_14;
      MR_Word Var_15;
      MR_Word Var_16;
      MR_Word Var_17;

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
      MR_Word STATE_VARIABLE_GlobalInfo_1_16;
      MR_Word next_value_of_Requests0_8;
      MR_Word next_value_of_STATE_VARIABLE_GlobalInfo_0_12;

      transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_7_p_0(MaybeProgressStream_7, Requests0_8, &Requests1_11, STATE_VARIABLE_GlobalInfo_0_12, &STATE_VARIABLE_GlobalInfo_1_16);
      // direct tailcall eliminated
      ;
      next_value_of_Requests0_8 = Requests1_11;
      next_value_of_STATE_VARIABLE_GlobalInfo_0_12 = STATE_VARIABLE_GlobalInfo_1_16;
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

  transform_hlds__higher_order__make_specialized_preds__ho_fixup_pred_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_Requests_14, ((MR_Word) (wrapper_arg_4)), &conv12_STATE_VARIABLE_GlobalInfo_16);
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

  transform_hlds__higher_order__make_specialized_preds__ho_fixup_pred_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_Requests_14, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_GlobalInfo_16);
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

  transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_PredProcIdsToFix_10);
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
  MR_Word conv1_STATE_VARIABLE_AcceptedRequests_34;
  MR_Word conv0_STATE_VARIABLE_LoopRequests_36;

  transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_AcceptedRequests_34, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_LoopRequests_36);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_AcceptedRequests_34));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_LoopRequests_36));
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
  MR_Box conv2_STATE_VARIABLE_IO_1_32;

  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_7[0]));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_7_p_0_1));
    MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_29, 3) = ((MR_Box) (MaybeProgressStream_8));
    MR_hl_field(0, Var_29, 4) = ((MR_Box) (STATE_VARIABLE_GlobalInfo_0_25));
  }
  mercury__set__foldl3_8_p_2((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_29, Requests0_9, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_Requests_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_LoopRequests_14, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_1_32);
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
    MR_Word STATE_VARIABLE_GlobalInfo_1_34;
    MR_Word Var_36;
    MR_Word STATE_VARIABLE_GlobalInfo_2_37;
    MR_Word STATE_VARIABLE_GlobalInfo_3_38;
    MR_Word NewPredProcIds_54;
    MR_Word Var_57;
    MR_Word Var_66;
    MR_Box conv6_PredProcIdsToFix_20;
    MR_Box conv11_NewRequests_10;
    MR_Box conv10_STATE_VARIABLE_GlobalInfo_2_37;
    MR_Box conv15__Requests_64;
    MR_Box conv14_STATE_VARIABLE_GlobalInfo_3_38;

    mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), &PredProcIdsToFix0_17);
    transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0(MaybeProgressStream_8, Requests_13, (MR_Word) ((MR_Unsigned) 0U), &NewPredList_18, PredProcIdsToFix0_17, &PredProcIdsToFix1_19, STATE_VARIABLE_GlobalInfo_0_25, &STATE_VARIABLE_GlobalInfo_1_34);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_36, 0) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_4[4]));
      MR_hl_field(0, Var_36, 1) = ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_7_p_0_2));
      MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_36, 3) = ((MR_Box) (STATE_VARIABLE_GlobalInfo_1_34));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[1]), Var_36, LoopRequests_14, ((MR_Box) (PredProcIdsToFix1_19)), &conv6_PredProcIdsToFix_20);
    PredProcIdsToFix_20 = ((MR_Word) (conv6_PredProcIdsToFix_20));
    NewPredProcIds_54 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_2[6]), NewPredList_18);
    Var_57 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[4]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_9[0]), NewPredProcIds_54, ((MR_Box) (Var_57)), &conv11_NewRequests_10, ((MR_Box) (STATE_VARIABLE_GlobalInfo_1_34)), &conv10_STATE_VARIABLE_GlobalInfo_2_37);
    *NewRequests_10 = ((MR_Word) (conv11_NewRequests_10));
    STATE_VARIABLE_GlobalInfo_2_37 = ((MR_Word) (conv10_STATE_VARIABLE_GlobalInfo_2_37));
    Var_66 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0));
    mercury__set__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[4]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_9[1]), PredProcIdsToFix_20, ((MR_Box) (Var_66)), &conv15__Requests_64, ((MR_Box) (STATE_VARIABLE_GlobalInfo_2_37)), &conv14_STATE_VARIABLE_GlobalInfo_3_38);
    STATE_VARIABLE_GlobalInfo_3_38 = ((MR_Word) (conv14_STATE_VARIABLE_GlobalInfo_3_38));
    if ((NewPredList_18 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_GlobalInfo_26 = STATE_VARIABLE_GlobalInfo_3_38;
    else
    {
      MR_Word ModuleInfo0_23;
      MR_Word ModuleInfo_24;

      ModuleInfo0_23 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(STATE_VARIABLE_GlobalInfo_3_38);
      hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(ModuleInfo0_23, &ModuleInfo_24);
      transform_hlds__higher_order__higher_order_global_info__hogi_set_module_info_3_p_0(ModuleInfo_24, STATE_VARIABLE_GlobalInfo_3_38, STATE_VARIABLE_GlobalInfo_26);
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

  (env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Version_59 = ((MR_Word) ((env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__conv1_Version_59));
  transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_58;

    (env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__succeeded = transform_hlds__higher_order__higher_order_global_info__version_matches_5_p_0((env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Params_56, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__ModuleInfo_57, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Version_59, &Var_58);
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
      mercury__set__member_2_p_1((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0), &(env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__conv1_Version_59, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__SpecVersions_55, transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_3, env_ptr);
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
      MR_Word STATE_VARIABLE_PredsToFix_1_41;
      MR_Word STATE_VARIABLE_GlobalInfo_1_42;
      MR_Word STATE_VARIABLE_NewPreds_1_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word NewPredMap_53;
      MR_Word CalleePredProcId_54;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Box conv0_SpecVersions_55;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_NewPreds_0_3;
      MR_Word next_value_of_STATE_VARIABLE_PredsToFix_0_5;
      MR_Word next_value_of_STATE_VARIABLE_GlobalInfo_0_7;

      (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      Requests_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      Var_40 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, 0))));
      mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (Var_40)), STATE_VARIABLE_PredsToFix_0_5, &STATE_VARIABLE_PredsToFix_1_41);
      NewPredMap_53 = transform_hlds__higher_order__higher_order_global_info__hogi_get_new_pred_map_1_f_0(STATE_VARIABLE_GlobalInfo_0_7);
      CalleePredProcId_54 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, 1))));
      (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), NewPredMap_53, ((MR_Box) (CalleePredProcId_54)), &conv0_SpecVersions_55);
      if ((env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__succeeded)
      {
        (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__SpecVersions_55 = ((MR_Word) (conv0_SpecVersions_55));
        (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__succeeded = MR_TRUE;
      }
      if ((env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__succeeded)
      {
        (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Params_56 = transform_hlds__higher_order__higher_order_global_info__hogi_get_params_1_f_0(STATE_VARIABLE_GlobalInfo_0_7);
        (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__ModuleInfo_57 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(STATE_VARIABLE_GlobalInfo_0_7);
        transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_4(&env);
      }
      if ((env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__succeeded)
      {
        STATE_VARIABLE_GlobalInfo_1_42 = STATE_VARIABLE_GlobalInfo_0_7;
        STATE_VARIABLE_NewPreds_1_44 = STATE_VARIABLE_NewPreds_0_3;
      }
      else
      {
        MR_Word NewPred_31;

        transform_hlds__higher_order__make_specialized_preds__create_new_ho_spec_pred_7_p_0(MaybeProgressStream_1, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, &NewPred_31, STATE_VARIABLE_GlobalInfo_0_7, &STATE_VARIABLE_GlobalInfo_1_42);
        {
          STATE_VARIABLE_NewPreds_1_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_NewPreds_1_44, 0) = ((MR_Box) (NewPred_31));
          MR_hl_field(1, STATE_VARIABLE_NewPreds_1_44, 1) = ((MR_Box) (STATE_VARIABLE_NewPreds_0_3));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Requests_26;
      next_value_of_STATE_VARIABLE_NewPreds_0_3 = STATE_VARIABLE_NewPreds_1_44;
      next_value_of_STATE_VARIABLE_PredsToFix_0_5 = STATE_VARIABLE_PredsToFix_1_41;
      next_value_of_STATE_VARIABLE_GlobalInfo_0_7 = STATE_VARIABLE_GlobalInfo_1_42;
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
  MR_Word STATE_VARIABLE_GlobalInfo_0_59,
  MR_Word * STATE_VARIABLE_GlobalInfo_60)
{
  MR_Word CallerPPId_13 = ((MR_Word) ((MR_hl_field(0, Request_9, 0))));
  MR_Word CalleePPId_14 = ((MR_Word) ((MR_hl_field(0, Request_9, 1))));
  MR_Word CallArgsTypes_15 = ((MR_Word) ((MR_hl_field(0, Request_9, 2))));
  MR_Word ExtraTypeInfoTVars_16 = ((MR_Word) ((MR_hl_field(0, Request_9, 3))));
  MR_Word HOArgs_17 = ((MR_Word) ((MR_hl_field(0, Request_9, 4))));
  MR_Word CallerTVarSet_18 = ((MR_Word) ((MR_hl_field(0, Request_9, 5))));
  MR_Word RequestKind_19 = ((MR_Unsigned) ((MR_hl_field(0, Request_9, 6))) & (MR_Integer) 1);
  MR_Word Context_20 = ((MR_Word) ((MR_hl_field(0, Request_9, 7))));
  MR_Word ModuleInfo0_21;
  MR_Word PredInfo0_22;
  MR_Word ProcInfo0_23;
  MR_String SpecName_24;
  MR_Word Origin_25;
  MR_Word PredStatus_26;
  MR_Integer NewProcId_27;
  MR_Word TypeVarSet_29;
  MR_Word MarkerList_30;
  MR_Word GoalType_31;
  MR_Word ClassContext_32;
  MR_Word VarNameRemap_33;
  MR_Word InitTypes_34;
  MR_Word ItemNumbers_35;
  MR_Word ClausesInfo0_36;
  MR_Word EmptyVarSet_37;
  MR_Word VarTable_38;
  MR_Word ClausesInfo_39;
  MR_Word PredFormArity_40;
  MR_Word PredOrFunc_41;
  MR_Word PredModuleName_42;
  MR_Word ArgTVarSet_43;
  MR_Word ExistQVars_44;
  MR_Word Types_45;
  MR_Word EmptyProofs_47;
  MR_Word EmptyConstraintMap_48;
  MR_Word NewPredInfo0_49;
  MR_Word NewPredInfo1_50;
  MR_Word PredTable0_51;
  MR_Word NewPredId_52;
  MR_Word PredTable_53;
  MR_Word ModuleInfo1_54;
  MR_Word SpecSymName_55;
  MR_Word NewPredInfo_56;
  MR_Word ModuleInfo2_57;
  MR_Word ModuleInfo_58;
  MR_Word STATE_VARIABLE_GlobalInfo_1_63;
  MR_Word Var_67;
  MR_Integer Var_68;
  MR_Word STATE_VARIABLE_GlobalInfo_2_70;
  MR_Word Var_71;
  MR_Word STATE_VARIABLE_GlobalInfo_3_72;
  MR_Word STATE_VARIABLE_GlobalInfo_4_73;
  MR_Word PredOrFunc_79;
  MR_Word CallerPPId_80;
  MR_Word CalleePPId_81;
  MR_Word RequestKind_86;
  MR_Word ProcTransform_92;
  MR_Word OrigOrigin_95;
  MR_Word CalleePredId_96;
  MR_Integer CalleeProcId_97;

  ModuleInfo0_21 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(STATE_VARIABLE_GlobalInfo_0_59);
  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo0_21, CalleePPId_14, &PredInfo0_22, &ProcInfo0_23);
  PredOrFunc_79 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_22);
  CallerPPId_80 = ((MR_Word) ((MR_hl_field(0, Request_9, 0))));
  CalleePPId_81 = ((MR_Word) ((MR_hl_field(0, Request_9, 1))));
  RequestKind_86 = ((MR_Unsigned) ((MR_hl_field(0, Request_9, 6))) & (MR_Integer) 1);
  switch (RequestKind_86) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer SeqNum_93;
        MR_String Name0_94;
        MR_Word Transform_100;

        NewProcId_27 = hlds__hlds_pred__initial_proc_id_0_f_0();
        transform_hlds__higher_order__higher_order_global_info__hogi_allocate_id_3_p_0(&SeqNum_93, STATE_VARIABLE_GlobalInfo_0_59, &STATE_VARIABLE_GlobalInfo_1_63);
        {
          Transform_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Transform_100, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_79));
          MR_hl_field(0, Transform_100, 1) = ((MR_Box) (SeqNum_93));
        }
        Name0_94 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo0_22);
        hlds__pred_name__make_transformed_pred_name_3_p_0(Name0_94, Transform_100, &SpecName_24);
        {
          ProcTransform_92 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, ProcTransform_92, 0) = ((MR_Box) (SeqNum_93));
        }
        PredStatus_26 = (MR_Word) (((MR_Box) ((MR_Unsigned) 32U)));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CallerPredId_88 = ((MR_Word) ((MR_hl_field(0, CallerPPId_80, 0))));
        MR_String CallerPredName0_90;
        MR_Word Transform_91;

        NewProcId_27 = ((MR_Integer) ((MR_hl_field(0, CallerPPId_80, 1))));
        CallerPredName0_90 = hlds__hlds_module__predicate_name_2_f_0(ModuleInfo0_21, CallerPredId_88);
        {
          Transform_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Transform_91, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_79));
          MR_hl_field(1, Transform_91, 1) = ((MR_Box) (CallerPredId_88));
          MR_hl_field(1, Transform_91, 2) = ((MR_Box) (NewProcId_27));
          MR_hl_field(1, Transform_91, 3) = ((MR_Box) ((MR_Integer) 1));
        }
        hlds__pred_name__make_transformed_pred_name_3_p_0(CallerPredName0_90, Transform_91, &SpecName_24);
        {
          ProcTransform_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ProcTransform_92, 0) = ((MR_Box) (CallerPredId_88));
          MR_hl_field(1, ProcTransform_92, 1) = ((MR_Box) (NewProcId_27));
        }
        hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_22, &PredStatus_26);
        STATE_VARIABLE_GlobalInfo_1_63 = STATE_VARIABLE_GlobalInfo_0_59;
      }
      break;
  }
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_22, &OrigOrigin_95);
  CalleePredId_96 = ((MR_Word) ((MR_hl_field(0, CalleePPId_81, 0))));
  CalleeProcId_97 = ((MR_Integer) ((MR_hl_field(0, CalleePPId_81, 1))));
  {
    Origin_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Origin_25, 0) = ((MR_Box) (ProcTransform_92));
    MR_hl_field(3, Origin_25, 1) = ((MR_Box) (OrigOrigin_95));
    MR_hl_field(3, Origin_25, 2) = ((MR_Box) (CalleePredId_96));
    MR_hl_field(3, Origin_25, 3) = ((MR_Box) (CalleeProcId_97));
  }
  if (!((MaybeProgressStream_8 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word ProgressStream_28 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_8, 0))));
    MR_Word Var_65;

    {
      Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_65, 0) = ((MR_Box) (SpecName_24));
    }
    transform_hlds__higher_order__make_specialized_preds__write_request_9_p_0(ProgressStream_28, ModuleInfo0_21, PredInfo0_22, (MR_String) "Specializing", Var_65, HOArgs_17, Context_20);
  }
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo0_22, &TypeVarSet_29);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_22, &MarkerList_30);
  hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo0_22, &GoalType_31);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo0_22, &ClassContext_32);
  hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(PredInfo0_22, &VarNameRemap_33);
  Var_68 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_2[0]), CallArgsTypes_15);
  Var_67 = (MR_Word) (Var_68);
  {
    InitTypes_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InitTypes_34, 0) = ((MR_Box) (Var_67));
  }
  ItemNumbers_35 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
  hlds__hlds_clauses__clauses_info_init_4_p_0((MR_Integer) 0, InitTypes_34, ItemNumbers_35, &ClausesInfo0_36);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &EmptyVarSet_37);
  hlds__var_table_hlds__vars_types_to_var_table_4_p_0(ModuleInfo0_21, EmptyVarSet_37, CallArgsTypes_15, &VarTable_38);
  hlds__hlds_clauses__clauses_info_set_var_table_3_p_0(VarTable_38, ClausesInfo0_36, &ClausesInfo_39);
  PredFormArity_40 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo0_22);
  PredOrFunc_41 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_22);
  PredModuleName_42 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo0_22);
  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo0_22, &ArgTVarSet_43, &ExistQVars_44, &Types_45);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &EmptyProofs_47);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &EmptyConstraintMap_48);
  hlds__hlds_pred__pred_info_init_19_p_0(PredOrFunc_41, PredModuleName_42, SpecName_24, PredFormArity_40, Context_20, Origin_25, PredStatus_26, (MR_Word) ((MR_Unsigned) 0U), GoalType_31, MarkerList_30, Types_45, ArgTVarSet_43, ExistQVars_44, ClassContext_32, EmptyProofs_47, EmptyConstraintMap_48, ClausesInfo_39, VarNameRemap_33, &NewPredInfo0_49);
  hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_29, NewPredInfo0_49, &NewPredInfo1_50);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo0_21, &PredTable0_51);
  hlds__pred_table__predicate_table_insert_4_p_0(NewPredInfo1_50, &NewPredId_52, PredTable0_51, &PredTable_53);
  hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_53, ModuleInfo0_21, &ModuleInfo1_54);
  transform_hlds__higher_order__higher_order_global_info__hogi_set_module_info_3_p_0(ModuleInfo1_54, STATE_VARIABLE_GlobalInfo_1_63, &STATE_VARIABLE_GlobalInfo_2_70);
  {
    SpecSymName_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SpecSymName_55, 0) = ((MR_Box) (PredModuleName_42));
    MR_hl_field(1, SpecSymName_55, 1) = ((MR_Box) (SpecName_24));
  }
  {
    Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_71, 0) = ((MR_Box) (NewPredId_52));
    MR_hl_field(0, Var_71, 1) = ((MR_Box) (NewProcId_27));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *NewPred_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_71));
    MR_hl_field(0, base, 1) = ((MR_Box) (CalleePPId_14));
    MR_hl_field(0, base, 2) = ((MR_Box) (CallerPPId_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (SpecSymName_55));
    MR_hl_field(0, base, 4) = ((MR_Box) (HOArgs_17));
    MR_hl_field(0, base, 5) = ((MR_Box) (CallArgsTypes_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (ExtraTypeInfoTVars_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (CallerTVarSet_18));
    MR_hl_field(0, base, 8) = (MR_Box) ((MR_Unsigned) (RequestKind_19));
  }
  transform_hlds__higher_order__make_specialized_preds__higher_order_record_new_specialized_pred_4_p_0(CalleePPId_14, *NewPred_10, STATE_VARIABLE_GlobalInfo_2_70, &STATE_VARIABLE_GlobalInfo_3_72);
  transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0(*NewPred_10, ProcInfo0_23, NewPredInfo1_50, &NewPredInfo_56, STATE_VARIABLE_GlobalInfo_3_72, &STATE_VARIABLE_GlobalInfo_4_73);
  ModuleInfo2_57 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(STATE_VARIABLE_GlobalInfo_4_73);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(NewPredId_52, NewPredInfo_56, ModuleInfo2_57, &ModuleInfo_58);
  transform_hlds__higher_order__higher_order_global_info__hogi_set_module_info_3_p_0(ModuleInfo_58, STATE_VARIABLE_GlobalInfo_4_73, STATE_VARIABLE_GlobalInfo_60);
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
    MR_String NewName_27 = ((MR_String) ((MR_hl_field(1, MaybeNewName_14, 0))));

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
      MR_Word HOArg_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word HOArgs_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word ConsId_22 = ((MR_Word) ((MR_hl_field(0, HOArg_19, 0))));
      MR_Integer ArgNo_23 = ((MR_Integer) ((MR_hl_field(0, HOArg_19, 1))));
      MR_Integer NumArgs_24 = ((MR_Integer) ((MR_hl_field(0, HOArg_19, 2))));
      MR_Word CurriedHOArgs_28 = ((MR_Word) ((MR_hl_field(0, HOArg_19, 6))));
      MR_Word IsConst_29 = ((MR_Unsigned) ((MR_hl_field(0, HOArg_19, 7))) & (MR_Integer) 1);
      MR_String Indent1Str_30;
      MR_Unsigned Var_51 = (Indent_4 + (MR_Unsigned) 1U);
      MR_String Var_153;
      MR_Word ShroudedPredProcId_31;
      MR_Word next_value_of_HeadVar__5_5;

      Indent1Str_30 = libs__indent__indent2_string_1_f_0(Var_51);
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
      succeeded = ((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 2);
      if (succeeded)
      {
        ShroudedPredProcId_31 = (MR_Word) (MR_body((MR_Word) (ConsId_22), (MR_Integer) 2));
        {
          MR_Word PredId_32;
          MR_Word PredInfo_34;
          MR_String Name_35;
          MR_Integer PredFormArityInt_36;
          MR_Integer DeclaredArgNo_37;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_String Var_107;
          MR_String Var_119;

          Var_60 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_31);
          PredId_32 = ((MR_Word) ((MR_hl_field(0, Var_60, 0))));
          hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_2, PredId_32, &PredInfo_34);
          Name_35 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_34);
          hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_34, &Var_61);
          PredFormArityInt_36 = (MR_Integer) (Var_61);
          DeclaredArgNo_37 = (MR_Integer) ((MR_Unsigned) ArgNo_23 - (MR_Unsigned) NumToDrop_3);
          mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "HeadVar__");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_3[0]), DeclaredArgNo_37, &Var_107);
          mercury__io__write_string_4_p_0(OutputStream_1, Var_107);
          mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) " = \140");
          mercury__io__write_string_4_p_0(OutputStream_1, Name_35);
          mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "\'/");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_3[0]), PredFormArityInt_36, &Var_119);
          mercury__io__write_string_4_p_0(OutputStream_1, Var_119);
        }
      }
      else
      {
        MR_Word TypeModule_38;
        MR_String TypeName_39;
        MR_Integer TypeArity_40;

        succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_22, 0)))) == (MR_Integer) 10)));
        if (succeeded)
        {
          TypeModule_38 = ((MR_Word) ((MR_hl_field(3, ConsId_22, 1))));
          TypeName_39 = ((MR_String) ((MR_hl_field(3, ConsId_22, 2))));
          TypeArity_40 = ((MR_Integer) ((MR_hl_field(3, ConsId_22, 3))));
          {
            MR_String Var_75;
            MR_Word Var_76;
            MR_String Var_131;

            {
              Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_76, 0) = ((MR_Box) (TypeModule_38));
              MR_hl_field(1, Var_76, 1) = ((MR_Box) (TypeName_39));
            }
            Var_75 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(Var_76);
            mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "type_ctor_info for \140");
            mercury__io__write_string_4_p_0(OutputStream_1, Var_75);
            mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "\'/");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_3[0]), TypeArity_40, &Var_131);
            mercury__io__write_string_4_p_0(OutputStream_1, Var_131);
          }
        }
        else
        {
          MR_Word ClassId_42;

          succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_22, 0)))) == (MR_Integer) 11)));
          if (succeeded)
          {
            ClassId_42 = ((MR_Word) ((MR_hl_field(3, ConsId_22, 2))));
            {
              MR_Word ClassSymName_45 = ((MR_Word) ((MR_hl_field(0, ClassId_42, 0))));
              MR_Integer ClassArity_46 = ((MR_Integer) ((MR_hl_field(0, ClassId_42, 1))));
              MR_String Var_84;
              MR_String Var_143;

              Var_84 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ClassSymName_45);
              mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "base_typeclass_info for \140");
              mercury__io__write_string_4_p_0(OutputStream_1, Var_84);
              mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "\'/");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_3[0]), ClassArity_46, &Var_143);
              mercury__io__write_string_4_p_0(OutputStream_1, Var_143);
            }
          }
          else
            mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "type_info/typeclass_info");
        }
      }
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) " with ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_3[0]), NumArgs_24, &Var_153);
      mercury__io__write_string_4_p_0(OutputStream_1, Var_153);
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) " curried arguments");
      if ((CurriedHOArgs_28 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__nl_3_p_0(OutputStream_1);
      else
      {
        MR_Unsigned Var_99;

        mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) ":\n");
        Var_99 = (Indent_4 + (MR_Unsigned) 1U);
        transform_hlds__higher_order__make_specialized_preds__output_higher_order_args_7_p_0(OutputStream_1, ModuleInfo_2, (MR_Integer) 0, Var_99, CurriedHOArgs_28);
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

  hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv12_HeadVar__3_3);
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

  transform_hlds__higher_order__make_specialized_preds__update_var_types_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_VarTable_17);
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
  MR_Word conv6_LambdaHeadVar__4_138;

  transform_hlds__higher_order__make_specialized_preds__IntroducedFrom__pred__specialize_and_add_new_proc__606__1_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_LambdaHeadVar__4_138);
  *wrapper_arg_4 = ((MR_Box) (conv6_LambdaHeadVar__4_138));
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

  transform_hlds__higher_order__make_specialized_preds__substitute_higher_order_arg_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_HOArg_13);
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

  conv1_HeadVar__3_3 = check_hlds__type_util__is_type_a_dummy_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
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
  MR_Word conv0_LambdaHeadVar__2_125;

  succeeded = transform_hlds__higher_order__make_specialized_preds__IntroducedFrom__pred__specialize_and_add_new_proc__545__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_125);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_125));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0(
  MR_Word NewPred_7,
  MR_Word STATE_VARIABLE_NewProcInfo_0_118,
  MR_Word STATE_VARIABLE_NewPredInfo_0_119,
  MR_Word * STATE_VARIABLE_NewPredInfo_120,
  MR_Word STATE_VARIABLE_GlobalInfo_0_121,
  MR_Word * STATE_VARIABLE_GlobalInfo_122)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_11;
  MR_Word NewPredProcId_12;
  MR_Word OldPredProcId_13;
  MR_Word CallerPredProcId_14;
  MR_Word HOArgs0_16;
  MR_Word CallArgsTypes0_17;
  MR_Word ExtraTypeInfoTVars0_18;
  MR_Word HeadVars0_21;
  MR_Word ArgModes0_22;
  MR_Word ExistQVars0_23;
  MR_Word TypeVarSet0_24;
  MR_Word KindMap0_25;
  MR_Word OriginalArgTypes0_26;
  MR_Word CallerPredId_27;
  MR_Word CallerPredInfo_29;
  MR_Word CallerTypeVarSet_30;
  MR_Word CallerHeadParams_31;
  MR_Word VarTable0_32;
  MR_Word TypeVarSet_33;
  MR_Word TypeRenaming_34;
  MR_Word KindMap_35;
  MR_Word VarTable1_36;
  MR_Word OriginalArgTypes1_37;
  MR_Word ExistQVars1_38;
  MR_Word CallArgs_39;
  MR_Word CallerArgTypes0_40;
  MR_Word TypeSubn_41;
  MR_Word ExistQTypes_42;
  MR_Word ExistQVars_46;
  MR_Word VarTable2_47;
  MR_Word OriginalArgTypes_48;
  MR_Word ExtraTypeInfoTVarTypes0_49;
  MR_Word HOArgs_50;
  MR_Word ExtraTypeInfoTVarTypes_51;
  MR_Word ExtraTypeInfoTVars_52;
  MR_Word ExtraTypeInfoTypes_54;
  MR_Word ExtraTypeInfoVars_55;
  MR_Word RttiVarMaps0_56;
  MR_Word EmptyVarRenaming_57;
  MR_Word RttiVarMaps1_58;
  MR_Word RttiVarMaps2_59;
  MR_Word RttiVarMaps_65;
  MR_Word VarRenaming0_66;
  MR_Word KnownVarMap0_67;
  MR_Word ExtraHeadVars_68;
  MR_Word ExtraArgModes_69;
  MR_Word KnownVarMap_71;
  MR_Word ConstGoals_72;
  MR_Word VersionInfoMap0_73;
  MR_Integer ArgsDepth_74;
  MR_Word OrigPredProcId_76;
  MR_Word CallerParentVersions_84;
  MR_Word ParentVersions_85;
  MR_Word VersionInfo_86;
  MR_Word VersionInfoMap_87;
  MR_Word InMode_88;
  MR_Integer NumTypeInfos_89;
  MR_Word ExtraTypeInfoModes_90;
  MR_Word HeadVars1_91;
  MR_Word ArgModes1_92;
  MR_Word HeadVars_93;
  MR_Word ArgModes_94;
  MR_Word Goal6_95;
  MR_Word GoalInfo6_97;
  MR_Word GoalList6_98;
  MR_Word Goal_99;
  MR_Word VarTable7_100;
  MR_Word ExtraHeadVarTypes0_101;
  MR_Word ModifiedOriginalArgTypes_102;
  MR_Word ArgTypes_103;
  MR_Word ArgVars_111;
  MR_Word NewRttiVarMaps_112;
  MR_Word ArgVarInfos_113;
  MR_Word ClassContext_114;
  MR_Integer NewProcId_116;
  MR_Word NewProcs_117;
  MR_Word Var_126;
  MR_Word STATE_VARIABLE_NewProcInfo_1_127;
  MR_Word Var_128;
  MR_Word STATE_VARIABLE_NewProcInfo_2_133;
  MR_Word STATE_VARIABLE_NewProcInfo_3_142;
  MR_Word STATE_VARIABLE_NewProcInfo_4_143;
  MR_Word Var_144;
  MR_Word Var_146;
  MR_Word Var_147;
  MR_Word STATE_VARIABLE_NewProcInfo_5_148;
  MR_Word STATE_VARIABLE_NewProcInfo_6_149;
  MR_Word Var_150;
  MR_Word STATE_VARIABLE_NewProcInfo_7_151;
  MR_Word STATE_VARIABLE_NewProcInfo_8_152;
  MR_Word STATE_VARIABLE_NewProcInfo_9_153;
  MR_Word Var_154;
  MR_Word STATE_VARIABLE_NewPredInfo_1_155;
  MR_Word STATE_VARIABLE_NewPredInfo_2_156;
  MR_Word STATE_VARIABLE_NewProcInfo_10_158;
  MR_Word Var_159;
  MR_Word STATE_VARIABLE_NewPredInfo_3_160;
  MR_Box conv5_RttiVarMaps2_59;
  MR_Box conv7_RttiVarMaps_65;
  MR_Word Var_70;
  MR_Word OldProcVersionInfo_75;
  MR_Box conv8_OldProcVersionInfo_75;
  MR_Word CallerVersionInfo_80;
  MR_Box conv9_CallerVersionInfo_80;

  ModuleInfo_11 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(STATE_VARIABLE_GlobalInfo_0_121);
  NewPredProcId_12 = ((MR_Word) ((MR_hl_field(0, NewPred_7, 0))));
  OldPredProcId_13 = ((MR_Word) ((MR_hl_field(0, NewPred_7, 1))));
  CallerPredProcId_14 = ((MR_Word) ((MR_hl_field(0, NewPred_7, 2))));
  HOArgs0_16 = ((MR_Word) ((MR_hl_field(0, NewPred_7, 4))));
  CallArgsTypes0_17 = ((MR_Word) ((MR_hl_field(0, NewPred_7, 5))));
  ExtraTypeInfoTVars0_18 = ((MR_Word) ((MR_hl_field(0, NewPred_7, 6))));
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_NewProcInfo_0_118, &HeadVars0_21);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_NewProcInfo_0_118, &ArgModes0_22);
  hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(STATE_VARIABLE_NewPredInfo_0_119, &ExistQVars0_23);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_NewPredInfo_0_119, &TypeVarSet0_24);
  hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(STATE_VARIABLE_NewPredInfo_0_119, &KindMap0_25);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(STATE_VARIABLE_NewPredInfo_0_119, &OriginalArgTypes0_26);
  CallerPredId_27 = ((MR_Word) ((MR_hl_field(0, CallerPredProcId_14, 0))));
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_11, CallerPredId_27, &CallerPredInfo_29);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(CallerPredInfo_29, &CallerTypeVarSet_30);
  hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(CallerPredInfo_29, &CallerHeadParams_31);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_NewProcInfo_0_118, &VarTable0_32);
  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(CallerTypeVarSet_30, TypeVarSet0_24, &TypeVarSet_33, &TypeRenaming_34);
  parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(TypeRenaming_34, KindMap0_25, &KindMap_35);
  parse_tree__var_table__apply_variable_renaming_to_var_table_3_p_0(TypeRenaming_34, VarTable0_32, &VarTable1_36);
  parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(TypeRenaming_34, OriginalArgTypes0_26, &OriginalArgTypes1_37);
  parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(TypeRenaming_34, ExistQVars0_23, &ExistQVars1_38);
  mercury__assoc_list__keys_and_values_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), CallArgsTypes0_17, &CallArgs_39, &CallerArgTypes0_40);
  parse_tree__prog_type_unify__compute_caller_callee_type_substitution_5_p_0(OriginalArgTypes1_37, CallerArgTypes0_40, CallerHeadParams_31, ExistQVars1_38, &TypeSubn_41);
  parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(KindMap_35, TypeSubn_41, ExistQVars1_38, &ExistQTypes_42);
  mercury__list__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[5]), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_2[2]), ExistQTypes_42, &ExistQVars_46);
  {
    Var_126 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_126, 0) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_5[1]));
    MR_hl_field(0, Var_126, 1) = ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_2));
    MR_hl_field(0, Var_126, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_126, 3) = ((MR_Box) (ModuleInfo_11));
  }
  parse_tree__var_table__apply_rec_subst_to_var_table_4_p_0(Var_126, TypeSubn_41, VarTable1_36, &VarTable2_47);
  parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(TypeSubn_41, OriginalArgTypes1_37, &OriginalArgTypes_48);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable2_47, STATE_VARIABLE_NewProcInfo_0_118, &STATE_VARIABLE_NewProcInfo_1_127);
  Var_128 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[5]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
  parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_128, ExtraTypeInfoTVars0_18, &ExtraTypeInfoTVarTypes0_49);
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[5]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeSubn_41);
  if (!(succeeded))
    succeeded = (ExistQVars_46 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    HOArgs_50 = HOArgs0_16;
    ExtraTypeInfoTVarTypes_51 = ExtraTypeInfoTVarTypes0_49;
    ExtraTypeInfoTVars_52 = ExtraTypeInfoTVars0_18;
  }
  else
  {
    MR_Word Var_129;
    MR_Word ExtraTypeInfoTVarsPrim_53;

    {
      Var_129 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_129, 0) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_5[2]));
      MR_hl_field(0, Var_129, 1) = ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_3));
      MR_hl_field(0, Var_129, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_129, 3) = ((MR_Box) (TypeSubn_41));
    }
    mercury__list__map_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0), Var_129, HOArgs0_16, &HOArgs_50);
    parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(TypeSubn_41, ExtraTypeInfoTVarTypes0_49, &ExtraTypeInfoTVarTypes_51);
    succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(ExtraTypeInfoTVarTypes_51, &ExtraTypeInfoTVarsPrim_53);
    if (succeeded)
      ExtraTypeInfoTVars_52 = ExtraTypeInfoTVarsPrim_53;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.make_specialized_preds.specialize_and_add_new_proc\'/6", (MR_String) "type var got bound");
        return;
      }
  }
  ExtraTypeInfoTypes_54 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_2[3]), ExtraTypeInfoTVarTypes_51);
  hlds__hlds_proc_util__proc_info_create_vars_from_types_5_p_0(ModuleInfo_11, ExtraTypeInfoTypes_54, &ExtraTypeInfoVars_55, STATE_VARIABLE_NewProcInfo_1_127, &STATE_VARIABLE_NewProcInfo_2_133);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_NewProcInfo_2_133, &RttiVarMaps0_56);
  mercury__map__init_1_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), &EmptyVarRenaming_57);
  hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(TypeRenaming_34, TypeSubn_41, EmptyVarRenaming_57, RttiVarMaps0_56, &RttiVarMaps1_58);
  mercury__list__foldl_corresponding_5_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_2[4]), ExtraTypeInfoVars_55, ExtraTypeInfoTVarTypes_51, ((MR_Box) (RttiVarMaps1_58)), &conv5_RttiVarMaps2_59);
  RttiVarMaps2_59 = ((MR_Word) (conv5_RttiVarMaps2_59));
  mercury__list__foldl_corresponding_5_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[5]), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_2[5]), ExtraTypeInfoTVars_52, ExtraTypeInfoVars_55, ((MR_Box) (RttiVarMaps2_59)), &conv7_RttiVarMaps_65);
  RttiVarMaps_65 = ((MR_Word) (conv7_RttiVarMaps_65));
  hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_65, STATE_VARIABLE_NewProcInfo_2_133, &STATE_VARIABLE_NewProcInfo_3_142);
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), CallArgs_39, HeadVars0_21, &VarRenaming0_66);
  mercury__map__init_1_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), &KnownVarMap0_67);
  transform_hlds__higher_order__make_specialized_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_116_101_114_109_115_95_95_91_52_93_95_48_13_p_0(ModuleInfo_11, HeadVars0_21, &ExtraHeadVars_68, &ExtraArgModes_69, HOArgs_50, STATE_VARIABLE_NewProcInfo_3_142, &STATE_VARIABLE_NewProcInfo_4_143, VarRenaming0_66, &Var_70, KnownVarMap0_67, &KnownVarMap_71, &ConstGoals_72);
  VersionInfoMap0_73 = transform_hlds__higher_order__higher_order_global_info__hogi_get_version_info_map_1_f_0(STATE_VARIABLE_GlobalInfo_0_121);
  ArgsDepth_74 = transform_hlds__higher_order__higher_order_global_info__higher_order_max_args_depth_1_f_0(HOArgs_50);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0), VersionInfoMap0_73, ((MR_Box) (OldPredProcId_13)), &conv8_OldProcVersionInfo_75);
  if (succeeded)
  {
    OldProcVersionInfo_75 = ((MR_Word) (conv8_OldProcVersionInfo_75));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    OrigPredProcId_76 = ((MR_Word) ((MR_hl_field(0, OldProcVersionInfo_75, 0))));
  else
    OrigPredProcId_76 = OldPredProcId_13;
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0), VersionInfoMap0_73, ((MR_Box) (CallerPredProcId_14)), &conv9_CallerVersionInfo_80);
  if (succeeded)
  {
    CallerVersionInfo_80 = ((MR_Word) (conv9_CallerVersionInfo_80));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    CallerParentVersions_84 = ((MR_Word) ((MR_hl_field(0, CallerVersionInfo_80, 3))));
  else
    CallerParentVersions_84 = (MR_Word) ((MR_Unsigned) 0U);
  {
    Var_144 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_144, 0) = ((MR_Box) (OrigPredProcId_76));
    MR_hl_field(0, Var_144, 1) = ((MR_Box) (ArgsDepth_74));
  }
  {
    ParentVersions_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ParentVersions_85, 0) = ((MR_Box) (Var_144));
    MR_hl_field(1, ParentVersions_85, 1) = ((MR_Box) (CallerParentVersions_84));
  }
  {
    VersionInfo_86 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, VersionInfo_86, 0) = ((MR_Box) (OrigPredProcId_76));
    MR_hl_field(0, VersionInfo_86, 1) = ((MR_Box) (ArgsDepth_74));
    MR_hl_field(0, VersionInfo_86, 2) = ((MR_Box) (KnownVarMap_71));
    MR_hl_field(0, VersionInfo_86, 3) = ((MR_Box) (ParentVersions_85));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0), ((MR_Box) (NewPredProcId_12)), ((MR_Box) (VersionInfo_86)), VersionInfoMap0_73, &VersionInfoMap_87);
  transform_hlds__higher_order__higher_order_global_info__hogi_set_version_info_map_3_p_0(VersionInfoMap_87, STATE_VARIABLE_GlobalInfo_0_121, STATE_VARIABLE_GlobalInfo_122);
  parse_tree__prog_mode__in_mode_1_p_0(&InMode_88);
  mercury__list__length_2_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), ExtraTypeInfoVars_55, &NumTypeInfos_89);
  mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumTypeInfos_89, ((MR_Box) (InMode_88)), &ExtraTypeInfoModes_90);
  transform_hlds__higher_order__higher_order_global_info__remove_const_higher_order_args_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), HOArgs_50, HeadVars0_21, &HeadVars1_91);
  transform_hlds__higher_order__higher_order_global_info__remove_const_higher_order_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), HOArgs_50, ArgModes0_22, &ArgModes1_92);
  Var_146 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), ExtraHeadVars_68, HeadVars1_91);
  HeadVars_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), ExtraTypeInfoVars_55, Var_146);
  Var_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExtraArgModes_69, ArgModes1_92);
  ArgModes_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExtraTypeInfoModes_90, Var_147);
  hlds__hlds_pred__proc_info_set_headvars_3_p_0(HeadVars_93, STATE_VARIABLE_NewProcInfo_4_143, &STATE_VARIABLE_NewProcInfo_5_148);
  hlds__hlds_pred__proc_info_set_argmodes_3_p_0(ArgModes_94, STATE_VARIABLE_NewProcInfo_5_148, &STATE_VARIABLE_NewProcInfo_6_149);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_NewProcInfo_6_149, &Goal6_95);
  GoalInfo6_97 = ((MR_Word) ((MR_hl_field(0, Goal6_95, 1))));
  hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal6_95, &GoalList6_98);
  Var_150 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ConstGoals_72, GoalList6_98);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_150, GoalInfo6_97, &Goal_99);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_99, STATE_VARIABLE_NewProcInfo_6_149, &STATE_VARIABLE_NewProcInfo_7_151);
  hlds__hlds_pred__proc_info_reset_imported_structure_sharing_2_p_0(STATE_VARIABLE_NewProcInfo_7_151, &STATE_VARIABLE_NewProcInfo_8_152);
  hlds__hlds_pred__proc_info_reset_imported_structure_reuse_2_p_0(STATE_VARIABLE_NewProcInfo_8_152, &STATE_VARIABLE_NewProcInfo_9_153);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_NewProcInfo_9_153, &VarTable7_100);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable7_100, ExtraHeadVars_68, &ExtraHeadVarTypes0_101);
  transform_hlds__higher_order__higher_order_global_info__remove_const_higher_order_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), HOArgs_50, OriginalArgTypes_48, &ModifiedOriginalArgTypes_102);
  Var_154 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ExtraHeadVarTypes0_101, ModifiedOriginalArgTypes_102);
  ArgTypes_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ExtraTypeInfoTypes_54, Var_154);
  hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TypeVarSet_33, ExistQVars_46, ArgTypes_103, STATE_VARIABLE_NewPredInfo_0_119, &STATE_VARIABLE_NewPredInfo_1_155);
  hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_33, STATE_VARIABLE_NewPredInfo_1_155, &STATE_VARIABLE_NewPredInfo_2_156);
  if ((ExistQVars_46 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_NewProcInfo_10_158 = STATE_VARIABLE_NewProcInfo_9_153;
  else
  {
    MR_Word OriginalHeadTypes_106;
    MR_Word ExistentialSubn_107;
    MR_Word ExtraHeadVarTypes_108;
    MR_Word ExtraHeadVarsAndTypes_109;
    MR_Word VarTable8_110;
    MR_Word Var_157;
    MR_Box conv11_VarTable8_110;

    parse_tree__var_table__lookup_var_types_3_p_0(VarTable7_100, HeadVars0_21, &OriginalHeadTypes_106);
    parse_tree__prog_type_unify__type_list_subsumes_det_3_p_0(OriginalArgTypes_48, OriginalHeadTypes_106, &ExistentialSubn_107);
    parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(ExistentialSubn_107, ExtraHeadVarTypes0_101, &ExtraHeadVarTypes_108);
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ExtraHeadVars_68, ExtraHeadVarTypes_108, &ExtraHeadVarsAndTypes_109);
    {
      Var_157 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_157, 0) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_4[3]));
      MR_hl_field(0, Var_157, 1) = ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_7));
      MR_hl_field(0, Var_157, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_157, 3) = ((MR_Box) (ModuleInfo_11));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_2[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), Var_157, ExtraHeadVarsAndTypes_109, ((MR_Box) (VarTable7_100)), &conv11_VarTable8_110);
    VarTable8_110 = ((MR_Word) (conv11_VarTable8_110));
    hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable8_110, STATE_VARIABLE_NewProcInfo_9_153, &STATE_VARIABLE_NewProcInfo_10_158);
  }
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_NewProcInfo_10_158, &ArgVars_111);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_NewProcInfo_10_158, &NewRttiVarMaps_112);
  {
    Var_159 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_159, 0) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_5[3]));
    MR_hl_field(0, Var_159, 1) = ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__specialize_and_add_new_proc_6_p_0_8));
    MR_hl_field(0, Var_159, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_159, 3) = ((MR_Box) (NewRttiVarMaps_112));
  }
  mercury__list__map_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0), Var_159, ArgVars_111, &ArgVarInfos_113);
  transform_hlds__higher_order__make_specialized_preds__find_class_context_4_p_0(ModuleInfo_11, ArgVarInfos_113, ArgModes_94, &ClassContext_114);
  hlds__hlds_pred__pred_info_set_class_context_3_p_0(ClassContext_114, STATE_VARIABLE_NewPredInfo_2_156, &STATE_VARIABLE_NewPredInfo_3_160);
  NewProcId_116 = ((MR_Integer) ((MR_hl_field(0, NewPredProcId_12, 1))));
  NewProcs_117 = mercury__map__singleton_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (NewProcId_116)), ((MR_Box) (STATE_VARIABLE_NewProcInfo_10_158)));
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(NewProcs_117, STATE_VARIABLE_NewPredInfo_3_160, STATE_VARIABLE_NewPredInfo_120);
}

static MR_Box MR_CALL 
transform_hlds__higher_order__make_specialized_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_116_101_114_109_115_95_95_91_52_93_95_48_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__3_3;

  conv3_HeadVar__3_3 = transform_hlds__higher_order__higher_order_global_info__mode_to_unify_mode_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
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
    MR_Word HOArg_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
    MR_Word HOArgs_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
    MR_Word ConsId_37 = ((MR_Word) ((MR_hl_field(0, HOArg_31, 0))));
    MR_Integer Index_38 = ((MR_Integer) ((MR_hl_field(0, HOArg_31, 1))));
    MR_Integer NumArgs_39 = ((MR_Integer) ((MR_hl_field(0, HOArg_31, 2))));
    MR_Word CurriedArgs_40 = ((MR_Word) ((MR_hl_field(0, HOArg_31, 3))));
    MR_Word CurriedArgTypes_41 = ((MR_Word) ((MR_hl_field(0, HOArg_31, 4))));
    MR_Word CurriedArgRttiInfo_42 = ((MR_Word) ((MR_hl_field(0, HOArg_31, 5))));
    MR_Word CurriedHOArgs_43 = ((MR_Word) ((MR_hl_field(0, HOArg_31, 6))));
    MR_Word IsConst_44 = ((MR_Unsigned) ((MR_hl_field(0, HOArg_31, 7))) & (MR_Integer) 1);
    MR_Word LVar_45;
    MR_Word CurriedArgModes1_53;
    MR_Word GroundInstInfo_56;
    MR_Word CurriedHeadVars1_58;
    MR_Word RttiVarMaps0_59;
    MR_Word RttiVarMaps_60;
    MR_Word ExtraCurriedHeadVars_61;
    MR_Word ExtraCurriedArgModes_62;
    MR_Word NewHeadVars1_64;
    MR_Word NewArgModes1_65;
    MR_Word ConstGoals1_66;
    MR_Word ConstGoals0_76;
    MR_Word CurriedHeadVars_77;
    MR_Word CurriedArgModes_78;
    MR_Word STATE_VARIABLE_ProcInfo_1_88;
    MR_Word STATE_VARIABLE_ProcInfo_2_90;
    MR_Word STATE_VARIABLE_Renaming_1_93;
    MR_Word STATE_VARIABLE_ProcInfo_3_94;
    MR_Word STATE_VARIABLE_Renaming_2_95;
    MR_Word STATE_VARIABLE_KnownVarMap_2_96;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Box conv0_LVar_45;
    MR_Word ShroudedPredProcId_46;
    MR_Box conv2_RttiVarMaps_60;

    mercury__list__det_index1_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), HeadVars0_2, Index_38, &conv0_LVar_45);
    LVar_45 = ((MR_Word) (conv0_LVar_45));
    succeeded = ((MR_tag((MR_Word) ConsId_37)) == (MR_Integer) 2);
    if (succeeded)
    {
      ShroudedPredProcId_46 = (MR_Word) (MR_body((MR_Word) (ConsId_37), (MR_Integer) 2));
      {
        MR_Word PredId_47;
        MR_Integer ProcId_48;
        MR_Word CalleePredInfo_49;
        MR_Word CalleeProcInfo_50;
        MR_Word PredOrFunc_51;
        MR_Word CalleeArgModes_52;
        MR_Word NonCurriedArgModes_54;
        MR_Word ProcDetism_55;
        MR_Word Var_85;
        MR_Word Var_86;

        Var_85 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_46);
        PredId_47 = ((MR_Word) ((MR_hl_field(0, Var_85, 0))));
        ProcId_48 = ((MR_Integer) ((MR_hl_field(0, Var_85, 1))));
        hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_1, PredId_47, ProcId_48, &CalleePredInfo_49, &CalleeProcInfo_50);
        PredOrFunc_51 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(CalleePredInfo_49);
        hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CalleeProcInfo_50, &CalleeArgModes_52);
        mercury__list__det_split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumArgs_39, CalleeArgModes_52, &CurriedArgModes1_53, &NonCurriedArgModes_54);
        hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(CalleeProcInfo_50, &ProcDetism_55);
        {
          Var_86 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_86, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_51));
          MR_hl_field(0, Var_86, 1) = ((MR_Box) (NonCurriedArgModes_54));
          MR_hl_field(0, Var_86, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_86, 3) = (MR_Box) ((MR_Unsigned) (ProcDetism_55));
        }
        GroundInstInfo_56 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_86)));
      }
    }
    else
    {
      MR_Word InMode_57;

      parse_tree__prog_mode__in_mode_1_p_0(&InMode_57);
      GroundInstInfo_56 = (MR_Word) ((MR_Unsigned) 0U);
      mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumArgs_39, ((MR_Box) (InMode_57)), &CurriedArgModes1_53);
    }
    hlds__hlds_proc_util__proc_info_create_vars_from_types_5_p_0(ModuleInfo_1, CurriedArgTypes_41, &CurriedHeadVars1_58, STATE_VARIABLE_ProcInfo_0_7, &STATE_VARIABLE_ProcInfo_1_88);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_1_88, &RttiVarMaps0_59);
    mercury__list__foldl_corresponding_5_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_2[1]), CurriedHeadVars1_58, CurriedArgRttiInfo_42, ((MR_Box) (RttiVarMaps0_59)), &conv2_RttiVarMaps_60);
    RttiVarMaps_60 = ((MR_Word) (conv2_RttiVarMaps_60));
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_60, STATE_VARIABLE_ProcInfo_1_88, &STATE_VARIABLE_ProcInfo_2_90);
    mercury__map__set_from_corresponding_lists_4_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), CurriedArgs_40, CurriedHeadVars1_58, STATE_VARIABLE_Renaming_0_9, &STATE_VARIABLE_Renaming_1_93);
    switch (IsConst_44) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word CurriedConstGoals_63;
          MR_Word ArgUnifyModes_67;
          MR_Word ConstNonLocals_68;
          MR_Word ConstInst_69;
          MR_Word ConstInstMapDelta_70;
          MR_Word ConstGoalInfo_71;
          MR_Word RHS_72;
          MR_Word UnifyMode_73;
          MR_Word ConstGoalExpr_74;
          MR_Word ConstGoal_75;
          MR_Word Var_100;
          MR_Word Var_102;
          MR_Word Var_103;
          MR_Word Var_111;
          MR_Word Var_118;

          transform_hlds__higher_order__make_specialized_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_116_101_114_109_115_95_95_91_52_93_95_48_13_p_0(ModuleInfo_1, CurriedHeadVars1_58, &ExtraCurriedHeadVars_61, &ExtraCurriedArgModes_62, CurriedHOArgs_43, STATE_VARIABLE_ProcInfo_2_90, &STATE_VARIABLE_ProcInfo_3_94, STATE_VARIABLE_Renaming_1_93, &STATE_VARIABLE_Renaming_2_95, STATE_VARIABLE_KnownVarMap_0_11, &STATE_VARIABLE_KnownVarMap_2_96, &CurriedConstGoals_63);
          {
            Var_100 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_100, 0) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_5[0]));
            MR_hl_field(0, Var_100, 1) = ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_116_101_114_109_115_95_95_91_52_93_95_48_13_p_0_2));
            MR_hl_field(0, Var_100, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_100, 3) = ((MR_Box) (ModuleInfo_1));
          }
          ArgUnifyModes_67 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), Var_100, CurriedArgModes1_53);
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CurriedHeadVars1_58, &ConstNonLocals_68);
          {
            ConstInst_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ConstInst_69, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(1, ConstInst_69, 1) = ((MR_Box) (GroundInstInfo_56));
          }
          {
            Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_103, 0) = ((MR_Box) (LVar_45));
            MR_hl_field(0, Var_103, 1) = ((MR_Box) (ConstInst_69));
          }
          {
            Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_103));
            MR_hl_field(1, Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ConstInstMapDelta_70 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_102);
          hlds__hlds_goal__goal_info_init_5_p_0(ConstNonLocals_68, ConstInstMapDelta_70, (MR_Integer) 0, (MR_Integer) 0, &ConstGoalInfo_71);
          {
            RHS_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, RHS_72, 0) = ((MR_Box) (ConsId_37));
            MR_hl_field(1, RHS_72, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(1, RHS_72, 2) = ((MR_Box) (CurriedHeadVars1_58));
          }
          {
            UnifyMode_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, UnifyMode_73, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, UnifyMode_73, 1) = ((MR_Box) (ConstInst_69));
            MR_hl_field(0, UnifyMode_73, 2) = ((MR_Box) (ConstInst_69));
            MR_hl_field(0, UnifyMode_73, 3) = ((MR_Box) (ConstInst_69));
          }
          {
            Var_111 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_111, 0) = ((MR_Box) (LVar_45));
            MR_hl_field(0, Var_111, 1) = ((MR_Box) (ConsId_37));
            MR_hl_field(0, Var_111, 2) = ((MR_Box) (CurriedHeadVars1_58));
            MR_hl_field(0, Var_111, 3) = ((MR_Box) (ArgUnifyModes_67));
            MR_hl_field(0, Var_111, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Var_111, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(0, Var_111, 6) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            ConstGoalExpr_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ConstGoalExpr_74, 0) = ((MR_Box) (LVar_45));
            MR_hl_field(1, ConstGoalExpr_74, 1) = ((MR_Box) (RHS_72));
            MR_hl_field(1, ConstGoalExpr_74, 2) = ((MR_Box) (UnifyMode_73));
            MR_hl_field(1, ConstGoalExpr_74, 3) = ((MR_Box) (Var_111));
            MR_hl_field(1, ConstGoalExpr_74, 4) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[6]));
          }
          {
            ConstGoal_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ConstGoal_75, 0) = ((MR_Box) (ConstGoalExpr_74));
            MR_hl_field(0, ConstGoal_75, 1) = ((MR_Box) (ConstGoalInfo_71));
          }
          {
            Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_118, 0) = ((MR_Box) (ConstGoal_75));
            MR_hl_field(1, Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ConstGoals0_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CurriedConstGoals_63, Var_118);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_91;
          MR_Word STATE_VARIABLE_KnownVarMap_1_141;

          {
            Var_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_91, 0) = ((MR_Box) (ConsId_37));
            MR_hl_field(0, Var_91, 1) = ((MR_Box) (CurriedHeadVars1_58));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), ((MR_Box) (LVar_45)), ((MR_Box) (Var_91)), STATE_VARIABLE_KnownVarMap_0_11, &STATE_VARIABLE_KnownVarMap_1_141);
          transform_hlds__higher_order__make_specialized_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_116_101_114_109_115_95_95_91_52_93_95_48_13_p_0(ModuleInfo_1, CurriedHeadVars1_58, &ExtraCurriedHeadVars_61, &ExtraCurriedArgModes_62, CurriedHOArgs_43, STATE_VARIABLE_ProcInfo_2_90, &STATE_VARIABLE_ProcInfo_3_94, STATE_VARIABLE_Renaming_1_93, &STATE_VARIABLE_Renaming_2_95, STATE_VARIABLE_KnownVarMap_1_141, &STATE_VARIABLE_KnownVarMap_2_96, &ConstGoals0_76);
        }
        break;
    }
    transform_hlds__higher_order__make_specialized_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_116_101_114_109_115_95_95_91_52_93_95_48_13_p_0(ModuleInfo_1, HeadVars0_2, &NewHeadVars1_64, &NewArgModes1_65, HOArgs_32, STATE_VARIABLE_ProcInfo_3_94, STATE_VARIABLE_ProcInfo_8, STATE_VARIABLE_Renaming_2_95, STATE_VARIABLE_Renaming_10, STATE_VARIABLE_KnownVarMap_2_96, STATE_VARIABLE_KnownVarMap_12, &ConstGoals1_66);
    transform_hlds__higher_order__higher_order_global_info__remove_const_higher_order_args_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), CurriedHOArgs_43, CurriedHeadVars1_58, &CurriedHeadVars_77);
    transform_hlds__higher_order__higher_order_global_info__remove_const_higher_order_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), CurriedHOArgs_43, CurriedArgModes1_53, &CurriedArgModes_78);
    Var_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), ExtraCurriedHeadVars_61, NewHeadVars1_64);
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), CurriedHeadVars_77, Var_120);
    Var_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExtraCurriedArgModes_62, NewArgModes1_65);
    *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), CurriedArgModes_78, Var_121);
    *HeadVar__13_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ConstGoals0_76, ConstGoals1_66);
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
      MR_Word Var_52 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.make_specialized_preds.acc_class_context\'/7", (MR_String) "mismatched list length");
          return;
        }
      else
      {
        MR_Word Mode_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
        MR_Word Modes_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
        MR_Word STATE_VARIABLE_RevUniv_1_50;
        MR_Word STATE_VARIABLE_RevExist_1_51;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_RevUniv_0_4;
        MR_Word next_value_of_STATE_VARIABLE_RevExist_0_6;

        switch (MR_tag((MR_Word) Var_53)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_RevUniv_1_50 = STATE_VARIABLE_RevUniv_0_4;
              STATE_VARIABLE_RevExist_1_51 = STATE_VARIABLE_RevExist_0_6;
            }
            break;
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_RevUniv_1_50 = STATE_VARIABLE_RevUniv_0_4;
              STATE_VARIABLE_RevExist_1_51 = STATE_VARIABLE_RevExist_0_6;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Constraint_44 = ((MR_Word) ((MR_hl_field(2, Var_53, 0))));

              succeeded = check_hlds__mode_test__mode_is_input_2_p_0(ModuleInfo_1, Mode_40);
              if (succeeded)
              {
                succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ((MR_Box) (Constraint_44)), STATE_VARIABLE_RevUniv_0_4);
                if (succeeded)
                  STATE_VARIABLE_RevUniv_1_50 = STATE_VARIABLE_RevUniv_0_4;
                else
                  {
                    STATE_VARIABLE_RevUniv_1_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_RevUniv_1_50, 0) = ((MR_Box) (Constraint_44));
                    MR_hl_field(1, STATE_VARIABLE_RevUniv_1_50, 1) = ((MR_Box) (STATE_VARIABLE_RevUniv_0_4));
                  }
                STATE_VARIABLE_RevExist_1_51 = STATE_VARIABLE_RevExist_0_6;
              }
              else
              {
                succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ((MR_Box) (Constraint_44)), STATE_VARIABLE_RevExist_0_6);
                if (succeeded)
                  STATE_VARIABLE_RevExist_1_51 = STATE_VARIABLE_RevExist_0_6;
                else
                  {
                    STATE_VARIABLE_RevExist_1_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_RevExist_1_51, 0) = ((MR_Box) (Constraint_44));
                    MR_hl_field(1, STATE_VARIABLE_RevExist_1_51, 1) = ((MR_Box) (STATE_VARIABLE_RevExist_0_6));
                  }
                STATE_VARIABLE_RevUniv_1_50 = STATE_VARIABLE_RevUniv_0_4;
              }
            }
            break;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_52;
        next_value_of_HeadVar__3_3 = Modes_41;
        next_value_of_STATE_VARIABLE_RevUniv_0_4 = STATE_VARIABLE_RevUniv_1_50;
        next_value_of_STATE_VARIABLE_RevExist_0_6 = STATE_VARIABLE_RevExist_1_51;
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
transform_hlds__higher_order__make_specialized_preds__higher_order_record_new_specialized_pred_4_p_0(
  MR_Word CalleePPId_5,
  MR_Word NewPred_6,
  MR_Word STATE_VARIABLE_GlobalInfo_0_12,
  MR_Word * STATE_VARIABLE_GlobalInfo_13)
{
  MR_bool succeeded;
  MR_Word NewPredMap0_8;
  MR_Word NewPredMap_11;
  MR_Word SpecVersions0_9;
  MR_Box conv0_SpecVersions0_9;

  NewPredMap0_8 = transform_hlds__higher_order__higher_order_global_info__hogi_get_new_pred_map_1_f_0(STATE_VARIABLE_GlobalInfo_0_12);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), NewPredMap0_8, ((MR_Box) (CalleePPId_5)), &conv0_SpecVersions0_9);
  if (succeeded)
  {
    SpecVersions0_9 = ((MR_Word) (conv0_SpecVersions0_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word SpecVersions_10;

    mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0), ((MR_Box) (NewPred_6)), SpecVersions0_9, &SpecVersions_10);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), ((MR_Box) (CalleePPId_5)), ((MR_Box) (SpecVersions_10)), NewPredMap0_8, &NewPredMap_11);
  }
  else
  {
    MR_Word SpecVersions_15;

    SpecVersions_15 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0), ((MR_Box) (NewPred_6)));
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), ((MR_Box) (CalleePPId_5)), ((MR_Box) (SpecVersions_15)), NewPredMap0_8, &NewPredMap_11);
  }
  transform_hlds__higher_order__higher_order_global_info__hogi_set_new_pred_map_3_p_0(NewPredMap_11, STATE_VARIABLE_GlobalInfo_0_12, STATE_VARIABLE_GlobalInfo_13);
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
