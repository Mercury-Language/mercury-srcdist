/*
** Automatically generated from `higher_order.make_specialized_preds.m'
** by the Mercury compiler,
** version rotd-2024-04-09
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
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



struct transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0_s {
  MR_Word transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__GlobalInfo_5;
  MR_Word transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6;
  MR_bool transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded;
  MR_Word transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__SpecVersions0_11;
  jmp_buf transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__commit_0;
  MR_Word transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Var_16;
  MR_Word transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Var_17;
  MR_Word transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Version_19;
  MR_Box transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__conv1_Version_19;
};

struct transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0_s {
  MR_bool transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded;
  MR_Word transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__OrigPredProcId_41;
  MR_Word transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ParentVersions_49;
  MR_Integer transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ArgDepth_50;
  jmp_buf transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__commit_0;
  MR_Integer transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__OldArgDepth_52;
  MR_Word transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ParentVersion_79;
  MR_Word transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__Var_98;
  MR_Box transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__conv3_ParentVersion_79;
};

struct transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0_s {
  MR_Word transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__STATE_VARIABLE_GlobalInfo_0_7;
  MR_bool transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__succeeded;
  MR_Word transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25;
  MR_Word transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__SpecVersions0_41;
  jmp_buf transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__commit_0;
  MR_Word transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Var_54;
  MR_Word transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Var_55;
  MR_Word transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Version_63;
  MR_Box transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__conv1_Version_63;
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

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__IntroducedFrom__pred__higher_order_create_new_proc__559__1_4_p_0(
  MR_Word LambdaHeadVar__1_136,
  MR_Word LambdaHeadVar__2_137,
  MR_Word LambdaHeadVar__3_138,
  MR_Word * LambdaHeadVar__4_139);

static MR_bool MR_CALL 
transform_hlds__higher_order__make_specialized_preds__IntroducedFrom__pred__higher_order_create_new_proc__498__1_2_p_0(
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
transform_hlds__higher_order__make_specialized_preds__ho_fixup_pred_4_p_0(
  MR_Word MustRecompute_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_GlobalInfo_0_9,
  MR_Word * STATE_VARIABLE_GlobalInfo_10);

static MR_Word MR_CALL 
transform_hlds__higher_order__make_specialized_preds__get_np_version_ppid_1_f_0(
  MR_Word NewPred_3);

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
  MR_Word STATE_VARIABLE_PredsToFix_0_14,
  MR_Word * STATE_VARIABLE_PredsToFix_15);

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
  MR_Word STATE_VARIABLE_AcceptedRequests_0_53,
  MR_Word * STATE_VARIABLE_AcceptedRequests_54,
  MR_Word STATE_VARIABLE_LoopRequests_0_55,
  MR_Word * STATE_VARIABLE_LoopRequests_56);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_5_p_0_1(
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
  MR_Word STATE_VARIABLE_GlobalInfo_0_71,
  MR_Word * STATE_VARIABLE_GlobalInfo_72);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__write_request_11_p_0(
  MR_Word OutputStream_12,
  MR_Word ModuleInfo_13,
  MR_String Msg_14,
  MR_Word SymName_15,
  MR_Word PredArity_16,
  MR_Word ActualArity_17,
  MR_Word MaybeNewName_18,
  MR_Word HOArgs_19,
  MR_Word Context_20);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__output_higher_order_args_7_p_0(
  MR_Word OutputStream_1,
  MR_Word ModuleInfo_2,
  MR_Integer NumToDrop_3,
  MR_Unsigned Indent_4,
  MR_Word HeadVar__5_5);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0(
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
transform_hlds__higher_order__make_specialized_preds__higher_order_add_new_pred_4_p_0(
  MR_Word CalleePPId_5,
  MR_Word NewPred_6,
  MR_Word STATE_VARIABLE_GlobalInfo_0_12,
  MR_Word * STATE_VARIABLE_GlobalInfo_13);


static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_1[6][2];

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_2[7][3];

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_3[1][1];

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_4[6][7];

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_5[5][6];

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_6[3][5];

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_7[1][12];

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_8[2][4];

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_9[1][9];




static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_1[6][2] = {
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
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3])),
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
    ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_6[2])),
    ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_4[6][7] = {
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
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_must_recompute_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0))
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

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_8[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_4[5])),
    ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_4[5])),
    ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__make_specialized_preds_scalar_common_9[1][9] = {
  /* row   0 */
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

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__IntroducedFrom__pred__higher_order_create_new_proc__559__1_4_p_0(
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
transform_hlds__higher_order__make_specialized_preds__IntroducedFrom__pred__higher_order_create_new_proc__498__1_2_p_0(
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
            MR_hl_field(0, Var_22, 0) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_9[0]));
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
transform_hlds__higher_order__make_specialized_preds__ho_fixup_pred_4_p_0(
  MR_Word MustRecompute_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_GlobalInfo_0_9,
  MR_Word * STATE_VARIABLE_GlobalInfo_10)
{
  MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Integer ProcId_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

  transform_hlds__higher_order__specialize_calls__ho_traverse_proc_5_p_0(MustRecompute_5, PredId_6, ProcId_7, STATE_VARIABLE_GlobalInfo_0_9, STATE_VARIABLE_GlobalInfo_10);
}

static MR_Word MR_CALL 
transform_hlds__higher_order__make_specialized_preds__get_np_version_ppid_1_f_0(
  MR_Word NewPred_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, NewPred_3, (MR_Integer) 0))));

  return HeadVar__2_2;
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

  (env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Version_19 = ((MR_Word) ((env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__conv1_Version_19));
  transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_13;

    (env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Var_16 = transform_hlds__higher_order__higher_order_global_info__hogi_get_params_1_f_0((env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__GlobalInfo_5);
    (env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Var_17 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0((env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__GlobalInfo_5);
    (env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded = transform_hlds__higher_order__higher_order_global_info__version_matches_5_p_0((env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Var_16, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Var_17, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Version_19, &Var_13);
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
      mercury__set__member_2_p_1((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0), &(env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__conv1_Version_19, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__SpecVersions0_11, transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_3, env_ptr);
      (env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0(
  MR_Word GlobalInfo_5,
  MR_Word Request_6,
  MR_Word STATE_VARIABLE_PredsToFix_0_14,
  MR_Word * STATE_VARIABLE_PredsToFix_15)
{
  struct transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0_s env;

  (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__GlobalInfo_5 = GlobalInfo_5;
  (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6 = Request_6;
  {
    MR_Word CallingPredProcId_8 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 0))));
    MR_Word CalledPredProcId_9 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 1))));
    MR_Word NewPredMap0_10;
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 2))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 3))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 4))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 5))));
    MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 6))) >> 1)) & (MR_Integer) 1);
    MR_Word Var_26 = ((MR_Unsigned) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 7))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__Request_6, (MR_Integer) 6)));
    MR_Box conv0_SpecVersions0_11;

    NewPredMap0_10 = transform_hlds__higher_order__higher_order_global_info__hogi_get_new_pred_map_1_f_0((env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__GlobalInfo_5);
    (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), NewPredMap0_10, ((MR_Box) (CalledPredProcId_9)), &conv0_SpecVersions0_11);
    if ((env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded)
    {
      (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__SpecVersions0_11 = ((MR_Word) (conv0_SpecVersions0_11));
      (env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded = MR_TRUE;
    }
    if ((env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded)
      transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_4(&env);
    if ((env).transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0_env_0__succeeded)
      mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (CallingPredProcId_8)), STATE_VARIABLE_PredsToFix_0_14, STATE_VARIABLE_PredsToFix_15);
    else
      *STATE_VARIABLE_PredsToFix_15 = STATE_VARIABLE_PredsToFix_0_14;
  }
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

  (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ParentVersion_79 = ((MR_Word) ((env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__conv3_ParentVersion_79));
  transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__Var_98 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ParentVersion_79, (MR_Integer) 0))));
  (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__OldArgDepth_52 = ((MR_Integer) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ParentVersion_79, (MR_Integer) 1))));
  (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0((env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__OrigPredProcId_41, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__Var_98);
  if ((env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
  {
    (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ArgDepth_50 >= (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__OldArgDepth_52);
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
      mercury__list__member_2_p_1((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_parent_version_info_0), &(env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__conv3_ParentVersion_79, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ParentVersions_49, transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_3, env_ptr);
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
  MR_Word STATE_VARIABLE_AcceptedRequests_0_53,
  MR_Word * STATE_VARIABLE_AcceptedRequests_54,
  MR_Word STATE_VARIABLE_LoopRequests_0_55,
  MR_Word * STATE_VARIABLE_LoopRequests_56)
{
  struct transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0_s env;

  {
    MR_Word ModuleInfo_16;
    MR_Word CallingPredProcId_17;
    MR_Word CalledPredProcId_18;
    MR_Word HOArgs_21;
    MR_Word RequestKind_24;
    MR_Word Context_25;
    MR_Word CalledPredId_26;
    MR_Word PredInfo_28;
    MR_Word PredModule_29;
    MR_String PredName_30;
    MR_Word PredFormArity_31;
    MR_Word Types_32;
    MR_Word ActualArity_33;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Unsigned packed_word_0;
    MR_Integer Var_27;

    ModuleInfo_16 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(GlobalInfo_11);
    CallingPredProcId_17 = ((MR_Word) ((MR_hl_field(0, Request_12, (MR_Integer) 0))));
    CalledPredProcId_18 = ((MR_Word) ((MR_hl_field(0, Request_12, (MR_Integer) 1))));
    Var_19 = ((MR_Word) ((MR_hl_field(0, Request_12, (MR_Integer) 2))));
    Var_20 = ((MR_Word) ((MR_hl_field(0, Request_12, (MR_Integer) 3))));
    HOArgs_21 = ((MR_Word) ((MR_hl_field(0, Request_12, (MR_Integer) 4))));
    Var_22 = ((MR_Word) ((MR_hl_field(0, Request_12, (MR_Integer) 5))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Request_12, (MR_Integer) 6)));
    Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, Request_12, (MR_Integer) 6))) >> 1)) & (MR_Integer) 1);
    RequestKind_24 = ((MR_Unsigned) ((MR_hl_field(0, Request_12, (MR_Integer) 6))) & (MR_Integer) 1);
    Context_25 = ((MR_Word) ((MR_hl_field(0, Request_12, (MR_Integer) 7))));
    CalledPredId_26 = ((MR_Word) ((MR_hl_field(0, CalledPredProcId_18, (MR_Integer) 0))));
    Var_27 = ((MR_Integer) ((MR_hl_field(0, CalledPredProcId_18, (MR_Integer) 1))));
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_16, CalledPredId_26, &PredInfo_28);
    PredModule_29 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_28);
    PredName_30 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_28);
    PredFormArity_31 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_28);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_28, &Types_32);
    ActualArity_33 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_32);
    if (!((MaybeProgressStream_10 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ProgressStream_34 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_10, (MR_Integer) 0))));
      MR_Word Var_60;

      {
        Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_60, 0) = ((MR_Box) (PredModule_29));
        MR_hl_field(1, Var_60, 1) = ((MR_Box) (PredName_30));
      }
      transform_hlds__higher_order__make_specialized_preds__write_request_11_p_0(ProgressStream_34, ModuleInfo_16, (MR_String) "Request for", Var_60, PredFormArity_31, ActualArity_33, (MR_Word) ((MR_Unsigned) 0U), HOArgs_21, Context_25);
    }
    switch (RequestKind_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word GoalSizeMap_35;
          MR_Integer GoalSize_37;
          MR_Word Params_38;
          MR_Integer GoalSize0_36;
          MR_Box conv0_GoalSize0_36;
          MR_Integer Var_66;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Integer Var_83;
          MR_Unsigned packed_word_1;

          GoalSizeMap_35 = transform_hlds__higher_order__higher_order_global_info__hogi_get_goal_size_map_1_f_0(GlobalInfo_11);
          (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), GoalSizeMap_35, ((MR_Box) (CalledPredId_26)), &conv0_GoalSize0_36);
          if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
          {
            GoalSize0_36 = ((MR_Integer) (conv0_GoalSize0_36));
            (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = MR_TRUE;
          }
          if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
            GoalSize_37 = GoalSize0_36;
          else
            GoalSize_37 = (MR_Integer) 0;
          Params_38 = transform_hlds__higher_order__higher_order_global_info__hogi_get_params_1_f_0(GlobalInfo_11);
          packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Params_38, (MR_Integer) 0)));
          Var_80 = ((((MR_Unsigned) ((MR_hl_field(0, Params_38, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
          Var_81 = ((((MR_Unsigned) ((MR_hl_field(0, Params_38, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
          Var_82 = ((MR_Unsigned) ((MR_hl_field(0, Params_38, (MR_Integer) 0))) & (MR_Integer) 1);
          Var_66 = ((MR_Integer) ((MR_hl_field(0, Params_38, (MR_Integer) 1))));
          Var_83 = ((MR_Integer) ((MR_hl_field(0, Params_38, (MR_Integer) 2))));
          (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = (GoalSize_37 > Var_66);
          if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
          {
            libs__file_util__maybe_write_string_to_stream_4_p_0(MaybeProgressStream_10, (MR_String) "%    not specializing (goal too large).\n");
            *STATE_VARIABLE_LoopRequests_56 = STATE_VARIABLE_LoopRequests_0_55;
            *STATE_VARIABLE_AcceptedRequests_54 = STATE_VARIABLE_AcceptedRequests_0_53;
          }
          else
          {
            MR_Integer Var_69;
            MR_Integer Var_70;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Var_86;
            MR_Integer Var_87;
            MR_Unsigned packed_word_2;

            Var_69 = transform_hlds__higher_order__higher_order_global_info__higher_order_args_size_1_f_0(HOArgs_21);
            packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, Params_38, (MR_Integer) 0)));
            Var_84 = ((((MR_Unsigned) ((MR_hl_field(0, Params_38, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
            Var_85 = ((((MR_Unsigned) ((MR_hl_field(0, Params_38, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
            Var_86 = ((MR_Unsigned) ((MR_hl_field(0, Params_38, (MR_Integer) 0))) & (MR_Integer) 1);
            Var_87 = ((MR_Integer) ((MR_hl_field(0, Params_38, (MR_Integer) 1))));
            Var_70 = ((MR_Integer) ((MR_hl_field(0, Params_38, (MR_Integer) 2))));
            (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = (Var_69 > Var_70);
            if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
            {
              libs__file_util__maybe_write_string_to_stream_4_p_0(MaybeProgressStream_10, (MR_String) "%    not specializing (args too large).\n");
              *STATE_VARIABLE_LoopRequests_56 = STATE_VARIABLE_LoopRequests_0_55;
              *STATE_VARIABLE_AcceptedRequests_54 = STATE_VARIABLE_AcceptedRequests_0_53;
            }
            else
            {
              MR_Word VersionInfoMap_39;
              MR_Word CallingVersionInfo_45;
              MR_Word CalledVersionInfo_40;
              MR_Box conv1_CalledVersionInfo_40;
              MR_Box conv2_CallingVersionInfo_45;
              MR_Word Var_46;
              MR_Integer Var_47;
              MR_Word Var_48;

              VersionInfoMap_39 = transform_hlds__higher_order__higher_order_global_info__hogi_get_version_info_map_1_f_0(GlobalInfo_11);
              (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0), VersionInfoMap_39, ((MR_Box) (CalledPredProcId_18)), &conv1_CalledVersionInfo_40);
              if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
              {
                CalledVersionInfo_40 = ((MR_Word) (conv1_CalledVersionInfo_40));
                (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = MR_TRUE;
              }
              if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
              {
                MR_Integer Var_42;
                MR_Word Var_43;
                MR_Word Var_44;

                (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__OrigPredProcId_41 = ((MR_Word) ((MR_hl_field(0, CalledVersionInfo_40, (MR_Integer) 0))));
                Var_42 = ((MR_Integer) ((MR_hl_field(0, CalledVersionInfo_40, (MR_Integer) 1))));
                Var_43 = ((MR_Word) ((MR_hl_field(0, CalledVersionInfo_40, (MR_Integer) 2))));
                Var_44 = ((MR_Word) ((MR_hl_field(0, CalledVersionInfo_40, (MR_Integer) 3))));
              }
              else
                (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__OrigPredProcId_41 = CalledPredProcId_18;
              (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0), VersionInfoMap_39, ((MR_Box) (CallingPredProcId_17)), &conv2_CallingVersionInfo_45);
              if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
              {
                CallingVersionInfo_45 = ((MR_Word) (conv2_CallingVersionInfo_45));
                (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded = MR_TRUE;
              }
              if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
              {
                Var_46 = ((MR_Word) ((MR_hl_field(0, CallingVersionInfo_45, (MR_Integer) 0))));
                Var_47 = ((MR_Integer) ((MR_hl_field(0, CallingVersionInfo_45, (MR_Integer) 1))));
                Var_48 = ((MR_Word) ((MR_hl_field(0, CallingVersionInfo_45, (MR_Integer) 2))));
                (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ParentVersions_49 = ((MR_Word) ((MR_hl_field(0, CallingVersionInfo_45, (MR_Integer) 3))));
                (env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__ArgDepth_50 = transform_hlds__higher_order__higher_order_global_info__higher_order_args_depth_1_f_0(HOArgs_21);
                transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_4(&env);
              }
              if ((env).transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0_env_0__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_LoopRequests_56 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Request_12));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_LoopRequests_0_55));
                }
                libs__file_util__maybe_write_string_to_stream_4_p_0(MaybeProgressStream_10, (MR_String) "%    not specializing (recursive specialization).\n");
                *STATE_VARIABLE_AcceptedRequests_54 = STATE_VARIABLE_AcceptedRequests_0_53;
              }
              else
              {
                libs__file_util__maybe_write_string_to_stream_4_p_0(MaybeProgressStream_10, (MR_String) "%    request specialized.\n");
                mercury__list__cons_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0), ((MR_Box) (Request_12)), STATE_VARIABLE_AcceptedRequests_0_53, STATE_VARIABLE_AcceptedRequests_54);
                *STATE_VARIABLE_LoopRequests_56 = STATE_VARIABLE_LoopRequests_0_55;
              }
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_to_stream_4_p_0(MaybeProgressStream_10, (MR_String) "%    request specialized (user-requested specialization)\n");
          mercury__list__cons_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0), ((MR_Box) (Request_12)), STATE_VARIABLE_AcceptedRequests_0_53, STATE_VARIABLE_AcceptedRequests_54);
          *STATE_VARIABLE_LoopRequests_56 = STATE_VARIABLE_LoopRequests_0_55;
        }
        break;
    }
  }
}

void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__recursively_process_ho_spec_requests_5_p_0(
  MR_Word MaybeProgressStream_6,
  MR_Word STATE_VARIABLE_GlobalInfo_0_10,
  MR_Word * STATE_VARIABLE_GlobalInfo_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word RequestSet0_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    RequestSet0_9 = transform_hlds__higher_order__higher_order_global_info__hogi_get_requests_1_f_0(STATE_VARIABLE_GlobalInfo_0_10);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0), RequestSet0_9);
    if (succeeded)
      *STATE_VARIABLE_GlobalInfo_11 = STATE_VARIABLE_GlobalInfo_0_10;
    else
    {
      MR_Word STATE_VARIABLE_GlobalInfo_14_14;
      MR_Word next_value_of_STATE_VARIABLE_GlobalInfo_0_10;

      transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_5_p_0(MaybeProgressStream_6, STATE_VARIABLE_GlobalInfo_0_10, &STATE_VARIABLE_GlobalInfo_14_14);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_GlobalInfo_0_10 = STATE_VARIABLE_GlobalInfo_14_14;
      STATE_VARIABLE_GlobalInfo_0_10 = next_value_of_STATE_VARIABLE_GlobalInfo_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_GlobalInfo_10;

  transform_hlds__higher_order__make_specialized_preds__ho_fixup_pred_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_GlobalInfo_10);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_GlobalInfo_10));
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_GlobalInfo_10;

  transform_hlds__higher_order__make_specialized_preds__ho_fixup_pred_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_GlobalInfo_10);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_GlobalInfo_10));
}

static MR_Box MR_CALL 
transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_5_p_0_3(
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
transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_PredsToFix_15;

  transform_hlds__higher_order__make_specialized_preds__check_loop_request_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_PredsToFix_15);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_PredsToFix_15));
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_5_p_0_1(
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
  MR_Word conv1_STATE_VARIABLE_AcceptedRequests_54;
  MR_Word conv0_STATE_VARIABLE_LoopRequests_56;

  transform_hlds__higher_order__make_specialized_preds__filter_request_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_AcceptedRequests_54, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_LoopRequests_56);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_AcceptedRequests_54));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_LoopRequests_56));
}

void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_5_p_0(
  MR_Word MaybeProgressStream_6,
  MR_Word STATE_VARIABLE_GlobalInfo_0_22,
  MR_Word * STATE_VARIABLE_GlobalInfo_23)
{
  MR_Word RequestSet0_9;
  MR_Word Requests0_10;
  MR_Word Requests_11;
  MR_Word LoopRequests_12;
  MR_Word Var_26;
  MR_Word STATE_VARIABLE_GlobalInfo_27_27;
  MR_Word Var_28;
  MR_Box conv4_Requests_11;
  MR_Box conv3_LoopRequests_12;
  MR_Box conv2_STATE_VARIABLE_IO_31_31;

  RequestSet0_9 = transform_hlds__higher_order__higher_order_global_info__hogi_get_requests_1_f_0(STATE_VARIABLE_GlobalInfo_0_22);
  Requests0_10 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0), RequestSet0_9);
  Var_26 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0));
  transform_hlds__higher_order__higher_order_global_info__hogi_set_requests_3_p_0(Var_26, STATE_VARIABLE_GlobalInfo_0_22, &STATE_VARIABLE_GlobalInfo_27_27);
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_7[0]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_5_p_0_1));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (MaybeProgressStream_6));
    MR_hl_field(0, Var_28, 4) = ((MR_Box) (STATE_VARIABLE_GlobalInfo_27_27));
  }
  mercury__list__foldl3_8_p_2((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_28, Requests0_10, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_Requests_11, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_LoopRequests_12, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_31_31);
  Requests_11 = ((MR_Word) (conv4_Requests_11));
  LoopRequests_12 = ((MR_Word) (conv3_LoopRequests_12));
  if ((Requests_11 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_GlobalInfo_23 = STATE_VARIABLE_GlobalInfo_27_27;
  else
  {
    MR_Word NewPredList_16;
    MR_Word PredProcs_17;
    MR_Word STATE_VARIABLE_PredProcsToFix_32_32;
    MR_Word STATE_VARIABLE_PredProcsToFix_34_34;
    MR_Word STATE_VARIABLE_GlobalInfo_35_35;
    MR_Word Var_37;
    MR_Word STATE_VARIABLE_PredProcsToFix_38_38;
    MR_Word STATE_VARIABLE_GlobalInfo_39_39;
    MR_Word STATE_VARIABLE_GlobalInfo_40_40;
    MR_Word NewPredProcIds_56;
    MR_Word Requests0_63;
    MR_Word STATE_VARIABLE_GlobalInfo_10_65;
    MR_Box conv6_STATE_VARIABLE_PredProcsToFix_38_38;
    MR_Box conv9_STATE_VARIABLE_GlobalInfo_39_39;
    MR_Box conv11_STATE_VARIABLE_GlobalInfo_10_65;

    mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), &STATE_VARIABLE_PredProcsToFix_32_32);
    transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0(MaybeProgressStream_6, Requests_11, (MR_Word) ((MR_Unsigned) 0U), &NewPredList_16, STATE_VARIABLE_PredProcsToFix_32_32, &STATE_VARIABLE_PredProcsToFix_34_34, STATE_VARIABLE_GlobalInfo_27_27, &STATE_VARIABLE_GlobalInfo_35_35);
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_37, 0) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_4[4]));
      MR_hl_field(0, Var_37, 1) = ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_5_p_0_2));
      MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_37, 3) = ((MR_Box) (STATE_VARIABLE_GlobalInfo_35_35));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[1]), Var_37, LoopRequests_12, ((MR_Box) (STATE_VARIABLE_PredProcsToFix_34_34)), &conv6_STATE_VARIABLE_PredProcsToFix_38_38);
    STATE_VARIABLE_PredProcsToFix_38_38 = ((MR_Word) (conv6_STATE_VARIABLE_PredProcsToFix_38_38));
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), STATE_VARIABLE_PredProcsToFix_38_38, &PredProcs_17);
    NewPredProcIds_56 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_2[6]), NewPredList_16);
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_8[0]), NewPredProcIds_56, ((MR_Box) (STATE_VARIABLE_GlobalInfo_35_35)), &conv9_STATE_VARIABLE_GlobalInfo_39_39);
    STATE_VARIABLE_GlobalInfo_39_39 = ((MR_Word) (conv9_STATE_VARIABLE_GlobalInfo_39_39));
    Requests0_63 = transform_hlds__higher_order__higher_order_global_info__hogi_get_requests_1_f_0(STATE_VARIABLE_GlobalInfo_39_39);
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_8[1]), PredProcs_17, ((MR_Box) (STATE_VARIABLE_GlobalInfo_39_39)), &conv11_STATE_VARIABLE_GlobalInfo_10_65);
    STATE_VARIABLE_GlobalInfo_10_65 = ((MR_Word) (conv11_STATE_VARIABLE_GlobalInfo_10_65));
    transform_hlds__higher_order__higher_order_global_info__hogi_set_requests_3_p_0(Requests0_63, STATE_VARIABLE_GlobalInfo_10_65, &STATE_VARIABLE_GlobalInfo_40_40);
    if ((NewPredList_16 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_GlobalInfo_23 = STATE_VARIABLE_GlobalInfo_40_40;
    else
    {
      MR_Word ModuleInfo0_20;
      MR_Word ModuleInfo_21;

      ModuleInfo0_20 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(STATE_VARIABLE_GlobalInfo_40_40);
      hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(ModuleInfo0_20, &ModuleInfo_21);
      transform_hlds__higher_order__higher_order_global_info__hogi_set_module_info_3_p_0(ModuleInfo_21, STATE_VARIABLE_GlobalInfo_40_40, STATE_VARIABLE_GlobalInfo_23);
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

  (env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Version_63 = ((MR_Word) ((env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__conv1_Version_63));
  transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_43;

    (env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Var_54 = transform_hlds__higher_order__higher_order_global_info__hogi_get_params_1_f_0((env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__STATE_VARIABLE_GlobalInfo_0_7);
    (env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Var_55 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0((env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__STATE_VARIABLE_GlobalInfo_0_7);
    (env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__succeeded = transform_hlds__higher_order__higher_order_global_info__version_matches_5_p_0((env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Var_54, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Var_55, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Version_63, &Var_43);
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
      mercury__set__member_2_p_1((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0), &(env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__conv1_Version_63, (env_ptr)->transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__SpecVersions0_41, transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_3, env_ptr);
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

  (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__STATE_VARIABLE_GlobalInfo_0_7 = STATE_VARIABLE_GlobalInfo_0_7;
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_GlobalInfo_8 = (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__STATE_VARIABLE_GlobalInfo_0_7;
      *STATE_VARIABLE_PredsToFix_6 = STATE_VARIABLE_PredsToFix_0_5;
      *STATE_VARIABLE_NewPreds_4 = STATE_VARIABLE_NewPreds_0_3;
    }
    else
    {
      MR_Word Requests_26;
      MR_Word CallingPredProcId_31;
      MR_Word CalledPredProcId_32;
      MR_Word NewPredMap_40;
      MR_Word STATE_VARIABLE_PredsToFix_53_53;
      MR_Word STATE_VARIABLE_GlobalInfo_56_56;
      MR_Word STATE_VARIABLE_NewPreds_58_58;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Unsigned packed_word_0;
      MR_Box conv0_SpecVersions0_41;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_NewPreds_0_3;
      MR_Word next_value_of_STATE_VARIABLE_PredsToFix_0_5;
      MR_Word next_value_of_STATE_VARIABLE_GlobalInfo_0_7;

      (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      Requests_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      CallingPredProcId_31 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 0))));
      CalledPredProcId_32 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 1))));
      Var_33 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 2))));
      Var_34 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 3))));
      Var_35 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 4))));
      Var_36 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 5))));
      packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 6)));
      Var_37 = ((((MR_Unsigned) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 6))) >> 1)) & (MR_Integer) 1);
      Var_38 = ((MR_Unsigned) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 6))) & (MR_Integer) 1);
      Var_39 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, (MR_Integer) 7))));
      mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (CallingPredProcId_31)), STATE_VARIABLE_PredsToFix_0_5, &STATE_VARIABLE_PredsToFix_53_53);
      NewPredMap_40 = transform_hlds__higher_order__higher_order_global_info__hogi_get_new_pred_map_1_f_0((env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__STATE_VARIABLE_GlobalInfo_0_7);
      (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), NewPredMap_40, ((MR_Box) (CalledPredProcId_32)), &conv0_SpecVersions0_41);
      if ((env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__succeeded)
      {
        (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__SpecVersions0_41 = ((MR_Word) (conv0_SpecVersions0_41));
        (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__succeeded = MR_TRUE;
      }
      if ((env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__succeeded)
        transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_4(&env);
      if ((env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__succeeded)
      {
        STATE_VARIABLE_GlobalInfo_56_56 = (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__STATE_VARIABLE_GlobalInfo_0_7;
        STATE_VARIABLE_NewPreds_58_58 = STATE_VARIABLE_NewPreds_0_3;
      }
      else
      {
        MR_Word NewPred_44;

        transform_hlds__higher_order__make_specialized_preds__create_new_ho_spec_pred_7_p_0(MaybeProgressStream_1, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__Request_25, &NewPred_44, (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__STATE_VARIABLE_GlobalInfo_0_7, &STATE_VARIABLE_GlobalInfo_56_56);
        {
          STATE_VARIABLE_NewPreds_58_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_NewPreds_58_58, 0) = ((MR_Box) (NewPred_44));
          MR_hl_field(1, STATE_VARIABLE_NewPreds_58_58, 1) = ((MR_Box) (STATE_VARIABLE_NewPreds_0_3));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Requests_26;
      next_value_of_STATE_VARIABLE_NewPreds_0_3 = STATE_VARIABLE_NewPreds_58_58;
      next_value_of_STATE_VARIABLE_PredsToFix_0_5 = STATE_VARIABLE_PredsToFix_53_53;
      next_value_of_STATE_VARIABLE_GlobalInfo_0_7 = STATE_VARIABLE_GlobalInfo_56_56;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_NewPreds_0_3 = next_value_of_STATE_VARIABLE_NewPreds_0_3;
      STATE_VARIABLE_PredsToFix_0_5 = next_value_of_STATE_VARIABLE_PredsToFix_0_5;
      (env).transform_hlds__higher_order__make_specialized_preds__maybe_create_new_ho_spec_preds_10_p_0_env_0__STATE_VARIABLE_GlobalInfo_0_7 = next_value_of_STATE_VARIABLE_GlobalInfo_0_7;
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
  MR_Word STATE_VARIABLE_GlobalInfo_0_71,
  MR_Word * STATE_VARIABLE_GlobalInfo_72)
{
  MR_Word CallerPPId_13 = ((MR_Word) ((MR_hl_field(0, Request_9, (MR_Integer) 0))));
  MR_Word CalleePPId_14 = ((MR_Word) ((MR_hl_field(0, Request_9, (MR_Integer) 1))));
  MR_Word CallArgsTypes_15 = ((MR_Word) ((MR_hl_field(0, Request_9, (MR_Integer) 2))));
  MR_Word ExtraTypeInfoTVars_16 = ((MR_Word) ((MR_hl_field(0, Request_9, (MR_Integer) 3))));
  MR_Word HOArgs_17 = ((MR_Word) ((MR_hl_field(0, Request_9, (MR_Integer) 4))));
  MR_Word CallerTVarSet_18 = ((MR_Word) ((MR_hl_field(0, Request_9, (MR_Integer) 5))));
  MR_Word RequestKind_20 = ((MR_Unsigned) ((MR_hl_field(0, Request_9, (MR_Integer) 6))) & (MR_Integer) 1);
  MR_Word Context_21 = ((MR_Word) ((MR_hl_field(0, Request_9, (MR_Integer) 7))));
  MR_Word CallerPredId_22 = ((MR_Word) ((MR_hl_field(0, CallerPPId_13, (MR_Integer) 0))));
  MR_Integer CallerProcId_23 = ((MR_Integer) ((MR_hl_field(0, CallerPPId_13, (MR_Integer) 1))));
  MR_Word ModuleInfo0_24;
  MR_Word PredInfo0_25;
  MR_Word ProcInfo0_26;
  MR_String Name0_27;
  MR_Word PredFormArity_28;
  MR_Word PredOrFunc_29;
  MR_Word PredModuleName_30;
  MR_Word ArgTVarSet_31;
  MR_Word ExistQVars_32;
  MR_Word Types_33;
  MR_String SpecName_36;
  MR_Word ProcTransform_37;
  MR_Integer NewProcId_38;
  MR_Word PredStatus_39;
  MR_Word OrigOrigin_43;
  MR_Word TypeVarSet_44;
  MR_Word MarkerList_45;
  MR_Word GoalType_46;
  MR_Word ClassContext_47;
  MR_Word VarNameRemap_48;
  MR_Word InitTypes_49;
  MR_Word ItemNumbers_50;
  MR_Word ClausesInfo0_51;
  MR_Word EmptyVarSet_52;
  MR_Word VarTable_53;
  MR_Word ClausesInfo_54;
  MR_Word CalleePredId_55;
  MR_Integer CalleeProcId_56;
  MR_Word Origin_57;
  MR_Word EmptyProofs_59;
  MR_Word EmptyConstraintMap_60;
  MR_Word NewPredInfo0_61;
  MR_Word NewPredInfo1_62;
  MR_Word PredTable0_63;
  MR_Word NewPredId_64;
  MR_Word PredTable_65;
  MR_Word ModuleInfo1_66;
  MR_Word SpecSymName_67;
  MR_Word NewPredInfo_68;
  MR_Word ModuleInfo2_69;
  MR_Word ModuleInfo_70;
  MR_Word STATE_VARIABLE_GlobalInfo_76_76;
  MR_Word Var_82;
  MR_Integer Var_83;
  MR_Word STATE_VARIABLE_GlobalInfo_85_85;
  MR_Word Var_86;
  MR_Word STATE_VARIABLE_GlobalInfo_87_87;
  MR_Word STATE_VARIABLE_GlobalInfo_88_88;
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Request_9, (MR_Integer) 6)));

  ModuleInfo0_24 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(STATE_VARIABLE_GlobalInfo_0_71);
  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo0_24, CalleePPId_14, &PredInfo0_25, &ProcInfo0_26);
  Name0_27 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo0_25);
  PredFormArity_28 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo0_25);
  PredOrFunc_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_25);
  PredModuleName_30 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo0_25);
  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo0_25, &ArgTVarSet_31, &ExistQVars_32, &Types_33);
  switch (RequestKind_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer SeqNum_40;
        MR_Word Transform_90;

        NewProcId_38 = hlds__hlds_pred__initial_proc_id_0_f_0();
        transform_hlds__higher_order__higher_order_global_info__hogi_allocate_id_3_p_0(&SeqNum_40, STATE_VARIABLE_GlobalInfo_0_71, &STATE_VARIABLE_GlobalInfo_76_76);
        {
          Transform_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Transform_90, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_29));
          MR_hl_field(0, Transform_90, 1) = ((MR_Box) (SeqNum_40));
        }
        hlds__pred_name__make_transformed_pred_name_3_p_0(Name0_27, Transform_90, &SpecName_36);
        {
          ProcTransform_37 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, ProcTransform_37, 0) = ((MR_Box) (SeqNum_40));
        }
        PredStatus_39 = (MR_Word) (((MR_Box) ((MR_Unsigned) 32U)));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String CallerPredName0_34;
        MR_Word Transform_35;

        CallerPredName0_34 = hlds__hlds_module__predicate_name_2_f_0(ModuleInfo0_24, CallerPredId_22);
        {
          Transform_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Transform_35, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_29));
          MR_hl_field(1, Transform_35, 1) = ((MR_Box) (CallerPredId_22));
          MR_hl_field(1, Transform_35, 2) = ((MR_Box) (CallerProcId_23));
          MR_hl_field(1, Transform_35, 3) = ((MR_Box) ((MR_Integer) 1));
        }
        hlds__pred_name__make_transformed_pred_name_3_p_0(CallerPredName0_34, Transform_35, &SpecName_36);
        {
          ProcTransform_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ProcTransform_37, 0) = ((MR_Box) (CallerPredId_22));
          MR_hl_field(1, ProcTransform_37, 1) = ((MR_Box) (CallerProcId_23));
        }
        NewProcId_38 = CallerProcId_23;
        hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_25, &PredStatus_39);
        STATE_VARIABLE_GlobalInfo_76_76 = STATE_VARIABLE_GlobalInfo_0_71;
      }
      break;
  }
  if (!((MaybeProgressStream_8 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word ProgressStream_41 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_8, (MR_Integer) 0))));
    MR_Word ActualArity_42;
    MR_Word Var_79;
    MR_Word Var_80;

    ActualArity_42 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_33);
    {
      Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_79, 0) = ((MR_Box) (PredModuleName_30));
      MR_hl_field(1, Var_79, 1) = ((MR_Box) (Name0_27));
    }
    {
      Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_80, 0) = ((MR_Box) (SpecName_36));
    }
    transform_hlds__higher_order__make_specialized_preds__write_request_11_p_0(ProgressStream_41, ModuleInfo0_24, (MR_String) "Specializing", Var_79, PredFormArity_28, ActualArity_42, Var_80, HOArgs_17, Context_21);
  }
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_25, &OrigOrigin_43);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo0_25, &TypeVarSet_44);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_25, &MarkerList_45);
  hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo0_25, &GoalType_46);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo0_25, &ClassContext_47);
  hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(PredInfo0_25, &VarNameRemap_48);
  Var_83 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_2[0]), CallArgsTypes_15);
  Var_82 = (MR_Word) (Var_83);
  {
    InitTypes_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InitTypes_49, 0) = ((MR_Box) (Var_82));
  }
  ItemNumbers_50 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
  hlds__hlds_clauses__clauses_info_init_4_p_0((MR_Integer) 0, InitTypes_49, ItemNumbers_50, &ClausesInfo0_51);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &EmptyVarSet_52);
  hlds__var_table_hlds__vars_types_to_var_table_4_p_0(ModuleInfo0_24, EmptyVarSet_52, CallArgsTypes_15, &VarTable_53);
  hlds__hlds_clauses__clauses_info_set_var_table_3_p_0(VarTable_53, ClausesInfo0_51, &ClausesInfo_54);
  CalleePredId_55 = ((MR_Word) ((MR_hl_field(0, CalleePPId_14, (MR_Integer) 0))));
  CalleeProcId_56 = ((MR_Integer) ((MR_hl_field(0, CalleePPId_14, (MR_Integer) 1))));
  {
    Origin_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Origin_57, 0) = ((MR_Box) (ProcTransform_37));
    MR_hl_field(3, Origin_57, 1) = ((MR_Box) (OrigOrigin_43));
    MR_hl_field(3, Origin_57, 2) = ((MR_Box) (CalleePredId_55));
    MR_hl_field(3, Origin_57, 3) = ((MR_Box) (CalleeProcId_56));
  }
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &EmptyProofs_59);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &EmptyConstraintMap_60);
  hlds__hlds_pred__pred_info_init_19_p_0(PredOrFunc_29, PredModuleName_30, SpecName_36, PredFormArity_28, Context_21, Origin_57, PredStatus_39, (MR_Word) ((MR_Unsigned) 0U), GoalType_46, MarkerList_45, Types_33, ArgTVarSet_31, ExistQVars_32, ClassContext_47, EmptyProofs_59, EmptyConstraintMap_60, ClausesInfo_54, VarNameRemap_48, &NewPredInfo0_61);
  hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_44, NewPredInfo0_61, &NewPredInfo1_62);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo0_24, &PredTable0_63);
  hlds__pred_table__predicate_table_insert_4_p_0(NewPredInfo1_62, &NewPredId_64, PredTable0_63, &PredTable_65);
  hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_65, ModuleInfo0_24, &ModuleInfo1_66);
  transform_hlds__higher_order__higher_order_global_info__hogi_set_module_info_3_p_0(ModuleInfo1_66, STATE_VARIABLE_GlobalInfo_76_76, &STATE_VARIABLE_GlobalInfo_85_85);
  {
    SpecSymName_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SpecSymName_67, 0) = ((MR_Box) (PredModuleName_30));
    MR_hl_field(1, SpecSymName_67, 1) = ((MR_Box) (SpecName_36));
  }
  {
    Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_86, 0) = ((MR_Box) (NewPredId_64));
    MR_hl_field(0, Var_86, 1) = ((MR_Box) (NewProcId_38));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *NewPred_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_86));
    MR_hl_field(0, base, 1) = ((MR_Box) (CalleePPId_14));
    MR_hl_field(0, base, 2) = ((MR_Box) (CallerPPId_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (SpecSymName_67));
    MR_hl_field(0, base, 4) = ((MR_Box) (HOArgs_17));
    MR_hl_field(0, base, 5) = ((MR_Box) (CallArgsTypes_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (ExtraTypeInfoTVars_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (CallerTVarSet_18));
    MR_hl_field(0, base, 8) = (MR_Box) (packed_word_0);
  }
  transform_hlds__higher_order__make_specialized_preds__higher_order_add_new_pred_4_p_0(CalleePPId_14, *NewPred_10, STATE_VARIABLE_GlobalInfo_85_85, &STATE_VARIABLE_GlobalInfo_87_87);
  transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0(*NewPred_10, ProcInfo0_26, NewPredInfo1_62, &NewPredInfo_68, STATE_VARIABLE_GlobalInfo_87_87, &STATE_VARIABLE_GlobalInfo_88_88);
  ModuleInfo2_69 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(STATE_VARIABLE_GlobalInfo_88_88);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(NewPredId_64, NewPredInfo_68, ModuleInfo2_69, &ModuleInfo_70);
  transform_hlds__higher_order__higher_order_global_info__hogi_set_module_info_3_p_0(ModuleInfo_70, STATE_VARIABLE_GlobalInfo_88_88, STATE_VARIABLE_GlobalInfo_72);
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__write_request_11_p_0(
  MR_Word OutputStream_12,
  MR_Word ModuleInfo_13,
  MR_String Msg_14,
  MR_Word SymName_15,
  MR_Word PredArity_16,
  MR_Word ActualArity_17,
  MR_Word MaybeNewName_18,
  MR_Word HOArgs_19,
  MR_Word Context_20)
{
  MR_String ContextStr_22;
  MR_String OldName_23;
  MR_Integer PredArityInt_24;
  MR_String IntoStr_26;
  MR_Integer ActualArityInt_27;
  MR_Integer NumToDrop_28;
  MR_String Var_60;

  ContextStr_22 = parse_tree__parse_tree_out_misc__context_to_string_1_f_0(Context_20);
  OldName_23 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_15);
  PredArityInt_24 = (MR_Integer) (PredArity_16);
  if ((MaybeNewName_18 == (MR_Word) ((MR_Unsigned) 0U)))
    IntoStr_26 = (MR_String) "";
  else
  {
    MR_String NewName_25 = ((MR_String) ((MR_hl_field(1, MaybeNewName_18, (MR_Integer) 0))));

    IntoStr_26 = mercury__string__f_43_43_2_f_0((MR_String) " into ", NewName_25);
  }
  mercury__io__write_string_4_p_0(OutputStream_12, (MR_String) "% ");
  mercury__io__write_string_4_p_0(OutputStream_12, ContextStr_22);
  mercury__io__write_string_4_p_0(OutputStream_12, Msg_14);
  mercury__io__write_string_4_p_0(OutputStream_12, (MR_String) " \140");
  mercury__io__write_string_4_p_0(OutputStream_12, OldName_23);
  mercury__io__write_string_4_p_0(OutputStream_12, (MR_String) "\'/");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_3[0]), PredArityInt_24, &Var_60);
  mercury__io__write_string_4_p_0(OutputStream_12, Var_60);
  mercury__io__write_string_4_p_0(OutputStream_12, IntoStr_26);
  mercury__io__write_string_4_p_0(OutputStream_12, (MR_String) " with higher-order arguments:\n");
  ActualArityInt_27 = (MR_Integer) (ActualArity_17);
  NumToDrop_28 = (MR_Integer) ((MR_Unsigned) ActualArityInt_27 - (MR_Unsigned) PredArityInt_24);
  transform_hlds__higher_order__make_specialized_preds__output_higher_order_args_7_p_0(OutputStream_12, ModuleInfo_13, NumToDrop_28, (MR_Unsigned) 0U, HOArgs_19);
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
transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0_8(
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
transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0_7(
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
transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_LambdaHeadVar__4_139;

  transform_hlds__higher_order__make_specialized_preds__IntroducedFrom__pred__higher_order_create_new_proc__559__1_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_LambdaHeadVar__4_139);
  *wrapper_arg_4 = ((MR_Box) (conv6_LambdaHeadVar__4_139));
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0_5(
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
transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0_4(
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
transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0_3(
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
transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0_2(
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
transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_126;

  succeeded = transform_hlds__higher_order__make_specialized_preds__IntroducedFrom__pred__higher_order_create_new_proc__498__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_126);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_126));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0(
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
  MR_Word Var_149;
  MR_Word Var_150;
  MR_Word Var_151;
  MR_Word Var_153;
  MR_Word Var_154;
  MR_Word Var_155;
  MR_Word STATE_VARIABLE_NewProcInfo_157_157;
  MR_Word STATE_VARIABLE_NewProcInfo_158_158;
  MR_Word Var_159;
  MR_Word STATE_VARIABLE_NewProcInfo_160_160;
  MR_Word STATE_VARIABLE_NewProcInfo_161_161;
  MR_Word STATE_VARIABLE_NewProcInfo_162_162;
  MR_Word Var_164;
  MR_Word Var_165;
  MR_Word Var_166;
  MR_Word STATE_VARIABLE_NewPredInfo_168_168;
  MR_Word STATE_VARIABLE_NewPredInfo_169_169;
  MR_Word STATE_VARIABLE_NewProcInfo_171_171;
  MR_Word Var_172;
  MR_Word STATE_VARIABLE_NewPredInfo_173_173;
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
  mercury__assoc_list__keys_and_values_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), CallArgsTypes0_17, &CallArgs_40, &CallerArgTypes0_41);
  parse_tree__prog_type_unify__compute_caller_callee_type_substitution_5_p_0(OriginalArgTypes1_38, CallerArgTypes0_41, CallerHeadParams_32, ExistQVars1_39, &TypeSubn_42);
  parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(KindMap_36, TypeSubn_42, ExistQVars1_39, &ExistQTypes_43);
  mercury__list__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[4]), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_2[2]), ExistQTypes_43, &ExistQVars_47);
  {
    Var_127 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_127, 0) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_5[1]));
    MR_hl_field(0, Var_127, 1) = ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0_2));
    MR_hl_field(0, Var_127, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_127, 3) = ((MR_Box) (ModuleInfo_11));
  }
  parse_tree__var_table__apply_rec_subst_to_var_table_4_p_0(Var_127, TypeSubn_42, VarTable1_37, &VarTable2_48);
  parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(TypeSubn_42, OriginalArgTypes1_38, &OriginalArgTypes_49);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable2_48, STATE_VARIABLE_NewProcInfo_0_119, &STATE_VARIABLE_NewProcInfo_128_128);
  Var_129 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
  parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_129, ExtraTypeInfoTVars0_18, &ExtraTypeInfoTVarTypes0_50);
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeSubn_42);
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
      MR_hl_field(0, Var_130, 1) = ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0_3));
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.make_specialized_preds.higher_order_create_new_proc\'/6", (MR_String) "type var got bound");
        return;
      }
  }
  ExtraTypeInfoTypes_55 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_2[3]), ExtraTypeInfoTVarTypes_52);
  hlds__hlds_proc_util__proc_info_create_vars_from_types_5_p_0(ModuleInfo_11, ExtraTypeInfoTypes_55, &ExtraTypeInfoVars_56, STATE_VARIABLE_NewProcInfo_128_128, &STATE_VARIABLE_NewProcInfo_134_134);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_NewProcInfo_134_134, &RttiVarMaps0_57);
  mercury__map__init_1_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), &EmptyVarRenaming_58);
  hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(TypeRenaming_35, TypeSubn_42, EmptyVarRenaming_58, RttiVarMaps0_57, &RttiVarMaps1_59);
  mercury__list__foldl_corresponding_5_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_2[4]), ExtraTypeInfoVars_56, ExtraTypeInfoTVarTypes_52, ((MR_Box) (RttiVarMaps1_59)), &conv5_RttiVarMaps2_60);
  RttiVarMaps2_60 = ((MR_Word) (conv5_RttiVarMaps2_60));
  mercury__list__foldl_corresponding_5_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[4]), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_2[5]), ExtraTypeInfoTVars_53, ExtraTypeInfoVars_56, ((MR_Box) (RttiVarMaps2_60)), &conv7_RttiVarMaps_66);
  RttiVarMaps_66 = ((MR_Word) (conv7_RttiVarMaps_66));
  hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_66, STATE_VARIABLE_NewProcInfo_134_134, &STATE_VARIABLE_NewProcInfo_143_143);
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), CallArgs_40, HeadVars0_22, &VarRenaming0_67);
  mercury__map__init_1_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), &KnownVarMap0_68);
  transform_hlds__higher_order__make_specialized_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_116_101_114_109_115_95_95_91_52_93_95_48_13_p_0(ModuleInfo_11, HeadVars0_22, &ExtraHeadVars_69, &ExtraArgModes_70, HOArgs_51, STATE_VARIABLE_NewProcInfo_143_143, &STATE_VARIABLE_NewProcInfo_144_144, VarRenaming0_67, &Var_71, KnownVarMap0_68, &KnownVarMap_72, &ConstGoals_73);
  VersionInfoMap0_74 = transform_hlds__higher_order__higher_order_global_info__hogi_get_version_info_map_1_f_0(STATE_VARIABLE_GlobalInfo_0_122);
  ArgsDepth_75 = transform_hlds__higher_order__higher_order_global_info__higher_order_args_depth_1_f_0(HOArgs_51);
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
  mercury__list__length_2_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), ExtraTypeInfoVars_56, &NumTypeInfos_90);
  mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumTypeInfos_90, ((MR_Box) (InMode_89)), &ExtraTypeInfoModes_91);
  transform_hlds__higher_order__higher_order_global_info__remove_const_higher_order_args_4_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), (MR_Integer) 1, HeadVars0_22, HOArgs_51, &HeadVars1_92);
  transform_hlds__higher_order__higher_order_global_info__remove_const_higher_order_args_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Integer) 1, ArgModes0_23, HOArgs_51, &ArgModes1_93);
  {
    Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_151, 0) = ((MR_Box) (HeadVars1_92));
    MR_hl_field(1, Var_151, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_150, 0) = ((MR_Box) (ExtraHeadVars_69));
    MR_hl_field(1, Var_150, 1) = ((MR_Box) (Var_151));
  }
  {
    Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_149, 0) = ((MR_Box) (ExtraTypeInfoVars_56));
    MR_hl_field(1, Var_149, 1) = ((MR_Box) (Var_150));
  }
  mercury__list__condense_2_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), Var_149, &HeadVars_94);
  {
    Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_155, 0) = ((MR_Box) (ArgModes1_93));
    MR_hl_field(1, Var_155, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_154, 0) = ((MR_Box) (ExtraArgModes_70));
    MR_hl_field(1, Var_154, 1) = ((MR_Box) (Var_155));
  }
  {
    Var_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_153, 0) = ((MR_Box) (ExtraTypeInfoModes_91));
    MR_hl_field(1, Var_153, 1) = ((MR_Box) (Var_154));
  }
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_153, &ArgModes_95);
  hlds__hlds_pred__proc_info_set_headvars_3_p_0(HeadVars_94, STATE_VARIABLE_NewProcInfo_144_144, &STATE_VARIABLE_NewProcInfo_157_157);
  hlds__hlds_pred__proc_info_set_argmodes_3_p_0(ArgModes_95, STATE_VARIABLE_NewProcInfo_157_157, &STATE_VARIABLE_NewProcInfo_158_158);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_NewProcInfo_158_158, &Goal6_96);
  GoalInfo6_98 = ((MR_Word) ((MR_hl_field(0, Goal6_96, (MR_Integer) 1))));
  hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal6_96, &GoalList6_99);
  Var_159 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ConstGoals_73, GoalList6_99);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_159, GoalInfo6_98, &Goal_100);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_100, STATE_VARIABLE_NewProcInfo_158_158, &STATE_VARIABLE_NewProcInfo_160_160);
  hlds__hlds_pred__proc_info_reset_imported_structure_sharing_2_p_0(STATE_VARIABLE_NewProcInfo_160_160, &STATE_VARIABLE_NewProcInfo_161_161);
  hlds__hlds_pred__proc_info_reset_imported_structure_reuse_2_p_0(STATE_VARIABLE_NewProcInfo_161_161, &STATE_VARIABLE_NewProcInfo_162_162);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_NewProcInfo_162_162, &VarTable7_101);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable7_101, ExtraHeadVars_69, &ExtraHeadVarTypes0_102);
  transform_hlds__higher_order__higher_order_global_info__remove_const_higher_order_args_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Integer) 1, OriginalArgTypes_49, HOArgs_51, &ModifiedOriginalArgTypes_103);
  {
    Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_166, 0) = ((MR_Box) (ModifiedOriginalArgTypes_103));
    MR_hl_field(1, Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_165, 0) = ((MR_Box) (ExtraHeadVarTypes0_102));
    MR_hl_field(1, Var_165, 1) = ((MR_Box) (Var_166));
  }
  {
    Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_164, 0) = ((MR_Box) (ExtraTypeInfoTypes_55));
    MR_hl_field(1, Var_164, 1) = ((MR_Box) (Var_165));
  }
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_164, &ArgTypes_104);
  hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TypeVarSet_34, ExistQVars_47, ArgTypes_104, STATE_VARIABLE_NewPredInfo_0_120, &STATE_VARIABLE_NewPredInfo_168_168);
  hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_34, STATE_VARIABLE_NewPredInfo_168_168, &STATE_VARIABLE_NewPredInfo_169_169);
  if ((ExistQVars_47 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_NewProcInfo_171_171 = STATE_VARIABLE_NewProcInfo_162_162;
  else
  {
    MR_Word OriginalHeadTypes_107;
    MR_Word ExistentialSubn_108;
    MR_Word ExtraHeadVarTypes_109;
    MR_Word ExtraHeadVarsAndTypes_110;
    MR_Word VarTable8_111;
    MR_Word Var_170;
    MR_Box conv11_VarTable8_111;

    parse_tree__var_table__lookup_var_types_3_p_0(VarTable7_101, HeadVars0_22, &OriginalHeadTypes_107);
    parse_tree__prog_type_unify__type_list_subsumes_det_3_p_0(OriginalArgTypes_49, OriginalHeadTypes_107, &ExistentialSubn_108);
    parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(ExistentialSubn_108, ExtraHeadVarTypes0_102, &ExtraHeadVarTypes_109);
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ExtraHeadVars_69, ExtraHeadVarTypes_109, &ExtraHeadVarsAndTypes_110);
    {
      Var_170 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_170, 0) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_4[3]));
      MR_hl_field(0, Var_170, 1) = ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0_7));
      MR_hl_field(0, Var_170, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_170, 3) = ((MR_Box) (ModuleInfo_11));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_2[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), Var_170, ExtraHeadVarsAndTypes_110, ((MR_Box) (VarTable7_101)), &conv11_VarTable8_111);
    VarTable8_111 = ((MR_Word) (conv11_VarTable8_111));
    hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable8_111, STATE_VARIABLE_NewProcInfo_162_162, &STATE_VARIABLE_NewProcInfo_171_171);
  }
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_NewProcInfo_171_171, &ArgVars_112);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_NewProcInfo_171_171, &NewRttiVarMaps_113);
  {
    Var_172 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_172, 0) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_5[3]));
    MR_hl_field(0, Var_172, 1) = ((MR_Box) (transform_hlds__higher_order__make_specialized_preds__higher_order_create_new_proc_6_p_0_8));
    MR_hl_field(0, Var_172, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_172, 3) = ((MR_Box) (NewRttiVarMaps_113));
  }
  mercury__list__map_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0), Var_172, ArgVars_112, &ArgVarInfos_114);
  transform_hlds__higher_order__make_specialized_preds__find_class_context_4_p_0(ModuleInfo_11, ArgVarInfos_114, ArgModes_95, &ClassContext_115);
  hlds__hlds_pred__pred_info_set_class_context_3_p_0(ClassContext_115, STATE_VARIABLE_NewPredInfo_169_169, &STATE_VARIABLE_NewPredInfo_173_173);
  NewProcId_117 = ((MR_Integer) ((MR_hl_field(0, NewPredProcId_12, (MR_Integer) 1))));
  NewProcs_118 = mercury__map__singleton_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (NewProcId_117)), ((MR_Box) (STATE_VARIABLE_NewProcInfo_171_171)));
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(NewProcs_118, STATE_VARIABLE_NewPredInfo_173_173, STATE_VARIABLE_NewPredInfo_121);
}

static MR_Box MR_CALL 
transform_hlds__higher_order__make_specialized_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_116_101_114_109_115_95_95_91_52_93_95_48_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__3_3;

  conv3_HeadVar__3_3 = transform_hlds__higher_order__higher_order_global_info__mode_both_sides_to_unify_mode_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Box conv0_LVar_45;
    MR_Word ShroudedPredProcId_46;
    MR_Box conv2_RttiVarMaps_61;

    mercury__list__det_index1_3_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), HeadVars0_2, Index_38, &conv0_LVar_45);
    LVar_45 = ((MR_Word) (conv0_LVar_45));
    succeeded = ((((MR_tag((MR_Word) ConsId_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_37, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (succeeded)
    {
      ShroudedPredProcId_46 = ((MR_Word) ((MR_hl_field(3, ConsId_37, (MR_Integer) 1))));
      {
        MR_Word PredId_48;
        MR_Integer ProcId_49;
        MR_Word CalledPredInfo_50;
        MR_Word CalledProcInfo_51;
        MR_Word PredOrFunc_52;
        MR_Word CalledArgModes_53;
        MR_Word NonCurriedArgModes_55;
        MR_Word ProcDetism_56;
        MR_Word Var_86;
        MR_Word Var_87;

        Var_86 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_46);
        PredId_48 = ((MR_Word) ((MR_hl_field(0, Var_86, (MR_Integer) 0))));
        ProcId_49 = ((MR_Integer) ((MR_hl_field(0, Var_86, (MR_Integer) 1))));
        hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_1, PredId_48, ProcId_49, &CalledPredInfo_50, &CalledProcInfo_51);
        PredOrFunc_52 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(CalledPredInfo_50);
        hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CalledProcInfo_51, &CalledArgModes_53);
        mercury__list__det_split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumArgs_39, CalledArgModes_53, &CurriedArgModes1_54, &NonCurriedArgModes_55);
        hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(CalledProcInfo_51, &ProcDetism_56);
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
    mercury__list__foldl_corresponding_5_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_2[1]), CurriedHeadVars1_59, CurriedArgRttiInfo_42, ((MR_Box) (RttiVarMaps0_60)), &conv2_RttiVarMaps_61);
    RttiVarMaps_61 = ((MR_Word) (conv2_RttiVarMaps_61));
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_61, STATE_VARIABLE_ProcInfo_89_89, &STATE_VARIABLE_ProcInfo_91_91);
    mercury__map__set_from_corresponding_lists_4_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), CurriedArgs_40, CurriedHeadVars1_59, STATE_VARIABLE_Renaming_0_9, &STATE_VARIABLE_Renaming_94_94);
    switch (IsConst_44) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word CurriedConstGoals_64;
          MR_Word ArgModes_68;
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
          ArgModes_68 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), Var_101, CurriedArgModes1_54);
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
            MR_hl_field(0, Var_112, 3) = ((MR_Box) (ArgModes_68));
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
            MR_hl_field(1, ConstGoalExpr_75, 4) = ((MR_Box) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[5]));
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
          MR_Word STATE_VARIABLE_KnownVarMap_93_144;

          {
            Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_92, 0) = ((MR_Box) (ConsId_37));
            MR_hl_field(0, Var_92, 1) = ((MR_Box) (CurriedHeadVars1_59));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), ((MR_Box) (LVar_45)), ((MR_Box) (Var_92)), STATE_VARIABLE_KnownVarMap_0_11, &STATE_VARIABLE_KnownVarMap_93_144);
          transform_hlds__higher_order__make_specialized_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_116_101_114_109_115_95_95_91_52_93_95_48_13_p_0(ModuleInfo_1, CurriedHeadVars1_59, &ExtraCurriedHeadVars_62, &ExtraCurriedArgModes_63, CurriedHOArgs_43, STATE_VARIABLE_ProcInfo_91_91, &STATE_VARIABLE_ProcInfo_95_95, STATE_VARIABLE_Renaming_94_94, &STATE_VARIABLE_Renaming_96_96, STATE_VARIABLE_KnownVarMap_93_144, &STATE_VARIABLE_KnownVarMap_97_97, &ConstGoals0_77);
        }
        break;
    }
    transform_hlds__higher_order__make_specialized_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_116_101_114_109_115_95_95_91_52_93_95_48_13_p_0(ModuleInfo_1, HeadVars0_2, &NewHeadVars1_65, &NewArgModes1_66, HOArgs_32, STATE_VARIABLE_ProcInfo_95_95, STATE_VARIABLE_ProcInfo_8, STATE_VARIABLE_Renaming_96_96, STATE_VARIABLE_Renaming_10, STATE_VARIABLE_KnownVarMap_97_97, STATE_VARIABLE_KnownVarMap_12, &ConstGoals1_67);
    transform_hlds__higher_order__higher_order_global_info__remove_const_higher_order_args_4_p_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), (MR_Integer) 1, CurriedHeadVars1_59, CurriedHOArgs_43, &CurriedHeadVars_78);
    transform_hlds__higher_order__higher_order_global_info__remove_const_higher_order_args_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Integer) 1, CurriedArgModes1_54, CurriedHOArgs_43, &CurriedArgModes_79);
    Var_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), ExtraCurriedHeadVars_62, NewHeadVars1_65);
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[3]), CurriedHeadVars_78, Var_123);
    Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExtraCurriedArgModes_63, NewArgModes1_66);
    *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), CurriedArgModes_79, Var_124);
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
transform_hlds__higher_order__make_specialized_preds__higher_order_add_new_pred_4_p_0(
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
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), NewPredMap0_8, ((MR_Box) (CalleePPId_5)), &conv0_SpecVersions0_9);
  if (succeeded)
  {
    SpecVersions0_9 = ((MR_Word) (conv0_SpecVersions0_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word SpecVersions_10;

    mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0), ((MR_Box) (NewPred_6)), SpecVersions0_9, &SpecVersions_10);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), ((MR_Box) (CalleePPId_5)), ((MR_Box) (SpecVersions_10)), NewPredMap0_8, &NewPredMap_11);
  }
  else
  {
    MR_Word SpecVersions_15;

    SpecVersions_15 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0), ((MR_Box) (NewPred_6)));
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__make_specialized_preds_scalar_common_1[2]), ((MR_Box) (CalleePPId_5)), ((MR_Box) (SpecVersions_15)), NewPredMap0_8, &NewPredMap_11);
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
