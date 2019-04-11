/*
** Automatically generated from `hlds_out_module.m'
** by the Mercury compiler,
** version rotd-2017-06-02
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


/* :- module hlds.hlds_out.hlds_out_module. */
/* :- implementation. */

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
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
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


static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_module__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_inst_defn_0;

static const MR_VA_PseudoTypeInfo_Struct4 hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_det_0;

static const MR_VA_PseudoTypeInfo_Struct4 hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_0;

static const MR_VA_PseudoTypeInfo_Struct4 hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_det_0;

static const MR_VA_PseudoTypeInfo_Struct4 hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_det_0;

static const MR_VA_PseudoTypeInfo_Struct4 hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_95_103_114_97_112_104_95_101_100_103_101_95_95_91_51_93_95_48_6_p_0(
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_8,
  MR_Word hlds__hlds_out__hlds_out_module__ChildProc_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_3(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_2(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_8,
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_9,
  MR_Word hlds__hlds_out__hlds_out_module__DependencyInfo_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_10,
  MR_Word hlds__hlds_out__hlds_out_module__WriteKey_11,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_4,
  MR_Integer hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_19,
  MR_Integer * hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_20);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_10,
  MR_Word hlds__hlds_out__hlds_out_module__WriteKey_11,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_4,
  MR_Integer hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_17,
  MR_Integer * hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_56_44_32_57_93_95_48_13_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__751__1_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_102,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_172,
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__5_173,
  MR_Integer * hlds__hlds_out__hlds_out_module__HeadVar__6_174);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__745__1_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_91,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_161,
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__5_162,
  MR_Integer * hlds__hlds_out__hlds_out_module__HeadVar__6_163);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__740__1_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_80,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_150,
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__5_151,
  MR_Integer * hlds__hlds_out__hlds_out_module__HeadVar__6_152);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__734__1_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_69,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_139,
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__5_140,
  MR_Integer * hlds__hlds_out__hlds_out_module__HeadVar__6_141);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__729__1_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_58,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_128,
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__5_129,
  MR_Integer * hlds__hlds_out__hlds_out_module__HeadVar__6_130);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__724__1_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_47,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_116,
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__5_117,
  MR_Integer * hlds__hlds_out__hlds_out_module__HeadVar__6_118);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_promise__1272__1_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__VarSet_16,
  MR_Word hlds__hlds_out__hlds_out_module__LambdaHeadVar__1_33);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dependency_proc_6_p_0(
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
  MR_String hlds__hlds_out__hlds_out_module__Prefix_8,
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_9,
  MR_Word hlds__hlds_out__hlds_out_module__PredProcId_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dependency_scc_5_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dependency_scc_5_p_0(
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_6,
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_7,
  MR_Word hlds__hlds_out__hlds_out_module__SCC_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dep_graph_edge_6_p_0(
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_8,
  MR_Word hlds__hlds_out__hlds_out_module___ParentProc_9,
  MR_Word hlds__hlds_out__hlds_out_module__ChildProc_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dep_graph_node_5_p_0(
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_6,
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_7,
  MR_Word hlds__hlds_out__hlds_out_module__Proc_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_1(
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_3(
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_2(
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_4(
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Info_8,
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_10,
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_11,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__5_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__compare_in_name_order_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2,
  MR_Word * hlds__hlds_out__hlds_out_module__Result_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_7_p_0_2(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_7_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Info_8,
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_10,
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_11,
  MR_Word hlds__hlds_out__hlds_out_module__PredTable_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_p_0(
  MR_String hlds__hlds_out__hlds_out_module__HeadVar__1_1,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_5,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_5,
  MR_Word hlds__hlds_out__hlds_out_module__TableStructMap_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_args_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__HeadConstArg_5,
  MR_Word hlds__hlds_out__hlds_out_module__TailConstArgs_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__ConstStructDb_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_mode_table_entry_5_p_0(
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_6,
  MR_Word hlds__hlds_out__hlds_out_module__ModeId_7,
  MR_Word hlds__hlds_out__hlds_out_module__ModeDefn_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_mode_table_4_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_mode_table_4_p_0(
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_5,
  MR_Word hlds__hlds_out__hlds_out_module__ModeTable_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_name_nl_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
  MR_Word hlds__hlds_out__hlds_out_module__InstName_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_any_inst_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
  MR_Word hlds__hlds_out__hlds_out_module__AnyInstInfo_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_ground_inst_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
  MR_Word hlds__hlds_out__hlds_out_module__GroundInstInfo_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_merge_inst_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
  MR_Word hlds__hlds_out__hlds_out_module__MergeInstInfo_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_unify_inst_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
  MR_Word hlds__hlds_out__hlds_out_module__UnifyInstInfo_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_params_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__InstVar_6,
  MR_Word hlds__hlds_out__hlds_out_module__InstVars_7,
  MR_Word hlds__hlds_out__hlds_out_module__InstVarSet_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_user_inst_4_p_0(
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_5,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_13(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_4,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_12(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_11(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_4,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_10(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_9(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_4,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_8(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_7(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_4,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_6(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_5(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_4,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_4(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_3(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_4,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_2(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_8,
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
  MR_Word hlds__hlds_out__hlds_out_module__InstTable_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_methods_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_2,
  MR_Integer hlds__hlds_out__hlds_out_module__STATE_VARIABLE_CurMethodNum_0_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_2(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
  MR_Word hlds__hlds_out__hlds_out_module__InstanceDefn_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instances_5_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instances_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
  MR_Word hlds__hlds_out__hlds_out_module__InstanceTable_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_proc_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_2(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_3(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_2(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_classes_5_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_classes_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
  MR_Word hlds__hlds_out__hlds_out_module__ClassTable_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructors_loop_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3,
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__4_4,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__5_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructors_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__TVarSet_8,
  MR_Word hlds__hlds_out__hlds_out_module__TagValues_9,
  MR_Word hlds__hlds_out__hlds_out_module__TypeCtor_10,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_11,
  MR_Word hlds__hlds_out__hlds_out_module__Ctors_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_body_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Info_8,
  MR_Word hlds__hlds_out__hlds_out_module__TypeCtor_9,
  MR_Word hlds__hlds_out__hlds_out_module__TypeBody_10,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_11,
  MR_Word hlds__hlds_out__hlds_out_module__TVarSet_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_params_loop_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_table_entries_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Info_1,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_2,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_types_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
  MR_Word hlds__hlds_out__hlds_out_module__TypeTable_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_avail_entry_5_p_0(
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_6,
  MR_Word hlds__hlds_out__hlds_out_module__ModuleName_7,
  MR_Word hlds__hlds_out__hlds_out_module__Entry_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_hlds_4_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_1[5][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_2[23][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_3[9][8];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_4[5][6];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_5[1][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_6[9][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_7[5][11];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_8[1][10];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_9[2][9];




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
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0))
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_2[23][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0))
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
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_0))
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
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[4])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[5])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[5])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_12)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[4])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_preds_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_3[9][8] = {
  /* row 0 */
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
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
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
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
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
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
  /* row 8 */
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
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_4[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_6[9][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_inst_defn_0)),
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
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_7[5][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_det_0)),
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
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_0)),
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
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_det_0)),
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
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_det_0)),
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
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_8[1][10] = {
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_9[2][9] = {
  /* row 0 */
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
  /* row 1 */
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
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_module__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_module__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_inst_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0
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

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_det_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0
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

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_0
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

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_det_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0
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

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_det_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0
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

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_0
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

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_95_103_114_97_112_104_95_101_100_103_101_95_95_91_51_93_95_48_6_p_0(
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_8,
  MR_Word hlds__hlds_out__hlds_out_module__ChildProc_10)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

    {
      hlds__hlds_out__hlds_out_module__write_dependency_proc_6_p_0(hlds__hlds_out__hlds_out_module__Indent_7, (MR_String) "  to ", hlds__hlds_out__hlds_out_module__ModuleInfo_8, hlds__hlds_out__hlds_out_module__ChildProc_10);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_3(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      hlds__hlds_out__hlds_out_module__write_dependency_scc_5_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_2(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      hlds__hlds_out__hlds_out_module__write_dep_graph_edge_6_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      hlds__hlds_out__hlds_out_module__write_dep_graph_node_5_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_8,
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_9,
  MR_Word hlds__hlds_out__hlds_out_module__DependencyInfo_10)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_27_27;
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_35_35;
    MR_Word hlds__hlds_out__hlds_out_module__Graph_12;
    MR_Word hlds__hlds_out__hlds_out_module__Ordering_13;
    MR_Word hlds__hlds_out__hlds_out_module__Var_19;
    MR_Word hlds__hlds_out__hlds_out_module__Var_20;
    MR_Word hlds__hlds_out__hlds_out_module__Var_25;
    MR_Box hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_21_21;
    MR_Box hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_IO_15;

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% Dependency graph\n\n");
    }
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    {
      hlds__hlds_out__hlds_out_module__Graph_12 = libs__dependency_graph__dependency_info_get_graph_1_f_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_27_27, hlds__hlds_out__hlds_out_module__DependencyInfo_10);
    }
    {
      hlds__hlds_out__hlds_out_module__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_19, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[7]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_19, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Indent_8));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_19, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__ModuleInfo_9));
    }
    {
      hlds__hlds_out__hlds_out_module__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_20, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_20, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_2));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_20, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Indent_8));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_20, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__ModuleInfo_9));
    }
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_35_35 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__digraph__traverse_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_27_27, hlds__hlds_out__hlds_out_module__TypeCtorInfo_35_35, hlds__hlds_out__hlds_out_module__Graph_12, hlds__hlds_out__hlds_out_module__Var_19, hlds__hlds_out__hlds_out_module__Var_20, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_21_21);
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n% Bottom up dependency sccs\n\n");
    }
    {
      hlds__hlds_out__hlds_out_module__Ordering_13 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_27_27, hlds__hlds_out__hlds_out_module__DependencyInfo_10);
    }
    {
      hlds__hlds_out__hlds_out_module__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_25, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[8]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_25, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_3));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_25, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Indent_8));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_25, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__ModuleInfo_9));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_1[4], hlds__hlds_out__hlds_out_module__TypeCtorInfo_35_35, hlds__hlds_out__hlds_out_module__Var_25, hlds__hlds_out__hlds_out_module__Ordering_13, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_IO_15);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_10,
  MR_Word hlds__hlds_out__hlds_out_module__WriteKey_11,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_4,
  MR_Integer hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_19,
  MR_Integer * hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_20)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Box hlds__hlds_out__hlds_out_module__Key_12 = (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__4_4, (MR_Integer) 0));
    MR_Word hlds__hlds_out__hlds_out_module__MaybeInstDet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__4_4, (MR_Integer) 1)));

    *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_20 = (hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_19 + (MR_Integer) 1);
    hlds__hlds_out__hlds_out_module__succeeded = (*hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_20 <= hlds__hlds_out__hlds_out_module__Limit_10);
    if (hlds__hlds_out__hlds_out_module__succeeded)
      {
        MR_String hlds__hlds_out__hlds_out_module__Var_50;
        MR_Word hlds__hlds_out__hlds_out_module__Var_56;
        void MR_CALL (* hlds__hlds_out__hlds_out_module__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_IO_31_31;

        {
          mercury__io__nl_2_p_0();
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "Entry ");
        }
        hlds__hlds_out__hlds_out_module__Var_56 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_5[0];
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__Var_56, *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_20, &hlds__hlds_out__hlds_out_module__Var_50);
        }
        {
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_50);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " key\n");
        }
        hlds__hlds_out__hlds_out_module__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__WriteKey_11, (MR_Integer) 1)));
        {
          hlds__hlds_out__hlds_out_module__func_0(((MR_Box) hlds__hlds_out__hlds_out_module__WriteKey_11), ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_9)), hlds__hlds_out__hlds_out_module__Key_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_IO_31_31);
        }
        if ((hlds__hlds_out__hlds_out_module__MaybeInstDet_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_String hlds__hlds_out__hlds_out_module__Var_61;

            {
              mercury__io__write_string_3_p_0((MR_String) "Entry ");
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__Var_56, *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_20, &hlds__hlds_out__hlds_out_module__Var_61);
            }
            {
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_61);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " value UNKNOWN\n");
            }
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_92;
            MR_Word hlds__hlds_out__hlds_out_module__Inst_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeInstDet_13, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_module__Detism_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeInstDet_13, (MR_Integer) 1)));
            MR_String hlds__hlds_out__hlds_out_module__DetismStr_18;
            MR_String hlds__hlds_out__hlds_out_module__Var_72;
            MR_Word hlds__hlds_out__hlds_out_module__InstTerm_88;
            MR_Word hlds__hlds_out__hlds_out_module__VarSet_89;

            {
              hlds__hlds_out__hlds_out_module__DetismStr_18 = parse_tree__prog_out__determinism_to_string_1_f_0(hlds__hlds_out__hlds_out_module__Detism_17);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "Entry ");
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__Var_56, *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_20, &hlds__hlds_out__hlds_out_module__Var_72);
            }
            {
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_72);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " value (");
            }
            {
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__DetismStr_18);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "):\n");
            }
            {
              hlds__hlds_out__hlds_out_module__InstTerm_88 = parse_tree__parse_tree_to_term__inst_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_9, hlds__hlds_out__hlds_out_module__Inst_16);
            }
            hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_92 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_92, &hlds__hlds_out__hlds_out_module__VarSet_89);
            }
            {
              parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_92, hlds__hlds_out__hlds_out_module__VarSet_89, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstTerm_88);
            }
            {
              mercury__io__nl_2_p_0();
            }
          }
      }
    else
      {
      }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_10,
  MR_Word hlds__hlds_out__hlds_out_module__WriteKey_11,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_4,
  MR_Integer hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_17,
  MR_Integer * hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Box hlds__hlds_out__hlds_out_module__Key_12 = (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__4_4, (MR_Integer) 0));
    MR_Word hlds__hlds_out__hlds_out_module__MaybeInst_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__4_4, (MR_Integer) 1)));

    *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18 = (hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_17 + (MR_Integer) 1);
    hlds__hlds_out__hlds_out_module__succeeded = (*hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18 <= hlds__hlds_out__hlds_out_module__Limit_10);
    if (hlds__hlds_out__hlds_out_module__succeeded)
      {
        MR_String hlds__hlds_out__hlds_out_module__Var_46;
        MR_Word hlds__hlds_out__hlds_out_module__Var_52;
        void MR_CALL (* hlds__hlds_out__hlds_out_module__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_IO_29_29;

        {
          mercury__io__nl_2_p_0();
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "Entry ");
        }
        hlds__hlds_out__hlds_out_module__Var_52 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_5[0];
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__Var_52, *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18, &hlds__hlds_out__hlds_out_module__Var_46);
        }
        {
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_46);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " key\n");
        }
        hlds__hlds_out__hlds_out_module__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__WriteKey_11, (MR_Integer) 1)));
        {
          hlds__hlds_out__hlds_out_module__func_0(((MR_Box) hlds__hlds_out__hlds_out_module__WriteKey_11), ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_9)), hlds__hlds_out__hlds_out_module__Key_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_IO_29_29);
        }
        if ((hlds__hlds_out__hlds_out_module__MaybeInst_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_String hlds__hlds_out__hlds_out_module__Var_57;

            {
              mercury__io__write_string_3_p_0((MR_String) "Entry ");
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__Var_52, *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18, &hlds__hlds_out__hlds_out_module__Var_57);
            }
            {
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_57);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " value UNKNOWN\n");
            }
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_85;
            MR_Word hlds__hlds_out__hlds_out_module__Inst_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeInst_13, (MR_Integer) 0)));
            MR_String hlds__hlds_out__hlds_out_module__Var_68;
            MR_Word hlds__hlds_out__hlds_out_module__InstTerm_81;
            MR_Word hlds__hlds_out__hlds_out_module__VarSet_82;

            {
              mercury__io__write_string_3_p_0((MR_String) "Entry ");
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__Var_52, *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18, &hlds__hlds_out__hlds_out_module__Var_68);
            }
            {
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_68);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " value:\n");
            }
            {
              hlds__hlds_out__hlds_out_module__InstTerm_81 = parse_tree__parse_tree_to_term__inst_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_9, hlds__hlds_out__hlds_out_module__Inst_16);
            }
            hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_85 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_85, &hlds__hlds_out__hlds_out_module__VarSet_82);
            }
            {
              parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_85, hlds__hlds_out__hlds_out_module__VarSet_82, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstTerm_81);
            }
            {
              mercury__io__nl_2_p_0();
            }
          }
      }
    else
      {
      }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_56_44_32_57_93_95_48_13_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_promise__1272__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
    }
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_56_44_32_57_93_95_48_13_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Info_14,
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_15,
  MR_Word hlds__hlds_out__hlds_out_module__VarSet_16,
  MR_Word hlds__hlds_out__hlds_out_module__TypeQual_17,
  MR_Word hlds__hlds_out__hlds_out_module__VarNamePrint_18,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_19,
  MR_Word hlds__hlds_out__hlds_out_module__PromiseType_20,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVars_23,
  MR_Word hlds__hlds_out__hlds_out_module__Clause_24)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__PrintVar_26;
    MR_Word hlds__hlds_out__hlds_out_module__Goal_30;
    MR_Integer hlds__hlds_out__hlds_out_module__Var_54;

    {
      hlds__hlds_out__hlds_out_module__PrintVar_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintVar_26, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[8]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintVar_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_56_44_32_57_93_95_48_13_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintVar_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintVar_26, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__VarSet_16));
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_19);
    }
    switch (hlds__hlds_out__hlds_out_module__PromiseType_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) ":- all [");
          }
          {
            mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_1[0], hlds__hlds_out__hlds_out_module__HeadVars_23, (MR_String) ", ", hlds__hlds_out__hlds_out_module__PrintVar_26);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          {
            parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(hlds__hlds_out__hlds_out_module__Indent_19);
          }
          {
            parse_tree__prog_out__write_promise_type_3_p_0(hlds__hlds_out__hlds_out_module__PromiseType_20);
          }
          {
            parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(hlds__hlds_out__hlds_out_module__Indent_19);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "(\n");
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) ":- promise all [");
          }
          {
            mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_1[0], hlds__hlds_out__hlds_out_module__HeadVars_23, (MR_String) ", ", hlds__hlds_out__hlds_out_module__PrintVar_26);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "] (\n");
          }
        }
        break;
    }
    {
      hlds__hlds_out__hlds_out_module__Goal_30 = hlds__hlds_clauses__clause_body_1_f_0(hlds__hlds_out__hlds_out_module__Clause_24);
    }
    hlds__hlds_out__hlds_out_module__Var_54 = (hlds__hlds_out__hlds_out_module__Indent_19 + (MR_Integer) 1);
    {
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_module__Info_14, hlds__hlds_out__hlds_out_module__ModuleInfo_15, hlds__hlds_out__hlds_out_module__VarSet_16, hlds__hlds_out__hlds_out_module__TypeQual_17, hlds__hlds_out__hlds_out_module__VarNamePrint_18, hlds__hlds_out__hlds_out_module__Var_54, (MR_String) ").\n", hlds__hlds_out__hlds_out_module__Goal_30);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__751__1_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_102,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_172,
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__5_173,
  MR_Integer * hlds__hlds_out__hlds_out_module__HeadVar__6_174)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

    {
      hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(hlds__hlds_out__hlds_out_module__Lang_7, hlds__hlds_out__hlds_out_module__Limit_9, hlds__hlds_out__hlds_out_module__HeadVar__3_102, hlds__hlds_out__hlds_out_module__HeadVar__4_172, hlds__hlds_out__hlds_out_module__HeadVar__5_173, hlds__hlds_out__hlds_out_module__HeadVar__6_174);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__745__1_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_91,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_161,
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__5_162,
  MR_Integer * hlds__hlds_out__hlds_out_module__HeadVar__6_163)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

    {
      hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(hlds__hlds_out__hlds_out_module__Lang_7, hlds__hlds_out__hlds_out_module__Limit_9, hlds__hlds_out__hlds_out_module__HeadVar__3_91, hlds__hlds_out__hlds_out_module__HeadVar__4_161, hlds__hlds_out__hlds_out_module__HeadVar__5_162, hlds__hlds_out__hlds_out_module__HeadVar__6_163);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__740__1_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_80,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_150,
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__5_151,
  MR_Integer * hlds__hlds_out__hlds_out_module__HeadVar__6_152)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

    {
      hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_8_p_0(hlds__hlds_out__hlds_out_module__Lang_7, hlds__hlds_out__hlds_out_module__Limit_9, hlds__hlds_out__hlds_out_module__HeadVar__3_80, hlds__hlds_out__hlds_out_module__HeadVar__4_150, hlds__hlds_out__hlds_out_module__HeadVar__5_151, hlds__hlds_out__hlds_out_module__HeadVar__6_152);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__734__1_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_69,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_139,
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__5_140,
  MR_Integer * hlds__hlds_out__hlds_out_module__HeadVar__6_141)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

    {
      hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_8_p_0(hlds__hlds_out__hlds_out_module__Lang_7, hlds__hlds_out__hlds_out_module__Limit_9, hlds__hlds_out__hlds_out_module__HeadVar__3_69, hlds__hlds_out__hlds_out_module__HeadVar__4_139, hlds__hlds_out__hlds_out_module__HeadVar__5_140, hlds__hlds_out__hlds_out_module__HeadVar__6_141);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__729__1_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_58,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_128,
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__5_129,
  MR_Integer * hlds__hlds_out__hlds_out_module__HeadVar__6_130)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

    {
      hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(hlds__hlds_out__hlds_out_module__Lang_7, hlds__hlds_out__hlds_out_module__Limit_9, hlds__hlds_out__hlds_out_module__HeadVar__3_58, hlds__hlds_out__hlds_out_module__HeadVar__4_128, hlds__hlds_out__hlds_out_module__HeadVar__5_129, hlds__hlds_out__hlds_out_module__HeadVar__6_130);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__724__1_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_47,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_116,
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__5_117,
  MR_Integer * hlds__hlds_out__hlds_out_module__HeadVar__6_118)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

    {
      hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_8_p_0(hlds__hlds_out__hlds_out_module__Lang_7, hlds__hlds_out__hlds_out_module__Limit_9, hlds__hlds_out__hlds_out_module__HeadVar__3_47, hlds__hlds_out__hlds_out_module__HeadVar__4_116, hlds__hlds_out__hlds_out_module__HeadVar__5_117, hlds__hlds_out__hlds_out_module__HeadVar__6_118);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_promise__1272__1_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__VarSet_16,
  MR_Word hlds__hlds_out__hlds_out_module__LambdaHeadVar__1_33)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

    {
      mercury__term_io__write_variable_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_module__LambdaHeadVar__1_33, hlds__hlds_out__hlds_out_module__VarSet_16);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dependency_proc_6_p_0(
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
  MR_String hlds__hlds_out__hlds_out_module__Prefix_8,
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_9,
  MR_Word hlds__hlds_out__hlds_out_module__PredProcId_10)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PredProcId_10, (MR_Integer) 0)));
    MR_Integer hlds__hlds_out__hlds_out_module__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PredProcId_10, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_module__Pieces_14;
    MR_String hlds__hlds_out__hlds_out_module__Desc_15;
    MR_Integer hlds__hlds_out__hlds_out_module__Var_26;
    MR_Integer hlds__hlds_out__hlds_out_module__Var_29;
    MR_String hlds__hlds_out__hlds_out_module__Var_39;
    MR_Word hlds__hlds_out__hlds_out_module__Var_45;
    MR_String hlds__hlds_out__hlds_out_module__Var_49;

    {
      hlds__hlds_out__hlds_out_module__Pieces_14 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(hlds__hlds_out__hlds_out_module__ModuleInfo_9, (MR_Integer) 1, hlds__hlds_out__hlds_out_module__PredProcId_10);
    }
    {
      hlds__hlds_out__hlds_out_module__Desc_15 = parse_tree__error_util__error_pieces_to_string_1_f_0(hlds__hlds_out__hlds_out_module__Pieces_14);
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
    {
      hlds__hlds_out__hlds_out_module__Var_26 = hlds__hlds_pred__pred_id_to_int_1_f_0(hlds__hlds_out__hlds_out_module__PredId_12);
    }
    {
      hlds__hlds_out__hlds_out_module__Var_29 = hlds__hlds_pred__proc_id_to_int_1_f_0(hlds__hlds_out__hlds_out_module__ProcId_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Prefix_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "pred ");
    }
    hlds__hlds_out__hlds_out_module__Var_45 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_5[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__Var_45, hlds__hlds_out__hlds_out_module__Var_26, &hlds__hlds_out__hlds_out_module__Var_39);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_39);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " proc ");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__Var_45, hlds__hlds_out__hlds_out_module__Var_29, &hlds__hlds_out__hlds_out_module__Var_49);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_49);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Desc_15);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dependency_scc_5_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      hlds__hlds_out__hlds_out_module__write_dependency_proc_6_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dependency_scc_5_p_0(
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_6,
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_7,
  MR_Word hlds__hlds_out__hlds_out_module__SCC_8)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__Var_15;
    MR_Box hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_11;

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% SCC\n");
    }
    {
      hlds__hlds_out__hlds_out_module__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_dependency_scc_5_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_15, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Indent_6));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_15, 4) = ((MR_Box) ((MR_String) "  "));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_15, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_module__ModuleInfo_7));
    }
    {
      mercury__set__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_out__hlds_out_module__Var_15, hlds__hlds_out__hlds_out_module__SCC_8, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dep_graph_edge_6_p_0(
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_8,
  MR_Word hlds__hlds_out__hlds_out_module___ParentProc_9,
  MR_Word hlds__hlds_out__hlds_out_module__ChildProc_10)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

    {
      hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_95_103_114_97_112_104_95_101_100_103_101_95_95_91_51_93_95_48_6_p_0(hlds__hlds_out__hlds_out_module__Indent_7, hlds__hlds_out__hlds_out_module__ModuleInfo_8, hlds__hlds_out__hlds_out_module__ChildProc_10);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dep_graph_node_5_p_0(
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_6,
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_7,
  MR_Word hlds__hlds_out__hlds_out_module__Proc_8)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

    {
      hlds__hlds_out__hlds_out_module__write_dependency_proc_6_p_0(hlds__hlds_out__hlds_out_module__Indent_6, (MR_String) "calls from ", hlds__hlds_out__hlds_out_module__ModuleInfo_7, hlds__hlds_out__hlds_out_module__Proc_8);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_1(
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg)
{
  {
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s * hlds__hlds_out__hlds_out_module__env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s *) hlds__hlds_out__hlds_out_module__env_ptr_arg;

    MR_builtin_longjmp((hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_3(
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg)
{
  {
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s * hlds__hlds_out__hlds_out_module__env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s *) hlds__hlds_out__hlds_out_module__env_ptr_arg;

    (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStr_36 = ((MR_String) (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__conv0_DumpPredIdStr_36);
    {
      hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_2(hlds__hlds_out__hlds_out_module__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_2(
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg)
{
  {
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s * hlds__hlds_out__hlds_out_module__env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s *) hlds__hlds_out__hlds_out_module__env_ptr_arg;

    {
      (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = mercury__string__to_int_2_p_0((hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStr_36, &(hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredId_37);
    }
    if ((hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
      {
        (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = ((hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__PredIdInt_18 == (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredId_37);
        if ((hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
          {
            hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_1(hlds__hlds_out__hlds_out_module__env_ptr);
          }
      }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_4(
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg)
{
  {
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s * hlds__hlds_out__hlds_out_module__env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s *) hlds__hlds_out__hlds_out_module__env_ptr_arg;

    if (MR_builtin_setjmp((hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &(hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__conv0_DumpPredIdStr_36, (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16, hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_3, hlds__hlds_out__hlds_out_module__env_ptr);
          }
        }
        (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Info_8,
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_10,
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_11,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__5_5)
{
  {
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s hlds__hlds_out__hlds_out_module__env;

    {
      MR_Word hlds__hlds_out__hlds_out_module__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__5_5, (MR_Integer) 0)));
      MR_Word hlds__hlds_out__hlds_out_module__PredInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__5_5, (MR_Integer) 1)));
      MR_String hlds__hlds_out__hlds_out_module__DumpOptions_15 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 0)));
      MR_Word hlds__hlds_out__hlds_out_module__DumpPredNames_17;
      MR_String hlds__hlds_out__hlds_out_module__Var_38 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 1)));
      MR_Word hlds__hlds_out__hlds_out_module__Var_41;

      (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 2)));
      hlds__hlds_out__hlds_out_module__DumpPredNames_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 3)));
      hlds__hlds_out__hlds_out_module__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 4)));
      {
        hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_module__PredId_12, &(hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__PredIdInt_18);
      }
      {
        MR_String hlds__hlds_out__hlds_out_module__Var_19;
        MR_Word hlds__hlds_out__hlds_out_module__Var_20;

        (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16)) == (MR_mktag((MR_Integer) 1)));
        if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
          {
            hlds__hlds_out__hlds_out_module__Var_19 = ((MR_String) (MR_hl_field(MR_mktag(1), (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16, (MR_Integer) 0)));
            hlds__hlds_out__hlds_out_module__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16, (MR_Integer) 1)));
          }
      }
      if (!((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded))
        {
          MR_String hlds__hlds_out__hlds_out_module__Var_21;
          MR_Word hlds__hlds_out__hlds_out_module__Var_22;

          (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__DumpPredNames_17)) == (MR_mktag((MR_Integer) 1)));
          if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
            {
              hlds__hlds_out__hlds_out_module__Var_21 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__DumpPredNames_17, (MR_Integer) 0)));
              hlds__hlds_out__hlds_out_module__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__DumpPredNames_17, (MR_Integer) 1)));
            }
        }
      if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
        {
          {
            hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_4(&hlds__hlds_out__hlds_out_module__env);
          }
          if (!((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded))
            {
              MR_String hlds__hlds_out__hlds_out_module__PredName_25;

              {
                hlds__hlds_out__hlds_out_module__PredName_25 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_out__hlds_out_module__PredInfo_13);
              }
              {
                (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (hlds__hlds_out__hlds_out_module__PredName_25)), hlds__hlds_out__hlds_out_module__DumpPredNames_17);
              }
            }
          if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
            {
              hlds__hlds_out__hlds_out_pred__write_pred_8_p_0(hlds__hlds_out__hlds_out_module__Info_8, hlds__hlds_out__hlds_out_module__Lang_9, hlds__hlds_out__hlds_out_module__ModuleInfo_11, hlds__hlds_out__hlds_out_module__Indent_10, hlds__hlds_out__hlds_out_module__PredId_12, hlds__hlds_out__hlds_out_module__PredInfo_13);
            }
          else
            {
            }
        }
      else
        {
          {
            (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_15, (MR_Char) 73);
          }
          (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = !((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded);
          if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
            {
              (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__hlds_out__hlds_out_module__PredInfo_13);
            }
          if (!((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded))
            {
              {
                MR_Word hlds__hlds_out__hlds_out_module__ProcIds_26;
                MR_Integer hlds__hlds_out__hlds_out_module__ProcId_27;
                MR_Word hlds__hlds_out__hlds_out_module__Var_33;
                MR_Integer hlds__hlds_out__hlds_out_module__Var_52;

                {
                  (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_15, (MR_Char) 73);
                }
                (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = !((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded);
                if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
                  {
                    {
                      (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(hlds__hlds_out__hlds_out_module__PredInfo_13);
                    }
                    if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
                      {
                        {
                          hlds__hlds_out__hlds_out_module__ProcIds_26 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__hlds_out__hlds_out_module__PredInfo_13);
                        }
                        {
                          hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&hlds__hlds_out__hlds_out_module__ProcId_27);
                        }
                        (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__ProcIds_26)) == (MR_mktag((MR_Integer) 1)));
                        if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
                          {
                            hlds__hlds_out__hlds_out_module__Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__ProcIds_26, (MR_Integer) 0)));
                            hlds__hlds_out__hlds_out_module__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__ProcIds_26, (MR_Integer) 1)));
                            (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = (hlds__hlds_out__hlds_out_module__ProcId_27 == hlds__hlds_out__hlds_out_module__Var_52);
                            if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
                              (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = (hlds__hlds_out__hlds_out_module__Var_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
              if (!((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded))
                {
                  {
                    (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_15, (MR_Char) 85);
                  }
                  (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = !((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded);
                  if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
                    {
                      (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(hlds__hlds_out__hlds_out_module__PredInfo_13);
                    }
                }
            }
          if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
            {
            }
          else
            {
              hlds__hlds_out__hlds_out_pred__write_pred_8_p_0(hlds__hlds_out__hlds_out_module__Info_8, hlds__hlds_out__hlds_out_module__Lang_9, hlds__hlds_out__hlds_out_module__ModuleInfo_11, hlds__hlds_out__hlds_out_module__Indent_10, hlds__hlds_out__hlds_out_module__PredId_12, hlds__hlds_out__hlds_out_module__PredInfo_13);
            }
        }
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__compare_in_name_order_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2,
  MR_Word * hlds__hlds_out__hlds_out_module__Result_8)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__PredIdA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_module__PredInfoA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_module__PredIdB_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_module__PredInfoB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 1)));
    MR_String hlds__hlds_out__hlds_out_module__PredNameA_9;
    MR_String hlds__hlds_out__hlds_out_module__PredNameB_10;
    MR_Word hlds__hlds_out__hlds_out_module__NameResult_11;

    {
      hlds__hlds_pred__pred_info_get_name_2_p_0(hlds__hlds_out__hlds_out_module__PredInfoA_5, &hlds__hlds_out__hlds_out_module__PredNameA_9);
    }
    {
      hlds__hlds_pred__pred_info_get_name_2_p_0(hlds__hlds_out__hlds_out_module__PredInfoB_7, &hlds__hlds_out__hlds_out_module__PredNameB_10);
    }
    {
      mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__hlds_out__hlds_out_module__NameResult_11, hlds__hlds_out__hlds_out_module__PredNameA_9, hlds__hlds_out__hlds_out_module__PredNameB_10);
    }
    switch (hlds__hlds_out__hlds_out_module__NameResult_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *hlds__hlds_out__hlds_out_module__Result_8 = hlds__hlds_out__hlds_out_module__NameResult_11;
        break;
      case (MR_Integer) 0:
        {
          hlds__hlds_pred____Compare____pred_id_0_0(hlds__hlds_out__hlds_out_module__Result_8, hlds__hlds_out__hlds_out_module__PredIdA_4, hlds__hlds_out__hlds_out_module__PredIdB_6);
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_7_p_0_2(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 6))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_7_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;
    MR_Word hlds__hlds_out__hlds_out_module__conv0_Result_8;

    {
      hlds__hlds_out__hlds_out_module__compare_in_name_order_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2), &hlds__hlds_out__hlds_out_module__conv0_Result_8);
    }
    *hlds__hlds_out__hlds_out_module__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_module__conv0_Result_8));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Info_8,
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_10,
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_11,
  MR_Word hlds__hlds_out__hlds_out_module__PredTable_12)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__PredIdsInfos_14;
    MR_Word hlds__hlds_out__hlds_out_module__Globals_15;
    MR_Word hlds__hlds_out__hlds_out_module__NameOrder_16;
    MR_Word hlds__hlds_out__hlds_out_module__PrintPredIdsInfos_17;
    MR_Word hlds__hlds_out__hlds_out_module__Var_25;
    MR_Box hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_IO_19;

    {
      mercury__io__write_string_3_p_0((MR_String) "%-------- Predicates --------\n\n");
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_10);
    }
    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__hlds_out__hlds_out_module__PredTable_12, &hlds__hlds_out__hlds_out_module__PredIdsInfos_14);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_11, &hlds__hlds_out__hlds_out_module__Globals_15);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(hlds__hlds_out__hlds_out_module__Globals_15, (MR_Integer) 161, &hlds__hlds_out__hlds_out_module__NameOrder_16);
    }
    switch (hlds__hlds_out__hlds_out_module__NameOrder_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__hlds_out__hlds_out_module__PrintPredIdsInfos_17 = hlds__hlds_out__hlds_out_module__PredIdsInfos_14;
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__list__sort_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[10], (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[22], hlds__hlds_out__hlds_out_module__PredIdsInfos_14, &hlds__hlds_out__hlds_out_module__PrintPredIdsInfos_17);
          }
        }
        break;
    }
    {
      hlds__hlds_out__hlds_out_module__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_25, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_25, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_preds_7_p_0_2));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_25, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Info_8));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_25, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_9));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_25, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Indent_10));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_25, 6) = ((MR_Box) (hlds__hlds_out__hlds_out_module__ModuleInfo_11));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[10], (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_out__hlds_out_module__Var_25, hlds__hlds_out__hlds_out_module__PrintPredIdsInfos_17, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_IO_19);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_p_0(
  MR_String hlds__hlds_out__hlds_out_module__HeadVar__1_1,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_module__succeeded;

        if ((hlds__hlds_out__hlds_out_module__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_module__MaybeMethod_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_module__MaybeMethods_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 1)));

            {
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__HeadVar__1_1);
            }
            if ((hlds__hlds_out__hlds_out_module__MaybeMethod_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "output");
                }
              }
            else
              {
                MR_Word hlds__hlds_out__hlds_out_module__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeMethod_10, (MR_Integer) 0)));

                switch (hlds__hlds_out__hlds_out_module__Var_29) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "addr");
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "promise_implied");
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "value");
                      }
                    }
                    break;
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_out__hlds_out_module__next_value_of_HeadVar__2_2 = hlds__hlds_out__hlds_out_module__MaybeMethods_11;

              hlds__hlds_out__hlds_out_module__HeadVar__2_2 = hlds__hlds_out__hlds_out_module__next_value_of_HeadVar__2_2;
              hlds__hlds_out__hlds_out_module__HeadVar__1_1 = (MR_String) ", ";
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_5,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_87_87;
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_88_88;
    MR_Word hlds__hlds_out__hlds_out_module__PredProcId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_module__TableStructInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9;
    MR_Word hlds__hlds_out__hlds_out_module__Attributes_10;
    MR_Word hlds__hlds_out__hlds_out_module__TVarSet_12;
    MR_Integer hlds__hlds_out__hlds_out_module__NumInputs_14;
    MR_Integer hlds__hlds_out__hlds_out_module__NumOutputs_15;
    MR_Word hlds__hlds_out__hlds_out_module__InputSteps_16;
    MR_Word hlds__hlds_out__hlds_out_module__MaybeOutputSteps_17;
    MR_Word hlds__hlds_out__hlds_out_module__ArgInfos_18;
    MR_Word hlds__hlds_out__hlds_out_module__Strictness_21;
    MR_Word hlds__hlds_out__hlds_out_module__SizeLimit_22;
    MR_Word hlds__hlds_out__hlds_out_module__Stats_23;
    MR_Word hlds__hlds_out__hlds_out_module__AllowReset_24;
    MR_Word hlds__hlds_out__hlds_out_module__Var_44;
    MR_String hlds__hlds_out__hlds_out_module__Var_95;
    MR_Word hlds__hlds_out__hlds_out_module__Var_101;
    MR_String hlds__hlds_out__hlds_out_module__Var_105;
    MR_Word hlds__hlds_out__hlds_out_module___ProcLabel_11;
    MR_Word hlds__hlds_out__hlds_out_module___Context_13;
    MR_Word hlds__hlds_out__hlds_out_module___EvalMethod_19;
    MR_Box hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_45_45;

    {
      mercury__io__nl_2_p_0();
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% table struct info for ");
    }
    {
      hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_5, hlds__hlds_out__hlds_out_module__PredProcId_6);
    }
    {
      mercury__io__nl_2_p_0();
    }
    hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__TableStructInfo_7, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_module__Attributes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__TableStructInfo_7, (MR_Integer) 1)));
    hlds__hlds_out__hlds_out_module___ProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_module__TVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 1)));
    hlds__hlds_out__hlds_out_module___Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 2)));
    hlds__hlds_out__hlds_out_module__NumInputs_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 3)));
    hlds__hlds_out__hlds_out_module__NumOutputs_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 4)));
    hlds__hlds_out__hlds_out_module__InputSteps_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 5)));
    hlds__hlds_out__hlds_out_module__MaybeOutputSteps_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 6)));
    hlds__hlds_out__hlds_out_module__ArgInfos_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 7)));
    hlds__hlds_out__hlds_out_module___EvalMethod_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 8)));
    {
      mercury__io__write_string_3_p_0((MR_String) "% #inputs: ");
    }
    hlds__hlds_out__hlds_out_module__Var_101 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_5[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__Var_101, hlds__hlds_out__hlds_out_module__NumInputs_14, &hlds__hlds_out__hlds_out_module__Var_95);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_95);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", #outputs: ");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__Var_101, hlds__hlds_out__hlds_out_module__NumOutputs_15, &hlds__hlds_out__hlds_out_module__Var_105);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_105);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% input steps:");
    }
    {
      hlds__hlds_out__hlds_out_module__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_44, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[7]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_44, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_44, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__TVarSet_12));
    }
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_87_87 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0;
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_88_88 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__list__foldl_4_p_2(hlds__hlds_out__hlds_out_module__TypeCtorInfo_87_87, hlds__hlds_out__hlds_out_module__TypeCtorInfo_88_88, hlds__hlds_out__hlds_out_module__Var_44, hlds__hlds_out__hlds_out_module__InputSteps_16, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_45_45);
    }
    {
      mercury__io__nl_2_p_0();
    }
    if ((hlds__hlds_out__hlds_out_module__MaybeOutputSteps_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "% no output steps");
        }
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_module__OutputSteps_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeOutputSteps_17, (MR_Integer) 0)));
        MR_Box hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_IO_52_52;

        {
          mercury__io__write_string_3_p_0((MR_String) "% output steps:");
        }
        {
          mercury__list__foldl_4_p_2(hlds__hlds_out__hlds_out_module__TypeCtorInfo_87_87, hlds__hlds_out__hlds_out_module__TypeCtorInfo_88_88, hlds__hlds_out__hlds_out_module__Var_44, hlds__hlds_out__hlds_out_module__OutputSteps_20, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_IO_52_52);
        }
        {
          mercury__io__nl_2_p_0();
        }
      }
    {
      hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0(hlds__hlds_out__hlds_out_module__TVarSet_12, hlds__hlds_out__hlds_out_module__ArgInfos_18);
    }
    hlds__hlds_out__hlds_out_module__Strictness_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Attributes_10, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_module__SizeLimit_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Attributes_10, (MR_Integer) 1)));
    hlds__hlds_out__hlds_out_module__Stats_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Attributes_10, (MR_Integer) 2)));
    hlds__hlds_out__hlds_out_module__AllowReset_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Attributes_10, (MR_Integer) 3)));
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__Strictness_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__hlds_out__hlds_out_module__Strictness_21)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "% all strict\n");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "% all fast_loose\n");
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_out__hlds_out_module__ArgMethods_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__Strictness_21, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_module__HiddenArgMethod_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__Strictness_21, (MR_Integer) 1)));

          {
            mercury__io__write_string_3_p_0((MR_String) "% specified [");
          }
          {
            hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_p_0((MR_String) "", hlds__hlds_out__hlds_out_module__ArgMethods_25);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          switch (hlds__hlds_out__hlds_out_module__HiddenArgMethod_26) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) ", hidden args by addr\n");
                }
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) ", hidden args by value\n");
                }
              }
              break;
          }
        }
        break;
    }
    if ((hlds__hlds_out__hlds_out_module__SizeLimit_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "% no size limit\n");
        }
      }
    else
      {
        MR_Integer hlds__hlds_out__hlds_out_module__Limit_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__SizeLimit_22, (MR_Integer) 0)));
        MR_String hlds__hlds_out__hlds_out_module__Var_116;

        {
          mercury__io__write_string_3_p_0((MR_String) "% size limit ");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__Var_101, hlds__hlds_out__hlds_out_module__Limit_27, &hlds__hlds_out__hlds_out_module__Var_116);
        }
        {
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_116);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    switch (hlds__hlds_out__hlds_out_module__Stats_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "% do not gather statistics\n");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "% gather statistics\n");
          }
        }
        break;
    }
    switch (hlds__hlds_out__hlds_out_module__AllowReset_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "% allow reset\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "% do not allow reset\n");
          }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_5,
  MR_Word hlds__hlds_out__hlds_out_module__TableStructMap_6)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__TableStructs_8;
    MR_Word hlds__hlds_out__hlds_out_module__Var_13;
    MR_Box hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_14_14;

    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0, hlds__hlds_out__hlds_out_module__TableStructMap_6, &hlds__hlds_out__hlds_out_module__TableStructs_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "%-------- Table structs --------\n");
    }
    {
      hlds__hlds_out__hlds_out_module__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[6]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_13, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_13, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__ModuleInfo_5));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[9], (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_out__hlds_out_module__Var_13, hlds__hlds_out__hlds_out_module__TableStructs_8, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_14_14);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_args_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__HeadConstArg_5,
  MR_Word hlds__hlds_out__hlds_out_module__TailConstArgs_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_module__succeeded;

        {
          mercury__io__write_string_3_p_0((MR_String) "    ");
        }
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__HeadConstArg_5)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Integer hlds__hlds_out__hlds_out_module__N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadConstArg_5, (MR_Integer) 0)));
            MR_String hlds__hlds_out__hlds_out_module__Var_38;

            {
              mercury__io__write_string_3_p_0((MR_String) "cs(");
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_5[0], hlds__hlds_out__hlds_out_module__N_8, &hlds__hlds_out__hlds_out_module__Var_38);
            }
            {
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_38);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_module__ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadConstArg_5, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_module__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadConstArg_5, (MR_Integer) 1)));
            MR_Word hlds__hlds_out__hlds_out_module__Var_21;

            {
              parse_tree__mercury_to_mercury__mercury_output_cons_id_4_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_module__ConsId_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n        with type ");
            }
            {
              hlds__hlds_out__hlds_out_module__Var_21 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
            }
            {
              parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_module__Var_21, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__Type_10);
            }
          }
        if ((hlds__hlds_out__hlds_out_module__TailConstArgs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_module__HeadTailConstArg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TailConstArgs_6, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_module__TailTailConstArgs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TailConstArgs_6, (MR_Integer) 1)));

            {
              mercury__io__write_string_3_p_0((MR_String) ",\n");
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_out__hlds_out_module__next_value_of_HeadConstArg_5 = hlds__hlds_out__hlds_out_module__HeadTailConstArg_11;
              MR_Word hlds__hlds_out__hlds_out_module__next_value_of_TailConstArgs_6 = hlds__hlds_out__hlds_out_module__TailTailConstArgs_12;

              hlds__hlds_out__hlds_out_module__TailConstArgs_6 = hlds__hlds_out__hlds_out_module__next_value_of_TailConstArgs_6;
              hlds__hlds_out__hlds_out_module__HeadConstArg_5 = hlds__hlds_out__hlds_out_module__next_value_of_HeadConstArg_5;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Integer hlds__hlds_out__hlds_out_module__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_module__ConstStruct_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_module__ConsId_7;
    MR_Word hlds__hlds_out__hlds_out_module__ConstArgs_8;
    MR_Word hlds__hlds_out__hlds_out_module__Type_9;
    MR_Word hlds__hlds_out__hlds_out_module__Inst_10;
    MR_Word hlds__hlds_out__hlds_out_module__Var_30;
    MR_Word hlds__hlds_out__hlds_out_module__Var_39;
    MR_String hlds__hlds_out__hlds_out_module__Var_46;

    {
      mercury__io__write_string_3_p_0((MR_String) "\nconst_struct ");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_5[0], hlds__hlds_out__hlds_out_module__N_4, &hlds__hlds_out__hlds_out_module__Var_46);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_46);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ":\n");
    }
    hlds__hlds_out__hlds_out_module__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ConstStruct_5, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_module__ConstArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ConstStruct_5, (MR_Integer) 1)));
    hlds__hlds_out__hlds_out_module__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ConstStruct_5, (MR_Integer) 2)));
    hlds__hlds_out__hlds_out_module__Inst_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ConstStruct_5, (MR_Integer) 3)));
    {
      parse_tree__mercury_to_mercury__mercury_output_cons_id_4_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_module__ConsId_7);
    }
    if ((hlds__hlds_out__hlds_out_module__ConstArgs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__io__nl_2_p_0();
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_module__HeadConstArg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__ConstArgs_8, (MR_Integer) 0)));
        MR_Word hlds__hlds_out__hlds_out_module__TailConstArgs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__ConstArgs_8, (MR_Integer) 1)));

        {
          mercury__io__write_string_3_p_0((MR_String) "(\n");
        }
        {
          hlds__hlds_out__hlds_out_module__write_const_struct_args_4_p_0(hlds__hlds_out__hlds_out_module__HeadConstArg_11, hlds__hlds_out__hlds_out_module__TailConstArgs_12);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ")\n");
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "type: ");
    }
    {
      hlds__hlds_out__hlds_out_module__Var_30 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_module__Var_30, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__Type_9);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "inst: ");
    }
    {
      hlds__hlds_out__hlds_out_module__Var_39 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
    {
      hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_7_p_0(hlds__hlds_out__hlds_out_module__Inst_10, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__Var_39);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      hlds__hlds_out__hlds_out_module__write_const_struct_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__ConstStructDb_4)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__ConstStructs_6;
    MR_Box hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_12_12;

    {
      hlds__const_struct__const_struct_db_get_structs_2_p_0(hlds__hlds_out__hlds_out_module__ConstStructDb_4, &hlds__hlds_out__hlds_out_module__ConstStructs_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "%-------- Const structs --------\n\n");
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[8], (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[21], hlds__hlds_out__hlds_out_module__ConstStructs_6, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_12_12);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_mode_table_entry_5_p_0(
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_6,
  MR_Word hlds__hlds_out__hlds_out_module__ModeId_7,
  MR_Word hlds__hlds_out__hlds_out_module__ModeDefn_8)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__ModeName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ModeId_7, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_module__InstVarSet_12;
    MR_Word hlds__hlds_out__hlds_out_module__InstParams_13;
    MR_Word hlds__hlds_out__hlds_out_module__ModeBody_14;
    MR_Word hlds__hlds_out__hlds_out_module__Status_16;
    MR_Word hlds__hlds_out__hlds_out_module__EqvMode_19;
    MR_String hlds__hlds_out__hlds_out_module__StatusStr_20;
    MR_String hlds__hlds_out__hlds_out_module__Var_28;
    MR_Integer hlds__hlds_out__hlds_out_module___ModeArity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ModeId_7, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_module___Context_15;

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_6);
    }
    {
      hlds__hlds_out__hlds_out_module__Var_28 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_module__ModeName_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n:- mode ");
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_28);
    }
    hlds__hlds_out__hlds_out_module__InstVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ModeDefn_8, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_module__InstParams_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ModeDefn_8, (MR_Integer) 1)));
    hlds__hlds_out__hlds_out_module__ModeBody_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ModeDefn_8, (MR_Integer) 2)));
    hlds__hlds_out__hlds_out_module___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ModeDefn_8, (MR_Integer) 3)));
    hlds__hlds_out__hlds_out_module__Status_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ModeDefn_8, (MR_Integer) 4)));
    if ((hlds__hlds_out__hlds_out_module__InstParams_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_module__HeadInstParam_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__InstParams_13, (MR_Integer) 0)));
        MR_Word hlds__hlds_out__hlds_out_module__TailInstParams_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__InstParams_13, (MR_Integer) 1)));

        {
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
        {
          hlds__hlds_out__hlds_out_module__write_inst_params_5_p_0(hlds__hlds_out__hlds_out_module__HeadInstParam_17, hlds__hlds_out__hlds_out_module__TailInstParams_18, hlds__hlds_out__hlds_out_module__InstVarSet_12);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
    hlds__hlds_out__hlds_out_module__EqvMode_19 = (MR_Word) hlds__hlds_out__hlds_out_module__ModeBody_14;
    {
      mercury__io__write_string_3_p_0((MR_String) ":\n");
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_6);
    }
    {
      parse_tree__parse_tree_out_inst__mercury_output_mode_5_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_module__InstVarSet_12, hlds__hlds_out__hlds_out_module__EqvMode_19);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_6);
    }
    {
      hlds__hlds_out__hlds_out_module__StatusStr_20 = hlds__hlds_out__hlds_out_util__mode_import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_module__Status_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% status ");
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__StatusStr_20);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_mode_table_4_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      hlds__hlds_out__hlds_out_module__write_mode_table_entry_5_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_mode_table_4_p_0(
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_5,
  MR_Word hlds__hlds_out__hlds_out_module__ModeTable_6)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__ModeDefns_8;
    MR_Word hlds__hlds_out__hlds_out_module__Var_15;
    MR_Box hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_16_16;

    {
      hlds__hlds_data__mode_table_get_mode_defns_2_p_0(hlds__hlds_out__hlds_out_module__ModeTable_6, &hlds__hlds_out__hlds_out_module__ModeDefns_8);
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "%-------- Modes --------\n");
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
    }
    {
      hlds__hlds_out__hlds_out_module__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[6]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_mode_table_4_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_15, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Indent_5));
    }
    {
      mercury__map__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_out__hlds_out_module__Var_15, hlds__hlds_out__hlds_out_module__ModeDefns_8, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_16_16);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_name_nl_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
  MR_Word hlds__hlds_out__hlds_out_module__InstName_6)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_15_15;
    MR_Word hlds__hlds_out__hlds_out_module__InstNameTerm_8;
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_9;

    {
      hlds__hlds_out__hlds_out_module__InstNameTerm_8 = parse_tree__parse_tree_to_term__inst_name_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_5, hlds__hlds_out__hlds_out_module__InstName_6);
    }
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_15_15, &hlds__hlds_out__hlds_out_module__VarSet_9);
    }
    {
      parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_15_15, hlds__hlds_out__hlds_out_module__VarSet_9, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstNameTerm_8);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_any_inst_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
  MR_Word hlds__hlds_out__hlds_out_module__AnyInstInfo_6)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_15_50;
    MR_Word hlds__hlds_out__hlds_out_module__InstName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__AnyInstInfo_6, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_module__Uniq_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__AnyInstInfo_6, (MR_Integer) 1)))) & (MR_Integer) 7);
    MR_Word hlds__hlds_out__hlds_out_module__Live_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__AnyInstInfo_6, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word hlds__hlds_out__hlds_out_module__Real_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__AnyInstInfo_6, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word hlds__hlds_out__hlds_out_module__InstNameTerm_45;
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_46;

    switch (hlds__hlds_out__hlds_out_module__Uniq_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "clobbered");
          }
        }
        break;
      case (MR_Integer) 4:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "mostly_clobbered");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "mostly_unique ");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "shared ");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "unique ");
          }
        }
        break;
    }
    switch (hlds__hlds_out__hlds_out_module__Live_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "dead ");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "live ");
          }
        }
        break;
    }
    switch (hlds__hlds_out__hlds_out_module__Real_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "fake unify\n");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "real unify\n");
          }
        }
        break;
    }
    {
      hlds__hlds_out__hlds_out_module__InstNameTerm_45 = parse_tree__parse_tree_to_term__inst_name_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_5, hlds__hlds_out__hlds_out_module__InstName_8);
    }
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_15_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_15_50, &hlds__hlds_out__hlds_out_module__VarSet_46);
    }
    {
      parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_15_50, hlds__hlds_out__hlds_out_module__VarSet_46, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstNameTerm_45);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_ground_inst_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
  MR_Word hlds__hlds_out__hlds_out_module__GroundInstInfo_6)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_15_50;
    MR_Word hlds__hlds_out__hlds_out_module__InstName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__GroundInstInfo_6, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_module__Uniq_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__GroundInstInfo_6, (MR_Integer) 1)))) & (MR_Integer) 7);
    MR_Word hlds__hlds_out__hlds_out_module__Live_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__GroundInstInfo_6, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word hlds__hlds_out__hlds_out_module__Real_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__GroundInstInfo_6, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word hlds__hlds_out__hlds_out_module__InstNameTerm_45;
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_46;

    switch (hlds__hlds_out__hlds_out_module__Uniq_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "clobbered");
          }
        }
        break;
      case (MR_Integer) 4:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "mostly_clobbered");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "mostly_unique ");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "shared ");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "unique ");
          }
        }
        break;
    }
    switch (hlds__hlds_out__hlds_out_module__Live_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "dead ");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "live ");
          }
        }
        break;
    }
    switch (hlds__hlds_out__hlds_out_module__Real_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "fake unify\n");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "real unify\n");
          }
        }
        break;
    }
    {
      hlds__hlds_out__hlds_out_module__InstNameTerm_45 = parse_tree__parse_tree_to_term__inst_name_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_5, hlds__hlds_out__hlds_out_module__InstName_8);
    }
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_15_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_15_50, &hlds__hlds_out__hlds_out_module__VarSet_46);
    }
    {
      parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_15_50, hlds__hlds_out__hlds_out_module__VarSet_46, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstNameTerm_45);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_merge_inst_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
  MR_Word hlds__hlds_out__hlds_out_module__MergeInstInfo_6)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_29;
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_39;
    MR_Word hlds__hlds_out__hlds_out_module__InstA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__MergeInstInfo_6, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_module__InstB_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__MergeInstInfo_6, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_module__InstTerm_25;
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_26;
    MR_Word hlds__hlds_out__hlds_out_module__InstTerm_35;
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_36;

    {
      mercury__io__write_string_3_p_0((MR_String) "InstA: ");
    }
    {
      hlds__hlds_out__hlds_out_module__InstTerm_25 = parse_tree__parse_tree_to_term__inst_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_5, hlds__hlds_out__hlds_out_module__InstA_8);
    }
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_29, &hlds__hlds_out__hlds_out_module__VarSet_26);
    }
    {
      parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_29, hlds__hlds_out__hlds_out_module__VarSet_26, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstTerm_25);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "InstB: ");
    }
    {
      hlds__hlds_out__hlds_out_module__InstTerm_35 = parse_tree__parse_tree_to_term__inst_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_5, hlds__hlds_out__hlds_out_module__InstB_9);
    }
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_39 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_39, &hlds__hlds_out__hlds_out_module__VarSet_36);
    }
    {
      parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_39, hlds__hlds_out__hlds_out_module__VarSet_36, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstTerm_35);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_unify_inst_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
  MR_Word hlds__hlds_out__hlds_out_module__UnifyInstInfo_6)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_39;
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_49;
    MR_Word hlds__hlds_out__hlds_out_module__Live_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__UnifyInstInfo_6, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_module__Real_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__UnifyInstInfo_6, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_module__InstA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__UnifyInstInfo_6, (MR_Integer) 2)));
    MR_Word hlds__hlds_out__hlds_out_module__InstB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__UnifyInstInfo_6, (MR_Integer) 3)));
    MR_Word hlds__hlds_out__hlds_out_module__InstTerm_35;
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_36;
    MR_Word hlds__hlds_out__hlds_out_module__InstTerm_45;
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_46;

    switch (hlds__hlds_out__hlds_out_module__Live_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "dead ");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "live ");
          }
        }
        break;
    }
    switch (hlds__hlds_out__hlds_out_module__Real_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "fake unify\n");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "real unify\n");
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "InstA: ");
    }
    {
      hlds__hlds_out__hlds_out_module__InstTerm_35 = parse_tree__parse_tree_to_term__inst_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_5, hlds__hlds_out__hlds_out_module__InstA_10);
    }
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_39 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_39, &hlds__hlds_out__hlds_out_module__VarSet_36);
    }
    {
      parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_39, hlds__hlds_out__hlds_out_module__VarSet_36, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstTerm_35);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "InstB: ");
    }
    {
      hlds__hlds_out__hlds_out_module__InstTerm_45 = parse_tree__parse_tree_to_term__inst_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_5, hlds__hlds_out__hlds_out_module__InstB_11);
    }
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_49, &hlds__hlds_out__hlds_out_module__VarSet_46);
    }
    {
      parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_49, hlds__hlds_out__hlds_out_module__VarSet_46, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstTerm_45);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_params_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__InstVar_6,
  MR_Word hlds__hlds_out__hlds_out_module__InstVars_7,
  MR_Word hlds__hlds_out__hlds_out_module__InstVarSet_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_module__succeeded;
        MR_String hlds__hlds_out__hlds_out_module__InstVarName_10;

        {
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, hlds__hlds_out__hlds_out_module__InstVarSet_8, hlds__hlds_out__hlds_out_module__InstVar_6, &hlds__hlds_out__hlds_out_module__InstVarName_10);
        }
        {
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__InstVarName_10);
        }
        if ((hlds__hlds_out__hlds_out_module__InstVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_module__HeadInstVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__InstVars_7, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_module__TailInstVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__InstVars_7, (MR_Integer) 1)));

            {
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_out__hlds_out_module__next_value_of_InstVar_6 = hlds__hlds_out__hlds_out_module__HeadInstVar_11;
              MR_Word hlds__hlds_out__hlds_out_module__next_value_of_InstVars_7 = hlds__hlds_out__hlds_out_module__TailInstVars_12;

              hlds__hlds_out__hlds_out_module__InstVars_7 = hlds__hlds_out__hlds_out_module__next_value_of_InstVars_7;
              hlds__hlds_out__hlds_out_module__InstVar_6 = hlds__hlds_out__hlds_out_module__next_value_of_InstVar_6;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_user_inst_4_p_0(
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_5,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__InstId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_module__InstDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_module__InstName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstId_6, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_module__InstVarSet_11;
    MR_Word hlds__hlds_out__hlds_out_module__InstParams_12;
    MR_Word hlds__hlds_out__hlds_out_module__InstBody_13;
    MR_Word hlds__hlds_out__hlds_out_module__Status_16;
    MR_String hlds__hlds_out__hlds_out_module__StatusStr_20;
    MR_String hlds__hlds_out__hlds_out_module__Var_28;
    MR_Integer hlds__hlds_out__hlds_out_module___InstArity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstId_6, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_module___MaybeMatchingTypeCtors_14;
    MR_Word hlds__hlds_out__hlds_out_module___Context_15;

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
    }
    {
      hlds__hlds_out__hlds_out_module__Var_28 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_module__InstName_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n:- inst ");
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_28);
    }
    hlds__hlds_out__hlds_out_module__InstVarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstDefn_7, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_module__InstParams_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstDefn_7, (MR_Integer) 1)));
    hlds__hlds_out__hlds_out_module__InstBody_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstDefn_7, (MR_Integer) 2)));
    hlds__hlds_out__hlds_out_module___MaybeMatchingTypeCtors_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstDefn_7, (MR_Integer) 3)));
    hlds__hlds_out__hlds_out_module___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstDefn_7, (MR_Integer) 4)));
    hlds__hlds_out__hlds_out_module__Status_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstDefn_7, (MR_Integer) 5)));
    if ((hlds__hlds_out__hlds_out_module__InstParams_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_module__HeadInstParam_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__InstParams_12, (MR_Integer) 0)));
        MR_Word hlds__hlds_out__hlds_out_module__TailInstParams_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__InstParams_12, (MR_Integer) 1)));

        {
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
        {
          hlds__hlds_out__hlds_out_module__write_inst_params_5_p_0(hlds__hlds_out__hlds_out_module__HeadInstParam_17, hlds__hlds_out__hlds_out_module__TailInstParams_18, hlds__hlds_out__hlds_out_module__InstVarSet_11);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
    if ((hlds__hlds_out__hlds_out_module__InstBody_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) ": is abstract\n");
        }
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_module__EqvInst_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__InstBody_13, (MR_Integer) 0)));

        {
          mercury__io__write_string_3_p_0((MR_String) ":\n");
        }
        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
        }
        {
          parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_module__InstVarSet_11, hlds__hlds_out__hlds_out_module__EqvInst_19);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
    }
    {
      hlds__hlds_out__hlds_out_module__StatusStr_20 = hlds__hlds_out__hlds_out_util__inst_import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_module__Status_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% status ");
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__StatusStr_20);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_13(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_4,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_5)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;
    MR_Integer hlds__hlds_out__hlds_out_module__conv16_HeadVar__6_174;

    {
      hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__751__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Integer) hlds__hlds_out__hlds_out_module__wrapper_arg_2), &hlds__hlds_out__hlds_out_module__conv16_HeadVar__6_174);
    }
    *hlds__hlds_out__hlds_out_module__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_module__conv16_HeadVar__6_174));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_12(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      hlds__hlds_out__hlds_out_module__write_inst_name_nl_4_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_11(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_4,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_5)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;
    MR_Integer hlds__hlds_out__hlds_out_module__conv13_HeadVar__6_163;

    {
      hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__745__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Integer) hlds__hlds_out__hlds_out_module__wrapper_arg_2), &hlds__hlds_out__hlds_out_module__conv13_HeadVar__6_163);
    }
    *hlds__hlds_out__hlds_out_module__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_module__conv13_HeadVar__6_163));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_10(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      hlds__hlds_out__hlds_out_module__write_inst_name_nl_4_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_9(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_4,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_5)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;
    MR_Integer hlds__hlds_out__hlds_out_module__conv10_HeadVar__6_152;

    {
      hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__740__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Integer) hlds__hlds_out__hlds_out_module__wrapper_arg_2), &hlds__hlds_out__hlds_out_module__conv10_HeadVar__6_152);
    }
    *hlds__hlds_out__hlds_out_module__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_module__conv10_HeadVar__6_152));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_8(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      hlds__hlds_out__hlds_out_module__write_key_any_inst_4_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_7(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_4,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_5)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;
    MR_Integer hlds__hlds_out__hlds_out_module__conv7_HeadVar__6_141;

    {
      hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__734__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Integer) hlds__hlds_out__hlds_out_module__wrapper_arg_2), &hlds__hlds_out__hlds_out_module__conv7_HeadVar__6_141);
    }
    *hlds__hlds_out__hlds_out_module__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_module__conv7_HeadVar__6_141));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_6(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      hlds__hlds_out__hlds_out_module__write_key_ground_inst_4_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_5(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_4,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_5)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;
    MR_Integer hlds__hlds_out__hlds_out_module__conv4_HeadVar__6_130;

    {
      hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__729__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Integer) hlds__hlds_out__hlds_out_module__wrapper_arg_2), &hlds__hlds_out__hlds_out_module__conv4_HeadVar__6_130);
    }
    *hlds__hlds_out__hlds_out_module__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_module__conv4_HeadVar__6_130));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_4(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      hlds__hlds_out__hlds_out_module__write_key_merge_inst_4_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_3(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_4,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_5)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;
    MR_Integer hlds__hlds_out__hlds_out_module__conv1_HeadVar__6_118;

    {
      hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__724__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Integer) hlds__hlds_out__hlds_out_module__wrapper_arg_2), &hlds__hlds_out__hlds_out_module__conv1_HeadVar__6_118);
    }
    *hlds__hlds_out__hlds_out_module__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_module__conv1_HeadVar__6_118));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_2(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      hlds__hlds_out__hlds_out_module__write_key_unify_inst_4_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      hlds__hlds_out__hlds_out_module__write_user_inst_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_8,
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
  MR_Word hlds__hlds_out__hlds_out_module__InstTable_10)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_115_115;
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127;
    MR_Word hlds__hlds_out__hlds_out_module__TypeInfo_171_171;
    MR_Word hlds__hlds_out__hlds_out_module__UserInstTable_12;
    MR_Word hlds__hlds_out__hlds_out_module__UnifyInstTable_13;
    MR_Word hlds__hlds_out__hlds_out_module__MergeInstTable_14;
    MR_Word hlds__hlds_out__hlds_out_module__GroundInstTable_15;
    MR_Word hlds__hlds_out__hlds_out_module__AnyInstTable_16;
    MR_Word hlds__hlds_out__hlds_out_module__SharedInstTable_17;
    MR_Word hlds__hlds_out__hlds_out_module__MostlyUniqInstTable_18;
    MR_Word hlds__hlds_out__hlds_out_module__UserInstPairs_19;
    MR_Word hlds__hlds_out__hlds_out_module__UnifyInstPairs_20;
    MR_Word hlds__hlds_out__hlds_out_module__MergeInstPairs_21;
    MR_Word hlds__hlds_out__hlds_out_module__GroundInstPairs_22;
    MR_Word hlds__hlds_out__hlds_out_module__AnyInstPairs_23;
    MR_Word hlds__hlds_out__hlds_out_module__SharedInstPairs_24;
    MR_Word hlds__hlds_out__hlds_out_module__MostlyUniqInstPairs_25;
    MR_Integer hlds__hlds_out__hlds_out_module__NumUnifyInsts_26;
    MR_Integer hlds__hlds_out__hlds_out_module__NumMergeInsts_27;
    MR_Integer hlds__hlds_out__hlds_out_module__NumGroundInsts_28;
    MR_Integer hlds__hlds_out__hlds_out_module__NumAnyInsts_29;
    MR_Integer hlds__hlds_out__hlds_out_module__NumSharedInsts_30;
    MR_Integer hlds__hlds_out__hlds_out_module__NumMostlyUniqInsts_31;
    MR_Word hlds__hlds_out__hlds_out_module__Var_40;
    MR_Word hlds__hlds_out__hlds_out_module__Var_44;
    MR_Word hlds__hlds_out__hlds_out_module__Var_55;
    MR_Word hlds__hlds_out__hlds_out_module__Var_66;
    MR_Word hlds__hlds_out__hlds_out_module__Var_77;
    MR_Word hlds__hlds_out__hlds_out_module__Var_88;
    MR_Word hlds__hlds_out__hlds_out_module__Var_99;
    MR_String hlds__hlds_out__hlds_out_module__Var_185;
    MR_Word hlds__hlds_out__hlds_out_module__Var_191;
    MR_String hlds__hlds_out__hlds_out_module__Var_196;
    MR_String hlds__hlds_out__hlds_out_module__Var_207;
    MR_String hlds__hlds_out__hlds_out_module__Var_218;
    MR_String hlds__hlds_out__hlds_out_module__Var_229;
    MR_String hlds__hlds_out__hlds_out_module__Var_240;
    MR_Box hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_41_41;
    MR_Box hlds__hlds_out__hlds_out_module__conv3_NumUnifyInsts_26;
    MR_Box hlds__hlds_out__hlds_out_module__conv2_STATE_VARIABLE_IO_46_46;
    MR_Box hlds__hlds_out__hlds_out_module__conv6_NumMergeInsts_27;
    MR_Box hlds__hlds_out__hlds_out_module__conv5_STATE_VARIABLE_IO_57_57;
    MR_Box hlds__hlds_out__hlds_out_module__conv9_NumGroundInsts_28;
    MR_Box hlds__hlds_out__hlds_out_module__conv8_STATE_VARIABLE_IO_68_68;
    MR_Box hlds__hlds_out__hlds_out_module__conv12_NumAnyInsts_29;
    MR_Box hlds__hlds_out__hlds_out_module__conv11_STATE_VARIABLE_IO_79_79;
    MR_Box hlds__hlds_out__hlds_out_module__conv15_NumSharedInsts_30;
    MR_Box hlds__hlds_out__hlds_out_module__conv14_STATE_VARIABLE_IO_90_90;
    MR_Box hlds__hlds_out__hlds_out_module__conv18_NumMostlyUniqInsts_31;
    MR_Box hlds__hlds_out__hlds_out_module__conv17_STATE_VARIABLE_IO_101_101;

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "%-------- Insts --------\n");
    }
    {
      hlds__hlds_data__inst_table_get_user_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__UserInstTable_12);
    }
    {
      hlds__hlds_data__inst_table_get_unify_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__UnifyInstTable_13);
    }
    {
      hlds__hlds_data__inst_table_get_merge_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__MergeInstTable_14);
    }
    {
      hlds__hlds_data__inst_table_get_ground_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__GroundInstTable_15);
    }
    {
      hlds__hlds_data__inst_table_get_any_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__AnyInstTable_16);
    }
    {
      hlds__hlds_data__inst_table_get_shared_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__SharedInstTable_17);
    }
    {
      hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__MostlyUniqInstTable_18);
    }
    {
      mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, hlds__hlds_out__hlds_out_module__UserInstTable_12, &hlds__hlds_out__hlds_out_module__UserInstPairs_19);
    }
    {
      hlds__hlds_data__unify_insts_to_sorted_pairs_2_p_0(hlds__hlds_out__hlds_out_module__UnifyInstTable_13, &hlds__hlds_out__hlds_out_module__UnifyInstPairs_20);
    }
    {
      hlds__hlds_data__merge_insts_to_sorted_pairs_2_p_0(hlds__hlds_out__hlds_out_module__MergeInstTable_14, &hlds__hlds_out__hlds_out_module__MergeInstPairs_21);
    }
    {
      hlds__hlds_data__ground_insts_to_sorted_pairs_2_p_0(hlds__hlds_out__hlds_out_module__GroundInstTable_15, &hlds__hlds_out__hlds_out_module__GroundInstPairs_22);
    }
    {
      hlds__hlds_data__any_insts_to_sorted_pairs_2_p_0(hlds__hlds_out__hlds_out_module__AnyInstTable_16, &hlds__hlds_out__hlds_out_module__AnyInstPairs_23);
    }
    {
      hlds__hlds_data__shared_insts_to_sorted_pairs_2_p_0(hlds__hlds_out__hlds_out_module__SharedInstTable_17, &hlds__hlds_out__hlds_out_module__SharedInstPairs_24);
    }
    {
      hlds__hlds_data__mostly_uniq_insts_to_sorted_pairs_2_p_0(hlds__hlds_out__hlds_out_module__MostlyUniqInstTable_18, &hlds__hlds_out__hlds_out_module__MostlyUniqInstPairs_25);
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "%-------- User defined insts --------\n");
    }
    {
      hlds__hlds_out__hlds_out_module__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_40, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_40, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_40, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Indent_8));
    }
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_115_115 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[2], hlds__hlds_out__hlds_out_module__TypeCtorInfo_115_115, hlds__hlds_out__hlds_out_module__Var_40, hlds__hlds_out__hlds_out_module__UserInstPairs_19, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_41_41);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "%-------- Unify insts --------\n");
    }
    {
      hlds__hlds_out__hlds_out_module__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_44, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_44, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_3));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_44, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_7));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_44, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Limit_9));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_44, 5) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[15]));
    }
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mercury__list__foldl2_6_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[3], hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127, hlds__hlds_out__hlds_out_module__TypeCtorInfo_115_115, hlds__hlds_out__hlds_out_module__Var_44, hlds__hlds_out__hlds_out_module__UnifyInstPairs_20, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv3_NumUnifyInsts_26, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv2_STATE_VARIABLE_IO_46_46);
    }
    hlds__hlds_out__hlds_out_module__NumUnifyInsts_26 = ((MR_Integer) hlds__hlds_out__hlds_out_module__conv3_NumUnifyInsts_26);
    {
      mercury__io__write_string_3_p_0((MR_String) "\nTotal number of unify insts: ");
    }
    hlds__hlds_out__hlds_out_module__Var_191 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_5[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__Var_191, hlds__hlds_out__hlds_out_module__NumUnifyInsts_26, &hlds__hlds_out__hlds_out_module__Var_185);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_185);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "%-------- Merge insts --------\n");
    }
    {
      hlds__hlds_out__hlds_out_module__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_55, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_55, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_5));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_55, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_7));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_55, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Limit_9));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_55, 5) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[16]));
    }
    {
      mercury__list__foldl2_6_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[4], hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127, hlds__hlds_out__hlds_out_module__TypeCtorInfo_115_115, hlds__hlds_out__hlds_out_module__Var_55, hlds__hlds_out__hlds_out_module__MergeInstPairs_21, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv6_NumMergeInsts_27, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv5_STATE_VARIABLE_IO_57_57);
    }
    hlds__hlds_out__hlds_out_module__NumMergeInsts_27 = ((MR_Integer) hlds__hlds_out__hlds_out_module__conv6_NumMergeInsts_27);
    {
      mercury__io__write_string_3_p_0((MR_String) "\nTotal number of merge insts: ");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__Var_191, hlds__hlds_out__hlds_out_module__NumMergeInsts_27, &hlds__hlds_out__hlds_out_module__Var_196);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_196);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "%-------- Ground insts --------\n");
    }
    {
      hlds__hlds_out__hlds_out_module__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_66, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_66, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_7));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_66, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_7));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_66, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Limit_9));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_66, 5) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[17]));
    }
    {
      mercury__list__foldl2_6_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[5], hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127, hlds__hlds_out__hlds_out_module__TypeCtorInfo_115_115, hlds__hlds_out__hlds_out_module__Var_66, hlds__hlds_out__hlds_out_module__GroundInstPairs_22, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv9_NumGroundInsts_28, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv8_STATE_VARIABLE_IO_68_68);
    }
    hlds__hlds_out__hlds_out_module__NumGroundInsts_28 = ((MR_Integer) hlds__hlds_out__hlds_out_module__conv9_NumGroundInsts_28);
    {
      mercury__io__write_string_3_p_0((MR_String) "\nTotal number of ground insts: ");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__Var_191, hlds__hlds_out__hlds_out_module__NumGroundInsts_28, &hlds__hlds_out__hlds_out_module__Var_207);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_207);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "%-------- Any insts --------\n");
    }
    {
      hlds__hlds_out__hlds_out_module__Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_77, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[3]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_77, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_9));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_77, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_7));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_77, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Limit_9));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_77, 5) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[18]));
    }
    {
      mercury__list__foldl2_6_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[6], hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127, hlds__hlds_out__hlds_out_module__TypeCtorInfo_115_115, hlds__hlds_out__hlds_out_module__Var_77, hlds__hlds_out__hlds_out_module__AnyInstPairs_23, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv12_NumAnyInsts_29, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv11_STATE_VARIABLE_IO_79_79);
    }
    hlds__hlds_out__hlds_out_module__NumAnyInsts_29 = ((MR_Integer) hlds__hlds_out__hlds_out_module__conv12_NumAnyInsts_29);
    {
      mercury__io__write_string_3_p_0((MR_String) "\nTotal number of any insts: ");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__Var_191, hlds__hlds_out__hlds_out_module__NumAnyInsts_29, &hlds__hlds_out__hlds_out_module__Var_218);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_218);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "%-------- Shared insts --------\n");
    }
    {
      hlds__hlds_out__hlds_out_module__Var_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_88, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[4]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_88, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_11));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_88, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_88, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_7));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_88, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Limit_9));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_88, 5) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[19]));
    }
    hlds__hlds_out__hlds_out_module__TypeInfo_171_171 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[7];
    {
      mercury__list__foldl2_6_p_2(hlds__hlds_out__hlds_out_module__TypeInfo_171_171, hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127, hlds__hlds_out__hlds_out_module__TypeCtorInfo_115_115, hlds__hlds_out__hlds_out_module__Var_88, hlds__hlds_out__hlds_out_module__SharedInstPairs_24, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv15_NumSharedInsts_30, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv14_STATE_VARIABLE_IO_90_90);
    }
    hlds__hlds_out__hlds_out_module__NumSharedInsts_30 = ((MR_Integer) hlds__hlds_out__hlds_out_module__conv15_NumSharedInsts_30);
    {
      mercury__io__write_string_3_p_0((MR_String) "\nTotal number of shared insts: ");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__Var_191, hlds__hlds_out__hlds_out_module__NumSharedInsts_30, &hlds__hlds_out__hlds_out_module__Var_229);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_229);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "%-------- MostlyUniq insts --------\n");
    }
    {
      hlds__hlds_out__hlds_out_module__Var_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_99, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[4]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_99, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_13));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_99, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_99, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_7));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_99, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Limit_9));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_99, 5) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[20]));
    }
    {
      mercury__list__foldl2_6_p_2(hlds__hlds_out__hlds_out_module__TypeInfo_171_171, hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127, hlds__hlds_out__hlds_out_module__TypeCtorInfo_115_115, hlds__hlds_out__hlds_out_module__Var_99, hlds__hlds_out__hlds_out_module__MostlyUniqInstPairs_25, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv18_NumMostlyUniqInsts_31, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv17_STATE_VARIABLE_IO_101_101);
    }
    hlds__hlds_out__hlds_out_module__NumMostlyUniqInsts_31 = ((MR_Integer) hlds__hlds_out__hlds_out_module__conv18_NumMostlyUniqInsts_31);
    {
      mercury__io__write_string_3_p_0((MR_String) "\nTotal number of mostly uniq insts: ");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__Var_191, hlds__hlds_out__hlds_out_module__NumMostlyUniqInsts_31, &hlds__hlds_out__hlds_out_module__Var_240);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_240);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_methods_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_2,
  MR_Integer hlds__hlds_out__hlds_out_module__STATE_VARIABLE_CurMethodNum_0_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_module__succeeded;

        if ((hlds__hlds_out__hlds_out_module__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_module__Method_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_module__Methods_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__hlds_out__hlds_out_module__PredOrFunc_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Method_11, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_module__MethodName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Method_11, (MR_Integer) 1)));
            MR_Integer hlds__hlds_out__hlds_out_module__Arity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Method_11, (MR_Integer) 3)));
            MR_String hlds__hlds_out__hlds_out_module__Var_33;
            MR_String hlds__hlds_out__hlds_out_module__Var_36;
            MR_String hlds__hlds_out__hlds_out_module__Var_51;
            MR_Word hlds__hlds_out__hlds_out_module__Var_57;
            MR_String hlds__hlds_out__hlds_out_module__Var_67;
            MR_Word hlds__hlds_out__hlds_out_module___Defn_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Method_11, (MR_Integer) 2)));
            MR_Word hlds__hlds_out__hlds_out_module___Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Method_11, (MR_Integer) 4)));

            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_2);
            }
            {
              hlds__hlds_out__hlds_out_module__Var_33 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(hlds__hlds_out__hlds_out_module__PredOrFunc_16);
            }
            {
              hlds__hlds_out__hlds_out_module__Var_36 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_module__MethodName_17);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% method ");
            }
            hlds__hlds_out__hlds_out_module__Var_57 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_5[0];
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__Var_57, hlds__hlds_out__hlds_out_module__STATE_VARIABLE_CurMethodNum_0_3, &hlds__hlds_out__hlds_out_module__Var_51);
            }
            {
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_51);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            {
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_33);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_36);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "/");
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__Var_57, hlds__hlds_out__hlds_out_module__Arity_19, &hlds__hlds_out__hlds_out_module__Var_67);
            }
            {
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_67);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            {
              parse_tree__parse_tree_out__mercury_output_instance_method_3_p_0(hlds__hlds_out__hlds_out_module__Method_11);
            }
            if ((hlds__hlds_out__hlds_out_module__Methods_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                MR_Integer hlds__hlds_out__hlds_out_module__STATE_VARIABLE_CurMethodNum_43_43;

                {
                  mercury__io__write_string_3_p_0((MR_String) ",\n");
                }
                hlds__hlds_out__hlds_out_module__STATE_VARIABLE_CurMethodNum_43_43 = (hlds__hlds_out__hlds_out_module__STATE_VARIABLE_CurMethodNum_0_3 + (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__hlds_out__hlds_out_module__next_value_of_HeadVar__1_1 = hlds__hlds_out__hlds_out_module__Methods_12;
                  MR_Integer hlds__hlds_out__hlds_out_module__next_value_of_STATE_VARIABLE_CurMethodNum_0_3 = hlds__hlds_out__hlds_out_module__STATE_VARIABLE_CurMethodNum_43_43;

                  hlds__hlds_out__hlds_out_module__STATE_VARIABLE_CurMethodNum_0_3 = hlds__hlds_out__hlds_out_module__next_value_of_STATE_VARIABLE_CurMethodNum_0_3;
                  hlds__hlds_out__hlds_out_module__HeadVar__1_1 = hlds__hlds_out__hlds_out_module__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_2(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
  MR_Word hlds__hlds_out__hlds_out_module__InstanceDefn_8)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_90_90;
    MR_Word hlds__hlds_out__hlds_out_module__Types_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_module__OriginalTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 2)));
    MR_Word hlds__hlds_out__hlds_out_module__InstanceStatus_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 3)));
    MR_Word hlds__hlds_out__hlds_out_module__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 4)));
    MR_Word hlds__hlds_out__hlds_out_module__Constraints_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 5)));
    MR_Word hlds__hlds_out__hlds_out_module__Body_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 6)));
    MR_Word hlds__hlds_out__hlds_out_module__MaybePredProcIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 7)));
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 8)));
    MR_Word hlds__hlds_out__hlds_out_module__ProofMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 9)));
    MR_String hlds__hlds_out__hlds_out_module__FileName_20;
    MR_Integer hlds__hlds_out__hlds_out_module__LineNumber_21;
    MR_String hlds__hlds_out__hlds_out_module__DumpOptions_22;
    MR_Word hlds__hlds_out__hlds_out_module__VarNamePrint_23;
    MR_Word hlds__hlds_out__hlds_out_module__PrintTerm_24;
    MR_String hlds__hlds_out__hlds_out_module__Var_56;
    MR_Word hlds__hlds_out__hlds_out_module__Var_63;
    MR_Word hlds__hlds_out__hlds_out_module___InstanceModule_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 0)));
    MR_String hlds__hlds_out__hlds_out_module__Var_80;
    MR_Word hlds__hlds_out__hlds_out_module__Var_81;
    MR_Word hlds__hlds_out__hlds_out_module__Var_82;
    MR_Word hlds__hlds_out__hlds_out_module__Var_83;

    {
      mercury__io__nl_2_p_0();
    }
    {
      mercury__term__context_file_2_p_0(hlds__hlds_out__hlds_out_module__Context_14, &hlds__hlds_out__hlds_out_module__FileName_20);
    }
    {
      mercury__term__context_line_2_p_0(hlds__hlds_out__hlds_out_module__Context_14, &hlds__hlds_out__hlds_out_module__LineNumber_21);
    }
    hlds__hlds_out__hlds_out_module__succeeded = (strcmp(hlds__hlds_out__hlds_out_module__FileName_20, (MR_String) "") == 0);
    if (hlds__hlds_out__hlds_out_module__succeeded)
      {
      }
    else
      {
        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "% context: file \140");
        }
        {
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__FileName_20);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\', line ");
        }
        {
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_module__LineNumber_21);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    hlds__hlds_out__hlds_out_module__DumpOptions_22 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_module__Var_80 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 1)));
    hlds__hlds_out__hlds_out_module__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 2)));
    hlds__hlds_out__hlds_out_module__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 3)));
    hlds__hlds_out__hlds_out_module__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 4)));
    {
      hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_22, (MR_Char) 118);
    }
    if (hlds__hlds_out__hlds_out_module__succeeded)
      hlds__hlds_out__hlds_out_module__VarNamePrint_23 = (MR_Integer) 1;
    else
      hlds__hlds_out__hlds_out_module__VarNamePrint_23 = (MR_Integer) 0;
    {
      hlds__hlds_out__hlds_out_module__PrintTerm_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintTerm_24, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[5]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintTerm_24, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintTerm_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintTerm_24, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__VarSet_18));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintTerm_24, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__VarNamePrint_23));
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% Types: ");
    }
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_90_90 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    {
      mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_90_90, hlds__hlds_out__hlds_out_module__Types_11, (MR_String) ", ", hlds__hlds_out__hlds_out_module__PrintTerm_24);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% Original types: ");
    }
    {
      mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_90_90, hlds__hlds_out__hlds_out_module__OriginalTypes_12, (MR_String) ", ", hlds__hlds_out__hlds_out_module__PrintTerm_24);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% Status: ");
    }
    {
      hlds__hlds_out__hlds_out_module__Var_56 = hlds__hlds_out__hlds_out_util__instance_import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_module__InstanceStatus_13);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_56);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% Constraints: ");
    }
    {
      hlds__hlds_out__hlds_out_module__Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_63, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_63, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_2));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_63, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__VarSet_18));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_63, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__VarNamePrint_23));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_out__hlds_out_module__Constraints_15, (MR_String) ", ", hlds__hlds_out__hlds_out_module__Var_63);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
    if ((hlds__hlds_out__hlds_out_module__Body_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "% abstract");
        }
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_module__Methods_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__Body_16, (MR_Integer) 0)));

        {
          mercury__io__write_string_3_p_0((MR_String) "% Instance methods:\n");
        }
        {
          hlds__hlds_out__hlds_out_module__write_instance_methods_5_p_0(hlds__hlds_out__hlds_out_module__Methods_25, hlds__hlds_out__hlds_out_module__Indent_7, (MR_Integer) 1);
        }
      }
    {
      mercury__io__nl_2_p_0();
    }
    if ((hlds__hlds_out__hlds_out_module__MaybePredProcIds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_module__PredProcIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybePredProcIds_17, (MR_Integer) 0)));

        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "% Procedures: ");
        }
        {
          mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_1[3], ((MR_Box) (hlds__hlds_out__hlds_out_module__PredProcIds_26)));
        }
        {
          mercury__io__nl_2_p_0();
        }
      }
    {
      hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0(hlds__hlds_out__hlds_out_module__VarSet_18, hlds__hlds_out__hlds_out_module__VarNamePrint_23, hlds__hlds_out__hlds_out_module__Indent_7, hlds__hlds_out__hlds_out_module__ProofMap_19);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__ClassId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_module__InstanceDefns_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_module__Var_21;
    MR_Integer hlds__hlds_out__hlds_out_module__Var_23;

    {
      mercury__io__nl_2_p_0();
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% Instances for class ");
    }
    {
      parse_tree__prog_out__write_class_id_3_p_0(hlds__hlds_out__hlds_out_module__ClassId_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ":\n");
    }
    hlds__hlds_out__hlds_out_module__Var_23 = (hlds__hlds_out__hlds_out_module__Indent_7 + (MR_Integer) 1);
    {
      hlds__hlds_out__hlds_out_module__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_21, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_21, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Info_6));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_21, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Var_23));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0, hlds__hlds_out__hlds_out_module__InstanceDefns_9, (MR_String) "\n", hlds__hlds_out__hlds_out_module__Var_21);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instances_5_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instances_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
  MR_Word hlds__hlds_out__hlds_out_module__InstanceTable_8)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__InstanceTableList_10;
    MR_Word hlds__hlds_out__hlds_out_module__Var_17;

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "%-------- Instances --------\n");
    }
    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_1[2], hlds__hlds_out__hlds_out_module__InstanceTable_8, &hlds__hlds_out__hlds_out_module__InstanceTableList_10);
    }
    {
      hlds__hlds_out__hlds_out_module__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_instances_5_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_17, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Info_6));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_17, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Indent_7));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[1], hlds__hlds_out__hlds_out_module__InstanceTableList_10, (MR_String) "\n\n", hlds__hlds_out__hlds_out_module__Var_17);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_proc_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__PredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer hlds__hlds_out__hlds_out_module__ProcId_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer hlds__hlds_out__hlds_out_module__PredInt_7;
    MR_Integer hlds__hlds_out__hlds_out_module__ProcInt_8;

    {
      mercury__io__write_string_3_p_0((MR_String) "proc(pred_id:");
    }
    {
      hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_module__PredId_4, &hlds__hlds_out__hlds_out_module__PredInt_7);
    }
    {
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_module__PredInt_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", proc_id:");
    }
    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_module__ProcId_5, &hlds__hlds_out__hlds_out_module__ProcInt_8);
    }
    {
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_module__ProcInt_8);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_2(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      mercury__io__write_int_3_p_0(((MR_Integer) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      mercury__io__write_int_3_p_0(((MR_Integer) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_23_23;
    MR_Word hlds__hlds_out__hlds_out_module__Domain_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_module__Range_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_module__DomainList_7;
    MR_Word hlds__hlds_out__hlds_out_module__RangeList_8;

    {
      mercury__io__write_char_3_p_0((MR_Char) 40);
    }
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      hlds__hlds_out__hlds_out_module__DomainList_7 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_23_23, hlds__hlds_out__hlds_out_module__Domain_4);
    }
    {
      mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_23_23, hlds__hlds_out__hlds_out_module__DomainList_7, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[13]);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
    {
      hlds__hlds_out__hlds_out_module__RangeList_8 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_23_23, hlds__hlds_out__hlds_out_module__Range_5);
    }
    {
      mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_23_23, hlds__hlds_out__hlds_out_module__RangeList_8, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[14]);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_3(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      hlds__hlds_out__hlds_out_module__write_class_proc_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_2(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__ClassId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_module__ClassDefn_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_module__Constraints_12;
    MR_Word hlds__hlds_out__hlds_out_module__FunDeps_13;
    MR_Word hlds__hlds_out__hlds_out_module__Vars_15;
    MR_Word hlds__hlds_out__hlds_out_module__Interface_18;
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_19;
    MR_Word hlds__hlds_out__hlds_out_module__Context_20;
    MR_String hlds__hlds_out__hlds_out_module__FileName_21;
    MR_Integer hlds__hlds_out__hlds_out_module__LineNumber_22;
    MR_String hlds__hlds_out__hlds_out_module__DumpOptions_23;
    MR_Word hlds__hlds_out__hlds_out_module__VarNamePrint_24;
    MR_Word hlds__hlds_out__hlds_out_module__Var_59;
    MR_Word hlds__hlds_out__hlds_out_module__Var_11;
    MR_Word hlds__hlds_out__hlds_out_module__Var_14;
    MR_Word hlds__hlds_out__hlds_out_module__Var_16;
    MR_Word hlds__hlds_out__hlds_out_module__Var_17;
    MR_String hlds__hlds_out__hlds_out_module__Var_69;
    MR_Word hlds__hlds_out__hlds_out_module__Var_70;
    MR_Word hlds__hlds_out__hlds_out_module__Var_71;
    MR_Word hlds__hlds_out__hlds_out_module__Var_72;

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
    {
      parse_tree__prog_out__write_class_id_3_p_0(hlds__hlds_out__hlds_out_module__ClassId_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ":\n");
    }
    hlds__hlds_out__hlds_out_module__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_module__Constraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 1)));
    hlds__hlds_out__hlds_out_module__FunDeps_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 2)));
    hlds__hlds_out__hlds_out_module__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 3)));
    hlds__hlds_out__hlds_out_module__Vars_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 4)));
    hlds__hlds_out__hlds_out_module__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 5)));
    hlds__hlds_out__hlds_out_module__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 6)));
    hlds__hlds_out__hlds_out_module__Interface_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 7)));
    hlds__hlds_out__hlds_out_module__VarSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 8)));
    hlds__hlds_out__hlds_out_module__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 9)));
    {
      mercury__term__context_file_2_p_0(hlds__hlds_out__hlds_out_module__Context_20, &hlds__hlds_out__hlds_out_module__FileName_21);
    }
    {
      mercury__term__context_line_2_p_0(hlds__hlds_out__hlds_out_module__Context_20, &hlds__hlds_out__hlds_out_module__LineNumber_22);
    }
    hlds__hlds_out__hlds_out_module__succeeded = (strcmp(hlds__hlds_out__hlds_out_module__FileName_21, (MR_String) "") == 0);
    if (hlds__hlds_out__hlds_out_module__succeeded)
      {
      }
    else
      {
        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "% context: file \140");
        }
        {
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__FileName_21);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\', line ");
        }
        {
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_module__LineNumber_22);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    hlds__hlds_out__hlds_out_module__DumpOptions_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_module__Var_69 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 1)));
    hlds__hlds_out__hlds_out_module__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 2)));
    hlds__hlds_out__hlds_out_module__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 3)));
    hlds__hlds_out__hlds_out_module__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 4)));
    {
      hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_23, (MR_Char) 118);
    }
    if (hlds__hlds_out__hlds_out_module__succeeded)
      hlds__hlds_out__hlds_out_module__VarNamePrint_24 = (MR_Integer) 1;
    else
      hlds__hlds_out__hlds_out_module__VarNamePrint_24 = (MR_Integer) 0;
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% Vars: ");
    }
    {
      parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_module__VarSet_19, hlds__hlds_out__hlds_out_module__VarNamePrint_24, hlds__hlds_out__hlds_out_module__Vars_15);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% Functional dependencies: ");
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0, hlds__hlds_out__hlds_out_module__FunDeps_13, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[11]);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% Constraints: ");
    }
    {
      hlds__hlds_out__hlds_out_module__Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_59, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_59, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_2));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_59, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__VarSet_19));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_59, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__VarNamePrint_24));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_out__hlds_out_module__Constraints_12, (MR_String) ", ", hlds__hlds_out__hlds_out_module__Var_59);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% Class Methods: ");
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, hlds__hlds_out__hlds_out_module__Interface_18, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[12]);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_classes_5_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_classes_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
  MR_Word hlds__hlds_out__hlds_out_module__ClassTable_8)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__ClassTableList_10;
    MR_Word hlds__hlds_out__hlds_out_module__Var_17;

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "%-------- Classes --------\n");
    }
    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, hlds__hlds_out__hlds_out_module__ClassTable_8, &hlds__hlds_out__hlds_out_module__ClassTableList_10);
    }
    {
      hlds__hlds_out__hlds_out_module__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_classes_5_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_17, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Info_6));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_17, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Indent_7));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[0], hlds__hlds_out__hlds_out_module__ClassTableList_10, (MR_String) "\n", hlds__hlds_out__hlds_out_module__Var_17);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructors_loop_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3,
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__4_4,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__5_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_module__succeeded;

        if ((hlds__hlds_out__hlds_out_module__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_module__Ctor_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__5_5, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_module__Ctors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__5_5, (MR_Integer) 1)));
            MR_Word hlds__hlds_out__hlds_out_module__Name_42;
            MR_Integer hlds__hlds_out__hlds_out_module__Arity_44;
            MR_Word hlds__hlds_out__hlds_out_module__ConsId_46;
            MR_Word hlds__hlds_out__hlds_out_module__Var_40;
            MR_Word hlds__hlds_out__hlds_out_module__Var_41;
            MR_Word hlds__hlds_out__hlds_out_module___Args_43;
            MR_Word hlds__hlds_out__hlds_out_module__Var_45;
            MR_Word hlds__hlds_out__hlds_out_module__TagValue_47;
            MR_Box hlds__hlds_out__hlds_out_module__conv0_TagValue_47;

            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__HeadVar__4_4);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ";       ");
            }
            {
              parse_tree__parse_tree_out__mercury_output_ctor_4_p_0(hlds__hlds_out__hlds_out_module__HeadVar__1_1, hlds__hlds_out__hlds_out_module__Ctor_19);
            }
            hlds__hlds_out__hlds_out_module__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_19, (MR_Integer) 0)));
            hlds__hlds_out__hlds_out_module__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_19, (MR_Integer) 1)));
            hlds__hlds_out__hlds_out_module__Name_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_19, (MR_Integer) 2)));
            hlds__hlds_out__hlds_out_module___Args_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_19, (MR_Integer) 3)));
            hlds__hlds_out__hlds_out_module__Arity_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_19, (MR_Integer) 4)));
            hlds__hlds_out__hlds_out_module__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_19, (MR_Integer) 5)));
            {
              hlds__hlds_out__hlds_out_module__ConsId_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_46, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Name_42));
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_46, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Arity_44));
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_46, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__HeadVar__2_2));
            }
            {
              hlds__hlds_out__hlds_out_module__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, hlds__hlds_out__hlds_out_module__HeadVar__3_3, ((MR_Box) (hlds__hlds_out__hlds_out_module__ConsId_46)), &hlds__hlds_out__hlds_out_module__conv0_TagValue_47);
            }
            if (hlds__hlds_out__hlds_out_module__succeeded)
              {
                hlds__hlds_out__hlds_out_module__TagValue_47 = ((MR_Word) hlds__hlds_out__hlds_out_module__conv0_TagValue_47);
                hlds__hlds_out__hlds_out_module__succeeded = MR_TRUE;
              }
            if (hlds__hlds_out__hlds_out_module__succeeded)
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "\t% tag: ");
                }
                {
                  mercury__io__print_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__hlds_out__hlds_out_module__TagValue_47)));
                }
              }
            else
              {
              }
            if ((hlds__hlds_out__hlds_out_module__Ctors_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__hlds_out__hlds_out_module__next_value_of_HeadVar__5_5 = hlds__hlds_out__hlds_out_module__Ctors_20;

                  hlds__hlds_out__hlds_out_module__HeadVar__5_5 = hlds__hlds_out__hlds_out_module__next_value_of_HeadVar__5_5;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructors_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__TVarSet_8,
  MR_Word hlds__hlds_out__hlds_out_module__TagValues_9,
  MR_Word hlds__hlds_out__hlds_out_module__TypeCtor_10,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_11,
  MR_Word hlds__hlds_out__hlds_out_module__Ctors_12)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

    if ((hlds__hlds_out__hlds_out_module__Ctors_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_module", (MR_String) "predicate \140hlds.hlds_out.hlds_out_module.write_constructors\'/7", (MR_String) "empty constructor list");
          return;
        }
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_module__HeadCtor_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__Ctors_12, (MR_Integer) 0)));
        MR_Word hlds__hlds_out__hlds_out_module__TailCtors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__Ctors_12, (MR_Integer) 1)));
        MR_Word hlds__hlds_out__hlds_out_module__Name_39;
        MR_Integer hlds__hlds_out__hlds_out_module__Arity_41;
        MR_Word hlds__hlds_out__hlds_out_module__ConsId_43;
        MR_Word hlds__hlds_out__hlds_out_module__Var_37;
        MR_Word hlds__hlds_out__hlds_out_module__Var_38;
        MR_Word hlds__hlds_out__hlds_out_module___Args_40;
        MR_Word hlds__hlds_out__hlds_out_module__Var_42;
        MR_Word hlds__hlds_out__hlds_out_module__TagValue_44;
        MR_Box hlds__hlds_out__hlds_out_module__conv0_TagValue_44;

        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "--->    ");
        }
        {
          parse_tree__parse_tree_out__mercury_output_ctor_4_p_0(hlds__hlds_out__hlds_out_module__TVarSet_8, hlds__hlds_out__hlds_out_module__HeadCtor_14);
        }
        hlds__hlds_out__hlds_out_module__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadCtor_14, (MR_Integer) 0)));
        hlds__hlds_out__hlds_out_module__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadCtor_14, (MR_Integer) 1)));
        hlds__hlds_out__hlds_out_module__Name_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadCtor_14, (MR_Integer) 2)));
        hlds__hlds_out__hlds_out_module___Args_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadCtor_14, (MR_Integer) 3)));
        hlds__hlds_out__hlds_out_module__Arity_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadCtor_14, (MR_Integer) 4)));
        hlds__hlds_out__hlds_out_module__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadCtor_14, (MR_Integer) 5)));
        {
          hlds__hlds_out__hlds_out_module__ConsId_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_43, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Name_39));
          MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_43, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Arity_41));
          MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_43, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__TagValues_9));
        }
        {
          hlds__hlds_out__hlds_out_module__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, hlds__hlds_out__hlds_out_module__TypeCtor_10, ((MR_Box) (hlds__hlds_out__hlds_out_module__ConsId_43)), &hlds__hlds_out__hlds_out_module__conv0_TagValue_44);
        }
        if (hlds__hlds_out__hlds_out_module__succeeded)
          {
            hlds__hlds_out__hlds_out_module__TagValue_44 = ((MR_Word) hlds__hlds_out__hlds_out_module__conv0_TagValue_44);
            hlds__hlds_out__hlds_out_module__succeeded = MR_TRUE;
          }
        if (hlds__hlds_out__hlds_out_module__succeeded)
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "\t% tag: ");
            }
            {
              mercury__io__print_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__hlds_out__hlds_out_module__TagValue_44)));
            }
          }
        else
          {
          }
        if ((hlds__hlds_out__hlds_out_module__TailCtors_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            {
              hlds__hlds_out__hlds_out_module__write_constructors_loop_7_p_0(hlds__hlds_out__hlds_out_module__TVarSet_8, hlds__hlds_out__hlds_out_module__TagValues_9, hlds__hlds_out__hlds_out_module__TypeCtor_10, hlds__hlds_out__hlds_out_module__Indent_11, hlds__hlds_out__hlds_out_module__TailCtors_15);
            }
          }
      }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_body_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Info_8,
  MR_Word hlds__hlds_out__hlds_out_module__TypeCtor_9,
  MR_Word hlds__hlds_out__hlds_out_module__TypeBody_10,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_11,
  MR_Word hlds__hlds_out__hlds_out_module__TVarSet_12)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__TypeBody_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) " == \044foreign_type.\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_out__hlds_out_module__Ctors_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_module__ConsTagMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 1)));
          MR_Word hlds__hlds_out__hlds_out_module__CheaperTagTest_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 2)));
          MR_Word hlds__hlds_out__hlds_out_module__DuTypeKind_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 3)));
          MR_Word hlds__hlds_out__hlds_out_module__MaybeUserEqComp_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 4)));
          MR_Word hlds__hlds_out__hlds_out_module__MaybeDirectArgCtors_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 5)));
          MR_Word hlds__hlds_out__hlds_out_module__ReservedTag_20 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 6)))) & (MR_Integer) 1);
          MR_Word hlds__hlds_out__hlds_out_module__ReservedAddr_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word hlds__hlds_out__hlds_out_module__Foreign_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 7)));
          MR_Word hlds__hlds_out__hlds_out_module__MercInfo_32;
          MR_String hlds__hlds_out__hlds_out_module__Var_119;
          MR_String hlds__hlds_out__hlds_out_module__Var_120;
          MR_Word hlds__hlds_out__hlds_out_module__Var_121;
          MR_Word hlds__hlds_out__hlds_out_module__Var_122;

          if ((hlds__hlds_out__hlds_out_module__CheaperTagTest_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127;
              MR_Word hlds__hlds_out__hlds_out_module__ExpConsId_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__CheaperTagTest_16, (MR_Integer) 0)));
              MR_Word hlds__hlds_out__hlds_out_module__ExpConsTag_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__CheaperTagTest_16, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_module__CheapConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__CheaperTagTest_16, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_module__CheapConsTag_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__CheaperTagTest_16, (MR_Integer) 3)));
              MR_String hlds__hlds_out__hlds_out_module__Var_58;
              MR_String hlds__hlds_out__hlds_out_module__Var_65;

              {
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "/* cheaper tag test: ");
              }
              {
                hlds__hlds_out__hlds_out_module__Var_58 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_module__ExpConsId_23);
              }
              {
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_58);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " tag ");
              }
              hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
              {
                mercury__io__print_3_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127, ((MR_Box) (hlds__hlds_out__hlds_out_module__ExpConsTag_24)));
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " -> ");
              }
              {
                hlds__hlds_out__hlds_out_module__Var_65 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_module__CheapConsId_25);
              }
              {
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_65);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " tag ");
              }
              {
                mercury__io__print_3_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127, ((MR_Box) (hlds__hlds_out__hlds_out_module__CheapConsTag_26)));
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " */\n");
              }
            }
          switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__DuTypeKind_17)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(hlds__hlds_out__hlds_out_module__DuTypeKind_17)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "/* KIND enumeration */\n");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "/* KIND dummy */\n");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "/* KIND general */\n");
                    }
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word hlds__hlds_out__hlds_out_module__Lang_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__DuTypeKind_17, (MR_Integer) 0)));
                MR_String hlds__hlds_out__hlds_out_module__Var_96;

                {
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "/* KIND foreign enumeration for ");
                }
                {
                  hlds__hlds_out__hlds_out_module__Var_96 = libs__globals__foreign_language_string_1_f_0(hlds__hlds_out__hlds_out_module__Lang_27);
                }
                {
                  mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_96);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) " */\n");
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__hlds_out__hlds_out_module__FunctorName_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_module__DuTypeKind_17, (MR_Integer) 0)));
                MR_Word hlds__hlds_out__hlds_out_module__ArgType_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_module__DuTypeKind_17, (MR_Integer) 1)));
                MR_Word hlds__hlds_out__hlds_out_module__MaybeArgName_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_module__DuTypeKind_17, (MR_Integer) 2)));

                {
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "/* KIND notag: ");
                }
                {
                  parse_tree__prog_out__write_sym_name_3_p_0(hlds__hlds_out__hlds_out_module__FunctorName_28);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
                {
                  parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_module__TVarSet_12, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__ArgType_29);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
                if ((hlds__hlds_out__hlds_out_module__MaybeArgName_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "no arg name");
                    }
                  }
                else
                  {
                    MR_String hlds__hlds_out__hlds_out_module__ArgName_31 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeArgName_30, (MR_Integer) 0)));

                    {
                      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__ArgName_31);
                    }
                  }
                {
                  mercury__io__write_string_3_p_0((MR_String) " */\n");
                }
              }
              break;
          }
          switch (hlds__hlds_out__hlds_out_module__ReservedTag_20) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "/* reserved_tag */\n");
                }
              }
              break;
          }
          switch (hlds__hlds_out__hlds_out_module__ReservedAddr_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "/* reserved_address */\n");
                }
              }
              break;
          }
          {
            hlds__hlds_out__hlds_out_module__write_constructors_7_p_0(hlds__hlds_out__hlds_out_module__TVarSet_12, hlds__hlds_out__hlds_out_module__TypeCtor_9, hlds__hlds_out__hlds_out_module__ConsTagMap_15, hlds__hlds_out__hlds_out_module__Indent_11, hlds__hlds_out__hlds_out_module__Ctors_14);
          }
          hlds__hlds_out__hlds_out_module__Var_119 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 0)));
          hlds__hlds_out__hlds_out_module__Var_120 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 1)));
          hlds__hlds_out__hlds_out_module__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 2)));
          hlds__hlds_out__hlds_out_module__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 3)));
          hlds__hlds_out__hlds_out_module__MercInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 4)));
          {
            parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0(hlds__hlds_out__hlds_out_module__MercInfo_32, hlds__hlds_out__hlds_out_module__TVarSet_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_module__MaybeUserEqComp_18, hlds__hlds_out__hlds_out_module__MaybeDirectArgCtors_19);
          }
          if ((hlds__hlds_out__hlds_out_module__Foreign_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              {
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "/* has foreign_type */\n");
              }
            }
          {
            mercury__io__write_string_3_p_0((MR_String) ".\n");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__hlds_out__hlds_out_module__Type_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 0)));

          {
            mercury__io__write_string_3_p_0((MR_String) " == ");
          }
          {
            parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_module__TVarSet_12, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__Type_34);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ".\n");
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__hlds_out__hlds_out_module__SolverTypeDetails_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_module__Var_40;
              MR_Word hlds__hlds_out__hlds_out_module__MaybeUserEqComp_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_module__MercInfo_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 4)));
              MR_String hlds__hlds_out__hlds_out_module__Var_123 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 0)));
              MR_String hlds__hlds_out__hlds_out_module__Var_124 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_module__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_module__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 3)));

              {
                hlds__hlds_out__hlds_out_module__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__Var_40, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_module__SolverTypeDetails_37));
              }
              {
                parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0(hlds__hlds_out__hlds_out_module__MercInfo_118, hlds__hlds_out__hlds_out_module__TVarSet_12, hlds__hlds_out__hlds_out_module__Var_40, hlds__hlds_out__hlds_out_module__MaybeUserEqComp_117, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ".\n");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) ".\n");
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_params_loop_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_module__succeeded;

        if ((hlds__hlds_out__hlds_out_module__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_module__P_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_module__Ps_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 1)));

            {
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            {
              parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__P_10);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_out__hlds_out_module__next_value_of_HeadVar__2_2 = hlds__hlds_out__hlds_out_module__Ps_11;

              hlds__hlds_out__hlds_out_module__HeadVar__2_2 = hlds__hlds_out__hlds_out_module__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_table_entries_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Info_1,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_2,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_module__succeeded;

        if ((hlds__hlds_out__hlds_out_module__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_module__TypeCtor_13;
            MR_Word hlds__hlds_out__hlds_out_module__TypeDefn_14;
            MR_Word hlds__hlds_out__hlds_out_module__Types_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word hlds__hlds_out__hlds_out_module__TVarSet_17;
            MR_Word hlds__hlds_out__hlds_out_module__TypeParams_18;
            MR_Word hlds__hlds_out__hlds_out_module__TypeBody_19;
            MR_Word hlds__hlds_out__hlds_out_module__TypeStatus_20;
            MR_Word hlds__hlds_out__hlds_out_module__Context_21;
            MR_String hlds__hlds_out__hlds_out_module__DumpOptions_22;
            MR_Word hlds__hlds_out__hlds_out_module__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 0)));
            MR_Integer hlds__hlds_out__hlds_out_module__Var_54;
            MR_String hlds__hlds_out__hlds_out_module__Var_58;
            MR_Word hlds__hlds_out__hlds_out_module__Var_59;
            MR_Word hlds__hlds_out__hlds_out_module__Var_60;
            MR_Word hlds__hlds_out__hlds_out_module__Var_61;

            hlds__hlds_out__hlds_out_module__TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_29, (MR_Integer) 0)));
            hlds__hlds_out__hlds_out_module__TypeDefn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_29, (MR_Integer) 1)));
            {
              hlds__hlds_data__get_type_defn_tvarset_2_p_0(hlds__hlds_out__hlds_out_module__TypeDefn_14, &hlds__hlds_out__hlds_out_module__TVarSet_17);
            }
            {
              hlds__hlds_data__get_type_defn_tparams_2_p_0(hlds__hlds_out__hlds_out_module__TypeDefn_14, &hlds__hlds_out__hlds_out_module__TypeParams_18);
            }
            {
              hlds__hlds_data__get_type_defn_body_2_p_0(hlds__hlds_out__hlds_out_module__TypeDefn_14, &hlds__hlds_out__hlds_out_module__TypeBody_19);
            }
            {
              hlds__hlds_data__get_type_defn_status_2_p_0(hlds__hlds_out__hlds_out_module__TypeDefn_14, &hlds__hlds_out__hlds_out_module__TypeStatus_20);
            }
            {
              hlds__hlds_data__get_type_defn_context_2_p_0(hlds__hlds_out__hlds_out_module__TypeDefn_14, &hlds__hlds_out__hlds_out_module__Context_21);
            }
            {
              mercury__io__write_char_3_p_0((MR_Char) 10);
            }
            hlds__hlds_out__hlds_out_module__DumpOptions_22 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_1, (MR_Integer) 0)));
            hlds__hlds_out__hlds_out_module__Var_58 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_1, (MR_Integer) 1)));
            hlds__hlds_out__hlds_out_module__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_1, (MR_Integer) 2)));
            hlds__hlds_out__hlds_out_module__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_1, (MR_Integer) 3)));
            hlds__hlds_out__hlds_out_module__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_1, (MR_Integer) 4)));
            {
              hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_22, (MR_Char) 99);
            }
            if (hlds__hlds_out__hlds_out_module__succeeded)
              {
                MR_String hlds__hlds_out__hlds_out_module__FileName_23;
                MR_Integer hlds__hlds_out__hlds_out_module__LineNumber_24;

                {
                  mercury__term__context_file_2_p_0(hlds__hlds_out__hlds_out_module__Context_21, &hlds__hlds_out__hlds_out_module__FileName_23);
                }
                {
                  mercury__term__context_line_2_p_0(hlds__hlds_out__hlds_out_module__Context_21, &hlds__hlds_out__hlds_out_module__LineNumber_24);
                }
                hlds__hlds_out__hlds_out_module__succeeded = (strcmp(hlds__hlds_out__hlds_out_module__FileName_23, (MR_String) "") == 0);
                if (hlds__hlds_out__hlds_out_module__succeeded)
                  {
                  }
                else
                  {
                    MR_String hlds__hlds_out__hlds_out_module__Var_42;

                    {
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_2);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "% context: file \140");
                    }
                    {
                      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__FileName_23);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\', line ");
                    }
                    {
                      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_module__LineNumber_24);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ", status ");
                    }
                    {
                      hlds__hlds_out__hlds_out_module__Var_42 = hlds__hlds_out__hlds_out_util__type_import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_module__TypeStatus_20);
                    }
                    {
                      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__Var_42);
                    }
                    {
                      mercury__io__write_char_3_p_0((MR_Char) 10);
                    }
                  }
              }
            else
              {
              }
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_2);
            }
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__TypeBody_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__TypeBody_19, (MR_Integer) 0)))) == (MR_Integer) 1))))
              {
                MR_Word hlds__hlds_out__hlds_out_module__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__TypeBody_19, (MR_Integer) 1)));

                hlds__hlds_out__hlds_out_module__succeeded = (hlds__hlds_out__hlds_out_module__Var_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              }
            else
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__TypeBody_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__TypeBody_19, (MR_Integer) 0)))) == (MR_Integer) 0))))
              hlds__hlds_out__hlds_out_module__succeeded = MR_TRUE;
            else
              hlds__hlds_out__hlds_out_module__succeeded = MR_FALSE;
            if (hlds__hlds_out__hlds_out_module__succeeded)
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) ":- solver type ");
                }
              }
            else
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) ":- type ");
                }
              }
            {
              parse_tree__prog_out__write_type_name_3_p_0(hlds__hlds_out__hlds_out_module__TypeCtor_13);
            }
            if ((hlds__hlds_out__hlds_out_module__TypeParams_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                MR_Word hlds__hlds_out__hlds_out_module__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeParams_18, (MR_Integer) 1)));
                MR_Word hlds__hlds_out__hlds_out_module__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeParams_18, (MR_Integer) 0)));

                if ((hlds__hlds_out__hlds_out_module__Var_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
                    {
                      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_module__TVarSet_17, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__Var_96);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                else
                  {
                    MR_Word hlds__hlds_out__hlds_out_module__P_102;
                    MR_Word hlds__hlds_out__hlds_out_module__Ps_103;

                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
                    {
                      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_module__TVarSet_17, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__Var_96);
                    }
                    hlds__hlds_out__hlds_out_module__P_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__Var_95, (MR_Integer) 0)));
                    hlds__hlds_out__hlds_out_module__Ps_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__Var_95, (MR_Integer) 1)));
                    {
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
                    {
                      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_module__TVarSet_17, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__P_102);
                    }
                    {
                      hlds__hlds_out__hlds_out_module__write_type_params_loop_4_p_0(hlds__hlds_out__hlds_out_module__TVarSet_17, hlds__hlds_out__hlds_out_module__Ps_103);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
              }
            hlds__hlds_out__hlds_out_module__Var_54 = (hlds__hlds_out__hlds_out_module__Indent_2 + (MR_Integer) 1);
            {
              hlds__hlds_out__hlds_out_module__write_type_body_7_p_0(hlds__hlds_out__hlds_out_module__Info_1, hlds__hlds_out__hlds_out_module__TypeCtor_13, hlds__hlds_out__hlds_out_module__TypeBody_19, hlds__hlds_out__hlds_out_module__Var_54, hlds__hlds_out__hlds_out_module__TVarSet_17);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_out__hlds_out_module__next_value_of_HeadVar__3_3 = hlds__hlds_out__hlds_out_module__Types_15;

              hlds__hlds_out__hlds_out_module__HeadVar__3_3 = hlds__hlds_out__hlds_out_module__next_value_of_HeadVar__3_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_types_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
  MR_Word hlds__hlds_out__hlds_out_module__TypeTable_8)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__TypeAssocList_10;

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "%-------- Types --------\n");
    }
    {
      hlds__hlds_data__get_all_type_ctor_defns_2_p_0(hlds__hlds_out__hlds_out_module__TypeTable_8, &hlds__hlds_out__hlds_out_module__TypeAssocList_10);
    }
    {
      hlds__hlds_out__hlds_out_module__write_type_table_entries_5_p_0(hlds__hlds_out__hlds_out_module__Info_6, hlds__hlds_out__hlds_out_module__Indent_7, hlds__hlds_out__hlds_out_module__TypeAssocList_10);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_avail_entry_5_p_0(
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_6,
  MR_Word hlds__hlds_out__hlds_out_module__ModuleName_7,
  MR_Word hlds__hlds_out__hlds_out_module__Entry_8)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__Section_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Entry_8, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word hlds__hlds_out__hlds_out_module__ImportOrUse_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Entry_8, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word hlds__hlds_out__hlds_out_module__Avails_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Entry_8, (MR_Integer) 1)));
    MR_String hlds__hlds_out__hlds_out_module__ImportOrUseDecl_13;

    switch (hlds__hlds_out__hlds_out_module__ImportOrUse_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__hlds_out__hlds_out_module__ImportOrUseDecl_13 = (MR_String) ":- import_module ";
        break;
      case (MR_Integer) 1:
        hlds__hlds_out__hlds_out_module__ImportOrUseDecl_13 = (MR_String) ":- use_module ";
        break;
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_6);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__ImportOrUseDecl_13);
    }
    {
      parse_tree__prog_out__write_module_name_3_p_0(hlds__hlds_out__hlds_out_module__ModuleName_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
    {
      mercury__io__write_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0, ((MR_Box) (hlds__hlds_out__hlds_out_module__Section_10)));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_1[1], ((MR_Box) (hlds__hlds_out__hlds_out_module__Avails_12)));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_module__write_promise_13_p_0(
  MR_Word hlds__hlds_out__hlds_out_module__Info_14,
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_15,
  MR_Word hlds__hlds_out__hlds_out_module__VarSet_16,
  MR_Word hlds__hlds_out__hlds_out_module__TypeQual_17,
  MR_Word hlds__hlds_out__hlds_out_module__VarNamePrint_18,
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_19,
  MR_Word hlds__hlds_out__hlds_out_module__PromiseType_20,
  MR_Word hlds__hlds_out__hlds_out_module___PredId_21,
  MR_Word hlds__hlds_out__hlds_out_module___PredOrFunc_22,
  MR_Word hlds__hlds_out__hlds_out_module__HeadVars_23,
  MR_Word hlds__hlds_out__hlds_out_module__Clause_24)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

    {
      hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_56_44_32_57_93_95_48_13_p_0(hlds__hlds_out__hlds_out_module__Info_14, hlds__hlds_out__hlds_out_module__ModuleInfo_15, hlds__hlds_out__hlds_out_module__VarSet_16, hlds__hlds_out__hlds_out_module__TypeQual_17, hlds__hlds_out__hlds_out_module__VarNamePrint_18, hlds__hlds_out__hlds_out_module__Indent_19, hlds__hlds_out__hlds_out_module__PromiseType_20, hlds__hlds_out__hlds_out_module__HeadVars_23, hlds__hlds_out__hlds_out_module__Clause_24);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_hlds_4_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4)
{
  {
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

    {
      hlds__hlds_out__hlds_out_module__write_avail_entry_5_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2));
    }
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_module__write_hlds_4_p_0(
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_5,
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_6)
{
  {
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
    MR_Word hlds__hlds_out__hlds_out_module__Globals_8;
    MR_Word hlds__hlds_out__hlds_out_module__DumpPredIdStrs_9;
    MR_Word hlds__hlds_out__hlds_out_module__DumpPredNames_10;
    MR_Word hlds__hlds_out__hlds_out_module__Info_11;
    MR_String hlds__hlds_out__hlds_out_module__DumpOptions_13;
    MR_Word hlds__hlds_out__hlds_out_module__Name_75;
    MR_Word hlds__hlds_out__hlds_out_module__Name_90;
    MR_String hlds__hlds_out__hlds_out_module__Var_59;
    MR_Word hlds__hlds_out__hlds_out_module__Var_60;
    MR_Word hlds__hlds_out__hlds_out_module__Var_61;
    MR_Word hlds__hlds_out__hlds_out_module__Var_62;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__Globals_8);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(hlds__hlds_out__hlds_out_module__Globals_8, (MR_Integer) 159, &hlds__hlds_out__hlds_out_module__DumpPredIdStrs_9);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(hlds__hlds_out__hlds_out_module__Globals_8, (MR_Integer) 160, &hlds__hlds_out__hlds_out_module__DumpPredNames_10);
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% vim: ts=2 sw=2\n\n");
    }
    {
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__Name_75);
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ":- module ");
    }
    {
      parse_tree__prog_out__write_sym_name_3_p_0(hlds__hlds_out__hlds_out_module__Name_75);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n\n");
    }
    {
      hlds__hlds_out__hlds_out_module__Info_11 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(hlds__hlds_out__hlds_out_module__Globals_8, (MR_Integer) 1);
    }
    hlds__hlds_out__hlds_out_module__DumpOptions_13 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_11, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_module__Var_59 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_11, (MR_Integer) 1)));
    hlds__hlds_out__hlds_out_module__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_11, (MR_Integer) 2)));
    hlds__hlds_out__hlds_out_module__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_11, (MR_Integer) 3)));
    hlds__hlds_out__hlds_out_module__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_11, (MR_Integer) 4)));
    {
      MR_String hlds__hlds_out__hlds_out_module__Var_14;
      MR_Word hlds__hlds_out__hlds_out_module__Var_15;

      hlds__hlds_out__hlds_out_module__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__DumpPredIdStrs_9)) == (MR_mktag((MR_Integer) 1)));
      if (hlds__hlds_out__hlds_out_module__succeeded)
        {
          hlds__hlds_out__hlds_out_module__Var_14 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__DumpPredIdStrs_9, (MR_Integer) 0)));
          hlds__hlds_out__hlds_out_module__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__DumpPredIdStrs_9, (MR_Integer) 1)));
        }
    }
    if (!(hlds__hlds_out__hlds_out_module__succeeded))
      {
        MR_String hlds__hlds_out__hlds_out_module__Var_16;
        MR_Word hlds__hlds_out__hlds_out_module__Var_17;

        hlds__hlds_out__hlds_out_module__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__DumpPredNames_10)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__hlds_out__hlds_out_module__succeeded)
          {
            hlds__hlds_out__hlds_out_module__Var_16 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__DumpPredNames_10, (MR_Integer) 0)));
            hlds__hlds_out__hlds_out_module__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__DumpPredNames_10, (MR_Integer) 1)));
          }
      }
    if (hlds__hlds_out__hlds_out_module__succeeded)
      {
      }
    else
      {
        {
          hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_13, (MR_Char) 73);
        }
        if (hlds__hlds_out__hlds_out_module__succeeded)
          {
            MR_Word hlds__hlds_out__hlds_out_module__AvailModuleMap_18;
            MR_Word hlds__hlds_out__hlds_out_module__Var_37;
            MR_Box hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_38_38;

            {
              hlds__hlds_module__module_info_get_avail_module_map_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__AvailModuleMap_18);
            }
            {
              hlds__hlds_out__hlds_out_module__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_37, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_37, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_hlds_4_p_0_1));
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Var_37, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Indent_5));
            }
            {
              mercury__map__foldl_4_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_out__hlds_out_module__Var_37, hlds__hlds_out__hlds_out_module__AvailModuleMap_18, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_38_38);
            }
          }
        else
          {
          }
        {
          hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_13, (MR_Char) 84);
        }
        if (hlds__hlds_out__hlds_out_module__succeeded)
          {
            MR_Word hlds__hlds_out__hlds_out_module__TypeTable_19;
            MR_Word hlds__hlds_out__hlds_out_module__InstanceTable_20;
            MR_Word hlds__hlds_out__hlds_out_module__ClassTable_21;

            {
              hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__TypeTable_19);
            }
            {
              hlds__hlds_module__module_info_get_instance_table_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__InstanceTable_20);
            }
            {
              hlds__hlds_module__module_info_get_class_table_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__ClassTable_21);
            }
            {
              hlds__hlds_out__hlds_out_module__write_types_5_p_0(hlds__hlds_out__hlds_out_module__Info_11, hlds__hlds_out__hlds_out_module__Indent_5, hlds__hlds_out__hlds_out_module__TypeTable_19);
            }
            {
              hlds__hlds_out__hlds_out_module__write_classes_5_p_0(hlds__hlds_out__hlds_out_module__Info_11, hlds__hlds_out__hlds_out_module__Indent_5, hlds__hlds_out__hlds_out_module__ClassTable_21);
            }
            {
              hlds__hlds_out__hlds_out_module__write_instances_5_p_0(hlds__hlds_out__hlds_out_module__Info_11, hlds__hlds_out__hlds_out_module__Indent_5, hlds__hlds_out__hlds_out_module__InstanceTable_20);
            }
          }
        else
          {
          }
        {
          hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_13, (MR_Char) 77);
        }
        if (hlds__hlds_out__hlds_out_module__succeeded)
          {
            MR_Word hlds__hlds_out__hlds_out_module__InstTable_22;
            MR_Word hlds__hlds_out__hlds_out_module__ModeTable_23;
            MR_Integer hlds__hlds_out__hlds_out_module__InstLimit_24;

            {
              hlds__hlds_module__module_info_get_inst_table_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__InstTable_22);
            }
            {
              hlds__hlds_module__module_info_get_mode_table_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__ModeTable_23);
            }
            {
              libs__globals__lookup_int_option_3_p_0(hlds__hlds_out__hlds_out_module__Globals_8, (MR_Integer) 164, &hlds__hlds_out__hlds_out_module__InstLimit_24);
            }
            {
              hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_module__Indent_5, hlds__hlds_out__hlds_out_module__InstLimit_24, hlds__hlds_out__hlds_out_module__InstTable_22);
            }
            {
              hlds__hlds_out__hlds_out_module__write_mode_table_4_p_0(hlds__hlds_out__hlds_out_module__Indent_5, hlds__hlds_out__hlds_out_module__ModeTable_23);
            }
          }
        else
          {
          }
        {
          hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_13, (MR_Char) 90);
        }
        if (hlds__hlds_out__hlds_out_module__succeeded)
          {
            MR_Word hlds__hlds_out__hlds_out_module__TableStructMap_25;

            {
              hlds__hlds_module__module_info_get_table_struct_map_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__TableStructMap_25);
            }
            {
              hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, hlds__hlds_out__hlds_out_module__TableStructMap_25);
            }
          }
        else
          {
          }
      }
    {
      hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_13, (MR_Char) 88);
    }
    if (hlds__hlds_out__hlds_out_module__succeeded)
      {
        MR_Word hlds__hlds_out__hlds_out_module__ConstStructDb_26;

        {
          hlds__hlds_module__module_info_get_const_struct_db_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__ConstStructDb_26);
        }
        {
          hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0(hlds__hlds_out__hlds_out_module__ConstStructDb_26);
        }
      }
    else
      {
      }
    {
      hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_13, (MR_Char) 120);
    }
    if (hlds__hlds_out__hlds_out_module__succeeded)
      {
        MR_Word hlds__hlds_out__hlds_out_module__PredTable_27;

        {
          hlds__hlds_module__module_info_get_preds_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__PredTable_27);
        }
        {
          hlds__hlds_out__hlds_out_module__write_preds_7_p_0(hlds__hlds_out__hlds_out_module__Info_11, (MR_Integer) 1, hlds__hlds_out__hlds_out_module__Indent_5, hlds__hlds_out__hlds_out_module__ModuleInfo_6, hlds__hlds_out__hlds_out_module__PredTable_27);
        }
      }
    else
      {
      }
    {
      hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_13, (MR_Char) 79);
    }
    if (hlds__hlds_out__hlds_out_module__succeeded)
      {
        MR_Word hlds__hlds_out__hlds_out_module__MaybeDependencyInfo_28;

        {
          hlds__hlds_module__module_info_get_maybe_dependency_info_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__MaybeDependencyInfo_28);
        }
        if ((hlds__hlds_out__hlds_out_module__MaybeDependencyInfo_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% No dependency info\n\n");
            }
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_module__DependencyInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeDependencyInfo_28, (MR_Integer) 0)));

            {
              hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(hlds__hlds_out__hlds_out_module__Indent_5, hlds__hlds_out__hlds_out_module__ModuleInfo_6, hlds__hlds_out__hlds_out_module__DependencyInfo_29);
            }
          }
      }
    else
      {
      }
    {
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__Name_90);
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ":- end_module ");
    }
    {
      parse_tree__prog_out__write_sym_name_3_p_0(hlds__hlds_out__hlds_out_module__Name_90);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
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

/* :- end_module hlds.hlds_out.hlds_out_module. */
