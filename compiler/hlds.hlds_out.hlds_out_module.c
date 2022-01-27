/*
** Automatically generated from `hlds_out_module.m'
** by the Mercury compiler,
** version rotd-2021-05-30
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


// :- module hlds.hlds_out.hlds_out_module.
// :- implementation.

/*
INIT mercury__hlds__hlds_out__hlds_out_module__init
ENDINIT
*/

#include "hlds.hlds_out.hlds_out_module.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
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
#include "term_io.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_to_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_mode.mih"
#include "hlds.hlds_out.hlds_out_pred.mih"
#include "hlds.hlds_out.hlds_out_util.mih"



struct hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0_s {
  MR_bool hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded;
  MR_Word hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__DumpPredIdStrs_18;
  MR_Integer hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__PredIdInt_20;
  jmp_buf hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__commit_0;
  MR_String hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__DumpPredIdStr_38;
  MR_Integer hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__DumpPredId_39;
  MR_Box hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__conv0_DumpPredIdStr_38;
};


static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_module__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0;

static const MR_VA_PseudoTypeInfo_Struct5 hlds__hlds_out__hlds_out_module____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0;

static const MR_VA_PseudoTypeInfo_Struct5 hlds__hlds_out__hlds_out_module____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0;

static const MR_VA_PseudoTypeInfo_Struct5 hlds__hlds_out__hlds_out_module____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0;

static const MR_VA_PseudoTypeInfo_Struct5 hlds__hlds_out__hlds_out_module____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0;

static const MR_VA_PseudoTypeInfo_Struct5 hlds__hlds_out__hlds_out_module____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_VA_TypeInfo_Struct2 hlds__hlds_out__hlds_out_module____vti_tuple_2parse_tree__prog_data__type_ctor_info_type_ctor_0mdbcomp__prim_data__type_ctor_info_special_pred_id_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__tree234__pti_tree234_2__plain___vti_tuple_2parse_tree__prog_data__type_ctor_info_type_ctor_0mdbcomp__prim_data__type_ctor_info_special_pred_id_0__plain_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__1324__1_9_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer Limit_11,
  MR_Word HeadVar__4_104,
  MR_Word HeadVar__5_179,
  MR_Integer HeadVar__6_180,
  MR_Integer * HeadVar__7_181);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__1317__1_9_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer Limit_11,
  MR_Word HeadVar__4_93,
  MR_Word HeadVar__5_167,
  MR_Integer HeadVar__6_168,
  MR_Integer * HeadVar__7_169);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__1310__1_9_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer Limit_11,
  MR_Word HeadVar__4_82,
  MR_Word HeadVar__5_155,
  MR_Integer HeadVar__6_156,
  MR_Integer * HeadVar__7_157);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__1303__1_9_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer Limit_11,
  MR_Word HeadVar__4_71,
  MR_Word HeadVar__5_143,
  MR_Integer HeadVar__6_144,
  MR_Integer * HeadVar__7_145);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__1296__1_9_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer Limit_11,
  MR_Word HeadVar__4_60,
  MR_Word HeadVar__5_131,
  MR_Integer HeadVar__6_132,
  MR_Integer * HeadVar__7_133);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_9_p_0(
  MR_Word Stream_10,
  MR_Word Lang_11,
  MR_Integer Limit_12,
  MR_Word WriteKey_13,
  MR_Word HeadVar__5_5,
  MR_Integer STATE_VARIABLE_N_0_19,
  MR_Integer * STATE_VARIABLE_N_20);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__1289__1_9_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer Limit_11,
  MR_Word HeadVar__4_49,
  MR_Word HeadVar__5_118,
  MR_Integer HeadVar__6_119,
  MR_Integer * HeadVar__7_120);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_9_p_0(
  MR_Word Stream_10,
  MR_Word Lang_11,
  MR_Integer Limit_12,
  MR_Word WriteKey_13,
  MR_Word HeadVar__5_5,
  MR_Integer STATE_VARIABLE_N_0_21,
  MR_Integer * STATE_VARIABLE_N_22);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_promise__1917__1_5_p_0(
  MR_Word VarSet_18,
  MR_Word LambdaHeadVar__1_36,
  MR_Word LambdaHeadVar__2_37);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dependency_scc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dependency_scc_6_p_0(
  MR_Word Stream_7,
  MR_Integer Indent_8,
  MR_Word ModuleInfo_9,
  MR_Word SCC_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dep_graph_edge_7_p_0(
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word ModuleInfo_10,
  MR_Word _ParentProc_11,
  MR_Word ChildProc_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_95_103_114_97_112_104_95_101_100_103_101_95_95_91_52_93_95_48_7_p_0(
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word ModuleInfo_10,
  MR_Word ChildProc_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dep_graph_node_6_p_0(
  MR_Word Stream_7,
  MR_Integer Indent_8,
  MR_Word ModuleInfo_9,
  MR_Word Proc_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dependency_proc_7_p_0(
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_String Prefix_10,
  MR_Word ModuleInfo_11,
  MR_Word PredProcId_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word Lang_11,
  MR_Integer Indent_12,
  MR_Word ModuleInfo_13,
  MR_Word HeadVar__6_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__add_spec_preds_to_map_4_p_0(
  MR_Word DumpSpecPredTypeNames_5,
  MR_Word PredIdInfo_6,
  MR_Word STATE_VARIABLE_SpecPredMap_0_18,
  MR_Word * STATE_VARIABLE_SpecPredMap_19);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__compare_in_name_order_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Result_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_5_p_0(
  MR_Word Stream_1,
  MR_String Prefix_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_args_5_p_0(
  MR_Word Stream_6,
  MR_Word HeadConstArg_7,
  MR_Word TailConstArgs_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_mode_table_entry_6_p_0(
  MR_Word Stream_7,
  MR_Integer Indent_8,
  MR_Word ModeCtor_9,
  MR_Word ModeDefn_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_name_nl_5_p_0(
  MR_Word Lang_6,
  MR_Word InstName_7,
  MR_Word Stream_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_any_inst_5_p_0(
  MR_Word Lang_6,
  MR_Word AnyInstInfo_7,
  MR_Word Stream_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_ground_inst_5_p_0(
  MR_Word Lang_6,
  MR_Word GroundInstInfo_7,
  MR_Word Stream_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_merge_inst_5_p_0(
  MR_Word Lang_6,
  MR_Word MergeInstInfo_7,
  MR_Word Stream_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_unify_inst_5_p_0(
  MR_Word Lang_6,
  MR_Word UnifyInstInfo_7,
  MR_Word Stream_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_user_inst_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_params_6_p_0(
  MR_Word Stream_7,
  MR_Word InstVar_8,
  MR_Word InstVars_9,
  MR_Word InstVarSet_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word InstanceDefn_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_methods_6_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2,
  MR_Integer Indent_3,
  MR_Integer STATE_VARIABLE_CurMethodNum_0_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defns_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defns_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word HeadVar__4_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_proc_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Stream_7);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Stream_7);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word HeadVar__4_4);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_module__foreign_type_assertion_to_string_1_f_0(
  MR_Word Assertion_3);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_module__type_table_entry_is_local_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_avail_entry_6_p_0(
  MR_Word Stream_7,
  MR_Integer Indent_8,
  MR_Word ModuleName_9,
  MR_Word Entry_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_57_44_32_49_48_93_95_48_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_hlds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_7_p_0(
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word ModuleInfo_11,
  MR_Word DependencyInfo_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Word DumpSpecPreds_12,
  MR_Word DumpSpecPredTypeNames_13,
  MR_Word Lang_14,
  MR_Integer Indent_15,
  MR_Word ModuleInfo_16);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_structs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_structs_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word TableStructMap_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_db_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_db_4_p_0(
  MR_Word Stream_5,
  MR_Word ConstStructDb_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_mode_table_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_mode_table_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Word ModeTable_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer Indent_10,
  MR_Integer Limit_11,
  MR_Word InstTable_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instances_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instances_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word InstanceTable_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_classes_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_classes_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word ClassTable_10);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_table_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_table_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word LocalOnly_11,
  MR_Word TypeTable_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_table_entries_6_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_116_121_112_101_95_98_111_100_121_95_95_91_51_93_95_48_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word TypeBody_12,
  MR_Integer Indent_13,
  MR_Word TVarSet_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructor_repns_6_p_0(
  MR_Word Stream_7,
  MR_Word TVarSet_8,
  MR_Integer Indent_9,
  MR_Word CtorRepns_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructor_repns_loop_8_p_0(
  MR_Word Stream_9,
  MR_Word TVarSet_10,
  MR_Integer Indent_11,
  MR_String ArrowOrSemi0_12,
  MR_Word HeadCtorRepn_13,
  MR_Word TailCtorRepns_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_ctor_repn_6_p_0(
  MR_Word Stream_7,
  MR_Word TVarSet_8,
  MR_Integer Indent_9,
  MR_Word CtorRepn_10);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_module__du_cons_tag_to_string_1_f_0(
  MR_Word ConsTag_3);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_module__local_sectag_to_string_1_f_0(
  MR_Word LocalSectag_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_module__does_any_arg_repn_have_a_field_name_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__mercury_output_ctor_arg_repns_9_p_0(
  MR_Word Stream_10,
  MR_Word TVarSet_11,
  MR_Integer Indent_12,
  MR_Word AnyFieldName_13,
  MR_Integer CurArgNum_14,
  MR_Word HeadArgRepn_15,
  MR_Word TailArgRepns_16);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_arg_pos_width_6_p_0(
  MR_Word Stream_7,
  MR_Integer Indent_8,
  MR_Integer CurArgNum_9,
  MR_Word ArgPosWidth_10);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_module__fill_kind_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructors_7_p_0(
  MR_Word Stream_8,
  MR_Word TVarSet_9,
  MR_Integer Indent_10,
  MR_Word HeadCtor_11,
  MR_Word TailCtors_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructors_loop_8_p_0(
  MR_Word Stream_9,
  MR_Word TVarSet_10,
  MR_Integer Indent_11,
  MR_String ArrowOrSemi0_12,
  MR_Word HeadCtor_13,
  MR_Word TailCtors_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_ctor_6_p_0(
  MR_Word Stream_7,
  MR_Word TVarSet_8,
  MR_Integer Indent_9,
  MR_Word Ctor_10);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_module__does_any_arg_have_a_field_name_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__mercury_output_ctor_args_8_p_0(
  MR_Word Stream_9,
  MR_Word TVarSet_10,
  MR_Integer Indent_11,
  MR_Word AnyFieldName_12,
  MR_Word HeadArg_13,
  MR_Word TailArgs_14);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_module__foreign_type_assertions_to_simple_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_module__foreign_type_assertions_to_simple_string_1_f_0(
  MR_Word ForeignTypeAssertions_3);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_canonical_to_simple_string_1_f_0(
  MR_Word MaybeCanonical_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_module__unqual_cons_id_1_f_0(
  MR_Word ConsId_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_params_loop_6_p_0(
  MR_Word Stream_7,
  MR_Word TVarSet_8,
  MR_Word HeadParam_9,
  MR_Word TailParams_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_footer_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Word Module_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_header_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Word Module_8);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_1[5][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_2[26][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_3[2][4];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_4[2][5];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_5[2][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_7[9][9];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_8[9][8];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_9[5][12];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_10[4][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_11[1][6];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_12[1][11];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_13[2][10];


/* sealed */ struct hlds__hlds_out__hlds_out_module__vector_common_type_6_0_s {
  const MR_String hlds__hlds_out__hlds_out_module__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct hlds__hlds_out__hlds_out_module__vector_common_type_6_0_s hlds__hlds_out__hlds_out_module_vector_common_6[8];



static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_2[26][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_1[2]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[0])),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[11]))
  },
  /* row 13 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__foreign_type_assertions_to_simple_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_type_table_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_8[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_8[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_8[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_8[4])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_8[5])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_8[5])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_11[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_preds_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_10[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_class_defn_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_10[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_class_defn_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__hlds_output_fundep_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__hlds_output_fundep_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_3[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_5[2][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 1 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 1U << 1))))))))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_7[9][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_8[9][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_9[5][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_10[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__tree234__pti_tree234_2__plain___vti_tuple_2parse_tree__prog_data__type_ctor_info_type_ctor_0mdbcomp__prim_data__type_ctor_info_special_pred_id_0__plain_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__tree234__pti_tree234_2__plain___vti_tuple_2parse_tree__prog_data__type_ctor_info_type_ctor_0mdbcomp__prim_data__type_ctor_info_special_pred_id_0__plain_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_11[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_12[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_13[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct hlds__hlds_out__hlds_out_module__vector_common_type_6_0_s hlds__hlds_out__hlds_out_module_vector_common_6[8] = {
  /* row 0 */   {     (MR_String) "enum" },
  /* row 1 */   {     (MR_String) "int8" },
  /* row 2 */   {     (MR_String) "int16" },
  /* row 3 */   {     (MR_String) "int32" },
  /* row 4 */   {     (MR_String) "uint8" },
  /* row 5 */   {     (MR_String) "uint16" },
  /* row 6 */   {     (MR_String) "uint32" },
  /* row 7 */   {     (MR_String) "char21" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_module__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_module__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct5 hlds__hlds_out__hlds_out_module____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_output_stream_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct5 hlds__hlds_out__hlds_out_module____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_output_stream_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct5 hlds__hlds_out__hlds_out_module____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_output_stream_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct5 hlds__hlds_out__hlds_out_module____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_output_stream_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct5 hlds__hlds_out__hlds_out_module____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_output_stream_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_TypeInfo_Struct2 hlds__hlds_out__hlds_out_module____vti_tuple_2parse_tree__prog_data__type_ctor_info_type_ctor_0mdbcomp__prim_data__type_ctor_info_special_pred_id_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__tree234__pti_tree234_2__plain___vti_tuple_2parse_tree__prog_data__type_ctor_info_type_ctor_0mdbcomp__prim_data__type_ctor_info_special_pred_id_0__plain_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_module____vti_tuple_2parse_tree__prog_data__type_ctor_info_type_ctor_0mdbcomp__prim_data__type_ctor_info_special_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_module__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__1324__1_9_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer Limit_11,
  MR_Word HeadVar__4_104,
  MR_Word HeadVar__5_179,
  MR_Integer HeadVar__6_180,
  MR_Integer * HeadVar__7_181)
{
  hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_9_p_0(Stream_8, Lang_9, Limit_11, HeadVar__4_104, HeadVar__5_179, HeadVar__6_180, HeadVar__7_181);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__1317__1_9_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer Limit_11,
  MR_Word HeadVar__4_93,
  MR_Word HeadVar__5_167,
  MR_Integer HeadVar__6_168,
  MR_Integer * HeadVar__7_169)
{
  hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_9_p_0(Stream_8, Lang_9, Limit_11, HeadVar__4_93, HeadVar__5_167, HeadVar__6_168, HeadVar__7_169);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__1310__1_9_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer Limit_11,
  MR_Word HeadVar__4_82,
  MR_Word HeadVar__5_155,
  MR_Integer HeadVar__6_156,
  MR_Integer * HeadVar__7_157)
{
  hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_9_p_0(Stream_8, Lang_9, Limit_11, HeadVar__4_82, HeadVar__5_155, HeadVar__6_156, HeadVar__7_157);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__1303__1_9_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer Limit_11,
  MR_Word HeadVar__4_71,
  MR_Word HeadVar__5_143,
  MR_Integer HeadVar__6_144,
  MR_Integer * HeadVar__7_145)
{
  hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_9_p_0(Stream_8, Lang_9, Limit_11, HeadVar__4_71, HeadVar__5_143, HeadVar__6_144, HeadVar__7_145);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__1296__1_9_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer Limit_11,
  MR_Word HeadVar__4_60,
  MR_Word HeadVar__5_131,
  MR_Integer HeadVar__6_132,
  MR_Integer * HeadVar__7_133)
{
  hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_9_p_0(Stream_8, Lang_9, Limit_11, HeadVar__4_60, HeadVar__5_131, HeadVar__6_132, HeadVar__7_133);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_9_p_0(
  MR_Word Stream_10,
  MR_Word Lang_11,
  MR_Integer Limit_12,
  MR_Word WriteKey_13,
  MR_Word HeadVar__5_5,
  MR_Integer STATE_VARIABLE_N_0_19,
  MR_Integer * STATE_VARIABLE_N_20)
{
  {
    MR_bool succeeded;
    MR_Box Key_14 = (MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0));
    MR_Word MaybeInst_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 1))));

    *STATE_VARIABLE_N_20 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_19 + (MR_Unsigned) 1);
    succeeded = (*STATE_VARIABLE_N_20 <= Limit_12);
    if (succeeded)
    {
      MR_String Var_47;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv1_STATE_VARIABLE_IO_30_30;

      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\nEntry ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), *STATE_VARIABLE_N_20, &Var_47);
      mercury__io__write_string_4_p_0(Stream_10, Var_47);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) " key\n");
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), WriteKey_13, (MR_Integer) 1))));
      func_0(((MR_Box) (WriteKey_13)), ((MR_Box) (Lang_11)), Key_14, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_30_30);
      if ((MaybeInst_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String Var_58;

        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "Entry ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), *STATE_VARIABLE_N_20, &Var_58);
        mercury__io__write_string_4_p_0(Stream_10, Var_58);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) " value UNKNOWN\n");
      }
      else
      {
        MR_Word Inst_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInst_15, (MR_Integer) 0))));
        MR_String Var_69;
        MR_Word InstTerm_83;
        MR_Word VarSet_84;

        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "Entry ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), *STATE_VARIABLE_N_20, &Var_69);
        mercury__io__write_string_4_p_0(Stream_10, Var_69);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) " value:\n");
        InstTerm_83 = parse_tree__parse_tree_to_term__inst_to_term_2_f_0(Lang_11, Inst_18);
        mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_84);
        parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_84, (MR_Integer) 0, InstTerm_83, Stream_10);
        mercury__io__nl_3_p_0(Stream_10);
      }
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__1289__1_9_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer Limit_11,
  MR_Word HeadVar__4_49,
  MR_Word HeadVar__5_118,
  MR_Integer HeadVar__6_119,
  MR_Integer * HeadVar__7_120)
{
  hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_9_p_0(Stream_8, Lang_9, Limit_11, HeadVar__4_49, HeadVar__5_118, HeadVar__6_119, HeadVar__7_120);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_9_p_0(
  MR_Word Stream_10,
  MR_Word Lang_11,
  MR_Integer Limit_12,
  MR_Word WriteKey_13,
  MR_Word HeadVar__5_5,
  MR_Integer STATE_VARIABLE_N_0_21,
  MR_Integer * STATE_VARIABLE_N_22)
{
  {
    MR_bool succeeded;
    MR_Box Key_14 = (MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0));
    MR_Word MaybeInstDet_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 1))));

    *STATE_VARIABLE_N_22 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_21 + (MR_Unsigned) 1);
    succeeded = (*STATE_VARIABLE_N_22 <= Limit_12);
    if (succeeded)
    {
      MR_String Var_51;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv1_STATE_VARIABLE_IO_32_32;

      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\nEntry ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), *STATE_VARIABLE_N_22, &Var_51);
      mercury__io__write_string_4_p_0(Stream_10, Var_51);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) " key\n");
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), WriteKey_13, (MR_Integer) 1))));
      func_0(((MR_Box) (WriteKey_13)), ((MR_Box) (Lang_11)), Key_14, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_32_32);
      if ((MaybeInstDet_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String Var_62;

        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "Entry ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), *STATE_VARIABLE_N_22, &Var_62);
        mercury__io__write_string_4_p_0(Stream_10, Var_62);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) " value UNKNOWN\n");
      }
      else
      {
        MR_Word Inst_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInstDet_15, (MR_Integer) 0))));
        MR_Word Detism_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeInstDet_15, (MR_Integer) 1))) & (MR_Integer) 7);
        MR_String DetismStr_20;
        MR_String Var_73;
        MR_Word InstTerm_90;
        MR_Word VarSet_91;

        DetismStr_20 = parse_tree__prog_out__determinism_to_string_1_f_0(Detism_19);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "Entry ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), *STATE_VARIABLE_N_22, &Var_73);
        mercury__io__write_string_4_p_0(Stream_10, Var_73);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) " value (");
        mercury__io__write_string_4_p_0(Stream_10, DetismStr_20);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "):\n");
        InstTerm_90 = parse_tree__parse_tree_to_term__inst_to_term_2_f_0(Lang_11, Inst_18);
        mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_91);
        parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_91, (MR_Integer) 0, InstTerm_90, Stream_10);
        mercury__io__nl_3_p_0(Stream_10);
      }
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_promise__1917__1_5_p_0(
  MR_Word VarSet_18,
  MR_Word LambdaHeadVar__1_36,
  MR_Word LambdaHeadVar__2_37)
{
  mercury__term_io__write_variable_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaHeadVar__2_37, LambdaHeadVar__1_36, VarSet_18);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dependency_scc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_dependency_proc_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dependency_scc_6_p_0(
  MR_Word Stream_7,
  MR_Integer Indent_8,
  MR_Word ModuleInfo_9,
  MR_Word SCC_10)
{
  {
    MR_Word Var_17;
    MR_Box conv0_STATE_VARIABLE_IO_13;

    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_7, Indent_8);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% SCC\n");
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_13[1]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_dependency_scc_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (Indent_8));
      MR_hl_field(MR_mktag(0), Var_17, 5) = ((MR_Box) ((MR_String) "  "));
      MR_hl_field(MR_mktag(0), Var_17, 6) = ((MR_Box) (ModuleInfo_9));
    }
    mercury__set__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, SCC_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dep_graph_edge_7_p_0(
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word ModuleInfo_10,
  MR_Word _ParentProc_11,
  MR_Word ChildProc_12)
{
  hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_95_103_114_97_112_104_95_101_100_103_101_95_95_91_52_93_95_48_7_p_0(Stream_8, Indent_9, ModuleInfo_10, ChildProc_12);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_95_103_114_97_112_104_95_101_100_103_101_95_95_91_52_93_95_48_7_p_0(
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word ModuleInfo_10,
  MR_Word ChildProc_12)
{
  hlds__hlds_out__hlds_out_module__write_dependency_proc_7_p_0(Stream_8, Indent_9, (MR_String) "  to ", ModuleInfo_10, ChildProc_12);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dep_graph_node_6_p_0(
  MR_Word Stream_7,
  MR_Integer Indent_8,
  MR_Word ModuleInfo_9,
  MR_Word Proc_10)
{
  hlds__hlds_out__hlds_out_module__write_dependency_proc_7_p_0(Stream_7, Indent_8, (MR_String) "calls from ", ModuleInfo_9, Proc_10);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dependency_proc_7_p_0(
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_String Prefix_10,
  MR_Word ModuleInfo_11,
  MR_Word PredProcId_12)
{
  {
    MR_Word PredId_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_12, (MR_Integer) 0))));
    MR_Integer ProcId_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_12, (MR_Integer) 1))));
    MR_Word Pieces_16;
    MR_String Desc_17;
    MR_Integer Var_28;
    MR_Integer Var_31;
    MR_String Var_41;
    MR_String Var_51;

    Pieces_16 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_11, (MR_Integer) 1, PredProcId_12);
    Desc_17 = parse_tree__error_util__error_pieces_to_string_1_f_0(Pieces_16);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_8, Indent_9);
    Var_28 = hlds__hlds_pred__pred_id_to_int_1_f_0(PredId_14);
    Var_31 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_15);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% ");
    mercury__io__write_string_4_p_0(Stream_8, Prefix_10);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "pred ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), Var_28, &Var_41);
    mercury__io__write_string_4_p_0(Stream_8, Var_41);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) " proc ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), Var_31, &Var_51);
    mercury__io__write_string_4_p_0(Stream_8, Var_51);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
    mercury__io__write_string_4_p_0(Stream_8, Desc_17);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_1(
  void * env_ptr_arg)
{
  {
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0_s * env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_3(
  void * env_ptr_arg)
{
  {
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0_s * env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__DumpPredIdStr_38 = ((MR_String) ((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__conv0_DumpPredIdStr_38));
    hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_2(env_ptr);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_2(
  void * env_ptr_arg)
{
  {
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0_s * env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = mercury__string__to_int_2_p_0((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__DumpPredIdStr_38, &(env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__DumpPredId_39);
    if ((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded)
    {
      (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = ((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__PredIdInt_20 == (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__DumpPredId_39);
      if ((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded)
        hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_4(
  void * env_ptr_arg)
{
  {
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0_s * env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &(env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__conv0_DumpPredIdStr_38, (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__DumpPredIdStrs_18, hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_3, env_ptr);
        (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word Lang_11,
  MR_Integer Indent_12,
  MR_Word ModuleInfo_13,
  MR_Word HeadVar__6_6)
{
  {
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0_s env;

    {
      MR_Word PredId_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word PredInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__6_6, (MR_Integer) 1))));
      MR_String DumpOptions_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 0))));
      MR_Word DumpPredNames_19;
      MR_String Var_40 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1))));
      MR_Word Var_43;

      (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__DumpPredIdStrs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 2))));
      DumpPredNames_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 3))));
      Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 4))));
      hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_14, &(env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__PredIdInt_20);
      {
        MR_String Var_21;
        MR_Word Var_22;

        (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__DumpPredIdStrs_18 != (MR_Word) ((MR_Unsigned) 0U));
        if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded)
        {
          Var_21 = ((MR_String) ((MR_hl_field(MR_mktag(1), (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__DumpPredIdStrs_18, (MR_Integer) 0))));
          Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__DumpPredIdStrs_18, (MR_Integer) 1))));
        }
      }
      if (!((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded))
      {
        MR_String Var_23;
        MR_Word Var_24;

        (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = (DumpPredNames_19 != (MR_Word) ((MR_Unsigned) 0U));
        if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded)
        {
          Var_23 = ((MR_String) ((MR_hl_field(MR_mktag(1), DumpPredNames_19, (MR_Integer) 0))));
          Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DumpPredNames_19, (MR_Integer) 1))));
        }
      }
      if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded)
      {
        hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_4(&env);
        if (!((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded))
        {
          MR_String PredName_27;

          PredName_27 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_15);
          (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (PredName_27)), DumpPredNames_19);
        }
        if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded)
          hlds__hlds_out__hlds_out_pred__write_pred_9_p_0(Info_9, Stream_10, Lang_11, ModuleInfo_13, Indent_12, PredId_14, PredInfo_15);
        else
        {
        }
      }
      else
      {
        (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = mercury__string__contains_char_2_p_0(DumpOptions_17, (MR_Char) 73);
        (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = !((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded);
        if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded)
          (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_15);
        if (!((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded))
        {
          {
            MR_Word ProcIds_28;
            MR_Integer ProcId_29;
            MR_Word Var_35;
            MR_Integer Var_54;

            (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = mercury__string__contains_char_2_p_0(DumpOptions_17, (MR_Char) 73);
            (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = !((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded);
            if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded)
            {
              (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(PredInfo_15);
              if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded)
              {
                ProcIds_28 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_15);
                hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&ProcId_29);
                (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = (ProcIds_28 != (MR_Word) ((MR_Unsigned) 0U));
                if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded)
                {
                  Var_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProcIds_28, (MR_Integer) 0))));
                  Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcIds_28, (MR_Integer) 1))));
                  (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = (ProcId_29 == Var_54);
                  if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded)
                    (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
          if (!((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded))
          {
            (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = mercury__string__contains_char_2_p_0(DumpOptions_17, (MR_Char) 85);
            (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = !((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded);
            if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded)
              (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_15);
          }
        }
        if (!((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded))
          hlds__hlds_out__hlds_out_pred__write_pred_9_p_0(Info_9, Stream_10, Lang_11, ModuleInfo_13, Indent_12, PredId_14, PredInfo_15);
      }
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__add_spec_preds_to_map_4_p_0(
  MR_Word DumpSpecPredTypeNames_5,
  MR_Word PredIdInfo_6,
  MR_Word STATE_VARIABLE_SpecPredMap_0_18,
  MR_Word * STATE_VARIABLE_SpecPredMap_19)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredIdInfo_6, (MR_Integer) 1))));
    MR_Word Origin_10;
    MR_Word SpecialPredId_11;
    MR_Word TypeCtor_12;

    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_9, &Origin_10);
    succeeded = ((MR_tag((MR_Word) Origin_10)) == (MR_Integer) 1);
    if (succeeded)
    {
      SpecialPredId_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Origin_10, (MR_Integer) 0))) & (MR_Integer) 3);
      TypeCtor_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Origin_10, (MR_Integer) 1))));
      if ((DumpSpecPredTypeNames_5 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Tuple Var_22;

        {
          Var_22 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (TypeCtor_12));
          MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (SpecialPredId_11));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_3[0]), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[11]), ((MR_Box) (Var_22)), ((MR_Box) (PredIdInfo_6)), STATE_VARIABLE_SpecPredMap_0_18, STATE_VARIABLE_SpecPredMap_19);
      }
      else
      {
        MR_Word TypeCtorSymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_12, (MR_Integer) 0))));
        MR_String TypeCtorName_17;

        TypeCtorName_17 = mdbcomp__sym_name__unqualify_name_1_f_0(TypeCtorSymName_15);
        succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (TypeCtorName_17)), DumpSpecPredTypeNames_5);
        if (succeeded)
        {
          MR_Tuple Var_20;

          {
            Var_20 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (TypeCtor_12));
            MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (SpecialPredId_11));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_3[0]), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[11]), ((MR_Box) (Var_20)), ((MR_Box) (PredIdInfo_6)), STATE_VARIABLE_SpecPredMap_0_18, STATE_VARIABLE_SpecPredMap_19);
        }
        else
          *STATE_VARIABLE_SpecPredMap_19 = STATE_VARIABLE_SpecPredMap_0_18;
      }
    }
    else
      *STATE_VARIABLE_SpecPredMap_19 = STATE_VARIABLE_SpecPredMap_0_18;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__compare_in_name_order_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Result_8)
{
  {
    MR_Word PredIdA_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word PredInfoA_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word PredIdB_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word PredInfoB_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_String PredNameA_9;
    MR_String PredNameB_10;
    MR_Word NameResult_11;

    hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfoA_5, &PredNameA_9);
    hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfoB_7, &PredNameB_10);
    mercury__private_builtin__builtin_compare_string_3_p_0(&NameResult_11, PredNameA_9, PredNameB_10);
    switch (NameResult_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *Result_8 = NameResult_11;
        break;
      case (MR_Integer) 0:
        hlds__hlds_pred____Compare____pred_id_0_0(Result_8, PredIdA_4, PredIdB_6);
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word PredProcId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word TableStructInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_String PredProcIdStr_11;
    MR_Word ProcTableStructInfo_12;
    MR_Word Attributes_13;
    MR_Word TVarSet_15;
    MR_Integer NumInputs_17;
    MR_Integer NumOutputs_18;
    MR_Word InputSteps_19;
    MR_Word MaybeOutputSteps_20;
    MR_Word ArgInfos_21;
    MR_Word Strictness_24;
    MR_Word SizeLimit_25;
    MR_Word Stats_26;
    MR_Word AllowReset_27;
    MR_Word BackendWarning_28;
    MR_Word Var_48;
    MR_String Var_107;
    MR_String Var_117;
    MR_Box conv0_STATE_VARIABLE_IO_49_49;

    PredProcIdStr_11 = hlds__hlds_out__hlds_out_util__pred_proc_id_to_string_2_f_0(ModuleInfo_7, PredProcId_8);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n% table struct info for ");
    mercury__io__write_string_4_p_0(Stream_6, PredProcIdStr_11);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
    ProcTableStructInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableStructInfo_9, (MR_Integer) 0))));
    Attributes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableStructInfo_9, (MR_Integer) 1))));
    TVarSet_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcTableStructInfo_12, (MR_Integer) 1))));
    NumInputs_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcTableStructInfo_12, (MR_Integer) 3))));
    NumOutputs_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcTableStructInfo_12, (MR_Integer) 4))));
    InputSteps_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcTableStructInfo_12, (MR_Integer) 5))));
    MaybeOutputSteps_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcTableStructInfo_12, (MR_Integer) 6))));
    ArgInfos_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcTableStructInfo_12, (MR_Integer) 7))));
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% #inputs: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), NumInputs_17, &Var_107);
    mercury__io__write_string_4_p_0(Stream_6, Var_107);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", #outputs: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), NumOutputs_18, &Var_117);
    mercury__io__write_string_4_p_0(Stream_6, Var_117);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% input steps:");
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_8[8]));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_table_struct_info_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (Stream_6));
      MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (TVarSet_15));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, InputSteps_19, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_49_49);
    mercury__io__nl_3_p_0(Stream_6);
    if ((MaybeOutputSteps_20 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% no output steps");
    else
    {
      MR_Word OutputSteps_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOutputSteps_20, (MR_Integer) 0))));
      MR_Box conv1_STATE_VARIABLE_IO_56_56;

      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% output steps:");
      mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, OutputSteps_23, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_56_56);
      mercury__io__nl_3_p_0(Stream_6);
    }
    hlds__hlds_out__hlds_out_pred__write_table_arg_infos_5_p_0(Stream_6, TVarSet_15, ArgInfos_21);
    Strictness_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attributes_13, (MR_Integer) 0))));
    SizeLimit_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attributes_13, (MR_Integer) 1))));
    Stats_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_13, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
    AllowReset_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_13, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
    BackendWarning_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_13, (MR_Integer) 2))) & (MR_Integer) 1);
    switch (MR_tag((MR_Word) Strictness_24)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Strictness_24)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% all strict\n");
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% all fast_loose\n");
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgMethods_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Strictness_24, (MR_Integer) 0))));
          MR_Word HiddenArgMethod_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Strictness_24, (MR_Integer) 1))) & (MR_Integer) 1);

          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% specified [");
          hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_5_p_0(Stream_6, (MR_String) "", ArgMethods_29);
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "]");
          switch (HiddenArgMethod_30) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", hidden args by addr\n");
              break;
            case (MR_Integer) 0:
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", hidden args by value\n");
              break;
          }
        }
        break;
    }
    if ((SizeLimit_25 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% no size limit\n");
    else
    {
      MR_Integer Limit_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), SizeLimit_25, (MR_Integer) 0))));
      MR_String Var_128;

      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% size limit ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), Limit_31, &Var_128);
      mercury__io__write_string_4_p_0(Stream_6, Var_128);
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
    }
    switch (Stats_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% do not gather statistics\n");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% gather statistics\n");
        break;
    }
    switch (AllowReset_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% allow reset\n");
        break;
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% do not allow reset\n");
        break;
    }
    switch (BackendWarning_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% ignore only with warning\n");
        break;
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% may ignore without warning\n");
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_5_p_0(
  MR_Word Stream_1,
  MR_String Prefix_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word MaybeMethod_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word MaybeMethods_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__3_3;

      mercury__io__write_string_4_p_0(Stream_1, Prefix_2);
      if ((MaybeMethod_13 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) "output");
      else
      {
        MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMethod_13, (MR_Integer) 0))));

        switch (Var_32) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "addr");
            break;
          case (MR_Integer) 2:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "promise_implied");
            break;
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "value");
            break;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = MaybeMethods_14;
      Prefix_2 = (MR_String) ", ";
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2)
{
  {
    MR_Integer N_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ConstStruct_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ConsId_9;
    MR_Word ConstArgs_10;
    MR_Word Type_11;
    MR_Word Inst_12;
    MR_Word DefinedWhere_13;
    MR_Word Var_34;
    MR_Word Var_43;
    MR_String Var_54;

    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\nconst_struct ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), N_6, &Var_54);
    mercury__io__write_string_4_p_0(Stream_5, Var_54);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ":\n");
    ConsId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_7, (MR_Integer) 0))));
    ConstArgs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_7, (MR_Integer) 1))));
    Type_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_7, (MR_Integer) 2))));
    Inst_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_7, (MR_Integer) 3))));
    DefinedWhere_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ConstStruct_7, (MR_Integer) 4))) & (MR_Integer) 1);
    parse_tree__mercury_to_mercury__mercury_output_cons_id_6_p_0((MR_Integer) 1, (MR_Integer) 1, ConsId_9, Stream_5);
    if ((ConstArgs_10 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__nl_3_p_0(Stream_5);
    else
    {
      MR_Word HeadConstArg_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConstArgs_10, (MR_Integer) 0))));
      MR_Word TailConstArgs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConstArgs_10, (MR_Integer) 1))));

      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "(\n");
      hlds__hlds_out__hlds_out_module__write_const_struct_args_5_p_0(Stream_5, HeadConstArg_14, TailConstArgs_15);
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")\n");
    }
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "type: ");
    Var_34 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
    parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(Var_34, (MR_Integer) 0, Type_11, Stream_5);
    mercury__io__nl_3_p_0(Stream_5);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "inst: ");
    Var_43 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
    hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_8_p_0(Stream_5, Inst_12, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, Var_43);
    switch (DefinedWhere_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) "defined_in_other_module\n");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) "defined_in_this_module\n");
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_args_5_p_0(
  MR_Word Stream_6,
  MR_Word HeadConstArg_7,
  MR_Word TailConstArgs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "    ");
    if (((MR_tag((MR_Word) HeadConstArg_7)) == (MR_Integer) 0))
    {
      MR_Integer N_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadConstArg_7, (MR_Integer) 0))));
      MR_String Var_41;

      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "cs(");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), N_10, &Var_41);
      mercury__io__write_string_4_p_0(Stream_6, Var_41);
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
    }
    else
    {
      MR_Word ConsId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadConstArg_7, (MR_Integer) 0))));
      MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadConstArg_7, (MR_Integer) 1))));
      MR_Word Var_24;

      parse_tree__mercury_to_mercury__mercury_output_cons_id_6_p_0((MR_Integer) 1, (MR_Integer) 1, ConsId_11, Stream_6);
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n        with type ");
      Var_24 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
      parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(Var_24, (MR_Integer) 0, Type_12, Stream_6);
    }
    if ((TailConstArgs_8 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
    else
    {
      MR_Word HeadTailConstArg_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailConstArgs_8, (MR_Integer) 0))));
      MR_Word TailTailConstArgs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailConstArgs_8, (MR_Integer) 1))));
      MR_Word next_value_of_HeadConstArg_7;
      MR_Word next_value_of_TailConstArgs_8;

      mercury__io__write_string_4_p_0(Stream_6, (MR_String) ",\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadConstArg_7 = HeadTailConstArg_13;
      next_value_of_TailConstArgs_8 = TailTailConstArgs_14;
      HeadConstArg_7 = next_value_of_HeadConstArg_7;
      TailConstArgs_8 = next_value_of_TailConstArgs_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_mode_table_entry_6_p_0(
  MR_Word Stream_7,
  MR_Integer Indent_8,
  MR_Word ModeCtor_9,
  MR_Word ModeDefn_10)
{
  {
    MR_Word ModeName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeCtor_9, (MR_Integer) 0))));
    MR_Word InstVarSet_14;
    MR_Word InstParams_15;
    MR_Word ModeBody_16;
    MR_Word Status_18;
    MR_Word EqvMode_21;
    MR_String StatusStr_22;
    MR_String Var_30;

    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_7, Indent_8);
    Var_30 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModeName_12);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n:- mode ");
    mercury__io__write_string_4_p_0(Stream_7, Var_30);
    InstVarSet_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_10, (MR_Integer) 0))));
    InstParams_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_10, (MR_Integer) 1))));
    ModeBody_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_10, (MR_Integer) 2))));
    Status_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_10, (MR_Integer) 4))));
    if (!((InstParams_15 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadInstParam_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstParams_15, (MR_Integer) 0))));
      MR_Word TailInstParams_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstParams_15, (MR_Integer) 1))));

      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
      hlds__hlds_out__hlds_out_module__write_inst_params_6_p_0(Stream_7, HeadInstParam_19, TailInstParams_20, InstVarSet_14);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
    }
    EqvMode_21 = (MR_Word) (ModeBody_16);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":\n");
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_7, Indent_8);
    parse_tree__parse_tree_out_inst__mercury_output_mode_6_p_0(Stream_7, (MR_Integer) 1, InstVarSet_14, EqvMode_21);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_7, Indent_8);
    StatusStr_22 = hlds__hlds_out__hlds_out_util__mode_import_status_to_string_1_f_0(Status_18);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% status ");
    mercury__io__write_string_4_p_0(Stream_7, StatusStr_22);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_name_nl_5_p_0(
  MR_Word Lang_6,
  MR_Word InstName_7,
  MR_Word Stream_8)
{
  {
    MR_Word InstNameTerm_10;
    MR_Word VarSet_11;

    InstNameTerm_10 = parse_tree__parse_tree_to_term__inst_name_to_term_2_f_0(Lang_6, InstName_7);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_11);
    parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_11, (MR_Integer) 0, InstNameTerm_10, Stream_8);
    mercury__io__nl_3_p_0(Stream_8);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_any_inst_5_p_0(
  MR_Word Lang_6,
  MR_Word AnyInstInfo_7,
  MR_Word Stream_8)
{
  {
    MR_Word InstName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AnyInstInfo_7, (MR_Integer) 0))));
    MR_Word Uniq_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AnyInstInfo_7, (MR_Integer) 1))) >> 2)) & (MR_Integer) 7);
    MR_Word Live_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AnyInstInfo_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word Real_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AnyInstInfo_7, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word InstNameTerm_49;
    MR_Word VarSet_50;

    switch (Uniq_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "clobbered");
        break;
      case (MR_Integer) 4:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mostly_clobbered");
        break;
      case (MR_Integer) 2:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mostly_unique ");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "shared ");
        break;
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "unique ");
        break;
    }
    switch (Live_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "dead ");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "live ");
        break;
    }
    switch (Real_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "fake unify\n");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "real unify\n");
        break;
    }
    InstNameTerm_49 = parse_tree__parse_tree_to_term__inst_name_to_term_2_f_0(Lang_6, InstName_10);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_50);
    parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_50, (MR_Integer) 0, InstNameTerm_49, Stream_8);
    mercury__io__nl_3_p_0(Stream_8);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_ground_inst_5_p_0(
  MR_Word Lang_6,
  MR_Word GroundInstInfo_7,
  MR_Word Stream_8)
{
  {
    MR_Word InstName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundInstInfo_7, (MR_Integer) 0))));
    MR_Word Uniq_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), GroundInstInfo_7, (MR_Integer) 1))) >> 2)) & (MR_Integer) 7);
    MR_Word Live_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), GroundInstInfo_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word Real_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), GroundInstInfo_7, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word InstNameTerm_49;
    MR_Word VarSet_50;

    switch (Uniq_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "clobbered");
        break;
      case (MR_Integer) 4:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mostly_clobbered");
        break;
      case (MR_Integer) 2:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mostly_unique ");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "shared ");
        break;
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "unique ");
        break;
    }
    switch (Live_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "dead ");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "live ");
        break;
    }
    switch (Real_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "fake unify\n");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "real unify\n");
        break;
    }
    InstNameTerm_49 = parse_tree__parse_tree_to_term__inst_name_to_term_2_f_0(Lang_6, InstName_10);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_50);
    parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_50, (MR_Integer) 0, InstNameTerm_49, Stream_8);
    mercury__io__nl_3_p_0(Stream_8);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_merge_inst_5_p_0(
  MR_Word Lang_6,
  MR_Word MergeInstInfo_7,
  MR_Word Stream_8)
{
  {
    MR_Word InstA_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MergeInstInfo_7, (MR_Integer) 0))));
    MR_Word InstB_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MergeInstInfo_7, (MR_Integer) 1))));
    MR_Word InstTerm_28;
    MR_Word VarSet_29;
    MR_Word InstTerm_39;
    MR_Word VarSet_40;

    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "InstA: ");
    InstTerm_28 = parse_tree__parse_tree_to_term__inst_to_term_2_f_0(Lang_6, InstA_10);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_29);
    parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_29, (MR_Integer) 0, InstTerm_28, Stream_8);
    mercury__io__nl_3_p_0(Stream_8);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "InstB: ");
    InstTerm_39 = parse_tree__parse_tree_to_term__inst_to_term_2_f_0(Lang_6, InstB_11);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_40);
    parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_40, (MR_Integer) 0, InstTerm_39, Stream_8);
    mercury__io__nl_3_p_0(Stream_8);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_unify_inst_5_p_0(
  MR_Word Lang_6,
  MR_Word UnifyInstInfo_7,
  MR_Word Stream_8)
{
  {
    MR_Word Live_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UnifyInstInfo_7, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word Real_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UnifyInstInfo_7, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word InstA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyInstInfo_7, (MR_Integer) 1))));
    MR_Word InstB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyInstInfo_7, (MR_Integer) 2))));
    MR_Word InstTerm_38;
    MR_Word VarSet_39;
    MR_Word InstTerm_49;
    MR_Word VarSet_50;

    switch (Live_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "dead ");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "live ");
        break;
    }
    switch (Real_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "fake unify\n");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "real unify\n");
        break;
    }
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "InstA: ");
    InstTerm_38 = parse_tree__parse_tree_to_term__inst_to_term_2_f_0(Lang_6, InstA_12);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_39);
    parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_39, (MR_Integer) 0, InstTerm_38, Stream_8);
    mercury__io__nl_3_p_0(Stream_8);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "InstB: ");
    InstTerm_49 = parse_tree__parse_tree_to_term__inst_to_term_2_f_0(Lang_6, InstB_13);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_50);
    parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_50, (MR_Integer) 0, InstTerm_49, Stream_8);
    mercury__io__nl_3_p_0(Stream_8);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_user_inst_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word InstCtor_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word InstDefn_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word InstName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstCtor_8, (MR_Integer) 0))));
    MR_Word InstVarSet_13;
    MR_Word InstParams_14;
    MR_Word InstBody_15;
    MR_Word Status_18;
    MR_Word EqvInst_21;
    MR_String StatusStr_22;
    MR_String Var_30;

    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_6, Indent_7);
    Var_30 = mdbcomp__sym_name__sym_name_to_string_1_f_0(InstName_11);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n:- inst ");
    mercury__io__write_string_4_p_0(Stream_6, Var_30);
    InstVarSet_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_9, (MR_Integer) 0))));
    InstParams_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_9, (MR_Integer) 1))));
    InstBody_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_9, (MR_Integer) 2))));
    Status_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_9, (MR_Integer) 5))));
    if (!((InstParams_14 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadInstParam_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstParams_14, (MR_Integer) 0))));
      MR_Word TailInstParams_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstParams_14, (MR_Integer) 1))));

      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "(");
      hlds__hlds_out__hlds_out_module__write_inst_params_6_p_0(Stream_6, HeadInstParam_19, TailInstParams_20, InstVarSet_13);
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
    }
    EqvInst_21 = (MR_Word) (InstBody_15);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":\n");
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_6, Indent_7);
    parse_tree__parse_tree_out_inst__mercury_output_inst_6_p_0(Stream_6, (MR_Integer) 1, InstVarSet_13, EqvInst_21);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_6, Indent_7);
    StatusStr_22 = hlds__hlds_out__hlds_out_util__inst_import_status_to_string_1_f_0(Status_18);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% status ");
    mercury__io__write_string_4_p_0(Stream_6, StatusStr_22);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_params_6_p_0(
  MR_Word Stream_7,
  MR_Word InstVar_8,
  MR_Word InstVars_9,
  MR_Word InstVarSet_10)
{
  while (MR_TRUE)
  {
    MR_String InstVarName_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_10, InstVar_8, &InstVarName_12);
    mercury__io__write_string_4_p_0(Stream_7, InstVarName_12);
    if (!((InstVars_9 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadInstVar_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstVars_9, (MR_Integer) 0))));
      MR_Word TailInstVars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstVars_9, (MR_Integer) 1))));
      MR_Word next_value_of_InstVar_8;
      MR_Word next_value_of_InstVars_9;

      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
      // direct tailcall eliminated
      ;
      next_value_of_InstVar_8 = HeadInstVar_13;
      next_value_of_InstVars_9 = TailInstVars_14;
      InstVar_8 = next_value_of_InstVar_8;
      InstVars_9 = next_value_of_InstVars_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_constraint_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word InstanceDefn_10)
{
  {
    MR_bool succeeded;
    MR_Word Types_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_10, (MR_Integer) 1))));
    MR_Word OriginalTypes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_10, (MR_Integer) 2))));
    MR_Word InstanceStatus_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_10, (MR_Integer) 3))));
    MR_Word Context_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_10, (MR_Integer) 4))));
    MR_Word Constraints_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_10, (MR_Integer) 5))));
    MR_Word Body_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_10, (MR_Integer) 6))));
    MR_Word MaybePredProcIds_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_10, (MR_Integer) 7))));
    MR_Word VarSet_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_10, (MR_Integer) 8))));
    MR_Word ProofMap_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_10, (MR_Integer) 9))));
    MR_String DumpOptions_22;
    MR_Word VarNamePrint_23;
    MR_Word PrintTerm_24;
    MR_String Var_49;
    MR_Word Var_55;

    mercury__io__nl_3_p_0(Stream_8);
    hlds__hlds_out__hlds_out_util__maybe_output_context_comment_6_p_0(Stream_8, Indent_9, (MR_String) "", Context_16);
    DumpOptions_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_22, (MR_Char) 118);
    if (succeeded)
      VarNamePrint_23 = (MR_Integer) 1;
    else
      VarNamePrint_23 = (MR_Integer) 0;
    {
      PrintTerm_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PrintTerm_24, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[8]));
      MR_hl_field(MR_mktag(0), PrintTerm_24, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_instance_defn_6_p_0_1));
      MR_hl_field(MR_mktag(0), PrintTerm_24, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), PrintTerm_24, 3) = ((MR_Box) (VarSet_20));
      MR_hl_field(MR_mktag(0), PrintTerm_24, 4) = ((MR_Box) (VarNamePrint_23));
    }
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_8, Indent_9);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% Types: ");
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), PrintTerm_24, (MR_String) ", ", Types_13, Stream_8);
    mercury__io__nl_3_p_0(Stream_8);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_8, Indent_9);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% Original types: ");
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), PrintTerm_24, (MR_String) ", ", OriginalTypes_14, Stream_8);
    mercury__io__nl_3_p_0(Stream_8);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_8, Indent_9);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% Status: ");
    Var_49 = hlds__hlds_out__hlds_out_util__instance_import_status_to_string_1_f_0(InstanceStatus_15);
    mercury__io__write_string_4_p_0(Stream_8, Var_49);
    mercury__io__nl_3_p_0(Stream_8);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_8, Indent_9);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% Constraints: ");
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[6]));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_instance_defn_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (VarSet_20));
      MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) (VarNamePrint_23));
    }
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_55, (MR_String) ", ", Constraints_17, Stream_8);
    mercury__io__nl_3_p_0(Stream_8);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_8, Indent_9);
    if ((Body_18 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% abstract");
    else
    {
      MR_Word Methods_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body_18, (MR_Integer) 0))));

      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% Instance methods:\n");
      hlds__hlds_out__hlds_out_module__write_instance_methods_6_p_0(Stream_8, Methods_25, Indent_9, (MR_Integer) 1);
    }
    mercury__io__nl_3_p_0(Stream_8);
    if (!((MaybePredProcIds_19 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word PredProcIds_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredProcIds_19, (MR_Integer) 0))));

      hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_8, Indent_9);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% Procedures: ");
      mercury__io__write_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_1[3]), Stream_8, ((MR_Box) (PredProcIds_26)));
      mercury__io__nl_3_p_0(Stream_8);
    }
    hlds__hlds_out__hlds_out_util__write_constraint_proof_map_7_p_0(Stream_8, Indent_9, VarNamePrint_23, VarSet_20, ProofMap_21);
    mercury__io__nl_3_p_0(Stream_8);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_methods_6_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2,
  MR_Integer Indent_3,
  MR_Integer STATE_VARIABLE_CurMethodNum_0_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Method_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Methods_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word PredOrFunc_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Method_14, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word MethodName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method_14, (MR_Integer) 1))));
      MR_Integer Arity_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Method_14, (MR_Integer) 3))));
      MR_String Var_36;
      MR_String Var_39;
      MR_String Var_52;
      MR_String Var_68;

      hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_1, Indent_3);
      Var_36 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_19);
      Var_39 = mdbcomp__sym_name__sym_name_to_string_1_f_0(MethodName_20);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "% method ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), STATE_VARIABLE_CurMethodNum_0_4, &Var_52);
      mercury__io__write_string_4_p_0(Stream_1, Var_52);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", ");
      mercury__io__write_string_4_p_0(Stream_1, Var_36);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) " ");
      mercury__io__write_string_4_p_0(Stream_1, Var_39);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "/");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), Arity_22, &Var_68);
      mercury__io__write_string_4_p_0(Stream_1, Var_68);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\n");
      parse_tree__parse_tree_out__mercury_output_instance_method_4_p_0(Method_14, Stream_1);
      if (!((Methods_15 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Integer STATE_VARIABLE_CurMethodNum_46_46;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Integer next_value_of_STATE_VARIABLE_CurMethodNum_0_4;

        mercury__io__write_string_4_p_0(Stream_1, (MR_String) ",\n");
        STATE_VARIABLE_CurMethodNum_46_46 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurMethodNum_0_4 + (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Methods_15;
        next_value_of_STATE_VARIABLE_CurMethodNum_0_4 = STATE_VARIABLE_CurMethodNum_46_46;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_CurMethodNum_0_4 = next_value_of_STATE_VARIABLE_CurMethodNum_0_4;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defns_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_instance_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defns_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word HeadVar__4_4)
{
  {
    MR_Word ClassId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word InstanceDefns_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Var_22;
    MR_Integer Var_24;
    MR_Box conv0_STATE_VARIABLE_IO_14;

    mercury__io__nl_3_p_0(Stream_8);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_8, Indent_9);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% Instances for class ");
    parse_tree__prog_out__write_class_id_4_p_0(Stream_8, ClassId_10);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ":\n");
    Var_24 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[7]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_instance_defns_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Info_7));
      MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (Stream_8));
      MR_hl_field(MR_mktag(0), Var_22, 5) = ((MR_Box) (Var_24));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_22, InstanceDefns_11, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_14);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_proc_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Stream_7)
{
  {
    MR_Word PredId_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ProcId_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer PredInt_9;
    MR_Integer ProcInt_10;
    MR_String Var_23;
    MR_String Var_33;

    hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_5, &PredInt_9);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_6, &ProcInt_10);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "proc(pred_id:");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), PredInt_9, &Var_23);
    mercury__io__write_string_4_p_0(Stream_7, Var_23);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", proc_id:");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), ProcInt_10, &Var_33);
    mercury__io__write_string_4_p_0(Stream_7, Var_33);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Stream_7)
{
  {
    MR_Word Domain_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Range_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word DomainList_9;
    MR_Word RangeList_10;
    MR_Word DomainStrs_11;
    MR_Word RangeStrs_12;
    MR_String DomainStr_13;
    MR_String RangeStr_14;

    DomainList_9 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Domain_5);
    RangeList_10 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Range_6);
    DomainStrs_11 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[24]), DomainList_9);
    RangeStrs_12 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[25]), RangeList_10);
    DomainStr_13 = mercury__string__join_list_2_f_0((MR_String) ", ", DomainStrs_11);
    RangeStr_14 = mercury__string__join_list_2_f_0((MR_String) ", ", RangeStrs_12);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
    mercury__io__write_string_4_p_0(Stream_7, DomainStr_13);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) " -> ");
    mercury__io__write_string_4_p_0(Stream_7, RangeStr_14);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_class_proc_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_constraint_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__hlds_output_fundep_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word HeadVar__4_4)
{
  {
    MR_bool succeeded;
    MR_Word ClassId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word ClassDefn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Constraints_14;
    MR_Word FunDeps_15;
    MR_Word Vars_17;
    MR_Word Interface_20;
    MR_Word VarSet_21;
    MR_Word Context_22;
    MR_String DumpOptions_24;
    MR_Word VarNamePrint_25;
    MR_Word Var_52;

    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_8, Indent_9);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% ");
    parse_tree__prog_out__write_class_id_4_p_0(Stream_8, ClassId_10);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ":\n");
    Constraints_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_11, (MR_Integer) 1))));
    FunDeps_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_11, (MR_Integer) 2))));
    Vars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_11, (MR_Integer) 4))));
    Interface_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_11, (MR_Integer) 7))));
    VarSet_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_11, (MR_Integer) 8))));
    Context_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_11, (MR_Integer) 9))));
    hlds__hlds_out__hlds_out_util__maybe_output_context_comment_6_p_0(Stream_8, Indent_9, (MR_String) "", Context_22);
    DumpOptions_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_24, (MR_Char) 118);
    if (succeeded)
      VarNamePrint_25 = (MR_Integer) 1;
    else
      VarNamePrint_25 = (MR_Integer) 0;
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_8, Indent_9);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% Vars: ");
    parse_tree__parse_tree_out_term__mercury_output_vars_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_21, VarNamePrint_25, Vars_17, Stream_8);
    mercury__io__nl_3_p_0(Stream_8);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_8, Indent_9);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% Functional dependencies: ");
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[22]), (MR_String) ", ", FunDeps_15, Stream_8);
    mercury__io__nl_3_p_0(Stream_8);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_8, Indent_9);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% Constraints: ");
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[6]));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_class_defn_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (VarSet_21));
      MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (VarNamePrint_25));
    }
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_52, (MR_String) ", ", Constraints_14, Stream_8);
    mercury__io__nl_3_p_0(Stream_8);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_8, Indent_9);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% Class Methods: ");
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[23]), (MR_String) ", ", Interface_20, Stream_8);
    mercury__io__nl_3_p_0(Stream_8);
    mercury__io__nl_3_p_0(Stream_8);
  }
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_module__foreign_type_assertion_to_string_1_f_0(
  MR_Word Assertion_3)
{
  {
    MR_String String_4;

    switch (Assertion_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        String_4 = (MR_String) "pass_as_mercury";
        break;
      case (MR_Integer) 1:
        String_4 = (MR_String) "stable";
        break;
      case (MR_Integer) 2:
        String_4 = (MR_String) "word_aligned_ptr";
        break;
    }
    return String_4;
  }
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_module__type_table_entry_is_local_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word TypeDefn_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TypeStatus_4;
    MR_Word Var_5;

    hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_3, &TypeStatus_4);
    Var_5 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_4);
    succeeded = (Var_5 == (MR_Integer) 1);
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_avail_entry_6_p_0(
  MR_Word Stream_7,
  MR_Integer Indent_8,
  MR_Word ModuleName_9,
  MR_Word Entry_10)
{
  {
    MR_Word Section_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Entry_10, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ImportOrUse_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Entry_10, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word Avails_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_10, (MR_Integer) 1))));
    MR_String ImportOrUseDecl_15;
    MR_String Var_25;

    switch (ImportOrUse_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ImportOrUseDecl_15 = (MR_String) "import_module";
        break;
      case (MR_Integer) 1:
        ImportOrUseDecl_15 = (MR_String) "use_module";
        break;
    }
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_7, Indent_8);
    Var_25 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(ModuleName_9);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- ");
    mercury__io__write_string_4_p_0(Stream_7, ImportOrUseDecl_15);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_7, Var_25);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_7, Indent_8);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% ");
    mercury__io__write_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), Stream_7, ((MR_Box) (Section_12)));
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
    mercury__io__write_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_1[1]), Stream_7, ((MR_Box) (Avails_14)));
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_module__write_promise_14_p_0(
  MR_Word Info_15,
  MR_Word Stream_16,
  MR_Word ModuleInfo_17,
  MR_Word VarSet_18,
  MR_Word TypeQual_19,
  MR_Word VarNamePrint_20,
  MR_Integer Indent_21,
  MR_Word PromiseType_22,
  MR_Word _PredId_23,
  MR_Word _PredOrFunc_24,
  MR_Word HeadVars_25,
  MR_Word Clause_26)
{
  hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_57_44_32_49_48_93_95_48_14_p_0(Info_15, Stream_16, ModuleInfo_17, VarSet_18, TypeQual_19, VarNamePrint_20, Indent_21, PromiseType_22, HeadVars_25, Clause_26);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_57_44_32_49_48_93_95_48_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_promise__1917__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_57_44_32_49_48_93_95_48_14_p_0(
  MR_Word Info_15,
  MR_Word Stream_16,
  MR_Word ModuleInfo_17,
  MR_Word VarSet_18,
  MR_Word TypeQual_19,
  MR_Word VarNamePrint_20,
  MR_Integer Indent_21,
  MR_Word PromiseType_22,
  MR_Word HeadVars_25,
  MR_Word Clause_26)
{
  {
    MR_Word PrintVar_28;
    MR_Word Goal_33;
    MR_Integer Var_59;

    {
      PrintVar_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PrintVar_28, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_8[7]));
      MR_hl_field(MR_mktag(0), PrintVar_28, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_57_44_32_49_48_93_95_48_14_p_0_1));
      MR_hl_field(MR_mktag(0), PrintVar_28, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), PrintVar_28, 3) = ((MR_Box) (VarSet_18));
    }
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_16, Indent_21);
    switch (PromiseType_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_String Var_48;

          mercury__io__write_string_4_p_0(Stream_16, (MR_String) ":- all [");
          parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_1[0]), PrintVar_28, (MR_String) ", ", HeadVars_25, Stream_16);
          mercury__io__write_string_4_p_0(Stream_16, (MR_String) "]");
          parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_21, Stream_16);
          Var_48 = parse_tree__prog_out__promise_to_string_1_f_0(PromiseType_22);
          mercury__io__write_string_4_p_0(Stream_16, Var_48);
          parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_21, Stream_16);
          mercury__io__write_string_4_p_0(Stream_16, (MR_String) "(\n");
        }
        break;
      case (MR_Integer) 3:
        {
          mercury__io__write_string_4_p_0(Stream_16, (MR_String) ":- promise all [");
          parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_1[0]), PrintVar_28, (MR_String) ", ", HeadVars_25, Stream_16);
          mercury__io__write_string_4_p_0(Stream_16, (MR_String) "] (\n");
        }
        break;
    }
    Goal_33 = hlds__hlds_clauses__clause_body_1_f_0(Clause_26);
    Var_59 = (MR_Integer) ((MR_Unsigned) Indent_21 + (MR_Unsigned) 1);
    hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_15, Stream_16, ModuleInfo_17, VarSet_18, TypeQual_19, VarNamePrint_20, Var_59, (MR_String) ").\n", Goal_33);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_hlds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_avail_entry_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_module__write_hlds_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Word ModuleInfo_8)
{
  {
    MR_bool succeeded;
    MR_Word Globals_10;
    MR_Word DumpPredIdStrs_11;
    MR_Word DumpPredNames_12;
    MR_Word DumpSpecPreds0_13;
    MR_Word DumpSpecPredTypeNames_14;
    MR_Word Info_15;
    MR_String DumpOptions0_17;
    MR_Word DumpSpecPreds_18;
    MR_String DumpOptions_21;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_10);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 178, &DumpPredIdStrs_11);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 179, &DumpPredNames_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 181, &DumpSpecPreds0_13);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 182, &DumpSpecPredTypeNames_14);
    hlds__hlds_out__hlds_out_module__write_header_5_p_0(Stream_6, Indent_7, ModuleInfo_8);
    Info_15 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_10, (MR_Integer) 1);
    DumpOptions0_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_15, (MR_Integer) 0))));
    if ((DumpSpecPredTypeNames_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      DumpSpecPreds_18 = DumpSpecPreds0_13;
      switch (DumpSpecPreds_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          DumpOptions_21 = DumpOptions0_17;
          break;
        case (MR_Integer) 1:
          DumpOptions_21 = mercury__string__f_43_43_2_f_0(DumpOptions0_17, (MR_String) "U");
          break;
      }
    }
    else
    {
      DumpSpecPreds_18 = (MR_Integer) 1;
      DumpOptions_21 = mercury__string__f_43_43_2_f_0(DumpOptions0_17, (MR_String) "U");
    }
    succeeded = (DumpPredIdStrs_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
    if (!(succeeded))
    {
      succeeded = (DumpPredNames_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
        succeeded = (DumpSpecPreds_18 == (MR_Integer) 1);
    }
    if (!(succeeded))
    {
      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_21, (MR_Char) 73);
      if (succeeded)
      {
        MR_Word AvailModuleMap_26;
        MR_Word Var_48;
        MR_Box conv0_STATE_VARIABLE_IO_49_49;

        hlds__hlds_module__module_info_get_avail_module_map_2_p_0(ModuleInfo_8, &AvailModuleMap_26);
        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[5]));
          MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_hlds_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (Stream_6));
          MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (Indent_7));
        }
        mercury__map__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, AvailModuleMap_26, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_49_49);
      }
      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_21, (MR_Char) 84);
      if (succeeded)
      {
        MR_Word LocalOnly_27;
        MR_Word TypeTable_28;
        MR_Word InstanceTable_29;
        MR_Word ClassTable_30;

        succeeded = mercury__string__contains_char_2_p_0(DumpOptions_21, (MR_Char) 76);
        if (succeeded)
          LocalOnly_27 = (MR_Integer) 1;
        else
          LocalOnly_27 = (MR_Integer) 0;
        hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_8, &TypeTable_28);
        hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_8, &InstanceTable_29);
        hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_8, &ClassTable_30);
        hlds__hlds_out__hlds_out_module__write_type_table_7_p_0(Info_15, Stream_6, Indent_7, LocalOnly_27, TypeTable_28);
        hlds__hlds_out__hlds_out_module__write_classes_6_p_0(Info_15, Stream_6, Indent_7, ClassTable_30);
        hlds__hlds_out__hlds_out_module__write_instances_6_p_0(Info_15, Stream_6, Indent_7, InstanceTable_29);
      }
      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_21, (MR_Char) 77);
      if (succeeded)
      {
        MR_Word InstTable_31;
        MR_Word ModeTable_32;
        MR_Integer InstLimit_33;

        hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_8, &InstTable_31);
        hlds__hlds_module__module_info_get_mode_table_2_p_0(ModuleInfo_8, &ModeTable_32);
        libs__globals__lookup_int_option_3_p_0(Globals_10, (MR_Integer) 185, &InstLimit_33);
        hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0(Stream_6, (MR_Integer) 1, Indent_7, InstLimit_33, InstTable_31);
        hlds__hlds_out__hlds_out_module__write_mode_table_5_p_0(Stream_6, Indent_7, ModeTable_32);
      }
      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_21, (MR_Char) 90);
      if (succeeded)
      {
        MR_Word TableStructMap_34;

        hlds__hlds_module__module_info_get_table_struct_map_2_p_0(ModuleInfo_8, &TableStructMap_34);
        hlds__hlds_out__hlds_out_module__write_table_structs_5_p_0(Stream_6, ModuleInfo_8, TableStructMap_34);
      }
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_21, (MR_Char) 88);
    if (succeeded)
    {
      MR_Word ConstStructDb_35;

      hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_8, &ConstStructDb_35);
      hlds__hlds_out__hlds_out_module__write_const_struct_db_4_p_0(Stream_6, ConstStructDb_35);
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_21, (MR_Char) 120);
    if (!(succeeded))
      succeeded = (DumpSpecPreds_18 == (MR_Integer) 1);
    if (succeeded)
      hlds__hlds_out__hlds_out_module__write_preds_9_p_0(Info_15, Stream_6, DumpSpecPreds_18, DumpSpecPredTypeNames_14, (MR_Integer) 1, Indent_7, ModuleInfo_8);
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_21, (MR_Char) 79);
    if (succeeded)
    {
      MR_Word MaybeDependencyInfo_36;

      hlds__hlds_module__module_info_get_maybe_dependency_info_2_p_0(ModuleInfo_8, &MaybeDependencyInfo_36);
      if ((MaybeDependencyInfo_36 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_6, Indent_7);
        mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% No dependency info\n\n");
      }
      else
      {
        MR_Word DependencyInfo_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDependencyInfo_36, (MR_Integer) 0))));

        hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_7_p_0(Stream_6, Indent_7, ModuleInfo_8, DependencyInfo_37);
      }
    }
    hlds__hlds_out__hlds_out_module__write_footer_5_p_0(Stream_6, Indent_7, ModuleInfo_8);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_dependency_scc_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_dep_graph_edge_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_dep_graph_node_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_7_p_0(
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word ModuleInfo_11,
  MR_Word DependencyInfo_12)
{
  {
    MR_Word Graph_14;
    MR_Word Ordering_15;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_27;
    MR_Box conv0_STATE_VARIABLE_IO_23_23;
    MR_Box conv1_STATE_VARIABLE_IO_17;

    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_9, Indent_10);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% Dependency graph\n\n");
    Graph_14 = libs__dependency_graph__dependency_info_get_graph_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DependencyInfo_12);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[3]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Stream_9));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (Indent_10));
      MR_hl_field(MR_mktag(0), Var_21, 5) = ((MR_Box) (ModuleInfo_11));
    }
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_13[0]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_7_p_0_2));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Stream_9));
      MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (Indent_10));
      MR_hl_field(MR_mktag(0), Var_22, 5) = ((MR_Box) (ModuleInfo_11));
    }
    mercury__digraph__traverse_5_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Graph_14, Var_21, Var_22, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_23_23);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_9, Indent_10);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n% Bottom up dependency sccs\n\n");
    Ordering_15 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DependencyInfo_12);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[4]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_7_p_0_3));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (Stream_9));
      MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) (Indent_10));
      MR_hl_field(MR_mktag(0), Var_27, 5) = ((MR_Box) (ModuleInfo_11));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_1[4]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_27, Ordering_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_17);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_SpecPredMap_19;

    hlds__hlds_out__hlds_out_module__add_spec_preds_to_map_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_SpecPredMap_19);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_SpecPredMap_19));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Result_8;

    hlds__hlds_out__hlds_out_module__compare_in_name_order_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_Result_8));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Word DumpSpecPreds_12,
  MR_Word DumpSpecPredTypeNames_13,
  MR_Word Lang_14,
  MR_Integer Indent_15,
  MR_Word ModuleInfo_16)
{
  {
    MR_Word PredTable_18;
    MR_Word PredIdsInfos_19;
    MR_Word PrintPredIdsInfos_22;
    MR_Word Var_33;
    MR_Box conv3_STATE_VARIABLE_IO_26;

    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "%-------- Predicates --------\n\n");
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_11, Indent_15);
    hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo_16, &PredTable_18);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_18, &PredIdsInfos_19);
    switch (DumpSpecPreds_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Globals_20;
          MR_Word NameOrder_21;

          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_16, &Globals_20);
          libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 180, &NameOrder_21);
          switch (NameOrder_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              PrintPredIdsInfos_22 = PredIdsInfos_19;
              break;
            case (MR_Integer) 1:
              mercury__list__sort_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[11]), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[21]), PredIdsInfos_19, &PrintPredIdsInfos_22);
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SpecPredMap0_23;
          MR_Word SpecPredMap_24;
          MR_Word Var_30;
          MR_Box conv2_SpecPredMap_24;

          mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_3[0]), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[11]), &SpecPredMap0_23);
          {
            Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_10[1]));
            MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_preds_9_p_0_2));
            MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (DumpSpecPredTypeNames_13));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[11]), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[12]), Var_30, PredIdsInfos_19, ((MR_Box) (SpecPredMap0_23)), &conv2_SpecPredMap_24);
          SpecPredMap_24 = ((MR_Word) (conv2_SpecPredMap_24));
          mercury__map__values_2_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_3[0]), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[11]), SpecPredMap_24, &PrintPredIdsInfos_22);
        }
        break;
    }
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_12[0]));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_preds_9_p_0_3));
      MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (Info_10));
      MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) (Stream_11));
      MR_hl_field(MR_mktag(0), Var_33, 5) = ((MR_Box) (Lang_14));
      MR_hl_field(MR_mktag(0), Var_33, 6) = ((MR_Box) (Indent_15));
      MR_hl_field(MR_mktag(0), Var_33, 7) = ((MR_Box) (ModuleInfo_16));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[11]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_33, PrintPredIdsInfos_22, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_26);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_structs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_table_struct_info_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_structs_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word TableStructMap_8)
{
  {
    MR_Word TableStructs_10;
    MR_Word Var_15;
    MR_Box conv0_STATE_VARIABLE_IO_16_16;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0), TableStructMap_8, &TableStructs_10);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "%-------- Table structs --------\n");
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_8[6]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_table_structs_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Stream_6));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (ModuleInfo_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[10]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_15, TableStructs_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_16_16);
    mercury__io__nl_3_p_0(Stream_6);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_db_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_const_struct_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_db_4_p_0(
  MR_Word Stream_5,
  MR_Word ConstStructDb_6)
{
  {
    MR_Word ConstStructs_8;
    MR_Word Var_13;
    MR_Box conv0_STATE_VARIABLE_IO_14_14;

    hlds__const_struct__const_struct_db_get_structs_2_p_0(ConstStructDb_6, &ConstStructs_8);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "%-------- Const structs --------\n\n");
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_const_struct_db_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Stream_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[9]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_13, ConstStructs_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_14_14);
    mercury__io__nl_3_p_0(Stream_5);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_mode_table_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_mode_table_entry_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_mode_table_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Word ModeTable_8)
{
  {
    MR_Word ModeDefns_10;
    MR_Word Var_17;
    MR_Box conv0_STATE_VARIABLE_IO_18_18;

    hlds__hlds_inst_mode__mode_table_get_mode_defns_2_p_0(ModeTable_8, &ModeDefns_10);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_6, Indent_7);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "%-------- Modes --------\n");
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_6, Indent_7);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_mode_table_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Stream_6));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (Indent_7));
    }
    mercury__map__foldl_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, ModeDefns_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_18_18);
    mercury__io__nl_3_p_0(Stream_6);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv16_HeadVar__7_181;

    hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__1324__1_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv16_HeadVar__7_181);
    *wrapper_arg_3 = ((MR_Box) (conv16_HeadVar__7_181));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_inst_name_nl_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv13_HeadVar__7_169;

    hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__1317__1_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv13_HeadVar__7_169);
    *wrapper_arg_3 = ((MR_Box) (conv13_HeadVar__7_169));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_inst_name_nl_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv10_HeadVar__7_157;

    hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__1310__1_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv10_HeadVar__7_157);
    *wrapper_arg_3 = ((MR_Box) (conv10_HeadVar__7_157));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_key_any_inst_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv7_HeadVar__7_145;

    hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__1303__1_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv7_HeadVar__7_145);
    *wrapper_arg_3 = ((MR_Box) (conv7_HeadVar__7_145));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_key_ground_inst_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv4_HeadVar__7_133;

    hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__1296__1_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv4_HeadVar__7_133);
    *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__7_133));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_key_merge_inst_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_HeadVar__7_120;

    hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__1289__1_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_HeadVar__7_120);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__7_120));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_key_unify_inst_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_user_inst_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer Indent_10,
  MR_Integer Limit_11,
  MR_Word InstTable_12)
{
  {
    MR_Word UserInstTable_14;
    MR_Word UnifyInstTable_15;
    MR_Word MergeInstTable_16;
    MR_Word GroundInstTable_17;
    MR_Word AnyInstTable_18;
    MR_Word SharedInstTable_19;
    MR_Word MostlyUniqInstTable_20;
    MR_Word UserInstPairs_21;
    MR_Word UnifyInstPairs_22;
    MR_Word MergeInstPairs_23;
    MR_Word GroundInstPairs_24;
    MR_Word AnyInstPairs_25;
    MR_Word SharedInstPairs_26;
    MR_Word MostlyUniqInstPairs_27;
    MR_Integer NumUnifyInsts_28;
    MR_Integer NumMergeInsts_29;
    MR_Integer NumGroundInsts_30;
    MR_Integer NumAnyInsts_31;
    MR_Integer NumSharedInsts_32;
    MR_Integer NumMostlyUniqInsts_33;
    MR_Word Var_42;
    MR_Word Var_46;
    MR_Word Var_57;
    MR_Word Var_68;
    MR_Word Var_79;
    MR_Word Var_90;
    MR_Word Var_101;
    MR_String Var_193;
    MR_String Var_204;
    MR_String Var_215;
    MR_String Var_226;
    MR_String Var_237;
    MR_String Var_248;
    MR_Box conv0_STATE_VARIABLE_IO_43_43;
    MR_Box conv3_NumUnifyInsts_28;
    MR_Box conv2_STATE_VARIABLE_IO_48_48;
    MR_Box conv6_NumMergeInsts_29;
    MR_Box conv5_STATE_VARIABLE_IO_59_59;
    MR_Box conv9_NumGroundInsts_30;
    MR_Box conv8_STATE_VARIABLE_IO_70_70;
    MR_Box conv12_NumAnyInsts_31;
    MR_Box conv11_STATE_VARIABLE_IO_81_81;
    MR_Box conv15_NumSharedInsts_32;
    MR_Box conv14_STATE_VARIABLE_IO_92_92;
    MR_Box conv18_NumMostlyUniqInsts_33;
    MR_Box conv17_STATE_VARIABLE_IO_103_103;

    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_8, Indent_10);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%-------- Insts --------\n");
    hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_12, &UserInstTable_14);
    hlds__hlds_inst_mode__inst_table_get_unify_insts_2_p_0(InstTable_12, &UnifyInstTable_15);
    hlds__hlds_inst_mode__inst_table_get_merge_insts_2_p_0(InstTable_12, &MergeInstTable_16);
    hlds__hlds_inst_mode__inst_table_get_ground_insts_2_p_0(InstTable_12, &GroundInstTable_17);
    hlds__hlds_inst_mode__inst_table_get_any_insts_2_p_0(InstTable_12, &AnyInstTable_18);
    hlds__hlds_inst_mode__inst_table_get_shared_insts_2_p_0(InstTable_12, &SharedInstTable_19);
    hlds__hlds_inst_mode__inst_table_get_mostly_uniq_insts_2_p_0(InstTable_12, &MostlyUniqInstTable_20);
    mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_14, &UserInstPairs_21);
    hlds__hlds_inst_mode__unify_insts_to_sorted_pairs_2_p_0(UnifyInstTable_15, &UnifyInstPairs_22);
    hlds__hlds_inst_mode__merge_insts_to_sorted_pairs_2_p_0(MergeInstTable_16, &MergeInstPairs_23);
    hlds__hlds_inst_mode__ground_insts_to_sorted_pairs_2_p_0(GroundInstTable_17, &GroundInstPairs_24);
    hlds__hlds_inst_mode__any_insts_to_sorted_pairs_2_p_0(AnyInstTable_18, &AnyInstPairs_25);
    hlds__hlds_inst_mode__shared_insts_to_sorted_pairs_2_p_0(SharedInstTable_19, &SharedInstPairs_26);
    hlds__hlds_inst_mode__mostly_uniq_insts_to_sorted_pairs_2_p_0(MostlyUniqInstTable_20, &MostlyUniqInstPairs_27);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_8, Indent_10);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%-------- User defined insts --------\n");
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Stream_8));
      MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (Indent_10));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[3]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_42, UserInstPairs_21, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_43_43);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%-------- Unify insts --------\n");
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_3));
      MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (Stream_8));
      MR_hl_field(MR_mktag(0), Var_46, 4) = ((MR_Box) (Lang_9));
      MR_hl_field(MR_mktag(0), Var_46, 5) = ((MR_Box) (Limit_11));
      MR_hl_field(MR_mktag(0), Var_46, 6) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[15]));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_46, UnifyInstPairs_22, ((MR_Box) ((MR_Integer) 0)), &conv3_NumUnifyInsts_28, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_48_48);
    NumUnifyInsts_28 = ((MR_Integer) (conv3_NumUnifyInsts_28));
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\nTotal number of unify insts: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), NumUnifyInsts_28, &Var_193);
    mercury__io__write_string_4_p_0(Stream_8, Var_193);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%-------- Merge insts --------\n");
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_5));
      MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (Stream_8));
      MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (Lang_9));
      MR_hl_field(MR_mktag(0), Var_57, 5) = ((MR_Box) (Limit_11));
      MR_hl_field(MR_mktag(0), Var_57, 6) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[16]));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, MergeInstPairs_23, ((MR_Box) ((MR_Integer) 0)), &conv6_NumMergeInsts_29, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_59_59);
    NumMergeInsts_29 = ((MR_Integer) (conv6_NumMergeInsts_29));
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\nTotal number of merge insts: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), NumMergeInsts_29, &Var_204);
    mercury__io__write_string_4_p_0(Stream_8, Var_204);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%-------- Ground insts --------\n");
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_7));
      MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (Stream_8));
      MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) (Lang_9));
      MR_hl_field(MR_mktag(0), Var_68, 5) = ((MR_Box) (Limit_11));
      MR_hl_field(MR_mktag(0), Var_68, 6) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[17]));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[6]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_68, GroundInstPairs_24, ((MR_Box) ((MR_Integer) 0)), &conv9_NumGroundInsts_30, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_70_70);
    NumGroundInsts_30 = ((MR_Integer) (conv9_NumGroundInsts_30));
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\nTotal number of ground insts: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), NumGroundInsts_30, &Var_215);
    mercury__io__write_string_4_p_0(Stream_8, Var_215);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%-------- Any insts --------\n");
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_9[3]));
      MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_9));
      MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (Stream_8));
      MR_hl_field(MR_mktag(0), Var_79, 4) = ((MR_Box) (Lang_9));
      MR_hl_field(MR_mktag(0), Var_79, 5) = ((MR_Box) (Limit_11));
      MR_hl_field(MR_mktag(0), Var_79, 6) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[18]));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[7]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_79, AnyInstPairs_25, ((MR_Box) ((MR_Integer) 0)), &conv12_NumAnyInsts_31, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_81_81);
    NumAnyInsts_31 = ((MR_Integer) (conv12_NumAnyInsts_31));
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\nTotal number of any insts: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), NumAnyInsts_31, &Var_226);
    mercury__io__write_string_4_p_0(Stream_8, Var_226);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%-------- Shared insts --------\n");
    {
      Var_90 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_9[4]));
      MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_11));
      MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (Stream_8));
      MR_hl_field(MR_mktag(0), Var_90, 4) = ((MR_Box) (Lang_9));
      MR_hl_field(MR_mktag(0), Var_90, 5) = ((MR_Box) (Limit_11));
      MR_hl_field(MR_mktag(0), Var_90, 6) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[19]));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[8]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_90, SharedInstPairs_26, ((MR_Box) ((MR_Integer) 0)), &conv15_NumSharedInsts_32, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_92_92);
    NumSharedInsts_32 = ((MR_Integer) (conv15_NumSharedInsts_32));
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\nTotal number of shared insts: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), NumSharedInsts_32, &Var_237);
    mercury__io__write_string_4_p_0(Stream_8, Var_237);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%-------- MostlyUniq insts --------\n");
    {
      Var_101 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_9[4]));
      MR_hl_field(MR_mktag(0), Var_101, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_7_p_0_13));
      MR_hl_field(MR_mktag(0), Var_101, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_101, 3) = ((MR_Box) (Stream_8));
      MR_hl_field(MR_mktag(0), Var_101, 4) = ((MR_Box) (Lang_9));
      MR_hl_field(MR_mktag(0), Var_101, 5) = ((MR_Box) (Limit_11));
      MR_hl_field(MR_mktag(0), Var_101, 6) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[20]));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[8]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_101, MostlyUniqInstPairs_27, ((MR_Box) ((MR_Integer) 0)), &conv18_NumMostlyUniqInsts_33, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_103_103);
    NumMostlyUniqInsts_33 = ((MR_Integer) (conv18_NumMostlyUniqInsts_33));
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\nTotal number of mostly uniq insts: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), NumMostlyUniqInsts_33, &Var_248);
    mercury__io__write_string_4_p_0(Stream_8, Var_248);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
    mercury__io__nl_3_p_0(Stream_8);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instances_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_instance_defns_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instances_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word InstanceTable_10)
{
  {
    MR_Word InstanceTableList_12;
    MR_Word Var_18;
    MR_Box conv0_STATE_VARIABLE_IO_19_19;

    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_8, Indent_9);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%-------- Instances --------\n");
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_1[2]), InstanceTable_10, &InstanceTableList_12);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_instances_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Info_7));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (Stream_8));
      MR_hl_field(MR_mktag(0), Var_18, 5) = ((MR_Box) (Indent_9));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_18, InstanceTableList_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_19_19);
    mercury__io__nl_3_p_0(Stream_8);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_classes_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_class_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_classes_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word ClassTable_10)
{
  {
    MR_Word ClassTableList_12;
    MR_Word Var_18;
    MR_Box conv0_STATE_VARIABLE_IO_19_19;

    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_8, Indent_9);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%-------- Classes --------\n");
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_10, &ClassTableList_12);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_classes_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Info_7));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (Stream_8));
      MR_hl_field(MR_mktag(0), Var_18, 5) = ((MR_Box) (Indent_9));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_18, ClassTableList_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_19_19);
    mercury__io__nl_3_p_0(Stream_8);
  }
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_table_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__hlds_out__hlds_out_module__type_table_entry_is_local_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_table_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word LocalOnly_11,
  MR_Word TypeTable_12)
{
  {
    MR_bool succeeded;
    MR_Word TypeAssocList_14;
    MR_Word SortedTypeAssocList_15;
    MR_Word PrintedTypeAssocList_16;

    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_9, Indent_10);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "%-------- Types --------\n");
    hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_12, &TypeAssocList_14);
    mercury__list__sort_2_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[0]), TypeAssocList_14, &SortedTypeAssocList_15);
    switch (LocalOnly_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        PrintedTypeAssocList_16 = SortedTypeAssocList_15;
        break;
      case (MR_Integer) 1:
        mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[0]), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[14]), SortedTypeAssocList_15, &PrintedTypeAssocList_16);
        break;
    }
    hlds__hlds_out__hlds_out_module__write_type_table_entries_6_p_0(Info_8, Stream_9, Indent_10, PrintedTypeAssocList_16);
    mercury__io__nl_3_p_0(Stream_9);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_table_entries_6_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Type_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Types_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word TypeCtor_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type_16, (MR_Integer) 0))));
      MR_Word TypeDefn_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type_16, (MR_Integer) 1))));
      MR_Word TVarSet_31;
      MR_Word TypeParams_32;
      MR_Word TypeBody_33;
      MR_Word TypeStatus_34;
      MR_Word Context_35;
      MR_String DumpOptions_36;
      MR_Integer Var_57;
      MR_Word next_value_of_HeadVar__4_4;

      hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_29, &TVarSet_31);
      hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_29, &TypeParams_32);
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_29, &TypeBody_33);
      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_29, &TypeStatus_34);
      hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_29, &Context_35);
      mercury__io__write_char_4_p_0(Stream_2, (MR_Char) 10);
      hlds__hlds_out__hlds_out_util__maybe_output_context_comment_6_p_0(Stream_2, Indent_3, (MR_String) "", Context_35);
      DumpOptions_36 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 0))));
      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_36, (MR_Char) 99);
      if (succeeded)
      {
        MR_String Var_47;

        Var_47 = hlds__hlds_out__hlds_out_util__type_import_status_to_string_1_f_0(TypeStatus_34);
        mercury__io__write_string_4_p_0(Stream_2, (MR_String) "% status ");
        mercury__io__write_string_4_p_0(Stream_2, Var_47);
        mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\n");
      }
      hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_2, Indent_3);
      if (((((MR_tag((MR_Word) TypeBody_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeBody_33, (MR_Integer) 0)))) == (MR_Integer) 1))))
      {
        MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeBody_33, (MR_Integer) 1))));

        succeeded = (Var_50 == (MR_Word) ((MR_Unsigned) 12U));
      }
      else
      if (((((MR_tag((MR_Word) TypeBody_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeBody_33, (MR_Integer) 0)))) == (MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      if (succeeded)
        mercury__io__write_string_4_p_0(Stream_2, (MR_String) ":- solver type ");
      else
        mercury__io__write_string_4_p_0(Stream_2, (MR_String) ":- type ");
      parse_tree__prog_out__write_type_name_4_p_0(Stream_2, TypeCtor_28);
      if (!((TypeParams_32 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word HeadParam_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeParams_32, (MR_Integer) 0))));
        MR_Word TailParams_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeParams_32, (MR_Integer) 1))));

        mercury__io__write_string_4_p_0(Stream_2, (MR_String) "(");
        hlds__hlds_out__hlds_out_module__write_type_params_loop_6_p_0(Stream_2, TVarSet_31, HeadParam_74, TailParams_75);
        mercury__io__write_string_4_p_0(Stream_2, (MR_String) ")");
      }
      Var_57 = (MR_Integer) ((MR_Unsigned) Indent_3 + (MR_Unsigned) 1);
      hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_116_121_112_101_95_98_111_100_121_95_95_91_51_93_95_48_8_p_0(Info_1, Stream_2, TypeBody_33, Var_57, TVarSet_31);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Types_17;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_116_121_112_101_95_98_111_100_121_95_95_91_51_93_95_48_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word TypeBody_12,
  MR_Integer Indent_13,
  MR_Word TVarSet_14)
{
  switch (MR_tag((MR_Word) TypeBody_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ForeignTypeBody_51 = (MR_Word) ((MR_Word) (TypeBody_12));
        MR_Word MaybeC_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBody_51, (MR_Integer) 0))));
        MR_Word MaybeJava_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBody_51, (MR_Integer) 1))));
        MR_Word MaybeCsharp_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBody_51, (MR_Integer) 2))));
        MR_String MaybeCStr_55;
        MR_String MaybeJavaStr_60;
        MR_String MaybeCsharpStr_65;
        MR_String Indent1Str_70;
        MR_Integer Var_113;
        MR_String IndentStr_231;

        if ((MaybeC_52 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeCStr_55 = (MR_String) "no_c";
        else
        {
          MR_Word C_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeC_52, (MR_Integer) 0))));
          MR_String CTypeName_57;
          MR_Word CCanonical_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), C_56, (MR_Integer) 1))));
          MR_Word CAssertions_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), C_56, (MR_Integer) 2))));
          MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), C_56, (MR_Integer) 0))));
          MR_String Var_86;
          MR_String Var_89;
          MR_String Var_250;
          MR_String Var_252;
          MR_String Var_253;
          MR_String Var_255;
          MR_String Var_256;

          CTypeName_57 = (MR_String) (Var_80);
          Var_86 = hlds__hlds_out__hlds_out_module__maybe_canonical_to_simple_string_1_f_0(CCanonical_58);
          Var_89 = hlds__hlds_out__hlds_out_module__foreign_type_assertions_to_simple_string_1_f_0(CAssertions_59);
          Var_250 = mercury__string__f_43_43_2_f_0(Var_89, (MR_String) ")");
          Var_252 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_250);
          Var_253 = mercury__string__f_43_43_2_f_0(Var_86, Var_252);
          Var_255 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_253);
          Var_256 = mercury__string__f_43_43_2_f_0(CTypeName_57, Var_255);
          MaybeCStr_55 = mercury__string__f_43_43_2_f_0((MR_String) "c(", Var_256);
        }
        if ((MaybeJava_53 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeJavaStr_60 = (MR_String) "no_java";
        else
        {
          MR_Word Java_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeJava_53, (MR_Integer) 0))));
          MR_String JavaTypeName_62;
          MR_Word JavaCanonical_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Java_61, (MR_Integer) 1))));
          MR_Word JavaAssertions_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Java_61, (MR_Integer) 2))));
          MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Java_61, (MR_Integer) 0))));
          MR_String Var_97;
          MR_String Var_100;
          MR_String Var_259;
          MR_String Var_261;
          MR_String Var_262;
          MR_String Var_264;
          MR_String Var_265;

          JavaTypeName_62 = (MR_String) (Var_91);
          Var_97 = hlds__hlds_out__hlds_out_module__maybe_canonical_to_simple_string_1_f_0(JavaCanonical_63);
          Var_100 = hlds__hlds_out__hlds_out_module__foreign_type_assertions_to_simple_string_1_f_0(JavaAssertions_64);
          Var_259 = mercury__string__f_43_43_2_f_0(Var_100, (MR_String) ")");
          Var_261 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_259);
          Var_262 = mercury__string__f_43_43_2_f_0(Var_97, Var_261);
          Var_264 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_262);
          Var_265 = mercury__string__f_43_43_2_f_0(JavaTypeName_62, Var_264);
          MaybeJavaStr_60 = mercury__string__f_43_43_2_f_0((MR_String) "java(", Var_265);
        }
        if ((MaybeCsharp_54 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeCsharpStr_65 = (MR_String) "no_csharp";
        else
        {
          MR_Word Csharp_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCsharp_54, (MR_Integer) 0))));
          MR_String CsharpTypeName_67;
          MR_Word CsharpCanonical_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Csharp_66, (MR_Integer) 1))));
          MR_Word CsharpAssertions_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Csharp_66, (MR_Integer) 2))));
          MR_Word Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Csharp_66, (MR_Integer) 0))));
          MR_String Var_108;
          MR_String Var_111;
          MR_String Var_268;
          MR_String Var_270;
          MR_String Var_271;
          MR_String Var_273;
          MR_String Var_274;

          CsharpTypeName_67 = (MR_String) (Var_102);
          Var_108 = hlds__hlds_out__hlds_out_module__maybe_canonical_to_simple_string_1_f_0(CsharpCanonical_68);
          Var_111 = hlds__hlds_out__hlds_out_module__foreign_type_assertions_to_simple_string_1_f_0(CsharpAssertions_69);
          Var_268 = mercury__string__f_43_43_2_f_0(Var_111, (MR_String) ")");
          Var_270 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_268);
          Var_271 = mercury__string__f_43_43_2_f_0(Var_108, Var_270);
          Var_273 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_271);
          Var_274 = mercury__string__f_43_43_2_f_0(CsharpTypeName_67, Var_273);
          MaybeCsharpStr_65 = mercury__string__f_43_43_2_f_0((MR_String) "csharp(", Var_274);
        }
        IndentStr_231 = hlds__hlds_out__hlds_out_util__indent_string_1_f_0(Indent_13);
        Var_113 = (MR_Integer) ((MR_Unsigned) Indent_13 + (MR_Unsigned) 1);
        Indent1Str_70 = hlds__hlds_out__hlds_out_util__indent_string_1_f_0(Var_113);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) " is foreign_type(\n");
        mercury__io__write_string_4_p_0(Stream_10, Indent1Str_70);
        mercury__io__write_string_4_p_0(Stream_10, MaybeCStr_55);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n");
        mercury__io__write_string_4_p_0(Stream_10, Indent1Str_70);
        mercury__io__write_string_4_p_0(Stream_10, MaybeJavaStr_60);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n");
        mercury__io__write_string_4_p_0(Stream_10, Indent1Str_70);
        mercury__io__write_string_4_p_0(Stream_10, MaybeCsharpStr_65);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
        mercury__io__write_string_4_p_0(Stream_10, IndentStr_231);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ").\n");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Ctors_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 0))));
        MR_Word MaybeSuperType_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 1))));
        MR_Word MaybeUserEqComp_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 2))));
        MR_Word MaybeRepn_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 3))));
        MR_Word Foreign_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 4))));
        MR_Word MercInfo_23;

        mercury__io__nl_3_p_0(Stream_10);
        if (!((MaybeSuperType_17 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word SuperType_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSuperType_17, (MR_Integer) 0))));

          hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_10, Indent_13);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "=< ");
          parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(TVarSet_14, (MR_Integer) 0, SuperType_21, Stream_10);
          mercury__io__nl_3_p_0(Stream_10);
        }
        MercInfo_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 4))));
        if ((MaybeRepn_19 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word HeadCtor_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctors_16, (MR_Integer) 0))));
          MR_Word TailCtors_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctors_16, (MR_Integer) 1))));

          hlds__hlds_out__hlds_out_module__write_constructors_7_p_0(Stream_10, TVarSet_14, Indent_13, HeadCtor_24, TailCtors_25);
          parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0(MercInfo_23, TVarSet_14, (MR_Word) ((MR_Unsigned) 0U), MaybeUserEqComp_18, (MR_Word) ((MR_Unsigned) 0U), Stream_10);
          hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_10, Indent_13);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% no type representation information yet\n");
        }
        else
        {
          MR_Word Repn_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepn_19, (MR_Integer) 0))));
          MR_Word CtorRepns_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_27, (MR_Integer) 0))));
          MR_Word CheaperTagTest_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_27, (MR_Integer) 2))));
          MR_Word DuTypeKind_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_27, (MR_Integer) 3))));
          MR_Word MaybeDirectArgCtors_230 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_27, (MR_Integer) 4))));

          hlds__hlds_out__hlds_out_module__write_constructor_repns_6_p_0(Stream_10, TVarSet_14, Indent_13, CtorRepns_28);
          if (!((CheaperTagTest_30 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word ExpConsId_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_30, (MR_Integer) 0))));
            MR_Word ExpConsTag_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_30, (MR_Integer) 1))));
            MR_Word CheapConsId_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_30, (MR_Integer) 2))));
            MR_Word CheapConsTag_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_30, (MR_Integer) 3))));
            MR_String ExpConsIdStr_36;
            MR_String CheapConsIdStr_37;
            MR_String IndentStr_38;
            MR_Word Var_148;
            MR_Word Var_149;
            MR_String Var_168;
            MR_String Var_183;

            Var_148 = hlds__hlds_out__hlds_out_module__unqual_cons_id_1_f_0(ExpConsId_32);
            ExpConsIdStr_36 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(Var_148);
            Var_149 = hlds__hlds_out__hlds_out_module__unqual_cons_id_1_f_0(CheapConsId_34);
            CheapConsIdStr_37 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(Var_149);
            IndentStr_38 = hlds__hlds_out__hlds_out_util__indent_string_1_f_0(Indent_13);
            mercury__io__write_string_4_p_0(Stream_10, IndentStr_38);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% cheaper tag test:\n");
            mercury__io__write_string_4_p_0(Stream_10, IndentStr_38);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "%   from ");
            mercury__io__write_string_4_p_0(Stream_10, ExpConsIdStr_36);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
            Var_168 = hlds__hlds_out__hlds_out_module__du_cons_tag_to_string_1_f_0(ExpConsTag_33);
            mercury__io__write_string_4_p_0(Stream_10, IndentStr_38);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "%      ");
            mercury__io__write_string_4_p_0(Stream_10, Var_168);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
            mercury__io__write_string_4_p_0(Stream_10, IndentStr_38);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "%   to ");
            mercury__io__write_string_4_p_0(Stream_10, CheapConsIdStr_37);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
            Var_183 = hlds__hlds_out__hlds_out_module__du_cons_tag_to_string_1_f_0(CheapConsTag_35);
            mercury__io__write_string_4_p_0(Stream_10, IndentStr_38);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "%      ");
            mercury__io__write_string_4_p_0(Stream_10, Var_183);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
          }
          switch (MR_tag((MR_Word) DuTypeKind_31)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(DuTypeKind_31)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_10, Indent_13);
                    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% KIND enumeration\n");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_10, Indent_13);
                    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% KIND dummy\n");
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_10, Indent_13);
                    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% KIND general\n");
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Lang_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), DuTypeKind_31, (MR_Integer) 0))) & (MR_Integer) 3);
                MR_String Var_209;

                hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_10, Indent_13);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% KIND foreign enumeration for ");
                Var_209 = libs__globals__foreign_language_string_1_f_0(Lang_39);
                mercury__io__write_string_4_p_0(Stream_10, Var_209);
                mercury__io__nl_3_p_0(Stream_10);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word FunctorName_40 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DuTypeKind_31, (MR_Integer) 0))));
                MR_Word ArgType_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DuTypeKind_31, (MR_Integer) 1))));
                MR_Word MaybeArgName_42 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DuTypeKind_31, (MR_Integer) 2))));
                MR_String Var_191;

                hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_10, Indent_13);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% KIND notag: ");
                Var_191 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(FunctorName_40);
                mercury__io__write_string_4_p_0(Stream_10, Var_191);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", ");
                parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(TVarSet_14, (MR_Integer) 0, ArgType_41, Stream_10);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", ");
                if ((MaybeArgName_42 == (MR_Word) ((MR_Unsigned) 0U)))
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "no arg name");
                else
                {
                  MR_String ArgName_43 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeArgName_42, (MR_Integer) 0))));

                  mercury__io__write_string_4_p_0(Stream_10, ArgName_43);
                }
                mercury__io__nl_3_p_0(Stream_10);
              }
              break;
          }
          parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0(MercInfo_23, TVarSet_14, (MR_Word) ((MR_Unsigned) 0U), MaybeUserEqComp_18, MaybeDirectArgCtors_230, Stream_10);
          if (!((Foreign_20 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_10, Indent_13);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% has foreign_type\n");
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Type_49 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeBody_12, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(Stream_10, (MR_String) " == ");
        parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(TVarSet_14, (MR_Integer) 0, Type_49, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ".\n");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeBody_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DetailsSolver_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeBody_12, (MR_Integer) 1))));
            MR_Word SolverTypeDetails_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver_71, (MR_Integer) 0))));
            MR_Word Var_75;
            MR_Word MaybeUserEqComp_232 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver_71, (MR_Integer) 1))));
            MR_Word MercInfo_233 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 4))));

            {
              Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (SolverTypeDetails_72));
            }
            parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0(MercInfo_233, TVarSet_14, Var_75, MaybeUserEqComp_232, (MR_Word) ((MR_Unsigned) 0U), Stream_10);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ".\n");
          }
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) ".\n");
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructor_repns_6_p_0(
  MR_Word Stream_7,
  MR_Word TVarSet_8,
  MR_Integer Indent_9,
  MR_Word CtorRepns_10)
{
  if ((CtorRepns_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_out.hlds_out_module.write_constructor_repns\'/6", (MR_String) "empty constructor list");
      return;
    }
  else
  {
    MR_Word HeadCtorRepn_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorRepns_10, (MR_Integer) 0))));
    MR_Word TailCtorRepns_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorRepns_10, (MR_Integer) 1))));

    hlds__hlds_out__hlds_out_module__write_constructor_repns_loop_8_p_0(Stream_7, TVarSet_8, Indent_9, (MR_String) "--->    ", HeadCtorRepn_12, TailCtorRepns_13);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructor_repns_loop_8_p_0(
  MR_Word Stream_9,
  MR_Word TVarSet_10,
  MR_Integer Indent_11,
  MR_String ArrowOrSemi0_12,
  MR_Word HeadCtorRepn_13,
  MR_Word TailCtorRepns_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_9, Indent_11);
    mercury__io__write_string_4_p_0(Stream_9, ArrowOrSemi0_12);
    if ((TailCtorRepns_14 == (MR_Word) ((MR_Unsigned) 0U)))
      hlds__hlds_out__hlds_out_module__write_ctor_repn_6_p_0(Stream_9, TVarSet_10, Indent_11, HeadCtorRepn_13);
    else
    {
      MR_Word HeadTailCtorRepn_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailCtorRepns_14, (MR_Integer) 0))));
      MR_Word TailTailCtorRepns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailCtorRepns_14, (MR_Integer) 1))));
      MR_Word next_value_of_HeadCtorRepn_13;
      MR_Word next_value_of_TailCtorRepns_14;

      hlds__hlds_out__hlds_out_module__write_ctor_repn_6_p_0(Stream_9, TVarSet_10, Indent_11, HeadCtorRepn_13);
      // direct tailcall eliminated
      ;
      next_value_of_HeadCtorRepn_13 = HeadTailCtorRepn_16;
      next_value_of_TailCtorRepns_14 = TailTailCtorRepns_17;
      ArrowOrSemi0_12 = (MR_String) ";       ";
      HeadCtorRepn_13 = next_value_of_HeadCtorRepn_13;
      TailCtorRepns_14 = next_value_of_TailCtorRepns_14;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_ctor_repn_6_p_0(
  MR_Word Stream_7,
  MR_Word TVarSet_8,
  MR_Integer Indent_9,
  MR_Word CtorRepn_10)
{
  {
    MR_Word MaybeExistConstraints_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_10, (MR_Integer) 1))));
    MR_Word SymName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_10, (MR_Integer) 2))));
    MR_Word ConsTag_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_10, (MR_Integer) 3))));
    MR_Word ArgRepns_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_10, (MR_Integer) 4))));
    MR_Integer Arity_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CtorRepn_10, (MR_Integer) 5))));
    MR_String Name_19;
    MR_String NameStr_20;
    MR_String ExistConstraintsPrefix_22;
    MR_String ExistConstraintsSuffix_23;
    MR_String BracePrefix_24;
    MR_String BraceSuffix_25;
    MR_String ConsTagString_26;
    MR_String Var_33;
    MR_Integer Var_35;
    MR_String Var_41;
    MR_Integer Var_42;
    MR_String Var_45;
    MR_String Var_81;
    MR_String Var_83;

    Name_19 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_14);
    NameStr_20 = parse_tree__parse_tree_out_term__mercury_bracketed_atom_to_string_2_f_0((MR_Integer) 1, Name_19);
    Var_35 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 4);
    Var_33 = hlds__hlds_out__hlds_out_util__indent_string_1_f_0(Var_35);
    parse_tree__parse_tree_out__maybe_cons_exist_constraints_to_prefix_suffix_6_p_0(TVarSet_8, Var_33, (MR_String) "\n", MaybeExistConstraints_13, &ExistConstraintsPrefix_22, &ExistConstraintsSuffix_23);
    parse_tree__parse_tree_out__maybe_brace_for_name_prefix_suffix_4_p_0(Arity_17, Name_19, &BracePrefix_24, &BraceSuffix_25);
    mercury__io__write_string_4_p_0(Stream_7, ExistConstraintsPrefix_22);
    mercury__io__write_string_4_p_0(Stream_7, BracePrefix_24);
    Var_42 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 4);
    Var_41 = hlds__hlds_out__hlds_out_util__indent_string_1_f_0(Var_42);
    Var_45 = hlds__hlds_out__hlds_out_module__du_cons_tag_to_string_1_f_0(ConsTag_15);
    Var_81 = mercury__string__f_43_43_2_f_0(Var_45, (MR_String) "\n");
    Var_83 = mercury__string__f_43_43_2_f_0((MR_String) "% tag: ", Var_81);
    ConsTagString_26 = mercury__string__f_43_43_2_f_0(Var_41, Var_83);
    if ((ArgRepns_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_4_p_0(Stream_7, BracePrefix_24);
      mercury__io__write_string_4_p_0(Stream_7, NameStr_20);
      mercury__io__write_string_4_p_0(Stream_7, BraceSuffix_25);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
      mercury__io__write_string_4_p_0(Stream_7, ConsTagString_26);
    }
    else
    {
      MR_Word HeadArgRepn_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgRepns_16, (MR_Integer) 0))));
      MR_Word TailArgRepns_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgRepns_16, (MR_Integer) 1))));
      MR_Word AnyFieldName_29;
      MR_Integer Var_56;
      MR_Integer Var_59;
      MR_Integer Var_61;
      MR_Word ArgRepn_97;
      MR_Word ArgRepns_98;
      MR_Word MaybeFieldName_100;

      mercury__io__write_string_4_p_0(Stream_7, BracePrefix_24);
      mercury__io__write_string_4_p_0(Stream_7, NameStr_20);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(\n");
      mercury__io__write_string_4_p_0(Stream_7, ConsTagString_26);
      ArgRepn_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgRepns_16, (MR_Integer) 0))));
      ArgRepns_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgRepns_16, (MR_Integer) 1))));
      MaybeFieldName_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRepn_97, (MR_Integer) 0))));
      if ((MaybeFieldName_100 == (MR_Word) ((MR_Unsigned) 0U)))
        AnyFieldName_29 = hlds__hlds_out__hlds_out_module__does_any_arg_repn_have_a_field_name_1_f_0(ArgRepns_98);
      else
        AnyFieldName_29 = (MR_Integer) 1;
      Var_59 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 4);
      Var_56 = (MR_Integer) ((MR_Unsigned) Var_59 + (MR_Unsigned) 1);
      hlds__hlds_out__hlds_out_module__mercury_output_ctor_arg_repns_9_p_0(Stream_7, TVarSet_8, Var_56, AnyFieldName_29, (MR_Integer) 1, HeadArgRepn_27, TailArgRepns_28);
      Var_61 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 4);
      hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_7, Var_61);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
      mercury__io__write_string_4_p_0(Stream_7, BraceSuffix_25);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
    }
    mercury__io__write_string_4_p_0(Stream_7, ExistConstraintsSuffix_23);
  }
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_module__du_cons_tag_to_string_1_f_0(
  MR_Word ConsTag_3)
{
  {
    MR_String String_4;

    switch (MR_tag((MR_Word) ConsTag_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            String_4 = (MR_String) "dummy tag";
            break;
          case (MR_Integer) 1:
            String_4 = (MR_String) "notag";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntTag_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsTag_3, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) IntTag_20)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer N_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IntTag_20, (MR_Integer) 0))));
                MR_String Var_244;

                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), N_21, &Var_244);
                String_4 = mercury__string__f_43_43_2_f_0((MR_String) "enum ", Var_244);
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.hlds_out.hlds_out_module.du_cons_tag_to_string\'/1", (MR_String) "non-du cons_tag");
              break;
            case (MR_Integer) 3:
              mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.hlds_out.hlds_out_module.du_cons_tag_to_string\'/1", (MR_String) "non-du cons_tag");
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.hlds_out.hlds_out_module.du_cons_tag_to_string\'/1", (MR_String) "non-du cons_tag");
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 14:
            mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.hlds_out.hlds_out_module.du_cons_tag_to_string\'/1", (MR_String) "non-du cons_tag");
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lang_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_String ForeignName_19 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 2))));
              MR_String Var_65;
              MR_String Var_253;
              MR_String Var_254;

              Var_65 = libs__globals__foreign_language_string_1_f_0(Lang_18);
              Var_253 = mercury__string__f_43_43_2_f_0((MR_String) " for ", Var_65);
              Var_254 = mercury__string__f_43_43_2_f_0(ForeignName_19, Var_253);
              String_4 = mercury__string__f_43_43_2_f_0((MR_String) "foreign ", Var_254);
            }
            break;
          case (MR_Integer) 2:
            {
              uint8_t Ptag_5;
              MR_Word LocalSectag_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 2))));
              MR_Word SectagMask_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 3))) & (MR_Integer) 1);
              MR_String MaskString_8;
              MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 1))));
              MR_String Var_112;
              MR_String Var_128;
              MR_String Var_129;
              MR_String Var_131;
              MR_Unsigned Var_132;
              MR_String Var_133;
              MR_String Var_141;

              Ptag_5 = (uint8_t) (Var_106);
              switch (SectagMask_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  MaskString_8 = (MR_String) "rest of word";
                  break;
                case (MR_Integer) 1:
                  MaskString_8 = (MR_String) "must be masked";
                  break;
              }
              Var_112 = hlds__hlds_out__hlds_out_module__local_sectag_to_string_1_f_0(LocalSectag_6);
              Var_128 = mercury__string__f_43_43_2_f_0((MR_String) ", no args, ", MaskString_8);
              Var_129 = mercury__string__f_43_43_2_f_0(Var_112, Var_128);
              Var_131 = mercury__string__f_43_43_2_f_0((MR_String) ", local sectag ", Var_129);
              mercury__string__format__format_cast_uint8_to_uint_2_p_0(Ptag_5, &Var_132);
              mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), (MR_Integer) 1, Var_132, &Var_133);
              Var_141 = mercury__string__f_43_43_2_f_0(Var_133, Var_131);
              String_4 = mercury__string__f_43_43_2_f_0((MR_String) "ptag ", Var_141);
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word RemoteArgsTagInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) RemoteArgsTagInfo_10)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  String_4 = (MR_String) "ptag 0, remote sectag none, only functor";
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RemoteArgsTagInfo_10, (MR_Integer) 0))));
                    uint8_t Ptag_122 = (uint8_t) (Var_93);
                    MR_Unsigned Var_144;
                    MR_String Var_145;
                    MR_String Var_153;

                    mercury__string__format__format_cast_uint8_to_uint_2_p_0(Ptag_122, &Var_144);
                    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), (MR_Integer) 1, Var_144, &Var_145);
                    Var_153 = mercury__string__f_43_43_2_f_0(Var_145, (MR_String) ", remote sectag none, unshared");
                    String_4 = mercury__string__f_43_43_2_f_0((MR_String) "ptag ", Var_153);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word RemoteSectag_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_10, (MR_Integer) 1))));
                    MR_Unsigned SectagValue_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_11, (MR_Integer) 0))));
                    MR_Word SectagSize_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_11, (MR_Integer) 1))));
                    MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_10, (MR_Integer) 0))));
                    uint8_t Ptag_123 = (uint8_t) (Var_76);

                    if ((SectagSize_13 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_String Var_156;
                      MR_String Var_164;
                      MR_String Var_166;
                      MR_Unsigned Var_167;
                      MR_String Var_168;
                      MR_String Var_176;

                      mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), (MR_Integer) 1, SectagValue_12, &Var_156);
                      Var_164 = mercury__string__f_43_43_2_f_0(Var_156, (MR_String) " full word");
                      Var_166 = mercury__string__f_43_43_2_f_0((MR_String) ", remote sectag ", Var_164);
                      mercury__string__format__format_cast_uint8_to_uint_2_p_0(Ptag_123, &Var_167);
                      mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), (MR_Integer) 1, Var_167, &Var_168);
                      Var_176 = mercury__string__f_43_43_2_f_0(Var_168, Var_166);
                      String_4 = mercury__string__f_43_43_2_f_0((MR_String) "ptag ", Var_176);
                    }
                    else
                    {
                      MR_Word SectagBits_14 = (MR_Word) (MR_body((MR_Word) (SectagSize_13), (MR_Integer) 1));
                      uint8_t NumRemoteSectagBits_15 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), SectagBits_14, (MR_Integer) 0)));
                      MR_Unsigned Mask_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SectagBits_14, (MR_Integer) 1))));
                      MR_String Var_178;
                      MR_String Var_187;
                      MR_Unsigned Var_188;
                      MR_String Var_189;
                      MR_String Var_197;
                      MR_String Var_199;
                      MR_String Var_200;
                      MR_String Var_208;
                      MR_String Var_210;
                      MR_Unsigned Var_211;
                      MR_String Var_212;
                      MR_String Var_220;

                      mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), (MR_Integer) 2, Mask_16, &Var_178);
                      Var_187 = mercury__string__f_43_43_2_f_0((MR_String) " bits, mask ", Var_178);
                      mercury__string__format__format_cast_uint8_to_uint_2_p_0(NumRemoteSectagBits_15, &Var_188);
                      mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), (MR_Integer) 1, Var_188, &Var_189);
                      Var_197 = mercury__string__f_43_43_2_f_0(Var_189, Var_187);
                      Var_199 = mercury__string__f_43_43_2_f_0((MR_String) " in ", Var_197);
                      mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), (MR_Integer) 1, SectagValue_12, &Var_200);
                      Var_208 = mercury__string__f_43_43_2_f_0(Var_200, Var_199);
                      Var_210 = mercury__string__f_43_43_2_f_0((MR_String) ", remote sectag ", Var_208);
                      mercury__string__format__format_cast_uint8_to_uint_2_p_0(Ptag_123, &Var_211);
                      mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), (MR_Integer) 1, Var_211, &Var_212);
                      Var_220 = mercury__string__f_43_43_2_f_0(Var_212, Var_210);
                      String_4 = mercury__string__f_43_43_2_f_0((MR_String) "ptag ", Var_220);
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Unsigned Data_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), RemoteArgsTagInfo_10, (MR_Integer) 0))));
                    MR_String Var_222;

                    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), (MR_Integer) 1, Data_17, &Var_222);
                    String_4 = mercury__string__f_43_43_2_f_0((MR_String) "ctor ", Var_222);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word LocalArgsTagInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 1))));

              if ((LocalArgsTagInfo_9 == (MR_Word) ((MR_Unsigned) 0U)))
                String_4 = (MR_String) "ptag 0, local sectag none, only functor";
              else
              {
                MR_Word Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArgsTagInfo_9, (MR_Integer) 0))));
                MR_String Var_104;
                uint8_t Ptag_116 = (uint8_t) (Var_98);
                MR_Word LocalSectag_117 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArgsTagInfo_9, (MR_Integer) 1))));
                MR_String Var_232;
                MR_Unsigned Var_233;
                MR_String Var_234;
                MR_String Var_242;

                Var_104 = hlds__hlds_out__hlds_out_module__local_sectag_to_string_1_f_0(LocalSectag_117);
                Var_232 = mercury__string__f_43_43_2_f_0((MR_String) ", local sectag ", Var_104);
                mercury__string__format__format_cast_uint8_to_uint_2_p_0(Ptag_116, &Var_233);
                mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), (MR_Integer) 1, Var_233, &Var_234);
                Var_242 = mercury__string__f_43_43_2_f_0(Var_234, Var_232);
                String_4 = mercury__string__f_43_43_2_f_0((MR_String) "ptag ", Var_242);
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 1))));
              uint8_t Ptag_126 = (uint8_t) (Var_67);
              MR_Unsigned Var_256;
              MR_String Var_257;

              mercury__string__format__format_cast_uint8_to_uint_2_p_0(Ptag_126, &Var_256);
              mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), (MR_Integer) 1, Var_256, &Var_257);
              String_4 = mercury__string__f_43_43_2_f_0((MR_String) "direct arg tag ", Var_257);
            }
            break;
        }
        break;
    }
    return String_4;
  }
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_module__local_sectag_to_string_1_f_0(
  MR_Word LocalSectag_3)
{
  {
    MR_bool succeeded;
    MR_String String_4;
    MR_Unsigned SectagValue_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_3, (MR_Integer) 0))));
    MR_Word SectagBits_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalSectag_3, (MR_Integer) 2))));
    uint8_t NumBits_8 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), SectagBits_7, (MR_Integer) 0)));

    succeeded = (NumBits_8 == UINT8_C(0));
    if (succeeded)
      String_4 = (MR_String) "none";
    else
    {
      MR_Unsigned Var_17;
      MR_String Var_18;
      MR_String Var_26;
      MR_String Var_28;
      MR_String Var_29;

      mercury__string__format__format_cast_uint8_to_uint_2_p_0(NumBits_8, &Var_17);
      mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), (MR_Integer) 1, Var_17, &Var_18);
      Var_26 = mercury__string__f_43_43_2_f_0(Var_18, (MR_String) " bits");
      Var_28 = mercury__string__f_43_43_2_f_0((MR_String) " in ", Var_26);
      mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), (MR_Integer) 1, SectagValue_5, &Var_29);
      String_4 = mercury__string__f_43_43_2_f_0(Var_29, Var_28);
    }
    return String_4;
  }
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_module__does_any_arg_repn_have_a_field_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word ArgRepn_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgRepns_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MaybeFieldName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRepn_3, (MR_Integer) 0))));

      if ((MaybeFieldName_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word next_value_of_HeadVar__1_1 = ArgRepns_4;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
        HeadVar__2_2 = (MR_Integer) 1;
    }
    return HeadVar__2_2;
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__mercury_output_ctor_arg_repns_9_p_0(
  MR_Word Stream_10,
  MR_Word TVarSet_11,
  MR_Integer Indent_12,
  MR_Word AnyFieldName_13,
  MR_Integer CurArgNum_14,
  MR_Word HeadArgRepn_15,
  MR_Word TailArgRepns_16)
{
  while (MR_TRUE)
  {
    MR_Word MaybeFieldName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadArgRepn_15, (MR_Integer) 0))));
    MR_Word Type_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadArgRepn_15, (MR_Integer) 1))));
    MR_Word ArgPosWidth_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadArgRepn_15, (MR_Integer) 2))));

    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_10, Indent_12);
    switch (AnyFieldName_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        if ((MaybeFieldName_18 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Var_63;

          mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), (MR_Integer) 24, (MR_String) "", &Var_63);
          mercury__io__write_string_4_p_0(Stream_10, Var_63);
        }
        else
        {
          MR_Word FieldName_22;
          MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldName_18, (MR_Integer) 0))));
          MR_String Var_34;
          MR_String Var_54;

          FieldName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 0))));
          Var_34 = mdbcomp__sym_name__unqualify_name_1_f_0(FieldName_22);
          mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[1]), (MR_Integer) 20, Var_34, &Var_54);
          mercury__io__write_string_4_p_0(Stream_10, Var_54);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) " :: ");
        }
        break;
    }
    parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(TVarSet_11, (MR_Integer) 0, Type_19, Stream_10);
    if ((TailArgRepns_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
      hlds__hlds_out__hlds_out_module__write_arg_pos_width_6_p_0(Stream_10, Indent_12, CurArgNum_14, ArgPosWidth_20);
    }
    else
    {
      MR_Word HeadTailArgRepn_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailArgRepns_16, (MR_Integer) 0))));
      MR_Word TailTailArgRepns_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailArgRepns_16, (MR_Integer) 1))));
      MR_Integer Var_47;
      MR_Integer next_value_of_CurArgNum_14;
      MR_Word next_value_of_HeadArgRepn_15;
      MR_Word next_value_of_TailArgRepns_16;

      mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n");
      hlds__hlds_out__hlds_out_module__write_arg_pos_width_6_p_0(Stream_10, Indent_12, CurArgNum_14, ArgPosWidth_20);
      Var_47 = (MR_Integer) ((MR_Unsigned) CurArgNum_14 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurArgNum_14 = Var_47;
      next_value_of_HeadArgRepn_15 = HeadTailArgRepn_24;
      next_value_of_TailArgRepns_16 = TailTailArgRepns_25;
      CurArgNum_14 = next_value_of_CurArgNum_14;
      HeadArgRepn_15 = next_value_of_HeadArgRepn_15;
      TailArgRepns_16 = next_value_of_TailArgRepns_16;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_arg_pos_width_6_p_0(
  MR_Word Stream_7,
  MR_Integer Indent_8,
  MR_Integer CurArgNum_9,
  MR_Word ArgPosWidth_10)
{
  {
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_7, Indent_8);
    switch (MR_tag((MR_Word) ArgPosWidth_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Var_312;

          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% arg ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), CurArgNum_9, &Var_312);
          mercury__io__write_string_4_p_0(Stream_7, Var_312);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ": none_nowhere\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgOnlyOffset_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgPosWidth_10, (MR_Integer) 0))));
          MR_Word CellOffset_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgPosWidth_10, (MR_Integer) 1))));
          MR_Integer AOWordNum_14 = (MR_Integer) (ArgOnlyOffset_12);
          MR_Integer CellWordNum_15 = (MR_Integer) (CellOffset_13);
          MR_String Var_323;
          MR_String Var_333;
          MR_String Var_343;

          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% arg ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), CurArgNum_9, &Var_323);
          mercury__io__write_string_4_p_0(Stream_7, Var_323);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ": full word, offset ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), AOWordNum_14, &Var_333);
          mercury__io__write_string_4_p_0(Stream_7, Var_333);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "/");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), CellWordNum_15, &Var_343);
          mercury__io__write_string_4_p_0(Stream_7, Var_343);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DoubleWordKind_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), ArgPosWidth_10, (MR_Integer) 2))) & (MR_Integer) 3);
          MR_String KindStr_17;
          MR_Integer Var_77;
          MR_Integer Var_81;
          MR_Word ArgOnlyOffset_93 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_10, (MR_Integer) 0))));
          MR_Word CellOffset_94 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_10, (MR_Integer) 1))));
          MR_Integer AOWordNum_95 = (MR_Integer) (ArgOnlyOffset_93);
          MR_Integer CellWordNum_96 = (MR_Integer) (CellOffset_94);
          MR_String Var_354;
          MR_String Var_367;
          MR_String Var_377;
          MR_String Var_387;
          MR_String Var_397;

          switch (DoubleWordKind_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              KindStr_17 = (MR_String) "float";
              break;
            case (MR_Integer) 1:
              KindStr_17 = (MR_String) "int64";
              break;
            case (MR_Integer) 2:
              KindStr_17 = (MR_String) "uint64";
              break;
          }
          Var_77 = (MR_Integer) ((MR_Unsigned) AOWordNum_95 + (MR_Unsigned) 1);
          Var_81 = (MR_Integer) ((MR_Unsigned) CellWordNum_96 + (MR_Unsigned) 1);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% arg ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), CurArgNum_9, &Var_354);
          mercury__io__write_string_4_p_0(Stream_7, Var_354);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ": double word ");
          mercury__io__write_string_4_p_0(Stream_7, KindStr_17);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", offsets ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), AOWordNum_95, &Var_367);
          mercury__io__write_string_4_p_0(Stream_7, Var_367);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "/");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), CellWordNum_96, &Var_377);
          mercury__io__write_string_4_p_0(Stream_7, Var_377);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) " to ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), Var_77, &Var_387);
          mercury__io__write_string_4_p_0(Stream_7, Var_387);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "/");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), Var_81, &Var_397);
          mercury__io__write_string_4_p_0(Stream_7, Var_397);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Shift_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 3))));
              MR_Word NumBits_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 4))));
              MR_Word Mask_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 5))));
              MR_Word FillKind_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 6))) & (MR_Integer) 7);
              MR_Integer ShiftInt_23 = (MR_Integer) (Shift_18);
              MR_Integer NumBitsInt_24 = (MR_Integer) (NumBits_19);
              MR_Integer MaskInt_25 = (MR_Integer) (Mask_20);
              MR_String FillStr_26;
              MR_Word ArgOnlyOffset_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 1))));
              MR_Word CellOffset_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 2))));
              MR_Integer AOWordNum_99 = (MR_Integer) (ArgOnlyOffset_97);
              MR_Integer CellWordNum_100 = (MR_Integer) (CellOffset_98);
              MR_String Var_211;
              MR_String Var_224;
              MR_String Var_234;
              MR_String Var_244;
              MR_String Var_255;
              MR_String Var_266;

              FillStr_26 = hlds__hlds_out__hlds_out_module__fill_kind_to_string_1_f_0(FillKind_21);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% arg ");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), CurArgNum_9, &Var_211);
              mercury__io__write_string_4_p_0(Stream_7, Var_211);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ": partial ");
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "first");
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", offset ");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), AOWordNum_99, &Var_224);
              mercury__io__write_string_4_p_0(Stream_7, Var_224);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "/");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), CellWordNum_100, &Var_234);
              mercury__io__write_string_4_p_0(Stream_7, Var_234);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", shift ");
              mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), (MR_Integer) 2, ShiftInt_23, &Var_244);
              mercury__io__write_string_4_p_0(Stream_7, Var_244);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) " #bits ");
              mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), (MR_Integer) 2, NumBitsInt_24, &Var_255);
              mercury__io__write_string_4_p_0(Stream_7, Var_255);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) " mask ");
              mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), (MR_Integer) 2, MaskInt_25, &Var_266);
              mercury__io__write_string_4_p_0(Stream_7, Var_266);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) " ");
              mercury__io__write_string_4_p_0(Stream_7, FillStr_26);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Shift_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 3))));
              MR_Word NumBits_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 4))));
              MR_Word Mask_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 5))));
              MR_Word FillKind_108 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 6))) & (MR_Integer) 7);
              MR_Integer ShiftInt_110 = (MR_Integer) (Shift_105);
              MR_Integer NumBitsInt_111 = (MR_Integer) (NumBits_106);
              MR_Integer MaskInt_112 = (MR_Integer) (Mask_107);
              MR_String FillStr_113;
              MR_Word ArgOnlyOffset_134 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 1))));
              MR_Word CellOffset_135 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 2))));
              MR_Integer AOWordNum_136 = (MR_Integer) (ArgOnlyOffset_134);
              MR_Integer CellWordNum_137 = (MR_Integer) (CellOffset_135);
              MR_String Var_141;
              MR_String Var_154;
              MR_String Var_164;
              MR_String Var_174;
              MR_String Var_185;
              MR_String Var_196;

              FillStr_113 = hlds__hlds_out__hlds_out_module__fill_kind_to_string_1_f_0(FillKind_108);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% arg ");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), CurArgNum_9, &Var_141);
              mercury__io__write_string_4_p_0(Stream_7, Var_141);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ": partial ");
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "later");
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", offset ");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), AOWordNum_136, &Var_154);
              mercury__io__write_string_4_p_0(Stream_7, Var_154);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "/");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), CellWordNum_137, &Var_164);
              mercury__io__write_string_4_p_0(Stream_7, Var_164);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", shift ");
              mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), (MR_Integer) 2, ShiftInt_110, &Var_174);
              mercury__io__write_string_4_p_0(Stream_7, Var_174);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) " #bits ");
              mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), (MR_Integer) 2, NumBitsInt_111, &Var_185);
              mercury__io__write_string_4_p_0(Stream_7, Var_185);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) " mask ");
              mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), (MR_Integer) 2, MaskInt_112, &Var_196);
              mercury__io__write_string_4_p_0(Stream_7, Var_196);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) " ");
              mercury__io__write_string_4_p_0(Stream_7, FillStr_113);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgOnlyOffset_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 1))));
              MR_Word CellOffset_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 2))));
              MR_Integer AOWordNum_103 = (MR_Integer) (ArgOnlyOffset_101);
              MR_Integer CellWordNum_104 = (MR_Integer) (CellOffset_102);
              MR_String Var_281;
              MR_String Var_291;
              MR_String Var_301;

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% arg ");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), CurArgNum_9, &Var_281);
              mercury__io__write_string_4_p_0(Stream_7, Var_281);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ": none shifted, offset ");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), AOWordNum_103, &Var_291);
              mercury__io__write_string_4_p_0(Stream_7, Var_291);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "/");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), CellWordNum_104, &Var_301);
              mercury__io__write_string_4_p_0(Stream_7, Var_301);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
            }
            break;
        }
        break;
    }
  }
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_module__fill_kind_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_module_vector_common_6[0 + HeadVar__1_1]))->hlds__hlds_out__hlds_out_module__vector_common_type_6_0__vct_6_f_0;

    return HeadVar__2_2;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructors_7_p_0(
  MR_Word Stream_8,
  MR_Word TVarSet_9,
  MR_Integer Indent_10,
  MR_Word HeadCtor_11,
  MR_Word TailCtors_12)
{
  hlds__hlds_out__hlds_out_module__write_constructors_loop_8_p_0(Stream_8, TVarSet_9, Indent_10, (MR_String) "--->    ", HeadCtor_11, TailCtors_12);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructors_loop_8_p_0(
  MR_Word Stream_9,
  MR_Word TVarSet_10,
  MR_Integer Indent_11,
  MR_String ArrowOrSemi0_12,
  MR_Word HeadCtor_13,
  MR_Word TailCtors_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_9, Indent_11);
    mercury__io__write_string_4_p_0(Stream_9, ArrowOrSemi0_12);
    if ((TailCtors_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeExistConstraints_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor_13, (MR_Integer) 1))));
      MR_Word SymName_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor_13, (MR_Integer) 2))));
      MR_Word Args_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor_13, (MR_Integer) 3))));
      MR_Integer Arity_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadCtor_13, (MR_Integer) 4))));
      MR_String Name_39;
      MR_String NameStr_40;
      MR_String ExistConstraintsPrefix_42;
      MR_String ExistConstraintsSuffix_43;
      MR_String BracePrefix_44;
      MR_String BraceSuffix_45;
      MR_String Var_50;
      MR_Integer Var_52;

      Name_39 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_35);
      NameStr_40 = parse_tree__parse_tree_out_term__mercury_bracketed_atom_to_string_2_f_0((MR_Integer) 1, Name_39);
      Var_52 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 4);
      Var_50 = hlds__hlds_out__hlds_out_util__indent_string_1_f_0(Var_52);
      parse_tree__parse_tree_out__maybe_cons_exist_constraints_to_prefix_suffix_6_p_0(TVarSet_10, Var_50, (MR_String) "\n", MaybeExistConstraints_34, &ExistConstraintsPrefix_42, &ExistConstraintsSuffix_43);
      parse_tree__parse_tree_out__maybe_brace_for_name_prefix_suffix_4_p_0(Arity_37, Name_39, &BracePrefix_44, &BraceSuffix_45);
      mercury__io__write_string_4_p_0(Stream_9, ExistConstraintsPrefix_42);
      if ((Args_36 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__io__write_string_4_p_0(Stream_9, BracePrefix_44);
        mercury__io__write_string_4_p_0(Stream_9, NameStr_40);
        mercury__io__write_string_4_p_0(Stream_9, BraceSuffix_45);
      }
      else
      {
        MR_Word HeadArg_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_36, (MR_Integer) 0))));
        MR_Word TailArgs_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_36, (MR_Integer) 1))));
        MR_Word AnyFieldName_48;
        MR_Integer Var_61;
        MR_Integer Var_63;
        MR_Integer Var_65;
        MR_Word Arg_94;
        MR_Word Args_95;
        MR_Word MaybeFieldName_97;

        mercury__io__write_string_4_p_0(Stream_9, BracePrefix_44);
        mercury__io__write_string_4_p_0(Stream_9, NameStr_40);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(\n");
        Arg_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_36, (MR_Integer) 0))));
        Args_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_36, (MR_Integer) 1))));
        MaybeFieldName_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_94, (MR_Integer) 0))));
        if ((MaybeFieldName_97 == (MR_Word) ((MR_Unsigned) 0U)))
          AnyFieldName_48 = hlds__hlds_out__hlds_out_module__does_any_arg_have_a_field_name_1_f_0(Args_95);
        else
          AnyFieldName_48 = (MR_Integer) 1;
        Var_63 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 4);
        Var_61 = (MR_Integer) ((MR_Unsigned) Var_63 + (MR_Unsigned) 1);
        hlds__hlds_out__hlds_out_module__mercury_output_ctor_args_8_p_0(Stream_9, TVarSet_10, Var_61, AnyFieldName_48, HeadArg_46, TailArgs_47);
        Var_65 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 4);
        hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_9, Var_65);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
        mercury__io__write_string_4_p_0(Stream_9, BraceSuffix_45);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
      }
      mercury__io__write_string_4_p_0(Stream_9, BraceSuffix_45);
      mercury__io__write_string_4_p_0(Stream_9, ExistConstraintsSuffix_43);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    }
    else
    {
      MR_Word HeadTailCtor_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailCtors_14, (MR_Integer) 0))));
      MR_Word TailTailCtors_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailCtors_14, (MR_Integer) 1))));
      MR_Word next_value_of_HeadCtor_13;
      MR_Word next_value_of_TailCtors_14;

      hlds__hlds_out__hlds_out_module__write_ctor_6_p_0(Stream_9, TVarSet_10, Indent_11, HeadCtor_13);
      // direct tailcall eliminated
      ;
      next_value_of_HeadCtor_13 = HeadTailCtor_16;
      next_value_of_TailCtors_14 = TailTailCtors_17;
      ArrowOrSemi0_12 = (MR_String) ";       ";
      HeadCtor_13 = next_value_of_HeadCtor_13;
      TailCtors_14 = next_value_of_TailCtors_14;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_ctor_6_p_0(
  MR_Word Stream_7,
  MR_Word TVarSet_8,
  MR_Integer Indent_9,
  MR_Word Ctor_10)
{
  {
    MR_Word MaybeExistConstraints_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 1))));
    MR_Word SymName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 2))));
    MR_Word Args_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 3))));
    MR_Integer Arity_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 4))));
    MR_String Name_18;
    MR_String NameStr_19;
    MR_String ExistConstraintsPrefix_21;
    MR_String ExistConstraintsSuffix_22;
    MR_String BracePrefix_23;
    MR_String BraceSuffix_24;
    MR_String Var_31;
    MR_Integer Var_33;

    Name_18 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_14);
    NameStr_19 = parse_tree__parse_tree_out_term__mercury_bracketed_atom_to_string_2_f_0((MR_Integer) 1, Name_18);
    Var_33 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 4);
    Var_31 = hlds__hlds_out__hlds_out_util__indent_string_1_f_0(Var_33);
    parse_tree__parse_tree_out__maybe_cons_exist_constraints_to_prefix_suffix_6_p_0(TVarSet_8, Var_31, (MR_String) "\n", MaybeExistConstraints_13, &ExistConstraintsPrefix_21, &ExistConstraintsSuffix_22);
    parse_tree__parse_tree_out__maybe_brace_for_name_prefix_suffix_4_p_0(Arity_16, Name_18, &BracePrefix_23, &BraceSuffix_24);
    mercury__io__write_string_4_p_0(Stream_7, ExistConstraintsPrefix_21);
    if ((Args_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_4_p_0(Stream_7, BracePrefix_23);
      mercury__io__write_string_4_p_0(Stream_7, NameStr_19);
      mercury__io__write_string_4_p_0(Stream_7, BraceSuffix_24);
    }
    else
    {
      MR_Word HeadArg_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0))));
      MR_Word TailArgs_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1))));
      MR_Word AnyFieldName_27;
      MR_Integer Var_42;
      MR_Integer Var_44;
      MR_Integer Var_46;
      MR_Word Arg_75;
      MR_Word Args_76;
      MR_Word MaybeFieldName_78;

      mercury__io__write_string_4_p_0(Stream_7, BracePrefix_23);
      mercury__io__write_string_4_p_0(Stream_7, NameStr_19);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(\n");
      Arg_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0))));
      Args_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1))));
      MaybeFieldName_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_75, (MR_Integer) 0))));
      if ((MaybeFieldName_78 == (MR_Word) ((MR_Unsigned) 0U)))
        AnyFieldName_27 = hlds__hlds_out__hlds_out_module__does_any_arg_have_a_field_name_1_f_0(Args_76);
      else
        AnyFieldName_27 = (MR_Integer) 1;
      Var_44 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 4);
      Var_42 = (MR_Integer) ((MR_Unsigned) Var_44 + (MR_Unsigned) 1);
      hlds__hlds_out__hlds_out_module__mercury_output_ctor_args_8_p_0(Stream_7, TVarSet_8, Var_42, AnyFieldName_27, HeadArg_25, TailArgs_26);
      Var_46 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 4);
      hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_7, Var_46);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
      mercury__io__write_string_4_p_0(Stream_7, BraceSuffix_24);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
    }
    mercury__io__write_string_4_p_0(Stream_7, BraceSuffix_24);
    mercury__io__write_string_4_p_0(Stream_7, ExistConstraintsSuffix_22);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
  }
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_module__does_any_arg_have_a_field_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Arg_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Args_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MaybeFieldName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 0))));

      if ((MaybeFieldName_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word next_value_of_HeadVar__1_1 = Args_4;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
        HeadVar__2_2 = (MR_Integer) 1;
    }
    return HeadVar__2_2;
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__mercury_output_ctor_args_8_p_0(
  MR_Word Stream_9,
  MR_Word TVarSet_10,
  MR_Integer Indent_11,
  MR_Word AnyFieldName_12,
  MR_Word HeadArg_13,
  MR_Word TailArgs_14)
{
  while (MR_TRUE)
  {
    MR_Word MaybeFieldName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadArg_13, (MR_Integer) 0))));
    MR_Word Type_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadArg_13, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_9, Indent_11);
    switch (AnyFieldName_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        if ((MaybeFieldName_16 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Var_56;

          mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), (MR_Integer) 24, (MR_String) "", &Var_56);
          mercury__io__write_string_4_p_0(Stream_9, Var_56);
        }
        else
        {
          MR_Word FieldName_19;
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldName_16, (MR_Integer) 0))));
          MR_String Var_31;
          MR_String Var_47;

          FieldName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0))));
          Var_31 = mdbcomp__sym_name__unqualify_name_1_f_0(FieldName_19);
          mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[1]), (MR_Integer) 20, Var_31, &Var_47);
          mercury__io__write_string_4_p_0(Stream_9, Var_47);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) " :: ");
        }
        break;
    }
    parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(TVarSet_10, (MR_Integer) 0, Type_17, Stream_9);
    if ((TailArgs_14 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    else
    {
      MR_Word HeadTailArg_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailArgs_14, (MR_Integer) 0))));
      MR_Word TailTailArgs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailArgs_14, (MR_Integer) 1))));
      MR_Word next_value_of_HeadArg_13;
      MR_Word next_value_of_TailArgs_14;

      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadArg_13 = HeadTailArg_21;
      next_value_of_TailArgs_14 = TailTailArgs_22;
      HeadArg_13 = next_value_of_HeadArg_13;
      TailArgs_14 = next_value_of_TailArgs_14;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_module__foreign_type_assertions_to_simple_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_String_4;

    conv0_String_4 = hlds__hlds_out__hlds_out_module__foreign_type_assertion_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_String_4));
    return wrapper_arg_2;
  }
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_module__foreign_type_assertions_to_simple_string_1_f_0(
  MR_Word ForeignTypeAssertions_3)
{
  {
    MR_String String_4;
    MR_Word AssertionSet_5 = (MR_Word) (ForeignTypeAssertions_3);
    MR_Word Assertions_6;
    MR_Word AssertionStrs_7;
    MR_String Var_10;
    MR_String Var_11;

    Assertions_6 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), AssertionSet_5);
    AssertionStrs_7 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[13]), Assertions_6);
    Var_11 = mercury__string__join_list_2_f_0((MR_String) ", ", AssertionStrs_7);
    Var_10 = mercury__string__f_43_43_2_f_0(Var_11, (MR_String) "]");
    String_4 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_10);
    return String_4;
  }
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_canonical_to_simple_string_1_f_0(
  MR_Word MaybeCanonical_3)
{
  {
    MR_String String_4;

    if ((MaybeCanonical_3 == (MR_Word) ((MR_Unsigned) 0U)))
      String_4 = (MR_String) "canon";
    else
    {
      MR_Word NonCanonical_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCanonical_3, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) NonCanonical_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          String_4 = (MR_String) "noncanon_subtype";
          break;
        case (MR_Integer) 1:
          {
            MR_Word EqSymName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonCanonical_5, (MR_Integer) 0))));
            MR_Word CmpSymName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonCanonical_5, (MR_Integer) 1))));
            MR_String Var_22;
            MR_String Var_25;
            MR_String Var_33;
            MR_String Var_35;
            MR_String Var_36;

            Var_22 = mdbcomp__sym_name__sym_name_to_string_1_f_0(EqSymName_6);
            Var_25 = mdbcomp__sym_name__sym_name_to_string_1_f_0(CmpSymName_7);
            Var_33 = mercury__string__f_43_43_2_f_0(Var_25, (MR_String) ")");
            Var_35 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_33);
            Var_36 = mercury__string__f_43_43_2_f_0(Var_22, Var_35);
            String_4 = mercury__string__f_43_43_2_f_0((MR_String) "eq_cmp(", Var_36);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_17;
            MR_Word EqSymName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), NonCanonical_5, (MR_Integer) 0))));
            MR_String Var_30;

            Var_17 = mdbcomp__sym_name__sym_name_to_string_1_f_0(EqSymName_27);
            Var_30 = mercury__string__f_43_43_2_f_0(Var_17, (MR_String) ")");
            String_4 = mercury__string__f_43_43_2_f_0((MR_String) "eq(", Var_30);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), NonCanonical_5, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_12;
                MR_Word CmpSymName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), NonCanonical_5, (MR_Integer) 1))));
                MR_String Var_39;

                Var_12 = mdbcomp__sym_name__sym_name_to_string_1_f_0(CmpSymName_28);
                Var_39 = mercury__string__f_43_43_2_f_0(Var_12, (MR_String) ")");
                String_4 = mercury__string__f_43_43_2_f_0((MR_String) "cmp(", Var_39);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IsSolver_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), NonCanonical_5, (MR_Integer) 1))) & (MR_Integer) 1);

                switch (IsSolver_8) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    String_4 = (MR_String) "noncanon_abstract";
                    break;
                  case (MR_Integer) 1:
                    String_4 = (MR_String) "noncanon_abstract_solver";
                    break;
                }
              }
              break;
          }
          break;
      }
    }
    return String_4;
  }
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_module__unqual_cons_id_1_f_0(
  MR_Word ConsId_3)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word UnQualConsId_4;
    MR_Word SymName_5;
    MR_Integer Arity_6;
    MR_Word TypeCtor_7;

    if (succeeded)
    {
      SymName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_3, (MR_Integer) 1))));
      Arity_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_3, (MR_Integer) 2))));
      TypeCtor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_3, (MR_Integer) 3))));
      {
        MR_Word Var_8;
        MR_String Var_9;

        Var_9 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_5);
        {
          Var_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (Var_9));
        }
        {
          UnQualConsId_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), UnQualConsId_4, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), UnQualConsId_4, 1) = ((MR_Box) (Var_8));
          MR_hl_field(MR_mktag(3), UnQualConsId_4, 2) = ((MR_Box) (Arity_6));
          MR_hl_field(MR_mktag(3), UnQualConsId_4, 3) = ((MR_Box) (TypeCtor_7));
        }
      }
    }
    else
      UnQualConsId_4 = ConsId_3;
    return UnQualConsId_4;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_params_loop_6_p_0(
  MR_Word Stream_7,
  MR_Word TVarSet_8,
  MR_Word HeadParam_9,
  MR_Word TailParams_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_8, (MR_Integer) 0, HeadParam_9, Stream_7);
    if (!((TailParams_10 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadTailParam_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailParams_10, (MR_Integer) 0))));
      MR_Word TailTailParams_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailParams_10, (MR_Integer) 1))));
      MR_Word next_value_of_HeadParam_9;
      MR_Word next_value_of_TailParams_10;

      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
      // direct tailcall eliminated
      ;
      next_value_of_HeadParam_9 = HeadTailParam_12;
      next_value_of_TailParams_10 = TailTailParams_13;
      HeadParam_9 = next_value_of_HeadParam_9;
      TailParams_10 = next_value_of_TailParams_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_footer_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Word Module_8)
{
  {
    MR_Word ModuleName_10;
    MR_String Var_18;

    hlds__hlds_module__module_info_get_name_2_p_0(Module_8, &ModuleName_10);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_6, Indent_7);
    Var_18 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(ModuleName_10);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- end_module ");
    mercury__io__write_string_4_p_0(Stream_6, Var_18);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ".\n");
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_header_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Word Module_8)
{
  {
    MR_Word ModuleName_10;
    MR_String Var_21;

    hlds__hlds_module__module_info_get_name_2_p_0(Module_8, &ModuleName_10);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_6, Indent_7);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% vim: ts=2 sw=2 ft=mercury\n\n");
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_6, Indent_7);
    Var_21 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(ModuleName_10);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- module ");
    mercury__io__write_string_4_p_0(Stream_6, Var_21);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ".\n\n");
  }
}

void mercury__hlds__hlds_out__hlds_out_module__init(void)
{
}

void mercury__hlds__hlds_out__hlds_out_module__init_type_tables(void)
{
}

void mercury__hlds__hlds_out__hlds_out_module__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_out__hlds_out_module__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_out.hlds_out_module.
