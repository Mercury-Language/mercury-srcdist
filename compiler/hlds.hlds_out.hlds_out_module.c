/*
** Automatically generated from `hlds_out_module.m'
** by the Mercury compiler,
** version rotd-2018-04-16
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
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
#include "term_io.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_mode.mih"
#include "hlds.hlds_out.hlds_out_pred.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s {
  MR_bool hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded;
  MR_Word hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16;
  MR_Integer hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__PredIdInt_18;
  jmp_buf hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__commit_0;
  MR_String hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStr_36;
  MR_Integer hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredId_37;
  MR_Box hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__conv0_DumpPredIdStr_36;
};


static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_module__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0;

static const MR_VA_PseudoTypeInfo_Struct4 hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0;

static const MR_VA_PseudoTypeInfo_Struct4 hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0;

static const MR_VA_PseudoTypeInfo_Struct4 hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0;

static const MR_VA_PseudoTypeInfo_Struct4 hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0;

static const MR_VA_PseudoTypeInfo_Struct4 hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

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
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__919__1_8_p_0(
  MR_Word Lang_7,
  MR_Integer Limit_9,
  MR_Word HeadVar__3_102,
  MR_Word HeadVar__4_172,
  MR_Integer HeadVar__5_173,
  MR_Integer * HeadVar__6_174);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__913__1_8_p_0(
  MR_Word Lang_7,
  MR_Integer Limit_9,
  MR_Word HeadVar__3_91,
  MR_Word HeadVar__4_161,
  MR_Integer HeadVar__5_162,
  MR_Integer * HeadVar__6_163);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__908__1_8_p_0(
  MR_Word Lang_7,
  MR_Integer Limit_9,
  MR_Word HeadVar__3_80,
  MR_Word HeadVar__4_150,
  MR_Integer HeadVar__5_151,
  MR_Integer * HeadVar__6_152);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__902__1_8_p_0(
  MR_Word Lang_7,
  MR_Integer Limit_9,
  MR_Word HeadVar__3_69,
  MR_Word HeadVar__4_139,
  MR_Integer HeadVar__5_140,
  MR_Integer * HeadVar__6_141);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__897__1_8_p_0(
  MR_Word Lang_7,
  MR_Integer Limit_9,
  MR_Word HeadVar__3_58,
  MR_Word HeadVar__4_128,
  MR_Integer HeadVar__5_129,
  MR_Integer * HeadVar__6_130);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(
  MR_Word Lang_9,
  MR_Integer Limit_10,
  MR_Word WriteKey_11,
  MR_Word HeadVar__4_4,
  MR_Integer STATE_VARIABLE_N_0_17,
  MR_Integer * STATE_VARIABLE_N_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__892__1_8_p_0(
  MR_Word Lang_7,
  MR_Integer Limit_9,
  MR_Word HeadVar__3_47,
  MR_Word HeadVar__4_116,
  MR_Integer HeadVar__5_117,
  MR_Integer * HeadVar__6_118);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_8_p_0(
  MR_Word Lang_9,
  MR_Integer Limit_10,
  MR_Word WriteKey_11,
  MR_Word HeadVar__4_4,
  MR_Integer STATE_VARIABLE_N_0_19,
  MR_Integer * STATE_VARIABLE_N_20);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_promise__1477__1_4_p_0(
  MR_Word VarSet_16,
  MR_Word LambdaHeadVar__1_33);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dependency_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dependency_scc_5_p_0(
  MR_Integer Indent_6,
  MR_Word ModuleInfo_7,
  MR_Word SCC_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dep_graph_edge_6_p_0(
  MR_Integer Indent_7,
  MR_Word ModuleInfo_8,
  MR_Word _ParentProc_9,
  MR_Word ChildProc_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_95_103_114_97_112_104_95_101_100_103_101_95_95_91_51_93_95_48_6_p_0(
  MR_Integer Indent_7,
  MR_Word ModuleInfo_8,
  MR_Word ChildProc_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dep_graph_node_5_p_0(
  MR_Integer Indent_6,
  MR_Word ModuleInfo_7,
  MR_Word Proc_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dependency_proc_6_p_0(
  MR_Integer Indent_7,
  MR_String Prefix_8,
  MR_Word ModuleInfo_9,
  MR_Word PredProcId_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0(
  MR_Word Info_8,
  MR_Word Lang_9,
  MR_Integer Indent_10,
  MR_Word ModuleInfo_11,
  MR_Word HeadVar__5_5);

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
hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_args_4_p_0(
  MR_Word HeadConstArg_5,
  MR_Word TailConstArgs_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_mode_table_entry_5_p_0(
  MR_Integer Indent_6,
  MR_Word ModeId_7,
  MR_Word ModeDefn_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_name_nl_4_p_0(
  MR_Word Lang_5,
  MR_Word InstName_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_any_inst_4_p_0(
  MR_Word Lang_5,
  MR_Word AnyInstInfo_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_ground_inst_4_p_0(
  MR_Word Lang_5,
  MR_Word GroundInstInfo_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_merge_inst_4_p_0(
  MR_Word Lang_5,
  MR_Word MergeInstInfo_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_unify_inst_4_p_0(
  MR_Word Lang_5,
  MR_Word UnifyInstInfo_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_user_inst_4_p_0(
  MR_Integer Indent_5,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_params_5_p_0(
  MR_Word InstVar_6,
  MR_Word InstVars_7,
  MR_Word InstVarSet_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word InstanceDefn_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_methods_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Indent_2,
  MR_Integer STATE_VARIABLE_CurMethodNum_0_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_proc_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word HeadVar__3_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_module__discard_repn_from_ctor_arg_1_f_0(
  MR_Word CtorArgRepn_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_avail_entry_5_p_0(
  MR_Integer Indent_6,
  MR_Word ModuleName_7,
  MR_Word Entry_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_56_44_32_57_93_95_48_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_hlds_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(
  MR_Integer Indent_8,
  MR_Word ModuleInfo_9,
  MR_Word DependencyInfo_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_8_p_0(
  MR_Word Info_9,
  MR_Word DumpSpecPreds_10,
  MR_Word DumpSpecPredTypeNames_11,
  MR_Word Lang_12,
  MR_Integer Indent_13,
  MR_Word ModuleInfo_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word TableStructMap_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0(
  MR_Word ConstStructDb_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_mode_table_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_mode_table_4_p_0(
  MR_Integer Indent_5,
  MR_Word ModeTable_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0(
  MR_Word Lang_7,
  MR_Integer Indent_8,
  MR_Integer Limit_9,
  MR_Word InstTable_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instances_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instances_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word InstanceTable_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_classes_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_classes_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ClassTable_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_types_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word TypeTable_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_table_entries_5_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_116_121_112_101_95_98_111_100_121_95_95_91_50_93_95_48_7_p_0(
  MR_Word Info_8,
  MR_Word TypeBody_10,
  MR_Integer Indent_11,
  MR_Word TVarSet_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructor_repns_5_p_0(
  MR_Word TVarSet_6,
  MR_Integer Indent_7,
  MR_Word CtorRepns_8);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructor_repns_loop_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructor_repns_loop_7_p_0(
  MR_Word TVarSet_8,
  MR_Integer Indent_9,
  MR_String ArrowOrSemi0_10,
  MR_Word HeadCtorRepn_11,
  MR_Word TailCtorRepns_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_arg_widths_6_p_0(
  MR_Integer Indent_1,
  MR_Integer CurArgNum_2,
  MR_Integer STATE_VARIABLE_Offset_0_3,
  MR_Word HeadVar__4_4);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_module__all_args_are_full_word_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructors_5_p_0(
  MR_Word TVarSet_6,
  MR_Integer Indent_7,
  MR_Word Ctors_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructors_loop_7_p_0(
  MR_Word TVarSet_8,
  MR_Integer Indent_9,
  MR_String ArrowOrSemi0_10,
  MR_Word HeadCtor_11,
  MR_Word TailCtors_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_params_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_footer_4_p_0(
  MR_Integer Indent_5,
  MR_Word Module_6);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_1[5][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_2[25][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_3[1][4];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_4[1][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_5[1][5];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_6[9][8];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_7[10][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_8[5][11];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_9[5][6];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_10[1][10];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_11[2][9];




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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_2[25][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_1[2]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[0])),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[10]))
  },
  /* row 12 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_constructor_repns_loop_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[4])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[5])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[5])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_12)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_9[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_9[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_preds_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_9[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_9[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_9[4])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_9[4])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_6[9][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_7[10][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__tree234__pti_tree234_2__plain___vti_tuple_2parse_tree__prog_data__type_ctor_info_type_ctor_0mdbcomp__prim_data__type_ctor_info_special_pred_id_0__plain_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__tree234__pti_tree234_2__plain___vti_tuple_2parse_tree__prog_data__type_ctor_info_type_ctor_0mdbcomp__prim_data__type_ctor_info_special_pred_id_0__plain_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_8[5][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_9[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_10[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_11[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_module__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_module__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct4 hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0,
    (MR_PseudoTypeInfo) &hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct4 hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0,
    (MR_PseudoTypeInfo) &hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct4 hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0,
    (MR_PseudoTypeInfo) &hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct4 hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0,
    (MR_PseudoTypeInfo) &hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct4 hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0,
    (MR_PseudoTypeInfo) &hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_VA_TypeInfo_Struct2 hlds__hlds_out__hlds_out_module____vti_tuple_2parse_tree__prog_data__type_ctor_info_type_ctor_0mdbcomp__prim_data__type_ctor_info_special_pred_id_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__tree234__pti_tree234_2__plain___vti_tuple_2parse_tree__prog_data__type_ctor_info_type_ctor_0mdbcomp__prim_data__type_ctor_info_special_pred_id_0__plain_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_module____vti_tuple_2parse_tree__prog_data__type_ctor_info_type_ctor_0mdbcomp__prim_data__type_ctor_info_special_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_module__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__919__1_8_p_0(
  MR_Word Lang_7,
  MR_Integer Limit_9,
  MR_Word HeadVar__3_102,
  MR_Word HeadVar__4_172,
  MR_Integer HeadVar__5_173,
  MR_Integer * HeadVar__6_174)
{
  hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(Lang_7, Limit_9, HeadVar__3_102, HeadVar__4_172, HeadVar__5_173, HeadVar__6_174);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__913__1_8_p_0(
  MR_Word Lang_7,
  MR_Integer Limit_9,
  MR_Word HeadVar__3_91,
  MR_Word HeadVar__4_161,
  MR_Integer HeadVar__5_162,
  MR_Integer * HeadVar__6_163)
{
  hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(Lang_7, Limit_9, HeadVar__3_91, HeadVar__4_161, HeadVar__5_162, HeadVar__6_163);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__908__1_8_p_0(
  MR_Word Lang_7,
  MR_Integer Limit_9,
  MR_Word HeadVar__3_80,
  MR_Word HeadVar__4_150,
  MR_Integer HeadVar__5_151,
  MR_Integer * HeadVar__6_152)
{
  hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_8_p_0(Lang_7, Limit_9, HeadVar__3_80, HeadVar__4_150, HeadVar__5_151, HeadVar__6_152);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__902__1_8_p_0(
  MR_Word Lang_7,
  MR_Integer Limit_9,
  MR_Word HeadVar__3_69,
  MR_Word HeadVar__4_139,
  MR_Integer HeadVar__5_140,
  MR_Integer * HeadVar__6_141)
{
  hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_8_p_0(Lang_7, Limit_9, HeadVar__3_69, HeadVar__4_139, HeadVar__5_140, HeadVar__6_141);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__897__1_8_p_0(
  MR_Word Lang_7,
  MR_Integer Limit_9,
  MR_Word HeadVar__3_58,
  MR_Word HeadVar__4_128,
  MR_Integer HeadVar__5_129,
  MR_Integer * HeadVar__6_130)
{
  hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(Lang_7, Limit_9, HeadVar__3_58, HeadVar__4_128, HeadVar__5_129, HeadVar__6_130);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(
  MR_Word Lang_9,
  MR_Integer Limit_10,
  MR_Word WriteKey_11,
  MR_Word HeadVar__4_4,
  MR_Integer STATE_VARIABLE_N_0_17,
  MR_Integer * STATE_VARIABLE_N_18)
{
  {
    MR_bool succeeded;
    MR_Box Key_12 = (MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0));
    MR_Word MaybeInst_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1)));

    *STATE_VARIABLE_N_18 = (STATE_VARIABLE_N_0_17 + (MR_Integer) 1);
    succeeded = (*STATE_VARIABLE_N_18 <= Limit_10);
    if (succeeded)
    {
      MR_String Var_46;
      MR_Word Var_52;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv1_STATE_VARIABLE_IO_29_29;

      mercury__io__nl_2_p_0();
      mercury__io__write_string_3_p_0((MR_String) "Entry ");
      Var_52 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_4[0];
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_52, *STATE_VARIABLE_N_18, &Var_46);
      mercury__io__write_string_3_p_0(Var_46);
      mercury__io__write_string_3_p_0((MR_String) " key\n");
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), WriteKey_11, (MR_Integer) 1)));
      func_0(((MR_Box) WriteKey_11), ((MR_Box) (Lang_9)), Key_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_29_29);
      if ((MaybeInst_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_String Var_57;

        mercury__io__write_string_3_p_0((MR_String) "Entry ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_52, *STATE_VARIABLE_N_18, &Var_57);
        mercury__io__write_string_3_p_0(Var_57);
        mercury__io__write_string_3_p_0((MR_String) " value UNKNOWN\n");
      }
      else
      {
        MR_Word TypeCtorInfo_14_85;
        MR_Word Inst_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInst_13, (MR_Integer) 0)));
        MR_String Var_68;
        MR_Word InstTerm_81;
        MR_Word VarSet_82;

        mercury__io__write_string_3_p_0((MR_String) "Entry ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_52, *STATE_VARIABLE_N_18, &Var_68);
        mercury__io__write_string_3_p_0(Var_68);
        mercury__io__write_string_3_p_0((MR_String) " value:\n");
        InstTerm_81 = parse_tree__parse_tree_to_term__inst_to_term_2_f_0(Lang_9, Inst_16);
        TypeCtorInfo_14_85 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        mercury__varset__init_1_p_0(TypeCtorInfo_14_85, &VarSet_82);
        parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(TypeCtorInfo_14_85, VarSet_82, (MR_Integer) 0, InstTerm_81);
        mercury__io__nl_2_p_0();
      }
    }
    else
    {
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__892__1_8_p_0(
  MR_Word Lang_7,
  MR_Integer Limit_9,
  MR_Word HeadVar__3_47,
  MR_Word HeadVar__4_116,
  MR_Integer HeadVar__5_117,
  MR_Integer * HeadVar__6_118)
{
  hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_8_p_0(Lang_7, Limit_9, HeadVar__3_47, HeadVar__4_116, HeadVar__5_117, HeadVar__6_118);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_8_p_0(
  MR_Word Lang_9,
  MR_Integer Limit_10,
  MR_Word WriteKey_11,
  MR_Word HeadVar__4_4,
  MR_Integer STATE_VARIABLE_N_0_19,
  MR_Integer * STATE_VARIABLE_N_20)
{
  {
    MR_bool succeeded;
    MR_Box Key_12 = (MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0));
    MR_Word MaybeInstDet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1)));

    *STATE_VARIABLE_N_20 = (STATE_VARIABLE_N_0_19 + (MR_Integer) 1);
    succeeded = (*STATE_VARIABLE_N_20 <= Limit_10);
    if (succeeded)
    {
      MR_String Var_50;
      MR_Word Var_56;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv1_STATE_VARIABLE_IO_31_31;

      mercury__io__nl_2_p_0();
      mercury__io__write_string_3_p_0((MR_String) "Entry ");
      Var_56 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_4[0];
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_56, *STATE_VARIABLE_N_20, &Var_50);
      mercury__io__write_string_3_p_0(Var_50);
      mercury__io__write_string_3_p_0((MR_String) " key\n");
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), WriteKey_11, (MR_Integer) 1)));
      func_0(((MR_Box) WriteKey_11), ((MR_Box) (Lang_9)), Key_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_31_31);
      if ((MaybeInstDet_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_String Var_61;

        mercury__io__write_string_3_p_0((MR_String) "Entry ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_56, *STATE_VARIABLE_N_20, &Var_61);
        mercury__io__write_string_3_p_0(Var_61);
        mercury__io__write_string_3_p_0((MR_String) " value UNKNOWN\n");
      }
      else
      {
        MR_Word TypeCtorInfo_14_92;
        MR_Word Inst_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInstDet_13, (MR_Integer) 0)));
        MR_Word Detism_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInstDet_13, (MR_Integer) 1)));
        MR_String DetismStr_18;
        MR_String Var_72;
        MR_Word InstTerm_88;
        MR_Word VarSet_89;

        DetismStr_18 = parse_tree__prog_out__determinism_to_string_1_f_0(Detism_17);
        mercury__io__write_string_3_p_0((MR_String) "Entry ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_56, *STATE_VARIABLE_N_20, &Var_72);
        mercury__io__write_string_3_p_0(Var_72);
        mercury__io__write_string_3_p_0((MR_String) " value (");
        mercury__io__write_string_3_p_0(DetismStr_18);
        mercury__io__write_string_3_p_0((MR_String) "):\n");
        InstTerm_88 = parse_tree__parse_tree_to_term__inst_to_term_2_f_0(Lang_9, Inst_16);
        TypeCtorInfo_14_92 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        mercury__varset__init_1_p_0(TypeCtorInfo_14_92, &VarSet_89);
        parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(TypeCtorInfo_14_92, VarSet_89, (MR_Integer) 0, InstTerm_88);
        mercury__io__nl_2_p_0();
      }
    }
    else
    {
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_promise__1477__1_4_p_0(
  MR_Word VarSet_16,
  MR_Word LambdaHeadVar__1_33)
{
  {
    mercury__term_io__write_variable_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, LambdaHeadVar__1_33, VarSet_16);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dependency_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_dependency_proc_6_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dependency_scc_5_p_0(
  MR_Integer Indent_6,
  MR_Word ModuleInfo_7,
  MR_Word SCC_8)
{
  {
    MR_Word Var_15;
    MR_Box conv0_STATE_VARIABLE_IO_11;

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_6);
    mercury__io__write_string_3_p_0((MR_String) "% SCC\n");
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_11[1]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_dependency_scc_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Indent_6));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) ((MR_String) "  "));
      MR_hl_field(MR_mktag(0), Var_15, 5) = ((MR_Box) (ModuleInfo_7));
    }
    mercury__set__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_15, SCC_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dep_graph_edge_6_p_0(
  MR_Integer Indent_7,
  MR_Word ModuleInfo_8,
  MR_Word _ParentProc_9,
  MR_Word ChildProc_10)
{
  hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_95_103_114_97_112_104_95_101_100_103_101_95_95_91_51_93_95_48_6_p_0(Indent_7, ModuleInfo_8, ChildProc_10);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_95_103_114_97_112_104_95_101_100_103_101_95_95_91_51_93_95_48_6_p_0(
  MR_Integer Indent_7,
  MR_Word ModuleInfo_8,
  MR_Word ChildProc_10)
{
  {
    hlds__hlds_out__hlds_out_module__write_dependency_proc_6_p_0(Indent_7, (MR_String) "  to ", ModuleInfo_8, ChildProc_10);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dep_graph_node_5_p_0(
  MR_Integer Indent_6,
  MR_Word ModuleInfo_7,
  MR_Word Proc_8)
{
  {
    hlds__hlds_out__hlds_out_module__write_dependency_proc_6_p_0(Indent_6, (MR_String) "calls from ", ModuleInfo_7, Proc_8);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dependency_proc_6_p_0(
  MR_Integer Indent_7,
  MR_String Prefix_8,
  MR_Word ModuleInfo_9,
  MR_Word PredProcId_10)
{
  {
    MR_Word PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcId_10, (MR_Integer) 0)));
    MR_Integer ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredProcId_10, (MR_Integer) 1)));
    MR_Word Pieces_14;
    MR_String Desc_15;
    MR_Integer Var_26;
    MR_Integer Var_29;
    MR_String Var_39;
    MR_Word Var_45;
    MR_String Var_49;

    Pieces_14 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_9, (MR_Integer) 1, PredProcId_10);
    Desc_15 = parse_tree__error_util__error_pieces_to_string_1_f_0(Pieces_14);
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_7);
    Var_26 = hlds__hlds_pred__pred_id_to_int_1_f_0(PredId_12);
    Var_29 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_13);
    mercury__io__write_string_3_p_0((MR_String) "% ");
    mercury__io__write_string_3_p_0(Prefix_8);
    mercury__io__write_string_3_p_0((MR_String) "pred ");
    Var_45 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_4[0];
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_45, Var_26, &Var_39);
    mercury__io__write_string_3_p_0(Var_39);
    mercury__io__write_string_3_p_0((MR_String) " proc ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_45, Var_29, &Var_49);
    mercury__io__write_string_3_p_0(Var_49);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__io__write_string_3_p_0(Desc_15);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_1(
  void * env_ptr_arg)
{
  {
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s * env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_3(
  void * env_ptr_arg)
{
  {
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s * env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStr_36 = ((MR_String) (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__conv0_DumpPredIdStr_36);
    hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_2(env_ptr);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_2(
  void * env_ptr_arg)
{
  {
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s * env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = mercury__string__to_int_2_p_0((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStr_36, &(env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredId_37);
    if ((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
    {
      (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = ((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__PredIdInt_18 == (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredId_37);
      if ((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
        hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_4(
  void * env_ptr_arg)
{
  {
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s * env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &(env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__conv0_DumpPredIdStr_36, (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16, hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_3, env_ptr);
        }
        (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0(
  MR_Word Info_8,
  MR_Word Lang_9,
  MR_Integer Indent_10,
  MR_Word ModuleInfo_11,
  MR_Word HeadVar__5_5)
{
  {
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s env;

    {
      MR_Word PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0)));
      MR_Word PredInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 1)));
      MR_String DumpOptions_15 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
      MR_Word DumpPredNames_17;
      MR_String Var_38 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
      MR_Word Var_41;

      (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
      DumpPredNames_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)));
      Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4)));
      hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_12, &(env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__PredIdInt_18);
      {
        MR_String Var_19;
        MR_Word Var_20;

        (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16)) == (MR_mktag((MR_Integer) 1)));
        if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
        {
          Var_19 = ((MR_String) (MR_hl_field(MR_mktag(1), (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16, (MR_Integer) 0)));
          Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16, (MR_Integer) 1)));
        }
      }
      if (!((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded))
      {
        MR_String Var_21;
        MR_Word Var_22;

        (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) DumpPredNames_17)) == (MR_mktag((MR_Integer) 1)));
        if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
        {
          Var_21 = ((MR_String) (MR_hl_field(MR_mktag(1), DumpPredNames_17, (MR_Integer) 0)));
          Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), DumpPredNames_17, (MR_Integer) 1)));
        }
      }
      if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
      {
        hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_4(&env);
        if (!((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded))
        {
          MR_String PredName_25;

          PredName_25 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_13);
          (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (PredName_25)), DumpPredNames_17);
        }
        if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
          hlds__hlds_out__hlds_out_pred__write_pred_8_p_0(Info_8, Lang_9, ModuleInfo_11, Indent_10, PredId_12, PredInfo_13);
        else
        {
        }
      }
      else
      {
        (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = mercury__string__contains_char_2_p_0(DumpOptions_15, (MR_Char) 73);
        (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = !((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded);
        if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
          (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_13);
        if (!((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded))
        {
          {
            MR_Word ProcIds_26;
            MR_Integer ProcId_27;
            MR_Word Var_33;
            MR_Integer Var_52;

            (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = mercury__string__contains_char_2_p_0(DumpOptions_15, (MR_Char) 73);
            (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = !((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded);
            if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
            {
              (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(PredInfo_13);
              if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
              {
                ProcIds_26 = hlds__hlds_pred__pred_info_procids_1_f_0(PredInfo_13);
                hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&ProcId_27);
                (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) ProcIds_26)) == (MR_mktag((MR_Integer) 1)));
                if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
                {
                  Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ProcIds_26, (MR_Integer) 0)));
                  Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ProcIds_26, (MR_Integer) 1)));
                  (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = (ProcId_27 == Var_52);
                  if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
                    (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = (Var_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            }
          }
          if (!((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded))
          {
            (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = mercury__string__contains_char_2_p_0(DumpOptions_15, (MR_Char) 85);
            (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = !((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded);
            if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
              (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(PredInfo_13);
          }
        }
        if (!((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded))
          hlds__hlds_out__hlds_out_pred__write_pred_8_p_0(Info_8, Lang_9, ModuleInfo_11, Indent_10, PredId_12, PredInfo_13);
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
    MR_Word PredInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredIdInfo_6, (MR_Integer) 1)));
    MR_Word Origin_10;
    MR_Word _PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredIdInfo_6, (MR_Integer) 0)));
    MR_Word SpecialPredId_11;
    MR_Word TypeCtor_12;

    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_9, &Origin_10);
    succeeded = ((MR_tag((MR_Word) Origin_10)) == (MR_mktag((MR_Integer) 0)));
    if (succeeded)
    {
      SpecialPredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Origin_10, (MR_Integer) 0)));
      TypeCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Origin_10, (MR_Integer) 1)));
      if ((DumpSpecPredTypeNames_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Tuple Var_22;

        {
          Var_22 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (TypeCtor_12));
          MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (SpecialPredId_11));
        }
        mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_3[0], (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[10], ((MR_Box) (Var_22)), ((MR_Box) (PredIdInfo_6)), STATE_VARIABLE_SpecPredMap_0_18, STATE_VARIABLE_SpecPredMap_19);
      }
      else
      {
        MR_Word TypeCtorSymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_12, (MR_Integer) 0)));
        MR_String TypeCtorName_17;
        MR_Integer _TypeCtorArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_12, (MR_Integer) 1)));

        TypeCtorName_17 = mdbcomp__sym_name__unqualify_name_1_f_0(TypeCtorSymName_15);
        succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (TypeCtorName_17)), DumpSpecPredTypeNames_5);
        if (succeeded)
        {
          MR_Tuple Var_20;

          {
            Var_20 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (TypeCtor_12));
            MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (SpecialPredId_11));
          }
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_3[0], (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[10], ((MR_Box) (Var_20)), ((MR_Box) (PredIdInfo_6)), STATE_VARIABLE_SpecPredMap_0_18, STATE_VARIABLE_SpecPredMap_19);
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
    MR_Word PredIdA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word PredInfoA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word PredIdB_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word PredInfoB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
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
hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word TypeCtorInfo_87_87;
    MR_Word TypeCtorInfo_88_88;
    MR_Word PredProcId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word TableStructInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word ProcTableStructInfo_9;
    MR_Word Attributes_10;
    MR_Word TVarSet_12;
    MR_Integer NumInputs_14;
    MR_Integer NumOutputs_15;
    MR_Word InputSteps_16;
    MR_Word MaybeOutputSteps_17;
    MR_Word ArgInfos_18;
    MR_Word Strictness_21;
    MR_Word SizeLimit_22;
    MR_Word Stats_23;
    MR_Word AllowReset_24;
    MR_Word Var_44;
    MR_String Var_95;
    MR_Word Var_101;
    MR_String Var_105;
    MR_Word _ProcLabel_11;
    MR_Word _Context_13;
    MR_Word _EvalMethod_19;
    MR_Box conv0_STATE_VARIABLE_IO_45_45;

    mercury__io__nl_2_p_0();
    mercury__io__write_string_3_p_0((MR_String) "% table struct info for ");
    hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(ModuleInfo_5, PredProcId_6);
    mercury__io__nl_2_p_0();
    ProcTableStructInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), TableStructInfo_7, (MR_Integer) 0)));
    Attributes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), TableStructInfo_7, (MR_Integer) 1)));
    _ProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcTableStructInfo_9, (MR_Integer) 0)));
    TVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcTableStructInfo_9, (MR_Integer) 1)));
    _Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcTableStructInfo_9, (MR_Integer) 2)));
    NumInputs_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcTableStructInfo_9, (MR_Integer) 3)));
    NumOutputs_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcTableStructInfo_9, (MR_Integer) 4)));
    InputSteps_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcTableStructInfo_9, (MR_Integer) 5)));
    MaybeOutputSteps_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcTableStructInfo_9, (MR_Integer) 6)));
    ArgInfos_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcTableStructInfo_9, (MR_Integer) 7)));
    _EvalMethod_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcTableStructInfo_9, (MR_Integer) 8)));
    mercury__io__write_string_3_p_0((MR_String) "% #inputs: ");
    Var_101 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_4[0];
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_101, NumInputs_14, &Var_95);
    mercury__io__write_string_3_p_0(Var_95);
    mercury__io__write_string_3_p_0((MR_String) ", #outputs: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_101, NumOutputs_15, &Var_105);
    mercury__io__write_string_3_p_0(Var_105);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__write_string_3_p_0((MR_String) "% input steps:");
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[9]));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (TVarSet_12));
    }
    TypeCtorInfo_87_87 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0;
    TypeCtorInfo_88_88 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    mercury__list__foldl_4_p_2(TypeCtorInfo_87_87, TypeCtorInfo_88_88, Var_44, InputSteps_16, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_45_45);
    mercury__io__nl_2_p_0();
    if ((MaybeOutputSteps_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "% no output steps");
    }
    else
    {
      MR_Word OutputSteps_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeOutputSteps_17, (MR_Integer) 0)));
      MR_Box conv1_STATE_VARIABLE_IO_52_52;

      mercury__io__write_string_3_p_0((MR_String) "% output steps:");
      mercury__list__foldl_4_p_2(TypeCtorInfo_87_87, TypeCtorInfo_88_88, Var_44, OutputSteps_20, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_52_52);
      mercury__io__nl_2_p_0();
    }
    hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0(TVarSet_12, ArgInfos_18);
    Strictness_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attributes_10, (MR_Integer) 0)));
    SizeLimit_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attributes_10, (MR_Integer) 1)));
    Stats_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attributes_10, (MR_Integer) 2)));
    AllowReset_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attributes_10, (MR_Integer) 3)));
    switch (MR_tag((MR_Word) Strictness_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Strictness_21)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "% all strict\n");
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "% all fast_loose\n");
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgMethods_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Strictness_21, (MR_Integer) 0)));
          MR_Word HiddenArgMethod_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Strictness_21, (MR_Integer) 1)));

          mercury__io__write_string_3_p_0((MR_String) "% specified [");
          hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_p_0((MR_String) "", ArgMethods_25);
          mercury__io__write_string_3_p_0((MR_String) "]");
          switch (HiddenArgMethod_26) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) ", hidden args by addr\n");
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__io__write_string_3_p_0((MR_String) ", hidden args by value\n");
              }
              break;
          }
        }
        break;
    }
    if ((SizeLimit_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "% no size limit\n");
    }
    else
    {
      MR_Integer Limit_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), SizeLimit_22, (MR_Integer) 0)));
      MR_String Var_116;

      mercury__io__write_string_3_p_0((MR_String) "% size limit ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_101, Limit_27, &Var_116);
      mercury__io__write_string_3_p_0(Var_116);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    switch (Stats_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "% do not gather statistics\n");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "% gather statistics\n");
        }
        break;
    }
    switch (AllowReset_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "% allow reset\n");
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "% do not allow reset\n");
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word MaybeMethod_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word MaybeMethods_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_3_p_0(HeadVar__1_1);
      if ((MaybeMethod_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__io__write_string_3_p_0((MR_String) "output");
      }
      else
      {
        MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeMethod_10, (MR_Integer) 0)));

        switch (Var_29) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "addr");
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__io__write_string_3_p_0((MR_String) "promise_implied");
            }
            break;
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "value");
            }
            break;
        }
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = MaybeMethods_11;
      HeadVar__1_1 = (MR_String) ", ";
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ConstStruct_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ConsId_7;
    MR_Word ConstArgs_8;
    MR_Word Type_9;
    MR_Word Inst_10;
    MR_Word Var_30;
    MR_Word Var_39;
    MR_String Var_46;

    mercury__io__write_string_3_p_0((MR_String) "\nconst_struct ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_4[0], N_4, &Var_46);
    mercury__io__write_string_3_p_0(Var_46);
    mercury__io__write_string_3_p_0((MR_String) ":\n");
    ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_5, (MR_Integer) 0)));
    ConstArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_5, (MR_Integer) 1)));
    Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_5, (MR_Integer) 2)));
    Inst_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_5, (MR_Integer) 3)));
    parse_tree__mercury_to_mercury__mercury_output_cons_id_4_p_0((MR_Integer) 1, ConsId_7);
    if ((ConstArgs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__io__nl_2_p_0();
    else
    {
      MR_Word HeadConstArg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArgs_8, (MR_Integer) 0)));
      MR_Word TailConstArgs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArgs_8, (MR_Integer) 1)));

      mercury__io__write_string_3_p_0((MR_String) "(\n");
      hlds__hlds_out__hlds_out_module__write_const_struct_args_4_p_0(HeadConstArg_11, TailConstArgs_12);
      mercury__io__write_string_3_p_0((MR_String) ")\n");
    }
    mercury__io__write_string_3_p_0((MR_String) "type: ");
    Var_30 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(Var_30, (MR_Integer) 0, Type_9);
    mercury__io__nl_2_p_0();
    mercury__io__write_string_3_p_0((MR_String) "inst: ");
    Var_39 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_7_p_0(Inst_10, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, Var_39);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_args_4_p_0(
  MR_Word HeadConstArg_5,
  MR_Word TailConstArgs_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    mercury__io__write_string_3_p_0((MR_String) "    ");
    if (((MR_tag((MR_Word) HeadConstArg_5)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Integer N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadConstArg_5, (MR_Integer) 0)));
      MR_String Var_38;

      mercury__io__write_string_3_p_0((MR_String) "cs(");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_4[0], N_8, &Var_38);
      mercury__io__write_string_3_p_0(Var_38);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    else
    {
      MR_Word ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadConstArg_5, (MR_Integer) 0)));
      MR_Word Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadConstArg_5, (MR_Integer) 1)));
      MR_Word Var_21;

      parse_tree__mercury_to_mercury__mercury_output_cons_id_4_p_0((MR_Integer) 1, ConsId_9);
      mercury__io__write_string_3_p_0((MR_String) "\n        with type ");
      Var_21 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(Var_21, (MR_Integer) 0, Type_10);
    }
    if ((TailConstArgs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    else
    {
      MR_Word HeadTailConstArg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), TailConstArgs_6, (MR_Integer) 0)));
      MR_Word TailTailConstArgs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), TailConstArgs_6, (MR_Integer) 1)));
      MR_Word next_value_of_HeadConstArg_5;
      MR_Word next_value_of_TailConstArgs_6;

      mercury__io__write_string_3_p_0((MR_String) ",\n");
      // direct tailcall eliminated
      next_value_of_HeadConstArg_5 = HeadTailConstArg_11;
      next_value_of_TailConstArgs_6 = TailTailConstArgs_12;
      HeadConstArg_5 = next_value_of_HeadConstArg_5;
      TailConstArgs_6 = next_value_of_TailConstArgs_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_mode_table_entry_5_p_0(
  MR_Integer Indent_6,
  MR_Word ModeId_7,
  MR_Word ModeDefn_8)
{
  {
    MR_Word ModeName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModeId_7, (MR_Integer) 0)));
    MR_Word InstVarSet_12;
    MR_Word InstParams_13;
    MR_Word ModeBody_14;
    MR_Word Status_16;
    MR_Word EqvMode_19;
    MR_String StatusStr_20;
    MR_String Var_28;
    MR_Integer _ModeArity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ModeId_7, (MR_Integer) 1)));
    MR_Word _Context_15;

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_6);
    Var_28 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModeName_10);
    mercury__io__write_string_3_p_0((MR_String) "\n:- mode ");
    mercury__io__write_string_3_p_0(Var_28);
    InstVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModeDefn_8, (MR_Integer) 0)));
    InstParams_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModeDefn_8, (MR_Integer) 1)));
    ModeBody_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModeDefn_8, (MR_Integer) 2)));
    _Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModeDefn_8, (MR_Integer) 3)));
    Status_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModeDefn_8, (MR_Integer) 4)));
    if (!((InstParams_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word HeadInstParam_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstParams_13, (MR_Integer) 0)));
      MR_Word TailInstParams_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstParams_13, (MR_Integer) 1)));

      mercury__io__write_string_3_p_0((MR_String) "(");
      hlds__hlds_out__hlds_out_module__write_inst_params_5_p_0(HeadInstParam_17, TailInstParams_18, InstVarSet_12);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    EqvMode_19 = (MR_Word) ModeBody_14;
    mercury__io__write_string_3_p_0((MR_String) ":\n");
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_6);
    parse_tree__parse_tree_out_inst__mercury_output_mode_5_p_0((MR_Integer) 1, InstVarSet_12, EqvMode_19);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_6);
    StatusStr_20 = hlds__hlds_out__hlds_out_util__mode_import_status_to_string_1_f_0(Status_16);
    mercury__io__write_string_3_p_0((MR_String) "% status ");
    mercury__io__write_string_3_p_0(StatusStr_20);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_name_nl_4_p_0(
  MR_Word Lang_5,
  MR_Word InstName_6)
{
  {
    MR_Word TypeCtorInfo_15_15;
    MR_Word InstNameTerm_8;
    MR_Word VarSet_9;

    InstNameTerm_8 = parse_tree__parse_tree_to_term__inst_name_to_term_2_f_0(Lang_5, InstName_6);
    TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    mercury__varset__init_1_p_0(TypeCtorInfo_15_15, &VarSet_9);
    parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(TypeCtorInfo_15_15, VarSet_9, (MR_Integer) 0, InstNameTerm_8);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_any_inst_4_p_0(
  MR_Word Lang_5,
  MR_Word AnyInstInfo_6)
{
  {
    MR_Word TypeCtorInfo_15_50;
    MR_Word InstName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), AnyInstInfo_6, (MR_Integer) 0)));
    MR_Word Uniq_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), AnyInstInfo_6, (MR_Integer) 1)))) & (MR_Integer) 7);
    MR_Word Live_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), AnyInstInfo_6, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Real_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), AnyInstInfo_6, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word InstNameTerm_45;
    MR_Word VarSet_46;

    switch (Uniq_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          mercury__io__write_string_3_p_0((MR_String) "clobbered");
        }
        break;
      case (MR_Integer) 4:
        {
          mercury__io__write_string_3_p_0((MR_String) "mostly_clobbered");
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__io__write_string_3_p_0((MR_String) "mostly_unique ");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "shared ");
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "unique ");
        }
        break;
    }
    switch (Live_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "dead ");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "live ");
        }
        break;
    }
    switch (Real_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "fake unify\n");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "real unify\n");
        }
        break;
    }
    InstNameTerm_45 = parse_tree__parse_tree_to_term__inst_name_to_term_2_f_0(Lang_5, InstName_8);
    TypeCtorInfo_15_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    mercury__varset__init_1_p_0(TypeCtorInfo_15_50, &VarSet_46);
    parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(TypeCtorInfo_15_50, VarSet_46, (MR_Integer) 0, InstNameTerm_45);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_ground_inst_4_p_0(
  MR_Word Lang_5,
  MR_Word GroundInstInfo_6)
{
  {
    MR_Word TypeCtorInfo_15_50;
    MR_Word InstName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundInstInfo_6, (MR_Integer) 0)));
    MR_Word Uniq_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), GroundInstInfo_6, (MR_Integer) 1)))) & (MR_Integer) 7);
    MR_Word Live_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), GroundInstInfo_6, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Real_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), GroundInstInfo_6, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word InstNameTerm_45;
    MR_Word VarSet_46;

    switch (Uniq_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          mercury__io__write_string_3_p_0((MR_String) "clobbered");
        }
        break;
      case (MR_Integer) 4:
        {
          mercury__io__write_string_3_p_0((MR_String) "mostly_clobbered");
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__io__write_string_3_p_0((MR_String) "mostly_unique ");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "shared ");
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "unique ");
        }
        break;
    }
    switch (Live_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "dead ");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "live ");
        }
        break;
    }
    switch (Real_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "fake unify\n");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "real unify\n");
        }
        break;
    }
    InstNameTerm_45 = parse_tree__parse_tree_to_term__inst_name_to_term_2_f_0(Lang_5, InstName_8);
    TypeCtorInfo_15_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    mercury__varset__init_1_p_0(TypeCtorInfo_15_50, &VarSet_46);
    parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(TypeCtorInfo_15_50, VarSet_46, (MR_Integer) 0, InstNameTerm_45);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_merge_inst_4_p_0(
  MR_Word Lang_5,
  MR_Word MergeInstInfo_6)
{
  {
    MR_Word TypeCtorInfo_14_29;
    MR_Word TypeCtorInfo_14_39;
    MR_Word InstA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), MergeInstInfo_6, (MR_Integer) 0)));
    MR_Word InstB_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), MergeInstInfo_6, (MR_Integer) 1)));
    MR_Word InstTerm_25;
    MR_Word VarSet_26;
    MR_Word InstTerm_35;
    MR_Word VarSet_36;

    mercury__io__write_string_3_p_0((MR_String) "InstA: ");
    InstTerm_25 = parse_tree__parse_tree_to_term__inst_to_term_2_f_0(Lang_5, InstA_8);
    TypeCtorInfo_14_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    mercury__varset__init_1_p_0(TypeCtorInfo_14_29, &VarSet_26);
    parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(TypeCtorInfo_14_29, VarSet_26, (MR_Integer) 0, InstTerm_25);
    mercury__io__nl_2_p_0();
    mercury__io__write_string_3_p_0((MR_String) "InstB: ");
    InstTerm_35 = parse_tree__parse_tree_to_term__inst_to_term_2_f_0(Lang_5, InstB_9);
    TypeCtorInfo_14_39 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    mercury__varset__init_1_p_0(TypeCtorInfo_14_39, &VarSet_36);
    parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(TypeCtorInfo_14_39, VarSet_36, (MR_Integer) 0, InstTerm_35);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_unify_inst_4_p_0(
  MR_Word Lang_5,
  MR_Word UnifyInstInfo_6)
{
  {
    MR_Word TypeCtorInfo_14_39;
    MR_Word TypeCtorInfo_14_49;
    MR_Word Live_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyInstInfo_6, (MR_Integer) 0)));
    MR_Word Real_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyInstInfo_6, (MR_Integer) 1)));
    MR_Word InstA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyInstInfo_6, (MR_Integer) 2)));
    MR_Word InstB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyInstInfo_6, (MR_Integer) 3)));
    MR_Word InstTerm_35;
    MR_Word VarSet_36;
    MR_Word InstTerm_45;
    MR_Word VarSet_46;

    switch (Live_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "dead ");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "live ");
        }
        break;
    }
    switch (Real_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "fake unify\n");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "real unify\n");
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "InstA: ");
    InstTerm_35 = parse_tree__parse_tree_to_term__inst_to_term_2_f_0(Lang_5, InstA_10);
    TypeCtorInfo_14_39 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    mercury__varset__init_1_p_0(TypeCtorInfo_14_39, &VarSet_36);
    parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(TypeCtorInfo_14_39, VarSet_36, (MR_Integer) 0, InstTerm_35);
    mercury__io__nl_2_p_0();
    mercury__io__write_string_3_p_0((MR_String) "InstB: ");
    InstTerm_45 = parse_tree__parse_tree_to_term__inst_to_term_2_f_0(Lang_5, InstB_11);
    TypeCtorInfo_14_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    mercury__varset__init_1_p_0(TypeCtorInfo_14_49, &VarSet_46);
    parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(TypeCtorInfo_14_49, VarSet_46, (MR_Integer) 0, InstTerm_45);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_user_inst_4_p_0(
  MR_Integer Indent_5,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word InstId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word InstDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word InstName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstId_6, (MR_Integer) 0)));
    MR_Word InstVarSet_11;
    MR_Word InstParams_12;
    MR_Word InstBody_13;
    MR_Word Status_16;
    MR_String StatusStr_20;
    MR_String Var_28;
    MR_Integer _InstArity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), InstId_6, (MR_Integer) 1)));
    MR_Word _MaybeMatchingTypeCtors_14;
    MR_Word _Context_15;

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_5);
    Var_28 = mdbcomp__sym_name__sym_name_to_string_1_f_0(InstName_9);
    mercury__io__write_string_3_p_0((MR_String) "\n:- inst ");
    mercury__io__write_string_3_p_0(Var_28);
    InstVarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefn_7, (MR_Integer) 0)));
    InstParams_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefn_7, (MR_Integer) 1)));
    InstBody_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefn_7, (MR_Integer) 2)));
    _MaybeMatchingTypeCtors_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefn_7, (MR_Integer) 3)));
    _Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefn_7, (MR_Integer) 4)));
    Status_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefn_7, (MR_Integer) 5)));
    if (!((InstParams_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word HeadInstParam_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstParams_12, (MR_Integer) 0)));
      MR_Word TailInstParams_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstParams_12, (MR_Integer) 1)));

      mercury__io__write_string_3_p_0((MR_String) "(");
      hlds__hlds_out__hlds_out_module__write_inst_params_5_p_0(HeadInstParam_17, TailInstParams_18, InstVarSet_11);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    if ((InstBody_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) ": is abstract\n");
    }
    else
    {
      MR_Word EqvInst_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstBody_13, (MR_Integer) 0)));

      mercury__io__write_string_3_p_0((MR_String) ":\n");
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_5);
      parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0((MR_Integer) 1, InstVarSet_11, EqvInst_19);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_5);
    StatusStr_20 = hlds__hlds_out__hlds_out_util__inst_import_status_to_string_1_f_0(Status_16);
    mercury__io__write_string_3_p_0((MR_String) "% status ");
    mercury__io__write_string_3_p_0(StatusStr_20);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_params_5_p_0(
  MR_Word InstVar_6,
  MR_Word InstVars_7,
  MR_Word InstVarSet_8)
{
  while (MR_TRUE)
  {
    MR_String InstVarName_10;

    // setup for model_det tailcalls optimized into a loop
    mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, InstVarSet_8, InstVar_6, &InstVarName_10);
    mercury__io__write_string_3_p_0(InstVarName_10);
    if (!((InstVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word HeadInstVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstVars_7, (MR_Integer) 0)));
      MR_Word TailInstVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstVars_7, (MR_Integer) 1)));
      MR_Word next_value_of_InstVar_6;
      MR_Word next_value_of_InstVars_7;

      mercury__io__write_string_3_p_0((MR_String) ", ");
      // direct tailcall eliminated
      next_value_of_InstVar_6 = HeadInstVar_11;
      next_value_of_InstVars_7 = TailInstVars_12;
      InstVar_6 = next_value_of_InstVar_6;
      InstVars_7 = next_value_of_InstVars_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word InstanceDefn_8)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_90_90;
    MR_Word Types_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 1)));
    MR_Word OriginalTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 2)));
    MR_Word InstanceStatus_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 3)));
    MR_Word Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 4)));
    MR_Word Constraints_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 5)));
    MR_Word Body_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 6)));
    MR_Word MaybePredProcIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 7)));
    MR_Word VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 8)));
    MR_Word ProofMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 9)));
    MR_String FileName_20;
    MR_Integer LineNumber_21;
    MR_String DumpOptions_22;
    MR_Word VarNamePrint_23;
    MR_Word PrintTerm_24;
    MR_String Var_56;
    MR_Word Var_63;
    MR_Word _InstanceModule_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 0)));
    MR_String Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;

    mercury__io__nl_2_p_0();
    mercury__term__context_file_2_p_0(Context_14, &FileName_20);
    mercury__term__context_line_2_p_0(Context_14, &LineNumber_21);
    succeeded = (strcmp(FileName_20, (MR_String) "") == 0);
    if (!(succeeded))
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_7);
      mercury__io__write_string_3_p_0((MR_String) "% context: file \140");
      mercury__io__write_string_3_p_0(FileName_20);
      mercury__io__write_string_3_p_0((MR_String) "\', line ");
      mercury__io__write_int_3_p_0(LineNumber_21);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    DumpOptions_22 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
    Var_80 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
    Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
    Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)));
    Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4)));
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_22, (MR_Char) 118);
    if (succeeded)
      VarNamePrint_23 = (MR_Integer) 1;
    else
      VarNamePrint_23 = (MR_Integer) 0;
    {
      PrintTerm_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PrintTerm_24, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[8]));
      MR_hl_field(MR_mktag(0), PrintTerm_24, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_1));
      MR_hl_field(MR_mktag(0), PrintTerm_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), PrintTerm_24, 3) = ((MR_Box) (VarSet_18));
      MR_hl_field(MR_mktag(0), PrintTerm_24, 4) = ((MR_Box) (VarNamePrint_23));
    }
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "% Types: ");
    TypeCtorInfo_90_90 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    mercury__io__write_list_5_p_0(TypeCtorInfo_90_90, Types_11, (MR_String) ", ", PrintTerm_24);
    mercury__io__nl_2_p_0();
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "% Original types: ");
    mercury__io__write_list_5_p_0(TypeCtorInfo_90_90, OriginalTypes_12, (MR_String) ", ", PrintTerm_24);
    mercury__io__nl_2_p_0();
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "% Status: ");
    Var_56 = hlds__hlds_out__hlds_out_util__instance_import_status_to_string_1_f_0(InstanceStatus_13);
    mercury__io__write_string_3_p_0(Var_56);
    mercury__io__nl_2_p_0();
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "% Constraints: ");
    {
      Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[6]));
      MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (VarSet_18));
      MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) (VarNamePrint_23));
    }
    mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, Constraints_15, (MR_String) ", ", Var_63);
    mercury__io__nl_2_p_0();
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_7);
    if ((Body_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "% abstract");
    }
    else
    {
      MR_Word Methods_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_16, (MR_Integer) 0)));

      mercury__io__write_string_3_p_0((MR_String) "% Instance methods:\n");
      hlds__hlds_out__hlds_out_module__write_instance_methods_5_p_0(Methods_25, Indent_7, (MR_Integer) 1);
    }
    mercury__io__nl_2_p_0();
    if (!((MaybePredProcIds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word PredProcIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybePredProcIds_17, (MR_Integer) 0)));

      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_7);
      mercury__io__write_string_3_p_0((MR_String) "% Procedures: ");
      mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_1[3], ((MR_Box) (PredProcIds_26)));
      mercury__io__nl_2_p_0();
    }
    hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0(VarSet_18, VarNamePrint_23, Indent_7, ProofMap_19);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_methods_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Indent_2,
  MR_Integer STATE_VARIABLE_CurMethodNum_0_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Method_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Methods_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word PredOrFunc_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method_11, (MR_Integer) 0)));
      MR_Word MethodName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method_11, (MR_Integer) 1)));
      MR_Integer Arity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Method_11, (MR_Integer) 3)));
      MR_String Var_33;
      MR_String Var_36;
      MR_String Var_49;
      MR_Word Var_55;
      MR_String Var_65;
      MR_Word _Defn_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method_11, (MR_Integer) 2)));
      MR_Word _Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method_11, (MR_Integer) 4)));

      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_2);
      Var_33 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_16);
      Var_36 = mdbcomp__sym_name__sym_name_to_string_1_f_0(MethodName_17);
      mercury__io__write_string_3_p_0((MR_String) "% method ");
      Var_55 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_4[0];
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_55, STATE_VARIABLE_CurMethodNum_0_3, &Var_49);
      mercury__io__write_string_3_p_0(Var_49);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      mercury__io__write_string_3_p_0(Var_33);
      mercury__io__write_string_3_p_0((MR_String) " ");
      mercury__io__write_string_3_p_0(Var_36);
      mercury__io__write_string_3_p_0((MR_String) "/");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_55, Arity_19, &Var_65);
      mercury__io__write_string_3_p_0(Var_65);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      parse_tree__parse_tree_out__mercury_output_instance_method_3_p_0(Method_11);
      if (!((Methods_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        MR_Integer STATE_VARIABLE_CurMethodNum_43_43;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Integer next_value_of_STATE_VARIABLE_CurMethodNum_0_3;

        mercury__io__write_string_3_p_0((MR_String) ",\n");
        STATE_VARIABLE_CurMethodNum_43_43 = (STATE_VARIABLE_CurMethodNum_0_3 + (MR_Integer) 1);
        // direct tailcall eliminated
        next_value_of_HeadVar__1_1 = Methods_12;
        next_value_of_STATE_VARIABLE_CurMethodNum_0_3 = STATE_VARIABLE_CurMethodNum_43_43;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_CurMethodNum_0_3 = next_value_of_STATE_VARIABLE_CurMethodNum_0_3;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word ClassId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word InstanceDefns_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word Var_21;
    MR_Integer Var_23;

    mercury__io__nl_2_p_0();
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "% Instances for class ");
    parse_tree__prog_out__write_class_id_3_p_0(ClassId_8);
    mercury__io__write_string_3_p_0((MR_String) ":\n");
    Var_23 = (Indent_7 + (MR_Integer) 1);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[7]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (Var_23));
    }
    mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0, InstanceDefns_9, (MR_String) "\n", Var_21);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_proc_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word PredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer ProcId_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer PredInt_7;
    MR_Integer ProcInt_8;

    mercury__io__write_string_3_p_0((MR_String) "proc(pred_id:");
    hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_4, &PredInt_7);
    mercury__io__write_int_3_p_0(PredInt_7);
    mercury__io__write_string_3_p_0((MR_String) ", proc_id:");
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_5, &ProcInt_8);
    mercury__io__write_int_3_p_0(ProcInt_8);
    mercury__io__write_char_3_p_0((MR_Char) 41);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_int_3_p_0(((MR_Integer) wrapper_arg_1));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_int_3_p_0(((MR_Integer) wrapper_arg_1));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word TypeCtorInfo_23_23;
    MR_Word Domain_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Range_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word DomainList_7;
    MR_Word RangeList_8;

    mercury__io__write_char_3_p_0((MR_Char) 40);
    TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    DomainList_7 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_23_23, Domain_4);
    mercury__io__write_list_5_p_0(TypeCtorInfo_23_23, DomainList_7, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[23]);
    mercury__io__write_string_3_p_0((MR_String) " -> ");
    RangeList_8 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_23_23, Range_5);
    mercury__io__write_list_5_p_0(TypeCtorInfo_23_23, RangeList_8, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[24]);
    mercury__io__write_char_3_p_0((MR_Char) 41);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_class_proc_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Word ClassId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word ClassDefn_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word Constraints_12;
    MR_Word FunDeps_13;
    MR_Word Vars_15;
    MR_Word Interface_18;
    MR_Word VarSet_19;
    MR_Word Context_20;
    MR_String FileName_21;
    MR_Integer LineNumber_22;
    MR_String DumpOptions_23;
    MR_Word VarNamePrint_24;
    MR_Word Var_59;
    MR_Word Var_11;
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_String Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "% ");
    parse_tree__prog_out__write_class_id_3_p_0(ClassId_8);
    mercury__io__write_string_3_p_0((MR_String) ":\n");
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 0)));
    Constraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 1)));
    FunDeps_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 2)));
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 3)));
    Vars_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 4)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 5)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 6)));
    Interface_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 7)));
    VarSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 8)));
    Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 9)));
    mercury__term__context_file_2_p_0(Context_20, &FileName_21);
    mercury__term__context_line_2_p_0(Context_20, &LineNumber_22);
    succeeded = (strcmp(FileName_21, (MR_String) "") == 0);
    if (!(succeeded))
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_7);
      mercury__io__write_string_3_p_0((MR_String) "% context: file \140");
      mercury__io__write_string_3_p_0(FileName_21);
      mercury__io__write_string_3_p_0((MR_String) "\', line ");
      mercury__io__write_int_3_p_0(LineNumber_22);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    DumpOptions_23 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
    Var_69 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
    Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
    Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)));
    Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4)));
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_23, (MR_Char) 118);
    if (succeeded)
      VarNamePrint_24 = (MR_Integer) 1;
    else
      VarNamePrint_24 = (MR_Integer) 0;
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "% Vars: ");
    parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, VarSet_19, VarNamePrint_24, Vars_15);
    mercury__io__nl_2_p_0();
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "% Functional dependencies: ");
    mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0, FunDeps_13, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[21]);
    mercury__io__nl_2_p_0();
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "% Constraints: ");
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[6]));
      MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (VarSet_19));
      MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (VarNamePrint_24));
    }
    mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, Constraints_12, (MR_String) ", ", Var_59);
    mercury__io__nl_2_p_0();
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "% Class Methods: ");
    mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, Interface_18, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[22]);
    mercury__io__nl_2_p_0();
  }
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_module__discard_repn_from_ctor_arg_1_f_0(
  MR_Word CtorArgRepn_3)
{
  {
    MR_Word CtorArg_4;
    MR_Word Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArgRepn_3, (MR_Integer) 0)));
    MR_Word Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArgRepn_3, (MR_Integer) 1)));
    MR_Word Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArgRepn_3, (MR_Integer) 3)));
    MR_Word _Width_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArgRepn_3, (MR_Integer) 2)));

    {
      CtorArg_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CtorArg_4, 0) = ((MR_Box) (Name_5));
      MR_hl_field(MR_mktag(0), CtorArg_4, 1) = ((MR_Box) (Type_6));
      MR_hl_field(MR_mktag(0), CtorArg_4, 2) = ((MR_Box) (Context_8));
    }
    return CtorArg_4;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_avail_entry_5_p_0(
  MR_Integer Indent_6,
  MR_Word ModuleName_7,
  MR_Word Entry_8)
{
  {
    MR_Word Section_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Entry_8, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word ImportOrUse_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Entry_8, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Avails_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Entry_8, (MR_Integer) 1)));
    MR_String ImportOrUseDecl_13;

    switch (ImportOrUse_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ImportOrUseDecl_13 = (MR_String) ":- import_module ";
        break;
      case (MR_Integer) 1:
        ImportOrUseDecl_13 = (MR_String) ":- use_module ";
        break;
    }
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_6);
    mercury__io__write_string_3_p_0(ImportOrUseDecl_13);
    parse_tree__prog_out__write_module_name_3_p_0(ModuleName_7);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_6);
    mercury__io__write_string_3_p_0((MR_String) "% ");
    mercury__io__write_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0, ((MR_Box) (Section_10)));
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_1[1], ((MR_Box) (Avails_12)));
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_module__write_promise_13_p_0(
  MR_Word Info_14,
  MR_Word ModuleInfo_15,
  MR_Word VarSet_16,
  MR_Word TypeQual_17,
  MR_Word VarNamePrint_18,
  MR_Integer Indent_19,
  MR_Word PromiseType_20,
  MR_Word _PredId_21,
  MR_Word _PredOrFunc_22,
  MR_Word HeadVars_23,
  MR_Word Clause_24)
{
  hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_56_44_32_57_93_95_48_13_p_0(Info_14, ModuleInfo_15, VarSet_16, TypeQual_17, VarNamePrint_18, Indent_19, PromiseType_20, HeadVars_23, Clause_24);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_56_44_32_57_93_95_48_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_promise__1477__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_56_44_32_57_93_95_48_13_p_0(
  MR_Word Info_14,
  MR_Word ModuleInfo_15,
  MR_Word VarSet_16,
  MR_Word TypeQual_17,
  MR_Word VarNamePrint_18,
  MR_Integer Indent_19,
  MR_Word PromiseType_20,
  MR_Word HeadVars_23,
  MR_Word Clause_24)
{
  {
    MR_Word PrintVar_26;
    MR_Word Goal_30;
    MR_Integer Var_54;

    {
      PrintVar_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PrintVar_26, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[8]));
      MR_hl_field(MR_mktag(0), PrintVar_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_56_44_32_57_93_95_48_13_p_0_1));
      MR_hl_field(MR_mktag(0), PrintVar_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), PrintVar_26, 3) = ((MR_Box) (VarSet_16));
    }
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_19);
    switch (PromiseType_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) ":- all [");
          mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_1[0], HeadVars_23, (MR_String) ", ", PrintVar_26);
          mercury__io__write_string_3_p_0((MR_String) "]");
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_19);
          parse_tree__prog_out__write_promise_type_3_p_0(PromiseType_20);
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_19);
          mercury__io__write_string_3_p_0((MR_String) "(\n");
        }
        break;
      case (MR_Integer) 3:
        {
          mercury__io__write_string_3_p_0((MR_String) ":- promise all [");
          mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_1[0], HeadVars_23, (MR_String) ", ", PrintVar_26);
          mercury__io__write_string_3_p_0((MR_String) "] (\n");
        }
        break;
    }
    Goal_30 = hlds__hlds_clauses__clause_body_1_f_0(Clause_24);
    Var_54 = (Indent_19 + (MR_Integer) 1);
    hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(Info_14, ModuleInfo_15, VarSet_16, TypeQual_17, VarNamePrint_18, Var_54, (MR_String) ").\n", Goal_30);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_hlds_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_avail_entry_5_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_module__write_hlds_4_p_0(
  MR_Integer Indent_5,
  MR_Word ModuleInfo_6)
{
  {
    MR_bool succeeded;
    MR_Word Globals_8;
    MR_Word DumpPredIdStrs_9;
    MR_Word DumpPredNames_10;
    MR_Word DumpSpecPreds0_11;
    MR_Word DumpSpecPredTypeNames_12;
    MR_Word Info_13;
    MR_String DumpOptions0_15;
    MR_Word DumpSpecPreds_16;
    MR_String DumpOptions_19;
    MR_Word Name_83;
    MR_String Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_8);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 162, &DumpPredIdStrs_9);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 163, &DumpPredNames_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 165, &DumpSpecPreds0_11);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 166, &DumpSpecPredTypeNames_12);
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "% vim: ts=2 sw=2\n\n");
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_6, &Name_83);
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) ":- module ");
    parse_tree__prog_out__write_sym_name_3_p_0(Name_83);
    mercury__io__write_string_3_p_0((MR_String) ".\n\n");
    Info_13 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_8, (MR_Integer) 1);
    DumpOptions0_15 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 0)));
    Var_67 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 1)));
    Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 2)));
    Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 3)));
    Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 4)));
    if ((DumpSpecPredTypeNames_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      DumpSpecPreds_16 = DumpSpecPreds0_11;
      switch (DumpSpecPreds_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          DumpOptions_19 = DumpOptions0_15;
          break;
        case (MR_Integer) 1:
          {
            DumpOptions_19 = mercury__string__f_43_43_2_f_0(DumpOptions0_15, (MR_String) "U");
          }
          break;
      }
    }
    else
    {
      DumpSpecPreds_16 = (MR_Integer) 1;
      DumpOptions_19 = mercury__string__f_43_43_2_f_0(DumpOptions0_15, (MR_String) "U");
    }
    {
      MR_String Var_20;
      MR_Word Var_21;

      succeeded = ((MR_tag((MR_Word) DumpPredIdStrs_9)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_20 = ((MR_String) (MR_hl_field(MR_mktag(1), DumpPredIdStrs_9, (MR_Integer) 0)));
        Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), DumpPredIdStrs_9, (MR_Integer) 1)));
      }
    }
    if (!(succeeded))
    {
      {
        MR_String Var_22;
        MR_Word Var_23;

        succeeded = ((MR_tag((MR_Word) DumpPredNames_10)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_22 = ((MR_String) (MR_hl_field(MR_mktag(1), DumpPredNames_10, (MR_Integer) 0)));
          Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), DumpPredNames_10, (MR_Integer) 1)));
        }
      }
      if (!(succeeded))
        succeeded = (DumpSpecPreds_16 == (MR_Integer) 1);
    }
    if (!(succeeded))
    {
      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_19, (MR_Char) 73);
      if (succeeded)
      {
        MR_Word AvailModuleMap_24;
        MR_Word Var_45;
        MR_Box conv0_STATE_VARIABLE_IO_46_46;

        hlds__hlds_module__module_info_get_avail_module_map_2_p_0(ModuleInfo_6, &AvailModuleMap_24);
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[5]));
          MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_hlds_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (Indent_5));
        }
        mercury__map__foldl_4_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_45, AvailModuleMap_24, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_46_46);
      }
      else
      {
      }
      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_19, (MR_Char) 84);
      if (succeeded)
      {
        MR_Word TypeTable_25;
        MR_Word InstanceTable_26;
        MR_Word ClassTable_27;

        hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_6, &TypeTable_25);
        hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_6, &InstanceTable_26);
        hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_6, &ClassTable_27);
        hlds__hlds_out__hlds_out_module__write_types_5_p_0(Info_13, Indent_5, TypeTable_25);
        hlds__hlds_out__hlds_out_module__write_classes_5_p_0(Info_13, Indent_5, ClassTable_27);
        hlds__hlds_out__hlds_out_module__write_instances_5_p_0(Info_13, Indent_5, InstanceTable_26);
      }
      else
      {
      }
      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_19, (MR_Char) 77);
      if (succeeded)
      {
        MR_Word InstTable_28;
        MR_Word ModeTable_29;
        MR_Integer InstLimit_30;

        hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_6, &InstTable_28);
        hlds__hlds_module__module_info_get_mode_table_2_p_0(ModuleInfo_6, &ModeTable_29);
        libs__globals__lookup_int_option_3_p_0(Globals_8, (MR_Integer) 169, &InstLimit_30);
        hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0((MR_Integer) 1, Indent_5, InstLimit_30, InstTable_28);
        hlds__hlds_out__hlds_out_module__write_mode_table_4_p_0(Indent_5, ModeTable_29);
      }
      else
      {
      }
      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_19, (MR_Char) 90);
      if (succeeded)
      {
        MR_Word TableStructMap_31;

        hlds__hlds_module__module_info_get_table_struct_map_2_p_0(ModuleInfo_6, &TableStructMap_31);
        hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0(ModuleInfo_6, TableStructMap_31);
      }
      else
      {
      }
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_19, (MR_Char) 88);
    if (succeeded)
    {
      MR_Word ConstStructDb_32;

      hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_6, &ConstStructDb_32);
      hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0(ConstStructDb_32);
    }
    else
    {
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_19, (MR_Char) 120);
    if (!(succeeded))
      succeeded = (DumpSpecPreds_16 == (MR_Integer) 1);
    if (succeeded)
      hlds__hlds_out__hlds_out_module__write_preds_8_p_0(Info_13, DumpSpecPreds_16, DumpSpecPredTypeNames_12, (MR_Integer) 1, Indent_5, ModuleInfo_6);
    else
    {
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_19, (MR_Char) 79);
    if (succeeded)
    {
      MR_Word MaybeDependencyInfo_33;

      hlds__hlds_module__module_info_get_maybe_dependency_info_2_p_0(ModuleInfo_6, &MaybeDependencyInfo_33);
      if ((MaybeDependencyInfo_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_5);
        mercury__io__write_string_3_p_0((MR_String) "% No dependency info\n\n");
      }
      else
      {
        MR_Word DependencyInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeDependencyInfo_33, (MR_Integer) 0)));

        hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(Indent_5, ModuleInfo_6, DependencyInfo_34);
      }
    }
    else
    {
    }
    hlds__hlds_out__hlds_out_module__write_footer_4_p_0(Indent_5, ModuleInfo_6);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_dependency_scc_5_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_dep_graph_edge_6_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_dep_graph_node_5_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(
  MR_Integer Indent_8,
  MR_Word ModuleInfo_9,
  MR_Word DependencyInfo_10)
{
  {
    MR_Word TypeCtorInfo_27_27;
    MR_Word TypeCtorInfo_35_35;
    MR_Word Graph_12;
    MR_Word Ordering_13;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_25;
    MR_Box conv0_STATE_VARIABLE_IO_21_21;
    MR_Box conv1_STATE_VARIABLE_IO_15;

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "% Dependency graph\n\n");
    TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    Graph_12 = libs__dependency_graph__dependency_info_get_graph_1_f_0(TypeCtorInfo_27_27, DependencyInfo_10);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Indent_8));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (ModuleInfo_9));
    }
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Indent_8));
      MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (ModuleInfo_9));
    }
    TypeCtorInfo_35_35 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    mercury__digraph__traverse_5_p_0(TypeCtorInfo_27_27, TypeCtorInfo_35_35, Graph_12, Var_19, Var_20, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_21_21);
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "\n% Bottom up dependency sccs\n\n");
    Ordering_13 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0(TypeCtorInfo_27_27, DependencyInfo_10);
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[4]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_3));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Indent_8));
      MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (ModuleInfo_9));
    }
    mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_1[4], TypeCtorInfo_35_35, Var_25, Ordering_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_15);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_SpecPredMap_19;

    hlds__hlds_out__hlds_out_module__add_spec_preds_to_map_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_SpecPredMap_19);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_SpecPredMap_19));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Result_8;

    hlds__hlds_out__hlds_out_module__compare_in_name_order_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_Result_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_Result_8));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_8_p_0(
  MR_Word Info_9,
  MR_Word DumpSpecPreds_10,
  MR_Word DumpSpecPredTypeNames_11,
  MR_Word Lang_12,
  MR_Integer Indent_13,
  MR_Word ModuleInfo_14)
{
  {
    MR_Word PredTable_16;
    MR_Word PredIdsInfos_17;
    MR_Word PrintPredIdsInfos_20;
    MR_Word Var_31;
    MR_Box conv3_STATE_VARIABLE_IO_24;

    mercury__io__write_string_3_p_0((MR_String) "%-------- Predicates --------\n\n");
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_13);
    hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo_14, &PredTable_16);
    mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, PredTable_16, &PredIdsInfos_17);
    switch (DumpSpecPreds_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Globals_18;
          MR_Word NameOrder_19;

          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_14, &Globals_18);
          libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 164, &NameOrder_19);
          switch (NameOrder_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              PrintPredIdsInfos_20 = PredIdsInfos_17;
              break;
            case (MR_Integer) 1:
              {
                mercury__list__sort_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[10], (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[20], PredIdsInfos_17, &PrintPredIdsInfos_20);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_39_39 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_3[0];
          MR_Word TypeInfo_40_40 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[10];
          MR_Word SpecPredMap0_21;
          MR_Word SpecPredMap_22;
          MR_Word Var_28;
          MR_Box conv2_SpecPredMap_22;

          mercury__map__init_1_p_0(TypeInfo_39_39, TypeInfo_40_40, &SpecPredMap0_21);
          {
            Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[7]));
            MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_preds_8_p_0_2));
            MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (DumpSpecPredTypeNames_11));
          }
          mercury__list__foldl_4_p_0(TypeInfo_40_40, (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[11], Var_28, PredIdsInfos_17, ((MR_Box) (SpecPredMap0_21)), &conv2_SpecPredMap_22);
          SpecPredMap_22 = ((MR_Word) conv2_SpecPredMap_22);
          mercury__map__values_2_p_0(TypeInfo_39_39, TypeInfo_40_40, SpecPredMap_22, &PrintPredIdsInfos_20);
        }
        break;
    }
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_preds_8_p_0_3));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (Info_9));
      MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (Lang_12));
      MR_hl_field(MR_mktag(0), Var_31, 5) = ((MR_Box) (Indent_13));
      MR_hl_field(MR_mktag(0), Var_31, 6) = ((MR_Box) (ModuleInfo_14));
    }
    mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[10], (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_31, PrintPredIdsInfos_20, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_24);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word TableStructMap_6)
{
  {
    MR_Word TableStructs_8;
    MR_Word Var_13;
    MR_Box conv0_STATE_VARIABLE_IO_14_14;

    mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0, TableStructMap_6, &TableStructs_8);
    mercury__io__write_string_3_p_0((MR_String) "%-------- Table structs --------\n");
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[6]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (ModuleInfo_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[9], (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_13, TableStructs_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_14_14);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_const_struct_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0(
  MR_Word ConstStructDb_4)
{
  {
    MR_Word ConstStructs_6;
    MR_Box conv0_STATE_VARIABLE_IO_12_12;

    hlds__const_struct__const_struct_db_get_structs_2_p_0(ConstStructDb_4, &ConstStructs_6);
    mercury__io__write_string_3_p_0((MR_String) "%-------- Const structs --------\n\n");
    mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[8], (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[19], ConstStructs_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_12_12);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_mode_table_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_mode_table_entry_5_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_mode_table_4_p_0(
  MR_Integer Indent_5,
  MR_Word ModeTable_6)
{
  {
    MR_Word ModeDefns_8;
    MR_Word Var_15;
    MR_Box conv0_STATE_VARIABLE_IO_16_16;

    hlds__hlds_inst_mode__mode_table_get_mode_defns_2_p_0(ModeTable_6, &ModeDefns_8);
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "%-------- Modes --------\n");
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_5);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_mode_table_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Indent_5));
    }
    mercury__map__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_15, ModeDefns_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_16_16);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv16_HeadVar__6_174;

    hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__919__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv16_HeadVar__6_174);
    *wrapper_arg_3 = ((MR_Box) (conv16_HeadVar__6_174));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_inst_name_nl_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv13_HeadVar__6_163;

    hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__913__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv13_HeadVar__6_163);
    *wrapper_arg_3 = ((MR_Box) (conv13_HeadVar__6_163));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_inst_name_nl_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv10_HeadVar__6_152;

    hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__908__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv10_HeadVar__6_152);
    *wrapper_arg_3 = ((MR_Box) (conv10_HeadVar__6_152));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_key_any_inst_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv7_HeadVar__6_141;

    hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__902__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv7_HeadVar__6_141);
    *wrapper_arg_3 = ((MR_Box) (conv7_HeadVar__6_141));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_key_ground_inst_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv4_HeadVar__6_130;

    hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__897__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv4_HeadVar__6_130);
    *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__6_130));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_key_merge_inst_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_HeadVar__6_118;

    hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__892__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv1_HeadVar__6_118);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__6_118));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_key_unify_inst_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_user_inst_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0(
  MR_Word Lang_7,
  MR_Integer Indent_8,
  MR_Integer Limit_9,
  MR_Word InstTable_10)
{
  {
    MR_Word TypeCtorInfo_115_115;
    MR_Word TypeCtorInfo_127_127;
    MR_Word TypeInfo_171_171;
    MR_Word UserInstTable_12;
    MR_Word UnifyInstTable_13;
    MR_Word MergeInstTable_14;
    MR_Word GroundInstTable_15;
    MR_Word AnyInstTable_16;
    MR_Word SharedInstTable_17;
    MR_Word MostlyUniqInstTable_18;
    MR_Word UserInstPairs_19;
    MR_Word UnifyInstPairs_20;
    MR_Word MergeInstPairs_21;
    MR_Word GroundInstPairs_22;
    MR_Word AnyInstPairs_23;
    MR_Word SharedInstPairs_24;
    MR_Word MostlyUniqInstPairs_25;
    MR_Integer NumUnifyInsts_26;
    MR_Integer NumMergeInsts_27;
    MR_Integer NumGroundInsts_28;
    MR_Integer NumAnyInsts_29;
    MR_Integer NumSharedInsts_30;
    MR_Integer NumMostlyUniqInsts_31;
    MR_Word Var_40;
    MR_Word Var_44;
    MR_Word Var_55;
    MR_Word Var_66;
    MR_Word Var_77;
    MR_Word Var_88;
    MR_Word Var_99;
    MR_String Var_185;
    MR_Word Var_191;
    MR_String Var_196;
    MR_String Var_207;
    MR_String Var_218;
    MR_String Var_229;
    MR_String Var_240;
    MR_Box conv0_STATE_VARIABLE_IO_41_41;
    MR_Box conv3_NumUnifyInsts_26;
    MR_Box conv2_STATE_VARIABLE_IO_46_46;
    MR_Box conv6_NumMergeInsts_27;
    MR_Box conv5_STATE_VARIABLE_IO_57_57;
    MR_Box conv9_NumGroundInsts_28;
    MR_Box conv8_STATE_VARIABLE_IO_68_68;
    MR_Box conv12_NumAnyInsts_29;
    MR_Box conv11_STATE_VARIABLE_IO_79_79;
    MR_Box conv15_NumSharedInsts_30;
    MR_Box conv14_STATE_VARIABLE_IO_90_90;
    MR_Box conv18_NumMostlyUniqInsts_31;
    MR_Box conv17_STATE_VARIABLE_IO_101_101;

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "%-------- Insts --------\n");
    hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_10, &UserInstTable_12);
    hlds__hlds_inst_mode__inst_table_get_unify_insts_2_p_0(InstTable_10, &UnifyInstTable_13);
    hlds__hlds_inst_mode__inst_table_get_merge_insts_2_p_0(InstTable_10, &MergeInstTable_14);
    hlds__hlds_inst_mode__inst_table_get_ground_insts_2_p_0(InstTable_10, &GroundInstTable_15);
    hlds__hlds_inst_mode__inst_table_get_any_insts_2_p_0(InstTable_10, &AnyInstTable_16);
    hlds__hlds_inst_mode__inst_table_get_shared_insts_2_p_0(InstTable_10, &SharedInstTable_17);
    hlds__hlds_inst_mode__inst_table_get_mostly_uniq_insts_2_p_0(InstTable_10, &MostlyUniqInstTable_18);
    mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0, UserInstTable_12, &UserInstPairs_19);
    hlds__hlds_inst_mode__unify_insts_to_sorted_pairs_2_p_0(UnifyInstTable_13, &UnifyInstPairs_20);
    hlds__hlds_inst_mode__merge_insts_to_sorted_pairs_2_p_0(MergeInstTable_14, &MergeInstPairs_21);
    hlds__hlds_inst_mode__ground_insts_to_sorted_pairs_2_p_0(GroundInstTable_15, &GroundInstPairs_22);
    hlds__hlds_inst_mode__any_insts_to_sorted_pairs_2_p_0(AnyInstTable_16, &AnyInstPairs_23);
    hlds__hlds_inst_mode__shared_insts_to_sorted_pairs_2_p_0(SharedInstTable_17, &SharedInstPairs_24);
    hlds__hlds_inst_mode__mostly_uniq_insts_to_sorted_pairs_2_p_0(MostlyUniqInstTable_18, &MostlyUniqInstPairs_25);
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "%-------- User defined insts --------\n");
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (Indent_8));
    }
    TypeCtorInfo_115_115 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[2], TypeCtorInfo_115_115, Var_40, UserInstPairs_19, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_41_41);
    mercury__io__write_string_3_p_0((MR_String) "%-------- Unify insts --------\n");
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_3));
      MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (Lang_7));
      MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (Limit_9));
      MR_hl_field(MR_mktag(0), Var_44, 5) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[13]));
    }
    TypeCtorInfo_127_127 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    mercury__list__foldl2_6_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[3], TypeCtorInfo_127_127, TypeCtorInfo_115_115, Var_44, UnifyInstPairs_20, ((MR_Box) ((MR_Integer) 0)), &conv3_NumUnifyInsts_26, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_46_46);
    NumUnifyInsts_26 = ((MR_Integer) conv3_NumUnifyInsts_26);
    mercury__io__write_string_3_p_0((MR_String) "\nTotal number of unify insts: ");
    Var_191 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_4[0];
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_191, NumUnifyInsts_26, &Var_185);
    mercury__io__write_string_3_p_0(Var_185);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__write_string_3_p_0((MR_String) "%-------- Merge insts --------\n");
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_5));
      MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Lang_7));
      MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) (Limit_9));
      MR_hl_field(MR_mktag(0), Var_55, 5) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[14]));
    }
    mercury__list__foldl2_6_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[4], TypeCtorInfo_127_127, TypeCtorInfo_115_115, Var_55, MergeInstPairs_21, ((MR_Box) ((MR_Integer) 0)), &conv6_NumMergeInsts_27, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_57_57);
    NumMergeInsts_27 = ((MR_Integer) conv6_NumMergeInsts_27);
    mercury__io__write_string_3_p_0((MR_String) "\nTotal number of merge insts: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_191, NumMergeInsts_27, &Var_196);
    mercury__io__write_string_3_p_0(Var_196);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__write_string_3_p_0((MR_String) "%-------- Ground insts --------\n");
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_8[2]));
      MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_7));
      MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (Lang_7));
      MR_hl_field(MR_mktag(0), Var_66, 4) = ((MR_Box) (Limit_9));
      MR_hl_field(MR_mktag(0), Var_66, 5) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[15]));
    }
    mercury__list__foldl2_6_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[5], TypeCtorInfo_127_127, TypeCtorInfo_115_115, Var_66, GroundInstPairs_22, ((MR_Box) ((MR_Integer) 0)), &conv9_NumGroundInsts_28, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_68_68);
    NumGroundInsts_28 = ((MR_Integer) conv9_NumGroundInsts_28);
    mercury__io__write_string_3_p_0((MR_String) "\nTotal number of ground insts: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_191, NumGroundInsts_28, &Var_207);
    mercury__io__write_string_3_p_0(Var_207);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__write_string_3_p_0((MR_String) "%-------- Any insts --------\n");
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_8[3]));
      MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_9));
      MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (Lang_7));
      MR_hl_field(MR_mktag(0), Var_77, 4) = ((MR_Box) (Limit_9));
      MR_hl_field(MR_mktag(0), Var_77, 5) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[16]));
    }
    mercury__list__foldl2_6_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[6], TypeCtorInfo_127_127, TypeCtorInfo_115_115, Var_77, AnyInstPairs_23, ((MR_Box) ((MR_Integer) 0)), &conv12_NumAnyInsts_29, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_79_79);
    NumAnyInsts_29 = ((MR_Integer) conv12_NumAnyInsts_29);
    mercury__io__write_string_3_p_0((MR_String) "\nTotal number of any insts: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_191, NumAnyInsts_29, &Var_218);
    mercury__io__write_string_3_p_0(Var_218);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__write_string_3_p_0((MR_String) "%-------- Shared insts --------\n");
    {
      Var_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_8[4]));
      MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_11));
      MR_hl_field(MR_mktag(0), Var_88, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_88, 3) = ((MR_Box) (Lang_7));
      MR_hl_field(MR_mktag(0), Var_88, 4) = ((MR_Box) (Limit_9));
      MR_hl_field(MR_mktag(0), Var_88, 5) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[17]));
    }
    TypeInfo_171_171 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[7];
    mercury__list__foldl2_6_p_2(TypeInfo_171_171, TypeCtorInfo_127_127, TypeCtorInfo_115_115, Var_88, SharedInstPairs_24, ((MR_Box) ((MR_Integer) 0)), &conv15_NumSharedInsts_30, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_90_90);
    NumSharedInsts_30 = ((MR_Integer) conv15_NumSharedInsts_30);
    mercury__io__write_string_3_p_0((MR_String) "\nTotal number of shared insts: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_191, NumSharedInsts_30, &Var_229);
    mercury__io__write_string_3_p_0(Var_229);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__write_string_3_p_0((MR_String) "%-------- MostlyUniq insts --------\n");
    {
      Var_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_8[4]));
      MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_13));
      MR_hl_field(MR_mktag(0), Var_99, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_99, 3) = ((MR_Box) (Lang_7));
      MR_hl_field(MR_mktag(0), Var_99, 4) = ((MR_Box) (Limit_9));
      MR_hl_field(MR_mktag(0), Var_99, 5) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[18]));
    }
    mercury__list__foldl2_6_p_2(TypeInfo_171_171, TypeCtorInfo_127_127, TypeCtorInfo_115_115, Var_99, MostlyUniqInstPairs_25, ((MR_Box) ((MR_Integer) 0)), &conv18_NumMostlyUniqInsts_31, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_101_101);
    NumMostlyUniqInsts_31 = ((MR_Integer) conv18_NumMostlyUniqInsts_31);
    mercury__io__write_string_3_p_0((MR_String) "\nTotal number of mostly uniq insts: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_191, NumMostlyUniqInsts_31, &Var_240);
    mercury__io__write_string_3_p_0(Var_240);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instances_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instances_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word InstanceTable_8)
{
  {
    MR_Word InstanceTableList_10;
    MR_Word Var_17;

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "%-------- Instances --------\n");
    mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_1[2], InstanceTable_8, &InstanceTableList_10);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_instances_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (Indent_7));
    }
    mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[1], InstanceTableList_10, (MR_String) "\n\n", Var_17);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_classes_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_classes_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ClassTable_8)
{
  {
    MR_Word ClassTableList_10;
    MR_Word Var_17;

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "%-------- Classes --------\n");
    mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0, ClassTable_8, &ClassTableList_10);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_classes_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (Indent_7));
    }
    mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[0], ClassTableList_10, (MR_String) "\n", Var_17);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_types_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word TypeTable_8)
{
  {
    MR_Word TypeAssocList_10;

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "%-------- Types --------\n");
    hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_8, &TypeAssocList_10);
    hlds__hlds_out__hlds_out_module__write_type_table_entries_5_p_0(Info_6, Indent_7, TypeAssocList_10);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_table_entries_5_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word TypeCtor_13;
      MR_Word TypeDefn_14;
      MR_Word Types_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word TVarSet_17;
      MR_Word TypeParams_18;
      MR_Word TypeBody_19;
      MR_Word TypeStatus_20;
      MR_Word Context_21;
      MR_String DumpOptions_22;
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer Var_53;
      MR_String Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word next_value_of_HeadVar__3_3;

      TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 0)));
      TypeDefn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 1)));
      hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_14, &TVarSet_17);
      hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_14, &TypeParams_18);
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_14, &TypeBody_19);
      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_14, &TypeStatus_20);
      hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_14, &Context_21);
      mercury__io__write_char_3_p_0((MR_Char) 10);
      DumpOptions_22 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 0)));
      Var_57 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 1)));
      Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 2)));
      Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 3)));
      Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 4)));
      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_22, (MR_Char) 99);
      if (succeeded)
      {
        MR_String FileName_23;
        MR_Integer LineNumber_24;

        mercury__term__context_file_2_p_0(Context_21, &FileName_23);
        mercury__term__context_line_2_p_0(Context_21, &LineNumber_24);
        succeeded = (strcmp(FileName_23, (MR_String) "") == 0);
        if (!(succeeded))
        {
          MR_String Var_41;

          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_2);
          mercury__io__write_string_3_p_0((MR_String) "% context: file \140");
          mercury__io__write_string_3_p_0(FileName_23);
          mercury__io__write_string_3_p_0((MR_String) "\', line ");
          mercury__io__write_int_3_p_0(LineNumber_24);
          mercury__io__write_string_3_p_0((MR_String) ", status ");
          Var_41 = hlds__hlds_out__hlds_out_util__type_import_status_to_string_1_f_0(TypeStatus_20);
          mercury__io__write_string_3_p_0(Var_41);
          mercury__io__write_char_3_p_0((MR_Char) 10);
        }
      }
      else
      {
      }
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_2);
      if (((((MR_tag((MR_Word) TypeBody_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_19, (MR_Integer) 0)))) == (MR_Integer) 1))))
      {
        MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_19, (MR_Integer) 1)));

        succeeded = (Var_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      }
      else
      if (((((MR_tag((MR_Word) TypeBody_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_19, (MR_Integer) 0)))) == (MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        mercury__io__write_string_3_p_0((MR_String) ":- solver type ");
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) ":- type ");
      }
      parse_tree__prog_out__write_type_name_3_p_0(TypeCtor_13);
      if (!((TypeParams_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        MR_Word Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeParams_18, (MR_Integer) 1)));
        MR_Word Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeParams_18, (MR_Integer) 0)));

        if ((Var_94 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          mercury__io__write_string_3_p_0((MR_String) "(");
          parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, TVarSet_17, (MR_Integer) 0, Var_95);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        else
        {
          MR_Word P_101;
          MR_Word Ps_102;

          mercury__io__write_string_3_p_0((MR_String) "(");
          parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, TVarSet_17, (MR_Integer) 0, Var_95);
          P_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_94, (MR_Integer) 0)));
          Ps_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_94, (MR_Integer) 1)));
          mercury__io__write_string_3_p_0((MR_String) ", ");
          parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, TVarSet_17, (MR_Integer) 0, P_101);
          hlds__hlds_out__hlds_out_module__write_type_params_loop_4_p_0(TVarSet_17, Ps_102);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
      Var_53 = (Indent_2 + (MR_Integer) 1);
      hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_116_121_112_101_95_98_111_100_121_95_95_91_50_93_95_48_7_p_0(Info_1, TypeBody_19, Var_53, TVarSet_17);
      // direct tailcall eliminated
      next_value_of_HeadVar__3_3 = Types_15;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_116_121_112_101_95_98_111_100_121_95_95_91_50_93_95_48_7_p_0(
  MR_Word Info_8,
  MR_Word TypeBody_10,
  MR_Integer Indent_11,
  MR_Word TVarSet_12)
{
  switch (MR_tag((MR_Word) TypeBody_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__io__write_string_3_p_0((MR_String) " == \044foreign_type.\n");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Ctors_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_10, (MR_Integer) 0)));
        MR_Word MaybeUserEqComp_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_10, (MR_Integer) 1)));
        MR_Word MaybeRepn_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_10, (MR_Integer) 2)));
        MR_Word Foreign_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_10, (MR_Integer) 3)));
        MR_Word MaybeSolverTypeDetails_18;
        MR_Word MercInfo_19;
        MR_String Var_132;
        MR_String Var_133;
        MR_Word Var_134;
        MR_Word Var_135;

        mercury__io__nl_2_p_0();
        MaybeSolverTypeDetails_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        Var_132 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
        Var_133 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
        Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
        Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)));
        MercInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4)));
        if ((MaybeRepn_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          hlds__hlds_out__hlds_out_module__write_constructors_5_p_0(TVarSet_12, Indent_11, Ctors_14);
          parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0(MercInfo_19, TVarSet_12, MaybeSolverTypeDetails_18, MaybeUserEqComp_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_11);
          mercury__io__write_string_3_p_0((MR_String) "% no type representation information yet\n");
        }
        else
        {
          MR_Word Repn_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeRepn_16, (MR_Integer) 0)));
          MR_Word CtorRepns_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_21, (MR_Integer) 0)));
          MR_Word CheaperTagTest_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_21, (MR_Integer) 2)));
          MR_Word DuTypeKind_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_21, (MR_Integer) 3)));
          MR_Word MaybeDirectArgCtors_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_21, (MR_Integer) 4)));
          MR_Word CtorRepnMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_21, (MR_Integer) 1)));

          hlds__hlds_out__hlds_out_module__write_constructor_repns_5_p_0(TVarSet_12, Indent_11, CtorRepns_22);
          if (!((CheaperTagTest_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
          {
            MR_Word TypeCtorInfo_140_140;
            MR_Word ExpConsId_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), CheaperTagTest_24, (MR_Integer) 0)));
            MR_Word ExpConsTag_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), CheaperTagTest_24, (MR_Integer) 1)));
            MR_Word CheapConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), CheaperTagTest_24, (MR_Integer) 2)));
            MR_Word CheapConsTag_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), CheaperTagTest_24, (MR_Integer) 3)));
            MR_String Var_70;
            MR_String Var_79;

            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_11);
            mercury__io__write_string_3_p_0((MR_String) "% cheaper tag test:\n");
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_11);
            mercury__io__write_string_3_p_0((MR_String) "%   from ");
            Var_70 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ExpConsId_26);
            mercury__io__write_string_3_p_0(Var_70);
            mercury__io__write_string_3_p_0((MR_String) " tag ");
            TypeCtorInfo_140_140 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
            mercury__io__print_3_p_0(TypeCtorInfo_140_140, ((MR_Box) (ExpConsTag_27)));
            mercury__io__nl_2_p_0();
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_11);
            mercury__io__write_string_3_p_0((MR_String) "%   to   ");
            Var_79 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(CheapConsId_28);
            mercury__io__write_string_3_p_0(Var_79);
            mercury__io__write_string_3_p_0((MR_String) " tag ");
            mercury__io__print_3_p_0(TypeCtorInfo_140_140, ((MR_Box) (CheapConsTag_29)));
            mercury__io__nl_2_p_0();
          }
          switch (MR_tag((MR_Word) DuTypeKind_25)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(DuTypeKind_25)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_11);
                    mercury__io__write_string_3_p_0((MR_String) "% KIND enumeration\n");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_11);
                    mercury__io__write_string_3_p_0((MR_String) "% KIND dummy\n");
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_11);
                    mercury__io__write_string_3_p_0((MR_String) "% KIND general\n");
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Lang_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), DuTypeKind_25, (MR_Integer) 0)));
                MR_String Var_108;

                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_11);
                mercury__io__write_string_3_p_0((MR_String) "% KIND foreign enumeration for ");
                Var_108 = libs__globals__foreign_language_string_1_f_0(Lang_30);
                mercury__io__write_string_3_p_0(Var_108);
                mercury__io__nl_2_p_0();
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word FunctorName_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), DuTypeKind_25, (MR_Integer) 0)));
                MR_Word ArgType_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), DuTypeKind_25, (MR_Integer) 1)));
                MR_Word MaybeArgName_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), DuTypeKind_25, (MR_Integer) 2)));

                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_11);
                mercury__io__write_string_3_p_0((MR_String) "% KIND notag: ");
                parse_tree__prog_out__write_sym_name_3_p_0(FunctorName_31);
                mercury__io__write_string_3_p_0((MR_String) ", ");
                parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(TVarSet_12, (MR_Integer) 0, ArgType_32);
                mercury__io__write_string_3_p_0((MR_String) ", ");
                if ((MaybeArgName_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  mercury__io__write_string_3_p_0((MR_String) "no arg name");
                }
                else
                {
                  MR_String ArgName_34 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeArgName_33, (MR_Integer) 0)));

                  mercury__io__write_string_3_p_0(ArgName_34);
                }
                mercury__io__nl_2_p_0();
              }
              break;
          }
          parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0(MercInfo_19, TVarSet_12, MaybeSolverTypeDetails_18, MaybeUserEqComp_15, MaybeDirectArgCtors_129);
          if (!((Foreign_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
          {
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_11);
            mercury__io__write_string_3_p_0((MR_String) "% has foreign_type\n");
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Type_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeBody_10, (MR_Integer) 0)));

        mercury__io__write_string_3_p_0((MR_String) " == ");
        parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(TVarSet_12, (MR_Integer) 0, Type_40);
        mercury__io__write_string_3_p_0((MR_String) ".\n");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_10, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DetailsSolver_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_10, (MR_Integer) 1)));
            MR_Word SolverTypeDetails_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsSolver_43, (MR_Integer) 0)));
            MR_Word Var_47;
            MR_Word MaybeUserEqComp_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsSolver_43, (MR_Integer) 1)));
            MR_Word MercInfo_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4)));
            MR_String Var_136 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
            MR_String Var_137 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
            MR_Word Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
            MR_Word Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)));

            {
              Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (SolverTypeDetails_44));
            }
            parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0(MercInfo_131, TVarSet_12, Var_47, MaybeUserEqComp_130, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            mercury__io__write_string_3_p_0((MR_String) ".\n");
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) ".\n");
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructor_repns_5_p_0(
  MR_Word TVarSet_6,
  MR_Integer Indent_7,
  MR_Word CtorRepns_8)
{
  if ((CtorRepns_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    {
      mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_module", (MR_String) "predicate \140hlds.hlds_out.hlds_out_module.write_constructor_repns\'/5", (MR_String) "empty constructor list");
      return;
    }
  }
  else
  {
    MR_Word HeadCtorRepn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), CtorRepns_8, (MR_Integer) 0)));
    MR_Word TailCtorRepns_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), CtorRepns_8, (MR_Integer) 1)));

    hlds__hlds_out__hlds_out_module__write_constructor_repns_loop_7_p_0(TVarSet_6, Indent_7, (MR_String) "--->    ", HeadCtorRepn_10, TailCtorRepns_11);
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructor_repns_loop_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_CtorArg_4;

    conv0_CtorArg_4 = hlds__hlds_out__hlds_out_module__discard_repn_from_ctor_arg_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_CtorArg_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructor_repns_loop_7_p_0(
  MR_Word TVarSet_8,
  MR_Integer Indent_9,
  MR_String ArrowOrSemi0_10,
  MR_Word HeadCtorRepn_11,
  MR_Word TailCtorRepns_12)
{
  while (MR_TRUE)
  {
    MR_String MaybePeriodNL_15;
    MR_Word MaybeExistConstraints_33;
    MR_Word Name_34;
    MR_Word Tag_35;
    MR_Word ArgRepns_36;
    MR_Integer Arity_37;
    MR_Word Context_38;
    MR_Word Args_39;
    MR_Word Ctor_40;
    MR_Word AllFull_41;

    // setup for model_det tailcalls optimized into a loop
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_9);
    mercury__io__write_string_3_p_0(ArrowOrSemi0_10);
    if ((TailCtorRepns_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      MaybePeriodNL_15 = (MR_String) ".\n";
    else
      MaybePeriodNL_15 = (MR_String) "\n";
    MaybeExistConstraints_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadCtorRepn_11, (MR_Integer) 0)));
    Name_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadCtorRepn_11, (MR_Integer) 1)));
    Tag_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadCtorRepn_11, (MR_Integer) 2)));
    ArgRepns_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadCtorRepn_11, (MR_Integer) 3)));
    Arity_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadCtorRepn_11, (MR_Integer) 4)));
    Context_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadCtorRepn_11, (MR_Integer) 5)));
    Args_39 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[12], ArgRepns_36);
    {
      Ctor_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Ctor_40, 0) = ((MR_Box) (MaybeExistConstraints_33));
      MR_hl_field(MR_mktag(0), Ctor_40, 1) = ((MR_Box) (Name_34));
      MR_hl_field(MR_mktag(0), Ctor_40, 2) = ((MR_Box) (Args_39));
      MR_hl_field(MR_mktag(0), Ctor_40, 3) = ((MR_Box) (Arity_37));
      MR_hl_field(MR_mktag(0), Ctor_40, 4) = ((MR_Box) (Context_38));
    }
    parse_tree__parse_tree_out__mercury_output_ctor_4_p_0(TVarSet_8, Ctor_40);
    mercury__io__write_string_3_p_0(MaybePeriodNL_15);
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_9);
    mercury__io__write_string_3_p_0((MR_String) "        ");
    mercury__io__write_string_3_p_0((MR_String) "% tag: ");
    mercury__io__print_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (Tag_35)));
    AllFull_41 = hlds__hlds_out__hlds_out_module__all_args_are_full_word_1_f_0(ArgRepns_36);
    switch (AllFull_41) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__nl_2_p_0();
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_9);
          mercury__io__write_string_3_p_0((MR_String) "        ");
          mercury__io__write_string_3_p_0((MR_String) "% packed arg widths:\n");
          hlds__hlds_out__hlds_out_module__write_arg_widths_6_p_0(Indent_9, (MR_Integer) 1, (MR_Integer) 0, ArgRepns_36);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) ", unpacked args\n");
        }
        break;
    }
    if (!((TailCtorRepns_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word HeadTailCtorRepn_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), TailCtorRepns_12, (MR_Integer) 0)));
      MR_Word TailTailCtorRepns_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), TailCtorRepns_12, (MR_Integer) 1)));
      MR_Word next_value_of_HeadCtorRepn_11 = HeadTailCtorRepn_18;
      MR_Word next_value_of_TailCtorRepns_12 = TailTailCtorRepns_19;

      // direct tailcall eliminated
      ArrowOrSemi0_10 = (MR_String) ";       ";
      HeadCtorRepn_11 = next_value_of_HeadCtorRepn_11;
      TailCtorRepns_12 = next_value_of_TailCtorRepns_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_arg_widths_6_p_0(
  MR_Integer Indent_1,
  MR_Integer CurArgNum_2,
  MR_Integer STATE_VARIABLE_Offset_0_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Arg_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
      MR_Word Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
      MR_Word Width_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_16, (MR_Integer) 2)));
      MR_Integer STATE_VARIABLE_Offset_77_77;
      MR_Integer Var_79;
      MR_Word _MaybeFieldName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_16, (MR_Integer) 0)));
      MR_Word _Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_16, (MR_Integer) 1)));
      MR_Word _Context_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_16, (MR_Integer) 3)));
      MR_Integer next_value_of_CurArgNum_2;
      MR_Integer next_value_of_STATE_VARIABLE_Offset_0_3;
      MR_Word next_value_of_HeadVar__4_4;

      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_1);
      mercury__io__write_string_3_p_0((MR_String) "        ");
      switch (MR_tag((MR_Word) Width_21)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Width_21)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_160;
                MR_Word Var_166;
                MR_String Var_170;

                mercury__io__write_string_3_p_0((MR_String) "% arg ");
                Var_166 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_4[0];
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_166, CurArgNum_2, &Var_160);
                mercury__io__write_string_3_p_0(Var_160);
                mercury__io__write_string_3_p_0((MR_String) ": full_word at offset ");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_166, STATE_VARIABLE_Offset_0_3, &Var_170);
                mercury__io__write_string_3_p_0(Var_170);
                mercury__io__write_string_3_p_0((MR_String) "\n");
                STATE_VARIABLE_Offset_77_77 = (STATE_VARIABLE_Offset_0_3 + (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Var_65 = (STATE_VARIABLE_Offset_0_3 + (MR_Integer) 1);
                MR_String Var_181;
                MR_Word Var_187;
                MR_String Var_191;
                MR_String Var_201;

                mercury__io__write_string_3_p_0((MR_String) "% arg ");
                Var_187 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_4[0];
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_187, CurArgNum_2, &Var_181);
                mercury__io__write_string_3_p_0(Var_181);
                mercury__io__write_string_3_p_0((MR_String) ": double_word at offsets ");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_187, STATE_VARIABLE_Offset_0_3, &Var_191);
                mercury__io__write_string_3_p_0(Var_191);
                mercury__io__write_string_3_p_0((MR_String) "-");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_187, Var_65, &Var_201);
                mercury__io__write_string_3_p_0(Var_201);
                mercury__io__write_string_3_p_0((MR_String) "\n");
                STATE_VARIABLE_Offset_77_77 = (STATE_VARIABLE_Offset_0_3 + (MR_Integer) 2);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Mask_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Width_21, (MR_Integer) 0)));
            MR_String Var_128;
            MR_Word Var_134;
            MR_String Var_138;
            MR_String Var_148;

            mercury__io__write_string_3_p_0((MR_String) "% arg ");
            Var_134 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_4[0];
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_134, CurArgNum_2, &Var_128);
            mercury__io__write_string_3_p_0(Var_128);
            mercury__io__write_string_3_p_0((MR_String) ": partial_word_first at offset ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_134, STATE_VARIABLE_Offset_0_3, &Var_138);
            mercury__io__write_string_3_p_0(Var_138);
            mercury__io__write_string_3_p_0((MR_String) ", mask ");
            mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0(Var_134, (MR_Integer) 2, Mask_23, &Var_148);
            mercury__io__write_string_3_p_0(Var_148);
            mercury__io__write_string_3_p_0((MR_String) "\n");
            STATE_VARIABLE_Offset_77_77 = (STATE_VARIABLE_Offset_0_3 + (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Shift_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Width_21, (MR_Integer) 0)));
            MR_Integer Var_39 = (STATE_VARIABLE_Offset_0_3 - (MR_Integer) 1);
            MR_Integer Mask_82 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Width_21, (MR_Integer) 1)));
            MR_String Var_86;
            MR_Word Var_92;
            MR_String Var_96;
            MR_String Var_106;
            MR_String Var_116;

            mercury__io__write_string_3_p_0((MR_String) "% arg ");
            Var_92 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_4[0];
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_92, CurArgNum_2, &Var_86);
            mercury__io__write_string_3_p_0(Var_86);
            mercury__io__write_string_3_p_0((MR_String) ": partial_word_shifted at offset ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_92, Var_39, &Var_96);
            mercury__io__write_string_3_p_0(Var_96);
            mercury__io__write_string_3_p_0((MR_String) ", shift ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_92, Shift_24, &Var_106);
            mercury__io__write_string_3_p_0(Var_106);
            mercury__io__write_string_3_p_0((MR_String) ", mask ");
            mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0(Var_92, (MR_Integer) 2, Mask_82, &Var_116);
            mercury__io__write_string_3_p_0(Var_116);
            mercury__io__write_string_3_p_0((MR_String) "\n");
            STATE_VARIABLE_Offset_77_77 = STATE_VARIABLE_Offset_0_3;
          }
          break;
      }
      Var_79 = (CurArgNum_2 + (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_CurArgNum_2 = Var_79;
      next_value_of_STATE_VARIABLE_Offset_0_3 = STATE_VARIABLE_Offset_77_77;
      next_value_of_HeadVar__4_4 = Args_17;
      CurArgNum_2 = next_value_of_CurArgNum_2;
      STATE_VARIABLE_Offset_0_3 = next_value_of_STATE_VARIABLE_Offset_0_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_module__all_args_are_full_word_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__2_2 = (MR_Integer) 1;
    else
    {
      MR_Word Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Args_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Width_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 2)));
      MR_Word _MaybeFieldName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 0)));
      MR_Word _Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 1)));
      MR_Word _Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 3)));

      succeeded = (Width_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        MR_Word next_value_of_HeadVar__1_1 = Args_4;

        // direct tailcall eliminated
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
        HeadVar__2_2 = (MR_Integer) 0;
    }
    return HeadVar__2_2;
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructors_5_p_0(
  MR_Word TVarSet_6,
  MR_Integer Indent_7,
  MR_Word Ctors_8)
{
  if ((Ctors_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    {
      mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_module", (MR_String) "predicate \140hlds.hlds_out.hlds_out_module.write_constructors\'/5", (MR_String) "empty constructor list");
      return;
    }
  }
  else
  {
    MR_Word HeadCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_8, (MR_Integer) 0)));
    MR_Word TailCtors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_8, (MR_Integer) 1)));

    hlds__hlds_out__hlds_out_module__write_constructors_loop_7_p_0(TVarSet_6, Indent_7, (MR_String) "--->    ", HeadCtor_10, TailCtors_11);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructors_loop_7_p_0(
  MR_Word TVarSet_8,
  MR_Integer Indent_9,
  MR_String ArrowOrSemi0_10,
  MR_Word HeadCtor_11,
  MR_Word TailCtors_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_9);
    mercury__io__write_string_3_p_0(ArrowOrSemi0_10);
    parse_tree__parse_tree_out__mercury_output_ctor_4_p_0(TVarSet_8, HeadCtor_11);
    if ((TailCtors_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
    else
    {
      MR_Word HeadTailCtor_18;
      MR_Word TailTailCtors_19;
      MR_Word next_value_of_HeadCtor_11;
      MR_Word next_value_of_TailCtors_12;

      mercury__io__write_string_3_p_0((MR_String) "\n");
      HeadTailCtor_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), TailCtors_12, (MR_Integer) 0)));
      TailTailCtors_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), TailCtors_12, (MR_Integer) 1)));
      // direct tailcall eliminated
      next_value_of_HeadCtor_11 = HeadTailCtor_18;
      next_value_of_TailCtors_12 = TailTailCtors_19;
      ArrowOrSemi0_10 = (MR_String) ";       ";
      HeadCtor_11 = next_value_of_HeadCtor_11;
      TailCtors_12 = next_value_of_TailCtors_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_params_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word P_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Ps_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_3_p_0((MR_String) ", ");
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, HeadVar__1_1, (MR_Integer) 0, P_10);
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = Ps_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_footer_4_p_0(
  MR_Integer Indent_5,
  MR_Word Module_6)
{
  {
    MR_Word Name_8;

    hlds__hlds_module__module_info_get_name_2_p_0(Module_6, &Name_8);
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) ":- end_module ");
    parse_tree__prog_out__write_sym_name_3_p_0(Name_8);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
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
